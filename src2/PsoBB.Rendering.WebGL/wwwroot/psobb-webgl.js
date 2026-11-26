const MODULE_NAME = 'psobb.webgl';
const BGRA = 0x80e1;
const TEXTURE_STAGE_COUNT = 8;
const IDENTITY = new Float32Array([1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1]);
const FLOAT_SCRATCH = new DataView(new ArrayBuffer(4));

const renderers = new Map();
const textures = new Map();
let nextRenderer = 1;
let nextTexture = 1;

function asBytes(value) {
	return value instanceof Uint8Array ? value : Uint8Array.from(value);
}

function floatFromBits(value) {
	FLOAT_SCRATCH.setUint32(0, value >>> 0, true);
	return FLOAT_SCRATCH.getFloat32(0, true);
}

function stateValue(renderer, state, fallback) {
	const value = renderer.states.get(state);
	return value === undefined ? fallback : value;
}

function drainErrors(gl) {
	while (gl.getError() !== gl.NO_ERROR) {
	}
}

function findCanvas(canvasId) {
	const canvas = document.getElementById(canvasId) ?? document.querySelector('canvas');
	if (canvas === null)
		throw new Error(`The canvas ${canvasId} does not exist.`);
	return canvas;
}

function requireRenderer(handle) {
	const renderer = renderers.get(handle);
	if (renderer === undefined)
		throw new Error(`The WebGL renderer ${handle} does not exist.`);
	if (renderer.gl.isContextLost())
		throw new Error('The WebGL context was lost.');
	return renderer;
}

function roundUp(value) {
	return (value + 255) & ~255;
}

function compileShader(gl, type, source, label) {
	const shader = gl.createShader(type);
	gl.shaderSource(shader, source);
	gl.compileShader(shader);
	if (!gl.getShaderParameter(shader, gl.COMPILE_STATUS)) {
		const log = gl.getShaderInfoLog(shader) ?? '';
		gl.deleteShader(shader);
		throw new Error(`The ${label} shader did not compile: ${log.trim()}`);
	}
	return shader;
}

const FRAGMENT_SHADER = `#version 300 es
precision highp float;
uniform sampler2D u_texture;
uniform vec4 u_fogColor;
uniform vec4 u_fogParameters;
uniform vec4 u_alphaTest;
in vec4 v_color;
in vec2 v_texcoord;
in float v_fogDepth;
out vec4 fragColor;
void main() {
	vec4 color = v_color * texture(u_texture, v_texcoord);
	if (u_alphaTest.z > 0.5) {
		uint function = uint(u_alphaTest.y);
		bool accepted;
		if (function == 1u) accepted = false;
		else if (function == 2u) accepted = color.a < u_alphaTest.x;
		else if (function == 3u) accepted = color.a == u_alphaTest.x;
		else if (function == 4u) accepted = color.a <= u_alphaTest.x;
		else if (function == 5u) accepted = color.a > u_alphaTest.x;
		else if (function == 6u) accepted = color.a != u_alphaTest.x;
		else if (function == 7u) accepted = color.a >= u_alphaTest.x;
		else accepted = true;
		if (!accepted)
			discard;
	}
	if (u_fogParameters.w > 0.5) {
		float fog;
		if (u_fogParameters.w < 1.5)
			fog = exp(-u_fogParameters.z * v_fogDepth);
		else if (u_fogParameters.w < 2.5) {
			float density = u_fogParameters.z * v_fogDepth;
			fog = exp(-density * density);
		} else
			fog = (u_fogParameters.y - v_fogDepth) / max(u_fogParameters.y - u_fogParameters.x, 0.000001);
		color.rgb = mix(color.rgb, u_fogColor.rgb, clamp(fog, 0.0, 1.0));
	}
	fragColor = color;
}
`;

const PRESENT_VERTEX_SHADER = `#version 300 es
precision highp float;
out vec2 v_uv;
void main() {
	vec2 position;
	vec2 uv;
	if (gl_VertexID == 0) {
		position = vec2(-1.0, -1.0);
		uv = vec2(0.0, 0.0);
	} else if (gl_VertexID == 1) {
		position = vec2(3.0, -1.0);
		uv = vec2(2.0, 0.0);
	} else {
		position = vec2(-1.0, 3.0);
		uv = vec2(0.0, 2.0);
	}
	v_uv = uv;
	gl_Position = vec4(position, 0.0, 1.0);
}
`;

const PRESENT_FRAGMENT_SHADER = `#version 300 es
precision highp float;
uniform sampler2D u_texture;
in vec2 v_uv;
out vec4 fragColor;
void main() {
	fragColor = vec4(texture(u_texture, v_uv).rgb, 1.0);
}
`;


function buildVertexShader(descriptor) {
	const lines = ['#version 300 es', 'precision highp float;'];
	lines.push('uniform mat4 u_world;', 'uniform mat4 u_view;', 'uniform mat4 u_projection;', 'uniform mat4 u_textureTransform0;', 'uniform vec4 u_screenSize;', 'uniform vec4 u_fogRange;');
	lines.push(`in ${descriptor.positionComponents === 4 ? 'vec4' : 'vec3'} a_position;`);
	for (let index = 0; index < descriptor.blendWeightCount; index++)
		lines.push(`in vec4 a_weight${index};`);
	if (descriptor.hasColor)
		lines.push('in vec4 a_color;');
	if (descriptor.hasTextureCoordinate)
		lines.push('in vec4 a_texcoord;');
	lines.push('out vec4 v_color;', 'out vec2 v_texcoord;', 'out float v_fogDepth;');
	lines.push('void main() {');
	lines.push('	vec3 position = a_position.xyz;');
	if (descriptor.blendWeightCount > 0) {
		const weights = [];
		for (let index = 0; index < descriptor.blendWeightCount; index++)
			weights.push(`a_weight${index}.x`);
		lines.push(`	float weightSum = ${weights.join(' + ')};`, '	position *= weightSum;');
	}
	if (descriptor.positionComponents === 4) {
		lines.push('	vec4 clip = vec4(position.x * u_screenSize.z * 2.0 - 1.0, 1.0 - position.y * u_screenSize.w * 2.0, position.z, 1.0);');
		lines.push('	v_fogDepth = 0.0;');
	} else {
		lines.push('	vec4 worldPosition = u_world * vec4(position, 1.0);');
		lines.push('	vec4 viewPosition = u_view * worldPosition;');
		lines.push('	vec4 clip = u_projection * viewPosition;');
		lines.push('	v_fogDepth = u_fogRange.x > 0.5 ? length(viewPosition.xyz) : viewPosition.z;');
	}
	lines.push('	gl_Position = vec4(clip.x, clip.y, clip.z * 2.0 - clip.w, clip.w);');
	lines.push(descriptor.hasColor ? '	v_color = a_color.zyxw;' : '	v_color = vec4(1.0);');
	lines.push(descriptor.hasTextureCoordinate ? '	vec2 texcoord = a_texcoord.xy;' : '	vec2 texcoord = vec2(0.0);');
	lines.push('	vec4 transformed = u_textureTransform0 * vec4(texcoord, 0.0, 1.0);');
	lines.push('	v_texcoord = transformed.xy / (abs(transformed.w) > 0.000001 ? transformed.w : 1.0);');
	lines.push('}');
	return lines.join('\n');
}

