const MODULE_NAME = 'psobb.platform';
const KEY_SEPARATOR = '\u001f';
const BUTTON_MASK = 0xff;
const WHEEL_NOTCH = 120;
const WHEEL_PIXELS = 100;

const SCAN_CODES = Object.freeze({
	Escape: 0x01,
	Digit1: 0x02, Digit2: 0x03, Digit3: 0x04, Digit4: 0x05, Digit5: 0x06,
	Digit6: 0x07, Digit7: 0x08, Digit8: 0x09, Digit9: 0x0A, Digit0: 0x0B,
	Minus: 0x0C, Equal: 0x0D, Backspace: 0x0E, Tab: 0x0F,
	KeyQ: 0x10, KeyW: 0x11, KeyE: 0x12, KeyR: 0x13, KeyT: 0x14, KeyY: 0x15,
	KeyU: 0x16, KeyI: 0x17, KeyO: 0x18, KeyP: 0x19,
	BracketLeft: 0x1A, BracketRight: 0x1B, Enter: 0x1C, ControlLeft: 0x1D,
	KeyA: 0x1E, KeyS: 0x1F, KeyD: 0x20, KeyF: 0x21, KeyG: 0x22, KeyH: 0x23,
	KeyJ: 0x24, KeyK: 0x25, KeyL: 0x26,
	Semicolon: 0x27, Quote: 0x28, Backquote: 0x29, ShiftLeft: 0x2A, Backslash: 0x2B,
	KeyZ: 0x2C, KeyX: 0x2D, KeyC: 0x2E, KeyV: 0x2F, KeyB: 0x30, KeyN: 0x31,
	KeyM: 0x32, Comma: 0x33, Period: 0x34, Slash: 0x35, ShiftRight: 0x36,
	NumpadMultiply: 0x37, AltLeft: 0x38, Space: 0x39, CapsLock: 0x3A,
	F1: 0x3B, F2: 0x3C, F3: 0x3D, F4: 0x3E, F5: 0x3F, F6: 0x40, F7: 0x41,
	F8: 0x42, F9: 0x43, F10: 0x44, NumLock: 0x45, ScrollLock: 0x46,
	Numpad7: 0x47, Numpad8: 0x48, Numpad9: 0x49, NumpadSubtract: 0x4A,
	Numpad4: 0x4B, Numpad5: 0x4C, Numpad6: 0x4D, NumpadAdd: 0x4E,
	Numpad1: 0x4F, Numpad2: 0x50, Numpad3: 0x51, Numpad0: 0x52, NumpadDecimal: 0x53,
	F11: 0x57, F12: 0x58, NumpadEnter: 0x9C, ControlRight: 0x9D,
	NumpadDivide: 0xB5, PrintScreen: 0xB7, AltRight: 0xB8, Pause: 0xC5,
	Home: 0xC7, ArrowUp: 0xC8, PageUp: 0xC9, ArrowLeft: 0xCB, ArrowRight: 0xCD,
	End: 0xCF, ArrowDown: 0xD0, PageDown: 0xD1, Insert: 0xD2, Delete: 0xD3,
	MetaLeft: 0xDB, MetaRight: 0xDC, ContextMenu: 0xDD,
});

const dataFiles = new Map();
const dataFilePaths = new Map();
const dataDirectories = new Map();
const audioOutputs = new Map();
const audioContexts = new Map();
let audioHandle = 1;
let inputElement = null;
let pointerVisible = true;
let lastPointer = { x: 0, y: 0, valid: false };
let wheelPixels = 0;

function normalizePath(path) {
	return path.replaceAll('\\', '/').replace(/^\/+/, '').toLowerCase();
}

function cleanPath(path) {
	return path.replaceAll('\\', '/').replace(/^\/+/, '');
}

export function addDataFile(path, bytes) {
	const key = normalizePath(path);
	const content = bytes instanceof Uint8Array ? bytes.slice() : bytes instanceof ArrayBuffer ? new Uint8Array(bytes.slice(0)) : Uint8Array.from(bytes);
	dataFiles.set(key, content);
	dataFilePaths.set(key, cleanPath(path));
}

export function addDataDirectory(path) {
	const key = normalizePath(path);
	dataDirectories.set(key, cleanPath(path));
}

