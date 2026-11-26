#include "protos.h"

void f_0044e08c(void)
{
    FN_ENTER(0x0044e08c);
    /* 0044e08c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e08d: mov edi, ecx */ r_edi = r_ecx;
    /* 0044e08f: mov eax, dword ptr [0xa44db0] */ r_eax = R32((u32)(0xa44db0u));
    /* 0044e094: mov dword ptr [0xa44d68], 2 */ W32((u32)(0xa44d68u), 0x2u);
    /* 0044e09e: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0044e0a4: mov ecx, edi */ r_ecx = r_edi;
    /* 0044e0a6: call 0x44c090 */ r_esp -= 4; W32(r_esp, 0x44e0abu); f_0044c090();
    /* 0044e0ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0ad: mov ecx, edi */ r_ecx = r_edi;
    /* 0044e0af: call 0x44c674 */ r_esp -= 4; W32(r_esp, 0x44e0b4u); f_0044c674();
    /* 0044e0b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044e0b5: ret  */ FN_RET(0x0044e08c); r_esp += 4; return;
}

void f_0044e0b8(void)
{
    FN_ENTER(0x0044e0b8);
    /* 0044e0b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0b9: mov edi, ecx */ r_edi = r_ecx;
    /* 0044e0bb: mov ecx, edi */ r_ecx = r_edi;
    /* 0044e0bd: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44e0c2u); f_0048dc3c();
    /* 0044e0c2: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044e0c8: lea eax, [edi + 0x3a4] */ r_eax = (u32)(r_edi+0x3a4u);
    /* 0044e0ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0d0: call 0x45072c */ r_esp -= 4; W32(r_esp, 0x44e0d5u); f_0045072c();
    /* 0044e0d5: push 0x8ff604 */ { u32 v = 0x8ff604u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0da: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x44e0dfu); f_00814afc();
    /* 0044e0df: mov eax, dword ptr [0xa44dac] */ r_eax = R32((u32)(0xa44dacu));
    /* 0044e0e4: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0044e0ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044e0ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044e0ee: ret  */ FN_RET(0x0044e0b8); r_esp += 4; return;
}

void f_0044e0f0(void)
{
    FN_ENTER(0x0044e0f0);
    /* 0044e0f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e0f1: mov edi, ecx */ r_edi = r_ecx;
    /* 0044e0f3: mov ecx, edi */ r_ecx = r_edi;
    /* 0044e0f5: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44e0fau); f_0048dc3c();
    /* 0044e0fa: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044e100: lea eax, [edi + 0x3a4] */ r_eax = (u32)(r_edi+0x3a4u);
    /* 0044e106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e107: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e108: call 0x44ffd8 */ r_esp -= 4; W32(r_esp, 0x44e10du); f_0044ffd8();
    /* 0044e10d: mov eax, dword ptr [0xa44eb8] */ r_eax = R32((u32)(0xa44eb8u));
    /* 0044e112: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0044e118: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044e11b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044e11c: ret  */ FN_RET(0x0044e0f0); r_esp += 4; return;
}