function prepareFormat(handle, formatCode, stride, positionComponents, blendWeightCount, packedLastWeight, colorOffset, textureCoordinateOffset, textureCoordinateSize) {
	const renderer = requireRenderer(handle);
	if (positionComponents !== 3 && positionComponents !== 4)
		throw new Error(`The vertex format ${formatCode} has ${positionComponents} position components.`);
	if (blendWeightCount < 0 || blendWeightCount > 5)
		throw new Error(`The vertex format ${formatCode} has ${blendWeightCount} blend weights.`);
	if (stride <= 0)
		throw new Error(`The vertex format ${formatCode} has a ${stride}-byte stride.`);
	const key = `${formatCode}:${stride}`;
	if (renderer.programs.has(key))
		return;
	const descriptor = {
		positionComponents,
		blendWeightCount,
		packedLastWeight,
		hasColor: colorOffset >= 0,
		colorOffset,
		hasTextureCoordinate: textureCoordinateOffset >= 0,
		textureCoordinateOffset,
		textureCoordinateSize,
		stride,
	};
	const attributes = [{ name: 'a_position', size: positionComponents, type: renderer.gl.FLOAT, normalized: false, offset: 0 }];
	for (let index = 0; index < blendWeightCount; index++) {
		const packed = packedLastWeight && index === blendWeightCount - 1;
		attributes.push({ name: `a_weight${index}`, size: packed ? 4 : 1, type: packed ? renderer.gl.UNSIGNED_BYTE : renderer.gl.FLOAT, normalized: packed, offset: positionComponents * 4 + index * 4 });
	}
	if (descriptor.hasColor)
		attributes.push({ name: 'a_color', size: 4, type: renderer.gl.UNSIGNED_BYTE, normalized: true, offset: colorOffset });
	if (descriptor.hasTextureCoordinate) {
		if (textureCoordinateSize < 1 || textureCoordinateSize > 4)
			throw new Error(`The vertex format ${formatCode} has ${textureCoordinateSize} texture components.`);
		attributes.push({ name: 'a_texcoord', size: textureCoordinateSize, type: renderer.gl.FLOAT, normalized: false, offset: textureCoordinateOffset });
	}
	descriptor.attributes = attributes;
	const gl = renderer.gl;
	const vertexShader = compileShader(gl, gl.VERTEX_SHADER, buildVertexShader(descriptor), 'vertex');
	const program = gl.createProgram();
	gl.attachShader(program, vertexShader);
	gl.attachShader(program, renderer.fragmentShader);
	gl.linkProgram(program);
	gl.deleteShader(vertexShader);
	if (!gl.getProgramParameter(program, gl.LINK_STATUS)) {
		const log = gl.getProgramInfoLog(program) ?? '';
		gl.deleteProgram(program);
		throw new Error(`The vertex format ${formatCode} program did not link: ${log.trim()}`);
	}
	const linked = { program, attributes: [], uniforms: {} };
	for (const attribute of attributes) {
		const location = gl.getAttribLocation(program, attribute.name);
		if (location < 0) {
			gl.deleteProgram(program);
			throw new Error(`The ${attribute.name} attribute is missing from the vertex format ${formatCode} program.`);
		}
		linked.attributes.push({ ...attribute, location });
	}
	const uniformNames = ['u_world', 'u_view', 'u_projection', 'u_textureTransform0', 'u_textureTransform1', 'u_textureTransform2', 'u_textureTransform3', 'u_fogColor', 'u_fogParameters', 'u_alphaTest', 'u_screenSize', 'u_fogRange', 'u_texture'];
	for (const name of uniformNames)
		linked.uniforms[name] = gl.getUniformLocation(program, name);
	gl.useProgram(program);
	if (linked.uniforms.u_texture !== null)
		gl.uniform1i(linked.uniforms.u_texture, 0);
	renderer.programs.set(key, linked);
}

function bindTexture(renderer, stage, textureHandle) {
	const gl = renderer.gl;
	let texture = textureHandle === 0 ? (stage === 0 ? renderer.whiteTexture : null) : null;
	if (textureHandle !== 0) {
		const entry = textures.get(textureHandle);
		if (entry === undefined || entry.rendererHandle !== renderer.handle)
			throw new Error(`The texture ${textureHandle} does not belong to the WebGL renderer ${renderer.handle}.`);
		texture = entry.texture;
	}
	if (renderer.boundTextures[stage] === texture)
		return;
	gl.activeTexture(gl.TEXTURE0 + stage);
	gl.bindTexture(gl.TEXTURE_2D, texture);
	renderer.boundTextures[stage] = texture;
	renderer.activeUnit = stage;
}

function withUploadBinding(renderer, texture, action) {
	const gl = renderer.gl;
	gl.activeTexture(gl.TEXTURE0);
	gl.bindTexture(gl.TEXTURE_2D, texture);
	action();
	gl.bindTexture(gl.TEXTURE_2D, renderer.boundTextures[0]);
	renderer.activeUnit = 0;
}

