import { connect } from './psobb-platform.js';

const summary = document.getElementById('summary');
const results = document.getElementById('results');

const append = (status, text) => {
	const item = document.createElement('li');
	item.className = status;
	item.textContent = text;
	results.append(item);
};

try {
	const platform = await connect({
		assemblyName: 'PsoBB.Platform.Web',
		canvas: document.getElementById('frame'),
		frameLoop: false,
		data: { 'data/selfcheck.bin': new Uint8Array([1, 2, 3, 4]) },
	});
	platform.host.AddDirectory('selfcheck/host-dir');
	platform.host.AddFile('selfcheck/from-host.bin', new Uint8Array([7, 8, 9, 10]));
	window.dispatchEvent(new KeyboardEvent('keydown', { code: 'NumpadEnter' }));
	platform.canvas.dispatchEvent(new PointerEvent('pointerdown', { buttons: 1, clientX: 64, clientY: 32, cancelable: true }));
	platform.canvas.dispatchEvent(new WheelEvent('wheel', { deltaY: -100, cancelable: true }));
	const lines = platform.host.RunSelfCheck().split('\n').filter((line) => line.length > 0);
	for (const line of lines) {
		const [status, name, detail] = line.split('\t');
		append(status === 'pass' ? 'pass' : 'fail', `${name}${detail && detail !== 'ok' ? ` — ${detail}` : ''}`);
	}
	const failures = lines.filter((line) => line.startsWith('fail')).length;
	summary.textContent = failures === 0 ? `${lines.length} checks passed` : `${failures} of ${lines.length} checks failed`;
} catch (error) {
	summary.textContent = 'The platform failed to start.';
	append('fail', String(error && error.stack || error));
}
