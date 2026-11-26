#include "protos.h"

void f_0065e174(void) /* sub_65E174 */
{
    FN_ENTER(0x0065e174);
    /* 0065e174: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e175: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e179: push 0x8e79d6 */ { u32 v = 0x8e79d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e17e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065e184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e185: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065e18c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e18f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065e192: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065e195: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065e198: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065e19b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65e1a0u); f_00807ac0();
    /* 0065e1a0: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 0065e1a3: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0065e1a6: ja 0x65e218 */ if ((!fC&&!fZ)) goto L_0065e218;
L_0065e1a8:; BB(0x0065e1a8);
    /* 0065e1a8: mov eax, dword ptr [eax*4 + 0x938a0c] */ r_eax = R32((u32)(r_eax*4+0x938a0cu));
    /* 0065e1af: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0065e218:; BB(0x0065e218);
    /* 0065e218: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0065e21f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e224: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65e229u); f_008581c5();
    /* 0065e229: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e22a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065e22d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e22f: je 0x65e28e */ if (fZ) goto L_0065e28e;
L_0065e231:; BB(0x0065e231);
    /* 0065e231: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0065e238: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065e23f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e242: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e247: push 0x9c8480 */ { u32 v = 0x9c8480u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e24c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e24e: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65e253u); f_005b7a84();
    /* 0065e253: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e256: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0065e25d:; BB(0x0065e25d);
    /* 0065e25d: mov dword ptr [0xa8f9b8], eax */ W32((u32)(0xa8f9b8u), r_eax);
    /* 0065e262: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e269: push 0x938c48 */ { u32 v = 0x938c48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e26e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65e273u); f_008009dc();
    /* 0065e273: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e274: mov dword ptr [0xa8f9bc], eax */ W32((u32)(0xa8f9bcu), r_eax);
    /* 0065e279: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e27c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e283: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e286: ret  */ FN_RET(0x0065e174); r_esp += 4; return;
L_0065e28e:; BB(0x0065e28e);
    /* 0065e28e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e290: jmp 0x65e25d */ goto L_0065e25d;
}

void f_0065e1b1(void)
{
    FN_ENTER(0x0065e1b1);
    /* 0065e1b1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0065e1b8: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1bd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65e1c2u); f_008581c5();
    /* 0065e1c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e1c3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065e1c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e1c8: je 0x65e287 */ if (fZ) goto L_0065e287;
L_0065e1ce:; BB(0x0065e1ce);
    /* 0065e1ce: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0065e1d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065e1dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e1df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1e4: push 0x9c84c8 */ { u32 v = 0x9c84c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1e9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1eb: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65e1f0u); f_005b7a84();
    /* 0065e1f0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e1f3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0065e1fa:; BB(0x0065e1fa);
    /* 0065e1fa: mov dword ptr [0xa8f9b8], eax */ W32((u32)(0xa8f9b8u), r_eax);
    /* 0065e1ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e206: push 0x938c34 */ { u32 v = 0x938c34u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e20b: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65e210u); f_008009dc();
    /* 0065e210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e211: mov dword ptr [0xa8f9bc], eax */ W32((u32)(0xa8f9bcu), r_eax);
    /* 0065e216: jmp 0x65e279 */ goto L_0065e279;
L_0065e279:; BB(0x0065e279);
    /* 0065e279: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e27c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e283: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e286: ret  */ FN_RET(0x0065e1b1); r_esp += 4; return;
L_0065e287:; BB(0x0065e287);
    /* 0065e287: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e289: jmp 0x65e1fa */ goto L_0065e1fa;
}

void f_0065e218(void)
{
    FN_ENTER(0x0065e218);
    /* 0065e218: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0065e21f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e224: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65e229u); f_008581c5();
    /* 0065e229: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e22a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065e22d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e22f: je 0x65e28e */ if (fZ) goto L_0065e28e;
L_0065e231:; BB(0x0065e231);
    /* 0065e231: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0065e238: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065e23f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e242: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e247: push 0x9c8480 */ { u32 v = 0x9c8480u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e24c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e24e: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65e253u); f_005b7a84();
    /* 0065e253: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e256: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0065e25d:; BB(0x0065e25d);
    /* 0065e25d: mov dword ptr [0xa8f9b8], eax */ W32((u32)(0xa8f9b8u), r_eax);
    /* 0065e262: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e269: push 0x938c48 */ { u32 v = 0x938c48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e26e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65e273u); f_008009dc();
    /* 0065e273: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e274: mov dword ptr [0xa8f9bc], eax */ W32((u32)(0xa8f9bcu), r_eax);
    /* 0065e279: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e27c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e283: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e286: ret  */ FN_RET(0x0065e218); r_esp += 4; return;
L_0065e28e:; BB(0x0065e28e);
    /* 0065e28e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e290: jmp 0x65e25d */ goto L_0065e25d;
}

void f_0065e294(void) /* sub_65E294 */
{
    FN_ENTER(0x0065e294);
    /* 0065e294: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e295: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065e297: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065e299: call 0x65e2b8 */ r_esp -= 4; W32(r_esp, 0x65e29eu); f_0065e2b8();
    /* 0065e29e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065e2a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065e2a4: jne 0x65e2aa */ if (!fZ) goto L_0065e2aa;
L_0065e2a6:; BB(0x0065e2a6);
    /* 0065e2a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065e2a7: ret 4 */ FN_RET(0x0065e294); r_esp += 8; return;
L_0065e2aa:; BB(0x0065e2aa);
    /* 0065e2aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65e2b0u); f_005c2f74();
    /* 0065e2b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e2b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065e2b2: ret 4 */ FN_RET(0x0065e294); r_esp += 8; return;
}