function packRows(pixels, stride, width, height) {
	const tight = width * 4;
	if (stride === tight)
		return pixels;
	if (stride < tight)
		throw new Error(`A ${width}-pixel BGRA row needs at least ${tight} bytes but the stride is ${stride}.`);
	if (pixels.length < stride * height)
		throw new Error(`The texture needs ${stride * height} bytes but only ${pixels.length} were supplied.`);
	const packed = new Uint8Array(tight * height);
	for (let row = 0; row < height; row++)
		packed.set(pixels.subarray(row * stride, row * stride + tight), row * tight);
	return packed;
}

function swizzleBlueRed(pixels) {
	const swizzled = new Uint8Array(pixels.length);
	for (let index = 0; index < pixels.length; index += 4) {
		swizzled[index] = pixels[index + 2];
		swizzled[index + 1] = pixels[index + 1];
		swizzled[index + 2] = pixels[index];
		swizzled[index + 3] = pixels[index + 3];
	}
	return swizzled;
}

function uploadTexture(renderer, texture, width, height, pixels, stride, update) {
	const gl = renderer.gl;
	const bytes = asBytes(pixels);
	if (bytes.length === 0) {
		if (update)
			return;
		gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA8, width, height, 0, gl.RGBA, gl.UNSIGNED_BYTE, null);
		return;
	}
	const packed = packRows(bytes, stride, width, height);
	const source = renderer.bgraSupported ? packed : swizzleBlueRed(packed);
	const format = renderer.bgraSupported ? BGRA : gl.RGBA;
	withUploadBinding(renderer, texture, () => {
		if (update)
			gl.texSubImage2D(gl.TEXTURE_2D, 0, 0, 0, width, height, format, gl.UNSIGNED_BYTE, source);
		else
			gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA8, width, height, 0, format, gl.UNSIGNED_BYTE, source);
	});
}

function createTexture(handle, width, height, pixels, stride) {
	const renderer = requireRenderer(handle);
	if (width <= 0 || height <= 0)
		throw new Error(`A ${width}x${height} texture is invalid.`);
	const gl = renderer.gl;
	const texture = gl.createTexture();
	gl.activeTexture(gl.TEXTURE0);
	gl.bindTexture(gl.TEXTURE_2D, texture);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.REPEAT);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.REPEAT);
	gl.bindTexture(gl.TEXTURE_2D, renderer.boundTextures[0]);
	const id = nextTexture++;
	const entry = { texture, rendererHandle: handle, width, height };
	textures.set(id, entry);
	uploadTexture(renderer, texture, width, height, pixels, stride, false);
	return id;
}

function updateTexture(handle, textureHandle, pixels, stride) {
	const renderer = requireRenderer(handle);
	const entry = textures.get(textureHandle);
	if (entry === undefined || entry.rendererHandle !== handle)
		throw new Error(`The texture ${textureHandle} does not belong to the WebGL renderer ${handle}.`);
	if (pixels.length === 0)
		return;
	uploadTexture(renderer, entry.texture, entry.width, entry.height, pixels, stride, true);
}

function disposeTexture(handle, textureHandle) {
	const entry = textures.get(textureHandle);
	if (entry === undefined)
		return;
	if (entry.rendererHandle !== handle)
		throw new Error(`The texture ${textureHandle} does not belong to the WebGL renderer ${handle}.`);
	const renderer = renderers.get(handle);
	textures.delete(textureHandle);
	if (renderer !== undefined)
		renderer.gl.deleteTexture(entry.texture);
}

function blendFactor(gl, value) {
	switch (value >>> 0) {
		case 1: return gl.ZERO;
		case 2: return gl.ONE;
		case 3: return gl.SRC_COLOR;
		case 4: return gl.ONE_MINUS_SRC_COLOR;
		case 5: return gl.SRC_ALPHA;
		case 6: return gl.ONE_MINUS_SRC_ALPHA;
		case 7: return gl.DST_ALPHA;
		case 8: return gl.ONE_MINUS_DST_ALPHA;
		case 9: return gl.DST_COLOR;
		case 10: return gl.ONE_MINUS_DST_COLOR;
		case 11: return gl.SRC_ALPHA_SATURATE;
		case 12: return gl.SRC_ALPHA;
		case 13: return gl.ONE_MINUS_SRC_ALPHA;
		case 14: return gl.CONSTANT_COLOR;
		case 15: return gl.ONE_MINUS_CONSTANT_COLOR;
		default: return gl.ONE;
	}
}

function blendOperation(gl, value) {
	switch (value >>> 0) {
		case 2: return gl.FUNC_SUBTRACT;
		case 3: return gl.FUNC_REVERSE_SUBTRACT;
		case 4: return gl.MIN;
		case 5: return gl.MAX;
		default: return gl.FUNC_ADD;
	}
}

function comparison(gl, value) {
	switch (value >>> 0) {
		case 1: return gl.NEVER;
		case 2: return gl.LESS;
		case 3: return gl.EQUAL;
		case 4: return gl.LEQUAL;
		case 5: return gl.GREATER;
		case 6: return gl.NOTEQUAL;
		case 7: return gl.GEQUAL;
		default: return gl.ALWAYS;
	}
}

function stencilOperation(gl, value) {
	switch (value >>> 0) {
		case 2: return gl.ZERO;
		case 3: return gl.REPLACE;
		case 4: return gl.INCR_SAT;
		case 5: return gl.DECR_SAT;
		case 6: return gl.INVERT;
		case 7: return gl.INCR;
		case 8: return gl.DECR;
		default: return gl.KEEP;
	}
}