export async function loadDataFiles(manifestUrl) {
	const response = await fetch(manifestUrl);
	if (!response.ok)
		throw new Error(`The data manifest ${manifestUrl} returned ${response.status}.`);
	const entries = await response.json();
	for (const [path, url] of Object.entries(entries)) {
		const fileResponse = await fetch(url);
		if (!fileResponse.ok)
			throw new Error(`The data file ${url} returned ${fileResponse.status}.`);
		addDataFile(path, await fileResponse.arrayBuffer());
	}
}

function buildManifest() {
	const lines = [];
	for (const path of dataDirectories.values())
		lines.push(`D ${path}`);
	for (const path of dataFilePaths.values())
		lines.push(`F ${path}`);
	lines.sort();
	return lines.join('\n');
}

function readDataFile(path) {
	const bytes = dataFiles.get(normalizePath(path));
	return bytes === undefined ? null : bytes.slice();
}

function getAudioContext(sampleRate) {
	let context = audioContexts.get(sampleRate);
	if (context === undefined) {
		const Context = globalThis.AudioContext ?? globalThis.webkitAudioContext;
		if (Context === undefined)
			throw new Error('Web Audio is unavailable in this browser.');
		context = new Context({ sampleRate });
		if (Math.abs(context.sampleRate - sampleRate) > 0.5)
			throw new Error(`The browser created a ${context.sampleRate} Hz audio context instead of ${sampleRate} Hz.`);
		audioContexts.set(sampleRate, context);
	}
	return context;
}

function resumeAudio() {
	for (const context of audioContexts.values()) {
		if (context.state === 'suspended')
			context.resume().catch((error) => console.warn('The audio context stayed suspended.', error));
	}
}

function requireAudioOutput(handle) {
	const output = audioOutputs.get(handle);
	if (output === undefined)
		throw new Error(`The audio output ${handle} does not exist.`);
	return output;
}

function readSample(ring, offset, capacityBytes, bitsPerSample) {
	const first = ring[offset];
	if (bitsPerSample === 8)
		return ((first << 24) >> 24) / 128;
	const second = ring[(offset + 1) % capacityBytes];
	if (bitsPerSample === 16)
		return (((first | (second << 8)) << 16) >> 16) / 32768;
	const third = ring[(offset + 2) % capacityBytes];
	if (bitsPerSample === 24)
		return (((first | (second << 8) | (third << 16)) << 8) >> 8) / 8388608;
	const fourth = ring[(offset + 3) % capacityBytes];
	return (first | (second << 8) | (third << 16) | (fourth << 24)) / 2147483648;
}

function renderAudio(output, buffer) {
	const channels = buffer.numberOfChannels;
	if (!output.playing || output.buffered === 0) {
		for (let channel = 0; channel < channels; channel++)
			buffer.getChannelData(channel).fill(0);
		return;
	}
	const frames = buffer.length;
	const framesToPlay = Math.min(frames, Math.floor(output.buffered / output.blockAlign));
	for (let channel = 0; channel < channels; channel++) {
		const target = buffer.getChannelData(channel);
		for (let frame = 0; frame < frames; frame++) {
			if (frame >= framesToPlay) {
				target[frame] = 0;
				continue;
			}
			const offset = (output.readPosition + frame * output.blockAlign + channel * output.bytesPerSample) % output.capacityBytes;
			target[frame] = readSample(output.ring, offset, output.capacityBytes, output.bitsPerSample);
		}
	}
	const consumed = framesToPlay * output.blockAlign;
	output.readPosition = (output.readPosition + consumed) % output.capacityBytes;
	output.buffered -= consumed;
}

function createAudioOutput(sampleRate, channels, bitsPerSample, capacityBytes) {
	const context = getAudioContext(sampleRate);
	const output = {
		context,
		sampleRate,
		channels,
		bitsPerSample,
		bytesPerSample: bitsPerSample / 8,
		blockAlign: channels * (bitsPerSample / 8),
		capacityBytes,
		ring: new Uint8Array(capacityBytes),
		readPosition: 0,
		writePosition: 0,
		buffered: 0,
		playing: false,
		processor: null,
		gain: null,
		source: null,
	};
	const processor = context.createScriptProcessor(4096, channels, channels);
	processor.onaudioprocess = (event) => renderAudio(output, event.outputBuffer);
	const gain = context.createGain();
	gain.gain.value = 1;
	const source = context.createConstantSource();
	source.offset.value = 0;
	source.connect(processor);
	processor.connect(gain);
	gain.connect(context.destination);
	source.start();
	output.processor = processor;
	output.gain = gain;
	output.source = source;
	const handle = audioHandle++;
	audioOutputs.set(handle, output);
	return handle;
}

