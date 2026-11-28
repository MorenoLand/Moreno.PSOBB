import { connect } from './psobb-webgl.js';

const summary = document.getElementById('summary');
const results = document.getElementById('results');
const report = document.getElementById('report');

const append = (status, text) => {
	const item = document.createElement('li');
	item.className = status;
	item.textContent = text;
	results.append(item);
};

try {
	const { host } = await connect({ assemblyName: 'PsoBB.Rendering.WebGL' });
	const text = host.RunSelfCheck('frame', 128, 96, 4);
	report.textContent = text;
	const lines = text.split('\n').filter((line) => line.length > 0);
	for (const line of lines) {
		const [status, name, detail] = line.split('\t');
		append(status === 'pass' ? 'pass' : 'fail', `${name}${detail ? ` — ${detail}` : ''}`);
	}
	const failures = lines.filter((line) => line.startsWith('fail')).length;
	summary.textContent = failures === 0 ? `${lines.length} checks passed` : `${failures} of ${lines.length} checks failed`;
} catch (error) {
	summary.textContent = 'The WebGL renderer failed to start.';
	append('fail', String(error && error.stack || error));
}