void f_0065e2b8(void) /* sub_65E2B8 */
{
    FN_ENTER(0x0065e2b8);
    /* 0065e2b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e2bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2bd: push 0x8e79f0 */ { u32 v = 0x8e79f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065e2c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065e2d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e2d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065e2d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065e2d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065e2dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065e2df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065e2e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065e2e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e2ec: mov dword ptr [eax], 0xb332d8 */ W32((u32)(r_eax), 0xb332d8u);
    /* 0065e2f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2f3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65e2f8u); f_007b4e84();
    /* 0065e2f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e2f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e2fc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65e301u); f_007b9c8c();
    /* 0065e301: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e308: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e30b: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65e310u); f_007b4aec();
    /* 0065e310: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e313: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e31a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e31c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e31d: ret  */ FN_RET(0x0065e2b8); r_esp += 4; return;
}

void f_0065e320(void) /* sub_65E320 */
{
    FN_ENTER(0x0065e320);
    /* 0065e320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e321: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e322: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065e324: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0065e328: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0065e32d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065e330: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065e333: je 0x65e37f */ if (fZ) goto L_0065e37f;
L_0065e335:; BB(0x0065e335);
    /* 0065e335: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0065e33a: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0065e33d: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065e342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e343: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e344: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x65e349u); f_0078ea50();
    /* 0065e349: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0065e34c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0065e34f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065e351: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065e353: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065e355: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065e356: jbe 0x65e36b */ if ((fC||fZ)) goto L_0065e36b;
L_0065e358:; BB(0x0065e358);
    /* 0065e358: mov edx, 1 */ r_edx = 0x1u;
    /* 0065e35d: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 0065e361: mov eax, 1 */ r_eax = 0x1u;
    /* 0065e366: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e367: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e368: ret 8 */ FN_RET(0x0065e320); r_esp += 12; return;
L_0065e36b:; BB(0x0065e36b);
    /* 0065e36b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e36f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065e371: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e375: call 0x7ba468 */ r_esp -= 4; W32(r_esp, 0x65e37au); f_007ba468();
    /* 0065e37a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e37b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e37c: ret 8 */ FN_RET(0x0065e320); r_esp += 12; return;
L_0065e37f:; BB(0x0065e37f);
    /* 0065e37f: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 0065e383: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e384: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e385: ret 8 */ FN_RET(0x0065e320); r_esp += 12; return;
}

void f_0065e388(void) /* sub_65E388 */
{
    FN_ENTER(0x0065e388);
    /* 0065e388: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0065e38e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e390: jne 0x65e398 */ if (!fZ) goto L_0065e398;
L_0065e392:; BB(0x0065e392);
    /* 0065e392: call 0x65e3d4 */ r_esp -= 4; W32(r_esp, 0x65e397u); f_0065e3d4();
    /* 0065e397: ret  */ FN_RET(0x0065e388); r_esp += 4; return;
L_0065e398:; BB(0x0065e398);
    /* 0065e398: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065e39b: jne 0x65e3a2 */ if (!fZ) goto L_0065e3a2;
L_0065e39d:; BB(0x0065e39d);
    /* 0065e39d: call 0x65e3a4 */ r_esp -= 4; W32(r_esp, 0x65e3a2u); f_0065e3a4();
L_0065e3a2:; BB(0x0065e3a2);
    /* 0065e3a2: ret  */ FN_RET(0x0065e388); r_esp += 4; return;
}

void f_0065e3a4(void) /* sub_65E3A4 */
{
    FN_ENTER(0x0065e3a4);
    /* 0065e3a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3a5: mov edi, ecx */ r_edi = r_ecx;
    /* 0065e3a7: movzx eax, word ptr [edi + 0xba] */ r_eax = (u32)R16((u32)(r_edi+0xbau));
    /* 0065e3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3af: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65e3b4u); f_00816eec();
    /* 0065e3b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e3b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065e3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065e3ba: jne 0x65e3d1 */ if (!fZ) goto L_0065e3d1;
L_0065e3bc:; BB(0x0065e3bc);
    /* 0065e3bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3c0: mov ecx, edi */ r_ecx = r_edi;
    /* 0065e3c2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x65e3c7u); f_007b52c4();
    /* 0065e3c7: mov dword ptr [edi + 0xac], 0 */ W32((u32)(r_edi+0xacu), 0x0u);
L_0065e3d1:; BB(0x0065e3d1);
    /* 0065e3d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065e3d2: ret  */ FN_RET(0x0065e3a4); r_esp += 4; return;
}

void f_0065e3d4(void) /* sub_65E3D4 */
{
    FN_ENTER(0x0065e3d4);
    /* 0065e3d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3d5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e3d8: mov esi, ecx */ r_esi = r_ecx;
    /* 0065e3da: mov edx, dword ptr [esi + 0xc4] */ r_edx = R32((u32)(r_esi+0xc4u));
    /* 0065e3e0: fld dword ptr [0x938c8c] */ FPUSH(R_F32((u32)(0x938c8cu)));
    /* 0065e3e6: fadd dword ptr [esi + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb0u));
    /* 0065e3ec: fst dword ptr [esi + 0xb0] */ W_F32((u32)(r_esi+0xb0u), ST(0));
    /* 0065e3f2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065e3f5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065e3f8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065e3fb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065e3fe: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0065e401: fadd dword ptr [eax*4 + 0x938c70] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x938c70u));
    /* 0065e408: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065e40a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065e40c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065e40d: jae 0x65e419 */ if (!fC) goto L_0065e419;
L_0065e40f:; BB(0x0065e40f);
    /* 0065e40f: mov dword ptr [esi + 0xb0], 0 */ W32((u32)(r_esi+0xb0u), 0x0u);
L_0065e419:; BB(0x0065e419);
    /* 0065e419: movzx eax, word ptr [esi + 0xba] */ r_eax = (u32)R16((u32)(r_esi+0xbau));
    /* 0065e420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e421: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65e426u); f_00816eec();
    /* 0065e426: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e427: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065e42a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e42d: je 0x65e434 */ if (fZ) goto L_0065e434;
L_0065e42f:; BB(0x0065e42f);
    /* 0065e42f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065e432: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065e433: ret  */ FN_RET(0x0065e3d4); r_esp += 4; return;
L_0065e434:; BB(0x0065e434);
    /* 0065e434: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e438: mov ecx, esi */ r_ecx = r_esi;
    /* 0065e43a: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x65e43fu); f_007b52ec();
    /* 0065e43f: mov dword ptr [esi + 0xac], 1 */ W32((u32)(r_esi+0xacu), 0x1u);
    /* 0065e449: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065e44c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065e44d: ret  */ FN_RET(0x0065e3d4); r_esp += 4; return;
}

void f_0065e450(void) /* sub_65E450 */
{
    FN_ENTER(0x0065e450);
    /* 0065e450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e451: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e452: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065e454: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0065e456: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065e458: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e45d: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e462: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65e465u); call_ind(t); }
    /* 0065e465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065e467: je 0x65e505 */ if (fZ) goto L_0065e505;
L_0065e46d:; BB(0x0065e46d);
    /* 0065e46d: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 0065e473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e475: je 0x65e489 */ if (fZ) goto L_0065e489;
L_0065e477:; BB(0x0065e477);
    /* 0065e477: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065e47a: jne 0x65e505 */ if (!fZ) goto L_0065e505;
L_0065e480:; BB(0x0065e480);
    /* 0065e480: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065e482: call 0x65e508 */ r_esp -= 4; W32(r_esp, 0x65e487u); f_0065e508();
    /* 0065e487: jmp 0x65e505 */ goto L_0065e505;
L_0065e489:; BB(0x0065e489);
    /* 0065e489: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0065e48c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e48e: mov esi, eax */ r_esi = r_eax;
L_0065e490:; BB(0x0065e490);
    /* 0065e490: movzx edx, word ptr [ebx + 0xb8] */ r_edx = (u32)R16((u32)(r_ebx+0xb8u));
    /* 0065e497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e498: push dword ptr [ebx + esi*4 + 0xc8] */ { u32 v = R32((u32)(r_ebx+r_esi*4+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e49f: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65e4a4u); f_0081a588();
    /* 0065e4a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e4a7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065e4aa: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e4ad: jl 0x65e490 */ if ((fS!=fO)) goto L_0065e490;
L_0065e4af:; BB(0x0065e4af);
    /* 0065e4af: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0065e4b2: mov ecx, dword ptr [0xa8f9bc] */ r_ecx = R32((u32)(0xa8f9bcu));
    /* 0065e4b8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65e4bdu); f_00829cc8();
    /* 0065e4bd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65e4c2u); f_0082d7b0();
    /* 0065e4c2: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0065e4c5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65e4cau); f_0082d838();
    /* 0065e4ca: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0065e4cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e4cf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65e4d4u); f_0082d8bc();
    /* 0065e4d4: mov ecx, dword ptr [ebx + 0xc0] */ r_ecx = R32((u32)(r_ebx+0xc0u));
    /* 0065e4da: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65e4dfu); f_00831758();
    /* 0065e4df: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65e4e4u); f_0082dbac();
    /* 0065e4e4: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e4ea: mov ecx, dword ptr [ebx + 0xbc] */ r_ecx = R32((u32)(r_ebx+0xbcu));
    /* 0065e4f0: mov edx, dword ptr [ebx + 0xc4] */ r_edx = R32((u32)(r_ebx+0xc4u));
    /* 0065e4f6: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65e4fbu); f_0083bd00();
    /* 0065e4fb: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65e500u); f_0082dab0();
    /* 0065e500: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65e505u); f_0082da80();
L_0065e505:; BB(0x0065e505);
    /* 0065e505: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065e507: ret  */ FN_RET(0x0065e450); r_esp += 4; return;
}

void f_0065e508(void) /* sub_65E508 */
{
    FN_ENTER(0x0065e508);
    /* 0065e508: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e509: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065e50b: mov ecx, dword ptr [0xa8f9bc] */ r_ecx = R32((u32)(0xa8f9bcu));
    /* 0065e511: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65e516u); f_00829cc8();
    /* 0065e516: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65e51bu); f_0082d7b0();
    /* 0065e51b: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0065e51e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65e523u); f_0082d838();
    /* 0065e523: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0065e526: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e528: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65e52du); f_0082d8bc();
    /* 0065e52d: mov ecx, dword ptr [ebx + 0xc0] */ r_ecx = R32((u32)(r_ebx+0xc0u));
    /* 0065e533: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65e538u); f_00831758();
    /* 0065e538: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65e53du); f_0082da80();
    /* 0065e53d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065e53e: ret  */ FN_RET(0x0065e508); r_esp += 4; return;
}

void f_0065e540(void)
{
    FN_ENTER(0x0065e540);
    /* 0065e540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e541: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e545: push 0x8e7a18 */ { u32 v = 0x8e7a18u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e54a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065e550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e551: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065e558: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e55b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065e55e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065e561: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065e564: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065e567: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e56c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065e573: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65e578u); f_005caba4();
    /* 0065e578: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e579: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065e57c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e57e: je 0x65e5b7 */ if (fZ) goto L_0065e5b7;
L_0065e580:; BB(0x0065e580);
    /* 0065e580: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065e587: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065e58e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e591: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e597: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e59a: call 0x65e5bc */ r_esp -= 4; W32(r_esp, 0x65e59fu); f_0065e5bc();
    /* 0065e59f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e5a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065e5a9:; BB(0x0065e5a9);
    /* 0065e5a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e5ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e5b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e5b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e5b6: ret  */ FN_RET(0x0065e540); r_esp += 4; return;
L_0065e5b7:; BB(0x0065e5b7);
    /* 0065e5b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065e5b9: jmp 0x65e5a9 */ goto L_0065e5a9;
}

void f_0065e5bc(void) /* sub_65E5BC */
{
    FN_ENTER(0x0065e5bc);
    /* 0065e5bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e5bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e5bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e5c1: push 0x8e7a34 */ { u32 v = 0x8e7a34u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e5c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065e5cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e5cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065e5d4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e5d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065e5da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065e5dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065e5e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065e5e3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065e5e6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e5e9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0065e5ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065e5ef: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65e5f4u); f_007b4b48();
    /* 0065e5f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065e5fb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e5fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e601: mov dword ptr [ecx], 0xb332d8 */ W32((u32)(r_ecx), 0xb332d8u);
    /* 0065e607: mov eax, dword ptr [0x9c8698] */ r_eax = R32((u32)(0x9c8698u));
    /* 0065e60c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e60d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065e610: call dword ptr [0xb332ec] */ { u32 t = R32((u32)(0xb332ecu)); r_esp -= 4; W32(r_esp, 0x65e616u); call_ind(t); }
    /* 0065e616: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e619: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 0065e61f: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 0065e622: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0065e625: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0065e629: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065e62e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065e631: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0065e634: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065e637: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0065e63a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065e63d: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 0065e647: mov word ptr [edx + 0xba], cx */ W16((u32)(r_edx+0xbau), (u16)r_ecx);
    /* 0065e64e: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 0065e658: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e65a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0065e65c: jge 0x65e660 */ if ((fS==fO)) goto L_0065e660;
L_0065e65e:; BB(0x0065e65e);
    /* 0065e65e: mov esi, eax */ r_esi = r_eax;
L_0065e660:; BB(0x0065e660);
    /* 0065e660: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0065e666: mov ebx, 3 */ r_ebx = 0x3u;
    /* 0065e66b: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e66e: jle 0x65e672 */ if ((fZ||fS!=fO)) goto L_0065e672;
L_0065e670:; BB(0x0065e670);
    /* 0065e670: mov esi, ebx */ r_esi = r_ebx;
L_0065e672:; BB(0x0065e672);
    /* 0065e672: movzx edi, word ptr [esi*2 + 0x938c7c] */ r_edi = (u32)R16((u32)(r_esi*2+0x938c7cu));
    /* 0065e67a: mov word ptr [edx + 0xb8], di */ W16((u32)(r_edx+0xb8u), (u16)r_edi);
    /* 0065e681: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065e684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e686: jne 0x65e6cc */ if (!fZ) goto L_0065e6cc;
L_0065e688:; BB(0x0065e688);
    /* 0065e688: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e68e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e690: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65e695u); f_005b8610();
    /* 0065e695: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e698: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e69a: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065e6a0: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e6a6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65e6abu); f_005b8610();
    /* 0065e6ab: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e6ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6b0: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0065e6b6: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e6bc: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65e6c1u); f_005b8638();
    /* 0065e6c1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e6c4: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 0065e6ca: jmp 0x65e70e */ goto L_0065e70e;
L_0065e6cc:; BB(0x0065e6cc);
    /* 0065e6cc: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e6d2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6d4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65e6d9u); f_005b8610();
    /* 0065e6d9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e6dc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6de: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065e6e4: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e6ea: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65e6efu); f_005b8610();
    /* 0065e6ef: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e6f2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6f4: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0065e6fa: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e700: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65e705u); f_005b8638();
    /* 0065e705: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e708: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
L_0065e70e:; BB(0x0065e70e);
    /* 0065e70e: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 0065e714: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e716: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0065e71c: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 0065e722: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 0065e728: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 0065e72e: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 0065e734: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0065e73a: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 0065e740: mov dword ptr [ecx + 0xe4], eax */ W32((u32)(r_ecx+0xe4u), r_eax);
    /* 0065e746: mov dword ptr [ecx + 0xe8], eax */ W32((u32)(r_ecx+0xe8u), r_eax);
    /* 0065e74c: mov dword ptr [ecx + 0xec], eax */ W32((u32)(r_ecx+0xecu), r_eax);
    /* 0065e752: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 0065e758: mov dword ptr [ecx + 0xf4], eax */ W32((u32)(r_ecx+0xf4u), r_eax);
    /* 0065e75e: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0065e761: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e763: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e765: je 0x65e780 */ if (fZ) goto L_0065e780;
L_0065e767:; BB(0x0065e767);
    /* 0065e767: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065e76a: mov dword ptr [ecx + ebx*4 + 0xc8], eax */ W32((u32)(r_ecx+r_ebx*4+0xc8u), r_eax);
    /* 0065e771: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0065e774: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e777: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e779: je 0x65e780 */ if (fZ) goto L_0065e780;
L_0065e77b:; BB(0x0065e77b);
    /* 0065e77b: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e77e: jl 0x65e767 */ if ((fS!=fO)) goto L_0065e767;
L_0065e780:; BB(0x0065e780);
    /* 0065e780: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e782: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0065e788: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065e789: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e78b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065e78d: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065e790: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e792: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065e794: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0065e797: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e799: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e79b: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e79d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e79f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e7a1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e7a3: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e7a5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e7a7: lea esi, [ebx + ebx + 0x9c84e0] */ r_esi = (u32)(r_ebx+r_ebx+0x9c84e0u);
    /* 0065e7ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7af: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65e7b4u); f_007b9a88();
    /* 0065e7b4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e7b7: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065e7ba: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065e7bf: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065e7c2: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65e7c7u); f_007b4f54();
    /* 0065e7c7: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e7ca: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x65e7cfu); f_007b999c();
    /* 0065e7cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e7d0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e7d3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e7d6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065e7d9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e7dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e7df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e7e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e7e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e7e9: ret 8 */ FN_RET(0x0065e5bc); r_esp += 12; return;
}

void f_0065e7ec(void) /* sub_65E7EC */
{
    FN_ENTER(0x0065e7ec);
    /* 0065e7ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065e7ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065e7f1: call 0x65e810 */ r_esp -= 4; W32(r_esp, 0x65e7f6u); f_0065e810();
    /* 0065e7f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065e7fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065e7fc: jne 0x65e802 */ if (!fZ) goto L_0065e802;
L_0065e7fe:; BB(0x0065e7fe);
    /* 0065e7fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065e7ff: ret 4 */ FN_RET(0x0065e7ec); r_esp += 8; return;
L_0065e802:; BB(0x0065e802);
    /* 0065e802: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e803: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65e808u); f_005c2f74();
    /* 0065e808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e809: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065e80a: ret 4 */ FN_RET(0x0065e7ec); r_esp += 8; return;
}

void f_0065e810(void) /* sub_65E810 */
{
    FN_ENTER(0x0065e810);
    /* 0065e810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e811: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e815: push 0x8e7a74 */ { u32 v = 0x8e7a74u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e81a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065e820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e821: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065e828: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e82b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065e82e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065e831: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065e834: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065e837: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065e83a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065e841: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e844: mov dword ptr [eax], 0xb333e0 */ W32((u32)(r_eax), 0xb333e0u);
    /* 0065e84a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e84b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65e850u); f_007b4e84();
    /* 0065e850: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e851: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e854: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65e859u); f_007b9c8c();
    /* 0065e859: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0065e860: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e863: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e869: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x65e86eu); f_006111bc();
    /* 0065e86e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e875: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e878: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x65e87du); f_006296c8();
    /* 0065e87d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e880: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e887: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e889: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e88a: ret  */ FN_RET(0x0065e810); r_esp += 4; return;
}

void f_0065e88c(void) /* sub_65E88C */
{
    FN_ENTER(0x0065e88c);
    /* 0065e88c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e88d: mov edi, ecx */ r_edi = r_ecx;
    /* 0065e88f: lea ecx, [edi + 0xf0] */ r_ecx = (u32)(r_edi+0xf0u);
    /* 0065e895: call 0x61132c */ r_esp -= 4; W32(r_esp, 0x65e89au); f_0061132c();
    /* 0065e89a: mov ecx, edi */ r_ecx = r_edi;
    /* 0065e89c: call 0x6587b8 */ r_esp -= 4; W32(r_esp, 0x65e8a1u); f_006587b8();
    /* 0065e8a1: fld dword ptr [0x938cdc] */ FPUSH(R_F32((u32)(0x938cdcu)));
    /* 0065e8a7: fadd dword ptr [edi + 0x110] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x110u));
    /* 0065e8ad: fstp dword ptr [edi + 0x110] */ W_F32((u32)(r_edi+0x110u), ST(0)); FPOP();
    /* 0065e8b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065e8b4: ret  */ FN_RET(0x0065e88c); r_esp += 4; return;
}

void f_0065e8b8(void) /* sub_65E8B8 */
{
    FN_ENTER(0x0065e8b8);
    /* 0065e8b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8bb: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e8be: mov edi, ecx */ r_edi = r_ecx;
    /* 0065e8c0: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8c5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0065e8c7: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8cc: mov ecx, edi */ r_ecx = r_edi;
    /* 0065e8ce: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65e8d1u); call_ind(t); }
    /* 0065e8d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e8d3: jne 0x65e8dc */ if (!fZ) goto L_0065e8dc;
L_0065e8d5:; BB(0x0065e8d5);
    /* 0065e8d5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065e8d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065e8d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065e8da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065e8db: ret  */ FN_RET(0x0065e8b8); r_esp += 4; return;
L_0065e8dc:; BB(0x0065e8dc);
    /* 0065e8dc: lea esi, [edi + 0xf0] */ r_esi = (u32)(r_edi+0xf0u);
    /* 0065e8e2: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0065e8e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e8e6: mov ecx, esi */ r_ecx = r_esi;
    /* 0065e8e8: call 0x6113a0 */ r_esp -= 4; W32(r_esp, 0x65e8edu); f_006113a0();
    /* 0065e8ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e8ef: je 0x65ebe5 */ if (fZ) goto L_0065ebe5;
L_0065e8f5:; BB(0x0065e8f5);
    /* 0065e8f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0065e8f7: call 0x611374 */ r_esp -= 4; W32(r_esp, 0x65e8fcu); f_00611374();
    /* 0065e8fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e8fe: je 0x65ea87 */ if (fZ) goto L_0065ea87;
L_0065e904:; BB(0x0065e904);
    /* 0065e904: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0065e90a: mov ecx, esi */ r_ecx = r_esi;
    /* 0065e90c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x65e90fu); call_ind(t); }
    /* 0065e90f: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0065e914: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065e919: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0065e91e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e920: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0065e924: mov ebp, eax */ r_ebp = r_eax;
L_0065e926:; BB(0x0065e926);
    /* 0065e926: movzx edx, word ptr [edi + 0xe8] */ r_edx = (u32)R16((u32)(r_edi+0xe8u));
    /* 0065e92d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e92e: push dword ptr [ebp + 0xa8f9e0] */ { u32 v = R32((u32)(r_ebp+0xa8f9e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e934: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65e939u); f_0081a588();
    /* 0065e939: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e93c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065e93f: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e942: jl 0x65e926 */ if ((fS!=fO)) goto L_0065e926;
L_0065e944:; BB(0x0065e944);
    /* 0065e944: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0065e948: mov ecx, dword ptr [0xa8f9f0] */ r_ecx = R32((u32)(0xa8f9f0u));
    /* 0065e94e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65e953u); f_00829cc8();
    /* 0065e953: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065e959: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e95b: je 0x65e991 */ if (fZ) goto L_0065e991;
L_0065e95d:; BB(0x0065e95d);
    /* 0065e95d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e95f: fld dword ptr [edi + 0x110] */ FPUSH(R_F32((u32)(r_edi+0x110u)));
    /* 0065e965: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0065e968: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0065e96c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065e971: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065e975: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065e979: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065e97d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0065e980: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0065e985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e988: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x65e98bu); call_ind(t); }
    /* 0065e98b: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
L_0065e991:; BB(0x0065e991);
    /* 0065e991: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e993: je 0x65e9a9 */ if (fZ) goto L_0065e9a9;
L_0065e995:; BB(0x0065e995);
    /* 0065e995: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e997: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x65e99cu); f_00835f78();
    /* 0065e99c: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065e9a2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e9a4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065e9a6: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x65e9a9u); call_ind(t); }
L_0065e9a9:; BB(0x0065e9a9);
    /* 0065e9a9: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 0065e9af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e9b1: jne 0x65e9fc */ if (!fZ) goto L_0065e9fc;
L_0065e9b3:; BB(0x0065e9b3);
    /* 0065e9b3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65e9b8u); f_0082d7b0();
    /* 0065e9b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065e9ba: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65e9bfu); f_0082d838();
    /* 0065e9bf: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065e9c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e9c4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65e9c9u); f_0082d8bc();
    /* 0065e9c9: mov ecx, dword ptr [0xa8fa00] */ r_ecx = R32((u32)(0xa8fa00u));
    /* 0065e9cf: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65e9d4u); f_00831758();
    /* 0065e9d4: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65e9d9u); f_0082dbac();
    /* 0065e9d9: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e9df: mov ecx, dword ptr [0xa8f9fc] */ r_ecx = R32((u32)(0xa8f9fcu));
    /* 0065e9e5: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065e9eb: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65e9f0u); f_0083bd00();
    /* 0065e9f0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65e9f5u); f_0082dab0();
    /* 0065e9f5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65e9fau); f_0082da80();
    /* 0065e9fa: jmp 0x65ea54 */ goto L_0065ea54;
L_0065e9fc:; BB(0x0065e9fc);
    /* 0065e9fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e9ff: jne 0x65ea54 */ if (!fZ) goto L_0065ea54;
L_0065ea01:; BB(0x0065ea01);
    /* 0065ea01: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65ea06u); f_0082d7b0();
    /* 0065ea06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065ea08: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65ea0du); f_0082d838();
    /* 0065ea0d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065ea10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ea12: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65ea17u); f_0082d8bc();
    /* 0065ea17: push dword ptr [edi + 0xec] */ { u32 v = R32((u32)(r_edi+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ea1d: mov ecx, dword ptr [0xa8fa00] */ r_ecx = R32((u32)(0xa8fa00u));
    /* 0065ea23: mov edx, dword ptr [0xa8f9f8] */ r_edx = R32((u32)(0xa8f9f8u));
    /* 0065ea29: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65ea2eu); f_0083bd00();
    /* 0065ea2e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65ea33u); f_0082dbac();
    /* 0065ea33: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ea39: mov ecx, dword ptr [0xa8f9fc] */ r_ecx = R32((u32)(0xa8f9fcu));
    /* 0065ea3f: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065ea45: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65ea4au); f_0083bd00();
    /* 0065ea4a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65ea4fu); f_0082dab0();
    /* 0065ea4f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65ea54u); f_0082da80();
L_0065ea54:; BB(0x0065ea54);
    /* 0065ea54: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065ea5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ea5c: je 0x65ea68 */ if (fZ) goto L_0065ea68;
L_0065ea5e:; BB(0x0065ea5e);
    /* 0065ea5e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065ea60: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x65ea63u); call_ind(t); }
    /* 0065ea63: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x65ea68u); f_0083603c();
L_0065ea68:; BB(0x0065ea68);
    /* 0065ea68: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0065ea6d: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065ea72: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0065ea77: mov edx, dword ptr [edi + 0xf0] */ r_edx = R32((u32)(r_edi+0xf0u));
    /* 0065ea7d: mov ecx, esi */ r_ecx = r_esi;
    /* 0065ea7f: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x65ea82u); call_ind(t); }
    /* 0065ea82: jmp 0x65ebe5 */ goto L_0065ebe5;
L_0065ea87:; BB(0x0065ea87);
    /* 0065ea87: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0065ea8c: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065ea91: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0065ea96: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0065ea98:; BB(0x0065ea98);
    /* 0065ea98: movzx eax, word ptr [edi + 0xe8] */ r_eax = (u32)R16((u32)(r_edi+0xe8u));
    /* 0065ea9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eaa0: push dword ptr [esi + 0xa8f9e0] */ { u32 v = R32((u32)(r_esi+0xa8f9e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065eaa6: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65eaabu); f_0081a588();
    /* 0065eaab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065eaae: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065eab1: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065eab4: jl 0x65ea98 */ if ((fS!=fO)) goto L_0065ea98;
L_0065eab6:; BB(0x0065eab6);
    /* 0065eab6: mov ecx, dword ptr [0xa8f9f0] */ r_ecx = R32((u32)(0xa8f9f0u));
    /* 0065eabc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65eac1u); f_00829cc8();
    /* 0065eac1: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065eac7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eac9: je 0x65eaff */ if (fZ) goto L_0065eaff;
L_0065eacb:; BB(0x0065eacb);
    /* 0065eacb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065eacd: fld dword ptr [edi + 0x110] */ FPUSH(R_F32((u32)(r_edi+0x110u)));
    /* 0065ead3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0065ead6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0065eada: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065eadf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065eae3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065eae7: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065eaeb: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0065eaee: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0065eaf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eaf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eaf6: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x65eaf9u); call_ind(t); }
    /* 0065eaf9: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
L_0065eaff:; BB(0x0065eaff);
    /* 0065eaff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eb01: je 0x65eb17 */ if (fZ) goto L_0065eb17;
L_0065eb03:; BB(0x0065eb03);
    /* 0065eb03: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065eb05: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x65eb0au); f_00835f78();
    /* 0065eb0a: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065eb10: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb12: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065eb14: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x65eb17u); call_ind(t); }
L_0065eb17:; BB(0x0065eb17);
    /* 0065eb17: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 0065eb1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eb1f: jne 0x65eb6a */ if (!fZ) goto L_0065eb6a;
L_0065eb21:; BB(0x0065eb21);
    /* 0065eb21: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65eb26u); f_0082d7b0();
    /* 0065eb26: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065eb28: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65eb2du); f_0082d838();
    /* 0065eb2d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065eb30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065eb32: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65eb37u); f_0082d8bc();
    /* 0065eb37: mov ecx, dword ptr [0xa8fa00] */ r_ecx = R32((u32)(0xa8fa00u));
    /* 0065eb3d: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65eb42u); f_00831758();
    /* 0065eb42: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65eb47u); f_0082dbac();
    /* 0065eb47: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065eb4d: mov ecx, dword ptr [0xa8f9fc] */ r_ecx = R32((u32)(0xa8f9fcu));
    /* 0065eb53: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065eb59: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65eb5eu); f_0083bd00();
    /* 0065eb5e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65eb63u); f_0082dab0();
    /* 0065eb63: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65eb68u); f_0082da80();
    /* 0065eb68: jmp 0x65ebc2 */ goto L_0065ebc2;
L_0065eb6a:; BB(0x0065eb6a);
    /* 0065eb6a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eb6d: jne 0x65ebc2 */ if (!fZ) goto L_0065ebc2;
L_0065eb6f:; BB(0x0065eb6f);
    /* 0065eb6f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65eb74u); f_0082d7b0();
    /* 0065eb74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065eb76: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65eb7bu); f_0082d838();
    /* 0065eb7b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065eb7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065eb80: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65eb85u); f_0082d8bc();
    /* 0065eb85: push dword ptr [edi + 0xec] */ { u32 v = R32((u32)(r_edi+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065eb8b: mov ecx, dword ptr [0xa8fa00] */ r_ecx = R32((u32)(0xa8fa00u));
    /* 0065eb91: mov edx, dword ptr [0xa8f9f8] */ r_edx = R32((u32)(0xa8f9f8u));
    /* 0065eb97: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65eb9cu); f_0083bd00();
    /* 0065eb9c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65eba1u); f_0082dbac();
    /* 0065eba1: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065eba7: mov ecx, dword ptr [0xa8f9fc] */ r_ecx = R32((u32)(0xa8f9fcu));
    /* 0065ebad: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065ebb3: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65ebb8u); f_0083bd00();
    /* 0065ebb8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65ebbdu); f_0082dab0();
    /* 0065ebbd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65ebc2u); f_0082da80();
L_0065ebc2:; BB(0x0065ebc2);
    /* 0065ebc2: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065ebc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ebca: je 0x65ebd6 */ if (fZ) goto L_0065ebd6;
L_0065ebcc:; BB(0x0065ebcc);
    /* 0065ebcc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065ebce: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x65ebd1u); call_ind(t); }
    /* 0065ebd1: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x65ebd6u); f_0083603c();
L_0065ebd6:; BB(0x0065ebd6);
    /* 0065ebd6: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0065ebdb: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065ebe0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0065ebe5:; BB(0x0065ebe5);
    /* 0065ebe5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ebe8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065ebe9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065ebea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065ebeb: ret  */ FN_RET(0x0065e8b8); r_esp += 4; return;
}

void f_0065e900(void)
{
    FN_ENTER(0x0065e900);
    /* 0065e900: add dword ptr [ecx], 0 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0065e903: add byte ptr [ebx + 0xf087], cl */ { u32 ad = (u32)(r_ebx+0xf087u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065e909: add byte ptr [ebx + 0x1850ffce], cl */ { u32 ad = (u32)(r_ebx+0x1850ffceu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065e90f: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0065e914: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065e919: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0065e91e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e920: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0065e924: mov ebp, eax */ r_ebp = r_eax;
L_0065e926:; BB(0x0065e926);
    /* 0065e926: movzx edx, word ptr [edi + 0xe8] */ r_edx = (u32)R16((u32)(r_edi+0xe8u));
    /* 0065e92d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e92e: push dword ptr [ebp + 0xa8f9e0] */ { u32 v = R32((u32)(r_ebp+0xa8f9e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e934: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65e939u); f_0081a588();
    /* 0065e939: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e93c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065e93f: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e942: jl 0x65e926 */ if ((fS!=fO)) goto L_0065e926;
L_0065e944:; BB(0x0065e944);
    /* 0065e944: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0065e948: mov ecx, dword ptr [0xa8f9f0] */ r_ecx = R32((u32)(0xa8f9f0u));
    /* 0065e94e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65e953u); f_00829cc8();
    /* 0065e953: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065e959: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e95b: je 0x65e991 */ if (fZ) goto L_0065e991;
L_0065e95d:; BB(0x0065e95d);
    /* 0065e95d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e95f: fld dword ptr [edi + 0x110] */ FPUSH(R_F32((u32)(r_edi+0x110u)));
    /* 0065e965: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0065e968: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0065e96c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065e971: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065e975: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065e979: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065e97d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0065e980: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0065e985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e988: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x65e98bu); call_ind(t); }
    /* 0065e98b: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
L_0065e991:; BB(0x0065e991);
    /* 0065e991: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e993: je 0x65e9a9 */ if (fZ) goto L_0065e9a9;
L_0065e995:; BB(0x0065e995);
    /* 0065e995: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e997: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x65e99cu); f_00835f78();
    /* 0065e99c: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065e9a2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e9a4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065e9a6: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x65e9a9u); call_ind(t); }
L_0065e9a9:; BB(0x0065e9a9);
    /* 0065e9a9: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 0065e9af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e9b1: jne 0x65e9fc */ if (!fZ) goto L_0065e9fc;
L_0065e9b3:; BB(0x0065e9b3);
    /* 0065e9b3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65e9b8u); f_0082d7b0();
    /* 0065e9b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065e9ba: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65e9bfu); f_0082d838();
    /* 0065e9bf: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065e9c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e9c4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65e9c9u); f_0082d8bc();
    /* 0065e9c9: mov ecx, dword ptr [0xa8fa00] */ r_ecx = R32((u32)(0xa8fa00u));
    /* 0065e9cf: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65e9d4u); f_00831758();
    /* 0065e9d4: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65e9d9u); f_0082dbac();
    /* 0065e9d9: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065e9df: mov ecx, dword ptr [0xa8f9fc] */ r_ecx = R32((u32)(0xa8f9fcu));
    /* 0065e9e5: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065e9eb: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65e9f0u); f_0083bd00();
    /* 0065e9f0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65e9f5u); f_0082dab0();
    /* 0065e9f5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65e9fau); f_0082da80();
    /* 0065e9fa: jmp 0x65ea54 */ goto L_0065ea54;
L_0065e9fc:; BB(0x0065e9fc);
    /* 0065e9fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e9ff: jne 0x65ea54 */ if (!fZ) goto L_0065ea54;
L_0065ea01:; BB(0x0065ea01);
    /* 0065ea01: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65ea06u); f_0082d7b0();
    /* 0065ea06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065ea08: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65ea0du); f_0082d838();
    /* 0065ea0d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065ea10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ea12: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65ea17u); f_0082d8bc();
    /* 0065ea17: push dword ptr [edi + 0xec] */ { u32 v = R32((u32)(r_edi+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ea1d: mov ecx, dword ptr [0xa8fa00] */ r_ecx = R32((u32)(0xa8fa00u));
    /* 0065ea23: mov edx, dword ptr [0xa8f9f8] */ r_edx = R32((u32)(0xa8f9f8u));
    /* 0065ea29: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65ea2eu); f_0083bd00();
    /* 0065ea2e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65ea33u); f_0082dbac();
    /* 0065ea33: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ea39: mov ecx, dword ptr [0xa8f9fc] */ r_ecx = R32((u32)(0xa8f9fcu));
    /* 0065ea3f: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065ea45: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65ea4au); f_0083bd00();
    /* 0065ea4a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65ea4fu); f_0082dab0();
    /* 0065ea4f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65ea54u); f_0082da80();
L_0065ea54:; BB(0x0065ea54);
    /* 0065ea54: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065ea5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ea5c: je 0x65ea68 */ if (fZ) goto L_0065ea68;
L_0065ea5e:; BB(0x0065ea5e);
    /* 0065ea5e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065ea60: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x65ea63u); call_ind(t); }
    /* 0065ea63: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x65ea68u); f_0083603c();
L_0065ea68:; BB(0x0065ea68);
    /* 0065ea68: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0065ea6d: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065ea72: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0065ea77: mov edx, dword ptr [edi + 0xf0] */ r_edx = R32((u32)(r_edi+0xf0u));
    /* 0065ea7d: mov ecx, esi */ r_ecx = r_esi;
    /* 0065ea7f: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x65ea82u); call_ind(t); }
    /* 0065ea82: jmp 0x65ebe5 */ goto L_0065ebe5;
L_0065ebe5:; BB(0x0065ebe5);
    /* 0065ebe5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ebe8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065ebe9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065ebea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065ebeb: ret  */ FN_RET(0x0065e900); r_esp += 4; return;
}

void f_0065ebec(void) /* sub_65EBEC */
{
    FN_ENTER(0x0065ebec);
    /* 0065ebec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065ebed: mov edi, ecx */ r_edi = r_ecx;
    /* 0065ebef: mov ecx, edi */ r_ecx = r_edi;
    /* 0065ebf1: call 0x629a64 */ r_esp -= 4; W32(r_esp, 0x65ebf6u); f_00629a64();
    /* 0065ebf6: push 0x938c5c */ { u32 v = 0x938c5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ebfb: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec00: mov edx, dword ptr [edi + 0x8c] */ r_edx = R32((u32)(r_edi+0x8cu));
    /* 0065ec06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065ec08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065ec0a: jg 0x65ec0e */ if ((!fZ&&fS==fO)) goto L_0065ec0e;
L_0065ec0c:; BB(0x0065ec0c);
    /* 0065ec0c: mov edx, eax */ r_edx = r_eax;
L_0065ec0e:; BB(0x0065ec0e);
    /* 0065ec0e: mov dword ptr [edi + 0x8c], edx */ W32((u32)(r_edi+0x8cu), r_edx);
    /* 0065ec14: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0065ec17: movzx eax, word ptr [edx*2 + 0x938ccc] */ r_eax = (u32)R16((u32)(r_edx*2+0x938cccu));
    /* 0065ec1f: mov word ptr [edi + 0xe8], ax */ W16((u32)(r_edi+0xe8u), (u16)r_eax);
    /* 0065ec26: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x65ec2bu); f_0061cdb0();
    /* 0065ec2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ec2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065ec2f: ret  */ FN_RET(0x0065ebec); r_esp += 4; return;
}

void f_0065ec30(void) /* sub_65EC30 */
{
    FN_ENTER(0x0065ec30);
    /* 0065ec30: mov ecx, dword ptr [0xa8f9dc] */ r_ecx = R32((u32)(0xa8f9dcu));
    /* 0065ec36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ec38: je 0x65ec4c */ if (fZ) goto L_0065ec4c;
L_0065ec3a:; BB(0x0065ec3a);
    /* 0065ec3a: je 0x65ec42 */ if (fZ) goto L_0065ec42;
L_0065ec3c:; BB(0x0065ec3c);
    /* 0065ec3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec3e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065ec40: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x65ec42u); call_ind(t); }
L_0065ec42:; BB(0x0065ec42);
    /* 0065ec42: mov dword ptr [0xa8f9dc], 0 */ W32((u32)(0xa8f9dcu), 0x0u);
L_0065ec4c:; BB(0x0065ec4c);
    /* 0065ec4c: mov ecx, dword ptr [0xa8fa04] */ r_ecx = R32((u32)(0xa8fa04u));
    /* 0065ec52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ec54: je 0x65ec69 */ if (fZ) goto L_0065ec69;
L_0065ec56:; BB(0x0065ec56);
    /* 0065ec56: je 0x65ec5f */ if (fZ) goto L_0065ec5f;
L_0065ec58:; BB(0x0065ec58);
    /* 0065ec58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec5a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65ec5fu); f_004066a8();
L_0065ec5f:; BB(0x0065ec5f);
    /* 0065ec5f: mov dword ptr [0xa8fa04], 0 */ W32((u32)(0xa8fa04u), 0x0u);
L_0065ec69:; BB(0x0065ec69);
    /* 0065ec69: push dword ptr [0xa8f9f0] */ { u32 v = R32((u32)(0xa8f9f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ec6f: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x65ec74u); f_00800b5c();
    /* 0065ec74: mov dword ptr [0xa8f9f0], 0 */ W32((u32)(0xa8f9f0u), 0x0u);
    /* 0065ec7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065ec7f: ret  */ FN_RET(0x0065ec30); r_esp += 4; return;
}

void f_0065ec80(void)
{
    FN_ENTER(0x0065ec80);
    /* 0065ec80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec81: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ec83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec85: push 0x8e7a9c */ { u32 v = 0x8e7a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065ec90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ec98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ec9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ec9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065eca1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065eca4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065eca7: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ecac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065ecb3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65ecb8u); f_005caba4();
    /* 0065ecb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065ecb9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065ecbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ecbe: je 0x65ecf7 */ if (fZ) goto L_0065ecf7;
L_0065ecc0:; BB(0x0065ecc0);
    /* 0065ecc0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065ecc7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065ecce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ecd1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ecd7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ecda: call 0x65ecfc */ r_esp -= 4; W32(r_esp, 0x65ecdfu); f_0065ecfc();
    /* 0065ecdf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ece2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065ece9:; BB(0x0065ece9);
    /* 0065ece9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ecec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ecf3: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ecf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ecf6: ret  */ FN_RET(0x0065ec80); r_esp += 4; return;
L_0065ecf7:; BB(0x0065ecf7);
    /* 0065ecf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ecf9: jmp 0x65ece9 */ goto L_0065ece9;
}

void f_0065ecfc(void) /* sub_65ECFC */
{
    FN_ENTER(0x0065ecfc);
    /* 0065ecfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ecfd: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ecff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed01: push 0x8e7acc */ { u32 v = 0x8e7accu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065ed0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ed14: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ed17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ed1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065ed1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065ed20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065ed23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065ed26: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065ed29: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065ed2c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065ed2f: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x65ed34u); f_0062998c();
    /* 0065ed34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065ed3b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065ed3e: mov dword ptr [ecx], 0xb333e0 */ W32((u32)(r_ecx), 0xb333e0u);
    /* 0065ed44: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ed4a: call 0x61120c */ r_esp -= 4; W32(r_esp, 0x65ed4fu); f_0061120c();
    /* 0065ed4f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065ed56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065ed59: mov eax, dword ptr [0x9c86f8] */ r_eax = R32((u32)(0x9c86f8u));
    /* 0065ed5e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ed61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed62: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065ed65: call 0x629718 */ r_esp -= 4; W32(r_esp, 0x65ed6au); f_00629718();
    /* 0065ed6a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065ed6d: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0065ed73: mov dword ptr [ecx + 0xb8], 0x40000000 */ W32((u32)(r_ecx+0xb8u), 0x40000000u);
    /* 0065ed7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065ed7f: mov dword ptr [ecx + 0xec], 0 */ W32((u32)(r_ecx+0xecu), 0x0u);
    /* 0065ed89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065ed8d: push 0x9c86fc */ { u32 v = 0x9c86fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed92: jg 0x65ed96 */ if ((!fZ&&fS==fO)) goto L_0065ed96;
L_0065ed94:; BB(0x0065ed94);
    /* 0065ed94: mov edx, eax */ r_edx = r_eax;
L_0065ed96:; BB(0x0065ed96);
    /* 0065ed96: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 0065ed9c: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0065ed9f: movzx ebx, word ptr [edx*2 + 0x938ccc] */ r_ebx = (u32)R16((u32)(r_edx*2+0x938cccu));
    /* 0065eda7: mov word ptr [ecx + 0xe8], bx */ W16((u32)(r_ecx+0xe8u), (u16)r_ebx);
    /* 0065edae: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65edb3u); f_007b9a88();
    /* 0065edb3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065edb6: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065edb9: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065edbe: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065edc1: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65edc6u); f_007b4f54();
    /* 0065edc6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065edc9: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065edcf: call 0x611408 */ r_esp -= 4; W32(r_esp, 0x65edd4u); f_00611408();
    /* 0065edd4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065edd7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065edda: mov dword ptr [eax + 0x10c], 0x43910000 */ W32((u32)(r_eax+0x10cu), 0x43910000u);
    /* 0065ede4: mov dword ptr [eax + 0x110], 0 */ W32((u32)(r_eax+0x110u), 0x0u);
    /* 0065edee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065edf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065edf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065edfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065edfb: ret 8 */ FN_RET(0x0065ecfc); r_esp += 12; return;
}

void f_0065ee00(void) /* sub_65EE00 */
{
    FN_ENTER(0x0065ee00);
    /* 0065ee00: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ee03: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065ee09: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 0065ee0f: fadd dword ptr [ecx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb8u));
    /* 0065ee15: fst dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0));
    /* 0065ee1b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065ee1e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065ee21: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065ee24: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065ee27: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0065ee2a: fadd dword ptr [eax*4 + 0x938ca0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x938ca0u));
    /* 0065ee31: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065ee33: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065ee35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065ee36: jae 0x65ee42 */ if (!fC) goto L_0065ee42;
L_0065ee38:; BB(0x0065ee38);
    /* 0065ee38: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
L_0065ee42:; BB(0x0065ee42);
    /* 0065ee42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065ee44: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x65ee47u); call_ind(t); }
    /* 0065ee47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ee4a: ret  */ FN_RET(0x0065ee00); r_esp += 4; return;
}

void f_0065ee4c(void) /* sub_65EE4C */
{
    FN_ENTER(0x0065ee4c);
    /* 0065ee4c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ee4f: mov edx, dword ptr [0xa8f9f4] */ r_edx = R32((u32)(0xa8f9f4u));
    /* 0065ee55: fld dword ptr [ecx + 0xb8] */ FPUSH(R_F32((u32)(r_ecx+0xb8u)));
    /* 0065ee5b: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 0065ee61: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0065ee63: fld dword ptr [ecx + 0xec] */ FPUSH(R_F32((u32)(r_ecx+0xecu)));
    /* 0065ee69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ee6b: fst dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0));
    /* 0065ee71: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ee73: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065ee75: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065ee78: fst dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0));
    /* 0065ee7e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065ee81: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065ee84: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065ee87: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0065ee8a: fadd dword ptr [eax*4 + 0x938c98] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x938c98u));
    /* 0065ee91: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0065ee93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065ee95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065ee96: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ee98: jb 0x65ee9c */ if (fC) goto L_0065ee9c;
L_0065ee9a:; BB(0x0065ee9a);
    /* 0065ee9a: fst st(2) */ ST(2) = ST(0);
L_0065ee9c:; BB(0x0065ee9c);
    /* 0065ee9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065ee9e: mov eax, dword ptr [0xa8f9f8] */ r_eax = R32((u32)(0xa8f9f8u));
    /* 0065eea3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065eea5: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 0065eeab: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0065eeae: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065eeb1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065eeb5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065eeb9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0065eebc: fadd dword ptr [eax*4 + 0x938c98] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x938c98u));
    /* 0065eec3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065eec5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065eec7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065eec8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065eeca: jb 0x65eece */ if (fC) goto L_0065eece;
L_0065eecc:; BB(0x0065eecc);
    /* 0065eecc: fst st(1) */ ST(1) = ST(0);
L_0065eece:; BB(0x0065eece);
    /* 0065eece: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065eed0: fstp dword ptr [ecx + 0xec] */ W_F32((u32)(r_ecx+0xecu), ST(0)); FPOP();
    /* 0065eed6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065eed9: ret  */ FN_RET(0x0065ee4c); r_esp += 4; return;
}

void f_0065eedc(void) /* sub_65EEDC */
{
    FN_ENTER(0x0065eedc);
    /* 0065eedc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065eedd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065eedf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065eee1: call 0x62981c */ r_esp -= 4; W32(r_esp, 0x65eee6u); f_0062981c();
    /* 0065eee6: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 0065eef0: mov dword ptr [ebp + 0xec], 0 */ W32((u32)(r_ebp+0xecu), 0x0u);
    /* 0065eefa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065eefb: ret  */ FN_RET(0x0065eedc); r_esp += 4; return;
}

void f_0065eefc(void) /* sub_65EEFC */
{
    FN_ENTER(0x0065eefc);
    /* 0065eefc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065eefd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0065eeff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065ef01: call 0x629814 */ r_esp -= 4; W32(r_esp, 0x65ef06u); f_00629814();
    /* 0065ef06: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 0065ef10: mov dword ptr [ebp + 0xec], 0 */ W32((u32)(r_ebp+0xecu), 0x0u);
    /* 0065ef1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ef1b: ret  */ FN_RET(0x0065eefc); r_esp += 4; return;
}

void f_0065ef1c(void) /* sub_65EF1C */
{
    FN_ENTER(0x0065ef1c);
    /* 0065ef1c: mov dword ptr [0xa8f9cc], 0x3f800000 */ W32((u32)(0xa8f9ccu), 0x3f800000u);
    /* 0065ef26: mov dword ptr [0xa8f9d0], 0x41000000 */ W32((u32)(0xa8f9d0u), 0x41000000u);
    /* 0065ef30: mov dword ptr [0xa8f9d4], 0x3fc00000 */ W32((u32)(0xa8f9d4u), 0x3fc00000u);
    /* 0065ef3a: ret  */ FN_RET(0x0065ef1c); r_esp += 4; return;
}

void f_0065ef3c(void) /* sub_65EF3C */
{
    FN_ENTER(0x0065ef3c);
    /* 0065ef3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ef3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef41: push 0x8e7b0e */ { u32 v = 0x8e7b0eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065ef4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ef54: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ef57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ef5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065ef5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065ef60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065ef63: mov dword ptr [0xa8fa04], 0 */ W32((u32)(0xa8fa04u), 0x0u);
    /* 0065ef6d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65ef72u); f_00807ac0();
    /* 0065ef72: mov ebx, eax */ r_ebx = r_eax;
    /* 0065ef74: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x65ef79u); f_00807de4();
    /* 0065ef79: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ef7c: je 0x65f105 */ if (fZ) goto L_0065f105;
L_0065ef82:; BB(0x0065ef82);
    /* 0065ef82: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ef85: je 0x65f105 */ if (fZ) goto L_0065f105;
L_0065ef8b:; BB(0x0065ef8b);
    /* 0065ef8b: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ef8e: je 0x65f105 */ if (fZ) goto L_0065f105;
L_0065ef94:; BB(0x0065ef94);
    /* 0065ef94: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0065ef9b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065efa0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65efa5u); f_008581c5();
    /* 0065efa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065efa6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065efa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065efab: je 0x65f0fe */ if (fZ) goto L_0065f0fe;
L_0065efb1:; BB(0x0065efb1);
    /* 0065efb1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0065efb8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065efbf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065efc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065efc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065efc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065efc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065efc7: push 0x9c86bc */ { u32 v = 0x9c86bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065efcc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065efce: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65efd3u); f_005b7a84();
    /* 0065efd3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065efd6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0065efdd:; BB(0x0065efdd);
    /* 0065efdd: mov dword ptr [0xa8fa04], eax */ W32((u32)(0xa8fa04u), r_eax);
    /* 0065efe2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065efe9: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0065efee: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eff1: je 0x65f0e9 */ if (fZ) goto L_0065f0e9;
L_0065eff7:; BB(0x0065eff7);
    /* 0065eff7: push 0x938dc8 */ { u32 v = 0x938dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065effc: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65f001u); f_008009dc();
    /* 0065f001: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065f002: mov dword ptr [0xa8f9f0], eax */ W32((u32)(0xa8f9f0u), r_eax);
L_0065f007:; BB(0x0065f007);
    /* 0065f007: mov ecx, dword ptr [0xa8fa04] */ r_ecx = R32((u32)(0xa8fa04u));
    /* 0065f00d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f00f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65f014u); f_005b8610();
    /* 0065f014: mov ecx, dword ptr [0xa8fa04] */ r_ecx = R32((u32)(0xa8fa04u));
    /* 0065f01a: mov dword ptr [0xa8f9fc], eax */ W32((u32)(0xa8f9fcu), r_eax);
    /* 0065f01f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f021: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65f026u); f_005b8610();
    /* 0065f026: mov ecx, dword ptr [0xa8fa04] */ r_ecx = R32((u32)(0xa8fa04u));
    /* 0065f02c: mov dword ptr [0xa8fa00], eax */ W32((u32)(0xa8fa00u), r_eax);
    /* 0065f031: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f033: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65f038u); f_005b8638();
    /* 0065f038: mov ecx, dword ptr [0xa8fa04] */ r_ecx = R32((u32)(0xa8fa04u));
    /* 0065f03e: mov dword ptr [0xa8f9f4], eax */ W32((u32)(0xa8f9f4u), r_eax);
    /* 0065f043: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f045: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65f04au); f_005b8638();
    /* 0065f04a: mov edx, dword ptr [0xa8f9fc] */ r_edx = R32((u32)(0xa8f9fcu));
    /* 0065f050: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0065f053: mov dword ptr [0xa8f9f8], eax */ W32((u32)(0xa8f9f8u), r_eax);
    /* 0065f058: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065f05a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f05c: mov dword ptr [0xa8f9e0], eax */ W32((u32)(0xa8f9e0u), r_eax);
    /* 0065f061: mov dword ptr [0xa8f9e4], eax */ W32((u32)(0xa8f9e4u), r_eax);
    /* 0065f066: mov dword ptr [0xa8f9e8], eax */ W32((u32)(0xa8f9e8u), r_eax);
    /* 0065f06b: je 0x65f09a */ if (fZ) goto L_0065f09a;
L_0065f06d:; BB(0x0065f06d);
    /* 0065f06d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065f070: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0065f073: mov dword ptr [0xa8f9e0], eax */ W32((u32)(0xa8f9e0u), r_eax);
    /* 0065f078: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0065f07d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f07f: je 0x65f09a */ if (fZ) goto L_0065f09a;
L_0065f081:; BB(0x0065f081);
    /* 0065f081: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065f084: jge 0x65f09a */ if ((fS==fO)) goto L_0065f09a;
L_0065f086:; BB(0x0065f086);
    /* 0065f086: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065f089: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0065f08c: mov dword ptr [ecx*4 + 0xa8f9e0], eax */ W32((u32)(r_ecx*4+0xa8f9e0u), r_eax);
    /* 0065f093: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f096: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f098: jne 0x65f081 */ if (!fZ) goto L_0065f081;
L_0065f09a:; BB(0x0065f09a);
    /* 0065f09a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f09c: push dword ptr [0xa8fa00] */ { u32 v = R32((u32)(0xa8fa00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065f0a2: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x65f0a7u); f_0078e9b0();
    /* 0065f0a7: mov dword ptr [0xa8f9dc], 0 */ W32((u32)(0xa8f9dcu), 0x0u);
    /* 0065f0b1: mov dword ptr [0xa8f9ec], eax */ W32((u32)(0xa8f9ecu), r_eax);
    /* 0065f0b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f0b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f0b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f0bb: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x65f0c0u); f_0066f3d4();
    /* 0065f0c0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065f0c3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065f0c6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065f0c9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f0cc: mov dword ptr [0xa8f9dc], eax */ W32((u32)(0xa8f9dcu), r_eax);
    /* 0065f0d1: mov dword ptr [0xa8f9d8], 0 */ W32((u32)(0xa8f9d8u), 0x0u);
    /* 0065f0db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f0de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065f0e5: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f0e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f0e8: ret  */ FN_RET(0x0065ef3c); r_esp += 4; return;
L_0065f0e9:; BB(0x0065f0e9);
    /* 0065f0e9: push 0x938db0 */ { u32 v = 0x938db0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f0ee: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65f0f3u); f_008009dc();
    /* 0065f0f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065f0f4: mov dword ptr [0xa8f9f0], eax */ W32((u32)(0xa8f9f0u), r_eax);
    /* 0065f0f9: jmp 0x65f007 */ goto L_0065f007;
L_0065f0fe:; BB(0x0065f0fe);
    /* 0065f0fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065f100: jmp 0x65efdd */ goto L_0065efdd;
L_0065f105:; BB(0x0065f105);
    /* 0065f105: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065f10c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f111: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65f116u); f_008581c5();
    /* 0065f116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065f117: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065f11a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f11c: je 0x65f16b */ if (fZ) goto L_0065f16b;
L_0065f11e:; BB(0x0065f11e);
    /* 0065f11e: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065f125: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065f12c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f12f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065f131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f132: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f134: push 0x9c86e8 */ { u32 v = 0x9c86e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f139: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f13b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65f140u); f_005b7a84();
    /* 0065f140: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065f143: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065f14a:; BB(0x0065f14a);
    /* 0065f14a: mov dword ptr [0xa8fa04], eax */ W32((u32)(0xa8fa04u), r_eax);
    /* 0065f14f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065f156: push 0x938d98 */ { u32 v = 0x938d98u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f15b: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65f160u); f_008009dc();
    /* 0065f160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065f161: mov dword ptr [0xa8f9f0], eax */ W32((u32)(0xa8f9f0u), r_eax);
    /* 0065f166: jmp 0x65f007 */ goto L_0065f007;
L_0065f16b:; BB(0x0065f16b);
    /* 0065f16b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065f16d: jmp 0x65f14a */ goto L_0065f14a;
}