function writeAudio(handle, pcm) {
	const output = requireAudioOutput(handle);
	const free = output.capacityBytes - output.buffered;
	if (pcm.length > free)
		throw new Error(`A ${pcm.length}-byte write does not fit in ${free} free bytes.`);
	let remaining = pcm.length;
	let source = 0;
	let write = output.writePosition;
	while (remaining > 0) {
		const chunk = Math.min(remaining, output.capacityBytes - write);
		output.ring.set(pcm.subarray(source, source + chunk), write);
		write = (write + chunk) % output.capacityBytes;
		source += chunk;
		remaining -= chunk;
	}
	output.writePosition = write;
	output.buffered += pcm.length;
}

const moduleImports = {
	clock: {
		monotonicMilliseconds: () => performance.now(),
		unixMilliseconds: () => Date.now(),
		localOffsetMinutes: () => -new Date().getTimezoneOffset(),
	},
	storage: {
		getItem: (key) => localStorage.getItem(key),
		setItem: (key, value) => localStorage.setItem(key, value),
		removeItem: (key) => localStorage.removeItem(key),
		keys: () => {
			const keys = [];
			for (let index = 0; index < localStorage.length; index++)
				keys.push(localStorage.key(index));
			return keys.join(KEY_SEPARATOR);
		},
	},
	input: {
		setPointerPosition: (x, y) => { lastPointer = { x, y, valid: true }; },
		setPointerVisible: (visible) => {
			pointerVisible = visible;
			if (inputElement !== null && inputElement.style !== undefined)
				inputElement.style.cursor = visible ? 'default' : 'none';
			if (visible && inputElement !== null && document.pointerLockElement === inputElement)
				document.exitPointerLock();
		},
	},
	data: {
		manifest: buildManifest,
		read: readDataFile,
	},
	audio: {
		create: createAudioOutput,
		freeBytes: (handle) => {
			const output = requireAudioOutput(handle);
			return output.capacityBytes - output.buffered;
		},
		write: writeAudio,
		play: (handle) => {
			const output = requireAudioOutput(handle);
			output.playing = true;
			resumeAudio();
		},
		stop: (handle) => { requireAudioOutput(handle).playing = false; },
		setVolume: (handle, volume) => { requireAudioOutput(handle).gain.gain.value = volume; },
		dispose: (handle) => {
			const output = requireAudioOutput(handle);
			output.playing = false;
			output.processor.onaudioprocess = null;
			output.source.stop();
			output.source.disconnect();
			output.processor.disconnect();
			output.gain.disconnect();
			audioOutputs.delete(handle);
		},
	},
};

let activeDetach = null;

