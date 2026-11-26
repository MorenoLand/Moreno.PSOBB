#include "protos.h"

void f_00553084(void) /* sub_553084 */
{
    FN_ENTER(0x00553084);
    /* 00553084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00553085: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00553086: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00553087: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055308a: mov edi, ecx */ r_edi = r_ecx;
    /* 0055308c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055308e: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x553093u); f_00770738();
    /* 00553093: mov esi, eax */ r_esi = r_eax;
    /* 00553095: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0055309c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055309e: jne 0x5530ee */ if (!fZ) goto L_005530ee;
L_005530a0:; BB(0x005530a0);
    /* 005530a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005530a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005530a4: mov ecx, edi */ r_ecx = r_edi;
    /* 005530a6: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5530abu); f_00772b44();
    /* 005530ab: mov ecx, edi */ r_ecx = r_edi;
    /* 005530ad: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5530b2u); f_007aa094();
    /* 005530b2: fld dword ptr [edi + 0xc8] */ FPUSH(R_F32((u32)(r_edi+0xc8u)));
    /* 005530b8: fmul dword ptr [0x924954] */ ST(0) = ST(0) * R_F32((u32)(0x924954u));
    /* 005530be: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 005530c4: mov eax, 1 */ r_eax = 0x1u;
    /* 005530c9: mov dword ptr [edi + 0x3dc], 0 */ W32((u32)(r_edi+0x3dcu), 0x0u);
    /* 005530d3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005530da: mov edx, 2 */ r_edx = 0x2u;
    /* 005530df: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005530e6: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 005530e9: jmp 0x55338d */ goto L_0055338d;
L_005530ee:; BB(0x005530ee);
    /* 005530ee: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005530f1: jne 0x55313b */ if (!fZ) goto L_0055313b;
L_005530f3:; BB(0x005530f3);
    /* 005530f3: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005530f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005530fa: mov ebp, dword ptr [edi + 0x30] */ r_ebp = R32((u32)(r_edi+0x30u));
    /* 005530fd: mov eax, 3 */ r_eax = 0x3u;
    /* 00553102: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00553109: mov edx, 2 */ r_edx = 0x2u;
    /* 0055310e: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00553115: and ebp, 0xfbfbffff */ {  u32 a = r_ebp; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0055311b: mov dword ptr [edi + 0x30], ebp */ W32((u32)(r_edi+0x30u), r_ebp);
    /* 0055311e: mov ecx, edi */ r_ecx = r_edi;
    /* 00553120: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x553125u); f_007b52ec();
    /* 00553125: mov ecx, edi */ r_ecx = r_edi;
    /* 00553127: call 0x52ac5c */ r_esp -= 4; W32(r_esp, 0x55312cu); f_0052ac5c();
    /* 0055312c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055312e: call 0x52ad44 */ r_esp -= 4; W32(r_esp, 0x553133u); f_0052ad44();
    /* 00553133: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00553136: jmp 0x55338d */ goto L_0055338d;
L_0055313b:; BB(0x0055313b);
    /* 0055313b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055313d: je 0x55337e */ if (fZ) goto L_0055337e;
L_00553143:; BB(0x00553143);
    /* 00553143: push 0x300000 */ { u32 v = 0x300000u; r_esp -= 4; W32(r_esp, v); }
    /* 00553148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055314a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055314c: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x553151u); f_007b5290();
    /* 00553151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553153: je 0x5531a2 */ if (fZ) goto L_005531a2;
L_00553155:; BB(0x00553155);
    /* 00553155: mov ebp, dword ptr [edi + 0x394] */ r_ebp = R32((u32)(r_edi+0x394u));
    /* 0055315b: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 0055315e: mov dword ptr [edi + 0x394], edx */ W32((u32)(r_edi+0x394u), r_edx);
    /* 00553164: cmp ebp, 0x3c */ {  u32 a = r_ebp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00553167: jae 0x553181 */ if (!fC) goto L_00553181;
L_00553169:; BB(0x00553169);
    /* 00553169: fld dword ptr [edi + 0x50] */ FPUSH(R_F32((u32)(r_edi+0x50u)));
    /* 0055316c: fld dword ptr [edi + 0x54] */ FPUSH(R_F32((u32)(r_edi+0x54u)));
    /* 0055316f: fld dword ptr [edi + 0x58] */ FPUSH(R_F32((u32)(r_edi+0x58u)));
    /* 00553172: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00553174: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00553178: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055317b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0055317f: jmp 0x5531cb */ goto L_005531cb;
L_00553181:; BB(0x00553181);
    /* 00553181: fld dword ptr [esi + 0x300] */ FPUSH(R_F32((u32)(r_esi+0x300u)));
    /* 00553187: fld dword ptr [esi + 0x304] */ FPUSH(R_F32((u32)(r_esi+0x304u)));
    /* 0055318d: fld dword ptr [esi + 0x308] */ FPUSH(R_F32((u32)(r_esi+0x308u)));
    /* 00553193: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00553195: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00553199: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055319c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005531a0: jmp 0x5531cb */ goto L_005531cb;
L_005531a2:; BB(0x005531a2);
    /* 005531a2: mov dword ptr [edi + 0x394], 0 */ W32((u32)(r_edi+0x394u), 0x0u);
    /* 005531ac: fld dword ptr [esi + 0x300] */ FPUSH(R_F32((u32)(r_esi+0x300u)));
    /* 005531b2: fld dword ptr [esi + 0x304] */ FPUSH(R_F32((u32)(r_esi+0x304u)));
    /* 005531b8: fld dword ptr [esi + 0x308] */ FPUSH(R_F32((u32)(r_esi+0x308u)));
    /* 005531be: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005531c0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005531c4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005531c7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_005531cb:; BB(0x005531cb);
    /* 005531cb: mov ecx, edi */ r_ecx = r_edi;
    /* 005531cd: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5531d2u); f_007aa094();
    /* 005531d2: push 0x25a */ { u32 v = 0x25au; r_esp -= 4; W32(r_esp, v); }
    /* 005531d7: mov ecx, edi */ r_ecx = r_edi;
    /* 005531d9: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5531deu); f_007879b8();
    /* 005531de: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 005531e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005531e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005531e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005531e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005531e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005531e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5531ecu); f_00814298();
    /* 005531ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005531ed: lea edx, [edi + 0x2a4] */ r_edx = (u32)(r_edi+0x2a4u);
    /* 005531f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005531f4: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5531f9u); f_007a9180();
    /* 005531f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005531fc: fcomp dword ptr [0x924964] */ fx_compare(ST(0), R_F32((u32)(0x924964u))); FPOP();
    /* 00553202: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00553204: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00553205: jae 0x553222 */ if (!fC) goto L_00553222;
L_00553207:; BB(0x00553207);
    /* 00553207: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0055320b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0055320e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00553212: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00553214: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00553218: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0055321c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00553220: jmp 0x553248 */ goto L_00553248;
L_00553222:; BB(0x00553222);
    /* 00553222: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00553224: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00553226: mov ecx, edi */ r_ecx = r_edi;
    /* 00553228: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x55322bu); call_ind(t); }
    /* 0055322b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055322d: je 0x55327a */ if (fZ) goto L_0055327a;
L_0055322f:; BB(0x0055322f);
    /* 0055322f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00553233: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00553236: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0055323a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0055323c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00553240: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00553244: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
L_00553248:; BB(0x00553248);
    /* 00553248: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055324a: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055324e: mov ecx, edi */ r_ecx = r_edi;
    /* 00553250: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00553254: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00553258: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x55325du); f_00771c8c();
    /* 0055325d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055325f: je 0x55327a */ if (fZ) goto L_0055327a;
L_00553261:; BB(0x00553261);
    /* 00553261: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00553267: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055326d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055326f: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00553275: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x55327au); f_00771f1c();
L_0055327a:; BB(0x0055327a);
    /* 0055327a: fld dword ptr [edi + 0x39c] */ FPUSH(R_F32((u32)(r_edi+0x39cu)));
    /* 00553280: fmul dword ptr [0x92495c] */ ST(0) = ST(0) * R_F32((u32)(0x92495cu));
    /* 00553286: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00553289: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0055328d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055328f: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00553295: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553298: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055329b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0055329f: call 0x5533d0 */ r_esp -= 4; W32(r_esp, 0x5532a4u); f_005533d0();
    /* 005532a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005532a6: je 0x5532b9 */ if (fZ) goto L_005532b9;
L_005532a8:; BB(0x005532a8);
    /* 005532a8: mov eax, 2 */ r_eax = 0x2u;
    /* 005532ad: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005532b4: jmp 0x55338d */ goto L_0055338d;
L_005532b9:; BB(0x005532b9);
    /* 005532b9: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005532bf: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005532c2: mov ecx, edi */ r_ecx = r_edi;
    /* 005532c4: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5532c9u); f_00772358();
    /* 005532c9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005532cb: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005532ce: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005532d4: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005532d7: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005532db: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005532de: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005532e2: mov ecx, edi */ r_ecx = r_edi;
    /* 005532e4: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5532e7u); call_ind(t); }
    /* 005532e7: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005532e9: mov ecx, edi */ r_ecx = r_edi;
    /* 005532eb: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5532eeu); call_ind(t); }
    /* 005532ee: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005532f2: fadd dword ptr [edi + 0x3dc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3dcu));
    /* 005532f8: fcom dword ptr [0x924958] */ fx_compare(ST(0), R_F32((u32)(0x924958u))); 
    /* 005532fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00553300: fstp dword ptr [edi + 0x3dc] */ W_F32((u32)(r_edi+0x3dcu), ST(0)); FPOP();
    /* 00553306: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00553307: jb 0x553315 */ if (fC) goto L_00553315;
L_00553309:; BB(0x00553309);
    /* 00553309: mov edx, 2 */ r_edx = 0x2u;
    /* 0055330e: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
L_00553315:; BB(0x00553315);
    /* 00553315: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00553316: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 0055331c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055331d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x553322u); f_007a9180();
    /* 00553322: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553325: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 0055332b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055332d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055332f: jle 0x5533cb */ if ((fZ||fS!=fO)) goto L_005533cb;
L_00553335:; BB(0x00553335);
    /* 00553335: mov eax, dword ptr [edi + 0x31c] */ r_eax = R32((u32)(r_edi+0x31cu));
    /* 0055333b: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0055333e: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00553344: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00553348: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0055334b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055334d: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0055334f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00553351: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00553353: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00553355: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00553357: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00553359: mov ebx, eax */ r_ebx = r_eax;
L_0055335b:; BB(0x0055335b);
    /* 0055335b: fld dword ptr [esi + ebx + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0xcu)));
    /* 0055335f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00553361: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00553363: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00553365: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00553367: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00553368: jb 0x5533b5 */ if (fC) goto L_005533b5;
L_0055336a:; BB(0x0055336a);
    /* 0055336a: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055336d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00553370: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00553372: jl 0x55335b */ if ((fS!=fO)) goto L_0055335b;
L_00553374:; BB(0x00553374);
    /* 00553374: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00553376: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00553378: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0055337c: jmp 0x55338d */ goto L_0055338d;
L_0055337e:; BB(0x0055337e);
    /* 0055337e: mov eax, 2 */ r_eax = 0x2u;
    /* 00553383: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0055338a: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
L_0055338d:; BB(0x0055338d);
    /* 0055338d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055338f: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x553394u); f_007b6880();
    /* 00553394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553396: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553398: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055339d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055339e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5533a3u); f_00805608();
    /* 005533a3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005533a6: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005533ab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005533ae: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005533b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005533b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005533b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005533b4: ret  */ FN_RET(0x00553084); r_esp += 4; return;
L_005533b5:; BB(0x005533b5);
    /* 005533b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005533b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005533b9: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005533bd: mov eax, 2 */ r_eax = 0x2u;
    /* 005533c2: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005533c9: jmp 0x55338d */ goto L_0055338d;
L_005533cb:; BB(0x005533cb);
    /* 005533cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005533cd: jmp 0x55338d */ goto L_0055338d;
}

void f_005533d0(void) /* sub_5533D0 */
{
    FN_ENTER(0x005533d0);
    /* 005533d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005533d1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005533d4: mov edi, ecx */ r_edi = r_ecx;
    /* 005533d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005533dc: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 005533df: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005533e3: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 005533e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005533e7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005533eb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005533f3: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005533f8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005533ff: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x553404u); f_0082d990();
    /* 00553404: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00553408: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055340a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55340fu); f_0082d8bc();
    /* 0055340f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00553412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553413: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00553417: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00553419: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x55341eu); f_0082eab8();
    /* 0055341e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00553423: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x553428u); f_0082eb80();
    /* 00553428: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0055342b: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00553431: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x553436u); f_0082ebac();
    /* 00553436: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00553439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055343a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055343c: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x553441u); f_00771e14();
    /* 00553441: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00553444: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00553445: ret 8 */ FN_RET(0x005533d0); r_esp += 12; return;
}

void f_00553448(void) /* sub_553448 */
{
    FN_ENTER(0x00553448);
    /* 00553448: fld dword ptr [0x92494c] */ FPUSH(R_F32((u32)(0x92494cu)));
    /* 0055344e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00553451: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00553454: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00553457: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 0055345d: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00553463: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00553469: ret  */ FN_RET(0x00553448); r_esp += 4; return;
}

void f_0055346c(void) /* sub_55346C */
{
    FN_ENTER(0x0055346c);
    /* 0055346c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055346d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055346e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055346f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00553472: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00553474: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00553477: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055347c: je 0x553485 */ if (fZ) goto L_00553485;
L_0055347e:; BB(0x0055347e);
    /* 0055347e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00553481: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00553482: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553483: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00553484: ret  */ FN_RET(0x0055346c); r_esp += 4; return;
L_00553485:; BB(0x00553485);
    /* 00553485: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055348a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055348c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0055348e: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00553493: push dword ptr [0xa739f0] */ { u32 v = R32((u32)(0xa739f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00553499: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x55349cu); call_ind(t); }
    /* 0055349c: mov edi, eax */ r_edi = r_eax;
    /* 0055349e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005534a0: je 0x553610 */ if (fZ) goto L_00553610;
L_005534a6:; BB(0x005534a6);
    /* 005534a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005534a8: call 0x5536e0 */ r_esp -= 4; W32(r_esp, 0x5534adu); f_005536e0();
    /* 005534ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005534af: je 0x5534b8 */ if (fZ) goto L_005534b8;
L_005534b1:; BB(0x005534b1);
    /* 005534b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005534b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005534b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005534b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005534b7: ret  */ FN_RET(0x0055346c); r_esp += 4; return;
L_005534b8:; BB(0x005534b8);
    /* 005534b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005534b9: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x5534beu); f_00794548();
    /* 005534be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005534bf: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005534c5: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005534c8: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005534cb: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005534d1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5534d6u); f_00829cc8();
    /* 005534d6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5534dbu); f_0082d7b0();
    /* 005534db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005534dd: push dword ptr [ebx + 0x388] */ { u32 v = R32((u32)(r_ebx+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 005534e3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005534e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005534e7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5534ecu); f_00830b74();
    /* 005534ec: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005534ef: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5534f4u); f_0082d838();
    /* 005534f4: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005534f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005534f9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5534feu); f_0082d8bc();
    /* 005534fe: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x553503u); f_004f7c84();
    /* 00553503: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553506: je 0x5536d1 */ if (fZ) goto L_005536d1;
L_0055350c:; BB(0x0055350c);
    /* 0055350c: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00553513: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00553515: jl 0x55351c */ if ((fS!=fO)) goto L_0055351c;
L_00553517:; BB(0x00553517);
    /* 00553517: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055351a: jle 0x553526 */ if ((fZ||fS!=fO)) goto L_00553526;
L_0055351c:; BB(0x0055351c);
    /* 0055351c: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055351f: jl 0x553545 */ if ((fS!=fO)) goto L_00553545;
L_00553521:; BB(0x00553521);
    /* 00553521: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00553524: jg 0x553545 */ if ((!fZ&&fS==fO)) goto L_00553545;
L_00553526:; BB(0x00553526);
    /* 00553526: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00553529: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0055352c: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0055352f: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00553532: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00553535: movsx ebp, word ptr [eax + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00553539: mov edx, ebp */ r_edx = r_ebp;
    /* 0055353b: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00553541: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
L_00553545:; BB(0x00553545);
    /* 00553545: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x55354au); f_00578b38();
    /* 0055354a: mov dword ptr [0xa73a14], 0 */ W32((u32)(0xa73a14u), 0x0u);
    /* 00553554: mov ecx, 0x5526dc */ r_ecx = 0x5526dcu;
    /* 00553559: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55355eu); f_0082fac4();
    /* 0055355e: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 00553564: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553567: je 0x55362f */ if (fZ) goto L_0055362f;
L_0055356d:; BB(0x0055356d);
    /* 0055356d: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553570: je 0x553623 */ if (fZ) goto L_00553623;
L_00553576:; BB(0x00553576);
    /* 00553576: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00553578: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x55357du); f_007aa7b8();
L_0055357d:; BB(0x0055357d);
    /* 0055357d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055357f: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x553584u); f_0082fac4();
    /* 00553584: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x553589u); f_0082dab0();
    /* 00553589: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00553590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00553592: jl 0x5535b6 */ if ((fS!=fO)) goto L_005535b6;
L_00553594:; BB(0x00553594);
    /* 00553594: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00553597: jle 0x5535a3 */ if ((fZ||fS!=fO)) goto L_005535a3;
L_00553599:; BB(0x00553599);
    /* 00553599: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055359c: jl 0x5535b6 */ if ((fS!=fO)) goto L_005535b6;
L_0055359e:; BB(0x0055359e);
    /* 0055359e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005535a1: jg 0x5535b6 */ if ((!fZ&&fS==fO)) goto L_005535b6;
L_005535a3:; BB(0x005535a3);
    /* 005535a3: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 005535a6: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005535a9: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 005535ac: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005535af: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005535b2: mov word ptr [eax + 6], bp */ W16((u32)(r_eax+0x6u), (u16)r_ebp);
L_005535b6:; BB(0x005535b6);
    /* 005535b6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5535bbu); f_0082da80();
    /* 005535bb: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005535c0: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005535c3: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005535c8: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5535cdu); f_00794750();
    /* 005535cd: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005535d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005535d6: jl 0x5535df */ if ((fS!=fO)) goto L_005535df;
L_005535d8:; BB(0x005535d8);
    /* 005535d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005535db: jle 0x553610 */ if ((fZ||fS!=fO)) goto L_00553610;
L_005535dd:; BB(0x005535dd);
    /* 005535dd: jmp 0x553617 */ goto L_00553617;
L_005535df:; BB(0x005535df);
    /* 005535df: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005535e5: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005535ea: jne 0x553610 */ if (!fZ) goto L_00553610;
L_005535ec:; BB(0x005535ec);
    /* 005535ec: mov dword ptr [esp], 0x3fc00000 */ W32((u32)(r_esp), 0x3fc00000u);
    /* 005535f3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005535f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005535f8: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00553600: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00553608: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055360a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055360b: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x553610u); f_00779d4c();
L_00553610:; BB(0x00553610);
    /* 00553610: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00553613: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00553614: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553615: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00553616: ret  */ FN_RET(0x0055346c); r_esp += 4; return;
L_00553617:; BB(0x00553617);
    /* 00553617: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055361a: jl 0x5535df */ if ((fS!=fO)) goto L_005535df;
L_0055361c:; BB(0x0055361c);
    /* 0055361c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055361f: jle 0x553610 */ if ((fZ||fS!=fO)) goto L_00553610;
L_00553621:; BB(0x00553621);
    /* 00553621: jmp 0x5535df */ goto L_005535df;
L_00553623:; BB(0x00553623);
    /* 00553623: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00553625: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x55362au); f_007aa668();
    /* 0055362a: jmp 0x55357d */ goto L_0055357d;
L_0055362f:; BB(0x0055362f);
    /* 0055362f: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00553635: lea edi, [ebx + 0x3b0] */ r_edi = (u32)(r_ebx+0x3b0u);
    /* 0055363b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055363d: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x553640u); call_ind(t); }
    /* 00553640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553642: je 0x55357d */ if (fZ) goto L_0055357d;
L_00553648:; BB(0x00553648);
    /* 00553648: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0055364d: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00553653: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00553658: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 0055365d: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00553663: mov ecx, edi */ r_ecx = r_edi;
    /* 00553665: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 0055366a: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00553670: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x553673u); call_ind(t); }
    /* 00553673: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00553675: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x55367au); f_008173d0();
    /* 0055367a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055367c: jne 0x55369f */ if (!fZ) goto L_0055369f;
L_0055367e:; BB(0x0055367e);
    /* 0055367e: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00553683: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00553686: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055368b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055368d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x553692u); f_007aa668();
    /* 00553692: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00553697: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055369a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0055369f:; BB(0x0055369f);
    /* 0055369f: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 005536a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005536a7: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5536aau); call_ind(t); }
    /* 005536aa: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005536af: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 005536b5: mov edi, dword ptr [0xaab518] */ r_edi = R32((u32)(0xaab518u));
    /* 005536bb: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005536c0: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 005536c6: mov dword ptr [0xaf034c], edi */ W32((u32)(0xaf034cu), r_edi);
    /* 005536cc: jmp 0x55357d */ goto L_0055357d;
L_005536d1:; BB(0x005536d1);
    /* 005536d1: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005536d4: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5536d9u); f_0082e1e8();
    /* 005536d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005536da: jmp 0x5535b6 */ goto L_005535b6;
}

void f_005536e0(void) /* sub_5536E0 */
{
    FN_ENTER(0x005536e0);
    /* 005536e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005536e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005536e3: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005536e8: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005536ea: je 0x553737 */ if (fZ) goto L_00553737;
L_005536ec:; BB(0x005536ec);
    /* 005536ec: lea eax, [ebp + 0x3e0] */ r_eax = (u32)(r_ebp+0x3e0u);
    /* 005536f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005536f3: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x5536f8u); f_00505a3c();
    /* 005536f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005536f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005536fb: je 0x553730 */ if (fZ) goto L_00553730;
L_005536fd:; BB(0x005536fd);
    /* 005536fd: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00553700: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x553705u); f_00829cc8();
    /* 00553705: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55370au); f_0082d7b0();
    /* 0055370a: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0055370d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x553712u); f_0082d838();
    /* 00553712: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00553715: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00553717: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55371cu); f_0082d8bc();
    /* 0055371c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055371e: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x553723u); f_007aa668();
    /* 00553723: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x553728u); f_0082da80();
    /* 00553728: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055372a: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x55372fu); f_00505bf8();
    /* 0055372f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00553730:; BB(0x00553730);
    /* 00553730: mov eax, 1 */ r_eax = 0x1u;
    /* 00553735: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553736: ret  */ FN_RET(0x005536e0); r_esp += 4; return;
L_00553737:; BB(0x00553737);
    /* 00553737: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00553739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055373a: ret  */ FN_RET(0x005536e0); r_esp += 4; return;
}

void f_0055373c(void) /* sub_55373C */
{
    FN_ENTER(0x0055373c);
    /* 0055373c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055373d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055373f: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00553746: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00553749: je 0x5537e6 */ if (fZ) goto L_005537e6;
L_0055374f:; BB(0x0055374f);
    /* 0055374f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553752: jne 0x553774 */ if (!fZ) goto L_00553774;
L_00553754:; BB(0x00553754);
    /* 00553754: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0055375a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055375c: je 0x5537e6 */ if (fZ) goto L_005537e6;
L_00553762:; BB(0x00553762);
    /* 00553762: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00553764: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0055376b: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00553772: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00553773: ret  */ FN_RET(0x0055373c); r_esp += 4; return;
L_00553774:; BB(0x00553774);
    /* 00553774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553776: jne 0x553799 */ if (!fZ) goto L_00553799;
L_00553778:; BB(0x00553778);
    /* 00553778: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0055377f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00553782: jne 0x5537e6 */ if (!fZ) goto L_005537e6;
L_00553784:; BB(0x00553784);
    /* 00553784: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0055378a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055378c: je 0x5537e6 */ if (fZ) goto L_005537e6;
L_0055378e:; BB(0x0055378e);
    /* 0055378e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00553790: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00553797: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00553798: ret  */ FN_RET(0x0055373c); r_esp += 4; return;
L_00553799:; BB(0x00553799);
    /* 00553799: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0055379f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005537a1: je 0x5537ae */ if (fZ) goto L_005537ae;
L_005537a3:; BB(0x005537a3);
    /* 005537a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005537a5: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 005537ac: jmp 0x5537ba */ goto L_005537ba;
L_005537ae:; BB(0x005537ae);
    /* 005537ae: mov eax, 1 */ r_eax = 0x1u;
    /* 005537b3: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
L_005537ba:; BB(0x005537ba);
    /* 005537ba: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005537bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005537be: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005537c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005537c7: call dword ptr [edx + 0x1a8] */ { u32 t = R32((u32)(r_edx+0x1a8u)); r_esp -= 4; W32(r_esp, 0x5537cdu); call_ind(t); }
    /* 005537cd: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005537d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005537d4: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005537d7: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005537dc: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005537df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005537e1: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5537e6u); f_007b52c4();
L_005537e6:; BB(0x005537e6);
    /* 005537e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005537e7: ret  */ FN_RET(0x0055373c); r_esp += 4; return;
}

void f_005537e8(void) /* sub_5537E8 */
{
    FN_ENTER(0x005537e8);
    /* 005537e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005537e9: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005537ec: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005537f1: je 0x553806 */ if (fZ) goto L_00553806;
L_005537f3:; BB(0x005537f3);
    /* 005537f3: mov ebp, 4 */ r_ebp = 0x4u;
    /* 005537f8: mov edx, 4 */ r_edx = 0x4u;
    /* 005537fd: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00553804: jmp 0x55380d */ goto L_0055380d;
L_00553806:; BB(0x00553806);
    /* 00553806: movsx ebp, word ptr [ecx + 0x32e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
L_0055380d:; BB(0x0055380d);
    /* 0055380d: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553810: je 0x55386e */ if (fZ) goto L_0055386e;
L_00553812:; BB(0x00553812);
    /* 00553812: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00553815: jl 0x553834 */ if ((fS!=fO)) goto L_00553834;
L_00553817:; BB(0x00553817);
    /* 00553817: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055381a: jle 0x55386c */ if ((fZ||fS!=fO)) goto L_0055386c;
L_0055381c:; BB(0x0055381c);
    /* 0055381c: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055381f: je 0x55386c */ if (fZ) goto L_0055386c;
L_00553821:; BB(0x00553821);
    /* 00553821: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00553824: jne 0x553834 */ if (!fZ) goto L_00553834;
L_00553826:; BB(0x00553826);
    /* 00553826: mov eax, 5 */ r_eax = 0x5u;
    /* 0055382b: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00553832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553833: ret  */ FN_RET(0x005537e8); r_esp += 4; return;
L_00553834:; BB(0x00553834);
    /* 00553834: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00553839: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055383b: mov edx, 3 */ r_edx = 0x3u;
    /* 00553840: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00553847: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0055384c: mov word ptr [ecx + 0x330], bp */ W16((u32)(r_ecx+0x330u), (u16)r_ebp);
    /* 00553853: mov edx, 2 */ r_edx = 0x2u;
    /* 00553858: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0055385f: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00553864: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00553867: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x55386cu); f_007b52ec();
L_0055386c:; BB(0x0055386c);
    /* 0055386c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055386d: ret  */ FN_RET(0x005537e8); r_esp += 4; return;
L_0055386e:; BB(0x0055386e);
    /* 0055386e: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 00553874: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00553876: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 0055387d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055387f: je 0x5538af */ if (fZ) goto L_005538af;
L_00553881:; BB(0x00553881);
    /* 00553881: mov edx, 2 */ r_edx = 0x2u;
    /* 00553886: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0055388d: mov ebp, 0xa */ r_ebp = 0xau;
    /* 00553892: mov word ptr [ecx + 0xb8], bp */ W16((u32)(r_ecx+0xb8u), (u16)r_ebp);
L_00553899:; BB(0x00553899);
    /* 00553899: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055389e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005538a0: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005538a5: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005538a8: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5538adu); f_007b52ec();
    /* 005538ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005538ae: ret  */ FN_RET(0x005537e8); r_esp += 4; return;
L_005538af:; BB(0x005538af);
    /* 005538af: mov edx, 3 */ r_edx = 0x3u;
    /* 005538b4: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 005538bb: mov ebp, 7 */ r_ebp = 0x7u;
    /* 005538c0: mov word ptr [ecx + 0xb8], bp */ W16((u32)(r_ecx+0xb8u), (u16)r_ebp);
    /* 005538c7: jmp 0x553899 */ goto L_00553899;
}

void f_005538cc(void) /* sub_5538CC */
{
    FN_ENTER(0x005538cc);
    /* 005538cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005538cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005538ce: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005538d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005538d3: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005538da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005538dc: je 0x553abb */ if (fZ) goto L_00553abb;
L_005538e2:; BB(0x005538e2);
    /* 005538e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005538e5: je 0x553abb */ if (fZ) goto L_00553abb;
L_005538eb:; BB(0x005538eb);
    /* 005538eb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005538ee: jl 0x5538fb */ if ((fS!=fO)) goto L_005538fb;
L_005538f0:; BB(0x005538f0);
    /* 005538f0: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005538f3: jle 0x553abb */ if ((fZ||fS!=fO)) goto L_00553abb;
L_005538f9:; BB(0x005538f9);
    /* 005538f9: jmp 0x55394e */ goto L_0055394e;
L_005538fb:; BB(0x005538fb);
    /* 005538fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005538fe: jne 0x55394e */ if (!fZ) goto L_0055394e;
L_00553900:; BB(0x00553900);
    /* 00553900: mov edx, dword ptr [ebp + 0x354] */ r_edx = R32((u32)(r_ebp+0x354u));
    /* 00553906: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00553908: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0055390f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553911: je 0x553ac1 */ if (fZ) goto L_00553ac1;
L_00553917:; BB(0x00553917);
    /* 00553917: mov eax, 2 */ r_eax = 0x2u;
    /* 0055391c: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00553923: mov edx, 0xa */ r_edx = 0xau;
    /* 00553928: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
L_0055392f:; BB(0x0055392f);
    /* 0055392f: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00553934: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553936: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00553939: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055393e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00553941: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00553943: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x553948u); f_007b52ec();
    /* 00553948: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055394b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055394c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055394d: ret  */ FN_RET(0x005538cc); r_esp += 4; return;
L_0055394e:; BB(0x0055394e);
    /* 0055394e: fld dword ptr [0x924930] */ FPUSH(R_F32((u32)(0x924930u)));
    /* 00553954: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 0055395b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0055395f: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00553964: jl 0x553998 */ if ((fS!=fO)) goto L_00553998;
L_00553966:; BB(0x00553966);
    /* 00553966: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055396b: jge 0x553a4a */ if ((fS==fO)) goto L_00553a4a;
L_00553971:; BB(0x00553971);
    /* 00553971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553972: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x553977u); f_00786b3c();
    /* 00553977: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055397a: je 0x553a4a */ if (fZ) goto L_00553a4a;
L_00553980:; BB(0x00553980);
    /* 00553980: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00553983: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 00553986: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00553987: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055398a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x55398fu); f_0082e900();
    /* 0055398f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00553993: jmp 0x553a4a */ goto L_00553a4a;
L_00553998:; BB(0x00553998);
    /* 00553998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553999: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x55399eu); f_0068d5a8();
    /* 0055399e: mov ebx, eax */ r_ebx = r_eax;
    /* 005539a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005539a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005539a5: je 0x553a4a */ if (fZ) goto L_00553a4a;
L_005539ab:; BB(0x005539ab);
    /* 005539ab: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005539ae: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005539b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005539b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005539b3: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5539b8u); f_007a9180();
    /* 005539b8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005539bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005539bf: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 005539c2: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 005539c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005539c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005539c9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5539ceu); f_0082e900();
    /* 005539ce: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005539d2: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 005539d8: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005539de: jne 0x553a4a */ if (!fZ) goto L_00553a4a;
L_005539e0:; BB(0x005539e0);
    /* 005539e0: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 005539e6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005539e9: mov ebx, dword ptr [ebp + 0x370] */ r_ebx = R32((u32)(r_ebp+0x370u));
    /* 005539ef: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 005539f2: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005539f5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005539f7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005539f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005539fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005539fc: jbe 0x553a4a */ if ((fC||fZ)) goto L_00553a4a;
L_005539fe:; BB(0x005539fe);
    /* 005539fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00553a00: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x553a05u); f_007751b0();
    /* 00553a05: fcomp dword ptr [ebp + 0x3d8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3d8u))); FPOP();
    /* 00553a0b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00553a0d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00553a0e: jae 0x553a4a */ if (!fC) goto L_00553a4a;
L_00553a10:; BB(0x00553a10);
    /* 00553a10: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00553a15: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00553a18: mov eax, 0xb */ r_eax = 0xbu;
    /* 00553a1d: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00553a24: or edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00553a2a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00553a2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00553a2d: mov word ptr [ebp + 0x330], bx */ W16((u32)(r_ebp+0x330u), (u16)r_ebx);
    /* 00553a34: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00553a3a: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00553a3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00553a3f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x553a44u); f_007b52ec();
    /* 00553a44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00553a47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00553a48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553a49: ret  */ FN_RET(0x005538cc); r_esp += 4; return;
L_00553a4a:; BB(0x00553a4a);
    /* 00553a4a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00553a4e: fcomp dword ptr [0x924968] */ fx_compare(ST(0), R_F32((u32)(0x924968u))); FPOP();
    /* 00553a54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00553a56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00553a57: jae 0x553abb */ if (!fC) goto L_00553abb;
L_00553a59:; BB(0x00553a59);
    /* 00553a59: mov eax, 5 */ r_eax = 0x5u;
    /* 00553a5e: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00553a65: mov edx, 1 */ r_edx = 0x1u;
    /* 00553a6a: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00553a71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00553a73: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x553a78u); f_007751b0();
    /* 00553a78: fcomp dword ptr [0x92492c] */ fx_compare(ST(0), R_F32((u32)(0x92492cu))); FPOP();
    /* 00553a7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00553a80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00553a81: jbe 0x553a91 */ if ((fC||fZ)) goto L_00553a91;
L_00553a83:; BB(0x00553a83);
    /* 00553a83: mov eax, 3 */ r_eax = 0x3u;
    /* 00553a88: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00553a8f: jmp 0x553a9d */ goto L_00553a9d;
L_00553a91:; BB(0x00553a91);
    /* 00553a91: mov eax, 4 */ r_eax = 0x4u;
    /* 00553a96: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_00553a9d:; BB(0x00553a9d);
    /* 00553a9d: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00553aa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553aa4: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00553aa7: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00553aac: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00553ab1: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00553ab4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00553ab6: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x553abbu); f_007b52ec();
L_00553abb:; BB(0x00553abb);
    /* 00553abb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00553abe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00553abf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553ac0: ret  */ FN_RET(0x005538cc); r_esp += 4; return;
L_00553ac1:; BB(0x00553ac1);
    /* 00553ac1: mov eax, 3 */ r_eax = 0x3u;
    /* 00553ac6: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00553acd: mov edx, 7 */ r_edx = 0x7u;
    /* 00553ad2: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00553ad9: jmp 0x55392f */ goto L_0055392f;
}

void f_00553ae0(void) /* sub_553AE0 */
{
    FN_ENTER(0x00553ae0);
    /* 00553ae0: mov eax, 1 */ r_eax = 0x1u;
    /* 00553ae5: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00553aec: ret  */ FN_RET(0x00553ae0); r_esp += 4; return;
}

void f_00553af0(void)
{
    FN_ENTER(0x00553af0);
    /* 00553af0: mov eax, dword ptr [0xa73a0c] */ r_eax = R32((u32)(0xa73a0cu));
    /* 00553af5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553af7: je 0x553b0a */ if (fZ) goto L_00553b0a;
L_00553af9:; BB(0x00553af9);
    /* 00553af9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553afa: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x553affu); f_00857e98();
    /* 00553aff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553b00: mov dword ptr [0xa73a0c], 0 */ W32((u32)(0xa73a0cu), 0x0u);
L_00553b0a:; BB(0x00553b0a);
    /* 00553b0a: mov eax, dword ptr [0xa73a08] */ r_eax = R32((u32)(0xa73a08u));
    /* 00553b0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553b11: je 0x553b24 */ if (fZ) goto L_00553b24;
L_00553b13:; BB(0x00553b13);
    /* 00553b13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553b14: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x553b19u); f_00857e98();
    /* 00553b19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553b1a: mov dword ptr [0xa73a08], 0 */ W32((u32)(0xa73a08u), 0x0u);
L_00553b24:; BB(0x00553b24);
    /* 00553b24: mov eax, dword ptr [0xa73a04] */ r_eax = R32((u32)(0xa73a04u));
    /* 00553b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553b2b: je 0x553b3e */ if (fZ) goto L_00553b3e;
L_00553b2d:; BB(0x00553b2d);
    /* 00553b2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553b2e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x553b33u); f_00857e98();
    /* 00553b33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553b34: mov dword ptr [0xa73a04], 0 */ W32((u32)(0xa73a04u), 0x0u);
L_00553b3e:; BB(0x00553b3e);
    /* 00553b3e: mov eax, dword ptr [0xa73a00] */ r_eax = R32((u32)(0xa73a00u));
    /* 00553b43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553b45: je 0x553b58 */ if (fZ) goto L_00553b58;
L_00553b47:; BB(0x00553b47);
    /* 00553b47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553b48: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x553b4du); f_00857e98();
    /* 00553b4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553b4e: mov dword ptr [0xa73a00], 0 */ W32((u32)(0xa73a00u), 0x0u);
L_00553b58:; BB(0x00553b58);
    /* 00553b58: mov ecx, dword ptr [0xa73a1c] */ r_ecx = R32((u32)(0xa73a1cu));
    /* 00553b5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553b60: je 0x553b75 */ if (fZ) goto L_00553b75;
L_00553b62:; BB(0x00553b62);
    /* 00553b62: je 0x553b6b */ if (fZ) goto L_00553b6b;
L_00553b64:; BB(0x00553b64);
    /* 00553b64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b66: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x553b6bu); f_0045a950();
L_00553b6b:; BB(0x00553b6b);
    /* 00553b6b: mov dword ptr [0xa73a1c], 0 */ W32((u32)(0xa73a1cu), 0x0u);
L_00553b75:; BB(0x00553b75);
    /* 00553b75: mov ecx, dword ptr [0xa73a18] */ r_ecx = R32((u32)(0xa73a18u));
    /* 00553b7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553b7d: je 0x553b92 */ if (fZ) goto L_00553b92;
L_00553b7f:; BB(0x00553b7f);
    /* 00553b7f: je 0x553b88 */ if (fZ) goto L_00553b88;
L_00553b81:; BB(0x00553b81);
    /* 00553b81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b83: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x553b88u); f_0045a950();
L_00553b88:; BB(0x00553b88);
    /* 00553b88: mov dword ptr [0xa73a18], 0 */ W32((u32)(0xa73a18u), 0x0u);
L_00553b92:; BB(0x00553b92);
    /* 00553b92: mov ecx, dword ptr [0xa73a10] */ r_ecx = R32((u32)(0xa73a10u));
    /* 00553b98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00553b9a: je 0x553baf */ if (fZ) goto L_00553baf;
L_00553b9c:; BB(0x00553b9c);
    /* 00553b9c: je 0x553ba5 */ if (fZ) goto L_00553ba5;
L_00553b9e:; BB(0x00553b9e);
    /* 00553b9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553ba0: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x553ba5u); f_004066a8();
L_00553ba5:; BB(0x00553ba5);
    /* 00553ba5: mov dword ptr [0xa73a10], 0 */ W32((u32)(0xa73a10u), 0x0u);
L_00553baf:; BB(0x00553baf);
    /* 00553baf: ret  */ FN_RET(0x00553af0); r_esp += 4; return;
}

void f_00553bb0(void)
{
    FN_ENTER(0x00553bb0);
    /* 00553bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00553bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00553bb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553bb5: push 0x8d60a6 */ { u32 v = 0x8d60a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00553bba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00553bc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553bc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00553bc8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00553bcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00553bce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00553bd1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00553bd4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00553bd7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00553bd9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00553be0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x553be5u); f_005caba4();
    /* 00553be5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553be6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00553be9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553beb: je 0x553c73 */ if (fZ) goto L_00553c73;
L_00553bf1:; BB(0x00553bf1);
    /* 00553bf1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00553bf8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00553bff: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00553c05: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00553c08: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x553c0du); f_00787a4c();
    /* 00553c0d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00553c10: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00553c17: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00553c1a:; BB(0x00553c1a);
    /* 00553c1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553c21: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00553c28: push 0x3f0 */ { u32 v = 0x3f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c2d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x553c32u); f_005caba4();
    /* 00553c32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553c33: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00553c36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553c38: je 0x553c6f */ if (fZ) goto L_00553c6f;
L_00553c3a:; BB(0x00553c3a);
    /* 00553c3a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00553c41: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00553c48: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00553c4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00553c4e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00553c51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553c52: call 0x553c7c */ r_esp -= 4; W32(r_esp, 0x553c57u); f_00553c7c();
    /* 00553c57: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00553c5a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00553c61:; BB(0x00553c61);
    /* 00553c61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00553c64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00553c6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00553c6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553c6e: ret  */ FN_RET(0x00553bb0); r_esp += 4; return;
L_00553c6f:; BB(0x00553c6f);
    /* 00553c6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00553c71: jmp 0x553c61 */ goto L_00553c61;
L_00553c73:; BB(0x00553c73);
    /* 00553c73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00553c75: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00553c78: jmp 0x553c1a */ goto L_00553c1a;
}

void f_00553c7c(void) /* sub_553C7C */
{
    FN_ENTER(0x00553c7c);
    /* 00553c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00553c7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00553c7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553c81: push 0x8d60d4 */ { u32 v = 0x8d60d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00553c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553c8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00553c94: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00553c97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00553c9a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00553c9d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00553ca0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00553ca3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00553ca6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00553ca9: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00553cac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00553caf: call 0x52b6ec */ r_esp -= 4; W32(r_esp, 0x553cb4u); f_0052b6ec();
    /* 00553cb4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00553cbb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553cbe: mov dword ptr [ecx], 0xb04480 */ W32((u32)(r_ecx), 0xb04480u);
    /* 00553cc4: add ecx, 0x3b0 */ {  u32 a = r_ecx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00553cca: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x553ccfu); f_00576a48();
    /* 00553ccf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00553cd6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553cd9: mov eax, dword ptr [0x9bdb18] */ r_eax = R32((u32)(0x9bdb18u));
    /* 00553cde: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00553ce1: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00553ce3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00553ce6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00553ce7: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x553cedu); call_ind(t); }
    /* 00553ced: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553cf0: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00553cf3: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00553cf6: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00553cf9: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00553cff: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00553d05: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553d08: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00553d0e: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00553d14: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00553d1a: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00553d20: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00553d26: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00553d2c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553d2f: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00553d35: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553d38: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00553d3e: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00553d41: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00553d47: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00553d4a: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00553d50: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00553d53: call 0x553fc8 */ r_esp -= 4; W32(r_esp, 0x553d58u); f_00553fc8();
    /* 00553d58: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553d5b: mov eax, dword ptr [0xa73a10] */ r_eax = R32((u32)(0xa73a10u));
    /* 00553d60: mov dword ptr [ecx + 0xd8], 0x9bd9c0 */ W32((u32)(r_ecx+0xd8u), 0x9bd9c0u);
    /* 00553d6a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00553d70: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00553d76: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00553d78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00553d79: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00553d80: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x553d85u); f_007aa4c8();
    /* 00553d85: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553d88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553d8a: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00553d91: mov edx, dword ptr [ecx + 0x370] */ r_edx = R32((u32)(r_ecx+0x370u));
    /* 00553d97: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00553d9e: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00553da1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00553da3: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00553da5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00553da7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00553da9: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00553dab: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00553dad: lea esi, [ebx + ebx + 0x9bd960] */ r_esi = (u32)(r_ebx+r_ebx+0x9bd960u);
    /* 00553db4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00553db5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x553dbau); f_007b9a88();
    /* 00553dba: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553dbd: mov ebx, dword ptr [0xa73a0c] */ r_ebx = R32((u32)(0xa73a0cu));
    /* 00553dc3: mov edx, dword ptr [0xa73a08] */ r_edx = R32((u32)(0xa73a08u));
    /* 00553dc9: mov eax, dword ptr [0xa73a04] */ r_eax = R32((u32)(0xa73a04u));
    /* 00553dce: mov esi, dword ptr [ecx + 0x370] */ r_esi = R32((u32)(r_ecx+0x370u));
    /* 00553dd4: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00553dd7: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00553dda: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00553ddd: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x553de2u); f_007868f8();
    /* 00553de2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553de5: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00553deb: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 00553df2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00553df4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00553df6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00553df9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00553dfb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00553dfd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00553dff: lea ebx, [edx + 0x9bdb1c] */ r_ebx = (u32)(r_edx+0x9bdb1cu);
    /* 00553e05: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00553e0b: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 00553e12: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x553e17u); f_00553448();
    /* 00553e17: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553e1a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553e1d: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00553e23: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00553e29: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00553e2f: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00553e32: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00553e35: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00553e38: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x553e3du); f_00786bbc();
    /* 00553e3d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553e40: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x553e45u); f_007751b0();
    /* 00553e45: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553e48: fld dword ptr [0x924928] */ FPUSH(R_F32((u32)(0x924928u)));
    /* 00553e4e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00553e50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00553e52: fmul dword ptr [0x924924] */ ST(0) = ST(0) * R_F32((u32)(0x924924u));
    /* 00553e58: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00553e5a: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00553e5d: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00553e60: mov esi, dword ptr [edx + 0x40] */ r_esi = R32((u32)(r_edx+0x40u));
    /* 00553e63: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00553e66: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00553e6a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00553e6f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00553e72: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 00553e75: fistp dword ptr [edx + 0x2b0] */ W32((u32)(r_edx+0x2b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00553e7b: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00553e7e: mov eax, 0xf */ r_eax = 0xfu;
    /* 00553e83: mov word ptr [edx + 0x342], ax */ W16((u32)(r_edx+0x342u), (u16)r_eax);
    /* 00553e8a: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00553e91: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 00553e97: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00553e99: mov word ptr [edx + 0x330], di */ W16((u32)(r_edx+0x330u), (u16)r_edi);
    /* 00553ea0: mov word ptr [edx + 0x37c], di */ W16((u32)(r_edx+0x37cu), (u16)r_edi);
    /* 00553ea7: mov word ptr [edx + 0x37e], di */ W16((u32)(r_edx+0x37eu), (u16)r_edi);
    /* 00553eae: mov dword ptr [edx + 0x3ec], edi */ W32((u32)(r_edx+0x3ecu), r_edi);
    /* 00553eb4: mov dword ptr [edx + 0x3e0], ecx */ W32((u32)(r_edx+0x3e0u), r_ecx);
    /* 00553eba: mov dword ptr [edx + 0x3e4], ebx */ W32((u32)(r_edx+0x3e4u), r_ebx);
    /* 00553ec0: mov dword ptr [edx + 0x3e8], esi */ W32((u32)(r_edx+0x3e8u), r_esi);
    /* 00553ec6: mov dword ptr [edx + 0x380], edi */ W32((u32)(r_edx+0x380u), r_edi);
    /* 00553ecc: mov dword ptr [edx + 0x384], edi */ W32((u32)(r_edx+0x384u), r_edi);
    /* 00553ed2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00553ed5: mov dword ptr [edx + 0x2e8], eax */ W32((u32)(r_edx+0x2e8u), r_eax);
    /* 00553edb: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00553ede: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00553ee3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00553ee6: mov eax, dword ptr [edx + 0x370] */ r_eax = R32((u32)(r_edx+0x370u));
    /* 00553eec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553eef: jne 0x553ef8 */ if (!fZ) goto L_00553ef8;
L_00553ef1:; BB(0x00553ef1);
    /* 00553ef1: mov ebx, 0xffcdde62 */ r_ebx = 0xffcdde62u;
    /* 00553ef6: jmp 0x553efd */ goto L_00553efd;
L_00553ef8:; BB(0x00553ef8);
    /* 00553ef8: mov ebx, 0xffde20bd */ r_ebx = 0xffde20bdu;
L_00553efd:; BB(0x00553efd);
    /* 00553efd: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 00553f03: lea ecx, [edx + 0x3b0] */ r_ecx = (u32)(r_edx+0x3b0u);
    /* 00553f09: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x553f0cu); call_ind(t); }
    /* 00553f0c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553f0f: mov dword ptr [eax + 0x398], 1 */ W32((u32)(r_eax+0x398u), 0x1u);
    /* 00553f19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00553f1a: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00553f1f: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x553f24u); f_00578cc4();
    /* 00553f24: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553f27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00553f28: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00553f2d: mov dword ptr [edx + 0x3cc], eax */ W32((u32)(r_edx+0x3ccu), r_eax);
    /* 00553f33: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x553f38u); f_00578cc4();
    /* 00553f38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553f3b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553f3e: mov edx, dword ptr [ecx + 0x370] */ r_edx = R32((u32)(r_ecx+0x370u));
    /* 00553f44: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00553f4a: mov eax, dword ptr [0xa73a00] */ r_eax = R32((u32)(0xa73a00u));
    /* 00553f4f: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00553f52: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00553f54: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 00553f5a: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00553f5d: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00553f60: mov dword ptr [ecx + 0x3a8], ebx */ W32((u32)(r_ecx+0x3a8u), r_ebx);
    /* 00553f66: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00553f69: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00553f6c: mov dword ptr [ecx + 0x3a4], ebx */ W32((u32)(r_ecx+0x3a4u), r_ebx);
    /* 00553f72: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00553f75: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00553f78: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 00553f7e: mov eax, 1 */ r_eax = 0x1u;
    /* 00553f83: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00553f8a: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00553f90: mov dword ptr [ecx + 0x3dc], 0 */ W32((u32)(r_ecx+0x3dcu), 0x0u);
    /* 00553f9a: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00553f9d: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00553fa3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00553fa5: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x553fabu); call_ind(t); }
    /* 00553fab: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00553fae: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00553fb1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00553fb4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00553fb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00553fba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00553fc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00553fc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553fc4: ret 8 */ FN_RET(0x00553c7c); r_esp += 12; return;
}

void f_00553fc8(void) /* sub_553FC8 */
{
    FN_ENTER(0x00553fc8);
    /* 00553fc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00553fc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00553fca: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00553fcc: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00553fd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00553fd4: jg 0x553fef */ if ((!fZ&&fS==fO)) goto L_00553fef;
L_00553fd6:; BB(0x00553fd6);
    /* 00553fd6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00553fd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00553fda: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
    /* 00553fe0: mov dword ptr [ebx + 0x370], eax */ W32((u32)(r_ebx+0x370u), r_eax);
    /* 00553fe6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00553fe8: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x553fedu); f_00787550();
    /* 00553fed: jmp 0x55400c */ goto L_0055400c;
L_00553fef:; BB(0x00553fef);
    /* 00553fef: mov dword ptr [ebx + 0x33c], 2 */ W32((u32)(r_ebx+0x33cu), 0x2u);
    /* 00553ff9: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00553ffb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00553ffd: mov dword ptr [ebx + 0x370], 1 */ W32((u32)(r_ebx+0x370u), 0x1u);
    /* 00554007: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x55400cu); f_00787550();
L_0055400c:; BB(0x0055400c);
    /* 0055400c: mov ecx, dword ptr [0xa73a10] */ r_ecx = R32((u32)(0xa73a10u));
    /* 00554012: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00554018: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 0055401e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554020: mov edi, dword ptr [edx + eax*8 + 8] */ r_edi = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 00554024: mov dword ptr [ebx + 0x34], edi */ W32((u32)(r_ebx+0x34u), r_edi);
    /* 00554027: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 0055402d: mov eax, dword ptr [edx + eax*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 00554031: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00554034: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x554039u); f_0082fa9c();
    /* 00554039: mov ecx, dword ptr [0xa73a10] */ r_ecx = R32((u32)(0xa73a10u));
    /* 0055403f: mov eax, dword ptr [0x9bd9f4] */ r_eax = R32((u32)(0x9bd9f4u));
    /* 00554044: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00554046: mov edi, dword ptr [ebx + 0x370] */ r_edi = R32((u32)(r_ebx+0x370u));
    /* 0055404c: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00554052: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00554054: mov ecx, dword ptr [ecx + 0x430] */ r_ecx = R32((u32)(r_ecx+0x430u));
    /* 0055405a: push dword ptr [ecx + eax*8 + 4] */ { u32 v = R32((u32)(r_ecx+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055405e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00554060: push dword ptr [edx + edi*8 + 8] */ { u32 v = R32((u32)(r_edx+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554064: mov ecx, dword ptr [0xa73a18] */ r_ecx = R32((u32)(0xa73a18u));
    /* 0055406a: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x55406fu); f_00579a28();
    /* 0055406f: mov ecx, dword ptr [0xa73a10] */ r_ecx = R32((u32)(0xa73a10u));
    /* 00554075: mov eax, dword ptr [0x9bda04] */ r_eax = R32((u32)(0x9bda04u));
    /* 0055407a: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0055407c: mov edi, dword ptr [ebx + 0x370] */ r_edi = R32((u32)(r_ebx+0x370u));
    /* 00554082: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00554088: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0055408a: mov ecx, dword ptr [ecx + 0x430] */ r_ecx = R32((u32)(r_ecx+0x430u));
    /* 00554090: push dword ptr [ecx + eax*8 + 4] */ { u32 v = R32((u32)(r_ecx+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554094: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00554096: push dword ptr [edx + edi*8 + 8] */ { u32 v = R32((u32)(r_edx+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055409a: mov ecx, dword ptr [0xa73a1c] */ r_ecx = R32((u32)(0xa73a1cu));
    /* 005540a0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5540a5u); f_00579a28();
    /* 005540a5: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5540aau); f_0082faac();
    /* 005540aa: fld dword ptr [0x92491c] */ FPUSH(R_F32((u32)(0x92491cu)));
    /* 005540b0: fld dword ptr [ebx + 0x364] */ FPUSH(R_F32((u32)(r_ebx+0x364u)));
    /* 005540b6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005540b8: fld dword ptr [ebx + 0x368] */ FPUSH(R_F32((u32)(r_ebx+0x368u)));
    /* 005540be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005540c0: fstp dword ptr [ebx + 0x3d4] */ W_F32((u32)(r_ebx+0x3d4u), ST(0)); FPOP();
    /* 005540c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005540c8: fstp dword ptr [ebx + 0x3d8] */ W_F32((u32)(r_ebx+0x3d8u), ST(0)); FPOP();
    /* 005540ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005540cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005540d0: ret  */ FN_RET(0x00553fc8); r_esp += 4; return;
}