function applyStates(renderer) {
	if (!renderer.stateDirty)
		return;
	renderer.stateDirty = false;
	const gl = renderer.gl;
	const applied = renderer.applied;
	const blendEnabled = stateValue(renderer, 27, 0) >>> 0 !== 0;
	const separateAlpha = stateValue(renderer, 206, 0) >>> 0 !== 0;
	const source = blendFactor(gl, stateValue(renderer, 19, 2));
	const destination = blendFactor(gl, stateValue(renderer, 20, 1));
	const operation = blendOperation(gl, stateValue(renderer, 171, 1));
	const sourceAlpha = blendEnabled && !separateAlpha ? source : blendFactor(gl, stateValue(renderer, 207, 2));
	const destinationAlpha = blendEnabled && !separateAlpha ? destination : blendFactor(gl, stateValue(renderer, 208, 1));
	const operationAlpha = blendEnabled && !separateAlpha ? operation : blendOperation(gl, stateValue(renderer, 209, 1));
	if (applied.blend !== blendEnabled) {
		if (blendEnabled)
			gl.enable(gl.BLEND);
		else
			gl.disable(gl.BLEND);
		applied.blend = blendEnabled;
	}
	if (blendEnabled && (applied.source !== source || applied.destination !== destination || applied.sourceAlpha !== sourceAlpha || applied.destinationAlpha !== destinationAlpha)) {
		gl.blendFuncSeparate(source, destination, sourceAlpha, destinationAlpha);
		applied.source = source;
		applied.destination = destination;
		applied.sourceAlpha = sourceAlpha;
		applied.destinationAlpha = destinationAlpha;
	}
	if (blendEnabled && (applied.operation !== operation || applied.operationAlpha !== operationAlpha)) {
		gl.blendEquationSeparate(operation, operationAlpha);
		applied.operation = operation;
		applied.operationAlpha = operationAlpha;
	}
	const colorMask = stateValue(renderer, 168, 0xF) & 0xF;
	if (applied.colorMask !== colorMask) {
		gl.colorMask((colorMask & 1) !== 0, (colorMask & 2) !== 0, (colorMask & 4) !== 0, (colorMask & 8) !== 0);
		applied.colorMask = colorMask;
	}
	const depthEnabled = stateValue(renderer, 7, 1) >>> 0 !== 0;
	const depthWrite = depthEnabled && stateValue(renderer, 14, 1) >>> 0 !== 0;
	const depthFunction = comparison(gl, stateValue(renderer, 23, 4));
	if (applied.depth !== depthEnabled) {
		if (depthEnabled)
			gl.enable(gl.DEPTH_TEST);
		else
			gl.disable(gl.DEPTH_TEST);
		applied.depth = depthEnabled;
	}
	if (applied.depthMask !== depthWrite) {
		gl.depthMask(depthWrite);
		applied.depthMask = depthWrite;
	}
	if (depthEnabled && applied.depthFunction !== depthFunction) {
		gl.depthFunc(depthFunction);
		applied.depthFunction = depthFunction;
	}
	const cullMode = stateValue(renderer, 22, 3) >>> 0;
	const cullEnabled = cullMode !== 1;
	const cullFace = cullMode === 2 ? gl.BACK : gl.FRONT;
	if (applied.cullEnabled !== cullEnabled) {
		if (cullEnabled)
			gl.enable(gl.CULL_FACE);
		else
			gl.disable(gl.CULL_FACE);
		applied.cullEnabled = cullEnabled;
	}
	if (cullEnabled && applied.cullFace !== cullFace) {
		gl.cullFace(cullFace);
		applied.cullFace = cullFace;
	}
	const stencilEnabled = stateValue(renderer, 52, 0) >>> 0 !== 0;
	if (applied.stencil !== stencilEnabled) {
		if (stencilEnabled)
			gl.enable(gl.STENCIL_TEST);
		else
			gl.disable(gl.STENCIL_TEST);
		applied.stencil = stencilEnabled;
	}
	if (stencilEnabled) {
		const fail = stencilOperation(gl, stateValue(renderer, 53, 1));
		const depthFail = stencilOperation(gl, stateValue(renderer, 54, 1));
		const pass = stencilOperation(gl, stateValue(renderer, 55, 1));
		const functionValue = comparison(gl, stateValue(renderer, 56, 8));
		const reference = stateValue(renderer, 57, 0) >>> 0;
		const readMask = stateValue(renderer, 58, -1) >>> 0 & 0xFF;
		const writeMask = stateValue(renderer, 59, -1) >>> 0 & 0xFF;
		if (applied.stencilFunction !== functionValue || applied.stencilReference !== reference || applied.stencilReadMask !== readMask) {
			gl.stencilFunc(functionValue, reference, readMask);
			applied.stencilFunction = functionValue;
			applied.stencilReference = reference;
			applied.stencilReadMask = readMask;
		}
		if (applied.stencilWriteMask !== writeMask) {
			gl.stencilMask(writeMask);
			applied.stencilWriteMask = writeMask;
		}
		if (applied.stencilFail !== fail || applied.stencilDepthFail !== depthFail || applied.stencilPass !== pass) {
			gl.stencilOpSeparate(gl.FRONT, fail, depthFail, pass);
			gl.stencilOpSeparate(gl.BACK, fail, depthFail, pass);
			applied.stencilFail = fail;
			applied.stencilDepthFail = depthFail;
			applied.stencilPass = pass;
		}
	}
	const scissorEnabled = stateValue(renderer, 174, 0) >>> 0 !== 0;
	if (applied.scissor !== scissorEnabled) {
		if (scissorEnabled)
			gl.enable(gl.SCISSOR_TEST);
		else
			gl.disable(gl.SCISSOR_TEST);
		applied.scissor = scissorEnabled;
	}
	if (scissorEnabled) {
		const viewport = renderer.viewport;
		gl.scissor(viewport.x, renderer.height - viewport.y - viewport.height, viewport.width, viewport.height);
	}
}

