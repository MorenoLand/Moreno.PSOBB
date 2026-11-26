#include "protos.h"

void f_005840f0(void)
{
    FN_ENTER(0x005840f0);
    /* 005840f0: mov edi, dword ptr [esi + 0x3a4] */ r_edi = R32((u32)(r_esi+0x3a4u));
    /* 005840f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005840f8: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 005840fb: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005840ff: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00584103: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00584105: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00584107: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00584109: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0058410c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00584110: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00584112: fchs  */ ST(0) = -ST(0);
    /* 00584114: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00584116: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00584119: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058411b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0058411f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00584123: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584127: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 0058412d: mov edx, edi */ r_edx = r_edi;
    /* 0058412f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x584134u); f_0082f9c4();
    /* 00584134: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00584138: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0058413c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058413e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00584142: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00584144: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584146: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058414a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058414e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584152: mov edx, edi */ r_edx = r_edi;
    /* 00584154: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x584159u); f_0082ebac();
    /* 00584159: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0058415d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058415f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00584161: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00584166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584167: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x58416cu); f_00805608();
    /* 0058416c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058416f: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00584175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584177: jne 0x584188 */ if (!fZ) goto L_00584188;
L_00584179:; BB(0x00584179);
    /* 00584179: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 0058417f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00584182: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00584185: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00584188:; BB(0x00584188);
    /* 00584188: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058418b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058418c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058418d: ret  */ FN_RET(0x005840f0); r_esp += 4; return;
}

