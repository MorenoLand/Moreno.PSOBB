#include "protos.h"

void f_004ac048(void) /* sub_4AC048 */
{
    FN_ENTER(0x004ac048);
    /* 004ac048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac049: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac04c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ac04e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004ac051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac053: je 0x4ac0e6 */ if (fZ) goto L_004ac0e6;
L_004ac059:; BB(0x004ac059);
    /* 004ac059: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac05c: je 0x4ac0a8 */ if (fZ) goto L_004ac0a8;
L_004ac05e:; BB(0x004ac05e);
    /* 004ac05e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac061: jne 0x4ac0e6 */ if (!fZ) goto L_004ac0e6;
L_004ac067:; BB(0x004ac067);
    /* 004ac067: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 004ac06a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac06c: je 0x4ac073 */ if (fZ) goto L_004ac073;
L_004ac06e:; BB(0x004ac06e);
    /* 004ac06e: call 0x4ac8ac */ r_esp -= 4; W32(r_esp, 0x4ac073u); f_004ac8ac();
L_004ac073:; BB(0x004ac073);
    /* 004ac073: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 004ac076: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004ac079: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 004ac07c: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ac07f: jle 0x4ac0e6 */ if ((fZ||fS!=fO)) goto L_004ac0e6;
L_004ac081:; BB(0x004ac081);
    /* 004ac081: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 004ac084: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac086: je 0x4ac09c */ if (fZ) goto L_004ac09c;
L_004ac088:; BB(0x004ac088);
    /* 004ac088: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ac08c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ac091: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ac095: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
L_004ac09c:; BB(0x004ac09c);
    /* 004ac09c: mov dword ptr [ebp + 0x1c], 3 */ W32((u32)(r_ebp+0x1cu), 0x3u);
    /* 004ac0a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac0a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac0a7: ret  */ FN_RET(0x004ac048); r_esp += 4; return;
L_004ac0a8:; BB(0x004ac0a8);
    /* 004ac0a8: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 004ac0ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac0ad: je 0x4ac0eb */ if (fZ) goto L_004ac0eb;
L_004ac0af:; BB(0x004ac0af);
    /* 004ac0af: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 004ac0b2: fadd dword ptr [ebp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x24u));
    /* 004ac0b5: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 004ac0b8: fst dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0));
    /* 004ac0bb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004ac0be: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ac0c1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ac0c4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004ac0c7: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ac0ca: fadd dword ptr [eax*4 + 0x904688] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x904688u));
    /* 004ac0d1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ac0d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ac0d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ac0d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ac0d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ac0da: ja 0x4ac0fc */ if ((!fC&&!fZ)) goto L_004ac0fc;
L_004ac0dc:; BB(0x004ac0dc);
    /* 004ac0dc: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 004ac0df: mov dword ptr [ebp + 0x1c], 2 */ W32((u32)(r_ebp+0x1cu), 0x2u);
L_004ac0e6:; BB(0x004ac0e6);
    /* 004ac0e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac0e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac0ea: ret  */ FN_RET(0x004ac048); r_esp += 4; return;
L_004ac0eb:; BB(0x004ac0eb);
    /* 004ac0eb: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac0ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac0ef: call 0x4ac72c */ r_esp -= 4; W32(r_esp, 0x4ac0f4u); f_004ac72c();
    /* 004ac0f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac0f7: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 004ac0fa: jmp 0x4ac0af */ goto L_004ac0af;
L_004ac0fc:; BB(0x004ac0fc);
    /* 004ac0fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ac0fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac102: ret  */ FN_RET(0x004ac048); r_esp += 4; return;
}