function applyUniforms(renderer, linked) {
	const program = linked.program;
	if (!renderer.uniformDirty && renderer.uniformProgram === program)
		return;
	const gl = renderer.gl;
	const uniforms = linked.uniforms;
	const names = ['u_world', 'u_view', 'u_projection', 'u_textureTransform0', 'u_textureTransform1', 'u_textureTransform2', 'u_textureTransform3'];
	for (let index = 0; index < names.length; index++) {
		const location = uniforms[names[index]];
		if (location !== null)
			gl.uniformMatrix4fv(location, false, renderer.transforms[index]);
	}
	if (uniforms.u_screenSize !== null)
		gl.uniform4fv(uniforms.u_screenSize, renderer.screenSize);
	const fogEnabled = stateValue(renderer, 28, 0) >>> 0 !== 0;
	let fogMode = 0;
	if (fogEnabled) {
		fogMode = stateValue(renderer, 35, 0) >>> 0;
		if (fogMode === 0)
			fogMode = stateValue(renderer, 140, 0) >>> 0;
	}
	const fogColor = stateValue(renderer, 34, 0) >>> 0;
	if (uniforms.u_fogColor !== null)
		gl.uniform4f(uniforms.u_fogColor, ((fogColor >>> 16) & 0xFF) / 255, ((fogColor >>> 8) & 0xFF) / 255, (fogColor & 0xFF) / 255, 1);
	if (uniforms.u_fogParameters !== null)
		gl.uniform4f(uniforms.u_fogParameters, floatFromBits(stateValue(renderer, 36, 0)), floatFromBits(stateValue(renderer, 37, 0x3F800000)), floatFromBits(stateValue(renderer, 38, 0x3F800000)), fogMode);
	const alphaTest = stateValue(renderer, 15, 0) >>> 0 !== 0;
	const alphaReference = Math.min(Math.max(stateValue(renderer, 24, 0) >>> 0, 0), 255) / 255;
	if (uniforms.u_alphaTest !== null)
		gl.uniform4f(uniforms.u_alphaTest, alphaReference, stateValue(renderer, 25, 8) >>> 0, alphaTest ? 1 : 0, 0);
	if (uniforms.u_fogRange !== null)
		gl.uniform4f(uniforms.u_fogRange, stateValue(renderer, 48, 0) >>> 0 !== 0 ? 1 : 0, 0, 0, 0);
	renderer.uniformDirty = false;
	renderer.uniformProgram = program;
}

function getVertexCount(primitive, primitiveCount) {
	switch (primitive) {
		case 0: return primitiveCount;
		case 1: return primitiveCount * 2;
		case 2: return primitiveCount + 1;
		case 3: return primitiveCount * 3;
		case 4: return primitiveCount + 2;
		case 5: return primitiveCount + 2;
		default: throw new Error(`The primitive type ${primitive} is unknown.`);
	}
}

function topologyOf(gl, primitive) {
	switch (primitive) {
		case 0: return gl.POINTS;
		case 1: return gl.LINES;
		case 2: return gl.LINE_STRIP;
		case 3: return gl.TRIANGLES;
		case 4: return gl.TRIANGLE_STRIP;
		default: throw new Error(`The primitive type ${primitive} has no array topology.`);
	}
}

function ensureFanIndices(renderer, primitiveCount) {
	if (primitiveCount <= renderer.fanPrimitiveCount)
		return;
	const gl = renderer.gl;
	const indexCount = primitiveCount * 3;
	const capacity = Math.max(256, roundUp(indexCount));
	const indices = new Uint32Array(indexCount);
	for (let index = 0; index < primitiveCount; index++) {
		indices[index * 3] = 0;
		indices[index * 3 + 1] = index + 1;
		indices[index * 3 + 2] = index + 2;
	}
	gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, renderer.indexBuffer);
	if (capacity * 4 > renderer.indexCapacityBytes) {
		renderer.indexCapacityBytes = capacity * 4;
		gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, renderer.indexCapacityBytes, gl.DYNAMIC_DRAW);
	}
	gl.bufferSubData(gl.ELEMENT_ARRAY_BUFFER, 0, indices);
	renderer.fanPrimitiveCount = primitiveCount;
}

function draw(handle, primitive, primitiveCount, vertices, stride, formatCode) {
	const renderer = requireRenderer(handle);
	if (primitiveCount <= 0)
		return;
	const vertexCount = getVertexCount(primitive, primitiveCount);
	const bytes = asBytes(vertices);
	if (bytes.length < vertexCount * stride)
		throw new Error(`The draw needs ${vertexCount * stride} vertex bytes but only ${bytes.length} were supplied.`);
	const linked = renderer.programs.get(`${formatCode}:${stride}`);
	if (linked === undefined)
		throw new Error(`The vertex format ${formatCode} with a ${stride}-byte stride is not prepared.`);
	const gl = renderer.gl;
	gl.useProgram(linked.program);
	gl.bindBuffer(gl.ARRAY_BUFFER, renderer.vertexBuffer);
	const capacity = Math.max(256, roundUp(bytes.length));
	if (capacity > renderer.vertexCapacityBytes) {
		renderer.vertexCapacityBytes = capacity;
		gl.bufferData(gl.ARRAY_BUFFER, capacity, gl.DYNAMIC_DRAW);
	}
	gl.bufferSubData(gl.ARRAY_BUFFER, 0, bytes);
	for (const attribute of linked.attributes) {
		gl.enableVertexAttribArray(attribute.location);
		gl.vertexAttribPointer(attribute.location, attribute.size, attribute.type, attribute.normalized, stride, attribute.offset);
	}
	applyStates(renderer);
	applyUniforms(renderer, linked);
	if (primitive === 5) {
		ensureFanIndices(renderer, primitiveCount);
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, renderer.indexBuffer);
		gl.drawElements(gl.TRIANGLES, primitiveCount * 3, gl.UNSIGNED_INT, 0);
	} else {
		gl.drawArrays(topologyOf(gl, primitive), 0, vertexCount);
	}
}

function prepareClear(renderer) {
	const gl = renderer.gl;
	if (renderer.applied.scissor) {
		gl.disable(gl.SCISSOR_TEST);
		renderer.applied.scissor = false;
	}
	gl.colorMask(true, true, true, true);
	renderer.applied.colorMask = 0xF;
	gl.depthMask(true);
	renderer.applied.depthMask = true;
	gl.stencilMask(0xFF);
	renderer.applied.stencilWriteMask = 0xFF;
	renderer.stateDirty = true;
}

function beginFrame(handle) {
	const renderer = requireRenderer(handle);
	const gl = renderer.gl;
	gl.bindFramebuffer(gl.FRAMEBUFFER, renderer.framebuffer);
	gl.viewport(0, 0, renderer.width, renderer.height);
	renderer.viewport = { x: 0, y: 0, width: renderer.width, height: renderer.height };
	prepareClear(renderer);
	gl.clearDepth(1);
	gl.clearStencil(0);
	gl.clear(gl.DEPTH_BUFFER_BIT | gl.STENCIL_BUFFER_BIT);
}

