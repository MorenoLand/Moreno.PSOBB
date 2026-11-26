#include "protos.h"

void f_00529184(void) /* sub_529184 */
{
    FN_ENTER(0x00529184);
    /* 00529184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529185: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00529187: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052918b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052918e: je 0x5291e7 */ if (fZ) goto L_005291e7;
L_00529190:; BB(0x00529190);
    /* 00529190: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00529193: je 0x5291e3 */ if (fZ) goto L_005291e3;
L_00529195:; BB(0x00529195);
    /* 00529195: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529198: je 0x5291bf */ if (fZ) goto L_005291bf;
L_0052919a:; BB(0x0052919a);
    /* 0052919a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052919c: jne 0x5291e3 */ if (!fZ) goto L_005291e3;
L_0052919e:; BB(0x0052919e);
    /* 0052919e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005291a0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5291a5u); f_007aa094();
    /* 005291a5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005291a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005291aa: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5291b0u); call_ind(t); }
    /* 005291b0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005291b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005291b5: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5291bbu); call_ind(t); }
    /* 005291bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005291bc: ret 4 */ FN_RET(0x00529184); r_esp += 8; return;
L_005291bf:; BB(0x005291bf);
    /* 005291bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005291c1: call 0x528ee0 */ r_esp -= 4; W32(r_esp, 0x5291c6u); f_00528ee0();
    /* 005291c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005291c8: jne 0x5291e3 */ if (!fZ) goto L_005291e3;
L_005291ca:; BB(0x005291ca);
    /* 005291ca: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005291cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005291d1: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5291d6u); f_00520ea0();
    /* 005291d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005291d8: je 0x5291e3 */ if (fZ) goto L_005291e3;
L_005291da:; BB(0x005291da);
    /* 005291da: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005291dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005291de: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5291e3u); f_0051f62c();
L_005291e3:; BB(0x005291e3);
    /* 005291e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005291e4: ret 4 */ FN_RET(0x00529184); r_esp += 8; return;
L_005291e7:; BB(0x005291e7);
    /* 005291e7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005291ea: mov eax, 1 */ r_eax = 0x1u;
    /* 005291ef: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005291f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005291f8: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5291feu); call_ind(t); }
    /* 005291fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00529200: call 0x52814c */ r_esp -= 4; W32(r_esp, 0x529205u); f_0052814c();
    /* 00529205: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00529207: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0052920d: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00529210: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 00529216: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00529218: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x52921du); f_0051f664();
    /* 0052921d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052921f: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x529224u); f_00520f68();
    /* 00529224: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529225: ret 4 */ FN_RET(0x00529184); r_esp += 8; return;
}

void f_00529228(void) /* sub_529228 */
{
    FN_ENTER(0x00529228);
    /* 00529228: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529229: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052922b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052922f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529232: je 0x52929b */ if (fZ) goto L_0052929b;
L_00529234:; BB(0x00529234);
    /* 00529234: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00529237: je 0x529297 */ if (fZ) goto L_00529297;
L_00529239:; BB(0x00529239);
    /* 00529239: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052923c: je 0x52927b */ if (fZ) goto L_0052927b;
L_0052923e:; BB(0x0052923e);
    /* 0052923e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529240: jne 0x529263 */ if (!fZ) goto L_00529263;
L_00529242:; BB(0x00529242);
    /* 00529242: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00529244: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x529249u); f_007aa094();
    /* 00529249: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052924c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052924e: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x529254u); call_ind(t); }
    /* 00529254: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00529257: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00529259: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x52925fu); call_ind(t); }
    /* 0052925f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529260: ret 4 */ FN_RET(0x00529228); r_esp += 8; return;
L_00529263:; BB(0x00529263);
    /* 00529263: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00529266: jne 0x529297 */ if (!fZ) goto L_00529297;
L_00529268:; BB(0x00529268);
    /* 00529268: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0052926e: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529271: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 00529277: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529278: ret 4 */ FN_RET(0x00529228); r_esp += 8; return;
L_0052927b:; BB(0x0052927b);
    /* 0052927b: mov eax, dword ptr [ebp + 0x3fc] */ r_eax = R32((u32)(r_ebp+0x3fcu));
    /* 00529281: lea ecx, [ebp + 0x3fc] */ r_ecx = (u32)(r_ebp+0x3fcu);
    /* 00529287: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x52928au); call_ind(t); }
    /* 0052928a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052928c: je 0x529297 */ if (fZ) goto L_00529297;
L_0052928e:; BB(0x0052928e);
    /* 0052928e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00529290: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00529292: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x529297u); f_0051f62c();
L_00529297:; BB(0x00529297);
    /* 00529297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529298: ret 4 */ FN_RET(0x00529228); r_esp += 8; return;
L_0052929b:; BB(0x0052929b);
    /* 0052929b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052929e: mov eax, 1 */ r_eax = 0x1u;
    /* 005292a3: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005292aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005292ac: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x5292b2u); call_ind(t); }
    /* 005292b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005292b4: call 0x52814c */ r_esp -= 4; W32(r_esp, 0x5292b9u); f_0052814c();
    /* 005292b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005292bb: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005292c1: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005292c4: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 005292ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005292cc: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5292d1u); f_0051f664();
    /* 005292d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005292d3: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5292d8u); f_00520f68();
    /* 005292d8: lea ecx, [ebp + 0x3fc] */ r_ecx = (u32)(r_ebp+0x3fcu);
    /* 005292de: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5292e3u); f_00576c48();
    /* 005292e3: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005292e9: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005292ee: je 0x5292fe */ if (fZ) goto L_005292fe;
L_005292f0:; BB(0x005292f0);
    /* 005292f0: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005292f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005292f4: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x5292f9u); f_00578a20();
    /* 005292f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005292fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005292fb: ret 4 */ FN_RET(0x00529228); r_esp += 8; return;
L_005292fe:; BB(0x005292fe);
    /* 005292fe: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00529301: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529302: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x529307u); f_0057895c();
    /* 00529307: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529309: ret 4 */ FN_RET(0x00529228); r_esp += 8; return;
}

void f_0052930c(void)
{
    FN_ENTER(0x0052930c);
    /* 0052930c: call 0x52a41c */ r_esp -= 4; W32(r_esp, 0x529311u); f_0052a41c();
    /* 00529311: mov ecx, dword ptr [0xa72fc0] */ r_ecx = R32((u32)(0xa72fc0u));
    /* 00529317: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529319: je 0x52932e */ if (fZ) goto L_0052932e;
L_0052931b:; BB(0x0052931b);
    /* 0052931b: je 0x529324 */ if (fZ) goto L_00529324;
L_0052931d:; BB(0x0052931d);
    /* 0052931d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052931f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x529324u); f_004066a8();
L_00529324:; BB(0x00529324);
    /* 00529324: mov dword ptr [0xa72fc0], 0 */ W32((u32)(0xa72fc0u), 0x0u);
L_0052932e:; BB(0x0052932e);
    /* 0052932e: ret  */ FN_RET(0x0052930c); r_esp += 4; return;
}

void f_00529330(void)
{
    FN_ENTER(0x00529330);
    /* 00529330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529331: mov ebp, esp */ r_ebp = r_esp;
    /* 00529333: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00529335: push 0x8d4b10 */ { u32 v = 0x8d4b10u; r_esp -= 4; W32(r_esp, v); }
    /* 0052933a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00529340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529341: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00529348: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052934b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052934e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00529351: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00529354: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00529357: push 0x434 */ { u32 v = 0x434u; r_esp -= 4; W32(r_esp, v); }
    /* 0052935c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00529363: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x529368u); f_005caba4();
    /* 00529368: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529369: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052936c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052936e: je 0x5293a7 */ if (fZ) goto L_005293a7;
L_00529370:; BB(0x00529370);
    /* 00529370: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00529377: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052937e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529381: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529387: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052938a: call 0x5293ac */ r_esp -= 4; W32(r_esp, 0x52938fu); f_005293ac();
    /* 0052938f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529392: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00529399:; BB(0x00529399);
    /* 00529399: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052939c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005293a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005293a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005293a6: ret  */ FN_RET(0x00529330); r_esp += 4; return;
L_005293a7:; BB(0x005293a7);
    /* 005293a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005293a9: jmp 0x529399 */ goto L_00529399;
}

