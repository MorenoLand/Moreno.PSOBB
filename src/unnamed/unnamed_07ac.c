#include "protos.h"

void f_007ac12c(void) /* sub_7AC12C */
{
    FN_ENTER(0x007ac12c);
    /* 007ac12c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac12e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac130: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac135: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac139: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac13d: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac141: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac145: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x7ac14au); f_007ab554();
    /* 007ac14a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac14d: ret  */ FN_RET(0x007ac12c); r_esp += 4; return;
}

void f_007ac150(void) /* sub_7AC150 */
{
    FN_ENTER(0x007ac150);
    /* 007ac150: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac152: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac154: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac158: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac15c: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac160: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac164: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac168: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x7ac16du); f_007ab554();
    /* 007ac16d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac170: ret  */ FN_RET(0x007ac150); r_esp += 4; return;
}

void f_007ac174(void) /* sub_7AC174 */
{
    FN_ENTER(0x007ac174);
    /* 007ac174: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ac175: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007ac17a: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7ac17fu); f_0082bb30();
    /* 007ac17f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007ac183: call 0x7aba94 */ r_esp -= 4; W32(r_esp, 0x7ac188u); f_007aba94();
    /* 007ac188: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007ac18a: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007ac18f: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7ac194u); f_0082bb60();
    /* 007ac194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ac195: ret  */ FN_RET(0x007ac174); r_esp += 4; return;
}

void f_007ac198(void) /* sub_7AC198 */
{
    FN_ENTER(0x007ac198);
    /* 007ac198: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7ac19du); f_004ac444();
    /* 007ac19d: ret  */ FN_RET(0x007ac198); r_esp += 4; return;
}

void f_007ac1a0(void) /* sub_7AC1A0 */
{
    FN_ENTER(0x007ac1a0);
    /* 007ac1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ac1a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac1a2: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ac1a5: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 007ac1a9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007ac1ae: call 0x7abaa5 */ r_esp -= 4; W32(r_esp, 0x7ac1b3u); f_007abaa5();
    /* 007ac1b3: mov ebx, eax */ r_ebx = r_eax;
    /* 007ac1b5: movzx edx, byte ptr [0xaab91c] */ r_edx = (u32)R8((u32)(0xaab91cu));
    /* 007ac1bc: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007ac1c0: mov byte ptr [ebx + 3], dl */ W8((u32)(r_ebx+0x3u), (u8)r_edx);
    /* 007ac1c3: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 007ac1c7: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7ac1ccu); f_0082bb60();
    /* 007ac1cc: fld dword ptr [0x97db6c] */ FPUSH(R_F32((u32)(0x97db6cu)));
    /* 007ac1d2: movzx edx, byte ptr [ebx + 5] */ r_edx = (u32)R8((u32)(r_ebx+0x5u));
    /* 007ac1d6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ac1da: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 007ac1de: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 007ac1e0: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 007ac1e3: movzx ecx, byte ptr [ebx + 6] */ r_ecx = (u32)R8((u32)(r_ebx+0x6u));
    /* 007ac1e7: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 007ac1eb: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007ac1ef: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007ac1f1: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 007ac1f4: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 007ac1f8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac1fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac1fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac1fd: ret  */ FN_RET(0x007ac1a0); r_esp += 4; return;
}

void f_007ac200(void) /* sub_7AC200 */
{
    FN_ENTER(0x007ac200);
    /* 007ac200: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ac203: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 007ac208: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007ac20c: fld dword ptr [0x97db68] */ FPUSH(R_F32((u32)(0x97db68u)));
    /* 007ac212: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 007ac215: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007ac217: fld dword ptr [0x97db64] */ FPUSH(R_F32((u32)(0x97db64u)));
    /* 007ac21d: fld dword ptr [0x97db60] */ FPUSH(R_F32((u32)(0x97db60u)));
    /* 007ac223: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 007ac226: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ac228: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 007ac22b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ac22d: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 007ac230: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007ac233: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007ac236: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007ac238: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 007ac23a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ac23c: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 007ac23f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ac241: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 007ac244: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 007ac247: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac24a: ret  */ FN_RET(0x007ac200); r_esp += 4; return;
}

void f_007ac24c(void) /* sub_7AC24C */
{
    FN_ENTER(0x007ac24c);
    /* 007ac24c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007ac251: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac252: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x7ac257u); f_008443b4();
    /* 007ac257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac258: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7ac25du); f_008441e0();
    /* 007ac25d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007ac260: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac263: ret  */ FN_RET(0x007ac24c); r_esp += 4; return;
}