function present(renderer, texture) {
	const gl = renderer.gl;
	const restore = renderer.boundTextures[0];
	gl.bindFramebuffer(gl.FRAMEBUFFER, null);
	gl.viewport(0, 0, renderer.width, renderer.height);
	gl.disable(gl.DEPTH_TEST);
	gl.disable(gl.BLEND);
	gl.disable(gl.CULL_FACE);
	gl.disable(gl.SCISSOR_TEST);
	gl.colorMask(true, true, true, true);
	gl.depthMask(false);
	gl.useProgram(renderer.presentProgram);
	gl.activeTexture(gl.TEXTURE0);
	gl.bindTexture(gl.TEXTURE_2D, texture);
	gl.drawArrays(gl.TRIANGLES, 0, 3);
	gl.bindTexture(gl.TEXTURE_2D, restore);
	renderer.activeUnit = 0;
	renderer.applied.depth = false;
	renderer.applied.blend = false;
	renderer.applied.cullEnabled = false;
	renderer.applied.scissor = false;
	renderer.applied.colorMask = 0xF;
	renderer.applied.depthMask = false;
	renderer.stateDirty = true;
}

function endFrame(handle) {
	const renderer = requireRenderer(handle);
	const gl = renderer.gl;
	if (renderer.samples > 0) {
		gl.bindFramebuffer(gl.READ_FRAMEBUFFER, renderer.framebuffer);
		gl.bindFramebuffer(gl.DRAW_FRAMEBUFFER, renderer.resolveFramebuffer);
		gl.blitFramebuffer(0, 0, renderer.width, renderer.height, 0, 0, renderer.width, renderer.height, gl.COLOR_BUFFER_BIT, gl.NEAREST);
		gl.bindFramebuffer(gl.FRAMEBUFFER, null);
	}
	present(renderer, renderer.resolveTexture);
	gl.flush();
}

function createResolveTarget(renderer) {
	const gl = renderer.gl;
	const texture = gl.createTexture();
	gl.activeTexture(gl.TEXTURE0);
	gl.bindTexture(gl.TEXTURE_2D, texture);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.NEAREST);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.NEAREST);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
	gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA8, renderer.width, renderer.height, 0, gl.RGBA, gl.UNSIGNED_BYTE, null);
	const framebuffer = gl.createFramebuffer();
	gl.bindFramebuffer(gl.FRAMEBUFFER, framebuffer);
	gl.framebufferTexture2D(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.TEXTURE_2D, texture, 0);
	renderer.resolveTexture = texture;
	renderer.resolveFramebuffer = framebuffer;
	if (gl.checkFramebufferStatus(gl.FRAMEBUFFER) !== gl.FRAMEBUFFER_COMPLETE)
		throw new Error('The browser could not create the resolve texture target.');
	gl.bindFramebuffer(gl.FRAMEBUFFER, null);
	if (renderer.whiteTexture !== undefined) {
		gl.bindTexture(gl.TEXTURE_2D, renderer.whiteTexture);
		renderer.boundTextures[0] = renderer.whiteTexture;
	}
}

function attachDepthBuffer(renderer, samples) {
	const gl = renderer.gl;
	const depthBuffer = gl.createRenderbuffer();
	gl.bindRenderbuffer(gl.RENDERBUFFER, depthBuffer);
	if (samples > 0)
		gl.renderbufferStorageMultisample(gl.RENDERBUFFER, samples, gl.DEPTH24_STENCIL8, renderer.width, renderer.height);
	else
		gl.renderbufferStorage(gl.RENDERBUFFER, gl.DEPTH24_STENCIL8, renderer.width, renderer.height);
	gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.DEPTH_STENCIL_ATTACHMENT, gl.RENDERBUFFER, depthBuffer);
	gl.bindRenderbuffer(gl.RENDERBUFFER, null);
	if (gl.checkFramebufferStatus(gl.FRAMEBUFFER) !== gl.FRAMEBUFFER_COMPLETE) {
		gl.deleteRenderbuffer(depthBuffer);
		throw new Error('The browser could not create the depth-stencil target.');
	}
	return depthBuffer;
}

function tryCreateMultisampleTarget(renderer, samples) {
	const gl = renderer.gl;
	const framebuffer = gl.createFramebuffer();
	const colorBuffer = gl.createRenderbuffer();
	const depthBuffer = gl.createRenderbuffer();
	gl.bindFramebuffer(gl.FRAMEBUFFER, framebuffer);
	gl.bindRenderbuffer(gl.RENDERBUFFER, colorBuffer);
	gl.renderbufferStorageMultisample(gl.RENDERBUFFER, samples, gl.RGBA8, renderer.width, renderer.height);
	gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.RENDERBUFFER, colorBuffer);
	gl.bindRenderbuffer(gl.RENDERBUFFER, depthBuffer);
	gl.renderbufferStorageMultisample(gl.RENDERBUFFER, samples, gl.DEPTH24_STENCIL8, renderer.width, renderer.height);
	gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.DEPTH_STENCIL_ATTACHMENT, gl.RENDERBUFFER, depthBuffer);
	const complete = gl.checkFramebufferStatus(gl.FRAMEBUFFER) === gl.FRAMEBUFFER_COMPLETE;
	gl.bindFramebuffer(gl.FRAMEBUFFER, null);
	gl.bindRenderbuffer(gl.RENDERBUFFER, null);
	if (!complete) {
		drainErrors(gl);
		gl.deleteFramebuffer(framebuffer);
		gl.deleteRenderbuffer(colorBuffer);
		gl.deleteRenderbuffer(depthBuffer);
		return false;
	}
	renderer.framebuffer = framebuffer;
	renderer.colorBuffer = colorBuffer;
	renderer.depthBuffer = depthBuffer;
	renderer.samples = samples;
	return true;
}