void f_00584190(void) /* sub_584190 */
{
    FN_ENTER(0x00584190);
    /* 00584190: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00584191: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00584192: mov edi, ecx */ r_edi = r_ecx;
    /* 00584194: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00584199: mov ecx, edi */ r_ecx = r_edi;
    /* 0058419b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058419d: push dword ptr [0xa74324] */ { u32 v = R32((u32)(0xa74324u)); r_esp -= 4; W32(r_esp, v); }
    /* 005841a3: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5841a6u); call_ind(t); }
    /* 005841a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005841a8: je 0x58423e */ if (fZ) goto L_0058423e;
L_005841ae:; BB(0x005841ae);
    /* 005841ae: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005841b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005841b6: je 0x58423e */ if (fZ) goto L_0058423e;
L_005841bc:; BB(0x005841bc);
    /* 005841bc: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5841c1u); f_00578b38();
    /* 005841c1: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005841c6: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005841cb: or eax, 0x1000001 */ {  u32 a = r_eax; u32 b = 0x1000001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005841d0: lea ebx, [edi + 0x3f4] */ r_ebx = (u32)(r_edi+0x3f4u);
    /* 005841d6: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005841db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005841dd: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5841e2u); f_005771a4();
    /* 005841e2: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 005841e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005841e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005841eb: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5841f0u); f_0057725c();
    /* 005841f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005841f2: je 0x58421e */ if (fZ) goto L_0058421e;
L_005841f4:; BB(0x005841f4);
    /* 005841f4: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 005841fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005841fc: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5841ffu); call_ind(t); }
    /* 005841ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00584201: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x584206u); f_008173d0();
    /* 00584206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584208: jne 0x584211 */ if (!fZ) goto L_00584211;
L_0058420a:; BB(0x0058420a);
    /* 0058420a: mov ecx, edi */ r_ecx = r_edi;
    /* 0058420c: call 0x584260 */ r_esp -= 4; W32(r_esp, 0x584211u); f_00584260();
L_00584211:; BB(0x00584211);
    /* 00584211: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 00584217: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584219: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x58421cu); call_ind(t); }
    /* 0058421c: jmp 0x584225 */ goto L_00584225;
L_0058421e:; BB(0x0058421e);
    /* 0058421e: mov ecx, edi */ r_ecx = r_edi;
    /* 00584220: call 0x584260 */ r_esp -= 4; W32(r_esp, 0x584225u); f_00584260();
L_00584225:; BB(0x00584225);
    /* 00584225: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0058422a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0058422f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x584234u); f_0082dab0();
    /* 00584234: mov ecx, edi */ r_ecx = r_edi;
    /* 00584236: call 0x5842a8 */ r_esp -= 4; W32(r_esp, 0x58423bu); f_005842a8();
    /* 0058423b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058423c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058423d: ret  */ FN_RET(0x00584190); r_esp += 4; return;
L_0058423e:; BB(0x0058423e);
    /* 0058423e: mov dword ptr [edi + 0x3b4], 0 */ W32((u32)(r_edi+0x3b4u), 0x0u);
    /* 00584248: mov dword ptr [edi + 0x3b0], 0 */ W32((u32)(r_edi+0x3b0u), 0x0u);
    /* 00584252: mov dword ptr [edi + 0x3ac], 0 */ W32((u32)(r_edi+0x3acu), 0x0u);
    /* 0058425c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058425d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058425e: ret  */ FN_RET(0x00584190); r_esp += 4; return;
}

void f_00584260(void) /* sub_584260 */
{
    FN_ENTER(0x00584260);
    /* 00584260: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00584261: mov edi, ecx */ r_edi = r_ecx;
    /* 00584263: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x584268u); f_0082d7b0();
    /* 00584268: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0058426b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x584270u); f_0082d838();
    /* 00584270: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00584273: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00584275: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x58427au); f_0082d8bc();
    /* 0058427a: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0058427d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x584282u); f_00829cc8();
    /* 00584282: mov ecx, dword ptr [edi + 0x3e4] */ r_ecx = R32((u32)(r_edi+0x3e4u));
    /* 00584288: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x58428du); f_00588428();
    /* 0058428d: mov ecx, edi */ r_ecx = r_edi;
    /* 0058428f: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x584294u); f_007aa668();
    /* 00584294: mov ecx, dword ptr [edi + 0x3e4] */ r_ecx = R32((u32)(r_edi+0x3e4u));
    /* 0058429a: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x58429fu); f_00452050();
    /* 0058429f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5842a4u); f_0082da80();
    /* 005842a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005842a5: ret  */ FN_RET(0x00584260); r_esp += 4; return;
}

void f_005842a8(void) /* sub_5842A8 */
{
    FN_ENTER(0x005842a8);
    /* 005842a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005842a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005842aa: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005842ad: mov esi, ecx */ r_esi = r_ecx;
    /* 005842af: mov eax, dword ptr [esi + 0x3e8] */ r_eax = R32((u32)(r_esi+0x3e8u));
    /* 005842b5: mov edx, dword ptr [esi + 0x3ec] */ r_edx = R32((u32)(r_esi+0x3ecu));
    /* 005842bb: mov dword ptr [esi + 0x3ac], eax */ W32((u32)(r_esi+0x3acu), r_eax);
    /* 005842c1: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 005842c7: mov dword ptr [esi + 0x3b0], edx */ W32((u32)(r_esi+0x3b0u), r_edx);
    /* 005842cd: mov dword ptr [esi + 0x3b4], eax */ W32((u32)(r_esi+0x3b4u), r_eax);
    /* 005842d3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005842d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005842d7: lea ebp, [esi + 0x3ac] */ r_ebp = (u32)(r_esi+0x3acu);
    /* 005842dd: mov ecx, esi */ r_ecx = r_esi;
    /* 005842df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005842e0: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5842e5u); f_007b4c58();
    /* 005842e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005842e7: jne 0x5842ef */ if (!fZ) goto L_005842ef;
L_005842e9:; BB(0x005842e9);
    /* 005842e9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005842ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005842ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005842ee: ret  */ FN_RET(0x005842a8); r_esp += 4; return;
L_005842ef:; BB(0x005842ef);
    /* 005842ef: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5842f4u); f_0082d7b0();
    /* 005842f4: fld dword ptr [0x928238] */ FPUSH(R_F32((u32)(0x928238u)));
    /* 005842fa: fadd dword ptr [esi + 0x3b0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3b0u));
    /* 00584300: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
    /* 00584306: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00584308: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x58430du); f_0082d838();
    /* 0058430d: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 00584310: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00584314: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00584318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584319: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058431a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058431b: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x584320u); f_007a8d98();
    /* 00584320: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584323: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00584327: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00584329: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x58432eu); f_00830c04();
    /* 0058432e: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00584331: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00584333: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x584338u); f_0082d8bc();
    /* 00584338: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0058433c: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00584342: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00584344: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x584349u); f_0082e9e4();
    /* 00584349: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058434e: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00584353: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00584358: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058435a: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x58435fu); f_0082fa0c();
    /* 0058435f: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00584365: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584368: je 0x584377 */ if (fZ) goto L_00584377;
L_0058436a:; BB(0x0058436a);
    /* 0058436a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058436d: je 0x584377 */ if (fZ) goto L_00584377;
L_0058436f:; BB(0x0058436f);
    /* 0058436f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00584371: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x584376u); f_0052d46c();
    /* 00584376: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00584377:; BB(0x00584377);
    /* 00584377: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58437cu); f_0082da80();
    /* 0058437c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058437f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584381: ret  */ FN_RET(0x005842a8); r_esp += 4; return;
}

void f_00584384(void) /* sub_584384 */
{
    FN_ENTER(0x00584384);
    /* 00584384: movzx eax, byte ptr [0xa742ac] */ r_eax = (u32)R8((u32)(0xa742acu));
    /* 0058438b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058438d: jne 0x5843ab */ if (!fZ) goto L_005843ab;
L_0058438f:; BB(0x0058438f);
    /* 0058438f: fld dword ptr [0x928454] */ FPUSH(R_F32((u32)(0x928454u)));
    /* 00584395: mov dword ptr [0xa742b0], 0x447a0000 */ W32((u32)(0xa742b0u), 0x447a0000u);
    /* 0058439f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005843a4: mov byte ptr [0xa742ac], al */ W8((u32)(0xa742acu), (u8)r_eax);
    /* 005843a9: jmp 0x5843b1 */ goto L_005843b1;
L_005843ab:; BB(0x005843ab);
    /* 005843ab: fld dword ptr [0xa742b0] */ FPUSH(R_F32((u32)(0xa742b0u)));
L_005843b1:; BB(0x005843b1);
    /* 005843b1: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 005843b7: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005843ba: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005843bc: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005843bf: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 005843c2: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005843c5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005843c7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005843ca: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 005843cd: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005843d0: fst dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0));
    /* 005843d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005843d5: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 005843d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005843da: fstp dword ptr [ecx + 0x300] */ W_F32((u32)(r_ecx+0x300u), ST(0)); FPOP();
    /* 005843e0: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 005843e6: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005843e9: mov dword ptr [ecx + 0x308], eax */ W32((u32)(r_ecx+0x308u), r_eax);
    /* 005843ef: ret  */ FN_RET(0x00584384); r_esp += 4; return;
}

void f_005843f0(void) /* sub_5843F0 */
{
    FN_ENTER(0x005843f0);
    /* 005843f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005843f1: mov esi, ecx */ r_esi = r_ecx;
    /* 005843f3: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 005843f9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005843fb: je 0x58442f */ if (fZ) goto L_0058442f;
L_005843fd:; BB(0x005843fd);
    /* 005843fd: mov ecx, esi */ r_ecx = r_esi;
    /* 005843ff: call 0x584434 */ r_esp -= 4; W32(r_esp, 0x584404u); f_00584434();
    /* 00584404: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 0058440a: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584410: je 0x584418 */ if (fZ) goto L_00584418;
L_00584412:; BB(0x00584412);
    /* 00584412: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00584418:; BB(0x00584418);
    /* 00584418: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 0058441d: mov dword ptr [esi + 0x380], 2 */ W32((u32)(r_esi+0x380u), 0x2u);
    /* 00584427: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00584429: je 0x58442f */ if (fZ) goto L_0058442f;
L_0058442b:; BB(0x0058442b);
    /* 0058442b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058442d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58442fu); call_ind(t); }
L_0058442f:; BB(0x0058442f);
    /* 0058442f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584430: ret  */ FN_RET(0x005843f0); r_esp += 4; return;
}

void f_00584434(void) /* sub_584434 */
{
    FN_ENTER(0x00584434);
    /* 00584434: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00584437: lea eax, [ecx + 0x60] */ r_eax = (u32)(r_ecx+0x60u);
    /* 0058443a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058443b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058443c: call 0x584444 */ r_esp -= 4; W32(r_esp, 0x584441u); f_00584444();
    /* 00584441: ret  */ FN_RET(0x00584434); r_esp += 4; return;
}

void f_00584444(void) /* sub_584444 */
{
    FN_ENTER(0x00584444);
    /* 00584444: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00584445: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584446: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584447: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058444a: mov edi, ecx */ r_edi = r_ecx;
    /* 0058444c: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00584450: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00584454: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 0058445a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0058445d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058445f: fld dword ptr [eax + edx*8 + 0x928244] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x928244u)));
    /* 00584466: fld dword ptr [eax + edx*8 + 0x92824c] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x92824cu)));
    /* 0058446d: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 00584473: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584476: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584478: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058447c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00584480: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x584485u); f_0082dcbc();
    /* 00584485: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00584488: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 0058448e: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584491: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x584496u); f_0082ddd8();
    /* 00584496: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058449a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058449e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005844a0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005844a2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005844a5: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005844a7: mov ecx, dword ptr [edi + 0x3a4] */ r_ecx = R32((u32)(r_edi+0x3a4u));
    /* 005844ad: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005844b1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005844b5: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 005844b7: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 005844ba: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 005844bc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005844be: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 005844c0: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005844c3: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 005844c5: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005844c8: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 005844cb: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 005844ce: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005844d0: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 005844d2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005844d4: fchs  */ ST(0) = -ST(0);
    /* 005844d6: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005844d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005844da: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005844dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005844de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005844e0: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 005844e3: je 0x5844fe */ if (fZ) goto L_005844fe;
L_005844e5:; BB(0x005844e5);
    /* 005844e5: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 005844eb: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 005844f1: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005844f4: sub ecx, dword ptr [edx*4 + 0x92823c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0x92823cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005844fb: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
L_005844fe:; BB(0x005844fe);
    /* 005844fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584503: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584504: ret 8 */ FN_RET(0x00584444); r_esp += 12; return;
}

void f_00584508(void) /* sub_584508 */
{
    FN_ENTER(0x00584508);
    /* 00584508: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00584509: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058450a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058450b: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058450e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00584510: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 00584516: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584519: mov dword ptr [ebx + 0x3bc], eax */ W32((u32)(r_ebx+0x3bcu), r_eax);
    /* 0058451f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00584521: jle 0x58452a */ if ((fZ||fS!=fO)) goto L_0058452a;
L_00584523:; BB(0x00584523);
    /* 00584523: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584526: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584527: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584528: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584529: ret  */ FN_RET(0x00584508); r_esp += 4; return;
L_0058452a:; BB(0x0058452a);
    /* 0058452a: jne 0x584547 */ if (!fZ) goto L_00584547;
L_0058452c:; BB(0x0058452c);
    /* 0058452c: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00584532: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00584535: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 0058453b: mov edx, 1 */ r_edx = 0x1u;
    /* 00584540: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
L_00584547:; BB(0x00584547);
    /* 00584547: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0058454d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584550: je 0x584b3a */ if (fZ) goto L_00584b3a;
L_00584556:; BB(0x00584556);
    /* 00584556: movzx edx, byte ptr [0xa742b4] */ r_edx = (u32)R8((u32)(0xa742b4u));
    /* 0058455d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584560: jne 0x584578 */ if (!fZ) goto L_00584578;
L_00584562:; BB(0x00584562);
    /* 00584562: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 00584567: mov dword ptr [0xa742bc], eax */ W32((u32)(0xa742bcu), r_eax);
    /* 0058456c: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00584572: mov byte ptr [0xa742b4], dl */ W8((u32)(0xa742b4u), (u8)r_edx);
L_00584578:; BB(0x00584578);
    /* 00584578: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058457b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058457c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058457e: push dword ptr [0xa742bc] */ { u32 v = R32((u32)(0xa742bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00584584: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x584589u); f_007714cc();
    /* 00584589: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 0058458c: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584592: je 0x5846ed */ if (fZ) goto L_005846ed;
L_00584598:; BB(0x00584598);
    /* 00584598: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0058459b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0058459f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005845a1: fmul qword ptr [0x928360] */ ST(0) = ST(0) * R_F64((u32)(0x928360u));
    /* 005845a7: fdiv qword ptr [0x928358] */ ST(0) = ST(0) / R_F64((u32)(0x928358u));
    /* 005845ad: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 005845b1: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 005845b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005845bb: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005845bf: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 005845c3: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005845c7: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 005845cb: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 005845cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005845d0: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005845d3: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5845d8u); f_007a9018();
    /* 005845d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005845db: cmp eax, 0x208 */ {  u32 a = r_eax; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005845e0: jge 0x5846ed */ if ((fS==fO)) goto L_005846ed;
L_005845e6:; BB(0x005845e6);
    /* 005845e6: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 005845eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005845ec: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005845ef: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5845f4u); f_007a8c74();
    /* 005845f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005845f7: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005845fa: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584601: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584603: je 0x584ada */ if (fZ) goto L_00584ada;
L_00584609:; BB(0x00584609);
    /* 00584609: fld dword ptr [0xa742c0] */ FPUSH(R_F32((u32)(0xa742c0u)));
    /* 0058460f: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00584613: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00584614: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x584619u); f_0068d5a8();
    /* 00584619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058461a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058461c: je 0x5846d9 */ if (fZ) goto L_005846d9;
L_00584622:; BB(0x00584622);
    /* 00584622: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00584628: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058462b: jne 0x584637 */ if (!fZ) goto L_00584637;
L_0058462d:; BB(0x0058462d);
    /* 0058462d: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00584631: fchs  */ ST(0) = -ST(0);
    /* 00584633: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00584637:; BB(0x00584637);
    /* 00584637: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0058463a: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 0058463d: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00584640: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00584643: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00584647: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0058464b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0058464f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x584654u); f_0082ddd8();
    /* 00584654: fmul dword ptr [esp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x54u));
    /* 00584658: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0058465c: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058465f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00584663: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x584668u); f_0082dcbc();
    /* 00584668: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0058466c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584670: fchs  */ ST(0) = -ST(0);
    /* 00584672: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00584674: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00584678: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058467c: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0058467f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x584684u); f_0082f9c4();
    /* 00584684: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0058468c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584690: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x584695u); f_0083173c();
    /* 00584695: fcomp dword ptr [0x928444] */ fx_compare(ST(0), R_F32((u32)(0x928444u))); FPOP();
    /* 0058469b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058469d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058469e: ja 0x5846ba */ if ((!fC&&!fZ)) goto L_005846ba;
L_005846a0:; BB(0x005846a0);
    /* 005846a0: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846a6: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846ac: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005846b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846b8: jmp 0x584734 */ goto L_00584734;
L_005846ba:; BB(0x005846ba);
    /* 005846ba: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005846be: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5846c3u); f_0082df08();
    /* 005846c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005846c5: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005846c9: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005846cd: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846d5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005846d7: jmp 0x584734 */ goto L_00584734;
L_005846d9:; BB(0x005846d9);
    /* 005846d9: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005846dd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005846e1: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005846eb: jmp 0x584734 */ goto L_00584734;
L_005846ed:; BB(0x005846ed);
    /* 005846ed: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 005846f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005846f5: jne 0x584705 */ if (!fZ) goto L_00584705;
L_005846f7:; BB(0x005846f7);
    /* 005846f7: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 005846fa: add ecx, 0xfffffdf8 */ {  u32 a = r_ecx; u32 b = 0xfffffdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00584700: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 00584703: jmp 0x584711 */ goto L_00584711;
L_00584705:; BB(0x00584705);
    /* 00584705: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00584708: add ecx, 0x208 */ {  u32 a = r_ecx; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058470e: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
L_00584711:; BB(0x00584711);
    /* 00584711: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x584716u); f_0082dcbc();
    /* 00584716: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00584719: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058471d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x584722u); f_0082ddd8();
    /* 00584722: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 00584728: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0058472c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
L_00584734:; BB(0x00584734);
    /* 00584734: fld dword ptr [0x92825c] */ FPUSH(R_F32((u32)(0x92825cu)));
    /* 0058473a: fadd dword ptr [ebx + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3b8u));
    /* 00584740: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00584746: fld dword ptr [edx*4 + 0x928260] */ FPUSH(R_F32((u32)(r_edx*4+0x928260u)));
    /* 0058474d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058474f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584751: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584752: mov edx, dword ptr [edx*4 + 0x928260] */ r_edx = R32((u32)(r_edx*4+0x928260u));
    /* 00584759: jae 0x584765 */ if (!fC) goto L_00584765;
L_0058475b:; BB(0x0058475b);
    /* 0058475b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058475d: mov dword ptr [ebx + 0x3b8], edx */ W32((u32)(r_ebx+0x3b8u), r_edx);
    /* 00584763: jmp 0x58476d */ goto L_0058476d;
L_00584765:; BB(0x00584765);
    /* 00584765: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00584767: fst dword ptr [ebx + 0x3b8] */ W_F32((u32)(r_ebx+0x3b8u), ST(0));
L_0058476d:; BB(0x0058476d);
    /* 0058476d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058476f: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00584771: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584773: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00584777: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0058477b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058477d: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00584781: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584783: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00584787: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0058478b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0058478f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x584794u); f_0083173c();
    /* 00584794: fcomp dword ptr [0x92844c] */ fx_compare(ST(0), R_F32((u32)(0x92844cu))); FPOP();
    /* 0058479a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058479c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058479d: je 0x5848fb */ if (fZ) goto L_005848fb;
L_005847a3:; BB(0x005847a3);
    /* 005847a3: movzx edx, byte ptr [0xa74328] */ r_edx = (u32)R8((u32)(0xa74328u));
    /* 005847aa: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005847ad: jne 0x5847c2 */ if (!fZ) goto L_005847c2;
L_005847af:; BB(0x005847af);
    /* 005847af: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 005847b4: mov dword ptr [0xa7432c], eax */ W32((u32)(0xa7432cu), r_eax);
    /* 005847b9: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005847bc: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_005847c2:; BB(0x005847c2);
    /* 005847c2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005847c5: jne 0x5847e1 */ if (!fZ) goto L_005847e1;
L_005847c7:; BB(0x005847c7);
    /* 005847c7: fld dword ptr [0xa7432c] */ FPUSH(R_F32((u32)(0xa7432cu)));
    /* 005847cd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005847cf: fstp dword ptr [0xa74330] */ W_F32((u32)(0xa74330u), ST(0)); FPOP();
    /* 005847d5: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005847db: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_005847e1:; BB(0x005847e1);
    /* 005847e1: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005847e5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005847e9: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005847ec: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 005847ef: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 005847f2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005847f6: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 005847fa: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 005847fe: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x584803u); f_0082ebac();
    /* 00584803: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00584807: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0058480a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058480b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058480c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x584811u); f_007a9180();
    /* 00584811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584814: fcomp dword ptr [0xa74330] */ fx_compare(ST(0), R_F32((u32)(0xa74330u))); FPOP();
    /* 0058481a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058481c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058481d: ja 0x5848fb */ if ((!fC&&!fZ)) goto L_005848fb;
L_00584823:; BB(0x00584823);
    /* 00584823: mov esi, 1 */ r_esi = 0x1u;
L_00584828:; BB(0x00584828);
    /* 00584828: movzx eax, byte ptr [0xa74328] */ r_eax = (u32)R8((u32)(0xa74328u));
    /* 0058482f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584831: jne 0x584847 */ if (!fZ) goto L_00584847;
L_00584833:; BB(0x00584833);
    /* 00584833: mov dword ptr [0xa74334], 0x41200000 */ W32((u32)(0xa74334u), 0x41200000u);
    /* 0058483d: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584842: mov byte ptr [0xa74328], al */ W8((u32)(0xa74328u), (u8)r_eax);
L_00584847:; BB(0x00584847);
    /* 00584847: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0058484b: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0058484f: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00584852: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00584855: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00584859: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058485c: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00584860: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00584864: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x584869u); f_0082ebac();
    /* 00584869: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0058486d: fadd dword ptr [0xa74334] */ ST(0) = ST(0) + R_F32((u32)(0xa74334u));
    /* 00584873: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00584877: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0058487b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058487d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058487f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584880: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x584885u); f_007b4c58();
    /* 00584885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584887: je 0x5848a2 */ if (fZ) goto L_005848a2;
L_00584889:; BB(0x00584889);
    /* 00584889: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0058488d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058488e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00584891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584892: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x584897u); f_00780d3c();
    /* 00584897: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058489a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058489c: je 0x584b07 */ if (fZ) goto L_00584b07;
L_005848a2:; BB(0x005848a2);
    /* 005848a2: mov edi, esi */ r_edi = r_esi;
    /* 005848a4: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005848a7: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005848ad: je 0x5848b1 */ if (fZ) goto L_005848b1;
L_005848af:; BB(0x005848af);
    /* 005848af: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_005848b1:; BB(0x005848b1);
    /* 005848b1: mov ecx, edi */ r_ecx = r_edi;
    /* 005848b3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5848b8u); f_0082dcbc();
    /* 005848b8: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 005848bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005848be: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5848c3u); f_0082ddd8();
    /* 005848c3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005848c7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005848cb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 005848cf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005848d3: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005848d5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005848d7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005848d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005848db: fchs  */ ST(0) = -ST(0);
    /* 005848dd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005848df: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005848e1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005848e3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005848e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005848e8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005848ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005848ee: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005848f2: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005848f5: jl 0x584828 */ if ((fS!=fO)) goto L_00584828;
L_005848fb:; BB(0x005848fb);
    /* 005848fb: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 00584901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584903: jne 0x584958 */ if (!fZ) goto L_00584958;
L_00584905:; BB(0x00584905);
    /* 00584905: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 0058490b: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00584911: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584914: je 0x584afd */ if (fZ) goto L_00584afd;
L_0058491a:; BB(0x0058491a);
    /* 0058491a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058491d: je 0x584afd */ if (fZ) goto L_00584afd;
L_00584923:; BB(0x00584923);
    /* 00584923: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00584925:; BB(0x00584925);
    /* 00584925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584927: jne 0x584958 */ if (!fZ) goto L_00584958;
L_00584929:; BB(0x00584929);
    /* 00584929: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0058492f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584931: jne 0x584958 */ if (!fZ) goto L_00584958;
L_00584933:; BB(0x00584933);
    /* 00584933: mov esi, dword ptr [ebx + 0x3c4] */ r_esi = R32((u32)(r_ebx+0x3c4u));
    /* 00584939: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00584940: mov eax, esi */ r_eax = r_esi;
    /* 00584942: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00584945: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00584947: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00584949: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058494b: jg 0x584954 */ if ((!fZ&&fS==fO)) goto L_00584954;
L_0058494d:; BB(0x0058494d);
    /* 0058494d: mov eax, 1 */ r_eax = 0x1u;
    /* 00584952: jmp 0x58495a */ goto L_0058495a;
L_00584954:; BB(0x00584954);
    /* 00584954: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00584956: jmp 0x58495a */ goto L_0058495a;
L_00584958:; BB(0x00584958);
    /* 00584958: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0058495a:; BB(0x0058495a);
    /* 0058495a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058495c: je 0x584990 */ if (fZ) goto L_00584990;
L_0058495e:; BB(0x0058495e);
    /* 0058495e: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584964: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058496a: je 0x584972 */ if (fZ) goto L_00584972;
L_0058496c:; BB(0x0058496c);
    /* 0058496c: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584972:; BB(0x00584972);
    /* 00584972: mov eax, dword ptr [0x9bf5e0] */ r_eax = R32((u32)(0x9bf5e0u));
    /* 00584977: mov dword ptr [ebx + 0x380], 0xc */ W32((u32)(r_ebx+0x380u), 0xcu);
    /* 00584981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584983: je 0x584989 */ if (fZ) goto L_00584989;
L_00584985:; BB(0x00584985);
    /* 00584985: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584987: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584989u); call_ind(t); }
L_00584989:; BB(0x00584989);
    /* 00584989: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058498c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058498d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058498e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058498f: ret  */ FN_RET(0x00584508); r_esp += 4; return;
L_00584990:; BB(0x00584990);
    /* 00584990: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00584996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584998: je 0x58499e */ if (fZ) goto L_0058499e;
L_0058499a:; BB(0x0058499a);
    /* 0058499a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058499c: jmp 0x5849cb */ goto L_005849cb;
L_0058499e:; BB(0x0058499e);
    /* 0058499e: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 005849a4: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 005849aa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849ad: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849b3:; BB(0x005849b3);
    /* 005849b3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849b6: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849bc:; BB(0x005849bc);
    /* 005849bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849be:; BB(0x005849be);
    /* 005849be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849c0: je 0x5849c9 */ if (fZ) goto L_005849c9;
L_005849c2:; BB(0x005849c2);
    /* 005849c2: mov eax, 1 */ r_eax = 0x1u;
    /* 005849c7: jmp 0x5849cb */ goto L_005849cb;
L_005849c9:; BB(0x005849c9);
    /* 005849c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849cb:; BB(0x005849cb);
    /* 005849cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849cd: je 0x584a01 */ if (fZ) goto L_00584a01;
L_005849cf:; BB(0x005849cf);
    /* 005849cf: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 005849d5: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849db: je 0x5849e3 */ if (fZ) goto L_005849e3;
L_005849dd:; BB(0x005849dd);
    /* 005849dd: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_005849e3:; BB(0x005849e3);
    /* 005849e3: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 005849e8: mov dword ptr [ebx + 0x380], 0x10 */ W32((u32)(r_ebx+0x380u), 0x10u);
    /* 005849f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849f4: je 0x5849fa */ if (fZ) goto L_005849fa;
L_005849f6:; BB(0x005849f6);
    /* 005849f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005849f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5849fau); call_ind(t); }
L_005849fa:; BB(0x005849fa);
    /* 005849fa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005849fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005849fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005849ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584a00: ret  */ FN_RET(0x00584508); r_esp += 4; return;
L_00584a01:; BB(0x00584a01);
    /* 00584a01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a03: call 0x584be4 */ r_esp -= 4; W32(r_esp, 0x584a08u); f_00584be4();
    /* 00584a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a0a: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a10:; BB(0x00584a10);
    /* 00584a10: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584a17: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a19: jne 0x584a2d */ if (!fZ) goto L_00584a2d;
L_00584a1b:; BB(0x00584a1b);
    /* 00584a1b: mov dword ptr [0xa742c4], 0x41dc0000 */ W32((u32)(0xa742c4u), 0x41dc0000u);
    /* 00584a25: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a28: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a2d:; BB(0x00584a2d);
    /* 00584a2d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a2f: jne 0x584a49 */ if (!fZ) goto L_00584a49;
L_00584a31:; BB(0x00584a31);
    /* 00584a31: fld dword ptr [0xa742c4] */ FPUSH(R_F32((u32)(0xa742c4u)));
    /* 00584a37: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00584a39: fstp dword ptr [0xa742c8] */ W_F32((u32)(0xa742c8u), ST(0)); FPOP();
    /* 00584a3f: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a44: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a49:; BB(0x00584a49);
    /* 00584a49: movzx eax, word ptr [ebx + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 00584a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a51: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x584a56u); f_007b4d18();
    /* 00584a56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00584a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a59: je 0x584aa8 */ if (fZ) goto L_00584aa8;
L_00584a5b:; BB(0x00584a5b);
    /* 00584a5b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584a5e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00584a61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584a62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a63: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x584a68u); f_007a9180();
    /* 00584a68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584a6b: fcomp dword ptr [0xa742c8] */ fx_compare(ST(0), R_F32((u32)(0xa742c8u))); FPOP();
    /* 00584a71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584a73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584a74: jae 0x584aa8 */ if (!fC) goto L_00584aa8;
L_00584a76:; BB(0x00584a76);
    /* 00584a76: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584a7c: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a82: je 0x584a8a */ if (fZ) goto L_00584a8a;
L_00584a84:; BB(0x00584a84);
    /* 00584a84: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584a8a:; BB(0x00584a8a);
    /* 00584a8a: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00584a8f: mov dword ptr [ebx + 0x380], 0xa */ W32((u32)(r_ebx+0x380u), 0xau);
    /* 00584a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a9b: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a9d:; BB(0x00584a9d);
    /* 00584a9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584aa1u); call_ind(t); }
L_00584aa1:; BB(0x00584aa1);
    /* 00584aa1: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584aa4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584aa5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584aa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584aa7: ret  */ FN_RET(0x00584508); r_esp += 4; return;
L_00584aa8:; BB(0x00584aa8);
    /* 00584aa8: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584aae: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584ab4: je 0x584abc */ if (fZ) goto L_00584abc;
L_00584ab6:; BB(0x00584ab6);
    /* 00584ab6: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584abc:; BB(0x00584abc);
    /* 00584abc: mov eax, dword ptr [0x9bf5c8] */ r_eax = R32((u32)(0x9bf5c8u));
    /* 00584ac1: mov dword ptr [ebx + 0x380], 9 */ W32((u32)(r_ebx+0x380u), 0x9u);
    /* 00584acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584acd: je 0x584ad3 */ if (fZ) goto L_00584ad3;
L_00584acf:; BB(0x00584acf);
    /* 00584acf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584ad1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ad3u); call_ind(t); }
L_00584ad3:; BB(0x00584ad3);
    /* 00584ad3: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584ad6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584ad7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584ad8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584ad9: ret  */ FN_RET(0x00584508); r_esp += 4; return;
L_00584ada:; BB(0x00584ada);
    /* 00584ada: mov dword ptr [0xa742c0], 0x42960000 */ W32((u32)(0xa742c0u), 0x42960000u);
    /* 00584ae4: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584ae9: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
    /* 00584aee: jmp 0x584609 */ goto L_00584609;
L_00584af3:; BB(0x00584af3);
    /* 00584af3: mov eax, 1 */ r_eax = 0x1u;
    /* 00584af8: jmp 0x5849be */ goto L_005849be;
L_00584afd:; BB(0x00584afd);
    /* 00584afd: mov eax, 1 */ r_eax = 0x1u;
    /* 00584b02: jmp 0x584925 */ goto L_00584925;
L_00584b07:; BB(0x00584b07);
    /* 00584b07: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00584b0b: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00584b0e: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00584b11: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00584b14: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00584b17: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00584b1b: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00584b1e: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 00584b21: mov dword ptr [ebx + 0x38], edi */ W32((u32)(r_ebx+0x38u), r_edi);
    /* 00584b24: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00584b27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584b29: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00584b2d: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00584b30: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x584b35u); f_007b6880();
    /* 00584b35: jmp 0x5848fb */ goto L_005848fb;
L_00584b3a:; BB(0x00584b3a);
    /* 00584b3a: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 00584b40: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00584b46: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584b49: jne 0x584556 */ if (!fZ) goto L_00584556;
L_00584b4f:; BB(0x00584b4f);
    /* 00584b4f: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584b56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584b58: jne 0x584b6e */ if (!fZ) goto L_00584b6e;
L_00584b5a:; BB(0x00584b5a);
    /* 00584b5a: mov dword ptr [0xa742b8], 0x41dc0000 */ W32((u32)(0xa742b8u), 0x41dc0000u);
    /* 00584b64: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584b69: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584b6e:; BB(0x00584b6e);
    /* 00584b6e: fld dword ptr [ebx + 0x3e0] */ FPUSH(R_F32((u32)(r_ebx+0x3e0u)));
    /* 00584b74: fcomp dword ptr [0xa742b8] */ fx_compare(ST(0), R_F32((u32)(0xa742b8u))); FPOP();
    /* 00584b7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584b7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584b7d: jae 0x584bb1 */ if (!fC) goto L_00584bb1;
L_00584b7f:; BB(0x00584b7f);
    /* 00584b7f: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584b85: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584b8b: je 0x584b93 */ if (fZ) goto L_00584b93;
L_00584b8d:; BB(0x00584b8d);
    /* 00584b8d: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584b93:; BB(0x00584b93);
    /* 00584b93: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00584b98: mov dword ptr [ebx + 0x380], 0xa */ W32((u32)(r_ebx+0x380u), 0xau);
    /* 00584ba2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584ba4: je 0x584baa */ if (fZ) goto L_00584baa;
L_00584ba6:; BB(0x00584ba6);
    /* 00584ba6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584ba8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584baau); call_ind(t); }
L_00584baa:; BB(0x00584baa);
    /* 00584baa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584bad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584bae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584baf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584bb0: ret  */ FN_RET(0x00584508); r_esp += 4; return;
L_00584bb1:; BB(0x00584bb1);
    /* 00584bb1: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584bb7: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584bbd: je 0x584bc5 */ if (fZ) goto L_00584bc5;
L_00584bbf:; BB(0x00584bbf);
    /* 00584bbf: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584bc5:; BB(0x00584bc5);
    /* 00584bc5: mov eax, dword ptr [0x9bf5e8] */ r_eax = R32((u32)(0x9bf5e8u));
    /* 00584bca: mov dword ptr [ebx + 0x380], 0xd */ W32((u32)(r_ebx+0x380u), 0xdu);
    /* 00584bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584bd6: je 0x584bdc */ if (fZ) goto L_00584bdc;
L_00584bd8:; BB(0x00584bd8);
    /* 00584bd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584bda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584bdcu); call_ind(t); }
L_00584bdc:; BB(0x00584bdc);
    /* 00584bdc: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584bdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584be0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584be1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584be2: ret  */ FN_RET(0x00584508); r_esp += 4; return;
}

void f_0058454d(void)
{
    FN_ENTER(0x0058454d);
    /* 0058454d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584550: je 0x584b3a */ if (fZ) goto L_00584b3a;
L_00584556:; BB(0x00584556);
    /* 00584556: movzx edx, byte ptr [0xa742b4] */ r_edx = (u32)R8((u32)(0xa742b4u));
    /* 0058455d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584560: jne 0x584578 */ if (!fZ) goto L_00584578;
L_00584562:; BB(0x00584562);
    /* 00584562: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 00584567: mov dword ptr [0xa742bc], eax */ W32((u32)(0xa742bcu), r_eax);
    /* 0058456c: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00584572: mov byte ptr [0xa742b4], dl */ W8((u32)(0xa742b4u), (u8)r_edx);
L_00584578:; BB(0x00584578);
    /* 00584578: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058457b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058457c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058457e: push dword ptr [0xa742bc] */ { u32 v = R32((u32)(0xa742bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00584584: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x584589u); f_007714cc();
    /* 00584589: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 0058458c: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584592: je 0x5846ed */ if (fZ) goto L_005846ed;
L_00584598:; BB(0x00584598);
    /* 00584598: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0058459b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0058459f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005845a1: fmul qword ptr [0x928360] */ ST(0) = ST(0) * R_F64((u32)(0x928360u));
    /* 005845a7: fdiv qword ptr [0x928358] */ ST(0) = ST(0) / R_F64((u32)(0x928358u));
    /* 005845ad: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 005845b1: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 005845b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005845bb: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005845bf: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 005845c3: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005845c7: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 005845cb: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 005845cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005845d0: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005845d3: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5845d8u); f_007a9018();
    /* 005845d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005845db: cmp eax, 0x208 */ {  u32 a = r_eax; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005845e0: jge 0x5846ed */ if ((fS==fO)) goto L_005846ed;
L_005845e6:; BB(0x005845e6);
    /* 005845e6: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 005845eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005845ec: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005845ef: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5845f4u); f_007a8c74();
    /* 005845f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005845f7: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005845fa: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584601: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584603: je 0x584ada */ if (fZ) goto L_00584ada;
L_00584609:; BB(0x00584609);
    /* 00584609: fld dword ptr [0xa742c0] */ FPUSH(R_F32((u32)(0xa742c0u)));
    /* 0058460f: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00584613: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00584614: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x584619u); f_0068d5a8();
    /* 00584619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058461a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058461c: je 0x5846d9 */ if (fZ) goto L_005846d9;
L_00584622:; BB(0x00584622);
    /* 00584622: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00584628: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058462b: jne 0x584637 */ if (!fZ) goto L_00584637;
L_0058462d:; BB(0x0058462d);
    /* 0058462d: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00584631: fchs  */ ST(0) = -ST(0);
    /* 00584633: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_00584637:; BB(0x00584637);
    /* 00584637: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0058463a: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 0058463d: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00584640: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00584643: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00584647: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0058464b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0058464f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x584654u); f_0082ddd8();
    /* 00584654: fmul dword ptr [esp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x54u));
    /* 00584658: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0058465c: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058465f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00584663: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x584668u); f_0082dcbc();
    /* 00584668: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0058466c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584670: fchs  */ ST(0) = -ST(0);
    /* 00584672: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00584674: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00584678: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058467c: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0058467f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x584684u); f_0082f9c4();
    /* 00584684: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0058468c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584690: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x584695u); f_0083173c();
    /* 00584695: fcomp dword ptr [0x928444] */ fx_compare(ST(0), R_F32((u32)(0x928444u))); FPOP();
    /* 0058469b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058469d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058469e: ja 0x5846ba */ if ((!fC&&!fZ)) goto L_005846ba;
L_005846a0:; BB(0x005846a0);
    /* 005846a0: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846a6: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846ac: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005846b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846b8: jmp 0x584734 */ goto L_00584734;
L_005846ba:; BB(0x005846ba);
    /* 005846ba: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005846be: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5846c3u); f_0082df08();
    /* 005846c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005846c5: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005846c9: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005846cd: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846d5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005846d7: jmp 0x584734 */ goto L_00584734;
L_005846d9:; BB(0x005846d9);
    /* 005846d9: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005846dd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005846e1: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 005846e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005846e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005846eb: jmp 0x584734 */ goto L_00584734;
L_005846ed:; BB(0x005846ed);
    /* 005846ed: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 005846f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005846f5: jne 0x584705 */ if (!fZ) goto L_00584705;
L_005846f7:; BB(0x005846f7);
    /* 005846f7: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 005846fa: add ecx, 0xfffffdf8 */ {  u32 a = r_ecx; u32 b = 0xfffffdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00584700: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 00584703: jmp 0x584711 */ goto L_00584711;
L_00584705:; BB(0x00584705);
    /* 00584705: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00584708: add ecx, 0x208 */ {  u32 a = r_ecx; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058470e: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
L_00584711:; BB(0x00584711);
    /* 00584711: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x584716u); f_0082dcbc();
    /* 00584716: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00584719: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058471d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x584722u); f_0082ddd8();
    /* 00584722: fld dword ptr [0x92844c] */ FPUSH(R_F32((u32)(0x92844cu)));
    /* 00584728: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0058472c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
L_00584734:; BB(0x00584734);
    /* 00584734: fld dword ptr [0x92825c] */ FPUSH(R_F32((u32)(0x92825cu)));
    /* 0058473a: fadd dword ptr [ebx + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3b8u));
    /* 00584740: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 00584746: fld dword ptr [edx*4 + 0x928260] */ FPUSH(R_F32((u32)(r_edx*4+0x928260u)));
    /* 0058474d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058474f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584751: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584752: mov edx, dword ptr [edx*4 + 0x928260] */ r_edx = R32((u32)(r_edx*4+0x928260u));
    /* 00584759: jae 0x584765 */ if (!fC) goto L_00584765;
L_0058475b:; BB(0x0058475b);
    /* 0058475b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058475d: mov dword ptr [ebx + 0x3b8], edx */ W32((u32)(r_ebx+0x3b8u), r_edx);
    /* 00584763: jmp 0x58476d */ goto L_0058476d;
L_00584765:; BB(0x00584765);
    /* 00584765: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00584767: fst dword ptr [ebx + 0x3b8] */ W_F32((u32)(r_ebx+0x3b8u), ST(0));
L_0058476d:; BB(0x0058476d);
    /* 0058476d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058476f: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00584771: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584773: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00584777: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0058477b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058477d: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00584781: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584783: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00584787: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0058478b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0058478f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x584794u); f_0083173c();
    /* 00584794: fcomp dword ptr [0x92844c] */ fx_compare(ST(0), R_F32((u32)(0x92844cu))); FPOP();
    /* 0058479a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058479c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058479d: je 0x5848fb */ if (fZ) goto L_005848fb;
L_005847a3:; BB(0x005847a3);
    /* 005847a3: movzx edx, byte ptr [0xa74328] */ r_edx = (u32)R8((u32)(0xa74328u));
    /* 005847aa: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005847ad: jne 0x5847c2 */ if (!fZ) goto L_005847c2;
L_005847af:; BB(0x005847af);
    /* 005847af: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 005847b4: mov dword ptr [0xa7432c], eax */ W32((u32)(0xa7432cu), r_eax);
    /* 005847b9: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005847bc: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_005847c2:; BB(0x005847c2);
    /* 005847c2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005847c5: jne 0x5847e1 */ if (!fZ) goto L_005847e1;
L_005847c7:; BB(0x005847c7);
    /* 005847c7: fld dword ptr [0xa7432c] */ FPUSH(R_F32((u32)(0xa7432cu)));
    /* 005847cd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005847cf: fstp dword ptr [0xa74330] */ W_F32((u32)(0xa74330u), ST(0)); FPOP();
    /* 005847d5: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005847db: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_005847e1:; BB(0x005847e1);
    /* 005847e1: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005847e5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005847e9: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005847ec: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 005847ef: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 005847f2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005847f6: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 005847fa: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 005847fe: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x584803u); f_0082ebac();
    /* 00584803: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00584807: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0058480a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058480b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058480c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x584811u); f_007a9180();
    /* 00584811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584814: fcomp dword ptr [0xa74330] */ fx_compare(ST(0), R_F32((u32)(0xa74330u))); FPOP();
    /* 0058481a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058481c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058481d: ja 0x5848fb */ if ((!fC&&!fZ)) goto L_005848fb;
L_00584823:; BB(0x00584823);
    /* 00584823: mov esi, 1 */ r_esi = 0x1u;
L_00584828:; BB(0x00584828);
    /* 00584828: movzx eax, byte ptr [0xa74328] */ r_eax = (u32)R8((u32)(0xa74328u));
    /* 0058482f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584831: jne 0x584847 */ if (!fZ) goto L_00584847;
L_00584833:; BB(0x00584833);
    /* 00584833: mov dword ptr [0xa74334], 0x41200000 */ W32((u32)(0xa74334u), 0x41200000u);
    /* 0058483d: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584842: mov byte ptr [0xa74328], al */ W8((u32)(0xa74328u), (u8)r_eax);
L_00584847:; BB(0x00584847);
    /* 00584847: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0058484b: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0058484f: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00584852: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 00584855: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00584859: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058485c: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00584860: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00584864: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x584869u); f_0082ebac();
    /* 00584869: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0058486d: fadd dword ptr [0xa74334] */ ST(0) = ST(0) + R_F32((u32)(0xa74334u));
    /* 00584873: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00584877: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0058487b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058487d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058487f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584880: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x584885u); f_007b4c58();
    /* 00584885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584887: je 0x5848a2 */ if (fZ) goto L_005848a2;
L_00584889:; BB(0x00584889);
    /* 00584889: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0058488d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058488e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00584891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584892: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x584897u); f_00780d3c();
    /* 00584897: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058489a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058489c: je 0x584b07 */ if (fZ) goto L_00584b07;
L_005848a2:; BB(0x005848a2);
    /* 005848a2: mov edi, esi */ r_edi = r_esi;
    /* 005848a4: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005848a7: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005848ad: je 0x5848b1 */ if (fZ) goto L_005848b1;
L_005848af:; BB(0x005848af);
    /* 005848af: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_005848b1:; BB(0x005848b1);
    /* 005848b1: mov ecx, edi */ r_ecx = r_edi;
    /* 005848b3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5848b8u); f_0082dcbc();
    /* 005848b8: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 005848bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005848be: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5848c3u); f_0082ddd8();
    /* 005848c3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005848c7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005848cb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 005848cf: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005848d3: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005848d5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005848d7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005848d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005848db: fchs  */ ST(0) = -ST(0);
    /* 005848dd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005848df: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005848e1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005848e3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005848e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005848e8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005848ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005848ee: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005848f2: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005848f5: jl 0x584828 */ if ((fS!=fO)) goto L_00584828;
L_005848fb:; BB(0x005848fb);
    /* 005848fb: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 00584901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584903: jne 0x584958 */ if (!fZ) goto L_00584958;
L_00584905:; BB(0x00584905);
    /* 00584905: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 0058490b: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00584911: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584914: je 0x584afd */ if (fZ) goto L_00584afd;
L_0058491a:; BB(0x0058491a);
    /* 0058491a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058491d: je 0x584afd */ if (fZ) goto L_00584afd;
L_00584923:; BB(0x00584923);
    /* 00584923: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00584925:; BB(0x00584925);
    /* 00584925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584927: jne 0x584958 */ if (!fZ) goto L_00584958;
L_00584929:; BB(0x00584929);
    /* 00584929: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0058492f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584931: jne 0x584958 */ if (!fZ) goto L_00584958;
L_00584933:; BB(0x00584933);
    /* 00584933: mov esi, dword ptr [ebx + 0x3c4] */ r_esi = R32((u32)(r_ebx+0x3c4u));
    /* 00584939: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00584940: mov eax, esi */ r_eax = r_esi;
    /* 00584942: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00584945: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00584947: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00584949: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058494b: jg 0x584954 */ if ((!fZ&&fS==fO)) goto L_00584954;
L_0058494d:; BB(0x0058494d);
    /* 0058494d: mov eax, 1 */ r_eax = 0x1u;
    /* 00584952: jmp 0x58495a */ goto L_0058495a;
L_00584954:; BB(0x00584954);
    /* 00584954: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00584956: jmp 0x58495a */ goto L_0058495a;
L_00584958:; BB(0x00584958);
    /* 00584958: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0058495a:; BB(0x0058495a);
    /* 0058495a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058495c: je 0x584990 */ if (fZ) goto L_00584990;
L_0058495e:; BB(0x0058495e);
    /* 0058495e: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584964: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058496a: je 0x584972 */ if (fZ) goto L_00584972;
L_0058496c:; BB(0x0058496c);
    /* 0058496c: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584972:; BB(0x00584972);
    /* 00584972: mov eax, dword ptr [0x9bf5e0] */ r_eax = R32((u32)(0x9bf5e0u));
    /* 00584977: mov dword ptr [ebx + 0x380], 0xc */ W32((u32)(r_ebx+0x380u), 0xcu);
    /* 00584981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584983: je 0x584989 */ if (fZ) goto L_00584989;
L_00584985:; BB(0x00584985);
    /* 00584985: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584987: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584989u); call_ind(t); }
L_00584989:; BB(0x00584989);
    /* 00584989: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058498c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058498d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058498e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058498f: ret  */ FN_RET(0x0058454d); r_esp += 4; return;
L_00584990:; BB(0x00584990);
    /* 00584990: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00584996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584998: je 0x58499e */ if (fZ) goto L_0058499e;
L_0058499a:; BB(0x0058499a);
    /* 0058499a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058499c: jmp 0x5849cb */ goto L_005849cb;
L_0058499e:; BB(0x0058499e);
    /* 0058499e: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 005849a4: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 005849aa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849ad: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849b3:; BB(0x005849b3);
    /* 005849b3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849b6: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849bc:; BB(0x005849bc);
    /* 005849bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849be:; BB(0x005849be);
    /* 005849be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849c0: je 0x5849c9 */ if (fZ) goto L_005849c9;
L_005849c2:; BB(0x005849c2);
    /* 005849c2: mov eax, 1 */ r_eax = 0x1u;
    /* 005849c7: jmp 0x5849cb */ goto L_005849cb;
L_005849c9:; BB(0x005849c9);
    /* 005849c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849cb:; BB(0x005849cb);
    /* 005849cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849cd: je 0x584a01 */ if (fZ) goto L_00584a01;
L_005849cf:; BB(0x005849cf);
    /* 005849cf: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 005849d5: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849db: je 0x5849e3 */ if (fZ) goto L_005849e3;
L_005849dd:; BB(0x005849dd);
    /* 005849dd: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_005849e3:; BB(0x005849e3);
    /* 005849e3: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 005849e8: mov dword ptr [ebx + 0x380], 0x10 */ W32((u32)(r_ebx+0x380u), 0x10u);
    /* 005849f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849f4: je 0x5849fa */ if (fZ) goto L_005849fa;
L_005849f6:; BB(0x005849f6);
    /* 005849f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005849f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5849fau); call_ind(t); }
L_005849fa:; BB(0x005849fa);
    /* 005849fa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005849fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005849fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005849ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584a00: ret  */ FN_RET(0x0058454d); r_esp += 4; return;
L_00584a01:; BB(0x00584a01);
    /* 00584a01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a03: call 0x584be4 */ r_esp -= 4; W32(r_esp, 0x584a08u); f_00584be4();
    /* 00584a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a0a: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a10:; BB(0x00584a10);
    /* 00584a10: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584a17: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a19: jne 0x584a2d */ if (!fZ) goto L_00584a2d;
L_00584a1b:; BB(0x00584a1b);
    /* 00584a1b: mov dword ptr [0xa742c4], 0x41dc0000 */ W32((u32)(0xa742c4u), 0x41dc0000u);
    /* 00584a25: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a28: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a2d:; BB(0x00584a2d);
    /* 00584a2d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a2f: jne 0x584a49 */ if (!fZ) goto L_00584a49;
L_00584a31:; BB(0x00584a31);
    /* 00584a31: fld dword ptr [0xa742c4] */ FPUSH(R_F32((u32)(0xa742c4u)));
    /* 00584a37: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00584a39: fstp dword ptr [0xa742c8] */ W_F32((u32)(0xa742c8u), ST(0)); FPOP();
    /* 00584a3f: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a44: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a49:; BB(0x00584a49);
    /* 00584a49: movzx eax, word ptr [ebx + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 00584a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a51: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x584a56u); f_007b4d18();
    /* 00584a56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00584a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a59: je 0x584aa8 */ if (fZ) goto L_00584aa8;
L_00584a5b:; BB(0x00584a5b);
    /* 00584a5b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584a5e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00584a61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584a62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a63: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x584a68u); f_007a9180();
    /* 00584a68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584a6b: fcomp dword ptr [0xa742c8] */ fx_compare(ST(0), R_F32((u32)(0xa742c8u))); FPOP();
    /* 00584a71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584a73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584a74: jae 0x584aa8 */ if (!fC) goto L_00584aa8;
L_00584a76:; BB(0x00584a76);
    /* 00584a76: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584a7c: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a82: je 0x584a8a */ if (fZ) goto L_00584a8a;
L_00584a84:; BB(0x00584a84);
    /* 00584a84: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584a8a:; BB(0x00584a8a);
    /* 00584a8a: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00584a8f: mov dword ptr [ebx + 0x380], 0xa */ W32((u32)(r_ebx+0x380u), 0xau);
    /* 00584a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a9b: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a9d:; BB(0x00584a9d);
    /* 00584a9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584aa1u); call_ind(t); }
L_00584aa1:; BB(0x00584aa1);
    /* 00584aa1: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584aa4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584aa5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584aa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584aa7: ret  */ FN_RET(0x0058454d); r_esp += 4; return;
L_00584aa8:; BB(0x00584aa8);
    /* 00584aa8: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584aae: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584ab4: je 0x584abc */ if (fZ) goto L_00584abc;
L_00584ab6:; BB(0x00584ab6);
    /* 00584ab6: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584abc:; BB(0x00584abc);
    /* 00584abc: mov eax, dword ptr [0x9bf5c8] */ r_eax = R32((u32)(0x9bf5c8u));
    /* 00584ac1: mov dword ptr [ebx + 0x380], 9 */ W32((u32)(r_ebx+0x380u), 0x9u);
    /* 00584acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584acd: je 0x584ad3 */ if (fZ) goto L_00584ad3;
L_00584acf:; BB(0x00584acf);
    /* 00584acf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584ad1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ad3u); call_ind(t); }
L_00584ad3:; BB(0x00584ad3);
    /* 00584ad3: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584ad6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584ad7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584ad8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584ad9: ret  */ FN_RET(0x0058454d); r_esp += 4; return;
L_00584ada:; BB(0x00584ada);
    /* 00584ada: mov dword ptr [0xa742c0], 0x42960000 */ W32((u32)(0xa742c0u), 0x42960000u);
    /* 00584ae4: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584ae9: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
    /* 00584aee: jmp 0x584609 */ goto L_00584609;
L_00584af3:; BB(0x00584af3);
    /* 00584af3: mov eax, 1 */ r_eax = 0x1u;
    /* 00584af8: jmp 0x5849be */ goto L_005849be;
L_00584afd:; BB(0x00584afd);
    /* 00584afd: mov eax, 1 */ r_eax = 0x1u;
    /* 00584b02: jmp 0x584925 */ goto L_00584925;
L_00584b07:; BB(0x00584b07);
    /* 00584b07: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00584b0b: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00584b0e: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00584b11: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 00584b14: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00584b17: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00584b1b: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00584b1e: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 00584b21: mov dword ptr [ebx + 0x38], edi */ W32((u32)(r_ebx+0x38u), r_edi);
    /* 00584b24: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00584b27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584b29: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00584b2d: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00584b30: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x584b35u); f_007b6880();
    /* 00584b35: jmp 0x5848fb */ goto L_005848fb;
L_00584b3a:; BB(0x00584b3a);
    /* 00584b3a: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 00584b40: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00584b46: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584b49: jne 0x584556 */ if (!fZ) goto L_00584556;
L_00584b4f:; BB(0x00584b4f);
    /* 00584b4f: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584b56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584b58: jne 0x584b6e */ if (!fZ) goto L_00584b6e;
L_00584b5a:; BB(0x00584b5a);
    /* 00584b5a: mov dword ptr [0xa742b8], 0x41dc0000 */ W32((u32)(0xa742b8u), 0x41dc0000u);
    /* 00584b64: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584b69: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584b6e:; BB(0x00584b6e);
    /* 00584b6e: fld dword ptr [ebx + 0x3e0] */ FPUSH(R_F32((u32)(r_ebx+0x3e0u)));
    /* 00584b74: fcomp dword ptr [0xa742b8] */ fx_compare(ST(0), R_F32((u32)(0xa742b8u))); FPOP();
    /* 00584b7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584b7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584b7d: jae 0x584bb1 */ if (!fC) goto L_00584bb1;
L_00584b7f:; BB(0x00584b7f);
    /* 00584b7f: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584b85: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584b8b: je 0x584b93 */ if (fZ) goto L_00584b93;
L_00584b8d:; BB(0x00584b8d);
    /* 00584b8d: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584b93:; BB(0x00584b93);
    /* 00584b93: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00584b98: mov dword ptr [ebx + 0x380], 0xa */ W32((u32)(r_ebx+0x380u), 0xau);
    /* 00584ba2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584ba4: je 0x584baa */ if (fZ) goto L_00584baa;
L_00584ba6:; BB(0x00584ba6);
    /* 00584ba6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584ba8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584baau); call_ind(t); }
L_00584baa:; BB(0x00584baa);
    /* 00584baa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584bad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584bae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584baf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584bb0: ret  */ FN_RET(0x0058454d); r_esp += 4; return;
L_00584bb1:; BB(0x00584bb1);
    /* 00584bb1: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584bb7: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584bbd: je 0x584bc5 */ if (fZ) goto L_00584bc5;
L_00584bbf:; BB(0x00584bbf);
    /* 00584bbf: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584bc5:; BB(0x00584bc5);
    /* 00584bc5: mov eax, dword ptr [0x9bf5e8] */ r_eax = R32((u32)(0x9bf5e8u));
    /* 00584bca: mov dword ptr [ebx + 0x380], 0xd */ W32((u32)(r_ebx+0x380u), 0xdu);
    /* 00584bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584bd6: je 0x584bdc */ if (fZ) goto L_00584bdc;
L_00584bd8:; BB(0x00584bd8);
    /* 00584bd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584bda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584bdcu); call_ind(t); }
L_00584bdc:; BB(0x00584bdc);
    /* 00584bdc: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584bdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584be0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584be1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584be2: ret  */ FN_RET(0x0058454d); r_esp += 4; return;
}

void f_0058494d(void)
{
    FN_ENTER(0x0058494d);
    /* 0058494d: mov eax, 1 */ r_eax = 0x1u;
    /* 00584952: jmp 0x58495a */ goto L_0058495a;
L_0058495a:; BB(0x0058495a);
    /* 0058495a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058495c: je 0x584990 */ if (fZ) goto L_00584990;
L_0058495e:; BB(0x0058495e);
    /* 0058495e: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584964: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058496a: je 0x584972 */ if (fZ) goto L_00584972;
L_0058496c:; BB(0x0058496c);
    /* 0058496c: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584972:; BB(0x00584972);
    /* 00584972: mov eax, dword ptr [0x9bf5e0] */ r_eax = R32((u32)(0x9bf5e0u));
    /* 00584977: mov dword ptr [ebx + 0x380], 0xc */ W32((u32)(r_ebx+0x380u), 0xcu);
    /* 00584981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584983: je 0x584989 */ if (fZ) goto L_00584989;
L_00584985:; BB(0x00584985);
    /* 00584985: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584987: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584989u); call_ind(t); }
L_00584989:; BB(0x00584989);
    /* 00584989: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058498c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058498d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058498e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058498f: ret  */ FN_RET(0x0058494d); r_esp += 4; return;
L_00584990:; BB(0x00584990);
    /* 00584990: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00584996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584998: je 0x58499e */ if (fZ) goto L_0058499e;
L_0058499a:; BB(0x0058499a);
    /* 0058499a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058499c: jmp 0x5849cb */ goto L_005849cb;
L_0058499e:; BB(0x0058499e);
    /* 0058499e: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 005849a4: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 005849aa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849ad: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849b3:; BB(0x005849b3);
    /* 005849b3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849b6: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849bc:; BB(0x005849bc);
    /* 005849bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849be:; BB(0x005849be);
    /* 005849be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849c0: je 0x5849c9 */ if (fZ) goto L_005849c9;
L_005849c2:; BB(0x005849c2);
    /* 005849c2: mov eax, 1 */ r_eax = 0x1u;
    /* 005849c7: jmp 0x5849cb */ goto L_005849cb;
L_005849c9:; BB(0x005849c9);
    /* 005849c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849cb:; BB(0x005849cb);
    /* 005849cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849cd: je 0x584a01 */ if (fZ) goto L_00584a01;
L_005849cf:; BB(0x005849cf);
    /* 005849cf: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 005849d5: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849db: je 0x5849e3 */ if (fZ) goto L_005849e3;
L_005849dd:; BB(0x005849dd);
    /* 005849dd: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_005849e3:; BB(0x005849e3);
    /* 005849e3: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 005849e8: mov dword ptr [ebx + 0x380], 0x10 */ W32((u32)(r_ebx+0x380u), 0x10u);
    /* 005849f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849f4: je 0x5849fa */ if (fZ) goto L_005849fa;
L_005849f6:; BB(0x005849f6);
    /* 005849f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005849f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5849fau); call_ind(t); }
L_005849fa:; BB(0x005849fa);
    /* 005849fa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005849fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005849fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005849ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584a00: ret  */ FN_RET(0x0058494d); r_esp += 4; return;
L_00584a01:; BB(0x00584a01);
    /* 00584a01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a03: call 0x584be4 */ r_esp -= 4; W32(r_esp, 0x584a08u); f_00584be4();
    /* 00584a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a0a: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a10:; BB(0x00584a10);
    /* 00584a10: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584a17: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a19: jne 0x584a2d */ if (!fZ) goto L_00584a2d;
L_00584a1b:; BB(0x00584a1b);
    /* 00584a1b: mov dword ptr [0xa742c4], 0x41dc0000 */ W32((u32)(0xa742c4u), 0x41dc0000u);
    /* 00584a25: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a28: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a2d:; BB(0x00584a2d);
    /* 00584a2d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a2f: jne 0x584a49 */ if (!fZ) goto L_00584a49;
L_00584a31:; BB(0x00584a31);
    /* 00584a31: fld dword ptr [0xa742c4] */ FPUSH(R_F32((u32)(0xa742c4u)));
    /* 00584a37: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00584a39: fstp dword ptr [0xa742c8] */ W_F32((u32)(0xa742c8u), ST(0)); FPOP();
    /* 00584a3f: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a44: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a49:; BB(0x00584a49);
    /* 00584a49: movzx eax, word ptr [ebx + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 00584a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a51: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x584a56u); f_007b4d18();
    /* 00584a56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00584a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a59: je 0x584aa8 */ if (fZ) goto L_00584aa8;
L_00584a5b:; BB(0x00584a5b);
    /* 00584a5b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584a5e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00584a61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584a62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a63: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x584a68u); f_007a9180();
    /* 00584a68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584a6b: fcomp dword ptr [0xa742c8] */ fx_compare(ST(0), R_F32((u32)(0xa742c8u))); FPOP();
    /* 00584a71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584a73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584a74: jae 0x584aa8 */ if (!fC) goto L_00584aa8;
L_00584a76:; BB(0x00584a76);
    /* 00584a76: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584a7c: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a82: je 0x584a8a */ if (fZ) goto L_00584a8a;
L_00584a84:; BB(0x00584a84);
    /* 00584a84: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584a8a:; BB(0x00584a8a);
    /* 00584a8a: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00584a8f: mov dword ptr [ebx + 0x380], 0xa */ W32((u32)(r_ebx+0x380u), 0xau);
    /* 00584a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a9b: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a9d:; BB(0x00584a9d);
    /* 00584a9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584aa1u); call_ind(t); }
L_00584aa1:; BB(0x00584aa1);
    /* 00584aa1: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584aa4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584aa5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584aa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584aa7: ret  */ FN_RET(0x0058494d); r_esp += 4; return;
L_00584aa8:; BB(0x00584aa8);
    /* 00584aa8: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584aae: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584ab4: je 0x584abc */ if (fZ) goto L_00584abc;
L_00584ab6:; BB(0x00584ab6);
    /* 00584ab6: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584abc:; BB(0x00584abc);
    /* 00584abc: mov eax, dword ptr [0x9bf5c8] */ r_eax = R32((u32)(0x9bf5c8u));
    /* 00584ac1: mov dword ptr [ebx + 0x380], 9 */ W32((u32)(r_ebx+0x380u), 0x9u);
    /* 00584acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584acd: je 0x584ad3 */ if (fZ) goto L_00584ad3;
L_00584acf:; BB(0x00584acf);
    /* 00584acf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584ad1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ad3u); call_ind(t); }
L_00584ad3:; BB(0x00584ad3);
    /* 00584ad3: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584ad6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584ad7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584ad8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584ad9: ret  */ FN_RET(0x0058494d); r_esp += 4; return;
L_00584af3:; BB(0x00584af3);
    /* 00584af3: mov eax, 1 */ r_eax = 0x1u;
    /* 00584af8: jmp 0x5849be */ goto L_005849be;
}

void f_005849a0(void)
{
    FN_ENTER(0x005849a0);
    /* 005849a0: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;   }
    /* 005849a2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005849a4: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 005849aa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849ad: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849b3:; BB(0x005849b3);
    /* 005849b3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849b6: je 0x584af3 */ if (fZ) goto L_00584af3;
L_005849bc:; BB(0x005849bc);
    /* 005849bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849be:; BB(0x005849be);
    /* 005849be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849c0: je 0x5849c9 */ if (fZ) goto L_005849c9;
L_005849c2:; BB(0x005849c2);
    /* 005849c2: mov eax, 1 */ r_eax = 0x1u;
    /* 005849c7: jmp 0x5849cb */ goto L_005849cb;
L_005849c9:; BB(0x005849c9);
    /* 005849c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005849cb:; BB(0x005849cb);
    /* 005849cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849cd: je 0x584a01 */ if (fZ) goto L_00584a01;
L_005849cf:; BB(0x005849cf);
    /* 005849cf: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 005849d5: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849db: je 0x5849e3 */ if (fZ) goto L_005849e3;
L_005849dd:; BB(0x005849dd);
    /* 005849dd: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_005849e3:; BB(0x005849e3);
    /* 005849e3: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 005849e8: mov dword ptr [ebx + 0x380], 0x10 */ W32((u32)(r_ebx+0x380u), 0x10u);
    /* 005849f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849f4: je 0x5849fa */ if (fZ) goto L_005849fa;
L_005849f6:; BB(0x005849f6);
    /* 005849f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005849f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5849fau); call_ind(t); }
L_005849fa:; BB(0x005849fa);
    /* 005849fa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005849fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005849fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005849ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584a00: ret  */ FN_RET(0x005849a0); r_esp += 4; return;
L_00584a01:; BB(0x00584a01);
    /* 00584a01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a03: call 0x584be4 */ r_esp -= 4; W32(r_esp, 0x584a08u); f_00584be4();
    /* 00584a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a0a: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a10:; BB(0x00584a10);
    /* 00584a10: movzx eax, byte ptr [0xa742b4] */ r_eax = (u32)R8((u32)(0xa742b4u));
    /* 00584a17: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a19: jne 0x584a2d */ if (!fZ) goto L_00584a2d;
L_00584a1b:; BB(0x00584a1b);
    /* 00584a1b: mov dword ptr [0xa742c4], 0x41dc0000 */ W32((u32)(0xa742c4u), 0x41dc0000u);
    /* 00584a25: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a28: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a2d:; BB(0x00584a2d);
    /* 00584a2d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584a2f: jne 0x584a49 */ if (!fZ) goto L_00584a49;
L_00584a31:; BB(0x00584a31);
    /* 00584a31: fld dword ptr [0xa742c4] */ FPUSH(R_F32((u32)(0xa742c4u)));
    /* 00584a37: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00584a39: fstp dword ptr [0xa742c8] */ W_F32((u32)(0xa742c8u), ST(0)); FPOP();
    /* 00584a3f: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584a44: mov byte ptr [0xa742b4], al */ W8((u32)(0xa742b4u), (u8)r_eax);
L_00584a49:; BB(0x00584a49);
    /* 00584a49: movzx eax, word ptr [ebx + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 00584a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a51: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x584a56u); f_007b4d18();
    /* 00584a56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00584a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a59: je 0x584aa8 */ if (fZ) goto L_00584aa8;
L_00584a5b:; BB(0x00584a5b);
    /* 00584a5b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584a5e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00584a61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584a62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a63: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x584a68u); f_007a9180();
    /* 00584a68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584a6b: fcomp dword ptr [0xa742c8] */ fx_compare(ST(0), R_F32((u32)(0xa742c8u))); FPOP();
    /* 00584a71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584a73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584a74: jae 0x584aa8 */ if (!fC) goto L_00584aa8;
L_00584a76:; BB(0x00584a76);
    /* 00584a76: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584a7c: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a82: je 0x584a8a */ if (fZ) goto L_00584a8a;
L_00584a84:; BB(0x00584a84);
    /* 00584a84: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584a8a:; BB(0x00584a8a);
    /* 00584a8a: mov eax, dword ptr [0x9bf5d0] */ r_eax = R32((u32)(0x9bf5d0u));
    /* 00584a8f: mov dword ptr [ebx + 0x380], 0xa */ W32((u32)(r_ebx+0x380u), 0xau);
    /* 00584a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a9b: je 0x584aa1 */ if (fZ) goto L_00584aa1;
L_00584a9d:; BB(0x00584a9d);
    /* 00584a9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584a9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584aa1u); call_ind(t); }
L_00584aa1:; BB(0x00584aa1);
    /* 00584aa1: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584aa4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584aa5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584aa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584aa7: ret  */ FN_RET(0x005849a0); r_esp += 4; return;
L_00584aa8:; BB(0x00584aa8);
    /* 00584aa8: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00584aae: cmp eax, dword ptr [ebx + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584ab4: je 0x584abc */ if (fZ) goto L_00584abc;
L_00584ab6:; BB(0x00584ab6);
    /* 00584ab6: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
L_00584abc:; BB(0x00584abc);
    /* 00584abc: mov eax, dword ptr [0x9bf5c8] */ r_eax = R32((u32)(0x9bf5c8u));
    /* 00584ac1: mov dword ptr [ebx + 0x380], 9 */ W32((u32)(r_ebx+0x380u), 0x9u);
    /* 00584acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584acd: je 0x584ad3 */ if (fZ) goto L_00584ad3;
L_00584acf:; BB(0x00584acf);
    /* 00584acf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00584ad1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ad3u); call_ind(t); }
L_00584ad3:; BB(0x00584ad3);
    /* 00584ad3: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584ad6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584ad7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584ad8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00584ad9: ret  */ FN_RET(0x005849a0); r_esp += 4; return;
L_00584af3:; BB(0x00584af3);
    /* 00584af3: mov eax, 1 */ r_eax = 0x1u;
    /* 00584af8: jmp 0x5849be */ goto L_005849be;
}

void f_00584be4(void) /* sub_584BE4 */
{
    FN_ENTER(0x00584be4);
    /* 00584be4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584be5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00584be8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00584bea: movzx eax, byte ptr [0xa742cc] */ r_eax = (u32)R8((u32)(0xa742ccu));
    /* 00584bf1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584bf3: jne 0x584c13 */ if (!fZ) goto L_00584c13;
L_00584bf5:; BB(0x00584bf5);
    /* 00584bf5: mov dword ptr [0xa74338], 0x42c80000 */ W32((u32)(0xa74338u), 0x42c80000u);
    /* 00584bff: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584c04: mov byte ptr [0xa742cc], al */ W8((u32)(0xa742ccu), (u8)r_eax);
    /* 00584c09: mov dword ptr [0xa7433c], 0x42a00000 */ W32((u32)(0xa7433cu), 0x42a00000u);
L_00584c13:; BB(0x00584c13);
    /* 00584c13: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00584c16: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584c18: je 0x584ce4 */ if (fZ) goto L_00584ce4;
L_00584c1e:; BB(0x00584c1e);
    /* 00584c1e: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 00584c24: mov edx, dword ptr [edx + 0x380] */ r_edx = R32((u32)(r_edx+0x380u));
    /* 00584c2a: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584c2d: je 0x584d96 */ if (fZ) goto L_00584d96;
L_00584c33:; BB(0x00584c33);
    /* 00584c33: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584c36: je 0x584d96 */ if (fZ) goto L_00584d96;
L_00584c3c:; BB(0x00584c3c);
    /* 00584c3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00584c3e:; BB(0x00584c3e);
    /* 00584c3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584c40: jne 0x584cdd */ if (!fZ) goto L_00584cdd;
L_00584c46:; BB(0x00584c46);
    /* 00584c46: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584c4b: mov edx, dword ptr [ebp + 0x388] */ r_edx = R32((u32)(r_ebp+0x388u));
    /* 00584c51: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00584c54: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00584c56: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00584c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584c5a: push dword ptr [edx*4 + 0xa74338] */ { u32 v = R32((u32)(r_edx*4+0xa74338u)); r_esp -= 4; W32(r_esp, v); }
    /* 00584c61: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x584c66u); f_0077170c();
    /* 00584c66: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00584c69: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00584c6c: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00584c71: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584c77: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00584c7a: mov dword ptr [ebp + 0x3c0], edx */ W32((u32)(r_ebp+0x3c0u), r_edx);
    /* 00584c80: je 0x584cdd */ if (fZ) goto L_00584cdd;
L_00584c82:; BB(0x00584c82);
    /* 00584c82: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00584c85: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00584c89: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00584c8b: fmul qword ptr [0x928350] */ ST(0) = ST(0) * R_F64((u32)(0x928350u));
    /* 00584c91: fdiv qword ptr [0x928348] */ ST(0) = ST(0) / R_F64((u32)(0x928348u));
    /* 00584c97: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00584c9b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00584ca0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584ca5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00584ca9: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00584cad: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00584cb1: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00584cb5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00584cb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584cba: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00584cbd: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x584cc2u); f_007a9018();
    /* 00584cc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584cc5: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00584cca: jge 0x584cd6 */ if ((fS==fO)) goto L_00584cd6;
L_00584ccc:; BB(0x00584ccc);
    /* 00584ccc: mov eax, 1 */ r_eax = 0x1u;
    /* 00584cd1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584cd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584cd5: ret  */ FN_RET(0x00584be4); r_esp += 4; return;
L_00584cd6:; BB(0x00584cd6);
    /* 00584cd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00584cd8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584cdc: ret  */ FN_RET(0x00584be4); r_esp += 4; return;
L_00584cdd:; BB(0x00584cdd);
    /* 00584cdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00584cdf: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584ce2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584ce3: ret  */ FN_RET(0x00584be4); r_esp += 4; return;
L_00584ce4:; BB(0x00584ce4);
    /* 00584ce4: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 00584cea: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00584cf0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584cf3: je 0x584da0 */ if (fZ) goto L_00584da0;
L_00584cf9:; BB(0x00584cf9);
    /* 00584cf9: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584cfc: je 0x584da0 */ if (fZ) goto L_00584da0;
L_00584d02:; BB(0x00584d02);
    /* 00584d02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00584d04:; BB(0x00584d04);
    /* 00584d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584d06: jne 0x584d8f */ if (!fZ) goto L_00584d8f;
L_00584d0c:; BB(0x00584d0c);
    /* 00584d0c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00584d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584d10: mov edx, dword ptr [ebp + 0x388] */ r_edx = R32((u32)(r_ebp+0x388u));
    /* 00584d16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00584d18: push dword ptr [edx*4 + 0xa74338] */ { u32 v = R32((u32)(r_edx*4+0xa74338u)); r_esp -= 4; W32(r_esp, v); }
    /* 00584d1f: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x584d24u); f_007714cc();
    /* 00584d24: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00584d27: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584d2c: mov dword ptr [ebp + 0x3c0], eax */ W32((u32)(r_ebp+0x3c0u), r_eax);
    /* 00584d32: je 0x584d8f */ if (fZ) goto L_00584d8f;
L_00584d34:; BB(0x00584d34);
    /* 00584d34: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00584d37: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00584d3b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00584d3d: fmul qword ptr [0x928350] */ ST(0) = ST(0) * R_F64((u32)(0x928350u));
    /* 00584d43: fdiv qword ptr [0x928348] */ ST(0) = ST(0) / R_F64((u32)(0x928348u));
    /* 00584d49: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00584d4d: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00584d52: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584d57: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00584d5b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00584d5f: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00584d63: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00584d67: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00584d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584d6c: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00584d6f: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x584d74u); f_007a9018();
    /* 00584d74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584d77: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00584d7c: jge 0x584d88 */ if ((fS==fO)) goto L_00584d88;
L_00584d7e:; BB(0x00584d7e);
    /* 00584d7e: mov eax, 1 */ r_eax = 0x1u;
    /* 00584d83: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584d86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584d87: ret  */ FN_RET(0x00584be4); r_esp += 4; return;
L_00584d88:; BB(0x00584d88);
    /* 00584d88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00584d8a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584d8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584d8e: ret  */ FN_RET(0x00584be4); r_esp += 4; return;
L_00584d8f:; BB(0x00584d8f);
    /* 00584d8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00584d91: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584d94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584d95: ret  */ FN_RET(0x00584be4); r_esp += 4; return;
L_00584d96:; BB(0x00584d96);
    /* 00584d96: mov edx, 1 */ r_edx = 0x1u;
    /* 00584d9b: jmp 0x584c3e */ goto L_00584c3e;
L_00584da0:; BB(0x00584da0);
    /* 00584da0: mov eax, 1 */ r_eax = 0x1u;
    /* 00584da5: jmp 0x584d04 */ goto L_00584d04;
}

void f_00584dac(void) /* sub_584DAC */
{
    FN_ENTER(0x00584dac);
    /* 00584dac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584dad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00584dae: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00584db1: mov esi, ecx */ r_esi = r_ecx;
    /* 00584db3: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00584db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584dbb: je 0x584dc1 */ if (fZ) goto L_00584dc1;
L_00584dbd:; BB(0x00584dbd);
    /* 00584dbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00584dbf: jmp 0x584dee */ goto L_00584dee;
L_00584dc1:; BB(0x00584dc1);
    /* 00584dc1: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 00584dc7: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00584dcd: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584dd0: je 0x585276 */ if (fZ) goto L_00585276;
L_00584dd6:; BB(0x00584dd6);
    /* 00584dd6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584dd9: je 0x585276 */ if (fZ) goto L_00585276;
L_00584ddf:; BB(0x00584ddf);
    /* 00584ddf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00584de1:; BB(0x00584de1);
    /* 00584de1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584de3: je 0x584dec */ if (fZ) goto L_00584dec;
L_00584de5:; BB(0x00584de5);
    /* 00584de5: mov eax, 1 */ r_eax = 0x1u;
    /* 00584dea: jmp 0x584dee */ goto L_00584dee;
L_00584dec:; BB(0x00584dec);
    /* 00584dec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00584dee:; BB(0x00584dee);
    /* 00584dee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584df0: je 0x584e23 */ if (fZ) goto L_00584e23;
L_00584df2:; BB(0x00584df2);
    /* 00584df2: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00584df8: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584dfe: je 0x584e06 */ if (fZ) goto L_00584e06;
L_00584e00:; BB(0x00584e00);
    /* 00584e00: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00584e06:; BB(0x00584e06);
    /* 00584e06: mov eax, dword ptr [0x9bf600] */ r_eax = R32((u32)(0x9bf600u));
    /* 00584e0b: mov dword ptr [esi + 0x380], 0x10 */ W32((u32)(r_esi+0x380u), 0x10u);
    /* 00584e15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584e17: je 0x584e1d */ if (fZ) goto L_00584e1d;
L_00584e19:; BB(0x00584e19);
    /* 00584e19: mov ecx, esi */ r_ecx = r_esi;
    /* 00584e1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584e1du); call_ind(t); }
L_00584e1d:; BB(0x00584e1d);
    /* 00584e1d: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584e20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584e21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584e22: ret  */ FN_RET(0x00584dac); r_esp += 4; return;
L_00584e23:; BB(0x00584e23);
    /* 00584e23: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 00584e29: mov eax, dword ptr [eax + 0x380] */ r_eax = R32((u32)(r_eax+0x380u));
    /* 00584e2f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584e32: je 0x58526c */ if (fZ) goto L_0058526c;
L_00584e38:; BB(0x00584e38);
    /* 00584e38: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584e3b: je 0x58526c */ if (fZ) goto L_0058526c;
L_00584e41:; BB(0x00584e41);
    /* 00584e41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00584e43:; BB(0x00584e43);
    /* 00584e43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584e45: je 0x584e78 */ if (fZ) goto L_00584e78;
L_00584e47:; BB(0x00584e47);
    /* 00584e47: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00584e4d: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584e53: je 0x584e5b */ if (fZ) goto L_00584e5b;
L_00584e55:; BB(0x00584e55);
    /* 00584e55: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00584e5b:; BB(0x00584e5b);
    /* 00584e5b: mov eax, dword ptr [0x9bf590] */ r_eax = R32((u32)(0x9bf590u));
    /* 00584e60: mov dword ptr [esi + 0x380], 2 */ W32((u32)(r_esi+0x380u), 0x2u);
    /* 00584e6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584e6c: je 0x584e72 */ if (fZ) goto L_00584e72;
L_00584e6e:; BB(0x00584e6e);
    /* 00584e6e: mov ecx, esi */ r_ecx = r_esi;
    /* 00584e70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584e72u); call_ind(t); }
L_00584e72:; BB(0x00584e72);
    /* 00584e72: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00584e75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00584e76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584e77: ret  */ FN_RET(0x00584dac); r_esp += 4; return;
L_00584e78:; BB(0x00584e78);
    /* 00584e78: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00584e7b: mov eax, dword ptr [esi + 0x394] */ r_eax = R32((u32)(r_esi+0x394u));
    /* 00584e81: mov ebx, dword ptr [esi + 0x398] */ r_ebx = R32((u32)(r_esi+0x398u));
    /* 00584e87: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00584e8a: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00584e90: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00584e94: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00584e98: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00584e9b: mov edx, ebx */ r_edx = r_ebx;
    /* 00584e9d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x584ea2u); f_0082f9c4();
    /* 00584ea2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00584eaa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00584ead: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x584eb2u); f_0083173c();
    /* 00584eb2: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00584eb6: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00584eba: fcomp dword ptr [0x928430] */ fx_compare(ST(0), R_F32((u32)(0x928430u))); FPOP();
    /* 00584ec0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584ec2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584ec3: ja 0x584ee2 */ if ((!fC&&!fZ)) goto L_00584ee2;
L_00584ec5:; BB(0x00584ec5);
    /* 00584ec5: fld dword ptr [0x92842c] */ FPUSH(R_F32((u32)(0x92842cu)));
    /* 00584ecb: fld dword ptr [0x928434] */ FPUSH(R_F32((u32)(0x928434u)));
    /* 00584ed1: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00584ed8: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00584ee0: jmp 0x584ef3 */ goto L_00584ef3;
L_00584ee2:; BB(0x00584ee2);
    /* 00584ee2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00584ee5: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x584eeau); f_0082df08();
    /* 00584eea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00584eec: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00584eef: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_00584ef3:; BB(0x00584ef3);
    /* 00584ef3: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00584ef9: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00584efc: test eax, 0x1c00000 */ {  u32 a = r_eax; u32 b = 0x1c00000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584f01: je 0x584f0e */ if (fZ) goto L_00584f0e;
L_00584f03:; BB(0x00584f03);
    /* 00584f03: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00584f06: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584f08: fchs  */ ST(0) = -ST(0);
    /* 00584f0a: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
L_00584f0e:; BB(0x00584f0e);
    /* 00584f0e: movzx eax, byte ptr [0xa742d0] */ r_eax = (u32)R8((u32)(0xa742d0u));
    /* 00584f15: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584f17: jne 0x584f2d */ if (!fZ) goto L_00584f2d;
L_00584f19:; BB(0x00584f19);
    /* 00584f19: mov dword ptr [0xa742d4], 0x41700000 */ W32((u32)(0xa742d4u), 0x41700000u);
    /* 00584f23: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584f28: mov byte ptr [0xa742d0], al */ W8((u32)(0xa742d0u), (u8)r_eax);
L_00584f2d:; BB(0x00584f2d);
    /* 00584f2d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00584f2f: fmul qword ptr [0x928340] */ ST(0) = ST(0) * R_F64((u32)(0x928340u));
    /* 00584f35: fdiv qword ptr [0x928338] */ ST(0) = ST(0) / R_F64((u32)(0x928338u));
    /* 00584f3b: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00584f3f: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00584f44: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584f49: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00584f4d: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00584f51: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00584f55: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00584f59: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00584f5d: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 00584f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584f63: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00584f66: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x584f6bu); f_007a8c74();
    /* 00584f6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584f6e: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00584f72: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00584f75: fcomp dword ptr [0xa742d4] */ fx_compare(ST(0), R_F32((u32)(0xa742d4u))); FPOP();
    /* 00584f7b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584f7d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584f7e: jbe 0x584fb4 */ if ((fC||fZ)) goto L_00584fb4;
L_00584f80:; BB(0x00584f80);
    /* 00584f80: fld dword ptr [0x92826c] */ FPUSH(R_F32((u32)(0x92826cu)));
    /* 00584f86: fadd dword ptr [esi + 0x3b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3b8u));
    /* 00584f8c: fcom dword ptr [0x928268] */ fx_compare(ST(0), R_F32((u32)(0x928268u))); 
    /* 00584f92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584f94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584f95: jbe 0x584fac */ if ((fC||fZ)) goto L_00584fac;
L_00584f97:; BB(0x00584f97);
    /* 00584f97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00584f99: fld dword ptr [0x928268] */ FPUSH(R_F32((u32)(0x928268u)));
    /* 00584f9f: mov eax, 0x3f19999a */ r_eax = 0x3f19999au;
    /* 00584fa4: mov dword ptr [esi + 0x3b8], eax */ W32((u32)(r_esi+0x3b8u), r_eax);
    /* 00584faa: jmp 0x585006 */ goto L_00585006;
L_00584fac:; BB(0x00584fac);
    /* 00584fac: fst dword ptr [esi + 0x3b8] */ W_F32((u32)(r_esi+0x3b8u), ST(0));
    /* 00584fb2: jmp 0x585006 */ goto L_00585006;
L_00584fb4:; BB(0x00584fb4);
    /* 00584fb4: movzx eax, byte ptr [0xa742d0] */ r_eax = (u32)R8((u32)(0xa742d0u));
    /* 00584fbb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00584fbd: jne 0x584fdb */ if (!fZ) goto L_00584fdb;
L_00584fbf:; BB(0x00584fbf);
    /* 00584fbf: fld dword ptr [0x928424] */ FPUSH(R_F32((u32)(0x928424u)));
    /* 00584fc5: mov dword ptr [0xa742d8], 0x3e99999a */ W32((u32)(0xa742d8u), 0x3e99999au);
    /* 00584fcf: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00584fd4: mov byte ptr [0xa742d0], al */ W8((u32)(0xa742d0u), (u8)r_eax);
    /* 00584fd9: jmp 0x584fe1 */ goto L_00584fe1;
L_00584fdb:; BB(0x00584fdb);
    /* 00584fdb: fld dword ptr [0xa742d8] */ FPUSH(R_F32((u32)(0xa742d8u)));
L_00584fe1:; BB(0x00584fe1);
    /* 00584fe1: fld dword ptr [esi + 0x3b8] */ FPUSH(R_F32((u32)(r_esi+0x3b8u)));
    /* 00584fe7: fsub dword ptr [0x92826c] */ ST(0) = ST(0) - R_F32((u32)(0x92826cu));
    /* 00584fed: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00584fef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00584ff1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00584ff2: jae 0x584ffe */ if (!fC) goto L_00584ffe;
L_00584ff4:; BB(0x00584ff4);
    /* 00584ff4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00584ff6: fst dword ptr [esi + 0x3b8] */ W_F32((u32)(r_esi+0x3b8u), ST(0));
    /* 00584ffc: jmp 0x585006 */ goto L_00585006;
L_00584ffe:; BB(0x00584ffe);
    /* 00584ffe: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00585000: fst dword ptr [esi + 0x3b8] */ W_F32((u32)(r_esi+0x3b8u), ST(0));
L_00585006:; BB(0x00585006);
    /* 00585006: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00585009: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0058500d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058500f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00585011: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00585013: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00585015: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585017: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0058501a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058501e: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00585022: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00585026: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0058502e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00585032: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x585037u); f_0083173c();
    /* 00585037: fcomp dword ptr [0x928434] */ fx_compare(ST(0), R_F32((u32)(0x928434u))); FPOP();
    /* 0058503d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058503f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00585040: je 0x5851ac */ if (fZ) goto L_005851ac;
L_00585046:; BB(0x00585046);
    /* 00585046: movzx edx, byte ptr [0xa74328] */ r_edx = (u32)R8((u32)(0xa74328u));
    /* 0058504d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585050: jne 0x585065 */ if (!fZ) goto L_00585065;
L_00585052:; BB(0x00585052);
    /* 00585052: mov eax, dword ptr [0xa74324] */ r_eax = R32((u32)(0xa74324u));
    /* 00585057: mov dword ptr [0xa7432c], eax */ W32((u32)(0xa7432cu), r_eax);
    /* 0058505c: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058505f: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_00585065:; BB(0x00585065);
    /* 00585065: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00585068: jne 0x585084 */ if (!fZ) goto L_00585084;
L_0058506a:; BB(0x0058506a);
    /* 0058506a: fld dword ptr [0xa7432c] */ FPUSH(R_F32((u32)(0xa7432cu)));
    /* 00585070: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00585072: fstp dword ptr [0xa74330] */ W_F32((u32)(0xa74330u), ST(0)); FPOP();
    /* 00585078: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058507e: mov byte ptr [0xa74328], dl */ W8((u32)(0xa74328u), (u8)r_edx);
L_00585084:; BB(0x00585084);
    /* 00585084: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00585088: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0058508b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058508e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00585092: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00585095: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00585099: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0058509c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005850a0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5850a5u); f_0082ebac();
    /* 005850a5: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005850a9: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 005850ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005850ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005850ae: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5850b3u); f_007a9180();
    /* 005850b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005850b6: fcomp dword ptr [0xa74330] */ fx_compare(ST(0), R_F32((u32)(0xa74330u))); FPOP();
    /* 005850bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005850be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005850bf: ja 0x5851ac */ if ((!fC&&!fZ)) goto L_005851ac;
L_005850c5:; BB(0x005850c5);
    /* 005850c5: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 005850c9: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 005850cd: mov eax, 1 */ r_eax = 0x1u;
    /* 005850d2: mov ebp, eax */ r_ebp = r_eax;
L_005850d4:; BB(0x005850d4);
    /* 005850d4: movzx eax, byte ptr [0xa74328] */ r_eax = (u32)R8((u32)(0xa74328u));
    /* 005850db: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005850dd: jne 0x5850f3 */ if (!fZ) goto L_005850f3;
L_005850df:; BB(0x005850df);
    /* 005850df: mov dword ptr [0xa74334], 0x41200000 */ W32((u32)(0xa74334u), 0x41200000u);
    /* 005850e9: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005850ee: mov byte ptr [0xa74328], al */ W8((u32)(0xa74328u), (u8)r_eax);
L_005850f3:; BB(0x005850f3);
    /* 005850f3: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005850f7: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005850fb: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 005850fe: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00585102: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00585105: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00585109: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0058510c: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00585110: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x585115u); f_0082ebac();
    /* 00585115: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00585119: fadd dword ptr [0xa74334] */ ST(0) = ST(0) + R_F32((u32)(0xa74334u));
    /* 0058511f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00585123: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 00585127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00585129: mov ecx, esi */ r_ecx = r_esi;
    /* 0058512b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058512c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x585131u); f_007b4c58();
    /* 00585131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585133: je 0x58514b */ if (fZ) goto L_0058514b;
L_00585135:; BB(0x00585135);
    /* 00585135: lea edi, [esp + 0x24] */ r_edi = (u32)(r_esp+0x24u);
    /* 00585139: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058513a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058513b: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x585140u); f_00780d3c();
    /* 00585140: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00585143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585145: je 0x585231 */ if (fZ) goto L_00585231;
L_0058514b:; BB(0x0058514b);
    /* 0058514b: mov edi, ebp */ r_edi = r_ebp;
    /* 0058514d: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00585150: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585156: je 0x58515a */ if (fZ) goto L_0058515a;
L_00585158:; BB(0x00585158);
    /* 00585158: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_0058515a:; BB(0x0058515a);
    /* 0058515a: mov ecx, edi */ r_ecx = r_edi;
    /* 0058515c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x585161u); f_0082dcbc();
    /* 00585161: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00585165: mov ecx, edi */ r_ecx = r_edi;
    /* 00585167: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58516cu); f_0082ddd8();
    /* 0058516c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00585170: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00585174: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00585178: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0058517c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0058517e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00585180: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00585182: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585184: fchs  */ ST(0) = -ST(0);
    /* 00585186: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00585188: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0058518a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0058518c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0058518f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00585191: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00585195: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00585197: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058519b: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058519e: jl 0x5850d4 */ if ((fS!=fO)) goto L_005850d4;
L_005851a4:; BB(0x005851a4);
    /* 005851a4: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 005851a8: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
L_005851ac:; BB(0x005851ac);
    /* 005851ac: movzx eax, byte ptr [0xa742d0] */ r_eax = (u32)R8((u32)(0xa742d0u));
    /* 005851b3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005851b5: jne 0x5851c9 */ if (!fZ) goto L_005851c9;
L_005851b7:; BB(0x005851b7);
    /* 005851b7: mov dword ptr [0xa742dc], 0x40f00000 */ W32((u32)(0xa742dcu), 0x40f00000u);
    /* 005851c1: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005851c4: mov byte ptr [0xa742d0], al */ W8((u32)(0xa742d0u), (u8)r_eax);
L_005851c9:; BB(0x005851c9);
    /* 005851c9: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005851cb: jne 0x5851e5 */ if (!fZ) goto L_005851e5;
L_005851cd:; BB(0x005851cd);
    /* 005851cd: fld dword ptr [0xa742dc] */ FPUSH(R_F32((u32)(0xa742dcu)));
    /* 005851d3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005851d5: fstp dword ptr [0xa742e0] */ W_F32((u32)(0xa742e0u), ST(0)); FPOP();
    /* 005851db: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005851e0: mov byte ptr [0xa742d0], al */ W8((u32)(0xa742d0u), (u8)r_eax);
L_005851e5:; BB(0x005851e5);
    /* 005851e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005851e6: lea eax, [esi + 0x394] */ r_eax = (u32)(r_esi+0x394u);
    /* 005851ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005851ed: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5851f2u); f_007a9180();
    /* 005851f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005851f5: fcomp dword ptr [0xa742e0] */ fx_compare(ST(0), R_F32((u32)(0xa742e0u))); FPOP();
    /* 005851fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005851fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005851fe: jae 0x58522b */ if (!fC) goto L_0058522b;
L_00585200:; BB(0x00585200);
    /* 00585200: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00585206: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058520c: je 0x585214 */ if (fZ) goto L_00585214;
L_0058520e:; BB(0x0058520e);
    /* 0058520e: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00585214:; BB(0x00585214);
    /* 00585214: mov eax, dword ptr [0x9bf5a0] */ r_eax = R32((u32)(0x9bf5a0u));
    /* 00585219: mov dword ptr [esi + 0x380], 4 */ W32((u32)(r_esi+0x380u), 0x4u);
    /* 00585223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585225: je 0x58522b */ if (fZ) goto L_0058522b;
L_00585227:; BB(0x00585227);
    /* 00585227: mov ecx, esi */ r_ecx = r_esi;
    /* 00585229: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58522bu); call_ind(t); }
L_0058522b:; BB(0x0058522b);
    /* 0058522b: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058522e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058522f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00585230: ret  */ FN_RET(0x00584dac); r_esp += 4; return;
L_00585231:; BB(0x00585231);
    /* 00585231: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00585235: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00585239: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058523c: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0058523f: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00585242: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00585245: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00585248: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0058524b: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0058524f: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00585252: mov ecx, esi */ r_ecx = r_esi;
    /* 00585254: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00585258: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0058525b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0058525f: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00585262: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x585267u); f_007b6880();
    /* 00585267: jmp 0x5851ac */ goto L_005851ac;
L_0058526c:; BB(0x0058526c);
    /* 0058526c: mov eax, 1 */ r_eax = 0x1u;
    /* 00585271: jmp 0x584e43 */ goto L_00584e43;
L_00585276:; BB(0x00585276);
    /* 00585276: mov eax, 1 */ r_eax = 0x1u;
    /* 0058527b: jmp 0x584de1 */ goto L_00584de1;
}