void f_004ac104(void) /* sub_4AC104 */
{
    FN_ENTER(0x004ac104);
    /* 004ac104: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ac105: mov esi, ecx */ r_esi = r_ecx;
    /* 004ac107: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x4ac10cu); f_0067e408();
    /* 004ac10c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac10e: je 0x4ac112 */ if (fZ) goto L_004ac112;
L_004ac110:; BB(0x004ac110);
    /* 004ac110: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ac111: ret  */ FN_RET(0x004ac104); r_esp += 4; return;
L_004ac112:; BB(0x004ac112);
    /* 004ac112: mov ecx, esi */ r_ecx = r_esi;
    /* 004ac114: call 0x4ac180 */ r_esp -= 4; W32(r_esp, 0x4ac119u); f_004ac180();
    /* 004ac119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac11b: jne 0x4ac11f */ if (!fZ) goto L_004ac11f;
L_004ac11d:; BB(0x004ac11d);
    /* 004ac11d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ac11e: ret  */ FN_RET(0x004ac104); r_esp += 4; return;
L_004ac11f:; BB(0x004ac11f);
    /* 004ac11f: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x4ac124u); f_00835068();
    /* 004ac124: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ac129u); f_0082d7b0();
    /* 004ac129: mov ecx, dword ptr [0xa47710] */ r_ecx = R32((u32)(0xa47710u));
    /* 004ac12f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4ac134u); f_00829cc8();
    /* 004ac134: lea ecx, [esi + 0x2c] */ r_ecx = (u32)(r_esi+0x2cu);
    /* 004ac137: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4ac13cu); f_0082d838();
    /* 004ac13c: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004ac13f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac142: je 0x4ac164 */ if (fZ) goto L_004ac164;
L_004ac144:; BB(0x004ac144);
    /* 004ac144: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac147: call 0x4ac900 */ r_esp -= 4; W32(r_esp, 0x4ac14cu); f_004ac900();
    /* 004ac14c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac14d: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac150: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 004ac153: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004ac156: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x4ac15bu); f_00835574();
    /* 004ac15b: push dword ptr [esi + 0x48] */ { u32 v = R32((u32)(r_esi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac15e: call 0x4ac924 */ r_esp -= 4; W32(r_esp, 0x4ac163u); f_004ac924();
    /* 004ac163: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ac164:; BB(0x004ac164);
    /* 004ac164: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac167: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 004ac16a: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 004ac16d: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x4ac172u); f_00835574();
    /* 004ac172: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ac177u); f_0082da80();
    /* 004ac177: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x4ac17cu); f_00835078();
    /* 004ac17c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ac17d: ret  */ FN_RET(0x004ac104); r_esp += 4; return;
}

void f_004ac180(void) /* sub_4AC180 */
{
    FN_ENTER(0x004ac180);
    /* 004ac180: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac185: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac188: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac18d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac18e: call 0x4d45e0 */ r_esp -= 4; W32(r_esp, 0x4ac193u); f_004d45e0();
    /* 004ac193: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac196: ret  */ FN_RET(0x004ac180); r_esp += 4; return;
}

void f_004ac198(void) /* sub_4AC198 */
{
    FN_ENTER(0x004ac198);
    /* 004ac198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac199: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ac19b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004ac19e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac1a0: je 0x4ac1a4 */ if (fZ) goto L_004ac1a4;
L_004ac1a2:; BB(0x004ac1a2);
    /* 004ac1a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac1a3: ret  */ FN_RET(0x004ac198); r_esp += 4; return;
L_004ac1a4:; BB(0x004ac1a4);
    /* 004ac1a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ac1a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1a9: push 0x3b3 */ { u32 v = 0x3b3u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1ae: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ac1b3u); f_00814298();
    /* 004ac1b3: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 004ac1ba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac1bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac1be: ret  */ FN_RET(0x004ac198); r_esp += 4; return;
}

void f_004ac1c0(void) /* sub_4AC1C0 */
{
    FN_ENTER(0x004ac1c0);
    /* 004ac1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac1c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1c5: push 0x8d0940 */ { u32 v = 0x8d0940u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac1d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac1d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac1db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac1de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ac1e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ac1e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ac1e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004ac1ea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ac1ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ac1f4: mov eax, ecx */ r_eax = r_ecx;
    /* 004ac1f6: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004ac1f9: mov dword ptr [eax], 0xafa4f0 */ W32((u32)(r_eax), 0xafa4f0u);
    /* 004ac1ff: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ac202: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac204: jl 0x4ac27a */ if ((fS!=fO)) goto L_004ac27a;
L_004ac206:; BB(0x004ac206);
    /* 004ac206: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
L_004ac209:; BB(0x004ac209);
    /* 004ac209: mov ebx, dword ptr [ecx + edx*4] */ r_ebx = R32((u32)(r_ecx+r_edx*4));
    /* 004ac20c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004ac20f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac211: je 0x4ac231 */ if (fZ) goto L_004ac231;
L_004ac213:; BB(0x004ac213);
    /* 004ac213: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac216: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004ac21a: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac220: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004ac224: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 004ac227: mov dword ptr [ebx + eax*2], 0 */ W32((u32)(r_ebx+r_eax*2), 0x0u);
    /* 004ac22e: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
L_004ac231:; BB(0x004ac231);
    /* 004ac231: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ac234: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac236: jge 0x4ac209 */ if ((fS==fO)) goto L_004ac209;
L_004ac238:; BB(0x004ac238);
    /* 004ac238: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac239: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ac23eu); f_00857e98();
    /* 004ac23e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac23f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ac246: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac249: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ac24eu); f_008171e8();
    /* 004ac24e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ac251: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac253: jne 0x4ac26e */ if (!fZ) goto L_004ac26e;
L_004ac255:; BB(0x004ac255);
    /* 004ac255: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ac258: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ac25b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ac25e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ac261: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ac268: mov esp, ebp */ r_esp = r_ebp;
    /* 004ac26a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac26b: ret 4 */ FN_RET(0x004ac1c0); r_esp += 8; return;
L_004ac26e:; BB(0x004ac26e);
    /* 004ac26e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac272: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ac277u); f_005c2f74();
    /* 004ac277: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac278: jmp 0x4ac255 */ goto L_004ac255;
L_004ac27a:; BB(0x004ac27a);
    /* 004ac27a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004ac27d: jmp 0x4ac238 */ goto L_004ac238;
}

void f_004ac280(void) /* sub_4AC280 */
{
    FN_ENTER(0x004ac280);
    /* 004ac280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac281: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac283: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac285: push 0x8d0976 */ { u32 v = 0x8d0976u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac28a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac291: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac298: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac29b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac29e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ac2a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ac2a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ac2a7: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac2a9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ac2b0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ac2b5u); f_005caba4();
    /* 004ac2b5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ac2b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac2bb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ac2be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac2c0: je 0x4ac3a4 */ if (fZ) goto L_004ac3a4;
L_004ac2c6:; BB(0x004ac2c6);
    /* 004ac2c6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004ac2cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ac2d4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac2d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004ac2d9: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004ac2dc: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ac2e1u); f_008193cc();
    /* 004ac2e1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004ac2e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac2eb: mov dword ptr [ecx], 0xafa4f0 */ W32((u32)(r_ecx), 0xafa4f0u);
    /* 004ac2f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ac2f3: mov eax, dword ptr [0x9ab8fc] */ r_eax = R32((u32)(0x9ab8fcu));
    /* 004ac2f8: mov edi, dword ptr [0xa47714] */ r_edi = R32((u32)(0xa47714u));
    /* 004ac2fe: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004ac301: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ac303: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004ac306: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 004ac309: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 004ac30f: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 004ac312: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 004ac315: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac317: je 0x4ac329 */ if (fZ) goto L_004ac329;
L_004ac319:; BB(0x004ac319);
    /* 004ac319: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac31c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ac31f: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004ac322: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004ac325: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac327: jne 0x4ac319 */ if (!fZ) goto L_004ac319;
L_004ac329:; BB(0x004ac329);
    /* 004ac329: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac32b: jle 0x4ac392 */ if ((fZ||fS!=fO)) goto L_004ac392;
L_004ac32d:; BB(0x004ac32d);
    /* 004ac32d: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 004ac333: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 004ac336: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ac338: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ac33a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac33b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4ac340u); f_008581c5();
    /* 004ac340: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac341: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac344: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004ac347: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 004ac34a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004ac34d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ac34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac351: jle 0x4ac371 */ if ((fZ||fS!=fO)) goto L_004ac371;
L_004ac353:; BB(0x004ac353);
    /* 004ac353: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 004ac356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac357: call 0x4abf48 */ r_esp -= 4; W32(r_esp, 0x4ac35cu); f_004abf48();
    /* 004ac35c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac35d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac360: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004ac363: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 004ac366: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 004ac369: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ac36c: cmp ebx, dword ptr [ecx + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ac36f: jl 0x4ac353 */ if ((fS!=fO)) goto L_004ac353;
L_004ac371:; BB(0x004ac371);
    /* 004ac371: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004ac378:; BB(0x004ac378);
    /* 004ac378: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac37b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ac37e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ac381: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ac384: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ac387: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ac38e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ac390: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac391: ret  */ FN_RET(0x004ac280); r_esp += 4; return;
L_004ac392:; BB(0x004ac392);
    /* 004ac392: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac395: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ac399: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac39e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ac3a2: jmp 0x4ac371 */ goto L_004ac371;
L_004ac3a4:; BB(0x004ac3a4);
    /* 004ac3a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac3a6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ac3a9: jmp 0x4ac378 */ goto L_004ac378;
}

void f_004ac3ac(void) /* sub_4AC3AC */
{
    FN_ENTER(0x004ac3ac);
    /* 004ac3ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ac3ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac3ae: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac3b1: mov esi, ecx */ r_esi = r_ecx;
    /* 004ac3b3: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac3b8: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac3bc: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004ac3c1: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004ac3c7: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 004ac3ca: call 0x4ab9a4 */ r_esp -= 4; W32(r_esp, 0x4ac3cfu); f_004ab9a4();
    /* 004ac3cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac3d2: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004ac3d5: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004ac3d8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ac3da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac3dc: jle 0x4ac43f */ if ((fZ||fS!=fO)) goto L_004ac43f;
L_004ac3de:; BB(0x004ac3de);
    /* 004ac3de: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004ac3e2: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 004ac3e6: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 004ac3ea: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 004ac3ee: mov ebp, edx */ r_ebp = r_edx;
L_004ac3f0:; BB(0x004ac3f0);
    /* 004ac3f0: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 004ac3f3: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 004ac3f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac3f8: je 0x4ac425 */ if (fZ) goto L_004ac425;
L_004ac3fa:; BB(0x004ac3fa);
    /* 004ac3fa: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004ac3fe: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ac402: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004ac405: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004ac409: call 0x4ab9b4 */ r_esp -= 4; W32(r_esp, 0x4ac40eu); f_004ab9b4();
    /* 004ac40e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac410: jne 0x4ac417 */ if (!fZ) goto L_004ac417;
L_004ac412:; BB(0x004ac412);
    /* 004ac412: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004ac415: jmp 0x4ac425 */ goto L_004ac425;
L_004ac417:; BB(0x004ac417);
    /* 004ac417: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004ac41a: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 004ac41d: call 0x4ac198 */ r_esp -= 4; W32(r_esp, 0x4ac422u); f_004ac198();
    /* 004ac422: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
L_004ac425:; BB(0x004ac425);
    /* 004ac425: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 004ac428: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ac42b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ac42d: jl 0x4ac3f0 */ if ((fS!=fO)) goto L_004ac3f0;
L_004ac42f:; BB(0x004ac42f);
    /* 004ac42f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 004ac433: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_004ac437:; BB(0x004ac437);
    /* 004ac437: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac43a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac43b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ac43c: ret 8 */ FN_RET(0x004ac3ac); r_esp += 12; return;
L_004ac43f:; BB(0x004ac43f);
    /* 004ac43f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ac441: jmp 0x4ac437 */ goto L_004ac437;
}

void f_004ac444(void) /* sub_4AC444 */
{
    FN_ENTER(0x004ac444);
    /* 004ac444: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ac449u); f_0061cdb0();
    /* 004ac449: ret  */ FN_RET(0x004ac444); r_esp += 4; return;
}

void f_004ac44c(void) /* sub_4AC44C */
{
    FN_ENTER(0x004ac44c);
    /* 004ac44c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac44d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ac44f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ac451: call 0x4ac470 */ r_esp -= 4; W32(r_esp, 0x4ac456u); f_004ac470();
    /* 004ac456: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ac45a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac45c: jne 0x4ac462 */ if (!fZ) goto L_004ac462;
L_004ac45e:; BB(0x004ac45e);
    /* 004ac45e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac45f: ret 4 */ FN_RET(0x004ac44c); r_esp += 8; return;
L_004ac462:; BB(0x004ac462);
    /* 004ac462: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac463: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ac468u); f_005c2f74();
    /* 004ac468: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac469: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac46a: ret 4 */ FN_RET(0x004ac44c); r_esp += 8; return;
}

void f_004ac470(void) /* sub_4AC470 */
{
    FN_ENTER(0x004ac470);
    /* 004ac470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac471: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac475: push 0x8d0990 */ { u32 v = 0x8d0990u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac47a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac481: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac488: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac48b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac48e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ac491: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ac494: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ac497: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ac49a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ac49d: mov dword ptr [ecx], 0xafa550 */ W32((u32)(r_ecx), 0xafa550u);
    /* 004ac4a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ac4aa: call 0x4abedc */ r_esp -= 4; W32(r_esp, 0x4ac4afu); f_004abedc();
    /* 004ac4af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ac4b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ac4b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004ac4bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac4bc: ret  */ FN_RET(0x004ac470); r_esp += 4; return;
}

void f_004ac4c0(void) /* sub_4AC4C0 */
{
    FN_ENTER(0x004ac4c0);
    /* 004ac4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac4c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac4c5: push 0x8d09b8 */ { u32 v = 0x8d09b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac4ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac4d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac4d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac4d8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac4db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac4de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ac4e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ac4e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ac4e7: mov eax, dword ptr [0xa47714] */ r_eax = R32((u32)(0xa47714u));
    /* 004ac4ec: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004ac4f2: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004ac4f5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ac4fc: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004ac4ff: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac501: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ac506u); f_005caba4();
    /* 004ac506: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac507: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ac50a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac50c: je 0x4ac549 */ if (fZ) goto L_004ac549;
L_004ac50e:; BB(0x004ac50e);
    /* 004ac50e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004ac515: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ac51c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac51f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ac522: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ac525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac526: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac52c: call 0x4ac550 */ r_esp -= 4; W32(r_esp, 0x4ac531u); f_004ac550();
    /* 004ac531: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ac534: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004ac53b:; BB(0x004ac53b);
    /* 004ac53b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ac53e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ac545: mov esp, ebp */ r_esp = r_ebp;
    /* 004ac547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac548: ret  */ FN_RET(0x004ac4c0); r_esp += 4; return;
L_004ac549:; BB(0x004ac549);
    /* 004ac549: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac54b: jmp 0x4ac53b */ goto L_004ac53b;
}

void f_004ac550(void) /* sub_4AC550 */
{
    FN_ENTER(0x004ac550);
    /* 004ac550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ac551: mov esi, ecx */ r_esi = r_ecx;
    /* 004ac553: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac557: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac55b: mov ecx, esi */ r_ecx = r_esi;
    /* 004ac55d: call 0x4abfc0 */ r_esp -= 4; W32(r_esp, 0x4ac562u); f_004abfc0();
    /* 004ac562: mov dword ptr [esi], 0xafa550 */ W32((u32)(r_esi), 0xafa550u);
    /* 004ac568: mov eax, dword ptr [0x9ab900] */ r_eax = R32((u32)(0x9ab900u));
    /* 004ac56d: mov edx, dword ptr [0xa47714] */ r_edx = R32((u32)(0xa47714u));
    /* 004ac573: mov dword ptr [esi + 0x24], 0x3f000000 */ W32((u32)(r_esi+0x24u), 0x3f000000u);
    /* 004ac57a: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004ac57d: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004ac583: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 004ac586: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004ac589: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004ac58f: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 004ac592: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 004ac595: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004ac59b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004ac59e: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 004ac5a1: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004ac5a7: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004ac5aa: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 004ac5ad: mov eax, esi */ r_eax = r_esi;
    /* 004ac5af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ac5b0: ret 8 */ FN_RET(0x004ac550); r_esp += 12; return;
}

void f_004ac5b4(void) /* sub_4AC5B4 */
{
    FN_ENTER(0x004ac5b4);
    /* 004ac5b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac5b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac5b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac5b9: push 0x8d09d4 */ { u32 v = 0x8d09d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac5be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac5c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac5cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac5cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac5d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ac5d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ac5d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ac5db: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004ac5de: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ac5e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ac5e8: mov eax, ecx */ r_eax = r_ecx;
    /* 004ac5ea: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004ac5ed: mov dword ptr [eax], 0xafa5b8 */ W32((u32)(r_eax), 0xafa5b8u);
    /* 004ac5f3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ac5f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac5f8: jl 0x4ac654 */ if ((fS!=fO)) goto L_004ac654;
L_004ac5fa:; BB(0x004ac5fa);
    /* 004ac5fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac5fd: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004ac600: mov ebx, dword ptr [ecx + edx*4] */ r_ebx = R32((u32)(r_ecx+r_edx*4));
    /* 004ac603: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004ac606: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac608: je 0x4ac625 */ if (fZ) goto L_004ac625;
L_004ac60a:; BB(0x004ac60a);
    /* 004ac60a: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004ac60e: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac614: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004ac618: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac61b: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 004ac61e: mov dword ptr [esi + eax*2], 0 */ W32((u32)(r_esi+r_eax*2), 0x0u);
L_004ac625:; BB(0x004ac625);
    /* 004ac625: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac628: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
    /* 004ac62b: mov ebx, dword ptr [ebx + eax*2] */ r_ebx = R32((u32)(r_ebx+r_eax*2));
    /* 004ac62e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac630: je 0x4ac64d */ if (fZ) goto L_004ac64d;
L_004ac632:; BB(0x004ac632);
    /* 004ac632: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004ac636: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac63c: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004ac640: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac643: mov esi, dword ptr [ebx + 0x20] */ r_esi = R32((u32)(r_ebx+0x20u));
    /* 004ac646: mov dword ptr [esi + eax*2], 0 */ W32((u32)(r_esi+r_eax*2), 0x0u);
L_004ac64d:; BB(0x004ac64d);
    /* 004ac64d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ac650: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac652: jge 0x4ac5fa */ if ((fS==fO)) goto L_004ac5fa;
L_004ac654:; BB(0x004ac654);
    /* 004ac654: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac657: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac65a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ac65fu); f_00857e98();
    /* 004ac65f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac662: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac665: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4ac66au); f_00857e98();
    /* 004ac66a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac66d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ac674: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac677: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ac67cu); f_008171e8();
    /* 004ac67c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ac67f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac681: jne 0x4ac69c */ if (!fZ) goto L_004ac69c;
L_004ac683:; BB(0x004ac683);
    /* 004ac683: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ac686: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ac689: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ac68c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ac68f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ac696: mov esp, ebp */ r_esp = r_ebp;
    /* 004ac698: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac699: ret 4 */ FN_RET(0x004ac5b4); r_esp += 8; return;
L_004ac69c:; BB(0x004ac69c);
    /* 004ac69c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac69f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac6a0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ac6a5u); f_005c2f74();
    /* 004ac6a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac6a6: jmp 0x4ac683 */ goto L_004ac683;
}

void f_004ac6a8(void) /* sub_4AC6A8 */
{
    FN_ENTER(0x004ac6a8);
    /* 004ac6a8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac6ac: mov ecx, dword ptr [0xa47740] */ r_ecx = R32((u32)(0xa47740u));
    /* 004ac6b2: call 0x4ac6b8 */ r_esp -= 4; W32(r_esp, 0x4ac6b7u); f_004ac6b8();
    /* 004ac6b7: ret  */ FN_RET(0x004ac6a8); r_esp += 4; return;
}

void f_004ac6b8(void) /* sub_4AC6B8 */
{
    FN_ENTER(0x004ac6b8);
    /* 004ac6b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ac6b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac6ba: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac6bd: mov edi, ecx */ r_edi = r_ecx;
    /* 004ac6bf: mov ebx, dword ptr [0xa47744] */ r_ebx = R32((u32)(0xa47744u));
    /* 004ac6c5: lea edx, [ebx - 1] */ r_edx = (u32)(r_ebx+0xffffffffu);
    /* 004ac6c8: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 004ac6cb: mov dword ptr [0xa47744], eax */ W32((u32)(0xa47744u), r_eax);
    /* 004ac6d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac6d2: jl 0x4ac722 */ if ((fS!=fO)) goto L_004ac722;
L_004ac6d4:; BB(0x004ac6d4);
    /* 004ac6d4: cmp edx, dword ptr [edi + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ac6d7: jl 0x4ac6e1 */ if ((fS!=fO)) goto L_004ac6e1;
L_004ac6d9:; BB(0x004ac6d9);
    /* 004ac6d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac6dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac6dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ac6de: ret 4 */ FN_RET(0x004ac6b8); r_esp += 8; return;
L_004ac6e1:; BB(0x004ac6e1);
    /* 004ac6e1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ac6e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac6e5: push 0x9046a8 */ { u32 v = 0x9046a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac6ea: call 0x4d4574 */ r_esp -= 4; W32(r_esp, 0x4ac6efu); f_004d4574();
    /* 004ac6ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac6f2: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004ac6f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac6f7: je 0x4ac70a */ if (fZ) goto L_004ac70a;
L_004ac6f9:; BB(0x004ac6f9);
    /* 004ac6f9: mov ecx, dword ptr [eax + ebx*4 - 4] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0xfffffffcu));
    /* 004ac6fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac6ff: je 0x4ac70a */ if (fZ) goto L_004ac70a;
L_004ac701:; BB(0x004ac701);
    /* 004ac701: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ac704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac705: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ac70au); f_00508db8();
L_004ac70a:; BB(0x004ac70a);
    /* 004ac70a: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004ac70d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac70f: je 0x4ac722 */ if (fZ) goto L_004ac722;
L_004ac711:; BB(0x004ac711);
    /* 004ac711: mov ecx, dword ptr [eax + ebx*4 - 4] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0xfffffffcu));
    /* 004ac715: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac717: je 0x4ac722 */ if (fZ) goto L_004ac722;
L_004ac719:; BB(0x004ac719);
    /* 004ac719: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ac71c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac71d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ac722u); f_00508db8();
L_004ac722:; BB(0x004ac722);
    /* 004ac722: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac725: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac726: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ac727: ret 4 */ FN_RET(0x004ac6b8); r_esp += 8; return;
}

void f_004ac72c(void) /* sub_4AC72C */
{
    FN_ENTER(0x004ac72c);
    /* 004ac72c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac72d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac72f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac731: push 0x8d0a0a */ { u32 v = 0x8d0a0au; r_esp -= 4; W32(r_esp, v); }
    /* 004ac736: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac73c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac73d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac744: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac747: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac74a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ac74d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ac750: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ac753: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac755: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ac75c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ac761u); f_005caba4();
    /* 004ac761: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ac764: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac767: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ac76a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac76c: je 0x4ac8a5 */ if (fZ) goto L_004ac8a5;
L_004ac772:; BB(0x004ac772);
    /* 004ac772: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004ac779: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ac780: mov ecx, eax */ r_ecx = r_eax;
    /* 004ac782: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004ac785: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ac788: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004ac78b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004ac78e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac78f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004ac792: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ac797u); f_008193cc();
    /* 004ac797: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004ac79e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac7a1: mov dword ptr [eax], 0xafa5b8 */ W32((u32)(r_eax), 0xafa5b8u);
    /* 004ac7a7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004ac7a9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac7ac: mov edx, dword ptr [0x9ab904] */ r_edx = R32((u32)(0x9ab904u));
    /* 004ac7b2: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004ac7b5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac7b8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004ac7bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac7bd: mov dword ptr [eax + 0x1c], ebx */ W32((u32)(r_eax+0x1cu), r_ebx);
    /* 004ac7c0: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 004ac7c3: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 004ac7c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac7c8: je 0x4ac895 */ if (fZ) goto L_004ac895;
L_004ac7ce:; BB(0x004ac7ce);
    /* 004ac7ce: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 004ac7d1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004ac7d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac7d6: je 0x4ac7e8 */ if (fZ) goto L_004ac7e8;
L_004ac7d8:; BB(0x004ac7d8);
    /* 004ac7d8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac7db: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004ac7de: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 004ac7e1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004ac7e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac7e6: jne 0x4ac7d8 */ if (!fZ) goto L_004ac7d8;
L_004ac7e8:; BB(0x004ac7e8);
    /* 004ac7e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac7ea: jle 0x4ac885 */ if ((fZ||fS!=fO)) goto L_004ac885;
L_004ac7f0:; BB(0x004ac7f0);
    /* 004ac7f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac7f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ac7f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac7f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4ac7fau); f_008581c5();
    /* 004ac7fa: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac7fd: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004ac800: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004ac803: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ac805: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ac807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac808: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4ac80du); f_008581c5();
    /* 004ac80d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac810: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac813: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004ac816: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004ac819: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ac81b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac81d: jle 0x4ac864 */ if ((fZ||fS!=fO)) goto L_004ac864;
L_004ac81f:; BB(0x004ac81f);
    /* 004ac81f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac821: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac826: push 0x9046b4 */ { u32 v = 0x9046b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac82b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ac830u); f_0050981c();
    /* 004ac830: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac833: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac835: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac83a: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004ac83d: push 0x9046b4 */ { u32 v = 0x9046b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac842: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 004ac845: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004ac848: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ac84du); f_0050981c();
    /* 004ac84d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ac850: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac853: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004ac856: mov dword ptr [ecx + ebx*2], eax */ W32((u32)(r_ecx+r_ebx*2), r_eax);
    /* 004ac859: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ac85c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004ac85f: cmp esi, dword ptr [eax + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ac862: jl 0x4ac81f */ if ((fS!=fO)) goto L_004ac81f;
L_004ac864:; BB(0x004ac864);
    /* 004ac864: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004ac86b:; BB(0x004ac86b);
    /* 004ac86b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac86e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ac871: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ac874: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ac877: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ac87a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ac881: mov esp, ebp */ r_esp = r_ebp;
    /* 004ac883: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac884: ret  */ FN_RET(0x004ac72c); r_esp += 4; return;
L_004ac885:; BB(0x004ac885);
    /* 004ac885: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004ac889: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac88f: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 004ac893: jmp 0x4ac864 */ goto L_004ac864;
L_004ac895:; BB(0x004ac895);
    /* 004ac895: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004ac899: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac89f: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 004ac8a3: jmp 0x4ac864 */ goto L_004ac864;
L_004ac8a5:; BB(0x004ac8a5);
    /* 004ac8a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac8a7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ac8aa: jmp 0x4ac86b */ goto L_004ac86b;
}

void f_004ac8ac(void) /* sub_4AC8AC */
{
    FN_ENTER(0x004ac8ac);
    /* 004ac8ac: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac8af: mov edx, ecx */ r_edx = r_ecx;
    /* 004ac8b1: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004ac8b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ac8b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ac8b8: jle 0x4ac8fc */ if ((fZ||fS!=fO)) goto L_004ac8fc;
L_004ac8ba:; BB(0x004ac8ba);
    /* 004ac8ba: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004ac8be: mov ebx, eax */ r_ebx = r_eax;
    /* 004ac8c0: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004ac8c3: mov esi, edx */ r_esi = r_edx;
L_004ac8c5:; BB(0x004ac8c5);
    /* 004ac8c5: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 004ac8c8: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 004ac8cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac8cd: je 0x4ac8d9 */ if (fZ) goto L_004ac8d9;
L_004ac8cf:; BB(0x004ac8cf);
    /* 004ac8cf: push 0x9046b4 */ { u32 v = 0x9046b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac8d4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ac8d9u); f_00508db8();
L_004ac8d9:; BB(0x004ac8d9);
    /* 004ac8d9: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 004ac8dc: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 004ac8df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ac8e1: je 0x4ac8ed */ if (fZ) goto L_004ac8ed;
L_004ac8e3:; BB(0x004ac8e3);
    /* 004ac8e3: push 0x9046b4 */ { u32 v = 0x9046b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac8e8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ac8edu); f_00508db8();
L_004ac8ed:; BB(0x004ac8ed);
    /* 004ac8ed: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ac8f0: cmp ebx, dword ptr [esi + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ac8f3: jl 0x4ac8c5 */ if ((fS!=fO)) goto L_004ac8c5;
L_004ac8f5:; BB(0x004ac8f5);
    /* 004ac8f5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004ac8f9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004ac8fc:; BB(0x004ac8fc);
    /* 004ac8fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ac8ff: ret  */ FN_RET(0x004ac8ac); r_esp += 4; return;
}

void f_004ac900(void) /* sub_4AC900 */
{
    FN_ENTER(0x004ac900);
    /* 004ac900: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004ac904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac906: je 0x4ac922 */ if (fZ) goto L_004ac922;
L_004ac908:; BB(0x004ac908);
    /* 004ac908: mov dword ptr [0xa47744], 0 */ W32((u32)(0xa47744u), 0x0u);
    /* 004ac912: mov dword ptr [0xa47740], eax */ W32((u32)(0xa47740u), r_eax);
    /* 004ac917: push 0x4ac6a8 */ { u32 v = 0x4ac6a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac91c: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x4ac921u); f_0083a308();
    /* 004ac921: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ac922:; BB(0x004ac922);
    /* 004ac922: ret  */ FN_RET(0x004ac900); r_esp += 4; return;
}

void f_004ac924(void) /* sub_4AC924 */
{
    FN_ENTER(0x004ac924);
    /* 004ac924: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004ac928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac92a: je 0x4ac934 */ if (fZ) goto L_004ac934;
L_004ac92c:; BB(0x004ac92c);
    /* 004ac92c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac92e: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x4ac933u); f_0083a308();
    /* 004ac933: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ac934:; BB(0x004ac934);
    /* 004ac934: ret  */ FN_RET(0x004ac924); r_esp += 4; return;
}

void f_004ac938(void) /* sub_4AC938 */
{
    FN_ENTER(0x004ac938);
    /* 004ac938: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac939: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ac93b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ac93d: call 0x4ac95c */ r_esp -= 4; W32(r_esp, 0x4ac942u); f_004ac95c();
    /* 004ac942: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ac946: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ac948: jne 0x4ac94e */ if (!fZ) goto L_004ac94e;
L_004ac94a:; BB(0x004ac94a);
    /* 004ac94a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac94b: ret 4 */ FN_RET(0x004ac938); r_esp += 8; return;
L_004ac94e:; BB(0x004ac94e);
    /* 004ac94e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ac94f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ac954u); f_005c2f74();
    /* 004ac954: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ac955: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ac956: ret 4 */ FN_RET(0x004ac938); r_esp += 8; return;
}

void f_004ac95c(void) /* sub_4AC95C */
{
    FN_ENTER(0x004ac95c);
    /* 004ac95c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac95d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac95f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac961: push 0x8d0a24 */ { u32 v = 0x8d0a24u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac966: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac96c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac96d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac974: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac977: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac97a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ac97d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ac980: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ac983: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ac986: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ac989: mov dword ptr [ecx], 0xafa618 */ W32((u32)(r_ecx), 0xafa618u);
    /* 004ac98f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ac996: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ac99bu); f_008171e8();
    /* 004ac99b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ac99e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ac9a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004ac9a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ac9a8: ret  */ FN_RET(0x004ac95c); r_esp += 4; return;
}

void f_004ac9ac(void) /* sub_4AC9AC */
{
    FN_ENTER(0x004ac9ac);
    /* 004ac9ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ac9ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004ac9af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ac9b1: push 0x8d0a40 */ { u32 v = 0x8d0a40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ac9b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ac9bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ac9bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ac9c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ac9c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ac9ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ac9cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ac9d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ac9d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ac9d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ac9d9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ac9dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ac9df: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ac9e4u); f_008193cc();
    /* 004ac9e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ac9eb: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ac9ee: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ac9f1: mov dword ptr [edi], 0xafa618 */ W32((u32)(r_edi), 0xafa618u);
    /* 004ac9f7: lea eax, [edi + 0x34] */ r_eax = (u32)(r_edi+0x34u);
    /* 004ac9fa: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 004aca01: push 0x211 */ { u32 v = 0x211u; r_esp -= 4; W32(r_esp, v); }
    /* 004aca06: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004aca09: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 004aca10: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004aca17: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
    /* 004aca1e: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
    /* 004aca25: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
    /* 004aca2c: mov dword ptr [edi + 0x4c], 0x11f07 */ W32((u32)(r_edi+0x4cu), 0x11f07u);
    /* 004aca33: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
    /* 004aca3a: mov dword ptr [edi + 0x54], 0 */ W32((u32)(r_edi+0x54u), 0x0u);
    /* 004aca41: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 004aca48: mov dword ptr [edi + 0x5c], 0 */ W32((u32)(r_edi+0x5cu), 0x0u);
    /* 004aca4f: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 004aca56: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004aca58: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 004aca5b: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 004aca5e: mov dword ptr [edi + 0x28], ecx */ W32((u32)(r_edi+0x28u), r_ecx);
    /* 004aca61: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 004aca64: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 004aca67: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004aca6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aca6b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4aca70u); f_0050b510();
    /* 004aca70: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aca73: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004aca75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004aca77: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004aca7a: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 004aca7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aca80: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x4aca85u); f_0050a984();
    /* 004aca85: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aca88: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aca8b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aca8e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004aca91: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004aca94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aca97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aca9e: mov esp, ebp */ r_esp = r_ebp;
    /* 004acaa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004acaa1: ret 8 */ FN_RET(0x004ac9ac); r_esp += 12; return;
}

void f_004acaa4(void) /* sub_4ACAA4 */
{
    FN_ENTER(0x004acaa4);
    /* 004acaa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acaa5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004acaa6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004acaa8: fld dword ptr [0x9046c4] */ FPUSH(R_F32((u32)(0x9046c4u)));
    /* 004acaae: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 004acab1: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004acab4: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4acab9u); f_007b8cec();
    /* 004acab9: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 004acabc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acabd: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x4acac2u); f_007b9788();
    /* 004acac2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acac3: mov edx, dword ptr [0xaae15c] */ r_edx = R32((u32)(0xaae15cu));
    /* 004acac9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004acacb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004acacd: je 0x4acaf5 */ if (fZ) goto L_004acaf5;
L_004acacf:; BB(0x004acacf);
    /* 004acacf: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004acad2: mov esi, eax */ r_esi = r_eax;
L_004acad4:; BB(0x004acad4);
    /* 004acad4: mov edx, dword ptr [esi*8 + 0xaad660] */ r_edx = R32((u32)(r_esi*8+0xaad660u));
    /* 004acadb: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004acade: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004acae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004acae2: call 0x4b95c8 */ r_esp -= 4; W32(r_esp, 0x4acae7u); f_004b95c8();
    /* 004acae7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004acaea: cmp esi, dword ptr [0xaae15c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaae15cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004acaf0: jne 0x4acad4 */ if (!fZ) goto L_004acad4;
L_004acaf2:; BB(0x004acaf2);
    /* 004acaf2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004acaf5:; BB(0x004acaf5);
    /* 004acaf5: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4acafau); f_007b8cec();
    /* 004acafa: fld dword ptr [0x9046c0] */ FPUSH(R_F32((u32)(0x9046c0u)));
    /* 004acb00: fcomp dword ptr [ebx + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x40u))); FPOP();
    /* 004acb03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004acb05: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004acb06: jae 0x4acb15 */ if (!fC) goto L_004acb15;
L_004acb08:; BB(0x004acb08);
    /* 004acb08: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004acb0c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004acb11: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_004acb15:; BB(0x004acb15);
    /* 004acb15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acb16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acb17: ret  */ FN_RET(0x004acaa4); r_esp += 4; return;
}

void f_004acb18(void) /* sub_4ACB18 */
{
    FN_ENTER(0x004acb18);
    /* 004acb18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acb19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004acb1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004acb1d: call 0x4acbb0 */ r_esp -= 4; W32(r_esp, 0x4acb22u); f_004acbb0();
    /* 004acb22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004acb26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004acb28: jne 0x4acb2e */ if (!fZ) goto L_004acb2e;
L_004acb2a:; BB(0x004acb2a);
    /* 004acb2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acb2b: ret 4 */ FN_RET(0x004acb18); r_esp += 8; return;
L_004acb2e:; BB(0x004acb2e);
    /* 004acb2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acb2f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4acb34u); f_005c2f74();
    /* 004acb34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acb35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acb36: ret 4 */ FN_RET(0x004acb18); r_esp += 8; return;
}

void f_004acb3c(void) /* sub_4ACB3C */
{
    FN_ENTER(0x004acb3c);
    /* 004acb3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acb3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004acb3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004acb41: call 0x4acb60 */ r_esp -= 4; W32(r_esp, 0x4acb46u); f_004acb60();
    /* 004acb46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004acb4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004acb4c: jne 0x4acb52 */ if (!fZ) goto L_004acb52;
L_004acb4e:; BB(0x004acb4e);
    /* 004acb4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acb4f: ret 4 */ FN_RET(0x004acb3c); r_esp += 8; return;
L_004acb52:; BB(0x004acb52);
    /* 004acb52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acb53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4acb58u); f_005c2f74();
    /* 004acb58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acb59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acb5a: ret 4 */ FN_RET(0x004acb3c); r_esp += 8; return;
}

void f_004acb60(void) /* sub_4ACB60 */
{
    FN_ENTER(0x004acb60);
    /* 004acb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004acb61: mov ebp, esp */ r_ebp = r_esp;
    /* 004acb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004acb65: push 0x8d0a5c */ { u32 v = 0x8d0a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004acb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004acb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acb71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004acb78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004acb7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004acb7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004acb81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004acb84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004acb87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004acb8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004acb8d: mov dword ptr [ecx], 0xafa728 */ W32((u32)(r_ecx), 0xafa728u);
    /* 004acb93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004acb9a: call 0x4acbb0 */ r_esp -= 4; W32(r_esp, 0x4acb9fu); f_004acbb0();
    /* 004acb9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004acba2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004acba9: mov esp, ebp */ r_esp = r_ebp;
    /* 004acbab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004acbac: ret  */ FN_RET(0x004acb60); r_esp += 4; return;
}

void f_004acbb0(void) /* sub_4ACBB0 */
{
    FN_ENTER(0x004acbb0);
    /* 004acbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004acbb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004acbb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004acbb5: push 0x8d0a78 */ { u32 v = 0x8d0a78u; r_esp -= 4; W32(r_esp, v); }
    /* 004acbba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004acbc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acbc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004acbc8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004acbcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004acbce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004acbd1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004acbd4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004acbd7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004acbda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004acbe1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004acbe4: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004acbe7: mov dword ptr [eax], 0xafa718 */ W32((u32)(r_eax), 0xafa718u);
    /* 004acbed: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4acbf2u); f_00857e98();
    /* 004acbf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acbf3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004acbf6: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004acbf9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004acbfb: je 0x4acc06 */ if (fZ) goto L_004acc06;
L_004acbfd:; BB(0x004acbfd);
    /* 004acbfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004acbff: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004acc01: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4acc03u); call_ind(t); }
    /* 004acc03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004acc06:; BB(0x004acc06);
    /* 004acc06: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004acc0d: mov ecx, eax */ r_ecx = r_eax;
    /* 004acc0f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4acc14u); f_008171e8();
    /* 004acc14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004acc17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004acc1e: mov esp, ebp */ r_esp = r_ebp;
    /* 004acc20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004acc21: ret  */ FN_RET(0x004acbb0); r_esp += 4; return;
}

void f_004acc24(void) /* sub_4ACC24 */
{
    FN_ENTER(0x004acc24);
    /* 004acc24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acc25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004acc27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004acc29: call 0x4acc48 */ r_esp -= 4; W32(r_esp, 0x4acc2eu); f_004acc48();
    /* 004acc2e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004acc32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004acc34: jne 0x4acc3a */ if (!fZ) goto L_004acc3a;
L_004acc36:; BB(0x004acc36);
    /* 004acc36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acc37: ret 4 */ FN_RET(0x004acc24); r_esp += 8; return;
L_004acc3a:; BB(0x004acc3a);
    /* 004acc3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acc3b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4acc40u); f_005c2f74();
    /* 004acc40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acc41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acc42: ret 4 */ FN_RET(0x004acc24); r_esp += 8; return;
}

void f_004acc48(void) /* sub_4ACC48 */
{
    FN_ENTER(0x004acc48);
    /* 004acc48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004acc49: mov ebp, esp */ r_ebp = r_esp;
    /* 004acc4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004acc4d: push 0x8d0a94 */ { u32 v = 0x8d0a94u; r_esp -= 4; W32(r_esp, v); }
    /* 004acc52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004acc58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acc59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004acc60: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004acc63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004acc66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004acc69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004acc6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004acc6f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004acc72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004acc75: mov dword ptr [ecx], 0xafa738 */ W32((u32)(r_ecx), 0xafa738u);
    /* 004acc7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004acc82: call 0x4acbb0 */ r_esp -= 4; W32(r_esp, 0x4acc87u); f_004acbb0();
    /* 004acc87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004acc8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004acc91: mov esp, ebp */ r_esp = r_ebp;
    /* 004acc93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004acc94: ret  */ FN_RET(0x004acc48); r_esp += 4; return;
}

void f_004acc98(void) /* sub_4ACC98 */
{
    FN_ENTER(0x004acc98);
    /* 004acc98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004acc99: mov ebp, esp */ r_ebp = r_esp;
    /* 004acc9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004acc9d: push 0x8d0ab0 */ { u32 v = 0x8d0ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 004acca2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004acca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acca9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004accb0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004accb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004accb6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004accb9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004accbc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004accbf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004accc2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004accc5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004accc8: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 004acccb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004accce: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004accd1: call 0x4acec4 */ r_esp -= 4; W32(r_esp, 0x4accd6u); f_004acec4();
    /* 004accd6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004accdd: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004acce0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004acce3: mov dword ptr [eax], 0xafa728 */ W32((u32)(r_eax), 0xafa728u);
    /* 004acce9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004acceb: jl 0x4ace9b */ if ((fS!=fO)) goto L_004ace9b;
L_004accf1:; BB(0x004accf1);
    /* 004accf1: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004accf4: jae 0x4ace9b */ if (!fC) goto L_004ace9b;
L_004accfa:; BB(0x004accfa);
    /* 004accfa: mov ebx, dword ptr [edx*4 + 0x9046cc] */ r_ebx = R32((u32)(r_edx*4+0x9046ccu));
    /* 004acd01: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004acd03: jle 0x4ace9b */ if ((fZ||fS!=fO)) goto L_004ace9b;
L_004acd09:; BB(0x004acd09);
    /* 004acd09: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004acd0b: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4acd10u); f_004b9970();
    /* 004acd10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acd11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acd12: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x4acd17u); f_0078e934();
    /* 004acd17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004acd1a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004acd1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acd1e: call 0x4aceec */ r_esp -= 4; W32(r_esp, 0x4acd23u); f_004aceec();
    /* 004acd23: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004acd26: call 0x4ad85c */ r_esp -= 4; W32(r_esp, 0x4acd2bu); f_004ad85c();
    /* 004acd2b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004acd2e: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 004acd31: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004acd34: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004acd36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004acd38: jle 0x4acea9 */ if ((fZ||fS!=fO)) goto L_004acea9;
L_004acd3e:; BB(0x004acd3e);
    /* 004acd3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004acd41: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004acd43: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 004acd45: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004acd48: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004acd4b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004acd4e: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004acd51: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 004acd54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004acd56: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004acd59: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004acd5b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004acd5d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004acd5f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004acd62: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004acd65: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004acd68: lea edx, [eax + edi + 4] */ r_edx = (u32)(r_eax+r_edi+0x4u);
    /* 004acd6c: mov ecx, esi */ r_ecx = r_esi;
    /* 004acd6e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4acd73u); f_0082ebac();
    /* 004acd73: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004acd76: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 004acd79: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004acd7c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004acd7f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004acd82: mov eax, dword ptr [edi + edx + 0x10] */ r_eax = R32((u32)(r_edi+r_edx+0x10u));
    /* 004acd86: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 004acd89: mov eax, dword ptr [edi + edx + 0x14] */ r_eax = R32((u32)(r_edi+r_edx+0x14u));
    /* 004acd8d: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 004acd90: mov edi, dword ptr [edi + edx + 0x18] */ r_edi = R32((u32)(r_edi+r_edx+0x18u));
    /* 004acd94: mov dword ptr [esi + 0x14], edi */ W32((u32)(r_esi+0x14u), r_edi);
    /* 004acd97: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4acd9cu); f_008587a5();
    /* 004acd9c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004acd9f: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004acda2: fdiv dword ptr [0x904798] */ ST(0) = ST(0) / R_F32((u32)(0x904798u));
    /* 004acda8: fmul dword ptr [0x904794] */ ST(0) = ST(0) * R_F32((u32)(0x904794u));
    /* 004acdae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004acdb1: fadd dword ptr [0x90479c] */ ST(0) = ST(0) + R_F32((u32)(0x90479cu));
    /* 004acdb7: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 004acdba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4acdbfu); f_008587a5();
    /* 004acdbf: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004acdc2: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004acdc5: fdiv dword ptr [0x904798] */ ST(0) = ST(0) / R_F32((u32)(0x904798u));
    /* 004acdcb: fmul dword ptr [0x904794] */ ST(0) = ST(0) * R_F32((u32)(0x904794u));
    /* 004acdd1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004acdd4: fadd dword ptr [0x904790] */ ST(0) = ST(0) + R_F32((u32)(0x904790u));
    /* 004acdda: fsubr dword ptr [eax + 8] */ ST(0) = R_F32((u32)(r_eax+0x8u)) - ST(0);
    /* 004acddd: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 004acde0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4acde5u); f_008587a5();
    /* 004acde5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004acde8: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004acdeb: fdiv dword ptr [0x904798] */ ST(0) = ST(0) / R_F32((u32)(0x904798u));
    /* 004acdf1: fmul dword ptr [0x90478c] */ ST(0) = ST(0) * R_F32((u32)(0x90478cu));
    /* 004acdf7: fnstcw word ptr [ebp - 0x30] */ W16((u32)(r_ebp+0xffffffd0u), fcw);
    /* 004acdfa: movzx eax, word ptr [ebp - 0x30] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd0u));
    /* 004acdfe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ace03: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004ace06: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 004ace09: fistp dword ptr [esi + 0x18] */ W32((u32)(r_esi+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ace0c: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 004ace0f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ace14u); f_008587a5();
    /* 004ace14: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004ace17: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004ace1a: fdiv dword ptr [0x904798] */ ST(0) = ST(0) / R_F32((u32)(0x904798u));
    /* 004ace20: fadd dword ptr [0x904788] */ ST(0) = ST(0) + R_F32((u32)(0x904788u));
    /* 004ace26: fmul dword ptr [0x90479c] */ ST(0) = ST(0) * R_F32((u32)(0x90479cu));
    /* 004ace2c: fmul dword ptr [0x904784] */ ST(0) = ST(0) * R_F32((u32)(0x904784u));
    /* 004ace32: fnstcw word ptr [ebp - 0x30] */ W16((u32)(r_ebp+0xffffffd0u), fcw);
    /* 004ace35: movzx eax, word ptr [ebp - 0x30] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd0u));
    /* 004ace39: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ace3e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004ace41: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 004ace44: fistp dword ptr [esi + 0x1c] */ W32((u32)(r_esi+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004ace47: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 004ace4a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ace4fu); f_008587a5();
    /* 004ace4f: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 004ace56: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004ace59: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004ace5c: fdiv dword ptr [0x904798] */ ST(0) = ST(0) / R_F32((u32)(0x904798u));
    /* 004ace62: fmul dword ptr [0x90478c] */ ST(0) = ST(0) * R_F32((u32)(0x90478cu));
    /* 004ace68: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 004ace6f: fnstcw word ptr [ebp - 0x30] */ W16((u32)(r_ebp+0xffffffd0u), fcw);
    /* 004ace72: movzx eax, word ptr [ebp - 0x30] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd0u));
    /* 004ace76: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ace7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004ace7e: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 004ace81: fistp dword ptr [esi + 0x20] */ W32((u32)(r_esi+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ace84: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 004ace87: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004ace8a: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ace8d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ace90: cmp ebx, dword ptr [eax + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ace93: jl 0x4acd3e */ if ((fS!=fO)) goto L_004acd3e;
L_004ace99:; BB(0x004ace99);
    /* 004ace99: jmp 0x4acea9 */ goto L_004acea9;
L_004ace9b:; BB(0x004ace9b);
    /* 004ace9b: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004ace9f: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004acea5: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_004acea9:; BB(0x004acea9);
    /* 004acea9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004aceac: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aceaf: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004aceb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aceb5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004acebc: mov esp, ebp */ r_esp = r_ebp;
    /* 004acebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004acebf: ret 0xc */ FN_RET(0x004acc98); r_esp += 16; return;
}

void f_004acec4(void) /* sub_4ACEC4 */
{
    FN_ENTER(0x004acec4);
    /* 004acec4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004acec5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004acec7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004acecb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004acecd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4aced2u); f_008193cc();
    /* 004aced2: mov dword ptr [ebx], 0xafa718 */ W32((u32)(r_ebx), 0xafa718u);
    /* 004aced8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aceda: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004acedd: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004acee0: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004acee3: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 004acee6: mov eax, ebx */ r_eax = r_ebx;
    /* 004acee8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004acee9: ret 4 */ FN_RET(0x004acec4); r_esp += 8; return;
}

void f_004aceec(void) /* sub_4ACEEC */
{
    FN_ENTER(0x004aceec);
    /* 004aceec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aceed: mov ebp, esp */ r_ebp = r_esp;
    /* 004aceef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004acef1: push 0x8d0ad8 */ { u32 v = 0x8d0ad8u; r_esp -= 4; W32(r_esp, v); }
    /* 004acef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004acefc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004acefd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004acf04: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004acf07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004acf0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004acf0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004acf10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004acf13: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004acf16: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004acf1d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004acf1f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4acf24u); f_008581c5();
    /* 004acf24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acf25: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004acf28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004acf2a: je 0x4acf9d */ if (fZ) goto L_004acf9d;
L_004acf2c:; BB(0x004acf2c);
    /* 004acf2c: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004acf33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004acf3a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004acf3d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004acf40: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x4acf45u); f_00511b74();
    /* 004acf45: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004acf48: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004acf4f:; BB(0x004acf4f);
    /* 004acf4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004acf52: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004acf55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004acf5c: mov ecx, eax */ r_ecx = r_eax;
    /* 004acf5e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004acf61: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 004acf64: call 0x4ad7ec */ r_esp -= 4; W32(r_esp, 0x4acf69u); f_004ad7ec();
    /* 004acf69: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004acf6c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004acf6f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004acf72: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004acf74: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004acf76: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004acf78: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004acf7a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004acf7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004acf7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004acf80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004acf81: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4acf86u); f_008581c5();
    /* 004acf86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acf87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004acf8a: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004acf8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004acf90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004acf97: mov esp, ebp */ r_esp = r_ebp;
    /* 004acf99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004acf9a: ret 4 */ FN_RET(0x004aceec); r_esp += 8; return;
L_004acf9d:; BB(0x004acf9d);
    /* 004acf9d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004acf9f: jmp 0x4acf4f */ goto L_004acf4f;
}

void f_004acf80(void)
{
    FN_ENTER(0x004acf80);
    /* 004acf80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004acf81: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4acf86u); f_008581c5();
    /* 004acf86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004acf87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004acf8a: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004acf8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004acf90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004acf97: mov esp, ebp */ r_esp = r_ebp;
    /* 004acf99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004acf9a: ret 4 */ FN_RET(0x004acf80); r_esp += 8; return;
}

void f_004acfa4(void) /* sub_4ACFA4 */
{
    FN_ENTER(0x004acfa4);
    /* 004acfa4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004acfa7: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004acfaa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004acfad: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004acfb0: cmp eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004acfb5: jge 0x4ad19d */ if ((fS==fO)) goto L_004ad19d;
L_004acfbb:; BB(0x004acfbb);
    /* 004acfbb: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004acfbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004acfc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004acfc2: jle 0x4ad199 */ if ((fZ||fS!=fO)) goto L_004ad199;
L_004acfc8:; BB(0x004acfc8);
    /* 004acfc8: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004acfcc: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004acfd0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004acfd4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004acfd8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004acfdb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004acfde: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004acfe0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004acfe2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004acfe4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004acfe6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004acfe8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004acfea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004acfec: mov ebp, eax */ r_ebp = r_eax;
    /* 004acfee: mov ebx, edx */ r_ebx = r_edx;
L_004acff0:; BB(0x004acff0);
    /* 004acff0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004acff4: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 004acff7: lea ecx, [ebx + esi] */ r_ecx = (u32)(r_ebx+r_esi);
    /* 004acffa: mov edi, dword ptr [ecx + 0x1c] */ r_edi = R32((u32)(r_ecx+0x1cu));
    /* 004acffd: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 004ad000: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad002: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 004ad006: mov edi, 0 */ r_edi = 0x0u;
    /* 004ad00b: je 0x4ad098 */ if (fZ) goto L_004ad098;
L_004ad011:; BB(0x004ad011);
    /* 004ad011: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad014: jne 0x4ad06a */ if (!fZ) goto L_004ad06a;
L_004ad016:; BB(0x004ad016);
    /* 004ad016: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad01a: fsub dword ptr [0x9047a0] */ ST(0) = ST(0) - R_F32((u32)(0x9047a0u));
    /* 004ad020: fstp dword ptr [esi + ebx + 0x10] */ W_F32((u32)(r_esi+r_ebx+0x10u), ST(0)); FPOP();
    /* 004ad024: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 004ad027: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4ad02cu); f_0082ebac();
    /* 004ad02c: fld dword ptr [0x90477c] */ FPUSH(R_F32((u32)(0x90477cu)));
    /* 004ad032: fadd dword ptr [esi + ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx+0x24u));
    /* 004ad036: fcom dword ptr [0x904778] */ fx_compare(ST(0), R_F32((u32)(0x904778u))); 
    /* 004ad03c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad03e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad03f: jae 0x4ad053 */ if (!fC) goto L_004ad053;
L_004ad041:; BB(0x004ad041);
    /* 004ad041: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad043: mov dword ptr [esi + ebx + 0x28], 3 */ W32((u32)(r_esi+r_ebx+0x28u), 0x3u);
    /* 004ad04b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad04d: mov dword ptr [esi + ebx + 0x24], ecx */ W32((u32)(r_esi+r_ebx+0x24u), r_ecx);
    /* 004ad051: jmp 0x4ad057 */ goto L_004ad057;
L_004ad053:; BB(0x004ad053);
    /* 004ad053: fstp dword ptr [esi + ebx + 0x24] */ W_F32((u32)(r_esi+r_ebx+0x24u), ST(0)); FPOP();
L_004ad057:; BB(0x004ad057);
    /* 004ad057: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 004ad05b: add dword ptr [esi + ebx + 0x18], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ad05f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad061: add dword ptr [esi + ebx + 0x20], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x20u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ad065: jmp 0x4ad153 */ goto L_004ad153;
L_004ad06a:; BB(0x004ad06a);
    /* 004ad06a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad06d: jne 0x4ad153 */ if (!fZ) goto L_004ad153;
L_004ad073:; BB(0x004ad073);
    /* 004ad073: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad077: fmul dword ptr [0x904780] */ ST(0) = ST(0) * R_F32((u32)(0x904780u));
    /* 004ad07d: fadd dword ptr [esi + ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx+0x4u));
    /* 004ad081: fld dword ptr [esi + ebx + 8] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x8u)));
    /* 004ad085: fadd dword ptr [esi + ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx+0x14u));
    /* 004ad089: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ad08b: fstp dword ptr [esi + ebx + 4] */ W_F32((u32)(r_esi+r_ebx+0x4u), ST(0)); FPOP();
    /* 004ad08f: fstp dword ptr [esi + ebx + 8] */ W_F32((u32)(r_esi+r_ebx+0x8u), ST(0)); FPOP();
    /* 004ad093: jmp 0x4ad153 */ goto L_004ad153;
L_004ad098:; BB(0x004ad098);
    /* 004ad098: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad09c: fsub dword ptr [0x9047a0] */ ST(0) = ST(0) - R_F32((u32)(0x9047a0u));
    /* 004ad0a2: fstp dword ptr [esi + ebx + 0x10] */ W_F32((u32)(r_esi+r_ebx+0x10u), ST(0)); FPOP();
    /* 004ad0a6: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 004ad0a9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4ad0aeu); f_0082ebac();
    /* 004ad0ae: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad0b2: fcom dword ptr [0x904778] */ fx_compare(ST(0), R_F32((u32)(0x904778u))); 
    /* 004ad0b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad0ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad0bb: jae 0x4ad143 */ if (!fC) goto L_004ad143;
L_004ad0c1:; BB(0x004ad0c1);
    /* 004ad0c1: fld dword ptr [esi + ebx + 4] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x4u)));
    /* 004ad0c5: fcom dword ptr [0x906bb8] */ fx_compare(ST(0), R_F32((u32)(0x906bb8u))); 
    /* 004ad0cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad0cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad0ce: jae 0x4ad1ae */ if (!fC) goto L_004ad1ae;
L_004ad0d4:; BB(0x004ad0d4);
    /* 004ad0d4: fld dword ptr [esi + ebx] */ FPUSH(R_F32((u32)(r_esi+r_ebx)));
    /* 004ad0d7: fcom dword ptr [0x906bbc] */ fx_compare(ST(0), R_F32((u32)(0x906bbcu))); 
    /* 004ad0dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad0df: fld dword ptr [esi + ebx + 8] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x8u)));
    /* 004ad0e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad0e4: ja 0x4ad123 */ if ((!fC&&!fZ)) goto L_004ad123;
L_004ad0e6:; BB(0x004ad0e6);
    /* 004ad0e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ad0e8: fcomp dword ptr [0x906bc0] */ fx_compare(ST(0), R_F32((u32)(0x906bc0u))); FPOP();
    /* 004ad0ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad0f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad0f1: jb 0x4ad125 */ if (fC) goto L_004ad125;
L_004ad0f3:; BB(0x004ad0f3);
    /* 004ad0f3: fcom dword ptr [0x906bc4] */ fx_compare(ST(0), R_F32((u32)(0x906bc4u))); 
    /* 004ad0f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad0fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad0fc: ja 0x4ad125 */ if ((!fC&&!fZ)) goto L_004ad125;
L_004ad0fe:; BB(0x004ad0fe);
    /* 004ad0fe: fcom dword ptr [0x906bc8] */ fx_compare(ST(0), R_F32((u32)(0x906bc8u))); 
    /* 004ad104: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad106: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad107: jb 0x4ad125 */ if (fC) goto L_004ad125;
L_004ad109:; BB(0x004ad109);
    /* 004ad109: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad10b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad10d: fld dword ptr [0x904774] */ FPUSH(R_F32((u32)(0x904774u)));
    /* 004ad113: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ad115: fstp dword ptr [esi + ebx + 0x10] */ W_F32((u32)(r_esi+r_ebx+0x10u), ST(0)); FPOP();
    /* 004ad119: mov dword ptr [esi + ebx + 0x28], 2 */ W32((u32)(r_esi+r_ebx+0x28u), 0x2u);
    /* 004ad121: jmp 0x4ad145 */ goto L_004ad145;
L_004ad123:; BB(0x004ad123);
    /* 004ad123: fstp st(1) */ ST(1) = ST(0); FPOP();
L_004ad125:; BB(0x004ad125);
    /* 004ad125: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004ad127: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ad129: fcomp dword ptr [0x906bb0] */ fx_compare(ST(0), R_F32((u32)(0x906bb0u))); FPOP();
    /* 004ad12f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad131: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad132: jae 0x4ad145 */ if (!fC) goto L_004ad145;
L_004ad134:; BB(0x004ad134);
    /* 004ad134: mov dword ptr [esi + ebx + 0x28], 1 */ W32((u32)(r_esi+r_ebx+0x28u), 0x1u);
    /* 004ad13c: mov edi, 1 */ r_edi = 0x1u;
    /* 004ad141: jmp 0x4ad145 */ goto L_004ad145;
L_004ad143:; BB(0x004ad143);
    /* 004ad143: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004ad145:; BB(0x004ad145);
    /* 004ad145: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 004ad149: add dword ptr [esi + ebx + 0x18], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ad14d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad14f: add dword ptr [esi + ebx + 0x20], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x20u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004ad153:; BB(0x004ad153);
    /* 004ad153: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad155: je 0x4ad177 */ if (fZ) goto L_004ad177;
L_004ad157:; BB(0x004ad157);
    /* 004ad157: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ad159: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad15c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad15e: jne 0x4ad177 */ if (!fZ) goto L_004ad177;
L_004ad160:; BB(0x004ad160);
    /* 004ad160: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004ad164: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad169: mov esi, ebx */ r_esi = r_ebx;
    /* 004ad16b: add esi, dword ptr [ecx + 0x28] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ad16e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad16f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4ad174u); f_0050b510();
    /* 004ad174: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ad177:; BB(0x004ad177);
    /* 004ad177: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004ad17b: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad17e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ad181: cmp ebp, dword ptr [ecx + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad184: jl 0x4acff0 */ if ((fS!=fO)) goto L_004acff0;
L_004ad18a:; BB(0x004ad18a);
    /* 004ad18a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004ad18e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ad192: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ad196: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004ad199:; BB(0x004ad199);
    /* 004ad199: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ad19c: ret  */ FN_RET(0x004acfa4); r_esp += 4; return;
L_004ad19d:; BB(0x004ad19d);
    /* 004ad19d: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004ad1a1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ad1a6: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004ad1aa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ad1ad: ret  */ FN_RET(0x004acfa4); r_esp += 4; return;
L_004ad1ae:; BB(0x004ad1ae);
    /* 004ad1ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad1b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad1b2: jmp 0x4ad145 */ goto L_004ad145;
}