function createWhiteTexture(renderer) {
	const gl = renderer.gl;
	const texture = gl.createTexture();
	gl.activeTexture(gl.TEXTURE0);
	gl.bindTexture(gl.TEXTURE_2D, texture);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.REPEAT);
	gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.REPEAT);
	const white = new Uint8Array([255, 255, 255, 255]);
	renderer.bgraSupported = true;
	gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA8, 1, 1, 0, BGRA, gl.UNSIGNED_BYTE, white);
	if (gl.getError() !== gl.NO_ERROR) {
		drainErrors(gl);
		renderer.bgraSupported = false;
		gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA8, 1, 1, 0, gl.RGBA, gl.UNSIGNED_BYTE, white);
		if (gl.getError() !== gl.NO_ERROR)
			throw new Error('The browser does not accept a 1x1 RGBA texture.');
	}
	renderer.whiteTexture = texture;
	renderer.boundTextures[0] = texture;
	renderer.activeUnit = 0;
	return texture;
}

function createPresentProgram(renderer) {
	const gl = renderer.gl;
	const vertexShader = compileShader(gl, gl.VERTEX_SHADER, PRESENT_VERTEX_SHADER, 'present vertex');
	const fragmentShader = compileShader(gl, gl.FRAGMENT_SHADER, PRESENT_FRAGMENT_SHADER, 'present fragment');
	const program = gl.createProgram();
	gl.attachShader(program, vertexShader);
	gl.attachShader(program, fragmentShader);
	gl.linkProgram(program);
	gl.deleteShader(vertexShader);
	gl.deleteShader(fragmentShader);
	if (!gl.getProgramParameter(program, gl.LINK_STATUS)) {
		const log = gl.getProgramInfoLog(program) ?? '';
		gl.deleteProgram(program);
		throw new Error(`The present program did not link: ${log.trim()}`);
	}
	gl.useProgram(program);
	const location = gl.getUniformLocation(program, 'u_texture');
	if (location !== null)
		gl.uniform1i(location, 0);
	renderer.presentProgram = program;
}

function destroyRenderer(renderer) {
	const gl = renderer.gl;
	if (renderer.programs !== undefined) {
		for (const linked of renderer.programs.values())
			gl.deleteProgram(linked.program);
		renderer.programs.clear();
	}
	if (renderer.fragmentShader !== undefined)
		gl.deleteShader(renderer.fragmentShader);
	if (renderer.vertexBuffer !== undefined)
		gl.deleteBuffer(renderer.vertexBuffer);
	if (renderer.indexBuffer !== undefined)
		gl.deleteBuffer(renderer.indexBuffer);
	if (renderer.whiteTexture !== undefined)
		gl.deleteTexture(renderer.whiteTexture);
	if (renderer.resolveTexture !== undefined)
		gl.deleteTexture(renderer.resolveTexture);
	if (renderer.presentProgram !== undefined)
		gl.deleteProgram(renderer.presentProgram);
	if (renderer.framebuffer !== undefined && renderer.framebuffer !== renderer.resolveFramebuffer)
		gl.deleteFramebuffer(renderer.framebuffer);
	if (renderer.resolveFramebuffer !== undefined)
		gl.deleteFramebuffer(renderer.resolveFramebuffer);
	if (renderer.colorBuffer !== undefined)
		gl.deleteRenderbuffer(renderer.colorBuffer);
	if (renderer.depthBuffer !== undefined)
		gl.deleteRenderbuffer(renderer.depthBuffer);
}