void f_005293ac(void) /* sub_5293AC */
{
    FN_ENTER(0x005293ac);
    /* 005293ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005293ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005293af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005293b1: push 0x8d4b40 */ { u32 v = 0x8d4b40u; r_esp -= 4; W32(r_esp, v); }
    /* 005293b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005293bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005293bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005293c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005293c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005293ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005293cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005293d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005293d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005293d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005293d9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005293dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005293df: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x5293e4u); f_005216f4();
    /* 005293e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005293eb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005293ee: mov dword ptr [ecx], 0xb00fe0 */ W32((u32)(r_ecx), 0xb00fe0u);
    /* 005293f4: add ecx, 0x3fc */ {  u32 a = r_ecx; u32 b = 0x3fcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005293fa: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5293ffu); f_00576a48();
    /* 005293ff: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00529406: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529409: mov eax, dword ptr [0x9bc338] */ r_eax = R32((u32)(0x9bc338u));
    /* 0052940e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00529411: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00529412: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00529415: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x52941au); f_0051f750();
    /* 0052941a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052941d: mov dword ptr [eax + 0x3cc], 0 */ W32((u32)(r_eax+0x3ccu), 0x0u);
    /* 00529427: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x52942cu); f_00807ac0();
    /* 0052942c: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052942f: jne 0x529447 */ if (!fZ) goto L_00529447;
L_00529431:; BB(0x00529431);
    /* 00529431: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529434: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0052943a: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052943f: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 00529445: jmp 0x52946d */ goto L_0052946d;
L_00529447:; BB(0x00529447);
    /* 00529447: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052944a: movsx edx, word ptr [eax + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
    /* 0052944e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052944f: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x529454u); f_00813038();
    /* 00529454: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529455: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052945a: je 0x52946d */ if (fZ) goto L_0052946d;
L_0052945c:; BB(0x0052945c);
    /* 0052945c: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 00529462: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00529467: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
L_0052946d:; BB(0x0052946d);
    /* 0052946d: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x529472u); f_00521840();
    /* 00529472: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529475: mov ebx, dword ptr [0xa72fc0] */ r_ebx = R32((u32)(0xa72fc0u));
    /* 0052947b: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00529481: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00529484: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0052948a: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0052948d: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00529493: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00529496: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00529499: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052949e: je 0x5294ae */ if (fZ) goto L_005294ae;
L_005294a0:; BB(0x005294a0);
    /* 005294a0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005294a2: push 0x9bc220 */ { u32 v = 0x9bc220u; r_esp -= 4; W32(r_esp, v); }
    /* 005294a7: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x5294acu); f_0051ff3c();
    /* 005294ac: jmp 0x5294ba */ goto L_005294ba;
L_005294ae:; BB(0x005294ae);
    /* 005294ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005294b0: push 0x9bc1c0 */ { u32 v = 0x9bc1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005294b5: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x5294bau); f_0051ff3c();
L_005294ba:; BB(0x005294ba);
    /* 005294ba: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005294bd: mov eax, dword ptr [0xa72fc0] */ r_eax = R32((u32)(0xa72fc0u));
    /* 005294c2: mov dword ptr [ecx + 0xd8], 0x9bc280 */ W32((u32)(r_ecx+0xd8u), 0x9bc280u);
    /* 005294cc: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005294d2: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005294d8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005294dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005294de: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005294e5: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5294eau); f_007aa4c8();
    /* 005294ea: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005294ed: movzx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)R16((u32)(r_ebx+0xb8u));
    /* 005294f4: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 005294fa: mov ecx, dword ptr [ebx + 0x3cc] */ r_ecx = R32((u32)(r_ebx+0x3ccu));
    /* 00529500: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00529507: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052950a: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 00529510: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529516: je 0x52951f */ if (fZ) goto L_0052951f;
L_00529518:; BB(0x00529518);
    /* 00529518: mov edi, 2 */ r_edi = 0x2u;
    /* 0052951d: jmp 0x529533 */ goto L_00529533;
L_0052951f:; BB(0x0052951f);
    /* 0052951f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529521: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x529526u); f_005296e4();
    /* 00529526: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529528: je 0x529531 */ if (fZ) goto L_00529531;
L_0052952a:; BB(0x0052952a);
    /* 0052952a: mov edi, 1 */ r_edi = 0x1u;
    /* 0052952f: jmp 0x529533 */ goto L_00529533;
L_00529531:; BB(0x00529531);
    /* 00529531: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00529533:; BB(0x00529533);
    /* 00529533: push dword ptr [edi*4 + 0x922014] */ { u32 v = R32((u32)(r_edi*4+0x922014u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052953a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x52953fu); f_0077a684();
    /* 0052953f: mov esi, eax */ r_esi = r_eax;
    /* 00529541: push dword ptr [edi*4 + 0x922008] */ { u32 v = R32((u32)(r_edi*4+0x922008u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529548: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x52954du); f_0077a698();
    /* 0052954d: mov ebx, eax */ r_ebx = r_eax;
    /* 0052954f: push dword ptr [edi*4 + 0x921ffc] */ { u32 v = R32((u32)(r_edi*4+0x921ffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00529556: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x52955bu); f_0077a6b4();
    /* 0052955b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052955e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529562: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529563: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00529564: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x529569u); f_00520c70();
    /* 00529569: push dword ptr [edi*4 + 0x921ff0] */ { u32 v = R32((u32)(r_edi*4+0x921ff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529570: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x529575u); f_0077a6cc();
    /* 00529575: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529576: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529579: mov dword ptr [0xa72fc4], eax */ W32((u32)(0xa72fc4u), r_eax);
    /* 0052957e: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 00529584: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529589: je 0x529592 */ if (fZ) goto L_00529592;
L_0052958b:; BB(0x0052958b);
    /* 0052958b: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x529590u); f_00520380();
    /* 00529590: jmp 0x529597 */ goto L_00529597;
L_00529592:; BB(0x00529592);
    /* 00529592: call 0x520360 */ r_esp -= 4; W32(r_esp, 0x529597u); f_00520360();
L_00529597:; BB(0x00529597);
    /* 00529597: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052959a: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 005295a0: mov dword ptr [ebx + 0x358], 0x9bc33c */ W32((u32)(r_ebx+0x358u), 0x9bc33cu);
    /* 005295aa: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005295af: je 0x5295bc */ if (fZ) goto L_005295bc;
L_005295b1:; BB(0x005295b1);
    /* 005295b1: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005295b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005295b5: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5295bau); f_00520390();
    /* 005295ba: jmp 0x5295db */ goto L_005295db;
L_005295bc:; BB(0x005295bc);
    /* 005295bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005295be: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x5295c3u); f_005296e4();
    /* 005295c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005295c5: je 0x5295d2 */ if (fZ) goto L_005295d2;
L_005295c7:; BB(0x005295c7);
    /* 005295c7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005295c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005295cb: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5295d0u); f_00520390();
    /* 005295d0: jmp 0x5295db */ goto L_005295db;
L_005295d2:; BB(0x005295d2);
    /* 005295d2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005295d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005295d6: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5295dbu); f_00520390();
L_005295db:; BB(0x005295db);
    /* 005295db: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005295de: mov dword ptr [ecx + 0x384], 0x40a00000 */ W32((u32)(r_ecx+0x384u), 0x40a00000u);
    /* 005295e8: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005295ea: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5295efu); f_00521820();
    /* 005295ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005295f2: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005295f4: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5295f9u); f_005217fc();
    /* 005295f9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005295fc: fld dword ptr [0x922020] */ FPUSH(R_F32((u32)(0x922020u)));
    /* 00529602: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 00529605: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00529608: mov ebx, dword ptr [edi + 0x38] */ r_ebx = R32((u32)(r_edi+0x38u));
    /* 0052960b: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 0052960e: fst dword ptr [edi + 0x3e8] */ W_F32((u32)(r_edi+0x3e8u), ST(0));
    /* 00529614: fstp dword ptr [edi + 0x3f4] */ W_F32((u32)(r_edi+0x3f4u), ST(0)); FPOP();
    /* 0052961a: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00529620: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 00529626: mov dword ptr [edi + 0x3d0], 0 */ W32((u32)(r_edi+0x3d0u), 0x0u);
    /* 00529630: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00529632: mov dword ptr [edi + 0x3d4], edx */ W32((u32)(r_edi+0x3d4u), r_edx);
    /* 00529638: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 0052963e: mov dword ptr [edi + 0x3dc], edx */ W32((u32)(r_edi+0x3dcu), r_edx);
    /* 00529644: mov dword ptr [edi + 0x3e0], edx */ W32((u32)(r_edi+0x3e0u), r_edx);
    /* 0052964a: mov dword ptr [edi + 0x3e4], ebx */ W32((u32)(r_edi+0x3e4u), r_ebx);
    /* 00529650: mov dword ptr [edi + 0x3ec], esi */ W32((u32)(r_edi+0x3ecu), r_esi);
    /* 00529656: mov dword ptr [edi + 0x3f0], ebx */ W32((u32)(r_edi+0x3f0u), r_ebx);
    /* 0052965c: mov dword ptr [edi + 0x3f8], esi */ W32((u32)(r_edi+0x3f8u), r_esi);
    /* 00529662: lea ecx, [edi + 0x3fc] */ r_ecx = (u32)(r_edi+0x3fcu);
    /* 00529668: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x52966bu); call_ind(t); }
    /* 0052966b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052966e: mov dword ptr [ecx + 0x42c], 0 */ W32((u32)(r_ecx+0x42cu), 0x0u);
    /* 00529678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052967a: mov dword ptr [ecx + 0x418], eax */ W32((u32)(r_ecx+0x418u), r_eax);
    /* 00529680: mov dword ptr [ecx + 0x41c], eax */ W32((u32)(r_ecx+0x41cu), r_eax);
    /* 00529686: mov dword ptr [ecx + 0x420], eax */ W32((u32)(r_ecx+0x420u), r_eax);
    /* 0052968c: mov dword ptr [ecx + 0x424], eax */ W32((u32)(r_ecx+0x424u), r_eax);
    /* 00529692: mov dword ptr [ecx + 0x428], eax */ W32((u32)(r_ecx+0x428u), r_eax);
    /* 00529698: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 0052969e: call 0x529704 */ r_esp -= 4; W32(r_esp, 0x5296a3u); f_00529704();
    /* 005296a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005296a6: call 0x529730 */ r_esp -= 4; W32(r_esp, 0x5296abu); f_00529730();
    /* 005296ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005296ae: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x5296b3u); f_0051ffdc();
    /* 005296b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005296b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005296b8: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005296bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005296c1: call 0x5738b0 */ r_esp -= 4; W32(r_esp, 0x5296c6u); f_005738b0();
    /* 005296c6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005296c9: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005296cc: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005296cf: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005296d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005296d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005296dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005296de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005296df: ret 8 */ FN_RET(0x005293ac); r_esp += 12; return;
}

void f_005296e4(void) /* sub_5296E4 */
{
    FN_ENTER(0x005296e4);
    /* 005296e4: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 005296ea: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005296ef: jne 0x5296ff */ if (!fZ) goto L_005296ff;
L_005296f1:; BB(0x005296f1);
    /* 005296f1: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005296f6: mov eax, 0 */ r_eax = 0x0u;
    /* 005296fb: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005296fe: ret  */ FN_RET(0x005296e4); r_esp += 4; return;
L_005296ff:; BB(0x005296ff);
    /* 005296ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529701: ret  */ FN_RET(0x005296e4); r_esp += 4; return;
}

void f_00529704(void) /* sub_529704 */
{
    FN_ENTER(0x00529704);
    /* 00529704: fld dword ptr [0x921fec] */ FPUSH(R_F32((u32)(0x921fecu)));
    /* 0052970a: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0052970d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00529710: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00529713: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 00529719: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0052971c: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00529722: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00529728: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0052972b: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0052972e: ret  */ FN_RET(0x00529704); r_esp += 4; return;
}

void f_00529730(void) /* sub_529730 */
{
    FN_ENTER(0x00529730);
    /* 00529730: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529732: fld dword ptr [ecx + 0x304] */ FPUSH(R_F32((u32)(r_ecx+0x304u)));
    /* 00529738: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 0052973b: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00529741: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00529744: lea edx, [ecx + 0x3e4] */ r_edx = (u32)(r_ecx+0x3e4u);
    /* 0052974a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052974b: call 0x520068 */ r_esp -= 4; W32(r_esp, 0x529750u); f_00520068();
    /* 00529750: ret  */ FN_RET(0x00529730); r_esp += 4; return;
}

void f_00529754(void) /* sub_529754 */
{
    FN_ENTER(0x00529754);
    /* 00529754: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00529755: mov edi, ecx */ r_edi = r_ecx;
    /* 00529757: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x52975cu); f_004f7c84();
    /* 0052975c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052975e: je 0x52976c */ if (fZ) goto L_0052976c;
L_00529760:; BB(0x00529760);
    /* 00529760: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00529762: mov ecx, edi */ r_ecx = r_edi;
    /* 00529764: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x52976au); call_ind(t); }
    /* 0052976a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052976b: ret  */ FN_RET(0x00529754); r_esp += 4; return;
L_0052976c:; BB(0x0052976c);
    /* 0052976c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052976e: mov ecx, edi */ r_ecx = r_edi;
    /* 00529770: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x529776u); call_ind(t); }
    /* 00529776: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529779: je 0x529787 */ if (fZ) goto L_00529787;
L_0052977b:; BB(0x0052977b);
    /* 0052977b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052977d: mov ecx, edi */ r_ecx = r_edi;
    /* 0052977f: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x529785u); call_ind(t); }
    /* 00529785: jmp 0x5297af */ goto L_005297af;
L_00529787:; BB(0x00529787);
    /* 00529787: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0052978e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529790: je 0x529797 */ if (fZ) goto L_00529797;
L_00529792:; BB(0x00529792);
    /* 00529792: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529795: jne 0x5297af */ if (!fZ) goto L_005297af;
L_00529797:; BB(0x00529797);
    /* 00529797: mov eax, dword ptr [edi + 0x3fc] */ r_eax = R32((u32)(r_edi+0x3fcu));
    /* 0052979d: lea ecx, [edi + 0x3fc] */ r_ecx = (u32)(r_edi+0x3fcu);
    /* 005297a3: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5297a6u); call_ind(t); }
    /* 005297a6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005297a8: mov ecx, edi */ r_ecx = r_edi;
    /* 005297aa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5297afu); f_0051f62c();
L_005297af:; BB(0x005297af);
    /* 005297af: mov ecx, edi */ r_ecx = r_edi;
    /* 005297b1: call 0x529704 */ r_esp -= 4; W32(r_esp, 0x5297b6u); f_00529704();
    /* 005297b6: mov ecx, edi */ r_ecx = r_edi;
    /* 005297b8: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x5297bdu); f_006401f0();
    /* 005297bd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005297bf: mov ecx, edi */ r_ecx = r_edi;
    /* 005297c1: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x5297c7u); call_ind(t); }
    /* 005297c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005297c8: ret  */ FN_RET(0x00529754); r_esp += 4; return;
}

void f_005297cc(void) /* sub_5297CC */
{
    FN_ENTER(0x005297cc);
    /* 005297cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005297cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005297ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005297cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005297d0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005297d3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005297d5: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5297dau); f_004f7c84();
    /* 005297da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005297dc: jne 0x529ab7 */ if (!fZ) goto L_00529ab7;
L_005297e2:; BB(0x005297e2);
    /* 005297e2: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005297e9: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005297ec: je 0x529aaf */ if (fZ) goto L_00529aaf;
L_005297f2:; BB(0x005297f2);
    /* 005297f2: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x5297f7u); f_00694cc8();
    /* 005297f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005297f9: je 0x529845 */ if (fZ) goto L_00529845;
L_005297fb:; BB(0x005297fb);
    /* 005297fb: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00529801: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529806: je 0x529822 */ if (fZ) goto L_00529822;
L_00529808:; BB(0x00529808);
    /* 00529808: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052980d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052980f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00529811: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00529816: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052981b: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x52981eu); call_ind(t); }
    /* 0052981e: mov edi, eax */ r_edi = r_eax;
    /* 00529820: jmp 0x52983c */ goto L_0052983c;
L_00529822:; BB(0x00529822);
    /* 00529822: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00529827: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529829: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052982b: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529831: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529837: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x52983au); call_ind(t); }
    /* 0052983a: mov edi, eax */ r_edi = r_eax;
L_0052983c:; BB(0x0052983c);
    /* 0052983c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052983e: jne 0x529863 */ if (!fZ) goto L_00529863;
L_00529840:; BB(0x00529840);
    /* 00529840: jmp 0x529a70 */ goto L_00529a70;
L_00529845:; BB(0x00529845);
    /* 00529845: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052984a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052984c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052984e: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00529853: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x529856u); call_ind(t); }
    /* 00529856: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529858: je 0x529a70 */ if (fZ) goto L_00529a70;
L_0052985e:; BB(0x0052985e);
    /* 0052985e: mov edi, 1 */ r_edi = 0x1u;
L_00529863:; BB(0x00529863);
    /* 00529863: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0052986a: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052986d: je 0x529893 */ if (fZ) goto L_00529893;
L_0052986f:; BB(0x0052986f);
    /* 0052986f: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 00529876: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00529879: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052987b: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00529883: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 0052988b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052988d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052988e: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x529893u); f_00520cf8();
L_00529893:; BB(0x00529893);
    /* 00529893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529895: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x52989au); f_00520608();
    /* 0052989a: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 005298a0: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298a6: je 0x5298af */ if (fZ) goto L_005298af;
L_005298a8:; BB(0x005298a8);
    /* 005298a8: mov edx, 1 */ r_edx = 0x1u;
    /* 005298ad: jmp 0x5298b1 */ goto L_005298b1;
L_005298af:; BB(0x005298af);
    /* 005298af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005298b1:; BB(0x005298b1);
    /* 005298b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298b3: jne 0x5298dd */ if (!fZ) goto L_005298dd;
L_005298b5:; BB(0x005298b5);
    /* 005298b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005298b7: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x5298bcu); f_005296e4();
    /* 005298bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298be: je 0x5298dd */ if (fZ) goto L_005298dd;
L_005298c0:; BB(0x005298c0);
    /* 005298c0: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 005298c3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005298c6: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 005298c9: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 005298cc: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005298cf: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005298d2: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 005298d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005298d7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005298da: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
L_005298dd:; BB(0x005298dd);
    /* 005298dd: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005298e0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5298e5u); f_00829cc8();
    /* 005298e5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5298eau); f_0082d7b0();
    /* 005298ea: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005298ed: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5298f2u); f_0082d838();
    /* 005298f2: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 005298f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005298fa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5298ffu); f_0082d8bc();
    /* 005298ff: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00529905: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0052990b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052990d: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x529912u); f_007a9404();
    /* 00529912: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529913: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x529918u); f_00520d08();
    /* 00529918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052991a: push dword ptr [ebx + 0x3d0] */ { u32 v = R32((u32)(r_ebx+0x3d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529920: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00529922: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529924: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x529929u); f_00830b74();
    /* 00529929: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0052992e: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00529933: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00529938: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0052993b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052993d: sub edx, dword ptr [ebx + 0x3c8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x3c8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00529943: mov dword ptr [0xa72fcc], edx */ W32((u32)(0xa72fccu), r_edx);
    /* 00529949: lea edx, [ebx + 0x3e4] */ r_edx = (u32)(r_ebx+0x3e4u);
    /* 0052994f: mov dword ptr [0xa72fc8], edx */ W32((u32)(0xa72fc8u), r_edx);
    /* 00529955: mov dword ptr [ebx + 0x3e4], 0 */ W32((u32)(r_ebx+0x3e4u), 0x0u);
    /* 0052995f: mov dword ptr [ebx + 0x3e8], 0x40000000 */ W32((u32)(r_ebx+0x3e8u), 0x40000000u);
    /* 00529969: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 00529973: mov dword ptr [ebx + 0x3f0], 0 */ W32((u32)(r_ebx+0x3f0u), 0x0u);
    /* 0052997d: mov dword ptr [ebx + 0x3f4], 0x40e00000 */ W32((u32)(r_ebx+0x3f4u), 0x40e00000u);
    /* 00529987: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
    /* 00529991: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x529996u); f_0082fa0c();
    /* 00529996: mov ecx, 0x527e24 */ r_ecx = 0x527e24u;
    /* 0052999b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5299a0u); f_0082fac4();
    /* 005299a0: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005299a7: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005299aa: je 0x529ad5 */ if (fZ) goto L_00529ad5;
L_005299b0:; BB(0x005299b0);
    /* 005299b0: mov dword ptr [0xa72fd0], 0 */ W32((u32)(0xa72fd0u), 0x0u);
    /* 005299ba: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5299bfu); f_00578b38();
    /* 005299bf: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 005299c5: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005299c8: jne 0x5299dc */ if (!fZ) goto L_005299dc;
L_005299ca:; BB(0x005299ca);
    /* 005299ca: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005299cd: je 0x529ac9 */ if (fZ) goto L_00529ac9;
L_005299d3:; BB(0x005299d3);
    /* 005299d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005299d5: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5299dau); f_007aa7b8();
    /* 005299da: jmp 0x529a19 */ goto L_00529a19;
L_005299dc:; BB(0x005299dc);
    /* 005299dc: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 005299e2: lea edi, [ebx + 0x3fc] */ r_edi = (u32)(r_ebx+0x3fcu);
    /* 005299e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005299ea: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5299edu); call_ind(t); }
    /* 005299ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005299ef: je 0x529a19 */ if (fZ) goto L_00529a19;
L_005299f1:; BB(0x005299f1);
    /* 005299f1: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 005299f7: mov ecx, edi */ r_ecx = r_edi;
    /* 005299f9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5299fcu); call_ind(t); }
    /* 005299fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005299fe: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x529a03u); f_008173d0();
    /* 00529a03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a05: jne 0x529a0e */ if (!fZ) goto L_00529a0e;
L_00529a07:; BB(0x00529a07);
    /* 00529a07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529a09: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x529a0eu); f_007aa668();
L_00529a0e:; BB(0x00529a0e);
    /* 00529a0e: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 00529a14: mov ecx, edi */ r_ecx = r_edi;
    /* 00529a16: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x529a19u); call_ind(t); }
L_00529a19:; BB(0x00529a19);
    /* 00529a19: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x529a1eu); f_0082dab0();
L_00529a1e:; BB(0x00529a1e);
    /* 00529a1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00529a20: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x529a25u); f_0082fac4();
    /* 00529a25: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x529a2au); f_007a9424();
    /* 00529a2a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00529a2f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00529a34: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x529a39u); f_0082da80();
    /* 00529a39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529a3b: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x529a40u); f_00520610();
    /* 00529a40: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00529a46: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a4b: jne 0x529aaf */ if (!fZ) goto L_00529aaf;
L_00529a4d:; BB(0x00529a4d);
    /* 00529a4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529a4f: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x529a54u); f_005296e4();
    /* 00529a54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a56: je 0x529aaf */ if (fZ) goto L_00529aaf;
L_00529a58:; BB(0x00529a58);
    /* 00529a58: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00529a5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529a5d: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 00529a60: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00529a63: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00529a65: mov dword ptr [ebx + 0x14], esi */ W32((u32)(r_ebx+0x14u), r_esi);
    /* 00529a68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529a6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529a6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529a6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00529a6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529a6f: ret  */ FN_RET(0x005297cc); r_esp += 4; return;
L_00529a70:; BB(0x00529a70);
    /* 00529a70: fld dword ptr [0x921fdc] */ FPUSH(R_F32((u32)(0x921fdcu)));
    /* 00529a76: fld dword ptr [0x921fd8] */ FPUSH(R_F32((u32)(0x921fd8u)));
    /* 00529a7c: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00529a7f: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00529a82: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00529a85: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00529a87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00529a89: fstp dword ptr [ebx + 0x3e8] */ W_F32((u32)(r_ebx+0x3e8u), ST(0)); FPOP();
    /* 00529a8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00529a91: fstp dword ptr [ebx + 0x3f4] */ W_F32((u32)(r_ebx+0x3f4u), ST(0)); FPOP();
    /* 00529a97: mov dword ptr [ebx + 0x3e4], eax */ W32((u32)(r_ebx+0x3e4u), r_eax);
    /* 00529a9d: mov dword ptr [ebx + 0x3ec], edx */ W32((u32)(r_ebx+0x3ecu), r_edx);
    /* 00529aa3: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 00529aa9: mov dword ptr [ebx + 0x3f8], edx */ W32((u32)(r_ebx+0x3f8u), r_edx);
L_00529aaf:; BB(0x00529aaf);
    /* 00529aaf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529ab2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529ab3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529ab4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00529ab5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529ab6: ret  */ FN_RET(0x005297cc); r_esp += 4; return;
L_00529ab7:; BB(0x00529ab7);
    /* 00529ab7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00529ab9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529abb: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x529ac1u); call_ind(t); }
    /* 00529ac1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529ac4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529ac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529ac6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00529ac7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529ac8: ret  */ FN_RET(0x005297cc); r_esp += 4; return;
L_00529ac9:; BB(0x00529ac9);
    /* 00529ac9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529acb: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x529ad0u); f_007aa668();
    /* 00529ad0: jmp 0x529a19 */ goto L_00529a19;
L_00529ad5:; BB(0x00529ad5);
    /* 00529ad5: movzx edi, byte ptr [ebx + 0x3e0] */ r_edi = (u32)R8((u32)(r_ebx+0x3e0u));
    /* 00529adc: mov dword ptr [0xa72fd0], 0xffffffff */ W32((u32)(0xa72fd0u), 0xffffffffu);
    /* 00529ae6: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00529ae9: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x529aeeu); f_00578b38();
    /* 00529aee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00529aef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529af0: call 0x52d2b0 */ r_esp -= 4; W32(r_esp, 0x529af5u); f_0052d2b0();
    /* 00529af5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529af8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x529afdu); f_0082dab0();
    /* 00529afd: jmp 0x529a1e */ goto L_00529a1e;
}

void f_00529880(void)
{
    FN_ENTER(0x00529880);
    /* 00529880: add byte ptr [eax + 0x2444c73f], al */ { u32 ad = (u32)(r_eax+0x2444c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00529886: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00529888: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052988a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052988b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052988d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052988e: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x529893u); f_00520cf8();
    /* 00529893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529895: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x52989au); f_00520608();
    /* 0052989a: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 005298a0: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298a6: je 0x5298af */ if (fZ) goto L_005298af;
L_005298a8:; BB(0x005298a8);
    /* 005298a8: mov edx, 1 */ r_edx = 0x1u;
    /* 005298ad: jmp 0x5298b1 */ goto L_005298b1;
L_005298af:; BB(0x005298af);
    /* 005298af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005298b1:; BB(0x005298b1);
    /* 005298b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298b3: jne 0x5298dd */ if (!fZ) goto L_005298dd;
L_005298b5:; BB(0x005298b5);
    /* 005298b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005298b7: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x5298bcu); f_005296e4();
    /* 005298bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005298be: je 0x5298dd */ if (fZ) goto L_005298dd;
L_005298c0:; BB(0x005298c0);
    /* 005298c0: mov ebp, dword ptr [ebx + 0x24] */ r_ebp = R32((u32)(r_ebx+0x24u));
    /* 005298c3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005298c6: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 005298c9: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 005298cc: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005298cf: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005298d2: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 005298d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005298d7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005298da: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
L_005298dd:; BB(0x005298dd);
    /* 005298dd: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005298e0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5298e5u); f_00829cc8();
    /* 005298e5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5298eau); f_0082d7b0();
    /* 005298ea: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005298ed: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5298f2u); f_0082d838();
    /* 005298f2: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 005298f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005298fa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5298ffu); f_0082d8bc();
    /* 005298ff: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00529905: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0052990b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052990d: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x529912u); f_007a9404();
    /* 00529912: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529913: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x529918u); f_00520d08();
    /* 00529918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052991a: push dword ptr [ebx + 0x3d0] */ { u32 v = R32((u32)(r_ebx+0x3d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529920: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00529922: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529924: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x529929u); f_00830b74();
    /* 00529929: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0052992e: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00529933: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00529938: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0052993b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052993d: sub edx, dword ptr [ebx + 0x3c8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x3c8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00529943: mov dword ptr [0xa72fcc], edx */ W32((u32)(0xa72fccu), r_edx);
    /* 00529949: lea edx, [ebx + 0x3e4] */ r_edx = (u32)(r_ebx+0x3e4u);
    /* 0052994f: mov dword ptr [0xa72fc8], edx */ W32((u32)(0xa72fc8u), r_edx);
    /* 00529955: mov dword ptr [ebx + 0x3e4], 0 */ W32((u32)(r_ebx+0x3e4u), 0x0u);
    /* 0052995f: mov dword ptr [ebx + 0x3e8], 0x40000000 */ W32((u32)(r_ebx+0x3e8u), 0x40000000u);
    /* 00529969: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 00529973: mov dword ptr [ebx + 0x3f0], 0 */ W32((u32)(r_ebx+0x3f0u), 0x0u);
    /* 0052997d: mov dword ptr [ebx + 0x3f4], 0x40e00000 */ W32((u32)(r_ebx+0x3f4u), 0x40e00000u);
    /* 00529987: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
    /* 00529991: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x529996u); f_0082fa0c();
    /* 00529996: mov ecx, 0x527e24 */ r_ecx = 0x527e24u;
    /* 0052999b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5299a0u); f_0082fac4();
    /* 005299a0: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005299a7: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005299aa: je 0x529ad5 */ if (fZ) goto L_00529ad5;
L_005299b0:; BB(0x005299b0);
    /* 005299b0: mov dword ptr [0xa72fd0], 0 */ W32((u32)(0xa72fd0u), 0x0u);
    /* 005299ba: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5299bfu); f_00578b38();
    /* 005299bf: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 005299c5: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005299c8: jne 0x5299dc */ if (!fZ) goto L_005299dc;
L_005299ca:; BB(0x005299ca);
    /* 005299ca: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005299cd: je 0x529ac9 */ if (fZ) goto L_00529ac9;
L_005299d3:; BB(0x005299d3);
    /* 005299d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005299d5: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5299dau); f_007aa7b8();
    /* 005299da: jmp 0x529a19 */ goto L_00529a19;
L_005299dc:; BB(0x005299dc);
    /* 005299dc: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 005299e2: lea edi, [ebx + 0x3fc] */ r_edi = (u32)(r_ebx+0x3fcu);
    /* 005299e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005299ea: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5299edu); call_ind(t); }
    /* 005299ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005299ef: je 0x529a19 */ if (fZ) goto L_00529a19;
L_005299f1:; BB(0x005299f1);
    /* 005299f1: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 005299f7: mov ecx, edi */ r_ecx = r_edi;
    /* 005299f9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5299fcu); call_ind(t); }
    /* 005299fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005299fe: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x529a03u); f_008173d0();
    /* 00529a03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a05: jne 0x529a0e */ if (!fZ) goto L_00529a0e;
L_00529a07:; BB(0x00529a07);
    /* 00529a07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529a09: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x529a0eu); f_007aa668();
L_00529a0e:; BB(0x00529a0e);
    /* 00529a0e: mov eax, dword ptr [ebx + 0x3fc] */ r_eax = R32((u32)(r_ebx+0x3fcu));
    /* 00529a14: mov ecx, edi */ r_ecx = r_edi;
    /* 00529a16: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x529a19u); call_ind(t); }
L_00529a19:; BB(0x00529a19);
    /* 00529a19: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x529a1eu); f_0082dab0();
L_00529a1e:; BB(0x00529a1e);
    /* 00529a1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00529a20: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x529a25u); f_0082fac4();
    /* 00529a25: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x529a2au); f_007a9424();
    /* 00529a2a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00529a2f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00529a34: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x529a39u); f_0082da80();
    /* 00529a39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529a3b: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x529a40u); f_00520610();
    /* 00529a40: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00529a46: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a4b: jne 0x529aaf */ if (!fZ) goto L_00529aaf;
L_00529a4d:; BB(0x00529a4d);
    /* 00529a4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529a4f: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x529a54u); f_005296e4();
    /* 00529a54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529a56: je 0x529aaf */ if (fZ) goto L_00529aaf;
L_00529a58:; BB(0x00529a58);
    /* 00529a58: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00529a5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529a5d: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 00529a60: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00529a63: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00529a65: mov dword ptr [ebx + 0x14], esi */ W32((u32)(r_ebx+0x14u), r_esi);
    /* 00529a68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529a6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529a6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529a6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00529a6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529a6f: ret  */ FN_RET(0x00529880); r_esp += 4; return;
L_00529aaf:; BB(0x00529aaf);
    /* 00529aaf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529ab2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529ab3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529ab4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00529ab5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529ab6: ret  */ FN_RET(0x00529880); r_esp += 4; return;
L_00529ac9:; BB(0x00529ac9);
    /* 00529ac9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529acb: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x529ad0u); f_007aa668();
    /* 00529ad0: jmp 0x529a19 */ goto L_00529a19;
L_00529ad5:; BB(0x00529ad5);
    /* 00529ad5: movzx edi, byte ptr [ebx + 0x3e0] */ r_edi = (u32)R8((u32)(r_ebx+0x3e0u));
    /* 00529adc: mov dword ptr [0xa72fd0], 0xffffffff */ W32((u32)(0xa72fd0u), 0xffffffffu);
    /* 00529ae6: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00529ae9: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x529aeeu); f_00578b38();
    /* 00529aee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00529aef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529af0: call 0x52d2b0 */ r_esp -= 4; W32(r_esp, 0x529af5u); f_0052d2b0();
    /* 00529af5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529af8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x529afdu); f_0082dab0();
    /* 00529afd: jmp 0x529a1e */ goto L_00529a1e;
}

void f_00529b04(void) /* sub_529B04 */
{
    FN_ENTER(0x00529b04);
    /* 00529b04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00529b05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529b06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529b07: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529b0a: mov edi, ecx */ r_edi = r_ecx;
    /* 00529b0c: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00529b11: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00529b13: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00529b18: mov ecx, edi */ r_ecx = r_edi;
    /* 00529b1a: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x529b1du); call_ind(t); }
    /* 00529b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529b1f: je 0x529bfc */ if (fZ) goto L_00529bfc;
L_00529b25:; BB(0x00529b25);
    /* 00529b25: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 00529b2c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00529b2f: mov ecx, edi */ r_ecx = r_edi;
    /* 00529b31: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00529b39: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00529b41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529b43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529b44: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x529b49u); f_00520cf8();
    /* 00529b49: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 00529b4f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529b54: je 0x529b5d */ if (fZ) goto L_00529b5d;
L_00529b56:; BB(0x00529b56);
    /* 00529b56: mov eax, 1 */ r_eax = 0x1u;
    /* 00529b5b: jmp 0x529b5f */ goto L_00529b5f;
L_00529b5d:; BB(0x00529b5d);
    /* 00529b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00529b5f:; BB(0x00529b5f);
    /* 00529b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529b61: jne 0x529b8a */ if (!fZ) goto L_00529b8a;
L_00529b63:; BB(0x00529b63);
    /* 00529b63: mov ecx, edi */ r_ecx = r_edi;
    /* 00529b65: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x529b6au); f_005296e4();
    /* 00529b6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529b6c: je 0x529b8a */ if (fZ) goto L_00529b8a;
L_00529b6e:; BB(0x00529b6e);
    /* 00529b6e: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 00529b71: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00529b73: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 00529b76: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00529b79: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00529b7c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00529b7f: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00529b82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529b84: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00529b87: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
L_00529b8a:; BB(0x00529b8a);
    /* 00529b8a: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00529b8d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x529b92u); f_00829cc8();
    /* 00529b92: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x529b97u); f_0082d7b0();
    /* 00529b97: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00529b9a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x529b9fu); f_0082d838();
    /* 00529b9f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00529ba2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00529ba4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x529ba9u); f_0082d8bc();
    /* 00529ba9: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x529baeu); f_00520d08();
    /* 00529bae: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x529bb3u); f_00578b38();
    /* 00529bb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529bb5: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x529bbau); f_007a9404();
    /* 00529bba: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529bbd: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x529bc2u); f_0082e1e8();
    /* 00529bc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529bc5: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x529bcau); f_007a9424();
    /* 00529bca: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x529bcfu); f_0082dab0();
    /* 00529bcf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x529bd4u); f_0082da80();
    /* 00529bd4: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 00529bda: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529bdf: jne 0x529bfc */ if (!fZ) goto L_00529bfc;
L_00529be1:; BB(0x00529be1);
    /* 00529be1: mov ecx, edi */ r_ecx = r_edi;
    /* 00529be3: call 0x5296e4 */ r_esp -= 4; W32(r_esp, 0x529be8u); f_005296e4();
    /* 00529be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529bea: je 0x529bfc */ if (fZ) goto L_00529bfc;
L_00529bec:; BB(0x00529bec);
    /* 00529bec: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00529bef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529bf1: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 00529bf4: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00529bf7: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00529bf9: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
L_00529bfc:; BB(0x00529bfc);
    /* 00529bfc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529bff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529c00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529c01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529c02: ret  */ FN_RET(0x00529b04); r_esp += 4; return;
}

void f_00529c04(void) /* sub_529C04 */
{
    FN_ENTER(0x00529c04);
    /* 00529c04: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00529c0b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00529c0e: je 0x529c1c */ if (fZ) goto L_00529c1c;
L_00529c10:; BB(0x00529c10);
    /* 00529c10: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00529c13: je 0x529c1c */ if (fZ) goto L_00529c1c;
L_00529c15:; BB(0x00529c15);
    /* 00529c15: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00529c17: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x529c1cu); f_0051f62c();
L_00529c1c:; BB(0x00529c1c);
    /* 00529c1c: ret  */ FN_RET(0x00529c04); r_esp += 4; return;
}

void f_00529c20(void) /* sub_529C20 */
{
    FN_ENTER(0x00529c20);
    /* 00529c20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00529c21: mov edi, ecx */ r_edi = r_ecx;
    /* 00529c23: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00529c2a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00529c2d: je 0x529c3d */ if (fZ) goto L_00529c3d;
L_00529c2f:; BB(0x00529c2f);
    /* 00529c2f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529c32: je 0x529c3f */ if (fZ) goto L_00529c3f;
L_00529c34:; BB(0x00529c34);
    /* 00529c34: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00529c36: mov ecx, edi */ r_ecx = r_edi;
    /* 00529c38: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x529c3du); f_0051f62c();
L_00529c3d:; BB(0x00529c3d);
    /* 00529c3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529c3e: ret  */ FN_RET(0x00529c20); r_esp += 4; return;
L_00529c3f:; BB(0x00529c3f);
    /* 00529c3f: mov ecx, edi */ r_ecx = r_edi;
    /* 00529c41: call 0x529c50 */ r_esp -= 4; W32(r_esp, 0x529c46u); f_00529c50();
    /* 00529c46: mov ecx, edi */ r_ecx = r_edi;
    /* 00529c48: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x529c4du); f_0051f81c();
    /* 00529c4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529c4e: ret  */ FN_RET(0x00529c20); r_esp += 4; return;
}

void f_00529c50(void) /* sub_529C50 */
{
    FN_ENTER(0x00529c50);
    /* 00529c50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529c51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00529c53: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 00529c59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529c5b: jne 0x529c73 */ if (!fZ) goto L_00529c73;
L_00529c5d:; BB(0x00529c5d);
    /* 00529c5d: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 00529c62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529c64: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x529c69u); f_00779df0();
    /* 00529c69: mov dword ptr [ebx + 0x3dc], 0x14 */ W32((u32)(r_ebx+0x3dcu), 0x14u);
L_00529c73:; BB(0x00529c73);
    /* 00529c73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529c74: ret  */ FN_RET(0x00529c50); r_esp += 4; return;
}

void f_00529c78(void) /* sub_529C78 */
{
    FN_ENTER(0x00529c78);
    /* 00529c78: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 00529c7e: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529c81: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 00529c87: ret  */ FN_RET(0x00529c78); r_esp += 4; return;
}

void f_00529cf8(void) /* sub_529CF8 */
{
    FN_ENTER(0x00529cf8);
    /* 00529cf8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529cfb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x529d00u); f_00807ac0();
    /* 00529d00: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529d03: je 0x529db4 */ if (fZ) goto L_00529db4;
L_00529d09:; BB(0x00529d09);
    /* 00529d09: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x529d0eu); f_00520e6c();
    /* 00529d0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529d10: je 0x529d2b */ if (fZ) goto L_00529d2b;
L_00529d12:; BB(0x00529d12);
    /* 00529d12: push 0x92217c */ { u32 v = 0x92217cu; r_esp -= 4; W32(r_esp, v); }
    /* 00529d17: push 0x9bc328 */ { u32 v = 0x9bc328u; r_esp -= 4; W32(r_esp, v); }
    /* 00529d1c: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x529d21u); f_0051f674();
    /* 00529d21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529d24: mov dword ptr [0xa72fc0], eax */ W32((u32)(0xa72fc0u), r_eax);
    /* 00529d29: jmp 0x529d3b */ goto L_00529d3b;
L_00529d2b:; BB(0x00529d2b);
    /* 00529d2b: push 0x9bc328 */ { u32 v = 0x9bc328u; r_esp -= 4; W32(r_esp, v); }
    /* 00529d30: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x529d35u); f_0051f6b0();
    /* 00529d35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529d36: mov dword ptr [0xa72fc0], eax */ W32((u32)(0xa72fc0u), r_eax);
L_00529d3b:; BB(0x00529d3b);
    /* 00529d3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00529d3d: mov dword ptr [0xa72fd0], eax */ W32((u32)(0xa72fd0u), r_eax);
    /* 00529d42: mov dword ptr [0xa72fcc], eax */ W32((u32)(0xa72fccu), r_eax);
    /* 00529d47: mov dword ptr [0xa72fc8], eax */ W32((u32)(0xa72fc8u), r_eax);
    /* 00529d4c: call 0x52a5fc */ r_esp -= 4; W32(r_esp, 0x529d51u); f_0052a5fc();
    /* 00529d51: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x529d56u); f_0052d360();
    /* 00529d56: mov eax, dword ptr [0x921f7c] */ r_eax = R32((u32)(0x921f7cu));
    /* 00529d5b: movzx edx, word ptr [0x921f80] */ r_edx = (u32)R16((u32)(0x921f80u));
    /* 00529d62: movzx ecx, word ptr [0x921f82] */ r_ecx = (u32)R16((u32)(0x921f82u));
    /* 00529d69: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00529d6d: movzx eax, word ptr [0x921f84] */ r_eax = (u32)R16((u32)(0x921f84u));
    /* 00529d74: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 00529d79: mov edx, dword ptr [0xa72fc0] */ r_edx = R32((u32)(0xa72fc0u));
    /* 00529d7f: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 00529d84: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00529d89: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00529d8f: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00529d95: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00529d98: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00529d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529d9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529d9e: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00529da3: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00529da6: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529da9: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00529dab: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x529db0u); f_00608470();
    /* 00529db0: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00529db3: ret  */ FN_RET(0x00529cf8); r_esp += 4; return;
L_00529db4:; BB(0x00529db4);
    /* 00529db4: push 0x922168 */ { u32 v = 0x922168u; r_esp -= 4; W32(r_esp, v); }
    /* 00529db9: push 0x9bc328 */ { u32 v = 0x9bc328u; r_esp -= 4; W32(r_esp, v); }
    /* 00529dbe: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x529dc3u); f_0051f674();
    /* 00529dc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529dc6: mov dword ptr [0xa72fc0], eax */ W32((u32)(0xa72fc0u), r_eax);
    /* 00529dcb: jmp 0x529d3b */ goto L_00529d3b;
}

void f_00529dd0(void) /* sub_529DD0 */
{
    FN_ENTER(0x00529dd0);
    /* 00529dd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529dd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00529dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00529dd5: call 0x529df4 */ r_esp -= 4; W32(r_esp, 0x529ddau); f_00529df4();
    /* 00529dda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00529dde: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529de0: jne 0x529de6 */ if (!fZ) goto L_00529de6;
L_00529de2:; BB(0x00529de2);
    /* 00529de2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529de3: ret 4 */ FN_RET(0x00529dd0); r_esp += 8; return;
L_00529de6:; BB(0x00529de6);
    /* 00529de6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529de7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x529decu); f_005c2f74();
    /* 00529dec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529ded: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00529dee: ret 4 */ FN_RET(0x00529dd0); r_esp += 8; return;
}

void f_00529df4(void) /* sub_529DF4 */
{
    FN_ENTER(0x00529df4);
    /* 00529df4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529df5: mov ebp, esp */ r_ebp = r_esp;
    /* 00529df7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00529df9: push 0x8d4b5c */ { u32 v = 0x8d4b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00529dfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00529e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529e05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00529e0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529e0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00529e12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00529e15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00529e18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00529e1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00529e1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529e21: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 00529e27: mov dword ptr [ecx], 0xb011e0 */ W32((u32)(r_ecx), 0xb011e0u);
    /* 00529e2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529e2f: je 0x529e4b */ if (fZ) goto L_00529e4b;
L_00529e31:; BB(0x00529e31);
    /* 00529e31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529e34: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00529e38: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00529e3d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00529e41: mov dword ptr [ecx + 0xfc], 0 */ W32((u32)(r_ecx+0xfcu), 0x0u);
L_00529e4b:; BB(0x00529e4b);
    /* 00529e4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00529e52: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x529e57u); f_005219f0();
    /* 00529e57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00529e5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00529e61: mov esp, ebp */ r_esp = r_ebp;
    /* 00529e63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529e64: ret  */ FN_RET(0x00529df4); r_esp += 4; return;
}

void f_00529e68(void) /* sub_529E68 */
{
    FN_ENTER(0x00529e68);
    /* 00529e68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00529e69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00529e6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529e6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00529e6c: mov edi, ecx */ r_edi = r_ecx;
    /* 00529e6e: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00529e72: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00529e76: mov ecx, edi */ r_ecx = r_edi;
    /* 00529e78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529e79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529e7a: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x529e7fu); f_00521bbc();
    /* 00529e7f: mov dword ptr [edi], 0xb011e0 */ W32((u32)(r_edi), 0xb011e0u);
    /* 00529e85: mov eax, dword ptr [0x9bc380] */ r_eax = R32((u32)(0x9bc380u));
    /* 00529e8a: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00529e8d: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00529e93: mov edx, dword ptr [0x9bc38c] */ r_edx = R32((u32)(0x9bc38cu));
    /* 00529e99: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00529e9c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00529ea0: mov dword ptr [edi + 0xec], esi */ W32((u32)(r_edi+0xecu), r_esi);
    /* 00529ea6: movzx ebp, word ptr [ebp + 0x1c] */ r_ebp = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00529eaa: mov word ptr [edi + 0xb0], bp */ W16((u32)(r_edi+0xb0u), (u16)r_ebp);
    /* 00529eb1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529eb3: mov dword ptr [edi + 0xb4], edx */ W32((u32)(r_edi+0xb4u), r_edx);
    /* 00529eb9: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 00529ebc: mov dword ptr [edi + 0xb8], ebp */ W32((u32)(r_edi+0xb8u), r_ebp);
    /* 00529ec2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00529ec5: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00529ecb: mov dword ptr [edi + 0xd8], 0 */ W32((u32)(r_edi+0xd8u), 0x0u);
    /* 00529ed5: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00529ed8: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 00529edb: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00529ede: mov dword ptr [edi + 0xdc], 0 */ W32((u32)(r_edi+0xdcu), 0x0u);
    /* 00529ee8: mov ecx, esi */ r_ecx = r_esi;
    /* 00529eea: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 00529ef4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x529ef9u); f_0082dcbc();
    /* 00529ef9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00529efc: mov ecx, dword ptr [edi + 0xec] */ r_ecx = R32((u32)(r_edi+0xecu));
    /* 00529f02: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x529f07u); f_0082ddd8();
    /* 00529f07: fld dword ptr [0x9221c4] */ FPUSH(R_F32((u32)(0x9221c4u)));
    /* 00529f0d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00529f10: fld dword ptr [0xa72fd8] */ FPUSH(R_F32((u32)(0xa72fd8u)));
    /* 00529f16: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00529f19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00529f1b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00529f1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00529f1f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00529f21: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00529f23: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 00529f29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00529f2b: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
    /* 00529f31: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00529f33: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00529f35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00529f37: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00529f39: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 00529f3f: fstp dword ptr [edi + 0xd4] */ W_F32((u32)(r_edi+0xd4u), ST(0)); FPOP();
    /* 00529f45: mov eax, 1 */ r_eax = 0x1u;
    /* 00529f4a: mov dword ptr [edi + 0xc4], 0 */ W32((u32)(r_edi+0xc4u), 0x0u);
    /* 00529f54: mov dword ptr [edi + 0xe8], eax */ W32((u32)(r_edi+0xe8u), r_eax);
    /* 00529f5a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529f5c: mov dword ptr [edi + 0xf4], edx */ W32((u32)(r_edi+0xf4u), r_edx);
    /* 00529f62: mov dword ptr [edi + 0xd0], 0 */ W32((u32)(r_edi+0xd0u), 0x0u);
    /* 00529f6c: mov dword ptr [edi + 0xf8], edx */ W32((u32)(r_edi+0xf8u), r_edx);
    /* 00529f72: mov dword ptr [edi + 0xfc], edx */ W32((u32)(r_edi+0xfcu), r_edx);
    /* 00529f78: mov dword ptr [edi + 0x100], eax */ W32((u32)(r_edi+0x100u), r_eax);
    /* 00529f7e: mov dword ptr [edi + 0xe4], 0 */ W32((u32)(r_edi+0xe4u), 0x0u);
    /* 00529f88: mov eax, edi */ r_eax = r_edi;
    /* 00529f8a: mov dword ptr [edi + 0xf0], 0 */ W32((u32)(r_edi+0xf0u), 0x0u);
    /* 00529f94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00529f95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529f96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00529f97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00529f98: ret 0xc */ FN_RET(0x00529e68); r_esp += 16; return;
}

void f_00529f9c(void) /* sub_529F9C */
{
    FN_ENTER(0x00529f9c);
    /* 00529f9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00529f9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00529f9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529f9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00529fa0: mov edi, ecx */ r_edi = r_ecx;
    /* 00529fa2: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00529fa8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00529faa: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00529fae: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00529fb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529fb2: je 0x52a082 */ if (fZ) goto L_0052a082;
L_00529fb8:; BB(0x00529fb8);
    /* 00529fb8: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x529fbdu); f_007b51c4();
    /* 00529fbd: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00529fc0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00529fc2: je 0x529fd7 */ if (fZ) goto L_00529fd7;
L_00529fc4:; BB(0x00529fc4);
    /* 00529fc4: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00529fc8: mov ecx, edi */ r_ecx = r_edi;
    /* 00529fca: call 0x7b8618 */ r_esp -= 4; W32(r_esp, 0x529fcfu); f_007b8618();
    /* 00529fcf: mov ebp, 0x80000 */ r_ebp = 0x80000u;
    /* 00529fd4: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
L_00529fd7:; BB(0x00529fd7);
    /* 00529fd7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00529fd9: je 0x529fe8 */ if (fZ) goto L_00529fe8;
L_00529fdb:; BB(0x00529fdb);
    /* 00529fdb: mov ecx, edi */ r_ecx = r_edi;
    /* 00529fdd: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x529fe2u); f_007b8980();
    /* 00529fe2: or ebp, 0x100000 */ {  u32 a = r_ebp; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00529fe8:; BB(0x00529fe8);
    /* 00529fe8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00529fee: test dword ptr [eax + 0x18], ebp */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00529ff1: je 0x52a079 */ if (fZ) goto L_0052a079;
L_00529ff7:; BB(0x00529ff7);
    /* 00529ff7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00529ff9:; BB(0x00529ff9);
    /* 00529ff9: mov ebx, dword ptr [ebp + 0xaad6e0] */ r_ebx = R32((u32)(r_ebp+0xaad6e0u));
    /* 00529fff: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052a002: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052a004: je 0x52a079 */ if (fZ) goto L_0052a079;
L_0052a006:; BB(0x0052a006);
    /* 0052a006: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 0052a00d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a010: jne 0x52a074 */ if (!fZ) goto L_0052a074;
L_0052a012:; BB(0x0052a012);
    /* 0052a012: cmp ebx, dword ptr [edi + 0xac] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a018: je 0x52a074 */ if (fZ) goto L_0052a074;
L_0052a01a:; BB(0x0052a01a);
    /* 0052a01a: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a01d: mov ecx, edi */ r_ecx = r_edi;
    /* 0052a01f: call 0x521ba4 */ r_esp -= 4; W32(r_esp, 0x52a024u); f_00521ba4();
    /* 0052a024: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a026: je 0x52a074 */ if (fZ) goto L_0052a074;
L_0052a028:; BB(0x0052a028);
    /* 0052a028: fld dword ptr [edi + 0xb8] */ FPUSH(R_F32((u32)(r_edi+0xb8u)));
    /* 0052a02e: fsub dword ptr [ebx + 0x304] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x304u));
    /* 0052a034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052a035: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052a038: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52a03du); f_0082e900();
    /* 0052a03d: fcomp dword ptr [0x9221bc] */ fx_compare(ST(0), R_F32((u32)(0x9221bcu))); FPOP();
    /* 0052a043: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052a045: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052a046: ja 0x52a074 */ if ((!fC&&!fZ)) goto L_0052a074;
L_0052a048:; BB(0x0052a048);
    /* 0052a048: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0052a04c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a04e: je 0x52a05e */ if (fZ) goto L_0052a05e;
L_0052a050:; BB(0x0052a050);
    /* 0052a050: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a051: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0052a055: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x52a05au); f_00521b18();
    /* 0052a05a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a05c: je 0x52a074 */ if (fZ) goto L_0052a074;
L_0052a05e:; BB(0x0052a05e);
    /* 0052a05e: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a062: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0052a066: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0052a068: mov ecx, edi */ r_ecx = r_edi;
    /* 0052a06a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a06b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a06c: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x52a06fu); call_ind(t); }
    /* 0052a06f: mov esi, 1 */ r_esi = 0x1u;
L_0052a074:; BB(0x0052a074);
    /* 0052a074: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052a077: jl 0x529ff9 */ if ((fS!=fO)) goto L_00529ff9;
L_0052a079:; BB(0x0052a079);
    /* 0052a079: mov eax, esi */ r_eax = r_esi;
    /* 0052a07b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a07c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a07d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052a07e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052a07f: ret 0x10 */ FN_RET(0x00529f9c); r_esp += 20; return;
L_0052a082:; BB(0x0052a082);
    /* 0052a082: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052a084: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052a087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052a088: ret 0x10 */ FN_RET(0x00529f9c); r_esp += 20; return;
}