export function attachInput(host, element, options = {}) {
	if (element === undefined || element === null)
		throw new Error('An input element is required.');
	if (activeDetach !== null) {
		const previous = activeDetach;
		activeDetach = null;
		previous();
	}
	inputElement = element ?? null;
	lastPointer = { x: 0, y: 0, valid: false };
	wheelPixels = 0;
	if (inputElement !== null && inputElement.style !== undefined)
		inputElement.style.cursor = pointerVisible ? 'default' : 'none';
	const preventDefault = options.preventDefault !== false;
	const keyEvent = (event, down) => {
		const scanCode = SCAN_CODES[event.code];
		if (scanCode === undefined)
			return;
		if (preventDefault && event.code !== 'Escape')
			event.preventDefault();
		host.PushKey(scanCode, down);
		if (down)
			resumeAudio();
	};
	const pointerMove = (event) => {
		const rect = element.getBoundingClientRect();
		const locked = document.pointerLockElement === element;
		let x = lastPointer.x;
		let y = lastPointer.y;
		let deltaX = 0;
		let deltaY = 0;
		if (locked) {
			deltaX = event.movementX ?? 0;
			deltaY = event.movementY ?? 0;
		} else {
			x = Math.round(event.clientX - rect.left);
			y = Math.round(event.clientY - rect.top);
			if (lastPointer.valid) {
				deltaX = x - lastPointer.x;
				deltaY = y - lastPointer.y;
			}
		}
		lastPointer = { x, y, valid: true };
		host.PushPointerMove(x, y, deltaX, deltaY);
	};
	const pointerDown = (event) => {
		pointerMove(event);
		host.PushPointerButtons(event.buttons & BUTTON_MASK);
		if (!pointerVisible && document.pointerLockElement !== element && element.requestPointerLock !== undefined) {
			try {
				const request = element.requestPointerLock();
				if (request !== undefined && request !== null && typeof request.catch === 'function')
					request.catch((error) => console.warn('Pointer lock was refused.', error));
			} catch (error) {
				console.warn('Pointer lock was refused.', error);
			}
		}
		resumeAudio();
	};
	const pointerUp = (event) => host.PushPointerButtons(event.buttons & BUTTON_MASK);
	const wheel = (event) => {
		event.preventDefault();
		const scale = event.deltaMode === 1 ? WHEEL_PIXELS : event.deltaMode === 2 ? WHEEL_PIXELS * 16 : 1;
		wheelPixels -= event.deltaY * scale;
		const notches = Math.trunc(wheelPixels / WHEEL_PIXELS);
		if (notches !== 0) {
			wheelPixels -= notches * WHEEL_PIXELS;
			host.PushWheel(notches * WHEEL_NOTCH);
		}
	};
	const focusLost = () => host.NotifyFocusLost();
	const visibilityChanged = () => { if (document.hidden) host.NotifyFocusLost(); };
	const contextMenu = (event) => event.preventDefault();
	const keyDown = (event) => keyEvent(event, true);
	const keyUp = (event) => keyEvent(event, false);
	const resume = () => resumeAudio();
	window.addEventListener('keydown', keyDown);
	window.addEventListener('keyup', keyUp);
	window.addEventListener('pointermove', pointerMove);
	window.addEventListener('pointerup', pointerUp);
	window.addEventListener('blur', focusLost);
	window.addEventListener('pointerdown', resume);
	document.addEventListener('visibilitychange', visibilityChanged);
	inputElement.addEventListener('pointerdown', pointerDown);
	inputElement.addEventListener('wheel', wheel, { passive: false });
	inputElement.addEventListener('contextmenu', contextMenu);
	const detach = () => {
		if (activeDetach === detach)
			activeDetach = null;
		window.removeEventListener('keydown', keyDown);
		window.removeEventListener('keyup', keyUp);
		window.removeEventListener('pointermove', pointerMove);
		window.removeEventListener('pointerup', pointerUp);
		window.removeEventListener('blur', focusLost);
		window.removeEventListener('pointerdown', resume);
		document.removeEventListener('visibilitychange', visibilityChanged);
		element.removeEventListener('pointerdown', pointerDown);
		element.removeEventListener('wheel', wheel);
		element.removeEventListener('contextmenu', contextMenu);
		if (inputElement === element)
			inputElement = null;
	};
	activeDetach = detach;
	return detach;
}

export function installModuleImports(runtime) {
	runtime.setModuleImports(MODULE_NAME, moduleImports);
}

export async function connect(options = {}) {
	const dotnetUrl = new URL(options.dotnetUrl ?? '_framework/dotnet.js', document.baseURI).href;
	const { dotnet } = await import(dotnetUrl);
	const runtime = await dotnet.create();
	installModuleImports(runtime);
	const assemblyName = options.assemblyName ?? 'PsoBB.Platform.Web';
	const exports = await runtime.getAssemblyExports(assemblyName);
	const host = exports.PsoBB.Platform.Web.BrowserPlatformHost;
	for (const [path, bytes] of Object.entries(options.data ?? {}))
		addDataFile(path, bytes);
	for (const path of options.directories ?? [])
		addDataDirectory(path);
	if (options.dataManifest)
		await loadDataFiles(options.dataManifest);
	host.Create();
	const canvas = options.canvas ?? document.querySelector('canvas');
	const detach = canvas !== null ? attachInput(host, canvas, options) : null;
	let frame = 0;
	const pump = () => {
		host.Pump();
		frame = requestAnimationFrame(pump);
	};
	if (options.frameLoop !== false)
		frame = requestAnimationFrame(pump);
	return {
		runtime,
		host,
		canvas,
		dispose() {
			cancelAnimationFrame(frame);
			detach?.();
			host.DisposePlatform();
		},
	};
}