const moduleImports = {
	renderer: {
		create: (canvasId, width, height, multisampleCount) => {
			if (width <= 0 || height <= 0)
				throw new Error(`A ${width}x${height} render target is invalid.`);
			const canvas = findCanvas(canvasId);
			const gl = canvas.getContext('webgl2', { alpha: false, depth: true, stencil: true, antialias: false, premultipliedAlpha: false, preserveDrawingBuffer: true, powerPreference: 'high-performance' });
			if (gl === null)
				throw new Error('WebGL 2 is unavailable in this browser.');
			canvas.width = width;
			canvas.height = height;
			const renderer = {
				gl,
				canvas,
				width,
				height,
				samples: 0,
				transforms: Array.from({ length: 7 }, () => new Float32Array(IDENTITY)),
				screenSize: new Float32Array([width, height, 1 / width, 1 / height]),
				states: new Map(),
				stateDirty: true,
				uniformDirty: true,
				uniformProgram: null,
				viewport: { x: 0, y: 0, width, height },
				programs: new Map(),
				boundTextures: new Array(TEXTURE_STAGE_COUNT).fill(null),
				activeUnit: 0,
				vertexCapacityBytes: 0,
				indexCapacityBytes: 0,
				fanPrimitiveCount: 0,
				bgraSupported: true,
				applied: {
					blend: false,
					source: gl.ONE,
					destination: gl.ZERO,
					operation: gl.FUNC_ADD,
					sourceAlpha: gl.ONE,
					destinationAlpha: gl.ZERO,
					operationAlpha: gl.FUNC_ADD,
					colorMask: 0xF,
					depth: true,
					depthMask: true,
					depthFunction: gl.LEQUAL,
					cullEnabled: true,
					cullFace: gl.BACK,
					stencil: false,
					scissor: false,
				},
			};
			gl.disable(gl.DITHER);
			gl.frontFace(gl.CCW);
			gl.cullFace(gl.BACK);
			gl.enable(gl.CULL_FACE);
			gl.disable(gl.BLEND);
			gl.blendEquationSeparate(gl.FUNC_ADD, gl.FUNC_ADD);
			gl.blendFuncSeparate(gl.ONE, gl.ZERO, gl.ONE, gl.ZERO);
			gl.blendColor(1, 1, 1, 1);
			gl.enable(gl.DEPTH_TEST);
			gl.depthFunc(gl.LEQUAL);
			gl.depthMask(true);
			gl.disable(gl.STENCIL_TEST);
			gl.stencilMask(0xFF);
			gl.stencilFunc(gl.ALWAYS, 0, 0xFF);
			gl.stencilOp(gl.KEEP, gl.KEEP, gl.KEEP);
			gl.colorMask(true, true, true, true);
			gl.disable(gl.SCISSOR_TEST);
			gl.pixelStorei(gl.UNPACK_ALIGNMENT, 1);
			gl.pixelStorei(gl.UNPACK_FLIP_Y_WEBGL, true);
			try {
				renderer.fragmentShader = compileShader(gl, gl.FRAGMENT_SHADER, FRAGMENT_SHADER, 'fragment');
				renderer.vertexBuffer = gl.createBuffer();
				renderer.indexBuffer = gl.createBuffer();
				createWhiteTexture(renderer);
				createResolveTarget(renderer);
				createPresentProgram(renderer);
				const maxSamples = gl.getParameter(gl.MAX_SAMPLES) || 0;
				let samples = Math.min(multisampleCount, maxSamples);
				samples = samples >= 8 ? 8 : samples >= 4 ? 4 : samples >= 2 ? 2 : 0;
				while (samples >= 2 && !tryCreateMultisampleTarget(renderer, samples))
					samples = samples >= 4 ? samples / 2 : 0;
				if (samples < 2) {
					renderer.samples = 0;
					renderer.framebuffer = renderer.resolveFramebuffer;
					gl.bindFramebuffer(gl.FRAMEBUFFER, renderer.framebuffer);
					renderer.depthBuffer = attachDepthBuffer(renderer, 0);
					gl.bindFramebuffer(gl.FRAMEBUFFER, null);
				}
			} catch (error) {
				destroyRenderer(renderer);
				throw error;
			}
			const handle = nextRenderer++;
			renderer.handle = handle;
			renderers.set(handle, renderer);
			return handle;
		},
		sampleCount: (handle) => requireRenderer(handle).samples,
		beginFrame,
		setViewport: (handle, x, y, width, height) => {
			if (width < 0 || height < 0)
				throw new Error(`A ${width}x${height} viewport is invalid.`);
			const renderer = requireRenderer(handle);
			renderer.viewport = { x, y, width, height };
			renderer.gl.viewport(x, renderer.height - y - height, width, height);
			renderer.stateDirty = true;
		},
		clear: (handle, argb) => {
			const renderer = requireRenderer(handle);
			const gl = renderer.gl;
			const color = argb >>> 0;
			prepareClear(renderer);
			gl.clearColor(((color >>> 16) & 0xFF) / 255, ((color >>> 8) & 0xFF) / 255, (color & 0xFF) / 255, ((color >>> 24) & 0xFF) / 255);
			gl.clear(gl.COLOR_BUFFER_BIT);
		},
		setTransform: (handle, slot, transform) => {
			const renderer = requireRenderer(handle);
			if (slot < 0 || slot >= 7)
				throw new Error(`The transform slot ${slot} is invalid.`);
			renderer.transforms[slot] = new Float32Array(transform);
			renderer.uniformDirty = true;
		},
		setRenderState: (handle, state, value) => {
			const renderer = requireRenderer(handle);
			const mapped = state >>> 0;
			if (renderer.states.get(mapped) === value)
				return;
			renderer.states.set(mapped, value);
			renderer.stateDirty = true;
			renderer.uniformDirty = true;
		},
		prepareFormat,
		draw,
		endFrame,
		setTexture: (handle, stage, textureHandle) => {
			const renderer = requireRenderer(handle);
			if (stage < 0 || stage >= TEXTURE_STAGE_COUNT)
				throw new Error(`The texture stage ${stage} is invalid.`);
			bindTexture(renderer, stage, textureHandle);
		},
		createTexture,
		updateTexture,
		disposeTexture,
		errorState: (handle) => {
			const renderer = requireRenderer(handle);
			const gl = renderer.gl;
			let error = gl.getError();
			if (error === gl.NO_ERROR)
				return '';
			const names = [];
			while (error !== gl.NO_ERROR && names.length < 16) {
				names.push(glErrorName(gl, error));
				error = gl.getError();
			}
			if (error !== gl.NO_ERROR)
				names.push('more-errors');
			return names.join(',');
		},
		readPixel: (handle, x, y) => {
			const renderer = requireRenderer(handle);
			if (x < 0 || x >= renderer.width || y < 0 || y >= renderer.height)
				throw new Error(`The pixel ${x},${y} is outside the ${renderer.width}x${renderer.height} render target.`);
			const gl = renderer.gl;
			gl.bindFramebuffer(gl.FRAMEBUFFER, null);
			const pixel = new Uint8Array(4);
			gl.readPixels(x, renderer.height - 1 - y, 1, 1, gl.RGBA, gl.UNSIGNED_BYTE, pixel);
			return ((pixel[0] << 24) | (pixel[1] << 16) | (pixel[2] << 8) | pixel[3]) >>> 0;
		},
		dispose: (handle) => {
			const renderer = renderers.get(handle);
			if (renderer === undefined)
				return;
			renderers.delete(handle);
			destroyRenderer(renderer);
			for (const [id, entry] of textures) {
				if (entry.rendererHandle === handle) {
					renderer.gl.deleteTexture(entry.texture);
					textures.delete(id);
				}
			}
		},
	},
};

function glErrorName(gl, error) {
	switch (error) {
		case gl.INVALID_ENUM: return 'INVALID_ENUM';
		case gl.INVALID_VALUE: return 'INVALID_VALUE';
		case gl.INVALID_OPERATION: return 'INVALID_OPERATION';
		case gl.INVALID_FRAMEBUFFER_OPERATION: return 'INVALID_FRAMEBUFFER_OPERATION';
		case gl.OUT_OF_MEMORY: return 'OUT_OF_MEMORY';
		case gl.CONTEXT_LOST_WEBGL: return 'CONTEXT_LOST_WEBGL';
		default: return `0x${error.toString(16)}`;
	}
}

export function installModuleImports(runtime) {
	runtime.setModuleImports(MODULE_NAME, moduleImports);
}

export async function connect(options = {}) {
	const dotnetUrl = new URL(options.dotnetUrl ?? '_framework/dotnet.js', document.baseURI).href;
	const { dotnet } = await import(dotnetUrl);
	const runtime = await dotnet.create();
	installModuleImports(runtime);
	const exports = await runtime.getAssemblyExports(options.assemblyName ?? 'PsoBB.Rendering.WebGL');
	return { runtime, host: exports.PsoBB.Rendering.WebGL.WebGLHost };
}
