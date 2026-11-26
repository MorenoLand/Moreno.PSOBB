#include "protos.h"

void f_006ce004(void) /* sub_6CE004 */
{
    FN_ENTER(0x006ce004);
    /* 006ce004: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ce005: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce008: mov esi, ecx */ r_esi = r_ecx;
    /* 006ce00a: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006ce011: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006ce019: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce01b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ce020u); f_0073ec50();
    /* 006ce020: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce021: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006ce024: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce025: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce026: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce028: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6ce02du); f_006dc794();
    /* 006ce02d: mov eax, 1 */ r_eax = 0x1u;
    /* 006ce032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce034: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce037: push dword ptr [esi + 0x40] */ { u32 v = R32((u32)(r_esi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ce03a: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6ce03fu); f_006dc59c();
    /* 006ce03f: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 006ce046: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
    /* 006ce04d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ce050: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ce051: ret  */ FN_RET(0x006ce004); r_esp += 4; return;
}

void f_006ce054(void) /* sub_6CE054 */
{
    FN_ENTER(0x006ce054);
    /* 006ce054: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ce055: mov esi, ecx */ r_esi = r_ecx;
    /* 006ce057: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce059: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6ce05eu); f_006dc7d4();
    /* 006ce05e: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006ce061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce063: jne 0x6ce073 */ if (!fZ) goto L_006ce073;
L_006ce065:; BB(0x006ce065);
    /* 006ce065: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce067: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce069: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6ce06eu); f_006dc62c();
    /* 006ce06e: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006ce071: jmp 0x6ce07f */ goto L_006ce07f;
L_006ce073:; BB(0x006ce073);
    /* 006ce073: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce075: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce077: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6ce07cu); f_006dc62c();
    /* 006ce07c: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
L_006ce07f:; BB(0x006ce07f);
    /* 006ce07f: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006ce086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ce087: ret  */ FN_RET(0x006ce054); r_esp += 4; return;
}

void f_006ce088(void) /* sub_6CE088 */
{
    FN_ENTER(0x006ce088);
    /* 006ce088: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce08a: mov dword ptr [0xa9603c], eax */ W32((u32)(0xa9603cu), r_eax);
    /* 006ce08f: mov dword ptr [0xa96040], eax */ W32((u32)(0xa96040u), r_eax);
    /* 006ce094: mov dword ptr [0xa96044], eax */ W32((u32)(0xa96044u), r_eax);
    /* 006ce099: mov dword ptr [0xa96048], eax */ W32((u32)(0xa96048u), r_eax);
    /* 006ce09e: ret  */ FN_RET(0x006ce088); r_esp += 4; return;
}

void f_006ce0a0(void) /* sub_6CE0A0 */
{
    FN_ENTER(0x006ce0a0);
    /* 006ce0a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce0a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ce0a3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ce0a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce0a7: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6ce0aau); call_ind(t); }
    /* 006ce0aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce0ac: jne 0x6ce0b0 */ if (!fZ) goto L_006ce0b0;
L_006ce0ae:; BB(0x006ce0ae);
    /* 006ce0ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce0af: ret  */ FN_RET(0x006ce0a0); r_esp += 4; return;
L_006ce0b0:; BB(0x006ce0b0);
    /* 006ce0b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce0b2: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6ce0b7u); f_006dc988();
    /* 006ce0b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce0b9: je 0x6ce0d4 */ if (fZ) goto L_006ce0d4;
L_006ce0bb:; BB(0x006ce0bb);
    /* 006ce0bb: mov eax, 0xc */ r_eax = 0xcu;
    /* 006ce0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce0c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce0c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce0c5: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ce0c8: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6ce0cdu); f_006dc59c();
    /* 006ce0cd: mov dword ptr [ebx + 0x20], 0xc */ W32((u32)(r_ebx+0x20u), 0xcu);
L_006ce0d4:; BB(0x006ce0d4);
    /* 006ce0d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce0d5: ret  */ FN_RET(0x006ce0a0); r_esp += 4; return;
}

void f_006ce0d8(void) /* sub_6CE0D8 */
{
    FN_ENTER(0x006ce0d8);
    /* 006ce0d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ce0d9: mov esi, ecx */ r_esi = r_ecx;
    /* 006ce0db: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce0dd: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6ce0e2u); f_006dc7d4();
    /* 006ce0e2: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 006ce0e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce0e7: jne 0x6ce0f7 */ if (!fZ) goto L_006ce0f7;
L_006ce0e9:; BB(0x006ce0e9);
    /* 006ce0e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce0eb: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce0ed: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6ce0f2u); f_006dc62c();
    /* 006ce0f2: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006ce0f5: jmp 0x6ce103 */ goto L_006ce103;
L_006ce0f7:; BB(0x006ce0f7);
    /* 006ce0f7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce0f9: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce0fb: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6ce100u); f_006dc62c();
    /* 006ce100: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
L_006ce103:; BB(0x006ce103);
    /* 006ce103: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006ce10a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ce10b: ret  */ FN_RET(0x006ce0d8); r_esp += 4; return;
}

void f_006ce10c(void) /* sub_6CE10C */
{
    FN_ENTER(0x006ce10c);
    /* 006ce10c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce10d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ce10f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce111: push 0x8edb70 */ { u32 v = 0x8edb70u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce116: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ce11c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce11d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ce124: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce127: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ce12a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ce12d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ce130: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ce133: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006ce136: mov dword ptr [ebp - 0x30], 0x43a60000 */ W32((u32)(r_ebp+0xffffffd0u), 0x43a60000u);
    /* 006ce13d: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce13f: mov dword ptr [ebp - 0x2c], 0x42a00000 */ W32((u32)(r_ebp+0xffffffd4u), 0x42a00000u);
    /* 006ce146: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ce14bu); f_0073ec50();
    /* 006ce14b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce14c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ce14f: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 006ce152: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce154: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6ce159u); f_006dc794();
    /* 006ce159: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006ce15e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce160: jne 0x6ce1a2 */ if (!fZ) goto L_006ce1a2;
L_006ce162:; BB(0x006ce162);
    /* 006ce162: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006ce169: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce16e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ce173u); f_005caba4();
    /* 006ce173: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce174: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006ce177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce179: je 0x6ce19b */ if (fZ) goto L_006ce19b;
L_006ce17b:; BB(0x006ce17b);
    /* 006ce17b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006ce182: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ce189: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ce18c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce18d: mov ecx, eax */ r_ecx = r_eax;
    /* 006ce18f: call 0x6cb8b0 */ r_esp -= 4; W32(r_esp, 0x6ce194u); f_006cb8b0();
    /* 006ce194: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006ce19b:; BB(0x006ce19b);
    /* 006ce19b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006ce1a2:; BB(0x006ce1a2);
    /* 006ce1a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ce1a5: mov eax, 1 */ r_eax = 0x1u;
    /* 006ce1aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce1ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce1ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce1ad: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ce1b0: call 0x6dc59c */ r_esp -= 4; W32(r_esp, 0x6ce1b5u); f_006dc59c();
    /* 006ce1b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ce1b8: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 006ce1bf: mov dword ptr [eax + 0x20], 3 */ W32((u32)(r_eax+0x20u), 0x3u);
    /* 006ce1c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ce1c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ce1d0: mov esp, ebp */ r_esp = r_ebp;
    /* 006ce1d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce1d3: ret  */ FN_RET(0x006ce10c); r_esp += 4; return;
}

void f_006ce1d4(void) /* sub_6CE1D4 */
{
    FN_ENTER(0x006ce1d4);
    /* 006ce1d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ce1d5: mov edi, dword ptr [0xa9604c] */ r_edi = R32((u32)(0xa9604cu));
    /* 006ce1db: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce1dd: je 0x6ce204 */ if (fZ) goto L_006ce204;
L_006ce1df:; BB(0x006ce1df);
    /* 006ce1df: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce1e1: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6ce1e6u); f_007930dc();
    /* 006ce1e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce1e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce1e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce1ea: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006ce1ec: mov ecx, edi */ r_ecx = r_edi;
    /* 006ce1ee: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6ce1f1u); call_ind(t); }
    /* 006ce1f1: mov eax, dword ptr [0xa9604c] */ r_eax = R32((u32)(0xa9604cu));
    /* 006ce1f6: mov dword ptr [eax + 0x20], 9 */ W32((u32)(r_eax+0x20u), 0x9u);
    /* 006ce1fd: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006ce204:; BB(0x006ce204);
    /* 006ce204: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ce205: ret  */ FN_RET(0x006ce1d4); r_esp += 4; return;
}

void f_006ce208(void) /* sub_6CE208 */
{
    FN_ENTER(0x006ce208);
    /* 006ce208: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce20a: mov dword ptr [0xa96050], eax */ W32((u32)(0xa96050u), r_eax);
    /* 006ce20f: mov dword ptr [0xa96054], eax */ W32((u32)(0xa96054u), r_eax);
    /* 006ce214: mov dword ptr [0xa96058], eax */ W32((u32)(0xa96058u), r_eax);
    /* 006ce219: mov dword ptr [0xa9605c], eax */ W32((u32)(0xa9605cu), r_eax);
    /* 006ce21e: ret  */ FN_RET(0x006ce208); r_esp += 4; return;
}

void f_006ce220(void) /* sub_6CE220 */
{
    FN_ENTER(0x006ce220);
    /* 006ce220: push 0x2510 */ { u32 v = 0x2510u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce225: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6ce22au); f_0082e940();
    /* 006ce22a: mov dword ptr [0xa96084], eax */ W32((u32)(0xa96084u), r_eax);
    /* 006ce22f: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce234: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6ce239u); f_0082e940();
    /* 006ce239: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ce23c: mov dword ptr [0xa96080], eax */ W32((u32)(0xa96080u), r_eax);
    /* 006ce241: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ce243: mov dword ptr [0xa96074], eax */ W32((u32)(0xa96074u), r_eax);
    /* 006ce248: mov ecx, 0xa95fe0 */ r_ecx = 0xa95fe0u;
    /* 006ce24d: mov dword ptr [0xa96070], eax */ W32((u32)(0xa96070u), r_eax);
    /* 006ce252: mov dword ptr [0xa9606c], eax */ W32((u32)(0xa9606cu), r_eax);
    /* 006ce257: mov dword ptr [0xa96060], eax */ W32((u32)(0xa96060u), r_eax);
    /* 006ce25c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ce25e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006ce260: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006ce263: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006ce266: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 006ce269: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006ce26c: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006ce26f: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 006ce272: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006ce275: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 006ce278: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006ce27b: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 006ce27e: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 006ce281: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 006ce284: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006ce287: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 006ce28a: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006ce28d: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 006ce290: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 006ce293: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 006ce296: mov edx, 0xa95f80 */ r_edx = 0xa95f80u;
    /* 006ce29b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ce29d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006ce29f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006ce2a2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006ce2a5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006ce2a8: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006ce2ab: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006ce2ae: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006ce2b1: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006ce2b4: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006ce2b7: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006ce2ba: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006ce2bd: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006ce2c0: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006ce2c3: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006ce2c6: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006ce2c9: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006ce2cc: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006ce2cf: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006ce2d2: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006ce2d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce2d7: mov dword ptr [0xa9607c], eax */ W32((u32)(0xa9607cu), r_eax);
    /* 006ce2dc: mov dword ptr [0xa96078], eax */ W32((u32)(0xa96078u), r_eax);
    /* 006ce2e1: mov dword ptr [0xa96180], eax */ W32((u32)(0xa96180u), r_eax);
    /* 006ce2e6: ret  */ FN_RET(0x006ce220); r_esp += 4; return;
}

void f_006ce2e8(void) /* sub_6CE2E8 */
{
    FN_ENTER(0x006ce2e8);
    /* 006ce2e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ce2ea: mov dword ptr [0xa96074], eax */ W32((u32)(0xa96074u), r_eax);
    /* 006ce2ef: mov dword ptr [0xa96070], eax */ W32((u32)(0xa96070u), r_eax);
    /* 006ce2f4: mov ecx, 0xa95fe0 */ r_ecx = 0xa95fe0u;
    /* 006ce2f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ce2fb: mov dword ptr [0xa9606c], eax */ W32((u32)(0xa9606cu), r_eax);
    /* 006ce300: mov dword ptr [0xa96060], eax */ W32((u32)(0xa96060u), r_eax);
    /* 006ce305: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006ce307: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006ce30a: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006ce30d: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 006ce310: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006ce313: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006ce316: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 006ce319: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006ce31c: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 006ce31f: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006ce322: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 006ce325: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 006ce328: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 006ce32b: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006ce32e: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 006ce331: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006ce334: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 006ce337: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 006ce33a: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 006ce33d: mov edx, 0xa95f80 */ r_edx = 0xa95f80u;
    /* 006ce342: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ce344: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006ce346: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006ce349: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006ce34c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006ce34f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006ce352: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006ce355: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006ce358: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006ce35b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006ce35e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006ce361: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006ce364: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006ce367: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006ce36a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006ce36d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006ce370: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006ce373: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006ce376: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006ce379: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006ce37c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce37e: mov dword ptr [0xa9607c], eax */ W32((u32)(0xa9607cu), r_eax);
    /* 006ce383: mov dword ptr [0xa96078], eax */ W32((u32)(0xa96078u), r_eax);
    /* 006ce388: mov dword ptr [0xa96068], eax */ W32((u32)(0xa96068u), r_eax);
    /* 006ce38d: mov dword ptr [0xa96064], eax */ W32((u32)(0xa96064u), r_eax);
    /* 006ce392: ret  */ FN_RET(0x006ce2e8); r_esp += 4; return;
}

void f_006ce394(void) /* sub_6CE394 */
{
    FN_ENTER(0x006ce394);
    /* 006ce394: mov dword ptr [0xa960a0], 0x3f800000 */ W32((u32)(0xa960a0u), 0x3f800000u);
    /* 006ce39e: mov dword ptr [0xa960a4], 0x41000000 */ W32((u32)(0xa960a4u), 0x41000000u);
    /* 006ce3a8: mov dword ptr [0xa960a8], 0x3fc00000 */ W32((u32)(0xa960a8u), 0x3fc00000u);
    /* 006ce3b2: ret  */ FN_RET(0x006ce394); r_esp += 4; return;
}

void f_006ce3b4(void) /* sub_6CE3B4 */
{
    FN_ENTER(0x006ce3b4);
    /* 006ce3b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce3b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ce3b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce3b9: call 0x6ce3d8 */ r_esp -= 4; W32(r_esp, 0x6ce3beu); f_006ce3d8();
    /* 006ce3be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ce3c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce3c4: jne 0x6ce3ca */ if (!fZ) goto L_006ce3ca;
L_006ce3c6:; BB(0x006ce3c6);
    /* 006ce3c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce3c7: ret 4 */ FN_RET(0x006ce3b4); r_esp += 8; return;
L_006ce3ca:; BB(0x006ce3ca);
    /* 006ce3ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce3cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ce3d0u); f_005c2f74();
    /* 006ce3d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce3d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce3d2: ret 4 */ FN_RET(0x006ce3b4); r_esp += 8; return;
}

void f_006ce3d8(void) /* sub_6CE3D8 */
{
    FN_ENTER(0x006ce3d8);
    /* 006ce3d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce3d9: mov ebp, esp */ r_ebp = r_esp;
    /* 006ce3db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce3dd: push 0x8edb8c */ { u32 v = 0x8edb8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce3e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ce3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce3e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ce3f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce3f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ce3f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ce3f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ce3fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ce3ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ce402: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ce409: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce40c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006ce40f: mov dword ptr [ecx], 0xb3be28 */ W32((u32)(r_ecx), 0xb3be28u);
    /* 006ce415: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce417: je 0x6ce430 */ if (fZ) goto L_006ce430;
L_006ce419:; BB(0x006ce419);
    /* 006ce419: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce41c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006ce420: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ce425: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006ce429: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_006ce430:; BB(0x006ce430);
    /* 006ce430: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6ce435u); f_006dc514();
    /* 006ce435: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce438: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006ce43b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce43d: je 0x6ce44e */ if (fZ) goto L_006ce44e;
L_006ce43f:; BB(0x006ce43f);
    /* 006ce43f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ce444u); f_007127b0();
    /* 006ce444: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce447: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006ce44e:; BB(0x006ce44e);
    /* 006ce44e: mov dword ptr [0xa960c4], 0 */ W32((u32)(0xa960c4u), 0x0u);
    /* 006ce458: mov ecx, eax */ r_ecx = r_eax;
    /* 006ce45a: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6ce45fu); f_006dc9fc();
    /* 006ce45f: mov dword ptr [eax*4 + 0xa960c8], 0 */ W32((u32)(r_eax*4+0xa960c8u), 0x0u);
    /* 006ce46a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce46c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ce471u); f_00791748();
    /* 006ce471: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce472: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ce479: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce47c: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6ce481u); f_006dc3a0();
    /* 006ce481: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ce484: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ce48b: mov esp, ebp */ r_esp = r_ebp;
    /* 006ce48d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce48e: ret  */ FN_RET(0x006ce3d8); r_esp += 4; return;
}

void f_006ce490(void) /* sub_6CE490 */
{
    FN_ENTER(0x006ce490);
    /* 006ce490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce491: mov ebp, esp */ r_ebp = r_esp;
    /* 006ce493: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce495: push 0x8edba8 */ { u32 v = 0x8edba8u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce49a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ce4a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce4a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ce4a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce4ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ce4ae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ce4b1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ce4b4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ce4b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006ce4ba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ce4bd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ce4c0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ce4c3: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6ce4c8u); f_006dc410();
    /* 006ce4c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ce4cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ce4d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ce4d5: mov dword ptr [ecx], 0xb3be28 */ W32((u32)(r_ecx), 0xb3be28u);
    /* 006ce4db: mov eax, dword ptr [0x9ced08] */ r_eax = R32((u32)(0x9ced08u));
    /* 006ce4e0: mov dword ptr [0xa960c4], ecx */ W32((u32)(0xa960c4u), r_ecx);
    /* 006ce4e6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ce4e9: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006ce4ec: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ce4ee: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006ce4f1: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006ce4f4: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006ce4f7: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6ce4fcu); f_006dc9fc();
    /* 006ce4fc: mov dword ptr [eax*4 + 0xa960c8], 1 */ W32((u32)(r_eax*4+0xa960c8u), 0x1u);
    /* 006ce507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce509: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ce50eu); f_00791748();
    /* 006ce50e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce50f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ce512: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ce515: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ce518: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ce51f: mov esp, ebp */ r_esp = r_ebp;
    /* 006ce521: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce522: ret 8 */ FN_RET(0x006ce490); r_esp += 12; return;
}

void f_006ce528(void) /* sub_6CE528 */
{
    FN_ENTER(0x006ce528);
    /* 006ce528: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006ce52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce52d: je 0x6ce55b */ if (fZ) goto L_006ce55b;
L_006ce52f:; BB(0x006ce52f);
    /* 006ce52f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce532: je 0x6ce555 */ if (fZ) goto L_006ce555;
L_006ce534:; BB(0x006ce534);
    /* 006ce534: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce537: je 0x6ce54f */ if (fZ) goto L_006ce54f;
L_006ce539:; BB(0x006ce539);
    /* 006ce539: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce53c: je 0x6ce549 */ if (fZ) goto L_006ce549;
L_006ce53e:; BB(0x006ce53e);
    /* 006ce53e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ce541: jne 0x6ce54e */ if (!fZ) goto L_006ce54e;
L_006ce543:; BB(0x006ce543);
    /* 006ce543: call 0x6ce564 */ r_esp -= 4; W32(r_esp, 0x6ce548u); f_006ce564();
    /* 006ce548: ret  */ FN_RET(0x006ce528); r_esp += 4; return;
L_006ce549:; BB(0x006ce549);
    /* 006ce549: call 0x6ce598 */ r_esp -= 4; W32(r_esp, 0x6ce54eu); f_006ce598();
L_006ce54e:; BB(0x006ce54e);
    /* 006ce54e: ret  */ FN_RET(0x006ce528); r_esp += 4; return;
L_006ce54f:; BB(0x006ce54f);
    /* 006ce54f: call 0x6ce64c */ r_esp -= 4; W32(r_esp, 0x6ce554u); f_006ce64c();
    /* 006ce554: ret  */ FN_RET(0x006ce528); r_esp += 4; return;
L_006ce555:; BB(0x006ce555);
    /* 006ce555: call 0x6ce780 */ r_esp -= 4; W32(r_esp, 0x6ce55au); f_006ce780();
    /* 006ce55a: ret  */ FN_RET(0x006ce528); r_esp += 4; return;
L_006ce55b:; BB(0x006ce55b);
    /* 006ce55b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ce55d: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6ce560u); call_ind(t); }
    /* 006ce560: ret  */ FN_RET(0x006ce528); r_esp += 4; return;
}

void f_006ce564(void) /* sub_6CE564 */
{
    FN_ENTER(0x006ce564);
    /* 006ce564: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce565: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ce567: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ce569: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce56b: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6ce56eu); call_ind(t); }
    /* 006ce56e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce570: jne 0x6ce574 */ if (!fZ) goto L_006ce574;
L_006ce572:; BB(0x006ce572);
    /* 006ce572: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce573: ret  */ FN_RET(0x006ce564); r_esp += 4; return;
L_006ce574:; BB(0x006ce574);
    /* 006ce574: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce576: call 0x6dc8fc */ r_esp -= 4; W32(r_esp, 0x6ce57bu); f_006dc8fc();
    /* 006ce57b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce57d: je 0x6ce593 */ if (fZ) goto L_006ce593;
L_006ce57f:; BB(0x006ce57f);
    /* 006ce57f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce581: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6ce586u); f_006dc4b0();
    /* 006ce586: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006ce58a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce58f: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006ce593:; BB(0x006ce593);
    /* 006ce593: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce594: ret  */ FN_RET(0x006ce564); r_esp += 4; return;
}

void f_006ce598(void) /* sub_6CE598 */
{
    FN_ENTER(0x006ce598);
    /* 006ce598: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce599: mov ebp, esp */ r_ebp = r_esp;
    /* 006ce59b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce59d: push 0x8edbd0 */ { u32 v = 0x8edbd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce5a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ce5a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce5a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ce5b0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce5b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ce5b6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006ce5b9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006ce5bc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006ce5bf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006ce5c2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006ce5c9: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce5ce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ce5d3u); f_005caba4();
    /* 006ce5d3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ce5d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ce5d9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006ce5dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce5de: je 0x6ce643 */ if (fZ) goto L_006ce643;
L_006ce5e0:; BB(0x006ce5e0);
    /* 006ce5e0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006ce5e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ce5ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ce5f1: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ce5f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ce5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce5f8: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ce5fe: call 0x6d93e4 */ r_esp -= 4; W32(r_esp, 0x6ce603u); f_006d93e4();
    /* 006ce603: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006ce60a:; BB(0x006ce60a);
    /* 006ce60a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ce60d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ce610: mov dword ptr [eax + 0x170], 0x6ce6a8 */ W32((u32)(r_eax+0x170u), 0x6ce6a8u);
    /* 006ce61a: mov dword ptr [eax + 0x178], 0x6ce6a8 */ W32((u32)(r_eax+0x178u), 0x6ce6a8u);
    /* 006ce624: mov dword ptr [eax + 0x174], 0x6ce688 */ W32((u32)(r_eax+0x174u), 0x6ce688u);
    /* 006ce62e: mov dword ptr [edx + 0x20], 5 */ W32((u32)(r_edx+0x20u), 0x5u);
    /* 006ce635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ce638: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ce63f: mov esp, ebp */ r_esp = r_ebp;
    /* 006ce641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce642: ret  */ FN_RET(0x006ce598); r_esp += 4; return;
L_006ce643:; BB(0x006ce643);
    /* 006ce643: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce645: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ce648: jmp 0x6ce60a */ goto L_006ce60a;
}

void f_006ce64c(void) /* sub_6CE64C */
{
    FN_ENTER(0x006ce64c);
    /* 006ce64c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ce64d: mov esi, ecx */ r_esi = r_ecx;
    /* 006ce64f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006ce651: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce653: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6ce656u); call_ind(t); }
    /* 006ce656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce658: jne 0x6ce65c */ if (!fZ) goto L_006ce65c;
L_006ce65a:; BB(0x006ce65a);
    /* 006ce65a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ce65b: ret  */ FN_RET(0x006ce64c); r_esp += 4; return;
L_006ce65c:; BB(0x006ce65c);
    /* 006ce65c: mov ecx, esi */ r_ecx = r_esi;
    /* 006ce65e: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6ce663u); f_006dc988();
    /* 006ce663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce665: je 0x6ce66e */ if (fZ) goto L_006ce66e;
L_006ce667:; BB(0x006ce667);
    /* 006ce667: mov dword ptr [esi + 0x20], 3 */ W32((u32)(r_esi+0x20u), 0x3u);
L_006ce66e:; BB(0x006ce66e);
    /* 006ce66e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ce66f: ret  */ FN_RET(0x006ce64c); r_esp += 4; return;
}

void f_006ce670(void) /* sub_6CE670 */
{
    FN_ENTER(0x006ce670);
    /* 006ce670: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce672: mov dword ptr [0xa960c8], eax */ W32((u32)(0xa960c8u), r_eax);
    /* 006ce677: mov dword ptr [0xa960cc], eax */ W32((u32)(0xa960ccu), r_eax);
    /* 006ce67c: mov dword ptr [0xa960d0], eax */ W32((u32)(0xa960d0u), r_eax);
    /* 006ce681: mov dword ptr [0xa960d4], eax */ W32((u32)(0xa960d4u), r_eax);
    /* 006ce686: ret  */ FN_RET(0x006ce670); r_esp += 4; return;
}

void f_006ce688(void) /* sub_6CE688 */
{
    FN_ENTER(0x006ce688);
    /* 006ce688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce689: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006ce68d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce68f: je 0x6ce6a4 */ if (fZ) goto L_006ce6a4;
L_006ce691:; BB(0x006ce691);
    /* 006ce691: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce693: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce695: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006ce698: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ce69a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6ce69du); call_ind(t); }
    /* 006ce69d: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
L_006ce6a4:; BB(0x006ce6a4);
    /* 006ce6a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce6a5: ret  */ FN_RET(0x006ce688); r_esp += 4; return;
}

void f_006ce6a8(void)
{
    FN_ENTER(0x006ce6a8);
    /* 006ce6a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ce6ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce6ae: je 0x6ce6b7 */ if (fZ) goto L_006ce6b7;
L_006ce6b0:; BB(0x006ce6b0);
    /* 006ce6b0: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
L_006ce6b7:; BB(0x006ce6b7);
    /* 006ce6b7: ret  */ FN_RET(0x006ce6a8); r_esp += 4; return;
}

void f_006ce6b8(void) /* sub_6CE6B8 */
{
    FN_ENTER(0x006ce6b8);
    /* 006ce6b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce6bb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006ce6bf: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006ce6c1: mov dword ptr [0xa960d8], ecx */ W32((u32)(0xa960d8u), r_ecx);
    /* 006ce6c7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006ce6ca: mov dword ptr [0xa960dc], eax */ W32((u32)(0xa960dcu), r_eax);
    /* 006ce6cf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006ce6d2: mov dword ptr [0xa960e0], eax */ W32((u32)(0xa960e0u), r_eax);
    /* 006ce6d7: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006ce6da: mov byte ptr [esp], 0xb8 */ W8((u32)(r_esp), 0xb8u);
    /* 006ce6de: mov dword ptr [0xa960e4], eax */ W32((u32)(0xa960e4u), r_eax);
    /* 006ce6e3: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006ce6e6: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006ce6eb: mov dword ptr [0xa960e8], edx */ W32((u32)(0xa960e8u), r_edx);
    /* 006ce6f1: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006ce6f6: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006ce6fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006ce6ff: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ce702: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6ce707u); f_00800518();
    /* 006ce707: mov dword ptr [0xa960ec], 1 */ W32((u32)(0xa960ecu), 0x1u);
    /* 006ce711: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ce714: ret  */ FN_RET(0x006ce6b8); r_esp += 4; return;
}

void f_006ce718(void)
{
    FN_ENTER(0x006ce718);
    /* 006ce718: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ce71c: mov edx, dword ptr [0xa960e4] */ r_edx = R32((u32)(0xa960e4u));
    /* 006ce722: cmp edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ce725: jne 0x6ce753 */ if (!fZ) goto L_006ce753;
L_006ce727:; BB(0x006ce727);
    /* 006ce727: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006ce72a: mov dword ptr [0xa960d8], edx */ W32((u32)(0xa960d8u), r_edx);
    /* 006ce730: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006ce733: mov dword ptr [0xa960dc], ecx */ W32((u32)(0xa960dcu), r_ecx);
    /* 006ce739: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006ce73c: mov dword ptr [0xa960e0], edx */ W32((u32)(0xa960e0u), r_edx);
    /* 006ce742: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006ce745: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 006ce748: mov dword ptr [0xa960e4], edx */ W32((u32)(0xa960e4u), r_edx);
    /* 006ce74e: mov dword ptr [0xa960e8], eax */ W32((u32)(0xa960e8u), r_eax);
L_006ce753:; BB(0x006ce753);
    /* 006ce753: mov dword ptr [0xa960ec], 0 */ W32((u32)(0xa960ecu), 0x0u);
    /* 006ce75d: ret  */ FN_RET(0x006ce718); r_esp += 4; return;
}

void f_006ce760(void) /* sub_6CE760 */
{
    FN_ENTER(0x006ce760);
    /* 006ce760: mov dword ptr [0xa960b8], 0x3f800000 */ W32((u32)(0xa960b8u), 0x3f800000u);
    /* 006ce76a: mov dword ptr [0xa960bc], 0x41000000 */ W32((u32)(0xa960bcu), 0x41000000u);
    /* 006ce774: mov dword ptr [0xa960c0], 0x3fc00000 */ W32((u32)(0xa960c0u), 0x3fc00000u);
    /* 006ce77e: ret  */ FN_RET(0x006ce760); r_esp += 4; return;
}

void f_006ce780(void) /* sub_6CE780 */
{
    FN_ENTER(0x006ce780);
    /* 006ce780: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ce781: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce784: mov edi, ecx */ r_edi = r_ecx;
    /* 006ce786: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006ce78d: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006ce795: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce797: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ce79cu); f_0073ec50();
    /* 006ce79c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce79d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006ce7a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7a2: mov ecx, edi */ r_ecx = r_edi;
    /* 006ce7a4: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6ce7a9u); f_006dc794();
    /* 006ce7a9: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006ce7ab: mov eax, 1 */ r_eax = 0x1u;
    /* 006ce7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7b1: mov ecx, edi */ r_ecx = r_edi;
    /* 006ce7b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7b4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6ce7b7u); call_ind(t); }
    /* 006ce7b7: mov ecx, edi */ r_ecx = r_edi;
    /* 006ce7b9: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6ce7beu); f_006dc9ec();
    /* 006ce7be: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006ce7c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7c2: call 0x73a33c */ r_esp -= 4; W32(r_esp, 0x6ce7c7u); f_0073a33c();
    /* 006ce7c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce7c8: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006ce7cb: mov eax, 2 */ r_eax = 0x2u;
    /* 006ce7d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7d1: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006ce7d4: mov ecx, edi */ r_ecx = r_edi;
    /* 006ce7d6: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6ce7dbu); f_006dc62c();
    /* 006ce7db: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006ce7de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ce7e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ce7e2: ret  */ FN_RET(0x006ce780); r_esp += 4; return;
}

void f_006ce7e4(void) /* sub_6CE7E4 */
{
    FN_ENTER(0x006ce7e4);
    /* 006ce7e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7e5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ce7e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ce7e9: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6ce7eeu); f_006dc7d4();
    /* 006ce7ee: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006ce7f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce7f6: ret  */ FN_RET(0x006ce7e4); r_esp += 4; return;
}

void f_006ce7f8(void) /* sub_6CE7F8 */
{
    FN_ENTER(0x006ce7f8);
    /* 006ce7f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce7f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ce7fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce7fd: call 0x6ce81c */ r_esp -= 4; W32(r_esp, 0x6ce802u); f_006ce81c();
    /* 006ce802: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ce806: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce808: jne 0x6ce80e */ if (!fZ) goto L_006ce80e;
L_006ce80a:; BB(0x006ce80a);
    /* 006ce80a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce80b: ret 4 */ FN_RET(0x006ce7f8); r_esp += 8; return;
L_006ce80e:; BB(0x006ce80e);
    /* 006ce80e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce80f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ce814u); f_005c2f74();
    /* 006ce814: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce815: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce816: ret 4 */ FN_RET(0x006ce7f8); r_esp += 8; return;
}

void f_006ce81c(void) /* sub_6CE81C */
{
    FN_ENTER(0x006ce81c);
    /* 006ce81c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce81d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ce81f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce821: push 0x8edbec */ { u32 v = 0x8edbecu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce826: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ce82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce82d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ce834: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce837: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ce83a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ce83d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ce840: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ce843: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ce846: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ce84d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce850: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006ce853: mov dword ptr [ecx], 0xb3bf10 */ W32((u32)(r_ecx), 0xb3bf10u);
    /* 006ce859: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce85b: je 0x6ce874 */ if (fZ) goto L_006ce874;
L_006ce85d:; BB(0x006ce85d);
    /* 006ce85d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce860: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006ce864: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ce869: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006ce86d: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_006ce874:; BB(0x006ce874);
    /* 006ce874: call 0x6dc514 */ r_esp -= 4; W32(r_esp, 0x6ce879u); f_006dc514();
    /* 006ce879: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce87c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006ce87f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce881: je 0x6ce892 */ if (fZ) goto L_006ce892;
L_006ce883:; BB(0x006ce883);
    /* 006ce883: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ce888u); f_007127b0();
    /* 006ce888: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce88b: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006ce892:; BB(0x006ce892);
    /* 006ce892: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006ce895: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce897: je 0x6ce8a8 */ if (fZ) goto L_006ce8a8;
L_006ce899:; BB(0x006ce899);
    /* 006ce899: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ce89eu); f_007127b0();
    /* 006ce89e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce8a1: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006ce8a8:; BB(0x006ce8a8);
    /* 006ce8a8: mov ecx, eax */ r_ecx = r_eax;
    /* 006ce8aa: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6ce8afu); f_006dc9fc();
    /* 006ce8af: mov dword ptr [eax*4 + 0xa96110], 0 */ W32((u32)(r_eax*4+0xa96110u), 0x0u);
    /* 006ce8ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce8bc: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ce8c1u); f_00791748();
    /* 006ce8c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce8c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ce8c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce8cc: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6ce8d1u); f_006dc3a0();
    /* 006ce8d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ce8d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ce8db: mov esp, ebp */ r_esp = r_ebp;
    /* 006ce8dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce8de: ret  */ FN_RET(0x006ce81c); r_esp += 4; return;
}

void f_006ce8e0(void) /* sub_6CE8E0 */
{
    FN_ENTER(0x006ce8e0);
    /* 006ce8e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce8e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ce8e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ce8e5: call 0x6ce904 */ r_esp -= 4; W32(r_esp, 0x6ce8eau); f_006ce904();
    /* 006ce8ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ce8ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ce8f0: jne 0x6ce8f6 */ if (!fZ) goto L_006ce8f6;
L_006ce8f2:; BB(0x006ce8f2);
    /* 006ce8f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce8f3: ret 4 */ FN_RET(0x006ce8e0); r_esp += 8; return;
L_006ce8f6:; BB(0x006ce8f6);
    /* 006ce8f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ce8f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ce8fcu); f_005c2f74();
    /* 006ce8fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce8fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ce8fe: ret 4 */ FN_RET(0x006ce8e0); r_esp += 8; return;
}

void f_006ce904(void) /* sub_6CE904 */
{
    FN_ENTER(0x006ce904);
    /* 006ce904: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce905: mov ebp, esp */ r_ebp = r_esp;
    /* 006ce907: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ce909: push 0x8edc28 */ { u32 v = 0x8edc28u; r_esp -= 4; W32(r_esp, v); }
    /* 006ce90e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ce914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce915: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ce91c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ce91f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ce922: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ce925: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ce928: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ce92b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ce92e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ce935: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce938: mov dword ptr [eax], 0xb3bf40 */ W32((u32)(r_eax), 0xb3bf40u);
    /* 006ce93e: mov dword ptr [eax + 0x1c], 0xb3bf50 */ W32((u32)(r_eax+0x1cu), 0xb3bf50u);
    /* 006ce945: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 006ce94b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ce94d: je 0x6ce96c */ if (fZ) goto L_006ce96c;
L_006ce953:; BB(0x006ce953);
    /* 006ce953: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ce957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ce958: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6ce95du); f_006dc358();
    /* 006ce95d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ce95e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006ce961: mov dword ptr [eax*4 + 0xa96100], 0 */ W32((u32)(r_eax*4+0xa96100u), 0x0u);
L_006ce96c:; BB(0x006ce96c);
    /* 006ce96c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006ce973: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce976: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ce979: call 0x6daed4 */ r_esp -= 4; W32(r_esp, 0x6ce97eu); f_006daed4();
    /* 006ce97e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ce985: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ce988: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ce98du); f_008171e8();
    /* 006ce98d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ce990: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ce997: mov esp, ebp */ r_esp = r_ebp;
    /* 006ce999: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ce99a: ret  */ FN_RET(0x006ce904); r_esp += 4; return;
}

void f_006ce99c(void) /* sub_6CE99C */
{
    FN_ENTER(0x006ce99c);
    /* 006ce99c: add ecx, -0x1c */ {  u32 a = r_ecx; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ce99f: jmp 0x6ce8e0 */ f_006ce8e0(); return;
}

void f_006ce9a4(void) /* sub_6CE9A4 */
{
    FN_ENTER(0x006ce9a4);
    /* 006ce9a4: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006ce9a7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ce9aa: ja 0x6ce9f9 */ if ((!fC&&!fZ)) goto L_006ce9f9;
L_006ce9ac:; BB(0x006ce9ac);
    /* 006ce9ac: mov eax, dword ptr [eax*4 + 0x96bb18] */ r_eax = R32((u32)(r_eax*4+0x96bb18u));
    /* 006ce9b3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9a4); r_esp += 4; return;
}

void f_006ce9b5(void)
{
    FN_ENTER(0x006ce9b5);
    /* 006ce9b5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ce9b7: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x6ce9bau); call_ind(t); }
    /* 006ce9ba: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9b5); r_esp += 4; return;
}

void f_006ce9bc(void)
{
    FN_ENTER(0x006ce9bc);
    /* 006ce9bc: call 0x6ce9fc */ r_esp -= 4; W32(r_esp, 0x6ce9c1u); f_006ce9fc();
    /* 006ce9c1: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9bc); r_esp += 4; return;
}

void f_006ce9c3(void)
{
    FN_ENTER(0x006ce9c3);
    /* 006ce9c3: call 0x6cea30 */ r_esp -= 4; W32(r_esp, 0x6ce9c8u); f_006cea30();
    /* 006ce9c8: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9c3); r_esp += 4; return;
}

void f_006ce9ca(void)
{
    FN_ENTER(0x006ce9ca);
    /* 006ce9ca: call 0x6cea8c */ r_esp -= 4; W32(r_esp, 0x6ce9cfu); f_006cea8c();
    /* 006ce9cf: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9ca); r_esp += 4; return;
}

void f_006ce9d1(void)
{
    FN_ENTER(0x006ce9d1);
    /* 006ce9d1: call 0x6ceaa4 */ r_esp -= 4; W32(r_esp, 0x6ce9d6u); f_006ceaa4();
    /* 006ce9d6: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9d1); r_esp += 4; return;
}

void f_006ce9d8(void)
{
    FN_ENTER(0x006ce9d8);
    /* 006ce9d8: call 0x6ceabc */ r_esp -= 4; W32(r_esp, 0x6ce9ddu); f_006ceabc();
    /* 006ce9dd: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9d8); r_esp += 4; return;
}

void f_006ce9df(void)
{
    FN_ENTER(0x006ce9df);
    /* 006ce9df: call 0x6ceb4c */ r_esp -= 4; W32(r_esp, 0x6ce9e4u); f_006ceb4c();
    /* 006ce9e4: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9df); r_esp += 4; return;
}

void f_006ce9e6(void)
{
    FN_ENTER(0x006ce9e6);
    /* 006ce9e6: call 0x6cebcc */ r_esp -= 4; W32(r_esp, 0x6ce9ebu); f_006cebcc();
    /* 006ce9eb: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9e6); r_esp += 4; return;
}

void f_006ce9ed(void)
{
    FN_ENTER(0x006ce9ed);
    /* 006ce9ed: call 0x6cef18 */ r_esp -= 4; W32(r_esp, 0x6ce9f2u); f_006cef18();
    /* 006ce9f2: jmp 0x6ce9f9 */ goto L_006ce9f9;
L_006ce9f9:; BB(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9ed); r_esp += 4; return;
}

void f_006ce9f4(void)
{
    FN_ENTER(0x006ce9f4);
    /* 006ce9f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ce9f6: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6ce9f9u); call_ind(t); }
    /* 006ce9f9: ret  */ FN_RET(0x006ce9f4); r_esp += 4; return;
}

void f_006ce9f9(void)
{
    FN_ENTER(0x006ce9f9);
    /* 006ce9f9: ret  */ FN_RET(0x006ce9f9); r_esp += 4; return;
}

void f_006ce9fc(void) /* sub_6CE9FC */
{
    FN_ENTER(0x006ce9fc);
    /* 006ce9fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ce9fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ce9ff: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cea02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cea04: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cea07u); call_ind(t); }
    /* 006cea07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cea09: jne 0x6cea0d */ if (!fZ) goto L_006cea0d;
L_006cea0b:; BB(0x006cea0b);
    /* 006cea0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cea0c: ret  */ FN_RET(0x006ce9fc); r_esp += 4; return;
L_006cea0d:; BB(0x006cea0d);
    /* 006cea0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cea0f: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cea14u); f_006dc988();
    /* 006cea14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cea16: je 0x6cea2b */ if (fZ) goto L_006cea2b;
L_006cea18:; BB(0x006cea18);
    /* 006cea18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cea1a: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006cea1c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cea1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cea21: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6cea24u); call_ind(t); }
    /* 006cea24: mov dword ptr [ebp + 0x20], 0xa */ W32((u32)(r_ebp+0x20u), 0xau);
L_006cea2b:; BB(0x006cea2b);
    /* 006cea2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cea2c: ret  */ FN_RET(0x006ce9fc); r_esp += 4; return;
}

void f_006cea30(void) /* sub_6CEA30 */
{
    FN_ENTER(0x006cea30);
    /* 006cea30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cea31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cea32: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cea34: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cea36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cea38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cea3a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006cea3c: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6cea3fu); call_ind(t); }
    /* 006cea3f: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006cea41: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cea46u); f_0073ec50();
    /* 006cea46: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006cea49: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006cea4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cea4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cea4f: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6cea54u); f_00735884();
    /* 006cea54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cea57: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 006cea5a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cea5c: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cea61u); f_006dc8d8();
    /* 006cea61: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cea64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cea66: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6cea6bu); f_006dc8d8();
    /* 006cea6b: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 006cea6e: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cea71: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006cea75: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006cea78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006cea7c: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6cea81u); f_0070f5a4();
    /* 006cea81: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 006cea88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cea89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cea8a: ret  */ FN_RET(0x006cea30); r_esp += 4; return;
}

void f_006cea8c(void) /* sub_6CEA8C */
{
    FN_ENTER(0x006cea8c);
    /* 006cea8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cea8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cea8f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006cea91: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cea93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cea95: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006cea97: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6cea9au); call_ind(t); }
    /* 006cea9a: mov dword ptr [ebx + 0x20], 8 */ W32((u32)(r_ebx+0x20u), 0x8u);
    /* 006ceaa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ceaa2: ret  */ FN_RET(0x006cea8c); r_esp += 4; return;
}

void f_006ceaa4(void) /* sub_6CEAA4 */
{
    FN_ENTER(0x006ceaa4);
    /* 006ceaa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ceaa5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ceaa7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ceaa9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ceaab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ceaad: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006ceaaf: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ceab2u); call_ind(t); }
    /* 006ceab2: mov dword ptr [ebx + 0x20], 8 */ W32((u32)(r_ebx+0x20u), 0x8u);
    /* 006ceab9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ceaba: ret  */ FN_RET(0x006ceaa4); r_esp += 4; return;
}

void f_006ceabc(void) /* sub_6CEABC */
{
    FN_ENTER(0x006ceabc);
    /* 006ceabc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ceabd: mov edi, ecx */ r_edi = r_ecx;
    /* 006ceabf: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 006ceac2: mov edx, dword ptr [eax + 0x2b4] */ r_edx = R32((u32)(r_eax+0x2b4u));
    /* 006ceac8: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006ceacb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ceace: jge 0x6ceae4 */ if ((fS==fO)) goto L_006ceae4;
L_006cead0:; BB(0x006cead0);
    /* 006cead0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cead2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006cead4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006cead6: mov ecx, edi */ r_ecx = r_edi;
    /* 006cead8: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ceadbu); call_ind(t); }
    /* 006ceadb: mov dword ptr [edi + 0x20], 0xa */ W32((u32)(r_edi+0x20u), 0xau);
    /* 006ceae2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ceae3: ret  */ FN_RET(0x006ceabc); r_esp += 4; return;
L_006ceae4:; BB(0x006ceae4);
    /* 006ceae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ceae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ceae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ceae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ceae9: push 0x41f */ { u32 v = 0x41fu; r_esp -= 4; W32(r_esp, v); }
    /* 006ceaee: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ceaf3u); f_00814298();
    /* 006ceaf3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ceaf6: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006ceaf9: call 0x688f70 */ r_esp -= 4; W32(r_esp, 0x6ceafeu); f_00688f70();
    /* 006ceafe: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006ceb01: call 0x688fa0 */ r_esp -= 4; W32(r_esp, 0x6ceb06u); f_00688fa0();
    /* 006ceb06: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006ceb09: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x6ceb0eu); f_00695388();
    /* 006ceb0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ceb10: jne 0x6ceb40 */ if (!fZ) goto L_006ceb40;
L_006ceb12:; BB(0x006ceb12);
    /* 006ceb12: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006ceb15: call 0x688fd0 */ r_esp -= 4; W32(r_esp, 0x6ceb1au); f_00688fd0();
    /* 006ceb1a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006ceb1c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006ceb1f: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x6ceb24u); f_007772bc();
    /* 006ceb24: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006ceb27: call 0x69208c */ r_esp -= 4; W32(r_esp, 0x6ceb2cu); f_0069208c();
    /* 006ceb2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ceb2e: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006ceb30: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006ceb32: mov ecx, edi */ r_ecx = r_edi;
    /* 006ceb34: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ceb37u); call_ind(t); }
    /* 006ceb37: mov dword ptr [edi + 0x20], 0xa */ W32((u32)(r_edi+0x20u), 0xau);
    /* 006ceb3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ceb3f: ret  */ FN_RET(0x006ceabc); r_esp += 4; return;
L_006ceb40:; BB(0x006ceb40);
    /* 006ceb40: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006ceb43: call 0x695420 */ r_esp -= 4; W32(r_esp, 0x6ceb48u); f_00695420();
    /* 006ceb48: jmp 0x6ceb12 */ goto L_006ceb12;
}

void f_006ceb4c(void) /* sub_6CEB4C */
{
    FN_ENTER(0x006ceb4c);
    /* 006ceb4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ceb4d: mov edi, ecx */ r_edi = r_ecx;
    /* 006ceb4f: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006ceb52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ceb54: je 0x6ceb8c */ if (fZ) goto L_006ceb8c;
L_006ceb56:; BB(0x006ceb56);
    /* 006ceb56: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006ceb5d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ceb5f: je 0x6ceb8c */ if (fZ) goto L_006ceb8c;
L_006ceb61:; BB(0x006ceb61);
    /* 006ceb61: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6ceb66u); f_007365f4();
    /* 006ceb66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ceb68: je 0x6ceb74 */ if (fZ) goto L_006ceb74;
L_006ceb6a:; BB(0x006ceb6a);
    /* 006ceb6a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ceb6d: je 0x6cebb2 */ if (fZ) goto L_006cebb2;
L_006ceb6f:; BB(0x006ceb6f);
    /* 006ceb6f: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006ceb72: jmp 0x6ceb8c */ goto L_006ceb8c;
L_006ceb74:; BB(0x006ceb74);
    /* 006ceb74: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006ceb77: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ceb7cu); f_007127b0();
    /* 006ceb7c: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006ceb83: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006ceb8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ceb8b: ret  */ FN_RET(0x006ceb4c); r_esp += 4; return;
L_006ceb8c:; BB(0x006ceb8c);
    /* 006ceb8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ceb8e: je 0x6cebb0 */ if (fZ) goto L_006cebb0;
L_006ceb90:; BB(0x006ceb90);
    /* 006ceb90: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006ceb97: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ceb99: je 0x6cebb0 */ if (fZ) goto L_006cebb0;
L_006ceb9b:; BB(0x006ceb9b);
    /* 006ceb9b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ceba0u); f_007127b0();
    /* 006ceba0: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006ceba7: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 006cebae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cebaf: ret  */ FN_RET(0x006ceb4c); r_esp += 4; return;
L_006cebb0:; BB(0x006cebb0);
    /* 006cebb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cebb1: ret  */ FN_RET(0x006ceb4c); r_esp += 4; return;
L_006cebb2:; BB(0x006cebb2);
    /* 006cebb2: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006cebb5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cebbau); f_007127b0();
    /* 006cebba: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006cebc1: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 006cebc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cebc9: ret  */ FN_RET(0x006ceb4c); r_esp += 4; return;
}

void f_006cebcc(void) /* sub_6CEBCC */
{
    FN_ENTER(0x006cebcc);
    /* 006cebcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cebcd: mov edi, ecx */ r_edi = r_ecx;
    /* 006cebcf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006cebd1: mov ecx, edi */ r_ecx = r_edi;
    /* 006cebd3: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cebd6u); call_ind(t); }
    /* 006cebd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cebd8: jne 0x6cebdc */ if (!fZ) goto L_006cebdc;
L_006cebda:; BB(0x006cebda);
    /* 006cebda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cebdb: ret  */ FN_RET(0x006cebcc); r_esp += 4; return;
L_006cebdc:; BB(0x006cebdc);
    /* 006cebdc: mov ecx, edi */ r_ecx = r_edi;
    /* 006cebde: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cebe3u); f_006dc988();
    /* 006cebe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cebe5: je 0x6cebfa */ if (fZ) goto L_006cebfa;
L_006cebe7:; BB(0x006cebe7);
    /* 006cebe7: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006cebea: call 0x68bfe0 */ r_esp -= 4; W32(r_esp, 0x6cebefu); f_0068bfe0();
    /* 006cebef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cebf1: je 0x6cebfc */ if (fZ) goto L_006cebfc;
L_006cebf3:; BB(0x006cebf3);
    /* 006cebf3: mov dword ptr [edi + 0x20], 7 */ W32((u32)(r_edi+0x20u), 0x7u);
L_006cebfa:; BB(0x006cebfa);
    /* 006cebfa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cebfb: ret  */ FN_RET(0x006cebcc); r_esp += 4; return;
L_006cebfc:; BB(0x006cebfc);
    /* 006cebfc: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006cebff: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x6cec04u); f_00695388();
    /* 006cec04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cec06: jne 0x6cec11 */ if (!fZ) goto L_006cec11;
L_006cec08:; BB(0x006cec08);
    /* 006cec08: mov dword ptr [edi + 0x20], 6 */ W32((u32)(r_edi+0x20u), 0x6u);
    /* 006cec0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cec10: ret  */ FN_RET(0x006cebcc); r_esp += 4; return;
L_006cec11:; BB(0x006cec11);
    /* 006cec11: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006cec14: call 0x6953f0 */ r_esp -= 4; W32(r_esp, 0x6cec19u); f_006953f0();
    /* 006cec19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cec1b: je 0x6cebf3 */ if (fZ) goto L_006cebf3;
L_006cec1d:; BB(0x006cec1d);
    /* 006cec1d: jmp 0x6cec08 */ goto L_006cec08;
}

void f_006cec1f(void)
{
    FN_ENTER(0x006cec1f);
    /* 006cec1f: nop  */ ;
    /* 006cec20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cec21: mov ebp, esp */ r_ebp = r_esp;
    /* 006cec23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cec25: push 0x8edc44 */ { u32 v = 0x8edc44u; r_esp -= 4; W32(r_esp, v); }
    /* 006cec2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cec30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cec31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cec38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cec3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cec3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cec41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cec44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cec47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cec4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cec4d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006cec50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cec53: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6cec58u); f_006dc410();
    /* 006cec58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cec5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cec62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cec65: mov dword ptr [ecx], 0xb3bf10 */ W32((u32)(r_ecx), 0xb3bf10u);
    /* 006cec6b: mov eax, dword ptr [0x9ced0c] */ r_eax = R32((u32)(0x9ced0cu));
    /* 006cec70: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006cec73: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cec75: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006cec78: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006cec7b: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006cec7e: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006cec81: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006cec84: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cec89u); f_006dc9fc();
    /* 006cec89: mov dword ptr [eax*4 + 0xa96110], 1 */ W32((u32)(r_eax*4+0xa96110u), 0x1u);
    /* 006cec94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cec96: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cec9bu); f_00791748();
    /* 006cec9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cec9c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cec9f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ceca2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ceca5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cecac: mov esp, ebp */ r_esp = r_ebp;
    /* 006cecae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cecaf: ret 8 */ FN_RET(0x006cec1f); r_esp += 12; return;
}

void f_006cec20(void) /* sub_6CEC20 */
{
    FN_ENTER(0x006cec20);
    /* 006cec20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cec21: mov ebp, esp */ r_ebp = r_esp;
    /* 006cec23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cec25: push 0x8edc44 */ { u32 v = 0x8edc44u; r_esp -= 4; W32(r_esp, v); }
    /* 006cec2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cec30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cec31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cec38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cec3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cec3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cec41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cec44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cec47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cec4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cec4d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006cec50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cec53: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6cec58u); f_006dc410();
    /* 006cec58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cec5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cec62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cec65: mov dword ptr [ecx], 0xb3bf10 */ W32((u32)(r_ecx), 0xb3bf10u);
    /* 006cec6b: mov eax, dword ptr [0x9ced0c] */ r_eax = R32((u32)(0x9ced0cu));
    /* 006cec70: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006cec73: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cec75: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006cec78: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006cec7b: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006cec7e: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006cec81: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006cec84: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6cec89u); f_006dc9fc();
    /* 006cec89: mov dword ptr [eax*4 + 0xa96110], 1 */ W32((u32)(r_eax*4+0xa96110u), 0x1u);
    /* 006cec94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cec96: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6cec9bu); f_00791748();
    /* 006cec9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cec9c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cec9f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ceca2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ceca5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cecac: mov esp, ebp */ r_esp = r_ebp;
    /* 006cecae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cecaf: ret 8 */ FN_RET(0x006cec20); r_esp += 12; return;
}

void f_006cecb4(void) /* sub_6CECB4 */
{
    FN_ENTER(0x006cecb4);
    /* 006cecb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cecb5: mov ebp, esp */ r_ebp = r_esp;
    /* 006cecb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cecb9: push 0x8edc72 */ { u32 v = 0x8edc72u; r_esp -= 4; W32(r_esp, v); }
    /* 006cecbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cecc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cecc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ceccc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ceccf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cecd2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cecd5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cecd8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cecdb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006cecde: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cece1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006cece4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cece7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6cececu); f_008193cc();
    /* 006cecec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cecf3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cecf6: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006cecf9: call 0x6daefc */ r_esp -= 4; W32(r_esp, 0x6cecfeu); f_006daefc();
    /* 006cecfe: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ced05: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ced08: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ced0b: mov dword ptr [ecx], 0xb3bf40 */ W32((u32)(r_ecx), 0xb3bf40u);
    /* 006ced11: mov eax, dword ptr [0x9ced10] */ r_eax = R32((u32)(0x9ced10u));
    /* 006ced16: mov dword ptr [ecx + 0x1c], 0xb3bf50 */ W32((u32)(r_ecx+0x1cu), 0xb3bf50u);
    /* 006ced1d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ced20: mov dword ptr [ecx + 0x42c], edx */ W32((u32)(r_ecx+0x42cu), r_edx);
    /* 006ced26: mov dword ptr [ecx + 0x430], 0 */ W32((u32)(r_ecx+0x430u), 0x0u);
    /* 006ced30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ced32: je 0x6ced52 */ if (fZ) goto L_006ced52;
L_006ced34:; BB(0x006ced34);
    /* 006ced34: mov eax, edx */ r_eax = r_edx;
    /* 006ced36: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ced3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ced3b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6ced40u); f_006dc358();
    /* 006ced40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ced41: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ced44: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006ced47: mov dword ptr [eax*4 + 0xa96100], 1 */ W32((u32)(r_eax*4+0xa96100u), 0x1u);
L_006ced52:; BB(0x006ced52);
    /* 006ced52: mov eax, ecx */ r_eax = r_ecx;
    /* 006ced54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ced57: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ced5e: mov esp, ebp */ r_esp = r_ebp;
    /* 006ced60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ced61: ret 8 */ FN_RET(0x006cecb4); r_esp += 12; return;
}

void f_006ced64(void) /* sub_6CED64 */
{
    FN_ENTER(0x006ced64);
    /* 006ced64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ced65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ced66: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ced69: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ced6b: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 006ced71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ced73: je 0x6cee2d */ if (fZ) goto L_006cee2d;
L_006ced79:; BB(0x006ced79);
    /* 006ced79: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ced7c: jne 0x6cedd4 */ if (!fZ) goto L_006cedd4;
L_006ced7e:; BB(0x006ced7e);
    /* 006ced7e: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 006ced81: call 0x6db7b8 */ r_esp -= 4; W32(r_esp, 0x6ced86u); f_006db7b8();
    /* 006ced86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ced88: je 0x6ceea9 */ if (fZ) goto L_006ceea9;
L_006ced8e:; BB(0x006ced8e);
    /* 006ced8e: mov ecx, dword ptr [ebp + 0x42c] */ r_ecx = R32((u32)(r_ebp+0x42cu));
    /* 006ced94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ced96: je 0x6ceea9 */ if (fZ) goto L_006ceea9;
L_006ced9c:; BB(0x006ced9c);
    /* 006ced9c: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6ceda1u); f_00694780();
    /* 006ceda1: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ceda7: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006cedaa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cedac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cedae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006cedb0: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006cedb7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6cedbcu); f_007c1160();
    /* 006cedbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cedbe: je 0x6ceea9 */ if (fZ) goto L_006ceea9;
L_006cedc4:; BB(0x006cedc4);
    /* 006cedc4: mov dword ptr [ebp + 0x430], 2 */ W32((u32)(r_ebp+0x430u), 0x2u);
    /* 006cedce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cedd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cedd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cedd3: ret  */ FN_RET(0x006ced64); r_esp += 4; return;
L_006cedd4:; BB(0x006cedd4);
    /* 006cedd4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cedd7: jne 0x6ceea9 */ if (!fZ) goto L_006ceea9;
L_006ceddd:; BB(0x006ceddd);
    /* 006ceddd: mov ecx, dword ptr [ebp + 0x42c] */ r_ecx = R32((u32)(r_ebp+0x42cu));
    /* 006cede3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cede5: je 0x6cedec */ if (fZ) goto L_006cedec;
L_006cede7:; BB(0x006cede7);
    /* 006cede7: call 0x694308 */ r_esp -= 4; W32(r_esp, 0x6cedecu); f_00694308();
L_006cedec:; BB(0x006cedec);
    /* 006cedec: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 006cedef: call 0x6daf34 */ r_esp -= 4; W32(r_esp, 0x6cedf4u); f_006daf34();
    /* 006cedf4: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 006cedfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cedfc: je 0x6cee0f */ if (fZ) goto L_006cee0f;
L_006cedfe:; BB(0x006cedfe);
    /* 006cedfe: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006cee02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cee03: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6cee08u); f_00717ed8();
    /* 006cee08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cee09: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
L_006cee0f:; BB(0x006cee0f);
    /* 006cee0f: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006cee13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cee14: call 0x6d7354 */ r_esp -= 4; W32(r_esp, 0x6cee19u); f_006d7354();
    /* 006cee19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cee1a: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006cee1e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006cee23: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006cee27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cee2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cee2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cee2c: ret  */ FN_RET(0x006ced64); r_esp += 4; return;
L_006cee2d:; BB(0x006cee2d);
    /* 006cee2d: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 006cee33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cee35: je 0x6ceeaf */ if (fZ) goto L_006ceeaf;
L_006cee37:; BB(0x006cee37);
    /* 006cee37: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006cee3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cee3c: call 0x6d7338 */ r_esp -= 4; W32(r_esp, 0x6cee41u); f_006d7338();
    /* 006cee41: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 006cee47: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006cee4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cee4c: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6cee51u); f_00717f08();
    /* 006cee51: mov dword ptr [esp + 8], 0x43a60000 */ W32((u32)(r_esp+0x8u), 0x43a60000u);
    /* 006cee59: mov dword ptr [esp + 0xc], 0x42a00000 */ W32((u32)(r_esp+0xcu), 0x42a00000u);
    /* 006cee61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006cee63: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cee68u); f_0073ec50();
    /* 006cee68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cee6b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006cee6e: mov edi, dword ptr [ebp + 0x42c] */ r_edi = R32((u32)(r_ebp+0x42cu));
    /* 006cee74: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006cee78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cee79: lea edi, [ebp + 0x1c] */ r_edi = (u32)(r_ebp+0x1cu);
    /* 006cee7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cee7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cee7e: mov ecx, edi */ r_ecx = r_edi;
    /* 006cee80: call 0x6dbc80 */ r_esp -= 4; W32(r_esp, 0x6cee85u); f_006dbc80();
    /* 006cee85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cee87: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 006cee89: mov ecx, edi */ r_ecx = r_edi;
    /* 006cee8b: call 0x6daf54 */ r_esp -= 4; W32(r_esp, 0x6cee90u); f_006daf54();
    /* 006cee90: mov ecx, dword ptr [ebp + 0x42c] */ r_ecx = R32((u32)(r_ebp+0x42cu));
    /* 006cee96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cee98: je 0x6cee9f */ if (fZ) goto L_006cee9f;
L_006cee9a:; BB(0x006cee9a);
    /* 006cee9a: call 0x6942cc */ r_esp -= 4; W32(r_esp, 0x6cee9fu); f_006942cc();
L_006cee9f:; BB(0x006cee9f);
    /* 006cee9f: mov dword ptr [ebp + 0x430], 1 */ W32((u32)(r_ebp+0x430u), 0x1u);
L_006ceea9:; BB(0x006ceea9);
    /* 006ceea9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ceeac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ceead: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ceeae: ret  */ FN_RET(0x006ced64); r_esp += 4; return;
L_006ceeaf:; BB(0x006ceeaf);
    /* 006ceeaf: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ceeb5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ceebau); f_0068d5a8();
    /* 006ceeba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ceebb: mov dword ptr [ebp + 0x42c], eax */ W32((u32)(r_ebp+0x42cu), r_eax);
    /* 006ceec1: jmp 0x6cee37 */ goto L_006cee37;
}

void f_006ceec8(void) /* sub_6CEEC8 */
{
    FN_ENTER(0x006ceec8);
    /* 006ceec8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006ceecd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ceece: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6ceed3u); f_006dc358();
    /* 006ceed3: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006ceed6: mov eax, dword ptr [edx*4 + 0xa96100] */ r_eax = R32((u32)(r_edx*4+0xa96100u));
    /* 006ceedd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ceede: ret  */ FN_RET(0x006ceec8); r_esp += 4; return;
}

void f_006ceee0(void) /* sub_6CEEE0 */
{
    FN_ENTER(0x006ceee0);
    /* 006ceee0: mov dword ptr [0xa960f4], 0x3f800000 */ W32((u32)(0xa960f4u), 0x3f800000u);
    /* 006ceeea: mov dword ptr [0xa960f8], 0x41000000 */ W32((u32)(0xa960f8u), 0x41000000u);
    /* 006ceef4: mov dword ptr [0xa960fc], 0x3fc00000 */ W32((u32)(0xa960fcu), 0x3fc00000u);
    /* 006ceefe: ret  */ FN_RET(0x006ceee0); r_esp += 4; return;
}

void f_006cef00(void) /* sub_6CEF00 */
{
    FN_ENTER(0x006cef00);
    /* 006cef00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cef02: mov dword ptr [0xa96100], eax */ W32((u32)(0xa96100u), r_eax);
    /* 006cef07: mov dword ptr [0xa96104], eax */ W32((u32)(0xa96104u), r_eax);
    /* 006cef0c: mov dword ptr [0xa96108], eax */ W32((u32)(0xa96108u), r_eax);
    /* 006cef11: mov dword ptr [0xa9610c], eax */ W32((u32)(0xa9610cu), r_eax);
    /* 006cef16: ret  */ FN_RET(0x006cef00); r_esp += 4; return;
}

void f_006cef18(void) /* sub_6CEF18 */
{
    FN_ENTER(0x006cef18);
    /* 006cef18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cef19: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cef1c: mov edi, ecx */ r_edi = r_ecx;
    /* 006cef1e: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cef25: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006cef2d: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006cef2f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cef34u); f_0073ec50();
    /* 006cef34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cef35: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006cef38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cef39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cef3a: mov ecx, edi */ r_ecx = r_edi;
    /* 006cef3c: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6cef41u); f_006dc794();
    /* 006cef41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cef43: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006cef45: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006cef47: mov ecx, edi */ r_ecx = r_edi;
    /* 006cef49: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6cef4cu); call_ind(t); }
    /* 006cef4c: mov ecx, edi */ r_ecx = r_edi;
    /* 006cef4e: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6cef53u); f_006dc9ec();
    /* 006cef53: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006cef56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cef57: call 0x73a33c */ r_esp -= 4; W32(r_esp, 0x6cef5cu); f_0073a33c();
    /* 006cef5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cef5d: mov dword ptr [edi + 0x20], 2 */ W32((u32)(r_edi+0x20u), 0x2u);
    /* 006cef64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cef66: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006cef69: mov ecx, edi */ r_ecx = r_edi;
    /* 006cef6b: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6cef70u); f_006dc62c();
    /* 006cef70: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006cef73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cef76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cef77: ret  */ FN_RET(0x006cef18); r_esp += 4; return;
}

void f_006cef78(void) /* sub_6CEF78 */
{
    FN_ENTER(0x006cef78);
    /* 006cef78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cef7a: mov dword ptr [0xa96110], eax */ W32((u32)(0xa96110u), r_eax);
    /* 006cef7f: mov dword ptr [0xa96114], eax */ W32((u32)(0xa96114u), r_eax);
    /* 006cef84: mov dword ptr [0xa96118], eax */ W32((u32)(0xa96118u), r_eax);
    /* 006cef89: mov dword ptr [0xa9611c], eax */ W32((u32)(0xa9611cu), r_eax);
    /* 006cef8e: ret  */ FN_RET(0x006cef78); r_esp += 4; return;
}

void f_006cef90(void) /* sub_6CEF90 */
{
    FN_ENTER(0x006cef90);
    /* 006cef90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cef91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006cef93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006cef95: call 0x6cefb4 */ r_esp -= 4; W32(r_esp, 0x6cef9au); f_006cefb4();
    /* 006cef9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006cef9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cefa0: jne 0x6cefa6 */ if (!fZ) goto L_006cefa6;
L_006cefa2:; BB(0x006cefa2);
    /* 006cefa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cefa3: ret 4 */ FN_RET(0x006cef90); r_esp += 8; return;
L_006cefa6:; BB(0x006cefa6);
    /* 006cefa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cefa7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6cefacu); f_005c2f74();
    /* 006cefac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cefad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006cefae: ret 4 */ FN_RET(0x006cef90); r_esp += 8; return;
}

void f_006cefb4(void) /* sub_6CEFB4 */
{
    FN_ENTER(0x006cefb4);
    /* 006cefb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cefb5: mov ebp, esp */ r_ebp = r_esp;
    /* 006cefb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cefb9: push 0x8edc8c */ { u32 v = 0x8edc8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cefbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cefc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cefc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cefcc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cefcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cefd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006cefd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006cefd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006cefdb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006cefde: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cefe5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cefe8: mov dword ptr [ecx], 0xb3bfb0 */ W32((u32)(r_ecx), 0xb3bfb0u);
    /* 006cefee: call 0x6cf3d8 */ r_esp -= 4; W32(r_esp, 0x6ceff3u); f_006cf3d8();
    /* 006ceff3: mov dword ptr [0xa96134], 0 */ W32((u32)(0xa96134u), 0x0u);
    /* 006ceffd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cf004: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cf007: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6cf00cu); f_006dc848();
    /* 006cf00c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cf00f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cf016: mov esp, ebp */ r_esp = r_ebp;
    /* 006cf018: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cf019: ret  */ FN_RET(0x006cefb4); r_esp += 4; return;
}

