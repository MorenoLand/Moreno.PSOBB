import { installModuleImports as installPlatformImports, addDataFile, addDataDirectory, loadDataFiles, attachInput } from './psobb-platform.js';
import { installModuleImports as installWebGLImports } from './psobb-webgl.js';

const DEFAULT_CANVAS = 'frame';
const DEFAULT_WIDTH = 1024;
const DEFAULT_HEIGHT = 768;
const DEFAULT_SAMPLES = 0;
const STATUS_INTERVAL = 30;

const statusElement = document.getElementById('status');
const errorElement = document.getElementById('error');
const setupElement = document.getElementById('setup');
const formElement = document.getElementById('data-form');
const rootElement = document.getElementById('data-root');
const stopButton = document.getElementById('stop');

let activeClient = null;

function describe(error) {
	return error instanceof Error ? error.stack ?? error.message : String(error);
}

function setStatus(text) {
	if (statusElement !== null)
		statusElement.textContent = text;
}

function showError(error) {
	if (errorElement !== null) {
		errorElement.hidden = false;
		errorElement.textContent = describe(error);
	}
	setStatus('The client failed; the error is shown below.');
}

function clearError() {
	if (errorElement !== null) {
		errorElement.hidden = true;
		errorElement.textContent = '';
	}
}

function integer(value, fallback) {
	const parsed = Number.parseInt(value ?? '', 10);
	return Number.isFinite(parsed) ? parsed : fallback;
}

function resolveManifest(root, manifest) {
	if (manifest)
		return new URL(manifest, document.baseURI).href;
	if (!root)
		return null;
	const url = new URL(root, document.baseURI);
	if (url.pathname.toLowerCase().endsWith('.json'))
		return url.href;
	if (!url.pathname.endsWith('/'))
		url.pathname += '/';
	return new URL('manifest.json', url).href;
}

function readConfiguration() {
	const query = new URLSearchParams(window.location.search);
	const configured = window.psobbWeb ?? {};
	return {
		canvasId: query.get('canvas') ?? configured.canvasId ?? DEFAULT_CANVAS,
		width: integer(query.get('width') ?? configured.width, DEFAULT_WIDTH),
		height: integer(query.get('height') ?? configured.height, DEFAULT_HEIGHT),
		multisampleCount: integer(query.get('msaa') ?? configured.multisampleCount, DEFAULT_SAMPLES),
		dataRoot: query.get('data') ?? query.get('root') ?? configured.dataRoot ?? null,
		dataManifest: query.get('manifest') ?? configured.dataManifest ?? null,
		data: configured.data ?? {},
		directories: configured.directories ?? [],
		dotnetUrl: configured.dotnetUrl,
	};
}

export async function startClient(options = {}) {
	if (activeClient !== null)
		throw new Error('The client is already running.');
	const canvasId = options.canvasId ?? DEFAULT_CANVAS;
	const canvas = document.getElementById(canvasId) ?? document.querySelector('canvas');
	if (canvas === null)
		throw new Error(`The canvas ${canvasId} does not exist.`);
	const manifestUrl = resolveManifest(options.dataRoot, options.dataManifest);
	for (const [path, bytes] of Object.entries(options.data ?? {}))
		addDataFile(path, bytes);
	for (const path of options.directories ?? [])
		addDataDirectory(path);
	if (manifestUrl !== null)
		await loadDataFiles(manifestUrl);
	const dataRoot = options.dataRoot ?? (manifestUrl !== null ? new URL('.', manifestUrl).href : 'data');
	const dotnetUrl = new URL(options.dotnetUrl ?? '_framework/dotnet.js', document.baseURI).href;
	const { dotnet } = await import(dotnetUrl);
	const runtime = await dotnet.create();
	installPlatformImports(runtime);
	installWebGLImports(runtime);
	let program;
	try {
		const exports = await runtime.getAssemblyExports('PsoBB.Web');
		program = exports.PsoBB.Web.WebProgram;
		const platformExports = await runtime.getAssemblyExports('PsoBB.Platform.Web');
		const platformHost = platformExports.PsoBB.Platform.Web.BrowserPlatformHost;
		const description = program.Start(canvasId, dataRoot, integer(options.width, DEFAULT_WIDTH), integer(options.height, DEFAULT_HEIGHT), integer(options.multisampleCount, DEFAULT_SAMPLES));
		const detach = attachInput(platformHost, canvas, options);
		let frameCount = 0;
		let animationHandle = 0;
		let running = true;
		let stopping = null;
		const client = {
			runtime,
			program,
			canvas,
			get frameCount() { return frameCount; },
			get running() { return running; },
			stop(message = 'Client stopped.') { return stopClient(message); },
		};
		async function stopClient(message, failure) {
			if (stopping !== null)
				return stopping;
			running = false;
			if (animationHandle !== 0) {
				cancelAnimationFrame(animationHandle);
				animationHandle = 0;
			}
			detach?.();
			stopping = (async () => {
				let shutdownError = null;
				try {
					program.Shutdown();
				} catch (error) {
					shutdownError = error;
				}
				try {
					await runtime.dispose?.();
				} catch (error) {
					shutdownError ??= error;
				}
				activeClient = null;
				setStatus(message);
				if (failure !== undefined)
					showError(failure);
				else if (shutdownError !== null)
					showError(shutdownError);
			})();
			return stopping;
		}
		const tick = () => {
			animationHandle = 0;
			if (!running)
				return;
			try {
				if (program.RunFrame() === 0) {
					void stopClient('The client stopped.');
					return;
				}
				frameCount++;
				if (frameCount === 1 || frameCount % STATUS_INTERVAL === 0)
					setStatus(`Running · frame ${frameCount} · ${description}`);
			} catch (error) {
				void stopClient('A frame failed; the client stopped.', error);
				return;
			}
			animationHandle = requestAnimationFrame(tick);
		};
		activeClient = client;
		window.psobbWebClient = client;
		setStatus(`Running · frame 0 · ${description}`);
		animationHandle = requestAnimationFrame(tick);
		return client;
	} catch (error) {
		try {
			program?.Shutdown();
		} catch {
		}
		try {
			await runtime.dispose?.();
		} catch {
		}
		throw error;
	}
}

function bindPage() {
	const config = readConfiguration();
	const hasDataSource = config.dataRoot !== null || config.dataManifest !== null || Object.keys(config.data).length > 0;
	const begin = async (options) => {
		clearError();
		setStatus('Loading the data root and WebAssembly runtime…');
		if (setupElement !== null)
			setupElement.hidden = true;
		if (stopButton !== null)
			stopButton.hidden = false;
		try {
			await startClient(options);
		} catch (error) {
			showError(error);
			if (setupElement !== null)
				setupElement.hidden = false;
			if (stopButton !== null)
				stopButton.hidden = true;
		}
	};
	if (formElement !== null) {
		formElement.addEventListener('submit', (event) => {
			event.preventDefault();
			const value = rootElement?.value.trim() ?? '';
			if (value.length === 0) {
				showError(new Error('Enter the URL of the data folder.'));
				return;
			}
			void begin({ ...config, dataRoot: value, dataManifest: null });
		});
	}
	if (stopButton !== null) {
		stopButton.addEventListener('click', () => {
			if (activeClient !== null)
				void activeClient.stop('Client stopped.');
		});
	}
	if (hasDataSource) {
		void begin(config);
	} else {
		if (setupElement !== null)
			setupElement.hidden = false;
		if (rootElement !== null)
			rootElement.value = config.dataRoot ?? '';
		setStatus('Waiting for a data folder.');
	}
}

bindPage();