void f_0044e120(void) /* sub_44E120 */
{
    FN_ENTER(0x0044e120);
    /* 0044e120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e122: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e123: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e124: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e127: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044e129: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044e12b: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44e130u); f_0048dc3c();
    /* 0044e130: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x44e135u); f_00815434();
    /* 0044e135: mov ebp, dword ptr [0xa44d60] */ r_ebp = R32((u32)(0xa44d60u));
    /* 0044e13b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e13d: je 0x44e2af */ if (fZ) goto L_0044e2af;
L_0044e143:; BB(0x0044e143);
    /* 0044e143: movzx eax, byte ptr [0xa44d94] */ r_eax = (u32)R8((u32)(0xa44d94u));
    /* 0044e14a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044e14c: jne 0x44e162 */ if (!fZ) goto L_0044e162;
L_0044e14e:; BB(0x0044e14e);
    /* 0044e14e: mov dword ptr [0xa44d98], 0x42960000 */ W32((u32)(0xa44d98u), 0x42960000u);
    /* 0044e158: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044e15d: mov byte ptr [0xa44d94], al */ W8((u32)(0xa44d94u), (u8)r_eax);
L_0044e162:; BB(0x0044e162);
    /* 0044e162: mov esi, dword ptr [ebp + 0x38] */ r_esi = R32((u32)(r_ebp+0x38u));
    /* 0044e165: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0044e16d: mov dword ptr [ebx + 0x3a4], esi */ W32((u32)(r_ebx+0x3a4u), r_esi);
    /* 0044e173: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0044e176: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0044e179: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044e17c: mov dword ptr [ebx + 0x3a8], edx */ W32((u32)(r_ebx+0x3a8u), r_edx);
    /* 0044e182: mov ebp, dword ptr [ebp + 0x40] */ r_ebp = R32((u32)(r_ebp+0x40u));
    /* 0044e185: mov dword ptr [ebx + 0x3ac], ebp */ W32((u32)(r_ebx+0x3acu), r_ebp);
    /* 0044e18b: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0044e18f: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x44e194u); f_0082df08();
    /* 0044e194: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044e196: fld dword ptr [0xa44d98] */ FPUSH(R_F32((u32)(0xa44d98u)));
    /* 0044e19c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0044e19f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0044e1a3: mov eax, dword ptr [0xa44d60] */ r_eax = R32((u32)(0xa44d60u));
    /* 0044e1a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044e1aa: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0044e1ac: fsubr dword ptr [ebx + 0x3a4] */ ST(0) = R_F32((u32)(r_ebx+0x3a4u)) - ST(0);
    /* 0044e1b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044e1b4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0044e1b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044e1b8: fsubr dword ptr [ebx + 0x3ac] */ ST(0) = R_F32((u32)(r_ebx+0x3acu)) - ST(0);
    /* 0044e1be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044e1c0: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 0044e1c6: fstp dword ptr [ebx + 0x3ac] */ W_F32((u32)(r_ebx+0x3acu), ST(0)); FPOP();
    /* 0044e1cc: mov dword ptr [ebx + 0x3a8], 0 */ W32((u32)(r_ebx+0x3a8u), 0x0u);
    /* 0044e1d6: mov ebp, dword ptr [eax + 0x60] */ r_ebp = R32((u32)(r_eax+0x60u));
    /* 0044e1d9: mov dword ptr [ebx + 0x3b0], ebp */ W32((u32)(r_ebx+0x3b0u), r_ebp);
L_0044e1df:; BB(0x0044e1df);
    /* 0044e1df: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0044e1e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044e1e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e1e8: je 0x44e1ef */ if (fZ) goto L_0044e1ef;
L_0044e1ea:; BB(0x0044e1ea);
    /* 0044e1ea: mov edx, 1 */ r_edx = 0x1u;
L_0044e1ef:; BB(0x0044e1ef);
    /* 0044e1ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e1f1: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 0044e1f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e1f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e1f9: call 0x44fa8c */ r_esp -= 4; W32(r_esp, 0x44e1feu); f_0044fa8c();
    /* 0044e1fe: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e200: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x44e205u); f_006bb100();
    /* 0044e205: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e208: mov edi, dword ptr [0xa44d60] */ r_edi = R32((u32)(0xa44d60u));
    /* 0044e20e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e210: je 0x44e29c */ if (fZ) goto L_0044e29c;
L_0044e216:; BB(0x0044e216);
    /* 0044e216: movzx ebp, word ptr [edi + 0x2da] */ r_ebp = (u32)R16((u32)(r_edi+0x2dau));
    /* 0044e21d: mov word ptr [ebx + 0x2da], bp */ W16((u32)(r_ebx+0x2dau), (u16)r_ebp);
    /* 0044e224: movzx esi, word ptr [edi + 0x2d8] */ r_esi = (u32)R16((u32)(r_edi+0x2d8u));
    /* 0044e22b: mov word ptr [ebx + 0x2d8], si */ W16((u32)(r_ebx+0x2d8u), (u16)r_esi);
    /* 0044e232: movzx eax, word ptr [edi + 0xfc] */ r_eax = (u32)R16((u32)(r_edi+0xfcu));
    /* 0044e239: mov ebp, dword ptr [0xa44d60] */ r_ebp = R32((u32)(0xa44d60u));
    /* 0044e23f: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0044e244: movzx edx, word ptr [edi + 0xfe] */ r_edx = (u32)R16((u32)(r_edi+0xfeu));
    /* 0044e24b: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0044e250: movzx ecx, word ptr [edi + 0x100] */ r_ecx = (u32)R16((u32)(r_edi+0x100u));
    /* 0044e257: mov word ptr [esp + 0x10], cx */ W16((u32)(r_esp+0x10u), (u16)r_ecx);
    /* 0044e25c: movzx esi, word ptr [edi + 0x102] */ r_esi = (u32)R16((u32)(r_edi+0x102u));
    /* 0044e263: movzx edi, word ptr [ebp + 8] */ r_edi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0044e267: mov dword ptr [0xa44d60], 0 */ W32((u32)(0xa44d60u), 0x0u);
    /* 0044e271: mov word ptr [esp + 0x12], si */ W16((u32)(r_esp+0x12u), (u16)r_esi);
    /* 0044e276: or edi, 0xffff0001 */ {  u32 a = r_edi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0044e27c: mov word ptr [ebp + 8], di */ W16((u32)(r_ebp+0x8u), (u16)r_edi);
    /* 0044e280: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 0044e287: mov word ptr [ebx + 0xfe], dx */ W16((u32)(r_ebx+0xfeu), (u16)r_edx);
    /* 0044e28e: mov word ptr [ebx + 0x100], cx */ W16((u32)(r_ebx+0x100u), (u16)r_ecx);
    /* 0044e295: mov word ptr [ebx + 0x102], si */ W16((u32)(r_ebx+0x102u), (u16)r_esi);
L_0044e29c:; BB(0x0044e29c);
    /* 0044e29c: mov eax, dword ptr [0xa44eb4] */ r_eax = R32((u32)(0xa44eb4u));
    /* 0044e2a1: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0044e2a7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044e2aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044e2ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e2ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044e2ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044e2ae: ret  */ FN_RET(0x0044e120); r_esp += 4; return;
L_0044e2af:; BB(0x0044e2af);
    /* 0044e2af: mov dword ptr [ebx + 0x3ac], 0 */ W32((u32)(r_ebx+0x3acu), 0x0u);
    /* 0044e2b9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0044e2bb: mov dword ptr [ebx + 0x3a8], 0 */ W32((u32)(r_ebx+0x3a8u), 0x0u);
    /* 0044e2c5: mov dword ptr [ebx + 0x3a4], 0 */ W32((u32)(r_ebx+0x3a4u), 0x0u);
    /* 0044e2cf: mov dword ptr [ebx + 0x3b0], 0 */ W32((u32)(r_ebx+0x3b0u), 0x0u);
    /* 0044e2d9: jmp 0x44e1df */ goto L_0044e1df;
}

void f_0044e2e0(void) /* sub_44E2E0 */
{
    FN_ENTER(0x0044e2e0);
    /* 0044e2e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e2e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044e2e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044e2e5: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x44e2eau); f_0044bf4c();
    /* 0044e2ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044e2ec: call 0x44c1a4 */ r_esp -= 4; W32(r_esp, 0x44e2f1u); f_0044c1a4();
    /* 0044e2f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044e2f2: ret  */ FN_RET(0x0044e2e0); r_esp += 4; return;
}

void f_0044e2f4(void)
{
    FN_ENTER(0x0044e2f4);
    /* 0044e2f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e2f5: mov esi, ecx */ r_esi = r_ecx;
    /* 0044e2f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0044e2f9: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44e2feu); f_0048dc3c();
    /* 0044e2fe: mov eax, dword ptr [0xa44d64] */ r_eax = R32((u32)(0xa44d64u));
    /* 0044e303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e305: je 0x44e34d */ if (fZ) goto L_0044e34d;
L_0044e307:; BB(0x0044e307);
    /* 0044e307: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044e30a: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044e30d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e30e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e30f: call 0x44f4ec */ r_esp -= 4; W32(r_esp, 0x44e314u); f_0044f4ec();
    /* 0044e314: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044e317:; BB(0x0044e317);
    /* 0044e317: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e319: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x44e31eu); f_006bb100();
    /* 0044e31e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044e31f: mov edx, dword ptr [0xa44d64] */ r_edx = R32((u32)(0xa44d64u));
    /* 0044e325: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044e327: je 0x44e340 */ if (fZ) goto L_0044e340;
L_0044e329:; BB(0x0044e329);
    /* 0044e329: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044e32d: mov dword ptr [0xa44d64], 0 */ W32((u32)(0xa44d64u), 0x0u);
    /* 0044e337: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044e33c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0044e340:; BB(0x0044e340);
    /* 0044e340: mov eax, dword ptr [0xa44eb0] */ r_eax = R32((u32)(0xa44eb0u));
    /* 0044e345: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0044e34b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044e34c: ret  */ FN_RET(0x0044e2f4); r_esp += 4; return;
L_0044e34d:; BB(0x0044e34d);
    /* 0044e34d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e34f: push 0xa44d9c */ { u32 v = 0xa44d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e354: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e355: call 0x44f4ec */ r_esp -= 4; W32(r_esp, 0x44e35au); f_0044f4ec();
    /* 0044e35a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e35d: jmp 0x44e317 */ goto L_0044e317;
}

void f_0044e360(void) /* sub_44E360 */
{
    FN_ENTER(0x0044e360);
    /* 0044e360: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e361: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e364: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044e366: movzx eax, word ptr [0xa44ce2] */ r_eax = (u32)R16((u32)(0xa44ce2u));
    /* 0044e36d: movzx edx, word ptr [0xa44ce4] */ r_edx = (u32)R16((u32)(0xa44ce4u));
    /* 0044e374: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0044e377: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0044e37c: movzx eax, word ptr [0xa44cea] */ r_eax = (u32)R16((u32)(0xa44ceau));
    /* 0044e383: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0044e388: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0044e38d: movzx eax, word ptr [0xa44cec] */ r_eax = (u32)R16((u32)(0xa44cecu));
    /* 0044e394: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0044e399: movzx eax, word ptr [0xa44cee] */ r_eax = (u32)R16((u32)(0xa44ceeu));
    /* 0044e3a0: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0044e3a5: mov eax, dword ptr [0xa44cf0] */ r_eax = R32((u32)(0xa44cf0u));
    /* 0044e3aa: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044e3ae: mov eax, dword ptr [0xa44cf4] */ r_eax = R32((u32)(0xa44cf4u));
    /* 0044e3b3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0044e3b7: mov eax, dword ptr [0xa44cf8] */ r_eax = R32((u32)(0xa44cf8u));
    /* 0044e3bc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0044e3c0: mov eax, dword ptr [0xa44cfc] */ r_eax = R32((u32)(0xa44cfcu));
    /* 0044e3c5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0044e3c9: mov eax, dword ptr [0xa44d00] */ r_eax = R32((u32)(0xa44d00u));
    /* 0044e3ce: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0044e3d2: mov eax, dword ptr [0xa44d04] */ r_eax = R32((u32)(0xa44d04u));
    /* 0044e3d7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0044e3db: mov eax, dword ptr [0xa44d08] */ r_eax = R32((u32)(0xa44d08u));
    /* 0044e3e0: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0044e3e4: mov eax, dword ptr [0xa44d0c] */ r_eax = R32((u32)(0xa44d0cu));
    /* 0044e3e9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0044e3ed: mov eax, dword ptr [0xa44d10] */ r_eax = R32((u32)(0xa44d10u));
    /* 0044e3f2: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0044e3f6: mov eax, dword ptr [0xa44d14] */ r_eax = R32((u32)(0xa44d14u));
    /* 0044e3fb: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0044e3ff: mov eax, dword ptr [0xa44d18] */ r_eax = R32((u32)(0xa44d18u));
    /* 0044e404: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0044e408: movzx eax, word ptr [0xa44d1c] */ r_eax = (u32)R16((u32)(0xa44d1cu));
    /* 0044e40f: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 0044e414: movzx eax, word ptr [0xa44d1e] */ r_eax = (u32)R16((u32)(0xa44d1eu));
    /* 0044e41b: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0044e420: mov eax, 1 */ r_eax = 0x1u;
    /* 0044e425: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0044e42a: movzx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)R16((u32)(r_ebx+0x2cu));
    /* 0044e42e: add eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044e433: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0044e438: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0044e43c: add eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044e441: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0044e446: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044e449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e44a: call 0x457000 */ r_esp -= 4; W32(r_esp, 0x44e44fu); f_00457000();
    /* 0044e44f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044e450: mov dword ptr [0xa44d64], eax */ W32((u32)(0xa44d64u), r_eax);
    /* 0044e455: mov dword ptr [ebx + 0x388], 0 */ W32((u32)(r_ebx+0x388u), 0x0u);
    /* 0044e45f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044e461: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x44e466u); f_0044bf4c();
    /* 0044e466: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044e468: call 0x44c1a4 */ r_esp -= 4; W32(r_esp, 0x44e46du); f_0044c1a4();
    /* 0044e46d: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044e470: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044e471: ret  */ FN_RET(0x0044e360); r_esp += 4; return;
}

void f_0044e474(void) /* sub_44E474 */
{
    FN_ENTER(0x0044e474);
    /* 0044e474: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e475: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044e477: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044e479: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44e47eu); f_0048dc3c();
    /* 0044e47e: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x44e483u); f_00815434();
    /* 0044e483: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044e485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e487: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e488: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e48d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44e492u); f_00814298();
    /* 0044e492: mov dword ptr [ebx + 0x388], 0 */ W32((u32)(r_ebx+0x388u), 0x0u);
    /* 0044e49c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044e49f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044e4a0: ret  */ FN_RET(0x0044e474); r_esp += 4; return;
}

void f_0044e4a4(void)
{
    FN_ENTER(0x0044e4a4);
    /* 0044e4a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4a5: mov esi, ecx */ r_esi = r_ecx;
    /* 0044e4a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044e4a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4ac: push 0x369 */ { u32 v = 0x369u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44e4b6u); f_00814298();
    /* 0044e4b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e4b9: mov ecx, esi */ r_ecx = r_esi;
    /* 0044e4bb: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x44e4c0u); f_0044bf4c();
    /* 0044e4c0: mov ecx, esi */ r_ecx = r_esi;
    /* 0044e4c2: call 0x44c1a4 */ r_esp -= 4; W32(r_esp, 0x44e4c7u); f_0044c1a4();
    /* 0044e4c7: mov ecx, esi */ r_ecx = r_esi;
    /* 0044e4c9: call 0x44c430 */ r_esp -= 4; W32(r_esp, 0x44e4ceu); f_0044c430();
    /* 0044e4ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044e4cf: ret  */ FN_RET(0x0044e4a4); r_esp += 4; return;
}

void f_0044e4d0(void) /* sub_44E4D0 */
{
    FN_ENTER(0x0044e4d0);
    /* 0044e4d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044e4d3: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044e4d9: mov dword ptr [ebx + 0x388], 0x1e */ W32((u32)(r_ebx+0x388u), 0x1eu);
    /* 0044e4e3: mov dword ptr [0xa44d68], 1 */ W32((u32)(0xa44d68u), 0x1u);
    /* 0044e4ed: call 0x451b38 */ r_esp -= 4; W32(r_esp, 0x44e4f2u); f_00451b38();
    /* 0044e4f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044e4f3: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 0044e4f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044e4fb: call 0x44c1a4 */ r_esp -= 4; W32(r_esp, 0x44e500u); f_0044c1a4();
    /* 0044e500: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044e501: ret  */ FN_RET(0x0044e4d0); r_esp += 4; return;
}

void f_0044e504(void) /* sub_44E504 */
{
    FN_ENTER(0x0044e504);
    /* 0044e504: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e505: mov edi, ecx */ r_edi = r_ecx;
    /* 0044e507: mov ecx, edi */ r_ecx = r_edi;
    /* 0044e509: call 0x44bf88 */ r_esp -= 4; W32(r_esp, 0x44e50eu); f_0044bf88();
    /* 0044e50e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e510: mov ecx, edi */ r_ecx = r_edi;
    /* 0044e512: call 0x44c674 */ r_esp -= 4; W32(r_esp, 0x44e517u); f_0044c674();
    /* 0044e517: mov ecx, edi */ r_ecx = r_edi;
    /* 0044e519: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44e51eu); f_0048dc3c();
    /* 0044e51e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e51f: call 0x4513d4 */ r_esp -= 4; W32(r_esp, 0x44e524u); f_004513d4();
    /* 0044e524: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e526: call 0x815204 */ r_esp -= 4; W32(r_esp, 0x44e52bu); f_00815204();
    /* 0044e52b: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e52d: call 0x77bdd8 */ r_esp -= 4; W32(r_esp, 0x44e532u); f_0077bdd8();
    /* 0044e532: mov eax, dword ptr [0xa44eac] */ r_eax = R32((u32)(0xa44eacu));
    /* 0044e537: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0044e53d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044e540: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044e541: ret  */ FN_RET(0x0044e504); r_esp += 4; return;
}

void f_0044e544(void) /* sub_44E544 */
{
    FN_ENTER(0x0044e544);
    /* 0044e544: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e545: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e547: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e549: push 0x8ced64 */ { u32 v = 0x8ced64u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e54e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044e554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e555: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044e55c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e55f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044e562: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0044e565: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0044e568: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0044e56b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044e56e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044e571: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044e578: mov eax, ecx */ r_eax = r_ecx;
    /* 0044e57a: mov dword ptr [eax], 0xaf6bd8 */ W32((u32)(r_eax), 0xaf6bd8u);
    /* 0044e580: lea ecx, [eax + 0x94] */ r_ecx = (u32)(r_eax+0x94u);
    /* 0044e586: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x44e58bu); f_0048ead0();
    /* 0044e58b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0044e58d:; BB(0x0044e58d);
    /* 0044e58d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e590: mov eax, dword ptr [eax + esi*4 + 0xa8] */ r_eax = R32((u32)(r_eax+r_esi*4+0xa8u));
    /* 0044e597: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0044e59a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e59c: je 0x44e5b3 */ if (fZ) goto L_0044e5b3;
L_0044e59e:; BB(0x0044e59e);
    /* 0044e59e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e59f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x44e5a4u); f_005cdcc0();
    /* 0044e5a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044e5a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e5a8: mov dword ptr [eax + ebx*2 + 0xa8], 0 */ W32((u32)(r_eax+r_ebx*2+0xa8u), 0x0u);
L_0044e5b3:; BB(0x0044e5b3);
    /* 0044e5b3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044e5b6: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e5b9: jl 0x44e58d */ if ((fS!=fO)) goto L_0044e58d;
L_0044e5bb:; BB(0x0044e5bb);
    /* 0044e5bb: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x44e5c0u); f_004d3250();
    /* 0044e5c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044e5c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e5ca: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x44e5cfu); f_007ba1f0();
    /* 0044e5cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e5d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044e5d4: jne 0x44e5ef */ if (!fZ) goto L_0044e5ef;
L_0044e5d6:; BB(0x0044e5d6);
    /* 0044e5d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044e5d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044e5dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044e5df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044e5e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044e5e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e5eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e5ec: ret 4 */ FN_RET(0x0044e544); r_esp += 8; return;
L_0044e5ef:; BB(0x0044e5ef);
    /* 0044e5ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e5f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44e5f8u); f_005c2f74();
    /* 0044e5f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044e5f9: jmp 0x44e5d6 */ goto L_0044e5d6;
}

void f_0044e5fc(void) /* sub_44E5FC */
{
    FN_ENTER(0x0044e5fc);
    /* 0044e5fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e600: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e603: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044e605: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044e60b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044e60d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044e60f: mov ebp, eax */ r_ebp = r_eax;
    /* 0044e611: mov esi, ecx */ r_esi = r_ecx;
L_0044e613:; BB(0x0044e613);
    /* 0044e613: cmp edx, dword ptr [esi + 0x9a5a88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x9a5a88u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e619: jl 0x44e64b */ if ((fS!=fO)) goto L_0044e64b;
L_0044e61b:; BB(0x0044e61b);
    /* 0044e61b: mov eax, dword ptr [ebx + ebp*4 + 0xa8] */ r_eax = R32((u32)(r_ebx+r_ebp*4+0xa8u));
    /* 0044e622: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0044e626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e628: je 0x44e771 */ if (fZ) goto L_0044e771;
L_0044e62e:; BB(0x0044e62e);
    /* 0044e62e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e62f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x44e634u); f_005cdcc0();
    /* 0044e634: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044e635: mov dword ptr [ebx + edi*2 + 0xa8], 0 */ W32((u32)(r_ebx+r_edi*2+0xa8u), 0x0u);
    /* 0044e640: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044e646: jmp 0x44e771 */ goto L_0044e771;
L_0044e64b:; BB(0x0044e64b);
    /* 0044e64b: cmp edx, dword ptr [esi + 0x9a5a84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x9a5a84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e651: jl 0x44e771 */ if ((fS!=fO)) goto L_0044e771;
L_0044e657:; BB(0x0044e657);
    /* 0044e657: mov edi, dword ptr [ebx + ebp*4 + 0xa8] */ r_edi = R32((u32)(r_ebx+r_ebp*4+0xa8u));
    /* 0044e65e: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0044e662: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0044e666: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e668: je 0x44ea85 */ if (fZ) goto L_0044ea85;
L_0044e66e:; BB(0x0044e66e);
    /* 0044e66e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044e670: jle 0x44e76b */ if ((fZ||fS!=fO)) goto L_0044e76b;
L_0044e676:; BB(0x0044e676);
    /* 0044e676: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e679: jg 0x44e763 */ if ((!fZ&&fS==fO)) goto L_0044e763;
L_0044e67f:; BB(0x0044e67f);
    /* 0044e67f: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0044e683: mov edx, dword ptr [ebx + edx*2 + 0xa8] */ r_edx = R32((u32)(r_ebx+r_edx*2+0xa8u));
    /* 0044e68a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e68c: je 0x44ea7a */ if (fZ) goto L_0044ea7a;
L_0044e692:; BB(0x0044e692);
    /* 0044e692: movzx eax, byte ptr [0xa44ec0] */ r_eax = (u32)R8((u32)(0xa44ec0u));
    /* 0044e699: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0044e69d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044e69f: jne 0x44e6d2 */ if (!fZ) goto L_0044e6d2;
L_0044e6a1:; BB(0x0044e6a1);
    /* 0044e6a1: fld dword ptr [0x8ff72c] */ FPUSH(R_F32((u32)(0x8ff72cu)));
    /* 0044e6a7: fmul dword ptr [0xa44ecc] */ ST(0) = ST(0) * R_F32((u32)(0xa44eccu));
    /* 0044e6ad: fdiv dword ptr [0x8ff728] */ ST(0) = ST(0) / R_F32((u32)(0x8ff728u));
    /* 0044e6b3: mov edx, eax */ r_edx = r_eax;
    /* 0044e6b5: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0044e6b9: fstp dword ptr [0xa44ec8] */ W_F32((u32)(0xa44ec8u), ST(0)); FPOP();
    /* 0044e6bf: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044e6c5: mov byte ptr [0xa44ec0], dl */ W8((u32)(0xa44ec0u), (u8)r_edx);
    /* 0044e6cb: mov edx, dword ptr [ebx + edi*2 + 0xa8] */ r_edx = R32((u32)(r_ebx+r_edi*2+0xa8u));
L_0044e6d2:; BB(0x0044e6d2);
    /* 0044e6d2: mov edi, dword ptr [0xa44f34] */ r_edi = R32((u32)(0xa44f34u));
    /* 0044e6d8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0044e6db: mov edi, dword ptr [0xa44f38] */ r_edi = R32((u32)(0xa44f38u));
    /* 0044e6e1: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0044e6e5: mov edi, dword ptr [0xa44f3c] */ r_edi = R32((u32)(0xa44f3cu));
    /* 0044e6eb: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0044e6ef: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044e6f2: mov edi, dword ptr [edx + 0x6c] */ r_edi = R32((u32)(r_edx+0x6cu));
    /* 0044e6f5: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0044e6f9: mov edi, dword ptr [edx + 0x70] */ r_edi = R32((u32)(r_edx+0x70u));
    /* 0044e6fc: mov edx, dword ptr [edx + 0x74] */ r_edx = R32((u32)(r_edx+0x74u));
    /* 0044e6ff: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0044e703: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0044e707: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0044e70b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44e710u); f_0082f9c4();
    /* 0044e710: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0044e718: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044e71b: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x44e720u); f_0082df08();
    /* 0044e720: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044e722: fld dword ptr [0xa44ec8] */ FPUSH(R_F32((u32)(0xa44ec8u)));
    /* 0044e728: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0044e72b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0044e72d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0044e731: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0044e733: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044e736: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044e73a: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0044e73e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0044e741: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44e746u); f_0082ebac();
    /* 0044e746: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0044e74a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e74b: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0044e74f: mov ecx, dword ptr [ebx + edi*2 + 0xa8] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0xa8u));
    /* 0044e756: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x44e75bu); f_00508db8();
    /* 0044e75b: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044e761: jmp 0x44e771 */ goto L_0044e771;
L_0044e763:; BB(0x0044e763);
    /* 0044e763: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044e769: jmp 0x44e771 */ goto L_0044e771;
L_0044e76b:; BB(0x0044e76b);
    /* 0044e76b: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
L_0044e771:; BB(0x0044e771);
    /* 0044e771: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044e774: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044e777: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e77a: jl 0x44e613 */ if ((fS!=fO)) goto L_0044e613;
L_0044e780:; BB(0x0044e780);
    /* 0044e780: cmp edx, 0x8c */ {  u32 a = r_edx; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e786: jl 0x44e8a6 */ if ((fS!=fO)) goto L_0044e8a6;
L_0044e78c:; BB(0x0044e78c);
    /* 0044e78c: cmp edx, 0x91 */ {  u32 a = r_edx; u32 b = 0x91u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e792: jge 0x44e8a6 */ if ((fS==fO)) goto L_0044e8a6;
L_0044e798:; BB(0x0044e798);
    /* 0044e798: movzx eax, byte ptr [0xa44ec0] */ r_eax = (u32)R8((u32)(0xa44ec0u));
    /* 0044e79f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044e7a1: jne 0x44e847 */ if (!fZ) goto L_0044e847;
L_0044e7a7:; BB(0x0044e7a7);
    /* 0044e7a7: mov dword ptr [0xa44ed0], 0 */ W32((u32)(0xa44ed0u), 0x0u);
    /* 0044e7b1: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044e7b6: mov byte ptr [0xa44ec0], al */ W8((u32)(0xa44ec0u), (u8)r_eax);
    /* 0044e7bb: mov dword ptr [0xa44ed4], 0 */ W32((u32)(0xa44ed4u), 0x0u);
    /* 0044e7c5: mov dword ptr [0xa44ed8], 0 */ W32((u32)(0xa44ed8u), 0x0u);
    /* 0044e7cf: mov dword ptr [0xa44edc], 0x41f00000 */ W32((u32)(0xa44edcu), 0x41f00000u);
    /* 0044e7d9: mov dword ptr [0xa44ee0], 0 */ W32((u32)(0xa44ee0u), 0x0u);
    /* 0044e7e3: mov dword ptr [0xa44ee4], 0x42700000 */ W32((u32)(0xa44ee4u), 0x42700000u);
    /* 0044e7ed: mov dword ptr [0xa44ee8], 0 */ W32((u32)(0xa44ee8u), 0x0u);
    /* 0044e7f7: mov dword ptr [0xa44eec], 0x42700000 */ W32((u32)(0xa44eecu), 0x42700000u);
    /* 0044e801: mov dword ptr [0xa44ef0], 0 */ W32((u32)(0xa44ef0u), 0x0u);
    /* 0044e80b: mov dword ptr [0xa44ef4], 0xc1f00000 */ W32((u32)(0xa44ef4u), 0xc1f00000u);
    /* 0044e815: mov dword ptr [0xa44ef8], 0 */ W32((u32)(0xa44ef8u), 0x0u);
    /* 0044e81f: mov dword ptr [0xa44efc], 0x42700000 */ W32((u32)(0xa44efcu), 0x42700000u);
    /* 0044e829: mov dword ptr [0xa44f00], 0 */ W32((u32)(0xa44f00u), 0x0u);
    /* 0044e833: mov dword ptr [0xa44f04], 0x42f00000 */ W32((u32)(0xa44f04u), 0x42f00000u);
    /* 0044e83d: mov dword ptr [0xa44f08], 0 */ W32((u32)(0xa44f08u), 0x0u);
L_0044e847:; BB(0x0044e847);
    /* 0044e847: mov eax, dword ptr [0xa44f34] */ r_eax = R32((u32)(0xa44f34u));
    /* 0044e84c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0044e850: mov eax, dword ptr [0xa44f38] */ r_eax = R32((u32)(0xa44f38u));
    /* 0044e855: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044e857: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044e859: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0044e85d: mov eax, dword ptr [0xa44f3c] */ r_eax = R32((u32)(0xa44f3cu));
    /* 0044e862: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0044e866: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0044e86a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0044e86d: lea edx, [eax + edx + 0xa44840] */ r_edx = (u32)(r_eax+r_edx+0xa44840u);
    /* 0044e874: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44e879u); f_0082ebac();
    /* 0044e879: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0044e87d: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 0044e882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e883: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44e888u); f_0050b510();
    /* 0044e888: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e88b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e88d: je 0x44e8a0 */ if (fZ) goto L_0044e8a0;
L_0044e88f:; BB(0x0044e88f);
    /* 0044e88f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e891: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e893: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44e898u); f_00508efc();
    /* 0044e898: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044e89e: jmp 0x44e8a6 */ goto L_0044e8a6;
L_0044e8a0:; BB(0x0044e8a0);
    /* 0044e8a0: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
L_0044e8a6:; BB(0x0044e8a6);
    /* 0044e8a6: cmp edx, 0xaa */ {  u32 a = r_edx; u32 b = 0xaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e8ac: jl 0x44e8da */ if ((fS!=fO)) goto L_0044e8da;
L_0044e8ae:; BB(0x0044e8ae);
    /* 0044e8ae: fld dword ptr [0x8ff70c] */ FPUSH(R_F32((u32)(0x8ff70cu)));
    /* 0044e8b4: fadd dword ptr [ebx + 0x10c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x10cu));
    /* 0044e8ba: fcom dword ptr [0x8ff714] */ fx_compare(ST(0), R_F32((u32)(0x8ff714u))); 
    /* 0044e8c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044e8c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044e8c3: jbe 0x44e8d4 */ if ((fC||fZ)) goto L_0044e8d4;
L_0044e8c5:; BB(0x0044e8c5);
    /* 0044e8c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044e8c7: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0044e8cc: mov dword ptr [ebx + 0x10c], eax */ W32((u32)(r_ebx+0x10cu), r_eax);
    /* 0044e8d2: jmp 0x44e8da */ goto L_0044e8da;
L_0044e8d4:; BB(0x0044e8d4);
    /* 0044e8d4: fstp dword ptr [ebx + 0x10c] */ W_F32((u32)(r_ebx+0x10cu), ST(0)); FPOP();
L_0044e8da:; BB(0x0044e8da);
    /* 0044e8da: fld dword ptr [0x8ff710] */ FPUSH(R_F32((u32)(0x8ff710u)));
    /* 0044e8e0: fld dword ptr [ebx + 0x104] */ FPUSH(R_F32((u32)(r_ebx+0x104u)));
    /* 0044e8e6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0044e8e8: fcom dword ptr [0x8ff708] */ fx_compare(ST(0), R_F32((u32)(0x8ff708u))); 
    /* 0044e8ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044e8f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044e8f1: jb 0x44e901 */ if (fC) goto L_0044e901;
L_0044e8f3:; BB(0x0044e8f3);
    /* 0044e8f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044e8f5: mov dword ptr [ebx + 0x104], 0 */ W32((u32)(r_ebx+0x104u), 0x0u);
    /* 0044e8ff: jmp 0x44e907 */ goto L_0044e907;
L_0044e901:; BB(0x0044e901);
    /* 0044e901: fstp dword ptr [ebx + 0x104] */ W_F32((u32)(r_ebx+0x104u), ST(0)); FPOP();
L_0044e907:; BB(0x0044e907);
    /* 0044e907: fld dword ptr [ebx + 0x108] */ FPUSH(R_F32((u32)(r_ebx+0x108u)));
    /* 0044e90d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0044e90f: fcom dword ptr [0x8ff704] */ fx_compare(ST(0), R_F32((u32)(0x8ff704u))); 
    /* 0044e915: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044e917: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044e918: jbe 0x44e929 */ if ((fC||fZ)) goto L_0044e929;
L_0044e91a:; BB(0x0044e91a);
    /* 0044e91a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044e91c: mov eax, 0x430b0000 */ r_eax = 0x430b0000u;
    /* 0044e921: mov dword ptr [ebx + 0x108], eax */ W32((u32)(r_ebx+0x108u), r_eax);
    /* 0044e927: jmp 0x44e92f */ goto L_0044e92f;
L_0044e929:; BB(0x0044e929);
    /* 0044e929: fstp dword ptr [ebx + 0x108] */ W_F32((u32)(r_ebx+0x108u), ST(0)); FPOP();
L_0044e92f:; BB(0x0044e92f);
    /* 0044e92f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e931: je 0x44eae8 */ if (fZ) goto L_0044eae8;
L_0044e937:; BB(0x0044e937);
    /* 0044e937: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e93a: je 0x44eabb */ if (fZ) goto L_0044eabb;
L_0044e940:; BB(0x0044e940);
    /* 0044e940: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e943: je 0x44eabb */ if (fZ) goto L_0044eabb;
L_0044e949:; BB(0x0044e949);
    /* 0044e949: cmp edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e94c: je 0x44eabb */ if (fZ) goto L_0044eabb;
L_0044e952:; BB(0x0044e952);
    /* 0044e952: cmp edx, 0x8c */ {  u32 a = r_edx; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e958: je 0x44e9b2 */ if (fZ) goto L_0044e9b2;
L_0044e95a:; BB(0x0044e95a);
    /* 0044e95a: cmp edx, 0xaa */ {  u32 a = r_edx; u32 b = 0xaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e960: jne 0x44e980 */ if (!fZ) goto L_0044e980;
L_0044e962:; BB(0x0044e962);
    /* 0044e962: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e964: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e966: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e96b: push 0x366 */ { u32 v = 0x366u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e970: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44e975u); f_00814298();
    /* 0044e975: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e978: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044e97e: jmp 0x44e9da */ goto L_0044e9da;
L_0044e980:; BB(0x0044e980);
    /* 0044e980: cmp edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e986: jne 0x44e9da */ if (!fZ) goto L_0044e9da;
L_0044e988:; BB(0x0044e988);
    /* 0044e988: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e98a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e98c: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e991: push 0x37e */ { u32 v = 0x37eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e996: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44e99bu); f_00814298();
    /* 0044e99b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e99d: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9a2: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x44e9a7u); f_006ff5f8();
    /* 0044e9a7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e9aa: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044e9b0: jmp 0x44e9da */ goto L_0044e9da;
L_0044e9b2:; BB(0x0044e9b2);
    /* 0044e9b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9b6: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9bb: push 0x365 */ { u32 v = 0x365u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9c0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44e9c5u); f_00814298();
    /* 0044e9c5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9c7: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9cc: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x44e9d1u); f_006ff5f8();
    /* 0044e9d1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e9d4: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
L_0044e9da:; BB(0x0044e9da);
    /* 0044e9da: cmp edx, 0x92 */ {  u32 a = r_edx; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e9e0: jl 0x44e9ff */ if ((fS!=fO)) goto L_0044e9ff;
L_0044e9e2:; BB(0x0044e9e2);
    /* 0044e9e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9e6: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9ec: push 0x360 */ { u32 v = 0x360u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e9f1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44e9f6u); f_008144b0();
    /* 0044e9f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e9f9: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
L_0044e9ff:; BB(0x0044e9ff);
    /* 0044e9ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044ea01: jl 0x44ea20 */ if ((fS!=fO)) goto L_0044ea20;
L_0044ea03:; BB(0x0044ea03);
    /* 0044ea03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea07: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea0d: push 0x361 */ { u32 v = 0x361u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea12: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44ea17u); f_008144b0();
    /* 0044ea17: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ea1a: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
L_0044ea20:; BB(0x0044ea20);
    /* 0044ea20: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ea23: jl 0x44ea3c */ if ((fS!=fO)) goto L_0044ea3c;
L_0044ea25:; BB(0x0044ea25);
    /* 0044ea25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea29: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea2f: push 0x362 */ { u32 v = 0x362u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea34: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44ea39u); f_008144b0();
    /* 0044ea39: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044ea3c:; BB(0x0044ea3c);
    /* 0044ea3c: lea ecx, [ebx + 0x94] */ r_ecx = (u32)(r_ebx+0x94u);
    /* 0044ea42: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x44ea47u); f_0044d180();
    /* 0044ea47: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 0044ea4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ea50: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 0044ea56: cmp eax, 0x118 */ {  u32 a = r_eax; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ea5b: jl 0x44ea72 */ if ((fS!=fO)) goto L_0044ea72;
L_0044ea5d:; BB(0x0044ea5d);
    /* 0044ea5d: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0044ea61: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044ea66: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0044ea6a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044ea6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044ea6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ea6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044ea70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044ea71: ret  */ FN_RET(0x0044e5fc); r_esp += 4; return;
L_0044ea72:; BB(0x0044ea72);
    /* 0044ea72: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044ea75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044ea76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ea77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044ea78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044ea79: ret  */ FN_RET(0x0044e5fc); r_esp += 4; return;
L_0044ea7a:; BB(0x0044ea7a);
    /* 0044ea7a: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044ea80: jmp 0x44e771 */ goto L_0044e771;
L_0044ea85:; BB(0x0044ea85);
    /* 0044ea85: push dword ptr [esi + 0x9a5a80] */ { u32 v = R32((u32)(r_esi+0x9a5a80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ea8b: lea edx, [esi + 0x9a5a8c] */ r_edx = (u32)(r_esi+0x9a5a8cu);
    /* 0044ea91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea92: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x44ea97u); f_00509590();
    /* 0044ea97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ea9a: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0044ea9e: mov dword ptr [ebx + edx*2 + 0xa8], eax */ W32((u32)(r_ebx+r_edx*2+0xa8u), r_eax);
    /* 0044eaa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044eaa7: je 0x44e66e */ if (fZ) goto L_0044e66e;
L_0044eaad:; BB(0x0044eaad);
    /* 0044eaad: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eaaf: mov ecx, eax */ r_ecx = r_eax;
    /* 0044eab1: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44eab6u); f_00508efc();
    /* 0044eab6: jmp 0x44e66e */ goto L_0044e66e;
L_0044eabb:; BB(0x0044eabb);
    /* 0044eabb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eabd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eabf: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eac4: push 0x363 */ { u32 v = 0x363u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eac9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44eaceu); f_00814298();
    /* 0044eace: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ead0: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ead5: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x44eadau); f_006ff5f8();
    /* 0044eada: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044eadd: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044eae3: jmp 0x44e9da */ goto L_0044e9da;
L_0044eae8:; BB(0x0044eae8);
    /* 0044eae8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eaea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eaec: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eaf1: push 0x364 */ { u32 v = 0x364u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eaf6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44eafbu); f_00814298();
    /* 0044eafb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044eafd: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb02: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x44eb07u); f_006ff5f8();
    /* 0044eb07: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044eb0a: mov edx, dword ptr [ebx + 0x90] */ r_edx = R32((u32)(r_ebx+0x90u));
    /* 0044eb10: jmp 0x44e9da */ goto L_0044e9da;
}

void f_0044eb18(void) /* sub_44EB18 */
{
    FN_ENTER(0x0044eb18);
    /* 0044eb18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb1b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044eb1d: fld dword ptr [ebx + 0x10c] */ FPUSH(R_F32((u32)(r_ebx+0x10cu)));
    /* 0044eb23: fcom dword ptr [0x8ff700] */ fx_compare(ST(0), R_F32((u32)(0x8ff700u))); 
    /* 0044eb29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044eb2b: mov edx, dword ptr [ebx + 0x10c] */ r_edx = R32((u32)(r_ebx+0x10cu));
    /* 0044eb31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044eb32: je 0x44ec0b */ if (fZ) goto L_0044ec0b;
L_0044eb38:; BB(0x0044eb38);
    /* 0044eb38: fcomp dword ptr [0x8ff6fc] */ fx_compare(ST(0), R_F32((u32)(0x8ff6fcu))); FPOP();
    /* 0044eb3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044eb40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044eb41: jae 0x44eb4a */ if (!fC) goto L_0044eb4a;
L_0044eb43:; BB(0x0044eb43);
    /* 0044eb43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb44: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x44eb49u); f_00453af4();
    /* 0044eb49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0044eb4a:; BB(0x0044eb4a);
    /* 0044eb4a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44eb4fu); f_0082d7b0();
    /* 0044eb4f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x44eb54u); f_0082fa9c();
    /* 0044eb54: movzx eax, byte ptr [0xa44ec4] */ r_eax = (u32)R8((u32)(0xa44ec4u));
    /* 0044eb5b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044eb5d: jne 0x44eb8d */ if (!fZ) goto L_0044eb8d;
L_0044eb5f:; BB(0x0044eb5f);
    /* 0044eb5f: mov edx, dword ptr [0xa44f18] */ r_edx = R32((u32)(0xa44f18u));
    /* 0044eb65: mov dword ptr [0xa44f0c], edx */ W32((u32)(0xa44f0cu), r_edx);
    /* 0044eb6b: mov edx, dword ptr [0xa44f1c] */ r_edx = R32((u32)(0xa44f1cu));
    /* 0044eb71: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044eb76: mov dword ptr [0xa44f10], edx */ W32((u32)(0xa44f10u), r_edx);
    /* 0044eb7c: mov edx, dword ptr [0xa44f20] */ r_edx = R32((u32)(0xa44f20u));
    /* 0044eb82: mov dword ptr [0xa44f14], edx */ W32((u32)(0xa44f14u), r_edx);
    /* 0044eb88: mov byte ptr [0xa44ec4], al */ W8((u32)(0xa44ec4u), (u8)r_eax);
L_0044eb8d:; BB(0x0044eb8d);
    /* 0044eb8d: mov ecx, 0xa44f0c */ r_ecx = 0xa44f0cu;
    /* 0044eb92: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44eb97u); f_0082d838();
    /* 0044eb97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0044eb99:; BB(0x0044eb99);
    /* 0044eb99: mov edx, dword ptr [ebx + 0x104] */ r_edx = R32((u32)(r_ebx+0x104u));
    /* 0044eb9f: mov esi, eax */ r_esi = r_eax;
    /* 0044eba1: mov edi, edx */ r_edi = r_edx;
L_0044eba3:; BB(0x0044eba3);
    /* 0044eba3: mov ecx, dword ptr [ebx + esi*4 + 0xd4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0xd4u));
    /* 0044ebaa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44ebafu); f_00829cc8();
    /* 0044ebaf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ebb0: push dword ptr [ebx + esi*4 + 0xec] */ { u32 v = R32((u32)(r_ebx+r_esi*4+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ebb7: push dword ptr [ebx + esi*4 + 0xbc] */ { u32 v = R32((u32)(r_ebx+r_esi*4+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ebbe: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x44ebc3u); f_0083046c();
    /* 0044ebc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ebc6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044ebc9: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ebcc: jge 0x44ebe3 */ if ((fS==fO)) goto L_0044ebe3;
L_0044ebce:; BB(0x0044ebce);
    /* 0044ebce: mov edi, dword ptr [ebx + 0x108] */ r_edi = R32((u32)(r_ebx+0x108u));
    /* 0044ebd4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ebd6: je 0x44ebdf */ if (fZ) goto L_0044ebdf;
L_0044ebd8:; BB(0x0044ebd8);
    /* 0044ebd8: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ebdb: jne 0x44eba3 */ if (!fZ) goto L_0044eba3;
L_0044ebdd:; BB(0x0044ebdd);
    /* 0044ebdd: jmp 0x44ec07 */ goto L_0044ec07;
L_0044ebdf:; BB(0x0044ebdf);
    /* 0044ebdf: mov eax, esi */ r_eax = r_esi;
    /* 0044ebe1: jmp 0x44eb99 */ goto L_0044eb99;
L_0044ebe3:; BB(0x0044ebe3);
    /* 0044ebe3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x44ebe8u); f_0082faac();
    /* 0044ebe8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44ebedu); f_0082da80();
    /* 0044ebed: fld dword ptr [ebx + 0x10c] */ FPUSH(R_F32((u32)(r_ebx+0x10cu)));
    /* 0044ebf3: fcomp dword ptr [0x8ff6fc] */ fx_compare(ST(0), R_F32((u32)(0x8ff6fcu))); FPOP();
    /* 0044ebf9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ebfb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044ebfc: jae 0x44ec03 */ if (!fC) goto L_0044ec03;
L_0044ebfe:; BB(0x0044ebfe);
    /* 0044ebfe: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x44ec03u); f_005963d0();
L_0044ec03:; BB(0x0044ec03);
    /* 0044ec03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044ec04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044ec05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044ec06: ret  */ FN_RET(0x0044eb18); r_esp += 4; return;
L_0044ec07:; BB(0x0044ec07);
    /* 0044ec07: mov eax, esi */ r_eax = r_esi;
    /* 0044ec09: jmp 0x44eb99 */ goto L_0044eb99;
L_0044ec0b:; BB(0x0044ec0b);
    /* 0044ec0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044ec0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044ec0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044ec0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044ec10: ret  */ FN_RET(0x0044eb18); r_esp += 4; return;
}

void f_0044ec14(void) /* sub_44EC14 */
{
    FN_ENTER(0x0044ec14);
    /* 0044ec14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec15: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ec17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec19: push 0x8ced9a */ { u32 v = 0x8ced9au; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044ec24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044ec2c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ec2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044ec32: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0044ec35: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0044ec38: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0044ec3b: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec40: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0044ec47: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44ec4cu); f_005caba4();
    /* 0044ec4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044ec4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ec52: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044ec55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ec57: je 0x44eda3 */ if (fZ) goto L_0044eda3;
L_0044ec5d:; BB(0x0044ec5d);
    /* 0044ec5d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0044ec64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044ec6b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ec6e: mov ecx, eax */ r_ecx = r_eax;
    /* 0044ec70: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0044ec73: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x44ec78u); f_007ba278();
    /* 0044ec78: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044ec7f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ec82: mov dword ptr [edx], 0xaf6bd8 */ W32((u32)(r_edx), 0xaf6bd8u);
    /* 0044ec88: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044ec8a: mov eax, dword ptr [0x9a5af8] */ r_eax = R32((u32)(0x9a5af8u));
    /* 0044ec8f: mov ecx, dword ptr [0xa44d58] */ r_ecx = R32((u32)(0xa44d58u));
    /* 0044ec95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044ec98: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0044ec9b:; BB(0x0044ec9b);
    /* 0044ec9b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ec9e: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0044eca1: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0044eca4: mov ebx, dword ptr [ebx + 0x9a6140] */ r_ebx = R32((u32)(r_ebx+0x9a6140u));
    /* 0044ecaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ecab: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x44ecb0u); f_005b8610();
    /* 0044ecb0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ecb3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ecb6: mov dword ptr [edx + esi*2 + 0xbc], eax */ W32((u32)(r_edx+r_esi*2+0xbcu), r_eax);
    /* 0044ecbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ecbe: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x44ecc3u); f_005b8624();
    /* 0044ecc3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ecc6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ecc9: mov dword ptr [edx + edi*4 + 0xd4], eax */ W32((u32)(r_edx+r_edi*4+0xd4u), r_eax);
    /* 0044ecd0: push dword ptr [edi*4 + 0x9a5afc] */ { u32 v = R32((u32)(r_edi*4+0x9a5afcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ecd7: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x44ecdcu); f_005b8638();
    /* 0044ecdc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ecdf: mov dword ptr [edx + edi*4 + 0xec], eax */ W32((u32)(r_edx+r_edi*4+0xecu), r_eax);
    /* 0044ece6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044ece9: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ecec: jl 0x44ec9b */ if ((fS!=fO)) goto L_0044ec9b;
L_0044ecee:; BB(0x0044ecee);
    /* 0044ecee: mov dword ptr [edx + 0x104], 0xbf000000 */ W32((u32)(r_edx+0x104u), 0xbf000000u);
    /* 0044ecf8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ecfa: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 0044ed00: mov dword ptr [edx + 0x108], 0xbf000000 */ W32((u32)(r_edx+0x108u), 0xbf000000u);
    /* 0044ed0a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed0c: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 0044ed12: push 0x8ff680 */ { u32 v = 0x8ff680u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed17: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0044ed1d: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0044ed23: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 0044ed29: lea ecx, [edx + 0x94] */ r_ecx = (u32)(r_edx+0x94u);
    /* 0044ed2f: call 0x44d268 */ r_esp -= 4; W32(r_esp, 0x44ed34u); f_0044d268();
    /* 0044ed34: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed36: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x44ed3bu); f_004d31f4();
    /* 0044ed3b: push 0xa44f24 */ { u32 v = 0xa44f24u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed40: mov eax, 0xa44f34 */ r_eax = 0xa44f34u;
    /* 0044ed45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed47: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x44ed4cu); f_004d681c();
    /* 0044ed4c: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed51: push 0x9a5b14 */ { u32 v = 0x9a5b14u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed56: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x44ed5bu); f_004d6770();
    /* 0044ed5b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ed5e: mov dword ptr [eax + 0x10c], 0 */ W32((u32)(r_eax+0x10cu), 0x0u);
    /* 0044ed68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed6c: push 0xa44f34 */ { u32 v = 0xa44f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed71: push 0x37e */ { u32 v = 0x37eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed76: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44ed7bu); f_00814298();
    /* 0044ed7b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ed7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ed81: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044ed83: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0044ed86: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
L_0044ed8c:; BB(0x0044ed8c);
    /* 0044ed8c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044ed8f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044ed92: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044ed95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ed98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044ed9f: mov esp, ebp */ r_esp = r_ebp;
    /* 0044eda1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044eda2: ret  */ FN_RET(0x0044ec14); r_esp += 4; return;
L_0044eda3:; BB(0x0044eda3);
    /* 0044eda3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044eda5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044eda8: jmp 0x44ed8c */ goto L_0044ed8c;
}

void f_0044ee94(void) /* sub_44EE94 */
{
    FN_ENTER(0x0044ee94);
    /* 0044ee94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ee95: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ee97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ee99: push 0x8cedb4 */ { u32 v = 0x8cedb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ee9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044eea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044eea5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044eeac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044eeaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044eeb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0044eeb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0044eeb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0044eebb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044eebe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044eec1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044eec8: mov eax, ecx */ r_eax = r_ecx;
    /* 0044eeca: mov dword ptr [eax], 0xaf6c60 */ W32((u32)(r_eax), 0xaf6c60u);
    /* 0044eed0: lea ecx, [eax + 0x11c] */ r_ecx = (u32)(r_eax+0x11cu);
    /* 0044eed6: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x44eedbu); f_0048ead0();
    /* 0044eedb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0044eedd:; BB(0x0044eedd);
    /* 0044eedd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044eee0: mov eax, dword ptr [eax + esi*4 + 0x90] */ r_eax = R32((u32)(r_eax+r_esi*4+0x90u));
    /* 0044eee7: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0044eeea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044eeec: je 0x44ef03 */ if (fZ) goto L_0044ef03;
L_0044eeee:; BB(0x0044eeee);
    /* 0044eeee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044eeef: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x44eef4u); f_005cdcc0();
    /* 0044eef4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044eef5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044eef8: mov dword ptr [eax + ebx*2 + 0x90], 0 */ W32((u32)(r_eax+r_ebx*2+0x90u), 0x0u);
L_0044ef03:; BB(0x0044ef03);
    /* 0044ef03: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044ef06: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ef09: jl 0x44eedd */ if ((fS!=fO)) goto L_0044eedd;
L_0044ef0b:; BB(0x0044ef0b);
    /* 0044ef0b: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x44ef10u); f_004d3250();
    /* 0044ef10: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044ef17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ef1a: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x44ef1fu); f_007ba1f0();
    /* 0044ef1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ef22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044ef24: jne 0x44ef3f */ if (!fZ) goto L_0044ef3f;
L_0044ef26:; BB(0x0044ef26);
    /* 0044ef26: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044ef29: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044ef2c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ef2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ef32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044ef39: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ef3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ef3c: ret 4 */ FN_RET(0x0044ee94); r_esp += 8; return;
L_0044ef3f:; BB(0x0044ef3f);
    /* 0044ef3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ef42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef43: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44ef48u); f_005c2f74();
    /* 0044ef48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ef49: jmp 0x44ef26 */ goto L_0044ef26;
}

void f_0044ef4c(void) /* sub_44EF4C */
{
    FN_ENTER(0x0044ef4c);
    /* 0044ef4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef50: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ef53: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044ef55: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 0044ef5b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ef5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044ef5f: mov ebp, edx */ r_ebp = r_edx;
    /* 0044ef61: mov esi, ecx */ r_esi = r_ecx;
L_0044ef63:; BB(0x0044ef63);
    /* 0044ef63: cmp eax, dword ptr [ebp + 0x9a5b28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x9a5b28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ef69: jl 0x44ef93 */ if ((fS!=fO)) goto L_0044ef93;
L_0044ef6b:; BB(0x0044ef6b);
    /* 0044ef6b: mov edx, dword ptr [ebx + esi*4 + 0x90] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x90u));
    /* 0044ef72: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0044ef75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ef77: je 0x44efad */ if (fZ) goto L_0044efad;
L_0044ef79:; BB(0x0044ef79);
    /* 0044ef79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef7a: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x44ef7fu); f_005cdcc0();
    /* 0044ef7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ef80: mov dword ptr [ebx + edi*2 + 0x90], 0 */ W32((u32)(r_ebx+r_edi*2+0x90u), 0x0u);
    /* 0044ef8b: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 0044ef91: jmp 0x44efad */ goto L_0044efad;
L_0044ef93:; BB(0x0044ef93);
    /* 0044ef93: cmp eax, dword ptr [ebp + 0x9a5b24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x9a5b24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ef99: jl 0x44efad */ if ((fS!=fO)) goto L_0044efad;
L_0044ef9b:; BB(0x0044ef9b);
    /* 0044ef9b: mov edx, dword ptr [ebx + esi*4 + 0x90] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x90u));
    /* 0044efa2: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0044efa5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044efa7: je 0x44f0de */ if (fZ) goto L_0044f0de;
L_0044efad:; BB(0x0044efad);
    /* 0044efad: add ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044efb0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044efb3: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044efb6: jl 0x44ef63 */ if ((fS!=fO)) goto L_0044ef63;
L_0044efb8:; BB(0x0044efb8);
    /* 0044efb8: mov edx, dword ptr [0xa44f44] */ r_edx = R32((u32)(0xa44f44u));
    /* 0044efbe: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044efc0: jl 0x44f005 */ if ((fS!=fO)) goto L_0044f005;
L_0044efc2:; BB(0x0044efc2);
    /* 0044efc2: cmp eax, dword ptr [0xa44f48] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44f48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044efc8: jg 0x44f005 */ if ((!fZ&&fS==fO)) goto L_0044f005;
L_0044efca:; BB(0x0044efca);
    /* 0044efca: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044efcf: lea eax, [ebx + 0x100] */ r_eax = (u32)(r_ebx+0x100u);
    /* 0044efd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044efd6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44efdbu); f_0050b510();
    /* 0044efdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044efde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044efe0: je 0x44eff9 */ if (fZ) goto L_0044eff9;
L_0044efe2:; BB(0x0044efe2);
    /* 0044efe2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044efe4: mov ecx, eax */ r_ecx = r_eax;
    /* 0044efe6: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44efebu); f_00508efc();
    /* 0044efeb: mov edx, dword ptr [0xa44f44] */ r_edx = R32((u32)(0xa44f44u));
    /* 0044eff1: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 0044eff7: jmp 0x44f005 */ goto L_0044f005;
L_0044eff9:; BB(0x0044eff9);
    /* 0044eff9: mov edx, dword ptr [0xa44f44] */ r_edx = R32((u32)(0xa44f44u));
    /* 0044efff: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
L_0044f005:; BB(0x0044f005);
    /* 0044f005: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f007: je 0x44f011 */ if (fZ) goto L_0044f011;
L_0044f009:; BB(0x0044f009);
    /* 0044f009: cmp eax, dword ptr [0xa44f4c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44f4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f00f: jne 0x44f026 */ if (!fZ) goto L_0044f026;
L_0044f011:; BB(0x0044f011);
    /* 0044f011: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f013: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f018: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x44f01du); f_006ff5f8();
    /* 0044f01d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f020: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
L_0044f026:; BB(0x0044f026);
    /* 0044f026: cmp eax, dword ptr [0xa44f50] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44f50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f02c: jne 0x44f046 */ if (!fZ) goto L_0044f046;
L_0044f02e:; BB(0x0044f02e);
    /* 0044f02e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f030: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f032: lea eax, [ebx + 0x100] */ r_eax = (u32)(r_ebx+0x100u);
    /* 0044f038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f039: push 0x383 */ { u32 v = 0x383u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f03e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44f043u); f_00814298();
    /* 0044f043: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f046:; BB(0x0044f046);
    /* 0044f046: fld dword ptr [0x8ff854] */ FPUSH(R_F32((u32)(0x8ff854u)));
    /* 0044f04c: fadd dword ptr [ebx + 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x114u));
    /* 0044f052: fcom dword ptr [0x8ff744] */ fx_compare(ST(0), R_F32((u32)(0x8ff744u))); 
    /* 0044f058: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f05a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f05b: jbe 0x44f06c */ if ((fC||fZ)) goto L_0044f06c;
L_0044f05d:; BB(0x0044f05d);
    /* 0044f05d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044f05f: mov eax, 0x43150000 */ r_eax = 0x43150000u;
    /* 0044f064: mov dword ptr [ebx + 0x114], eax */ W32((u32)(r_ebx+0x114u), r_eax);
    /* 0044f06a: jmp 0x44f072 */ goto L_0044f072;
L_0044f06c:; BB(0x0044f06c);
    /* 0044f06c: fstp dword ptr [ebx + 0x114] */ W_F32((u32)(r_ebx+0x114u), ST(0)); FPOP();
L_0044f072:; BB(0x0044f072);
    /* 0044f072: fld dword ptr [0x8ff740] */ FPUSH(R_F32((u32)(0x8ff740u)));
    /* 0044f078: fadd dword ptr [ebx + 0x118] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x118u));
    /* 0044f07e: fcom dword ptr [0x8ff85c] */ fx_compare(ST(0), R_F32((u32)(0x8ff85cu))); 
    /* 0044f084: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044f086: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044f087: jb 0x44f099 */ if (fC) goto L_0044f099;
L_0044f089:; BB(0x0044f089);
    /* 0044f089: fld dword ptr [0x8ff858] */ FPUSH(R_F32((u32)(0x8ff858u)));
    /* 0044f08f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0044f091: fstp dword ptr [ebx + 0x118] */ W_F32((u32)(r_ebx+0x118u), ST(0)); FPOP();
    /* 0044f097: jmp 0x44f09f */ goto L_0044f09f;
L_0044f099:; BB(0x0044f099);
    /* 0044f099: fstp dword ptr [ebx + 0x118] */ W_F32((u32)(r_ebx+0x118u), ST(0)); FPOP();
L_0044f09f:; BB(0x0044f09f);
    /* 0044f09f: lea ecx, [ebx + 0x11c] */ r_ecx = (u32)(r_ebx+0x11cu);
    /* 0044f0a5: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x44f0aau); f_0044d180();
    /* 0044f0aa: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 0044f0b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044f0b3: cmp eax, dword ptr [0xa44f54] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44f54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f0b9: mov dword ptr [ebx + 0x110], eax */ W32((u32)(r_ebx+0x110u), r_eax);
    /* 0044f0bf: jl 0x44f0d6 */ if ((fS!=fO)) goto L_0044f0d6;
L_0044f0c1:; BB(0x0044f0c1);
    /* 0044f0c1: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0044f0c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044f0ca: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0044f0ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044f0d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044f0d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f0d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044f0d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044f0d5: ret  */ FN_RET(0x0044ef4c); r_esp += 4; return;
L_0044f0d6:; BB(0x0044f0d6);
    /* 0044f0d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044f0d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044f0da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f0db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044f0dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044f0dd: ret  */ FN_RET(0x0044ef4c); r_esp += 4; return;
L_0044f0de:; BB(0x0044f0de);
    /* 0044f0de: mov ecx, dword ptr [ebx + 0x10c] */ r_ecx = R32((u32)(r_ebx+0x10cu));
    /* 0044f0e4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f0e6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44f0ebu); f_0082dcbc();
    /* 0044f0eb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0044f0ef: mov ecx, dword ptr [ebx + 0x10c] */ r_ecx = R32((u32)(r_ebx+0x10cu));
    /* 0044f0f5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f0f7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44f0fcu); f_0082ddd8();
    /* 0044f0fc: fld dword ptr [ebp + 0x9a5b2c] */ FPUSH(R_F32((u32)(r_ebp+0x9a5b2cu)));
    /* 0044f102: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0044f104: fld dword ptr [ebp + 0x9a5b34] */ FPUSH(R_F32((u32)(r_ebp+0x9a5b34u)));
    /* 0044f10a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0044f10e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0044f110: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044f112: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0044f114: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044f116: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044f119: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044f11c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044f11e: fmul dword ptr [ebp + 0x9a5b34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x9a5b34u));
    /* 0044f124: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044f126: fchs  */ ST(0) = -ST(0);
    /* 0044f128: fmul dword ptr [ebp + 0x9a5b2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x9a5b2cu));
    /* 0044f12e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0044f130: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044f134: lea edx, [ebx + 0x100] */ r_edx = (u32)(r_ebx+0x100u);
    /* 0044f13a: mov eax, dword ptr [ebp + 0x9a5b30] */ r_eax = R32((u32)(r_ebp+0x9a5b30u));
    /* 0044f140: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0044f144: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44f149u); f_0082ebac();
    /* 0044f149: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044f14c: push dword ptr [ebp + 0x9a5b20] */ { u32 v = R32((u32)(r_ebp+0x9a5b20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044f152: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f153: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x44f158u); f_00509590();
    /* 0044f158: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f15b: mov dword ptr [ebx + edi*2 + 0x90], eax */ W32((u32)(r_ebx+r_edi*2+0x90u), r_eax);
    /* 0044f162: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f164: je 0x44f17a */ if (fZ) goto L_0044f17a;
L_0044f166:; BB(0x0044f166);
    /* 0044f166: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f168: mov ecx, eax */ r_ecx = r_eax;
    /* 0044f16a: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x44f16fu); f_00508efc();
    /* 0044f16f: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 0044f175: jmp 0x44efad */ goto L_0044efad;
L_0044f17a:; BB(0x0044f17a);
    /* 0044f17a: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 0044f180: jmp 0x44efad */ goto L_0044efad;
}