void f_007ac264(void) /* sub_7AC264 */
{
    FN_ENTER(0x007ac264);
    /* 007ac264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ac265: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac266: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ac269: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac26b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007ac26f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac271: je 0x7ac33b */ if (fZ) goto L_007ac33b;
L_007ac277:; BB(0x007ac277);
    /* 007ac277: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 007ac27a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac27c: je 0x7ac313 */ if (fZ) goto L_007ac313;
L_007ac282:; BB(0x007ac282);
    /* 007ac282: mov ebx, eax */ r_ebx = r_eax;
    /* 007ac284: mov ebp, edx */ r_ebp = r_edx;
L_007ac286:; BB(0x007ac286);
    /* 007ac286: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 007ac28a: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac28d: jne 0x7ac2e9 */ if (!fZ) goto L_007ac2e9;
L_007ac28f:; BB(0x007ac28f);
    /* 007ac28f: movzx ecx, word ptr [ebp + 2] */ r_ecx = (u32)R16((u32)(r_ebp+0x2u));
    /* 007ac293: lea eax, [ebp + 2] */ r_eax = (u32)(r_ebp+0x2u);
    /* 007ac296: cmp ecx, 0x4a */ {  u32 a = r_ecx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac299: je 0x7ac2dd */ if (fZ) goto L_007ac2dd;
L_007ac29b:; BB(0x007ac29b);
    /* 007ac29b: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007ac29e: cmp ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac2a1: jne 0x7ac2ac */ if (!fZ) goto L_007ac2ac;
L_007ac2a3:; BB(0x007ac2a3);
    /* 007ac2a3: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007ac2aa: jmp 0x7ac286 */ goto L_007ac286;
L_007ac2ac:; BB(0x007ac2ac);
    /* 007ac2ac: cmp ecx, 0x43 */ {  u32 a = r_ecx; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac2af: jne 0x7ac2d4 */ if (!fZ) goto L_007ac2d4;
L_007ac2b1:; BB(0x007ac2b1);
    /* 007ac2b1: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 007ac2b5: cmp edx, 0x47 */ {  u32 a = r_edx; u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac2b8: je 0x7ac319 */ if (fZ) goto L_007ac319;
L_007ac2ba:; BB(0x007ac2ba);
    /* 007ac2ba: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac2bd: jl 0x7ac2cf */ if ((fS!=fO)) goto L_007ac2cf;
L_007ac2bf:; BB(0x007ac2bf);
    /* 007ac2bf: cmp edx, 0x39 */ {  u32 a = r_edx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac2c2: jg 0x7ac2cf */ if ((!fZ&&fS==fO)) goto L_007ac2cf;
L_007ac2c4:; BB(0x007ac2c4);
    /* 007ac2c4: mov edx, dword ptr [edx*4 + 0x97da38] */ r_edx = R32((u32)(r_edx*4+0x97da38u));
    /* 007ac2cb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_007ac2cf:; BB(0x007ac2cf);
    /* 007ac2cf: lea ebp, [eax + 4] */ r_ebp = (u32)(r_eax+0x4u);
    /* 007ac2d2: jmp 0x7ac286 */ goto L_007ac286;
L_007ac2d4:; BB(0x007ac2d4);
    /* 007ac2d4: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007ac2db: jmp 0x7ac286 */ goto L_007ac286;
L_007ac2dd:; BB(0x007ac2dd);
    /* 007ac2dd: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007ac2e0: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 007ac2e7: jmp 0x7ac286 */ goto L_007ac286;
L_007ac2e9:; BB(0x007ac2e9);
    /* 007ac2e9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac2eb: je 0x7ac333 */ if (fZ) goto L_007ac333;
L_007ac2ed:; BB(0x007ac2ed);
    /* 007ac2ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac2ee: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7ac2f3u); f_008441e0();
    /* 007ac2f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ac2f4: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 007ac2f9: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac2fc: jle 0x7ac300 */ if ((fZ||fS!=fO)) goto L_007ac300;
L_007ac2fe:; BB(0x007ac2fe);
    /* 007ac2fe: mov eax, ecx */ r_eax = r_ecx;
L_007ac300:; BB(0x007ac300);
    /* 007ac300: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac302: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ac305: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 007ac309: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac30b: jne 0x7ac286 */ if (!fZ) goto L_007ac286;
L_007ac311:; BB(0x007ac311);
    /* 007ac311: mov eax, ebx */ r_eax = r_ebx;
L_007ac313:; BB(0x007ac313);
    /* 007ac313: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac316: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac317: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac318: ret  */ FN_RET(0x007ac264); r_esp += 4; return;
L_007ac319:; BB(0x007ac319);
    /* 007ac319: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007ac31f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac321: je 0x7ac32c */ if (fZ) goto L_007ac32c;
L_007ac323:; BB(0x007ac323);
    /* 007ac323: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
L_007ac326:; BB(0x007ac326);
    /* 007ac326: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ac32a: jmp 0x7ac2cf */ goto L_007ac2cf;
L_007ac32c:; BB(0x007ac32c);
    /* 007ac32c: mov edx, 0xffffea00 */ r_edx = 0xffffea00u;
    /* 007ac331: jmp 0x7ac326 */ goto L_007ac326;
L_007ac333:; BB(0x007ac333);
    /* 007ac333: mov eax, ebx */ r_eax = r_ebx;
    /* 007ac335: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac338: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac339: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac33a: ret  */ FN_RET(0x007ac264); r_esp += 4; return;
L_007ac33b:; BB(0x007ac33b);
    /* 007ac33b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac33d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac340: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac342: ret  */ FN_RET(0x007ac264); r_esp += 4; return;
}

void f_007ac344(void) /* sub_7AC344 */
{
    FN_ENTER(0x007ac344);
    /* 007ac344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ac345: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac346: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ac349: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac34b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007ac34f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac351: je 0x7ac433 */ if (fZ) goto L_007ac433;
L_007ac357:; BB(0x007ac357);
    /* 007ac357: mov ecx, dword ptr [0xa9cd44] */ r_ecx = R32((u32)(0xa9cd44u));
    /* 007ac35d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac35f: jne 0x7ac36a */ if (!fZ) goto L_007ac36a;
L_007ac361:; BB(0x007ac361);
    /* 007ac361: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 007ac368: jmp 0x7ac371 */ goto L_007ac371;
L_007ac36a:; BB(0x007ac36a);
    /* 007ac36a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_007ac371:; BB(0x007ac371);
    /* 007ac371: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 007ac374: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac376: je 0x7ac3e6 */ if (fZ) goto L_007ac3e6;
L_007ac378:; BB(0x007ac378);
    /* 007ac378: mov ebx, eax */ r_ebx = r_eax;
    /* 007ac37a: mov ebp, edx */ r_ebp = r_edx;
L_007ac37c:; BB(0x007ac37c);
    /* 007ac37c: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 007ac380: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac383: jne 0x7ac3c1 */ if (!fZ) goto L_007ac3c1;
L_007ac385:; BB(0x007ac385);
    /* 007ac385: movzx ecx, word ptr [ebp + 2] */ r_ecx = (u32)R16((u32)(r_ebp+0x2u));
    /* 007ac389: lea eax, [ebp + 2] */ r_eax = (u32)(r_ebp+0x2u);
    /* 007ac38c: cmp ecx, 0x4a */ {  u32 a = r_ecx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac38f: je 0x7ac3b5 */ if (fZ) goto L_007ac3b5;
L_007ac391:; BB(0x007ac391);
    /* 007ac391: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007ac394: cmp ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac397: jne 0x7ac3a2 */ if (!fZ) goto L_007ac3a2;
L_007ac399:; BB(0x007ac399);
    /* 007ac399: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007ac3a0: jmp 0x7ac37c */ goto L_007ac37c;
L_007ac3a2:; BB(0x007ac3a2);
    /* 007ac3a2: cmp ecx, 0x43 */ {  u32 a = r_ecx; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac3a5: jne 0x7ac3ac */ if (!fZ) goto L_007ac3ac;
L_007ac3a7:; BB(0x007ac3a7);
    /* 007ac3a7: lea ebp, [eax + 4] */ r_ebp = (u32)(r_eax+0x4u);
    /* 007ac3aa: jmp 0x7ac37c */ goto L_007ac37c;
L_007ac3ac:; BB(0x007ac3ac);
    /* 007ac3ac: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007ac3b3: jmp 0x7ac37c */ goto L_007ac37c;
L_007ac3b5:; BB(0x007ac3b5);
    /* 007ac3b5: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007ac3b8: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 007ac3bf: jmp 0x7ac37c */ goto L_007ac37c;
L_007ac3c1:; BB(0x007ac3c1);
    /* 007ac3c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac3c3: je 0x7ac3dc */ if (fZ) goto L_007ac3dc;
L_007ac3c5:; BB(0x007ac3c5);
    /* 007ac3c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac3c6: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ac3c9: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x7ac3ceu); f_008443b4();
    /* 007ac3ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac3cf: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7ac3d4u); f_008441e0();
    /* 007ac3d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ac3d7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007ac3da: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_007ac3dc:; BB(0x007ac3dc);
    /* 007ac3dc: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 007ac3e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac3e2: jne 0x7ac37c */ if (!fZ) goto L_007ac37c;
L_007ac3e4:; BB(0x007ac3e4);
    /* 007ac3e4: mov eax, ebx */ r_eax = r_ebx;
L_007ac3e6:; BB(0x007ac3e6);
    /* 007ac3e6: fld dword ptr [0x97db5c] */ FPUSH(R_F32((u32)(0x97db5cu)));
    /* 007ac3ec: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007ac3f0: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 007ac3f4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007ac3f7: fadd dword ptr [eax*4 + 0x97db50] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97db50u));
    /* 007ac3fe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007ac400: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ac402: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ac403: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ac405: ja 0x7ac409 */ if ((!fC&&!fZ)) goto L_007ac409;
L_007ac407:; BB(0x007ac407);
    /* 007ac407: fst st(1) */ ST(1) = ST(0);
L_007ac409:; BB(0x007ac409);
    /* 007ac409: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ac40b: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 007ac40f: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007ac414: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ac419: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ac41d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007ac421: fistp qword ptr [esp + 0x1c] */ W64((u32)(r_esp+0x1cu), (u64)fx_int64(ST(0))); FPOP();
    /* 007ac425: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 007ac429: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007ac42d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac430: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac431: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac432: ret  */ FN_RET(0x007ac344); r_esp += 4; return;
L_007ac433:; BB(0x007ac433);
    /* 007ac433: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac435: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac438: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac439: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac43a: ret  */ FN_RET(0x007ac344); r_esp += 4; return;
}

void f_007ac43c(void) /* sub_7AC43C */
{
    FN_ENTER(0x007ac43c);
    /* 007ac43c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ac43d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac43e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ac441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac443: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007ac447: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac449: je 0x7ac575 */ if (fZ) goto L_007ac575;
L_007ac44f:; BB(0x007ac44f);
    /* 007ac44f: mov ecx, dword ptr [0xa9cd44] */ r_ecx = R32((u32)(0xa9cd44u));
    /* 007ac455: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac457: jne 0x7ac462 */ if (!fZ) goto L_007ac462;
L_007ac459:; BB(0x007ac459);
    /* 007ac459: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 007ac460: jmp 0x7ac469 */ goto L_007ac469;
L_007ac462:; BB(0x007ac462);
    /* 007ac462: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_007ac469:; BB(0x007ac469);
    /* 007ac469: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 007ac46c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac46e: je 0x7ac513 */ if (fZ) goto L_007ac513;
L_007ac474:; BB(0x007ac474);
    /* 007ac474: mov ebx, eax */ r_ebx = r_eax;
    /* 007ac476: mov ebp, edx */ r_ebp = r_edx;
L_007ac478:; BB(0x007ac478);
    /* 007ac478: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 007ac47c: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac47f: jne 0x7ac4bd */ if (!fZ) goto L_007ac4bd;
L_007ac481:; BB(0x007ac481);
    /* 007ac481: movzx ecx, word ptr [ebp + 2] */ r_ecx = (u32)R16((u32)(r_ebp+0x2u));
    /* 007ac485: lea eax, [ebp + 2] */ r_eax = (u32)(r_ebp+0x2u);
    /* 007ac488: cmp ecx, 0x4a */ {  u32 a = r_ecx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac48b: je 0x7ac4b1 */ if (fZ) goto L_007ac4b1;
L_007ac48d:; BB(0x007ac48d);
    /* 007ac48d: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007ac490: cmp ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac493: jne 0x7ac49e */ if (!fZ) goto L_007ac49e;
L_007ac495:; BB(0x007ac495);
    /* 007ac495: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007ac49c: jmp 0x7ac478 */ goto L_007ac478;
L_007ac49e:; BB(0x007ac49e);
    /* 007ac49e: cmp ecx, 0x43 */ {  u32 a = r_ecx; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac4a1: jne 0x7ac4a8 */ if (!fZ) goto L_007ac4a8;
L_007ac4a3:; BB(0x007ac4a3);
    /* 007ac4a3: lea ebp, [eax + 4] */ r_ebp = (u32)(r_eax+0x4u);
    /* 007ac4a6: jmp 0x7ac478 */ goto L_007ac478;
L_007ac4a8:; BB(0x007ac4a8);
    /* 007ac4a8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007ac4af: jmp 0x7ac478 */ goto L_007ac478;
L_007ac4b1:; BB(0x007ac4b1);
    /* 007ac4b1: lea ebp, [eax + 2] */ r_ebp = (u32)(r_eax+0x2u);
    /* 007ac4b4: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 007ac4bb: jmp 0x7ac478 */ goto L_007ac478;
L_007ac4bd:; BB(0x007ac4bd);
    /* 007ac4bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac4bf: je 0x7ac505 */ if (fZ) goto L_007ac505;
L_007ac4c1:; BB(0x007ac4c1);
    /* 007ac4c1: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 007ac4c4: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ac4c7: mov eax, ecx */ r_eax = r_ecx;
    /* 007ac4c9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac4cc: je 0x7ac505 */ if (fZ) goto L_007ac505;
L_007ac4ce:; BB(0x007ac4ce);
    /* 007ac4ce: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac4d1: je 0x7ac570 */ if (fZ) goto L_007ac570;
L_007ac4d7:; BB(0x007ac4d7);
    /* 007ac4d7: mov edx, eax */ r_edx = r_eax;
    /* 007ac4d9: and edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007ac4df: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac4e5: je 0x7ac560 */ if (fZ) goto L_007ac560;
L_007ac4e7:; BB(0x007ac4e7);
    /* 007ac4e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007ac4e9:; BB(0x007ac4e9);
    /* 007ac4e9: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007ac4ec: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ac4ee: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 007ac4f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac4f2: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x7ac4f7u); f_008443b4();
    /* 007ac4f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac4f8: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7ac4fdu); f_008441e0();
    /* 007ac4fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ac500: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007ac503: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_007ac505:; BB(0x007ac505);
    /* 007ac505: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 007ac509: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac50b: jne 0x7ac478 */ if (!fZ) goto L_007ac478;
L_007ac511:; BB(0x007ac511);
    /* 007ac511: mov eax, ebx */ r_eax = r_ebx;
L_007ac513:; BB(0x007ac513);
    /* 007ac513: fld dword ptr [0x97db58] */ FPUSH(R_F32((u32)(0x97db58u)));
    /* 007ac519: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007ac51d: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 007ac521: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007ac524: fadd dword ptr [eax*4 + 0x97db48] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97db48u));
    /* 007ac52b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007ac52d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ac52f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ac530: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ac532: ja 0x7ac536 */ if ((!fC&&!fZ)) goto L_007ac536;
L_007ac534:; BB(0x007ac534);
    /* 007ac534: fst st(1) */ ST(1) = ST(0);
L_007ac536:; BB(0x007ac536);
    /* 007ac536: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ac538: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 007ac53c: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007ac541: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ac546: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ac54a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 007ac54e: fistp qword ptr [esp + 0x1c] */ W64((u32)(r_esp+0x1cu), (u64)fx_int64(ST(0))); FPOP();
    /* 007ac552: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 007ac556: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007ac55a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac55d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac55e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac55f: ret  */ FN_RET(0x007ac43c); r_esp += 4; return;
L_007ac560:; BB(0x007ac560);
    /* 007ac560: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ac562: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 007ac565: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ac568: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 007ac56b: jmp 0x7ac4e9 */ goto L_007ac4e9;
L_007ac570:; BB(0x007ac570);
    /* 007ac570: add ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac573: jmp 0x7ac505 */ goto L_007ac505;
L_007ac575:; BB(0x007ac575);
    /* 007ac575: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac577: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac57a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac57b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac57c: ret  */ FN_RET(0x007ac43c); r_esp += 4; return;
}

void f_007ac580(void) /* sub_7AC580 */
{
    FN_ENTER(0x007ac580);
    /* 007ac580: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac581: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007ac585: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
L_007ac589:; BB(0x007ac589);
    /* 007ac589: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 007ac58c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ac58f: jne 0x7ac5fd */ if (!fZ) goto L_007ac5fd;
L_007ac591:; BB(0x007ac591);
    /* 007ac591: movzx ebx, word ptr [ecx + 2] */ r_ebx = (u32)R16((u32)(r_ecx+0x2u));
    /* 007ac595: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 007ac598: cmp ebx, 0x4a */ {  u32 a = r_ebx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac59b: je 0x7ac5ee */ if (fZ) goto L_007ac5ee;
L_007ac59d:; BB(0x007ac59d);
    /* 007ac59d: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 007ac5a0: cmp ebx, 0x45 */ {  u32 a = r_ebx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac5a3: jne 0x7ac5b1 */ if (!fZ) goto L_007ac5b1;
L_007ac5a5:; BB(0x007ac5a5);
    /* 007ac5a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac5a7: je 0x7ac589 */ if (fZ) goto L_007ac589;
L_007ac5a9:; BB(0x007ac5a9);
    /* 007ac5a9: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 007ac5af: jmp 0x7ac589 */ goto L_007ac589;
L_007ac5b1:; BB(0x007ac5b1);
    /* 007ac5b1: cmp ebx, 0x43 */ {  u32 a = r_ebx; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac5b4: jne 0x7ac5e2 */ if (!fZ) goto L_007ac5e2;
L_007ac5b6:; BB(0x007ac5b6);
    /* 007ac5b6: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007ac5ba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac5bc: je 0x7ac5dd */ if (fZ) goto L_007ac5dd;
L_007ac5be:; BB(0x007ac5be);
    /* 007ac5be: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 007ac5c1: cmp ecx, 0x47 */ {  u32 a = r_ecx; u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac5c4: je 0x7ac601 */ if (fZ) goto L_007ac601;
L_007ac5c6:; BB(0x007ac5c6);
    /* 007ac5c6: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac5c9: jl 0x7ac5dd */ if ((fS!=fO)) goto L_007ac5dd;
L_007ac5cb:; BB(0x007ac5cb);
    /* 007ac5cb: cmp ecx, 0x39 */ {  u32 a = r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac5ce: jg 0x7ac5dd */ if ((!fZ&&fS==fO)) goto L_007ac5dd;
L_007ac5d0:; BB(0x007ac5d0);
    /* 007ac5d0: mov ecx, dword ptr [ecx*4 + 0x97da60] */ r_ecx = R32((u32)(r_ecx*4+0x97da60u));
    /* 007ac5d7: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007ac5db: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
L_007ac5dd:; BB(0x007ac5dd);
    /* 007ac5dd: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 007ac5e0: jmp 0x7ac589 */ goto L_007ac589;
L_007ac5e2:; BB(0x007ac5e2);
    /* 007ac5e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac5e4: je 0x7ac589 */ if (fZ) goto L_007ac589;
L_007ac5e6:; BB(0x007ac5e6);
    /* 007ac5e6: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 007ac5ec: jmp 0x7ac589 */ goto L_007ac589;
L_007ac5ee:; BB(0x007ac5ee);
    /* 007ac5ee: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 007ac5f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac5f3: je 0x7ac589 */ if (fZ) goto L_007ac589;
L_007ac5f5:; BB(0x007ac5f5);
    /* 007ac5f5: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 007ac5fb: jmp 0x7ac589 */ goto L_007ac589;
L_007ac5fd:; BB(0x007ac5fd);
    /* 007ac5fd: mov eax, ecx */ r_eax = r_ecx;
    /* 007ac5ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac600: ret  */ FN_RET(0x007ac580); r_esp += 4; return;
L_007ac601:; BB(0x007ac601);
    /* 007ac601: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 007ac607: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac609: je 0x7ac616 */ if (fZ) goto L_007ac616;
L_007ac60b:; BB(0x007ac60b);
    /* 007ac60b: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
L_007ac60e:; BB(0x007ac60e);
    /* 007ac60e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 007ac612: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 007ac614: jmp 0x7ac5dd */ goto L_007ac5dd;
L_007ac616:; BB(0x007ac616);
    /* 007ac616: mov ecx, 0xffffea00 */ r_ecx = 0xffffea00u;
    /* 007ac61b: jmp 0x7ac60e */ goto L_007ac60e;
}

void f_007ac620(void) /* sub_7AC620 */
{
    FN_ENTER(0x007ac620);
    /* 007ac620: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007ac624: mov dword ptr [0xaab914], eax */ W32((u32)(0xaab914u), r_eax);
    /* 007ac629: ret  */ FN_RET(0x007ac620); r_esp += 4; return;
}

void f_007ac62c(void) /* sub_7AC62C */
{
    FN_ENTER(0x007ac62c);
    /* 007ac62c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007ac630: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007ac634: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007ac638: mov dword ptr [0xaab910], edx */ W32((u32)(0xaab910u), r_edx);
    /* 007ac63e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007ac642: mov dword ptr [0xaab90c], ecx */ W32((u32)(0xaab90cu), r_ecx);
    /* 007ac648: mov dword ptr [0xaab908], edx */ W32((u32)(0xaab908u), r_edx);
    /* 007ac64e: mov dword ptr [0xaab904], eax */ W32((u32)(0xaab904u), r_eax);
    /* 007ac653: ret  */ FN_RET(0x007ac62c); r_esp += 4; return;
}

void f_007ac654(void) /* sub_7AC654 */
{
    FN_ENTER(0x007ac654);
    /* 007ac654: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ac655: mov eax, dword ptr [0xaab924] */ r_eax = R32((u32)(0xaab924u));
    /* 007ac65a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007ac65c: je 0x7ac666 */ if (fZ) goto L_007ac666;
L_007ac65e:; BB(0x007ac65e);
    /* 007ac65e: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007ac661: mov dword ptr [0xaab924], eax */ W32((u32)(0xaab924u), r_eax);
L_007ac666:; BB(0x007ac666);
    /* 007ac666: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007ac668: je 0x7ac6af */ if (fZ) goto L_007ac6af;
L_007ac66a:; BB(0x007ac66a);
    /* 007ac66a: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007ac66f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7ac674u); f_00829cc8();
    /* 007ac674: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007ac677: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ac679: mov ebx, eax */ r_ebx = r_eax;
L_007ac67b:; BB(0x007ac67b);
    /* 007ac67b: mov edx, dword ptr [ebx*4 + 0xaab950] */ r_edx = R32((u32)(r_ebx*4+0xaab950u));
    /* 007ac682: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac684: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ac686: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac68b: call 0x82aa60 */ r_esp -= 4; W32(r_esp, 0x7ac690u); f_0082aa60();
    /* 007ac690: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac693: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac696: jl 0x7ac67b */ if ((fS!=fO)) goto L_007ac67b;
L_007ac698:; BB(0x007ac698);
    /* 007ac698: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007ac69b: mov eax, dword ptr [0xaab924] */ r_eax = R32((u32)(0xaab924u));
    /* 007ac6a0: add byte ptr [0xaab91c], 1 */ { u32 ad = (u32)(0xaab91cu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007ac6a7: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007ac6aa: mov dword ptr [0xaab924], eax */ W32((u32)(0xaab924u), r_eax);
L_007ac6af:; BB(0x007ac6af);
    /* 007ac6af: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ac6b1: je 0x7ac6c2 */ if (fZ) goto L_007ac6c2;
L_007ac6b3:; BB(0x007ac6b3);
    /* 007ac6b3: add byte ptr [0xaab91c], 1 */ { u32 ad = (u32)(0xaab91cu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007ac6ba: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ac6bd: mov dword ptr [0xaab924], eax */ W32((u32)(0xaab924u), r_eax);
L_007ac6c2:; BB(0x007ac6c2);
    /* 007ac6c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ac6c3: ret  */ FN_RET(0x007ac654); r_esp += 4; return;
}

void f_007ac6c4(void) /* sub_7AC6C4 */
{
    FN_ENTER(0x007ac6c4);
    /* 007ac6c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ac6c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007ac6c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ac6c9: push 0xaca2c8 */ { u32 v = 0xaca2c8u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac6ce: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7ac6d3u); f_008193cc();
    /* 007ac6d3: mov dword ptr [ebx], 0xb463b8 */ W32((u32)(r_ebx), 0xb463b8u);
    /* 007ac6d9: mov edx, dword ptr [0x9ffa8c] */ r_edx = R32((u32)(0x9ffa8cu));
    /* 007ac6df: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 007ac6e2: mov eax, ebx */ r_eax = r_ebx;
    /* 007ac6e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ac6e5: ret  */ FN_RET(0x007ac6c4); r_esp += 4; return;
}

void f_007ac6e8(void) /* sub_7AC6E8 */
{
    FN_ENTER(0x007ac6e8);
    /* 007ac6e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ac6e9: mov ebp, esp */ r_ebp = r_esp;
    /* 007ac6eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ac6ed: push 0x8f5d80 */ { u32 v = 0x8f5d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac6f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007ac6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac6f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007ac700: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ac703: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007ac706: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 007ac709: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 007ac70c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 007ac70f: mov eax, 0xe */ r_eax = 0xeu;
    /* 007ac714: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac718: call 0x844428 */ r_esp -= 4; W32(r_esp, 0x7ac71du); f_00844428();
    /* 007ac71d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ac720: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007ac722:; BB(0x007ac722);
    /* 007ac722: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac727: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7ac72cu); f_008581c5();
    /* 007ac72c: mov dword ptr [ebx*4 + 0xaab950], eax */ W32((u32)(r_ebx*4+0xaab950u), r_eax);
    /* 007ac733: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac738: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac73a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac73b: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x7ac740u); f_0086b5cc();
    /* 007ac740: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ac743: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac746: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac749: jl 0x7ac722 */ if ((fS!=fO)) goto L_007ac722;
L_007ac74b:; BB(0x007ac74b);
    /* 007ac74b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007ac74d:; BB(0x007ac74d);
    /* 007ac74d: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007ac750: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ac752: mov edx, dword ptr [edi + 0xaab950] */ r_edx = R32((u32)(r_edi+0xaab950u));
    /* 007ac758: mov ebx, edi */ r_ebx = r_edi;
    /* 007ac75a: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac75c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac75e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac760: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac762: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac764: lea ebx, [ebx + ebx + 0xaab880] */ r_ebx = (u32)(r_ebx+r_ebx+0xaab880u);
    /* 007ac76b: mov eax, 0x100 */ r_eax = 0x100u;
    /* 007ac770: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ac772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac774: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac776: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x7ac77bu); f_0082a9dc();
    /* 007ac77b: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac780: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007ac783: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ac785: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 007ac788: lea ecx, [eax + edi + 0xaab928] */ r_ecx = (u32)(r_eax+r_edi+0xaab928u);
    /* 007ac78f: lea eax, [esi + 0xdcf28] */ r_eax = (u32)(r_esi+0xdcf28u);
    /* 007ac795: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ac796: mov edx, ebx */ r_edx = r_ebx;
    /* 007ac798: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x7ac79du); f_0082aa0c();
    /* 007ac79d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007ac7a0: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007ac7a3: jb 0x7ac74d */ if (fC) goto L_007ac74d;
L_007ac7a5:; BB(0x007ac7a5);
    /* 007ac7a5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007ac7aa: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x7ac7afu); f_0082aab8();
    /* 007ac7af: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007ac7b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ac7b6: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x7ac7bbu); f_00829e74();
    /* 007ac7bb: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x7ac7c0u); f_0082aac0();
    /* 007ac7c0: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac7c5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7ac7cau); f_008581c5();
    /* 007ac7ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ac7cb: mov dword ptr [0xaab94c], eax */ W32((u32)(0xaab94cu), r_eax);
    /* 007ac7d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007ac7d2:; BB(0x007ac7d2);
    /* 007ac7d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ac7d4: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007ac7d6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007ac7d9: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 007ac7dc: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 007ac7df: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ac7e2: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ac7e5: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007ac7e8: jb 0x7ac7d2 */ if (fC) goto L_007ac7d2;
L_007ac7ea:; BB(0x007ac7ea);
    /* 007ac7ea: mov edx, dword ptr [0xaab94c] */ r_edx = R32((u32)(0xaab94cu));
    /* 007ac7f0: mov esi, 0xafff */ r_esi = 0xafffu;
    /* 007ac7f5: push 0x1e00 */ { u32 v = 0x1e00u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac7fa: mov eax, 0xfff */ r_eax = 0xfffu;
    /* 007ac7ff: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007ac802: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007ac808: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007ac80d: mov ecx, 0x5fff */ r_ecx = 0x5fffu;
    /* 007ac812: mov word ptr [ebx + 2], cx */ W16((u32)(r_ebx+0x2u), (u16)r_ecx);
    /* 007ac816: mov edi, dword ptr [0xaab94c] */ r_edi = R32((u32)(0xaab94cu));
    /* 007ac81c: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 007ac820: mov edx, dword ptr [0xaab94c] */ r_edx = R32((u32)(0xaab94cu));
    /* 007ac826: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 007ac82a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7ac82fu); f_008581c5();
    /* 007ac82f: mov edi, eax */ r_edi = r_eax;
    /* 007ac831: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ac834: mov dword ptr [0xaab920], edi */ W32((u32)(0xaab920u), r_edi);
    /* 007ac83a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ac83c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_007ac83f:; BB(0x007ac83f);
    /* 007ac83f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007ac842: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac844: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ac846: movzx eax, al */ r_eax = (u32)(u8)r_eax;
L_007ac849:; BB(0x007ac849);
    /* 007ac849: mov byte ptr [edi + 5], 0 */ W8((u32)(r_edi+0x5u), 0x0u);
    /* 007ac84d: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007ac850: mov esi, 0x2ef */ r_esi = 0x2efu;
    /* 007ac855: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007ac858: mov byte ptr [edi + 0xf], 0x10 */ W8((u32)(r_edi+0xfu), 0x10u);
    /* 007ac85c: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 007ac85f: mov byte ptr [edi + 0x19], 0x20 */ W8((u32)(r_edi+0x19u), 0x20u);
    /* 007ac863: mov edx, 7 */ r_edx = 0x7u;
    /* 007ac868: mov byte ptr [edi + 2], dl */ W8((u32)(r_edi+0x2u), (u8)r_edx);
    /* 007ac86b: mov ecx, 0xf0 */ r_ecx = 0xf0u;
    /* 007ac870: mov byte ptr [edi + 0x23], 0x30 */ W8((u32)(r_edi+0x23u), 0x30u);
    /* 007ac874: mov byte ptr [edi + 3], cl */ W8((u32)(r_edi+0x3u), (u8)r_ecx);
    /* 007ac877: mov byte ptr [edi + 4], al */ W8((u32)(r_edi+0x4u), (u8)r_eax);
    /* 007ac87a: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 007ac87d: mov byte ptr [edi + 0x2d], 0x40 */ W8((u32)(r_edi+0x2du), 0x40u);
    /* 007ac881: mov byte ptr [edi + 6], bl */ W8((u32)(r_edi+0x6u), (u8)r_ebx);
    /* 007ac884: mov word ptr [edi + 0xa], si */ W16((u32)(r_edi+0xau), (u16)r_esi);
    /* 007ac888: mov byte ptr [edi + 0xc], dl */ W8((u32)(r_edi+0xcu), (u8)r_edx);
    /* 007ac88b: mov byte ptr [edi + 0x37], 0x50 */ W8((u32)(r_edi+0x37u), 0x50u);
    /* 007ac88f: mov byte ptr [edi + 0xd], cl */ W8((u32)(r_edi+0xdu), (u8)r_ecx);
    /* 007ac892: mov byte ptr [edi + 0xe], al */ W8((u32)(r_edi+0xeu), (u8)r_eax);
    /* 007ac895: mov byte ptr [edi + 0x10], bl */ W8((u32)(r_edi+0x10u), (u8)r_ebx);
    /* 007ac898: mov byte ptr [edi + 0x41], 0x60 */ W8((u32)(r_edi+0x41u), 0x60u);
    /* 007ac89c: mov word ptr [edi + 0x14], si */ W16((u32)(r_edi+0x14u), (u16)r_esi);
    /* 007ac8a0: mov byte ptr [edi + 0x16], dl */ W8((u32)(r_edi+0x16u), (u8)r_edx);
    /* 007ac8a3: mov byte ptr [edi + 0x17], cl */ W8((u32)(r_edi+0x17u), (u8)r_ecx);
    /* 007ac8a6: mov byte ptr [edi + 0x4b], 0x70 */ W8((u32)(r_edi+0x4bu), 0x70u);
    /* 007ac8aa: mov byte ptr [edi + 0x18], al */ W8((u32)(r_edi+0x18u), (u8)r_eax);
    /* 007ac8ad: mov byte ptr [edi + 0x1a], bl */ W8((u32)(r_edi+0x1au), (u8)r_ebx);
    /* 007ac8b0: mov word ptr [edi + 0x1e], si */ W16((u32)(r_edi+0x1eu), (u16)r_esi);
    /* 007ac8b4: mov byte ptr [edi + 0x55], 0x80 */ W8((u32)(r_edi+0x55u), 0x80u);
    /* 007ac8b8: mov byte ptr [edi + 0x20], dl */ W8((u32)(r_edi+0x20u), (u8)r_edx);
    /* 007ac8bb: mov byte ptr [edi + 0x21], cl */ W8((u32)(r_edi+0x21u), (u8)r_ecx);
    /* 007ac8be: mov byte ptr [edi + 0x22], al */ W8((u32)(r_edi+0x22u), (u8)r_eax);
    /* 007ac8c1: mov byte ptr [edi + 0x5f], 0x90 */ W8((u32)(r_edi+0x5fu), 0x90u);
    /* 007ac8c5: mov byte ptr [edi + 0x24], bl */ W8((u32)(r_edi+0x24u), (u8)r_ebx);
    /* 007ac8c8: mov word ptr [edi + 0x28], si */ W16((u32)(r_edi+0x28u), (u16)r_esi);
    /* 007ac8cc: mov byte ptr [edi + 0x2a], dl */ W8((u32)(r_edi+0x2au), (u8)r_edx);
    /* 007ac8cf: mov byte ptr [edi + 0x69], 0xa0 */ W8((u32)(r_edi+0x69u), 0xa0u);
    /* 007ac8d3: mov byte ptr [edi + 0x2b], cl */ W8((u32)(r_edi+0x2bu), (u8)r_ecx);
    /* 007ac8d6: mov byte ptr [edi + 0x2c], al */ W8((u32)(r_edi+0x2cu), (u8)r_eax);
    /* 007ac8d9: mov byte ptr [edi + 0x2e], bl */ W8((u32)(r_edi+0x2eu), (u8)r_ebx);
    /* 007ac8dc: mov byte ptr [edi + 0x73], 0xb0 */ W8((u32)(r_edi+0x73u), 0xb0u);
    /* 007ac8e0: mov word ptr [edi + 0x32], si */ W16((u32)(r_edi+0x32u), (u16)r_esi);
    /* 007ac8e4: mov byte ptr [edi + 0x34], dl */ W8((u32)(r_edi+0x34u), (u8)r_edx);
    /* 007ac8e7: mov byte ptr [edi + 0x35], cl */ W8((u32)(r_edi+0x35u), (u8)r_ecx);
    /* 007ac8ea: mov byte ptr [edi + 0x7d], 0xc0 */ W8((u32)(r_edi+0x7du), 0xc0u);
    /* 007ac8ee: mov byte ptr [edi + 0x36], al */ W8((u32)(r_edi+0x36u), (u8)r_eax);
    /* 007ac8f1: mov byte ptr [edi + 0x38], bl */ W8((u32)(r_edi+0x38u), (u8)r_ebx);
    /* 007ac8f4: mov word ptr [edi + 0x3c], si */ W16((u32)(r_edi+0x3cu), (u16)r_esi);
    /* 007ac8f8: mov byte ptr [edi + 0x87], 0xd0 */ W8((u32)(r_edi+0x87u), 0xd0u);
    /* 007ac8ff: mov byte ptr [edi + 0x3e], dl */ W8((u32)(r_edi+0x3eu), (u8)r_edx);
    /* 007ac902: mov byte ptr [edi + 0x3f], cl */ W8((u32)(r_edi+0x3fu), (u8)r_ecx);
    /* 007ac905: mov byte ptr [edi + 0x40], al */ W8((u32)(r_edi+0x40u), (u8)r_eax);
    /* 007ac908: mov byte ptr [edi + 0x91], 0xe0 */ W8((u32)(r_edi+0x91u), 0xe0u);
    /* 007ac90f: mov byte ptr [edi + 0x42], bl */ W8((u32)(r_edi+0x42u), (u8)r_ebx);
    /* 007ac912: mov word ptr [edi + 0x46], si */ W16((u32)(r_edi+0x46u), (u16)r_esi);
    /* 007ac916: mov byte ptr [edi + 0x48], dl */ W8((u32)(r_edi+0x48u), (u8)r_edx);
    /* 007ac919: mov byte ptr [edi + 0x49], cl */ W8((u32)(r_edi+0x49u), (u8)r_ecx);
    /* 007ac91c: mov byte ptr [edi + 0x4a], al */ W8((u32)(r_edi+0x4au), (u8)r_eax);
    /* 007ac91f: mov byte ptr [edi + 0x4c], bl */ W8((u32)(r_edi+0x4cu), (u8)r_ebx);
    /* 007ac922: mov word ptr [edi + 0x50], si */ W16((u32)(r_edi+0x50u), (u16)r_esi);
    /* 007ac926: mov byte ptr [edi + 0x52], dl */ W8((u32)(r_edi+0x52u), (u8)r_edx);
    /* 007ac929: mov byte ptr [edi + 0x53], cl */ W8((u32)(r_edi+0x53u), (u8)r_ecx);
    /* 007ac92c: mov byte ptr [edi + 0x54], al */ W8((u32)(r_edi+0x54u), (u8)r_eax);
    /* 007ac92f: mov byte ptr [edi + 0x56], bl */ W8((u32)(r_edi+0x56u), (u8)r_ebx);
    /* 007ac932: mov word ptr [edi + 0x5a], si */ W16((u32)(r_edi+0x5au), (u16)r_esi);
    /* 007ac936: mov byte ptr [edi + 0x5c], dl */ W8((u32)(r_edi+0x5cu), (u8)r_edx);
    /* 007ac939: mov byte ptr [edi + 0x5d], cl */ W8((u32)(r_edi+0x5du), (u8)r_ecx);
    /* 007ac93c: mov byte ptr [edi + 0x5e], al */ W8((u32)(r_edi+0x5eu), (u8)r_eax);
    /* 007ac93f: mov byte ptr [edi + 0x60], bl */ W8((u32)(r_edi+0x60u), (u8)r_ebx);
    /* 007ac942: mov word ptr [edi + 0x64], si */ W16((u32)(r_edi+0x64u), (u16)r_esi);
    /* 007ac946: mov byte ptr [edi + 0x66], dl */ W8((u32)(r_edi+0x66u), (u8)r_edx);
    /* 007ac949: mov byte ptr [edi + 0x67], cl */ W8((u32)(r_edi+0x67u), (u8)r_ecx);
    /* 007ac94c: mov byte ptr [edi + 0x68], al */ W8((u32)(r_edi+0x68u), (u8)r_eax);
    /* 007ac94f: mov byte ptr [edi + 0x6a], bl */ W8((u32)(r_edi+0x6au), (u8)r_ebx);
    /* 007ac952: mov word ptr [edi + 0x6e], si */ W16((u32)(r_edi+0x6eu), (u16)r_esi);
    /* 007ac956: mov byte ptr [edi + 0x70], dl */ W8((u32)(r_edi+0x70u), (u8)r_edx);
    /* 007ac959: mov byte ptr [edi + 0x71], cl */ W8((u32)(r_edi+0x71u), (u8)r_ecx);
    /* 007ac95c: mov byte ptr [edi + 0x72], al */ W8((u32)(r_edi+0x72u), (u8)r_eax);
    /* 007ac95f: mov byte ptr [edi + 0x74], bl */ W8((u32)(r_edi+0x74u), (u8)r_ebx);
    /* 007ac962: mov word ptr [edi + 0x78], si */ W16((u32)(r_edi+0x78u), (u16)r_esi);
    /* 007ac966: mov byte ptr [edi + 0x7a], dl */ W8((u32)(r_edi+0x7au), (u8)r_edx);
    /* 007ac969: mov byte ptr [edi + 0x7b], cl */ W8((u32)(r_edi+0x7bu), (u8)r_ecx);
    /* 007ac96c: mov byte ptr [edi + 0x7c], al */ W8((u32)(r_edi+0x7cu), (u8)r_eax);
    /* 007ac96f: mov byte ptr [edi + 0x7e], bl */ W8((u32)(r_edi+0x7eu), (u8)r_ebx);
    /* 007ac972: mov word ptr [edi + 0x82], si */ W16((u32)(r_edi+0x82u), (u16)r_esi);
    /* 007ac979: mov byte ptr [edi + 0x84], dl */ W8((u32)(r_edi+0x84u), (u8)r_edx);
    /* 007ac97f: mov byte ptr [edi + 0x85], cl */ W8((u32)(r_edi+0x85u), (u8)r_ecx);
    /* 007ac985: mov byte ptr [edi + 0x86], al */ W8((u32)(r_edi+0x86u), (u8)r_eax);
    /* 007ac98b: mov byte ptr [edi + 0x88], bl */ W8((u32)(r_edi+0x88u), (u8)r_ebx);
    /* 007ac991: mov word ptr [edi + 0x8c], si */ W16((u32)(r_edi+0x8cu), (u16)r_esi);
    /* 007ac998: mov byte ptr [edi + 0x8e], dl */ W8((u32)(r_edi+0x8eu), (u8)r_edx);
    /* 007ac99e: mov byte ptr [edi + 0x8f], cl */ W8((u32)(r_edi+0x8fu), (u8)r_ecx);
    /* 007ac9a4: mov byte ptr [edi + 0x90], al */ W8((u32)(r_edi+0x90u), (u8)r_eax);
    /* 007ac9aa: mov byte ptr [edi + 0x92], bl */ W8((u32)(r_edi+0x92u), (u8)r_ebx);
    /* 007ac9b0: mov word ptr [edi + 0x96], si */ W16((u32)(r_edi+0x96u), (u16)r_esi);
    /* 007ac9b7: mov byte ptr [edi + 0x98], dl */ W8((u32)(r_edi+0x98u), (u8)r_edx);
    /* 007ac9bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007ac9c0: mov byte ptr [edi + 0x99], cl */ W8((u32)(r_edi+0x99u), (u8)r_ecx);
    /* 007ac9c6: mov byte ptr [edi + 0x9a], al */ W8((u32)(r_edi+0x9au), (u8)r_eax);
    /* 007ac9cc: mov byte ptr [edi + 0x9b], cl */ W8((u32)(r_edi+0x9bu), (u8)r_ecx);
    /* 007ac9d2: mov byte ptr [edi + 0x9c], bl */ W8((u32)(r_edi+0x9cu), (u8)r_ebx);
    /* 007ac9d8: add edi, 0xa0 */ {  u32 a = r_edi; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007ac9de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ac9e1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ac9e4: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ac9e7: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 007ac9ea: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007ac9ed: jb 0x7ac849 */ if (fC) goto L_007ac849;
L_007ac9f3:; BB(0x007ac9f3);
    /* 007ac9f3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007ac9f6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ac9f9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007ac9fc: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007ac9ff: jb 0x7ac83f */ if (fC) goto L_007ac83f;
L_007aca05:; BB(0x007aca05);
    /* 007aca05: mov dword ptr [0xaab924], 3 */ W32((u32)(0xaab924u), 0x3u);
    /* 007aca0f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007aca11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007aca13: mov byte ptr [0xaab91c], al */ W8((u32)(0xaab91cu), (u8)r_eax);
    /* 007aca18: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007aca1b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7aca20u); f_005caba4();
    /* 007aca20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aca21: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007aca24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aca26: je 0x7aca64 */ if (fZ) goto L_007aca64;
L_007aca28:; BB(0x007aca28);
    /* 007aca28: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007aca2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007aca36: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aca39: call 0x7ac6c4 */ r_esp -= 4; W32(r_esp, 0x7aca3eu); f_007ac6c4();
    /* 007aca3e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007aca41: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_007aca48:; BB(0x007aca48);
    /* 007aca48: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007aca4b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aca4e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007aca51: mov dword ptr [0xaab918], eax */ W32((u32)(0xaab918u), r_eax);
    /* 007aca56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007aca59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007aca60: mov esp, ebp */ r_esp = r_ebp;
    /* 007aca62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007aca63: ret  */ FN_RET(0x007ac6e8); r_esp += 4; return;
L_007aca64:; BB(0x007aca64);
    /* 007aca64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aca66: jmp 0x7aca48 */ goto L_007aca48;
}

void f_007aca68(void) /* sub_7ACA68 */
{
    FN_ENTER(0x007aca68);
    /* 007aca68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007aca69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007aca6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007aca6d: call 0x7aca8c */ r_esp -= 4; W32(r_esp, 0x7aca72u); f_007aca8c();
    /* 007aca72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007aca76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aca78: jne 0x7aca7e */ if (!fZ) goto L_007aca7e;
L_007aca7a:; BB(0x007aca7a);
    /* 007aca7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007aca7b: ret 4 */ FN_RET(0x007aca68); r_esp += 8; return;
L_007aca7e:; BB(0x007aca7e);
    /* 007aca7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007aca7f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7aca84u); f_005c2f74();
    /* 007aca84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aca85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007aca86: ret 4 */ FN_RET(0x007aca68); r_esp += 8; return;
}

void f_007aca8c(void) /* sub_7ACA8C */
{
    FN_ENTER(0x007aca8c);
    /* 007aca8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aca8d: mov ebp, esp */ r_ebp = r_esp;
    /* 007aca8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007aca91: push 0x8f5d9c */ { u32 v = 0x8f5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 007aca96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007aca9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007aca9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007acaa4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007acaa7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007acaaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007acaad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007acab0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007acab3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007acab6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007acabd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007acac0: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 007acac3: mov dword ptr [eax], 0xb46420 */ W32((u32)(r_eax), 0xb46420u);
    /* 007acac9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007acacb: je 0x7acadc */ if (fZ) goto L_007acadc;
L_007acacd:; BB(0x007acacd);
    /* 007acacd: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x7acad2u); f_007b9c8c();
    /* 007acad2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007acad5: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_007acadc:; BB(0x007acadc);
    /* 007acadc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007acae3: mov ecx, eax */ r_ecx = r_eax;
    /* 007acae5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7acaeau); f_008171e8();
    /* 007acaea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007acaed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007acaf4: mov esp, ebp */ r_esp = r_ebp;
    /* 007acaf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007acaf7: ret  */ FN_RET(0x007aca8c); r_esp += 4; return;
}

void f_007acaf8(void) /* sub_7ACAF8 */
{
    FN_ENTER(0x007acaf8);
    /* 007acaf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007acaf9: mov ebx, esp */ r_ebx = r_esp;
    /* 007acafb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007acafe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007acaff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007acb00: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 007acb03: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 007acb07: mov ebp, esp */ r_ebp = r_esp;
    /* 007acb09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007acb0b: push 0x8f5dd8 */ { u32 v = 0x8f5dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 007acb10: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007acb16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007acb17: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007acb1e: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007acb21: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007acb24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007acb27: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 007acb2a: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 007acb2d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007acb30: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 007acb36: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 007acb39: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 007acb3c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007acb3f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 007acb42: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007acb45: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007acb48: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7acb4du); f_008193cc();
    /* 007acb4d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007acb54: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007acb57: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007acb5a: mov dword ptr [eax], 0xb46420 */ W32((u32)(r_eax), 0xb46420u);
    /* 007acb60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007acb61: mov edx, dword ptr [0x9ffa98] */ r_edx = R32((u32)(0x9ffa98u));
    /* 007acb67: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007acb6c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 007acb6f: mov word ptr [eax + 0x34], cx */ W16((u32)(r_eax+0x34u), (u16)r_ecx);
    /* 007acb73: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007acb75: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007acb78: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 007acb7a: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 007acb7c: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 007acb7f: fsub dword ptr [ecx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x8u));
    /* 007acb82: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 007acb85: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 007acb88: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007acb8a: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 007acb8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acb8f: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007acb92: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acb94: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 007acb97: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 007acb9a: mov dword ptr [eax + 0x6c], edi */ W32((u32)(r_eax+0x6cu), r_edi);
    /* 007acb9d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 007acba0: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 007acba3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 007acba6: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 007acba9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7acbaeu); f_0082e900();
    /* 007acbae: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 007acbb1: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 007acbb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007acbb5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007acbb8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x7acbbdu); f_0082e900();
    /* 007acbbd: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 007acbc0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acbc2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007acbc4: fmul qword ptr [0x97dba8] */ ST(0) = ST(0) * R_F64((u32)(0x97dba8u));
    /* 007acbca: fdiv qword ptr [0x97dba0] */ ST(0) = ST(0) / R_F64((u32)(0x97dba0u));
    /* 007acbd0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007acbd3: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 007acbd6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acbd8: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 007acbdb: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 007acbdf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007acbe4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007acbe7: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 007acbea: fistp dword ptr [ecx + 0xa0] */ W32((u32)(r_ecx+0xa0u), (u32)fx_int32(ST(0))); FPOP();
    /* 007acbf0: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 007acbf3: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 007acbf6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acbf8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007acbfa: fmul qword ptr [0x97dba8] */ ST(0) = ST(0) * R_F64((u32)(0x97dba8u));
    /* 007acc00: fdiv qword ptr [0x97dba0] */ ST(0) = ST(0) / R_F64((u32)(0x97dba0u));
    /* 007acc06: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 007acc09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acc0b: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 007acc0e: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 007acc12: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007acc17: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007acc1a: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 007acc1d: fistp dword ptr [ecx + 0xa4] */ W32((u32)(r_ecx+0xa4u), (u32)fx_int32(ST(0))); FPOP();
    /* 007acc23: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 007acc26: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 007acc29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acc2b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007acc2d: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 007acc30: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 007acc33: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 007acc36: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007acc38: fstp dword ptr [ecx + 0x94] */ W_F32((u32)(r_ecx+0x94u), ST(0)); FPOP();
    /* 007acc3e: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 007acc44: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 007acc4a: fmul qword ptr [0x97dba8] */ ST(0) = ST(0) * R_F64((u32)(0x97dba8u));
    /* 007acc50: fdiv qword ptr [0x97dba0] */ ST(0) = ST(0) / R_F64((u32)(0x97dba0u));
    /* 007acc56: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 007acc59: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 007acc5d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007acc62: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007acc65: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 007acc68: fistp dword ptr [ecx + 0xa8] */ W32((u32)(r_ecx+0xa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 007acc6e: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 007acc71: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 007acc74: mov dword ptr [ecx + 0xb4], 0x40800000 */ W32((u32)(r_ecx+0xb4u), 0x40800000u);
    /* 007acc7e: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 007acc81: mov dword ptr [ecx + 0x88], 0x3f800000 */ W32((u32)(r_ecx+0x88u), 0x3f800000u);
    /* 007acc8b: mov dword ptr [ecx + 0x8c], 0x3f800000 */ W32((u32)(r_ecx+0x8cu), 0x3f800000u);
    /* 007acc95: mov dword ptr [ecx + 0x90], 0x3f800000 */ W32((u32)(r_ecx+0x90u), 0x3f800000u);
    /* 007acc9f: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007acca6: mov dword ptr [ecx + 0xac], 0x40a00000 */ W32((u32)(r_ecx+0xacu), 0x40a00000u);
    /* 007accb0: mov dword ptr [ecx + 0x20], 0x447a0000 */ W32((u32)(r_ecx+0x20u), 0x447a0000u);
    /* 007accb7: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 007accc1: mov dword ptr [ecx + 0xb8], 1 */ W32((u32)(r_ecx+0xb8u), 0x1u);
    /* 007acccb: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007accd1: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7accd6u); f_0083173c();
    /* 007accd6: fld dword ptr [0x97dbd8] */ FPUSH(R_F32((u32)(0x97dbd8u)));
    /* 007accdc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007accde: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007acce0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007acce2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007acce3: je 0x7accfd */ if (fZ) goto L_007accfd;
L_007acce5:; BB(0x007acce5);
    /* 007acce5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007acce7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007accea: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007accf0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7accf5u); f_0082df08();
    /* 007accf5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007accf7: fld dword ptr [0x97dbd8] */ FPUSH(R_F32((u32)(0x97dbd8u)));
L_007accfd:; BB(0x007accfd);
    /* 007accfd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007acd00: fst dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0));
    /* 007acd03: fst dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0));
    /* 007acd06: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 007acd09: mov dword ptr [eax + 0x48], 0x40a00000 */ W32((u32)(r_eax+0x48u), 0x40a00000u);
    /* 007acd10: mov dword ptr [eax + 0x4c], 0x3f800000 */ W32((u32)(r_eax+0x4cu), 0x3f800000u);
    /* 007acd17: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007acd1c: mov dword ptr [eax + 0x50], 1 */ W32((u32)(r_eax+0x50u), 0x1u);
    /* 007acd23: mov dword ptr [eax + 0x54], 0x40007 */ W32((u32)(r_eax+0x54u), 0x40007u);
    /* 007acd2a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 007acd31: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7acd36u); f_005caba4();
    /* 007acd36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007acd37: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007acd3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007acd3c: je 0x7acd99 */ if (fZ) goto L_007acd99;
L_007acd3e:; BB(0x007acd3e);
    /* 007acd3e: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 007acd45: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007acd4c: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007acd4f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007acd52: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x7acd57u); f_007b4b48();
    /* 007acd57: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007acd5a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_007acd61:; BB(0x007acd61);
    /* 007acd61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007acd64: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 007acd67: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007acd6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007acd70: je 0x7acd80 */ if (fZ) goto L_007acd80;
L_007acd72:; BB(0x007acd72);
    /* 007acd72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007acd74: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007acd77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007acd78: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x7acd7du); f_007b9a88();
    /* 007acd7d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_007acd80:; BB(0x007acd80);
    /* 007acd80: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007acd83: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 007acd86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007acd89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007acd90: mov esp, ebp */ r_esp = r_ebp;
    /* 007acd92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007acd93: mov esp, ebx */ r_esp = r_ebx;
    /* 007acd95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007acd96: ret 0xc */ FN_RET(0x007acaf8); r_esp += 16; return;
L_007acd99:; BB(0x007acd99);
    /* 007acd99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007acd9b: jmp 0x7acd61 */ goto L_007acd61;
}

void f_007acda0(void) /* sub_7ACDA0 */
{
    FN_ENTER(0x007acda0);
    /* 007acda0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007acda1: mov esi, ecx */ r_esi = r_ecx;
    /* 007acda3: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 007acda9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007acdac: jne 0x7acdbe */ if (!fZ) goto L_007acdbe;
L_007acdae:; BB(0x007acdae);
    /* 007acdae: mov ecx, esi */ r_ecx = r_esi;
    /* 007acdb0: call 0x7acdc8 */ r_esp -= 4; W32(r_esp, 0x7acdb5u); f_007acdc8();
    /* 007acdb5: mov ecx, esi */ r_ecx = r_esi;
    /* 007acdb7: call 0x7ace88 */ r_esp -= 4; W32(r_esp, 0x7acdbcu); f_007ace88();
    /* 007acdbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007acdbd: ret  */ FN_RET(0x007acda0); r_esp += 4; return;
L_007acdbe:; BB(0x007acdbe);
    /* 007acdbe: mov ecx, esi */ r_ecx = r_esi;
    /* 007acdc0: call 0x7ad670 */ r_esp -= 4; W32(r_esp, 0x7acdc5u); f_007ad670();
    /* 007acdc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007acdc6: ret  */ FN_RET(0x007acda0); r_esp += 4; return;
}

void f_007acdc8(void) /* sub_7ACDC8 */
{
    FN_ENTER(0x007acdc8);
    /* 007acdc8: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 007acdcb: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 007acdce: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 007acdd4: fld dword ptr [ecx + 0x94] */ FPUSH(R_F32((u32)(r_ecx+0x94u)));
    /* 007acdda: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 007acde0: fld dword ptr [ecx + 0x9c] */ FPUSH(R_F32((u32)(r_ecx+0x9cu)));
    /* 007acde6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007acde8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007acdea: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 007acded: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acdef: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007acdf1: fadd dword ptr [ecx + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x70u));
    /* 007acdf4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007acdf6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007acdf8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acdfa: fadd dword ptr [ecx + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x74u));
    /* 007acdfd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007acdff: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 007ace02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ace04: fstp dword ptr [ecx + 0x70] */ W_F32((u32)(r_ecx+0x70u), ST(0)); FPOP();
    /* 007ace07: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 007ace0a: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 007ace0d: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 007ace10: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 007ace13: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 007ace16: call 0x7ace1c */ r_esp -= 4; W32(r_esp, 0x7ace1bu); f_007ace1c();
    /* 007ace1b: ret  */ FN_RET(0x007acdc8); r_esp += 4; return;
}

void f_007ace1c(void) /* sub_7ACE1C */
{
    FN_ENTER(0x007ace1c);
    /* 007ace1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ace1d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ace20: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007ace22: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007ace25: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 007ace28: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007ace2b: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007ace2e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ace32: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007ace36: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007ace39: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 007ace3c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007ace40: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 007ace43: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007ace47: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 007ace4a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ace4e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007ace52: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 007ace57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ace58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ace59: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7ace5eu); f_0077fffc();
    /* 007ace5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ace61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ace63: je 0x7ace81 */ if (fZ) goto L_007ace81;
L_007ace65:; BB(0x007ace65);
    /* 007ace65: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007ace68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007ace6a: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 007ace6d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 007ace70: mov dword ptr [ebp + 0x70], edx */ W32((u32)(r_ebp+0x70u), r_edx);
    /* 007ace73: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 007ace76: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 007ace79: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007ace7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007ace7e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x7ace81u); call_ind(t); }
L_007ace81:; BB(0x007ace81);
    /* 007ace81: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ace84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ace85: ret  */ FN_RET(0x007ace1c); r_esp += 4; return;
}

void f_007ace88(void) /* sub_7ACE88 */
{
    FN_ENTER(0x007ace88);
    /* 007ace88: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 007ace8b: fcom dword ptr [ecx + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x20u))); 
    /* 007ace8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ace90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ace91: jbe 0x7acea3 */ if ((fC||fZ)) goto L_007acea3;
L_007ace93:; BB(0x007ace93);
    /* 007ace93: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ace95: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 007ace99: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ace9e: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 007acea2: ret  */ FN_RET(0x007ace88); r_esp += 4; return;
L_007acea3:; BB(0x007acea3);
    /* 007acea3: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 007acea9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aceab: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 007aceae: ret  */ FN_RET(0x007ace88); r_esp += 4; return;
}

void f_007acea0(void)
{
    FN_ENTER(0x007acea0);
    /* 007acea0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007acea1: or bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007acea3: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 007acea9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aceab: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 007aceae: ret  */ FN_RET(0x007acea0); r_esp += 4; return;
}

void f_007aceb0(void) /* sub_7ACEB0 */
{
    FN_ENTER(0x007aceb0);
    /* 007aceb0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aceb3: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 007aceba: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007acebd: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 007acec5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007acec8: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 007aced0: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 007aced8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007aced9: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 007acede: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007acedf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7acee4u); f_0061cdb0();
    /* 007acee4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007acee7: ret  */ FN_RET(0x007aceb0); r_esp += 4; return;
}

void f_007acee8(void) /* sub_7ACEE8 */
{
    FN_ENTER(0x007acee8);
    /* 007acee8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007acee9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aceea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aceeb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007aceec: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aceef: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007acef1: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 007acef4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007acef6: je 0x7ad637 */ if (fZ) goto L_007ad637;
L_007acefc:; BB(0x007acefc);
    /* 007acefc: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 007acf02: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007acf05: jne 0x7ad169 */ if (!fZ) goto L_007ad169;
L_007acf0b:; BB(0x007acf0b);
    /* 007acf0b: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 007acf0e: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 007acf11: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 007acf14: fld dword ptr [ebx + 0x74] */ FPUSH(R_F32((u32)(r_ebx+0x74u)));
    /* 007acf17: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007acf19: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007acf1d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007acf21: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007acf24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007acf26: mov dword ptr [0xaab980], eax */ W32((u32)(0xaab980u), r_eax);
    /* 007acf2b: mov dword ptr [0xaab9c0], eax */ W32((u32)(0xaab9c0u), r_eax);
    /* 007acf30: mov dword ptr [0xaab984], eax */ W32((u32)(0xaab984u), r_eax);
    /* 007acf35: mov dword ptr [0xaab9c4], eax */ W32((u32)(0xaab9c4u), r_eax);
    /* 007acf3a: mov dword ptr [0xaab988], eax */ W32((u32)(0xaab988u), r_eax);
    /* 007acf3f: mov dword ptr [0xaab9c8], eax */ W32((u32)(0xaab9c8u), r_eax);
    /* 007acf44: mov dword ptr [0xaab98c], eax */ W32((u32)(0xaab98cu), r_eax);
    /* 007acf49: mov dword ptr [0xaab9cc], eax */ W32((u32)(0xaab9ccu), r_eax);
    /* 007acf4e: mov dword ptr [0xaab990], eax */ W32((u32)(0xaab990u), r_eax);
    /* 007acf53: mov dword ptr [0xaab9d0], eax */ W32((u32)(0xaab9d0u), r_eax);
    /* 007acf58: mov dword ptr [0xaab994], eax */ W32((u32)(0xaab994u), r_eax);
    /* 007acf5d: mov dword ptr [0xaab9d4], eax */ W32((u32)(0xaab9d4u), r_eax);
    /* 007acf62: mov dword ptr [0xaab998], eax */ W32((u32)(0xaab998u), r_eax);
    /* 007acf67: mov dword ptr [0xaab9d8], eax */ W32((u32)(0xaab9d8u), r_eax);
    /* 007acf6c: mov dword ptr [0xaab99c], eax */ W32((u32)(0xaab99cu), r_eax);
    /* 007acf71: mov dword ptr [0xaab9dc], eax */ W32((u32)(0xaab9dcu), r_eax);
    /* 007acf76: mov dword ptr [0xaab9a0], eax */ W32((u32)(0xaab9a0u), r_eax);
    /* 007acf7b: mov dword ptr [0xaab9e0], eax */ W32((u32)(0xaab9e0u), r_eax);
    /* 007acf80: mov dword ptr [0xaab9a4], eax */ W32((u32)(0xaab9a4u), r_eax);
    /* 007acf85: mov dword ptr [0xaab9e4], eax */ W32((u32)(0xaab9e4u), r_eax);
    /* 007acf8a: mov dword ptr [0xaab9a8], eax */ W32((u32)(0xaab9a8u), r_eax);
    /* 007acf8f: mov dword ptr [0xaab9e8], eax */ W32((u32)(0xaab9e8u), r_eax);
    /* 007acf94: mov dword ptr [0xaab9ac], eax */ W32((u32)(0xaab9acu), r_eax);
    /* 007acf99: mov dword ptr [0xaab9ec], eax */ W32((u32)(0xaab9ecu), r_eax);
    /* 007acf9e: mov dword ptr [0xaab9b0], eax */ W32((u32)(0xaab9b0u), r_eax);
    /* 007acfa3: mov dword ptr [0xaab9f0], eax */ W32((u32)(0xaab9f0u), r_eax);
    /* 007acfa8: mov dword ptr [0xaab9b4], eax */ W32((u32)(0xaab9b4u), r_eax);
    /* 007acfad: mov dword ptr [0xaab9f4], eax */ W32((u32)(0xaab9f4u), r_eax);
    /* 007acfb2: mov dword ptr [0xaab9b8], eax */ W32((u32)(0xaab9b8u), r_eax);
    /* 007acfb7: mov dword ptr [0xaab9f8], eax */ W32((u32)(0xaab9f8u), r_eax);
    /* 007acfbc: mov dword ptr [0xaab9bc], eax */ W32((u32)(0xaab9bcu), r_eax);
    /* 007acfc1: mov dword ptr [0xaab9fc], eax */ W32((u32)(0xaab9fcu), r_eax);
    /* 007acfc6: mov dword ptr [0xaaba00], eax */ W32((u32)(0xaaba00u), r_eax);
    /* 007acfcb: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 007acfce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007acfd0: je 0x7ad5dc */ if (fZ) goto L_007ad5dc;
L_007acfd6:; BB(0x007acfd6);
    /* 007acfd6: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 007acfda: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 007acfdd: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 007acfe1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007acfe5: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 007acfe8: fsubr dword ptr [esp + 4] */ ST(0) = R_F32((u32)(r_esp+0x4u)) - ST(0);
    /* 007acfec: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007acff0: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 007acff3: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 007acff6: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007acffa: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7acfffu); f_0083173c();
    /* 007acfff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ad001: fld dword ptr [0x97dbc0] */ FPUSH(R_F32((u32)(0x97dbc0u)));
    /* 007ad007: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007ad00b: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 007ad00e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007ad010: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 007ad013: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007ad017: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 007ad01a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007ad01c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007ad01f: fadd dword ptr [ebx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30u));
    /* 007ad022: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007ad024: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ad026: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 007ad029: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 007ad02c: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 007ad02f: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 007ad032: mov edx, dword ptr [ebx + 0xa0] */ r_edx = R32((u32)(r_ebx+0xa0u));
    /* 007ad038: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 007ad03b: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007ad041: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 007ad044: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
    /* 007ad04a: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 007ad04d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007ad051: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad054: jge 0x7ad0e9 */ if ((fS==fO)) goto L_007ad0e9;
L_007ad05a:; BB(0x007ad05a);
    /* 007ad05a: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007ad060: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad062: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007ad064: jle 0x7ad15f */ if ((fZ||fS!=fO)) goto L_007ad15f;
L_007ad06a:; BB(0x007ad06a);
    /* 007ad06a: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007ad06e: mov ebx, eax */ r_ebx = r_eax;
    /* 007ad070: mov ebp, edx */ r_ebp = r_edx;
L_007ad072:; BB(0x007ad072);
    /* 007ad072: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 007ad079: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad07b: je 0x7ad0dc */ if (fZ) goto L_007ad0dc;
L_007ad07d:; BB(0x007ad07d);
    /* 007ad07d: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 007ad081: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007ad085: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad087: je 0x7ad0dc */ if (fZ) goto L_007ad0dc;
L_007ad089:; BB(0x007ad089);
    /* 007ad089: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad08e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ad08f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007ad093: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 007ad096: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x7ad09bu); f_007b65b4();
    /* 007ad09b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad09d: je 0x7ad0dc */ if (fZ) goto L_007ad0dc;
L_007ad09f:; BB(0x007ad09f);
    /* 007ad09f: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 007ad0a2: test ecx, 0x30000000 */ {  u32 a = r_ecx; u32 b = 0x30000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad0a8: je 0x7ad0dc */ if (fZ) goto L_007ad0dc;
L_007ad0aa:; BB(0x007ad0aa);
    /* 007ad0aa: mov ecx, dword ptr [0xaaba00] */ r_ecx = R32((u32)(0xaaba00u));
    /* 007ad0b0: mov dword ptr [ecx*4 + 0xaab9c0], eax */ W32((u32)(r_ecx*4+0xaab9c0u), r_eax);
    /* 007ad0b7: mov ecx, dword ptr [0xaaba00] */ r_ecx = R32((u32)(0xaaba00u));
    /* 007ad0bd: mov dword ptr [ecx*4 + 0xaab980], esi */ W32((u32)(r_ecx*4+0xaab980u), r_esi);
    /* 007ad0c4: mov ecx, dword ptr [0xaaba00] */ r_ecx = R32((u32)(0xaaba00u));
    /* 007ad0ca: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ad0cd: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad0d0: jge 0x7ad5ba */ if ((fS==fO)) goto L_007ad5ba;
L_007ad0d6:; BB(0x007ad0d6);
    /* 007ad0d6: mov dword ptr [0xaaba00], ecx */ W32((u32)(0xaaba00u), r_ecx);
L_007ad0dc:; BB(0x007ad0dc);
    /* 007ad0dc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ad0df: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad0e1: jl 0x7ad072 */ if ((fS!=fO)) goto L_007ad072;
L_007ad0e3:; BB(0x007ad0e3);
    /* 007ad0e3: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007ad0e7: jmp 0x7ad15f */ goto L_007ad15f;
L_007ad0e9:; BB(0x007ad0e9);
    /* 007ad0e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad0eb: mov ebp, eax */ r_ebp = r_eax;
L_007ad0ed:; BB(0x007ad0ed);
    /* 007ad0ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ad0ee: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7ad0f3u); f_007b4d18();
    /* 007ad0f3: mov esi, eax */ r_esi = r_eax;
    /* 007ad0f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ad0f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad0fa: je 0x7ad157 */ if (fZ) goto L_007ad157;
L_007ad0fc:; BB(0x007ad0fc);
    /* 007ad0fc: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 007ad100: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007ad104: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad106: je 0x7ad157 */ if (fZ) goto L_007ad157;
L_007ad108:; BB(0x007ad108);
    /* 007ad108: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad10d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ad10e: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 007ad111: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x7ad116u); f_007b65b4();
    /* 007ad116: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad118: je 0x7ad157 */ if (fZ) goto L_007ad157;
L_007ad11a:; BB(0x007ad11a);
    /* 007ad11a: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007ad11d: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad123: je 0x7ad157 */ if (fZ) goto L_007ad157;
L_007ad125:; BB(0x007ad125);
    /* 007ad125: mov edx, dword ptr [0xaaba00] */ r_edx = R32((u32)(0xaaba00u));
    /* 007ad12b: mov dword ptr [edx*4 + 0xaab9c0], eax */ W32((u32)(r_edx*4+0xaab9c0u), r_eax);
    /* 007ad132: mov edx, dword ptr [0xaaba00] */ r_edx = R32((u32)(0xaaba00u));
    /* 007ad138: mov dword ptr [edx*4 + 0xaab980], esi */ W32((u32)(r_edx*4+0xaab980u), r_esi);
    /* 007ad13f: mov edx, dword ptr [0xaaba00] */ r_edx = R32((u32)(0xaaba00u));
    /* 007ad145: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007ad148: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad14b: jge 0x7ad5cd */ if ((fS==fO)) goto L_007ad5cd;
L_007ad151:; BB(0x007ad151);
    /* 007ad151: mov dword ptr [0xaaba00], edx */ W32((u32)(0xaaba00u), r_edx);
L_007ad157:; BB(0x007ad157);
    /* 007ad157: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ad15a: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad15d: jl 0x7ad0ed */ if ((fS!=fO)) goto L_007ad0ed;
L_007ad15f:; BB(0x007ad15f);
    /* 007ad15f: mov edi, 0xaab980 */ r_edi = 0xaab980u;
    /* 007ad164: jmp 0x7ad588 */ goto L_007ad588;
L_007ad169:; BB(0x007ad169);
    /* 007ad169: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad16c: jne 0x7ad383 */ if (!fZ) goto L_007ad383;
L_007ad172:; BB(0x007ad172);
    /* 007ad172: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 007ad175: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 007ad178: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 007ad17b: fld dword ptr [ebx + 0x74] */ FPUSH(R_F32((u32)(r_ebx+0x74u)));
    /* 007ad17e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ad180: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ad184: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007ad188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007ad18b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad18d: mov dword ptr [0xaab980], eax */ W32((u32)(0xaab980u), r_eax);
    /* 007ad192: mov dword ptr [0xaab9c0], eax */ W32((u32)(0xaab9c0u), r_eax);
    /* 007ad197: mov dword ptr [0xaab984], eax */ W32((u32)(0xaab984u), r_eax);
    /* 007ad19c: mov dword ptr [0xaab9c4], eax */ W32((u32)(0xaab9c4u), r_eax);
    /* 007ad1a1: mov dword ptr [0xaab988], eax */ W32((u32)(0xaab988u), r_eax);
    /* 007ad1a6: mov dword ptr [0xaab9c8], eax */ W32((u32)(0xaab9c8u), r_eax);
    /* 007ad1ab: mov dword ptr [0xaab98c], eax */ W32((u32)(0xaab98cu), r_eax);
    /* 007ad1b0: mov dword ptr [0xaab9cc], eax */ W32((u32)(0xaab9ccu), r_eax);
    /* 007ad1b5: mov dword ptr [0xaab990], eax */ W32((u32)(0xaab990u), r_eax);
    /* 007ad1ba: mov dword ptr [0xaab9d0], eax */ W32((u32)(0xaab9d0u), r_eax);
    /* 007ad1bf: mov dword ptr [0xaab994], eax */ W32((u32)(0xaab994u), r_eax);
    /* 007ad1c4: mov dword ptr [0xaab9d4], eax */ W32((u32)(0xaab9d4u), r_eax);
    /* 007ad1c9: mov dword ptr [0xaab998], eax */ W32((u32)(0xaab998u), r_eax);
    /* 007ad1ce: mov dword ptr [0xaab9d8], eax */ W32((u32)(0xaab9d8u), r_eax);
    /* 007ad1d3: mov dword ptr [0xaab99c], eax */ W32((u32)(0xaab99cu), r_eax);
    /* 007ad1d8: mov dword ptr [0xaab9dc], eax */ W32((u32)(0xaab9dcu), r_eax);
    /* 007ad1dd: mov dword ptr [0xaab9a0], eax */ W32((u32)(0xaab9a0u), r_eax);
    /* 007ad1e2: mov dword ptr [0xaab9e0], eax */ W32((u32)(0xaab9e0u), r_eax);
    /* 007ad1e7: mov dword ptr [0xaab9a4], eax */ W32((u32)(0xaab9a4u), r_eax);
    /* 007ad1ec: mov dword ptr [0xaab9e4], eax */ W32((u32)(0xaab9e4u), r_eax);
    /* 007ad1f1: mov dword ptr [0xaab9a8], eax */ W32((u32)(0xaab9a8u), r_eax);
    /* 007ad1f6: mov dword ptr [0xaab9e8], eax */ W32((u32)(0xaab9e8u), r_eax);
    /* 007ad1fb: mov dword ptr [0xaab9ac], eax */ W32((u32)(0xaab9acu), r_eax);
    /* 007ad200: mov dword ptr [0xaab9ec], eax */ W32((u32)(0xaab9ecu), r_eax);
    /* 007ad205: mov dword ptr [0xaab9b0], eax */ W32((u32)(0xaab9b0u), r_eax);
    /* 007ad20a: mov dword ptr [0xaab9f0], eax */ W32((u32)(0xaab9f0u), r_eax);
    /* 007ad20f: mov dword ptr [0xaab9b4], eax */ W32((u32)(0xaab9b4u), r_eax);
    /* 007ad214: mov dword ptr [0xaab9f4], eax */ W32((u32)(0xaab9f4u), r_eax);
    /* 007ad219: mov dword ptr [0xaab9b8], eax */ W32((u32)(0xaab9b8u), r_eax);
    /* 007ad21e: mov dword ptr [0xaab9f8], eax */ W32((u32)(0xaab9f8u), r_eax);
    /* 007ad223: mov dword ptr [0xaab9bc], eax */ W32((u32)(0xaab9bcu), r_eax);
    /* 007ad228: mov dword ptr [0xaab9fc], eax */ W32((u32)(0xaab9fcu), r_eax);
    /* 007ad22d: mov dword ptr [0xaaba00], eax */ W32((u32)(0xaaba00u), r_eax);
    /* 007ad232: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 007ad235: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad237: je 0x7ad5fc */ if (fZ) goto L_007ad5fc;
L_007ad23d:; BB(0x007ad23d);
    /* 007ad23d: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 007ad241: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 007ad244: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 007ad248: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ad24c: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 007ad24f: fsubr dword ptr [esp + 4] */ ST(0) = R_F32((u32)(r_esp+0x4u)) - ST(0);
    /* 007ad253: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ad257: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 007ad25a: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 007ad25d: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ad261: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7ad266u); f_0083173c();
    /* 007ad266: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ad268: fld dword ptr [0x97dbc0] */ FPUSH(R_F32((u32)(0x97dbc0u)));
    /* 007ad26e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007ad272: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 007ad275: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007ad277: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 007ad27a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007ad27e: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 007ad281: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007ad283: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007ad286: fadd dword ptr [ebx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30u));
    /* 007ad289: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007ad28b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ad28d: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 007ad290: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 007ad293: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 007ad296: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 007ad299: mov edx, dword ptr [ebx + 0xa0] */ r_edx = R32((u32)(r_ebx+0xa0u));
    /* 007ad29f: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 007ad2a2: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007ad2a8: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 007ad2ab: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
    /* 007ad2b1: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 007ad2b4: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007ad2ba: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007ad2bf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad2c1: jge 0x7ad379 */ if ((fS==fO)) goto L_007ad379;
L_007ad2c7:; BB(0x007ad2c7);
    /* 007ad2c7: mov esi, edx */ r_esi = r_edx;
L_007ad2c9:; BB(0x007ad2c9);
    /* 007ad2c9: mov ebp, dword ptr [esi*4 + 0xaad720] */ r_ebp = R32((u32)(r_esi*4+0xaad720u));
    /* 007ad2d0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad2d2: je 0x7ad36e */ if (fZ) goto L_007ad36e;
L_007ad2d8:; BB(0x007ad2d8);
    /* 007ad2d8: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007ad2db: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad2e1: jne 0x7ad317 */ if (!fZ) goto L_007ad317;
L_007ad2e3:; BB(0x007ad2e3);
    /* 007ad2e3: test edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad2e9: je 0x7ad36e */ if (fZ) goto L_007ad36e;
L_007ad2ef:; BB(0x007ad2ef);
    /* 007ad2ef: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad2f5: jne 0x7ad36e */ if (!fZ) goto L_007ad36e;
L_007ad2f7:; BB(0x007ad2f7);
    /* 007ad2f7: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad2fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ad2fd: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 007ad300: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x7ad305u); f_007b65b4();
    /* 007ad305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad307: je 0x7ad310 */ if (fZ) goto L_007ad310;
L_007ad309:; BB(0x007ad309);
    /* 007ad309: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007ad30b: jmp 0x7ad588 */ goto L_007ad588;
L_007ad310:; BB(0x007ad310);
    /* 007ad310: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007ad315: jmp 0x7ad36e */ goto L_007ad36e;
L_007ad317:; BB(0x007ad317);
    /* 007ad317: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007ad31b: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 007ad31f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad321: je 0x7ad36e */ if (fZ) goto L_007ad36e;
L_007ad323:; BB(0x007ad323);
    /* 007ad323: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad328: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ad329: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 007ad32c: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x7ad331u); f_007b65b4();
    /* 007ad331: mov edx, eax */ r_edx = r_eax;
    /* 007ad333: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad335: je 0x7ad5f2 */ if (fZ) goto L_007ad5f2;
L_007ad33b:; BB(0x007ad33b);
    /* 007ad33b: mov eax, dword ptr [0xaaba00] */ r_eax = R32((u32)(0xaaba00u));
    /* 007ad340: mov dword ptr [eax*4 + 0xaab9c0], edx */ W32((u32)(r_eax*4+0xaab9c0u), r_edx);
    /* 007ad347: mov eax, dword ptr [0xaaba00] */ r_eax = R32((u32)(0xaaba00u));
    /* 007ad34c: mov dword ptr [eax*4 + 0xaab980], ebp */ W32((u32)(r_eax*4+0xaab980u), r_ebp);
    /* 007ad353: mov eax, dword ptr [0xaaba00] */ r_eax = R32((u32)(0xaaba00u));
    /* 007ad358: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ad35b: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad35e: jge 0x7ad5e3 */ if ((fS==fO)) goto L_007ad5e3;
L_007ad364:; BB(0x007ad364);
    /* 007ad364: mov dword ptr [0xaaba00], eax */ W32((u32)(0xaaba00u), r_eax);
    /* 007ad369: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_007ad36e:; BB(0x007ad36e);
    /* 007ad36e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007ad371: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad373: jl 0x7ad2c9 */ if ((fS!=fO)) goto L_007ad2c9;
L_007ad379:; BB(0x007ad379);
    /* 007ad379: mov edi, 0xaab980 */ r_edi = 0xaab980u;
    /* 007ad37e: jmp 0x7ad588 */ goto L_007ad588;
L_007ad383:; BB(0x007ad383);
    /* 007ad383: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 007ad386: fld dword ptr [ebx + 0x6c] */ FPUSH(R_F32((u32)(r_ebx+0x6cu)));
    /* 007ad389: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 007ad38c: fld dword ptr [ebx + 0x74] */ FPUSH(R_F32((u32)(r_ebx+0x74u)));
    /* 007ad38f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ad391: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ad395: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007ad398: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007ad39c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ad39e: mov dword ptr [0xaab980], eax */ W32((u32)(0xaab980u), r_eax);
    /* 007ad3a3: mov dword ptr [0xaab9c0], eax */ W32((u32)(0xaab9c0u), r_eax);
    /* 007ad3a8: mov dword ptr [0xaab984], eax */ W32((u32)(0xaab984u), r_eax);
    /* 007ad3ad: mov dword ptr [0xaab9c4], eax */ W32((u32)(0xaab9c4u), r_eax);
    /* 007ad3b2: mov dword ptr [0xaab988], eax */ W32((u32)(0xaab988u), r_eax);
    /* 007ad3b7: mov dword ptr [0xaab9c8], eax */ W32((u32)(0xaab9c8u), r_eax);
    /* 007ad3bc: mov dword ptr [0xaab98c], eax */ W32((u32)(0xaab98cu), r_eax);
    /* 007ad3c1: mov dword ptr [0xaab9cc], eax */ W32((u32)(0xaab9ccu), r_eax);
    /* 007ad3c6: mov dword ptr [0xaab990], eax */ W32((u32)(0xaab990u), r_eax);
    /* 007ad3cb: mov dword ptr [0xaab9d0], eax */ W32((u32)(0xaab9d0u), r_eax);
    /* 007ad3d0: mov dword ptr [0xaab994], eax */ W32((u32)(0xaab994u), r_eax);
    /* 007ad3d5: mov dword ptr [0xaab9d4], eax */ W32((u32)(0xaab9d4u), r_eax);
    /* 007ad3da: mov dword ptr [0xaab998], eax */ W32((u32)(0xaab998u), r_eax);
    /* 007ad3df: mov dword ptr [0xaab9d8], eax */ W32((u32)(0xaab9d8u), r_eax);
    /* 007ad3e4: mov dword ptr [0xaab99c], eax */ W32((u32)(0xaab99cu), r_eax);
    /* 007ad3e9: mov dword ptr [0xaab9dc], eax */ W32((u32)(0xaab9dcu), r_eax);
    /* 007ad3ee: mov dword ptr [0xaab9a0], eax */ W32((u32)(0xaab9a0u), r_eax);
    /* 007ad3f3: mov dword ptr [0xaab9e0], eax */ W32((u32)(0xaab9e0u), r_eax);
    /* 007ad3f8: mov dword ptr [0xaab9a4], eax */ W32((u32)(0xaab9a4u), r_eax);
    /* 007ad3fd: mov dword ptr [0xaab9e4], eax */ W32((u32)(0xaab9e4u), r_eax);
    /* 007ad402: mov dword ptr [0xaab9a8], eax */ W32((u32)(0xaab9a8u), r_eax);
    /* 007ad407: mov dword ptr [0xaab9e8], eax */ W32((u32)(0xaab9e8u), r_eax);
    /* 007ad40c: mov dword ptr [0xaab9ac], eax */ W32((u32)(0xaab9acu), r_eax);
    /* 007ad411: mov dword ptr [0xaab9ec], eax */ W32((u32)(0xaab9ecu), r_eax);
    /* 007ad416: mov dword ptr [0xaab9b0], eax */ W32((u32)(0xaab9b0u), r_eax);
    /* 007ad41b: mov dword ptr [0xaab9f0], eax */ W32((u32)(0xaab9f0u), r_eax);
    /* 007ad420: mov dword ptr [0xaab9b4], eax */ W32((u32)(0xaab9b4u), r_eax);
    /* 007ad425: mov dword ptr [0xaab9f4], eax */ W32((u32)(0xaab9f4u), r_eax);
    /* 007ad42a: mov dword ptr [0xaab9b8], eax */ W32((u32)(0xaab9b8u), r_eax);
    /* 007ad42f: mov dword ptr [0xaab9f8], eax */ W32((u32)(0xaab9f8u), r_eax);
    /* 007ad434: mov dword ptr [0xaab9bc], eax */ W32((u32)(0xaab9bcu), r_eax);
    /* 007ad439: mov dword ptr [0xaab9fc], eax */ W32((u32)(0xaab9fcu), r_eax);
    /* 007ad43e: mov dword ptr [0xaaba00], eax */ W32((u32)(0xaaba00u), r_eax);
    /* 007ad443: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 007ad446: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad448: je 0x7ad62d */ if (fZ) goto L_007ad62d;
L_007ad44e:; BB(0x007ad44e);
    /* 007ad44e: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 007ad452: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 007ad455: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 007ad459: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007ad45d: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 007ad460: fsubr dword ptr [esp] */ ST(0) = R_F32((u32)(r_esp)) - ST(0);
    /* 007ad463: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007ad467: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 007ad46a: fsubr dword ptr [esp + 4] */ ST(0) = R_F32((u32)(r_esp+0x4u)) - ST(0);
    /* 007ad46e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ad472: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7ad477u); f_0083173c();
    /* 007ad477: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ad479: fld dword ptr [0x97dbc0] */ FPUSH(R_F32((u32)(0x97dbc0u)));
    /* 007ad47f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007ad483: fadd dword ptr [ebx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x28u));
    /* 007ad486: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007ad488: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 007ad48b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007ad48e: fadd dword ptr [ebx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2cu));
    /* 007ad491: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007ad493: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007ad497: fadd dword ptr [ebx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30u));
    /* 007ad49a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007ad49c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ad49e: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 007ad4a1: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 007ad4a4: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 007ad4a7: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 007ad4aa: mov edx, dword ptr [ebx + 0xa0] */ r_edx = R32((u32)(r_ebx+0xa0u));
    /* 007ad4b0: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 007ad4b3: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 007ad4b9: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 007ad4bc: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
    /* 007ad4c2: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 007ad4c5: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007ad4ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ad4cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007ad4ce: jle 0x7ad583 */ if ((fZ||fS!=fO)) goto L_007ad583;
L_007ad4d4:; BB(0x007ad4d4);
    /* 007ad4d4: mov esi, edx */ r_esi = r_edx;
L_007ad4d6:; BB(0x007ad4d6);
    /* 007ad4d6: mov ebp, dword ptr [esi*4 + 0xaad720] */ r_ebp = R32((u32)(r_esi*4+0xaad720u));
    /* 007ad4dd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad4df: je 0x7ad578 */ if (fZ) goto L_007ad578;
L_007ad4e5:; BB(0x007ad4e5);
    /* 007ad4e5: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007ad4e8: test edx, 0x30000000 */ {  u32 a = r_edx; u32 b = 0x30000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad4ee: jne 0x7ad521 */ if (!fZ) goto L_007ad521;
L_007ad4f0:; BB(0x007ad4f0);
    /* 007ad4f0: test edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad4f6: je 0x7ad578 */ if (fZ) goto L_007ad578;
L_007ad4fc:; BB(0x007ad4fc);
    /* 007ad4fc: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad502: jne 0x7ad578 */ if (!fZ) goto L_007ad578;
L_007ad504:; BB(0x007ad504);
    /* 007ad504: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad509: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ad50a: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 007ad50d: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x7ad512u); f_007b65b4();
    /* 007ad512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad514: je 0x7ad51a */ if (fZ) goto L_007ad51a;
L_007ad516:; BB(0x007ad516);
    /* 007ad516: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007ad518: jmp 0x7ad588 */ goto L_007ad588;
L_007ad51a:; BB(0x007ad51a);
    /* 007ad51a: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007ad51f: jmp 0x7ad578 */ goto L_007ad578;
L_007ad521:; BB(0x007ad521);
    /* 007ad521: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007ad525: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 007ad529: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad52b: je 0x7ad578 */ if (fZ) goto L_007ad578;
L_007ad52d:; BB(0x007ad52d);
    /* 007ad52d: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ad532: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ad533: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 007ad536: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x7ad53bu); f_007b65b4();
    /* 007ad53b: mov edx, eax */ r_edx = r_eax;
    /* 007ad53d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad53f: je 0x7ad623 */ if (fZ) goto L_007ad623;
L_007ad545:; BB(0x007ad545);
    /* 007ad545: mov eax, dword ptr [0xaaba00] */ r_eax = R32((u32)(0xaaba00u));
    /* 007ad54a: mov dword ptr [eax*4 + 0xaab9c0], edx */ W32((u32)(r_eax*4+0xaab9c0u), r_edx);
    /* 007ad551: mov eax, dword ptr [0xaaba00] */ r_eax = R32((u32)(0xaaba00u));
    /* 007ad556: mov dword ptr [eax*4 + 0xaab980], ebp */ W32((u32)(r_eax*4+0xaab980u), r_ebp);
    /* 007ad55d: mov eax, dword ptr [0xaaba00] */ r_eax = R32((u32)(0xaaba00u));
    /* 007ad562: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ad565: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad568: jge 0x7ad614 */ if ((fS==fO)) goto L_007ad614;
L_007ad56e:; BB(0x007ad56e);
    /* 007ad56e: mov dword ptr [0xaaba00], eax */ W32((u32)(0xaaba00u), r_eax);
    /* 007ad573: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_007ad578:; BB(0x007ad578);
    /* 007ad578: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007ad57b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ad57d: jl 0x7ad4d6 */ if ((fS!=fO)) goto L_007ad4d6;
L_007ad583:; BB(0x007ad583);
    /* 007ad583: mov edi, 0xaab980 */ r_edi = 0xaab980u;
L_007ad588:; BB(0x007ad588);
    /* 007ad588: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad58a: je 0x7ad603 */ if (fZ) goto L_007ad603;
L_007ad58c:; BB(0x007ad58c);
    /* 007ad58c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007ad58e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad590: je 0x7ad5b0 */ if (fZ) goto L_007ad5b0;
L_007ad592:; BB(0x007ad592);
    /* 007ad592: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 007ad599: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad59c: jne 0x7ad5b0 */ if (!fZ) goto L_007ad5b0;
L_007ad59e:; BB(0x007ad59e);
    /* 007ad59e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ad5a0: je 0x7ad5b0 */ if (fZ) goto L_007ad5b0;
L_007ad5a2:; BB(0x007ad5a2);
    /* 007ad5a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ad5a3: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 007ad5a6: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 007ad5a8: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 007ad5ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ad5ad: call dword ptr [edi + 0x1c] */ { u32 t = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, 0x7ad5b0u); call_ind(t); }
L_007ad5b0:; BB(0x007ad5b0);
    /* 007ad5b0: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ad5b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ad5b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ad5b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ad5b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ad5b7: ret 4 */ FN_RET(0x007acee8); r_esp += 8; return;
L_007ad5ba:; BB(0x007ad5ba);
    /* 007ad5ba: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007ad5be: mov dword ptr [0xaaba00], 0xf */ W32((u32)(0xaaba00u), 0xfu);
    /* 007ad5c8: jmp 0x7ad15f */ goto L_007ad15f;
L_007ad5cd:; BB(0x007ad5cd);
    /* 007ad5cd: mov dword ptr [0xaaba00], 0xf */ W32((u32)(0xaaba00u), 0xfu);
    /* 007ad5d7: jmp 0x7ad15f */ goto L_007ad15f;
L_007ad5dc:; BB(0x007ad5dc);
    /* 007ad5dc: mov edi, 0xaab980 */ r_edi = 0xaab980u;
    /* 007ad5e1: jmp 0x7ad588 */ goto L_007ad588;
L_007ad5e3:; BB(0x007ad5e3);
    /* 007ad5e3: mov dword ptr [0xaaba00], 0xf */ W32((u32)(0xaaba00u), 0xfu);
    /* 007ad5ed: jmp 0x7ad379 */ goto L_007ad379;
L_007ad5f2:; BB(0x007ad5f2);
    /* 007ad5f2: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007ad5f7: jmp 0x7ad36e */ goto L_007ad36e;
L_007ad5fc:; BB(0x007ad5fc);
    /* 007ad5fc: mov edi, 0xaab980 */ r_edi = 0xaab980u;
    /* 007ad601: jmp 0x7ad588 */ goto L_007ad588;
L_007ad603:; BB(0x007ad603);
    /* 007ad603: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007ad605: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ad607: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x7ad60au); call_ind(t); }
    /* 007ad60a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ad60d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ad60e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ad60f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ad610: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ad611: ret 4 */ FN_RET(0x007acee8); r_esp += 8; return;
L_007ad614:; BB(0x007ad614);
    /* 007ad614: mov dword ptr [0xaaba00], 0xf */ W32((u32)(0xaaba00u), 0xfu);
    /* 007ad61e: jmp 0x7ad583 */ goto L_007ad583;
L_007ad623:; BB(0x007ad623);
    /* 007ad623: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007ad628: jmp 0x7ad578 */ goto L_007ad578;
L_007ad62d:; BB(0x007ad62d);
    /* 007ad62d: mov edi, 0xaab980 */ r_edi = 0xaab980u;
    /* 007ad632: jmp 0x7ad588 */ goto L_007ad588;
L_007ad637:; BB(0x007ad637);
    /* 007ad637: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 007ad63b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ad640: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 007ad644: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ad647: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ad648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ad649: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ad64a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ad64b: ret 4 */ FN_RET(0x007acee8); r_esp += 8; return;
}

