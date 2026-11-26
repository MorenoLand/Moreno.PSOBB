#include "protos.h"

void f_0040c03c(void) /* sub_40C03C */
{
    FN_ENTER(0x0040c03c);
    /* 0040c03c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c03d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c03e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c03f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c040: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040c042: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0040c045: lea edx, [ebx + 0x34] */ r_edx = (u32)(r_ebx+0x34u);
    /* 0040c048: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c04a: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040c04d: mov ebp, eax */ r_ebp = r_eax;
    /* 0040c04f: mov esi, edx */ r_esi = r_edx;
    /* 0040c051: mov edi, ecx */ r_edi = r_ecx;
L_0040c053:; BB(0x0040c053);
    /* 0040c053: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c054: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0040c056: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x40c05bu); f_00508db8();
    /* 0040c05b: lea eax, [ebp + 0x9a3104] */ r_eax = (u32)(r_ebp+0x9a3104u);
    /* 0040c061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c062: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0040c064: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x40c069u); f_00508dd0();
    /* 0040c069: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040c06c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040c06f: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c071: ja 0x40c053 */ if ((!fC&&!fZ)) goto L_0040c053;
L_0040c073:; BB(0x0040c073);
    /* 0040c073: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040c074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c075: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040c076: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040c077: ret  */ FN_RET(0x0040c03c); r_esp += 4; return;
}

void f_0040c078(void) /* sub_40C078 */
{
    FN_ENTER(0x0040c078);
    /* 0040c078: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c079: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040c07b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040c07d: call 0x40c09c */ r_esp -= 4; W32(r_esp, 0x40c082u); f_0040c09c();
    /* 0040c082: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040c086: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c088: jne 0x40c08e */ if (!fZ) goto L_0040c08e;
L_0040c08a:; BB(0x0040c08a);
    /* 0040c08a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040c08b: ret 4 */ FN_RET(0x0040c078); r_esp += 8; return;
L_0040c08e:; BB(0x0040c08e);
    /* 0040c08e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c08f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40c094u); f_005c2f74();
    /* 0040c094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040c095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040c096: ret 4 */ FN_RET(0x0040c078); r_esp += 8; return;
}

void f_0040c09c(void) /* sub_40C09C */
{
    FN_ENTER(0x0040c09c);
    /* 0040c09c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c09d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c09f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0a1: push 0x8cc66c */ { u32 v = 0x8cc66cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040c0b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c0b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040c0ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040c0bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040c0c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040c0c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040c0c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c0c9: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0040c0cc: mov dword ptr [ecx], 0xaf2930 */ W32((u32)(r_ecx), 0xaf2930u);
    /* 0040c0d2: mov eax, dword ptr [edx*4 + 0xa3addc] */ r_eax = R32((u32)(r_edx*4+0xa3addcu));
    /* 0040c0d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c0db: je 0x40c0e8 */ if (fZ) goto L_0040c0e8;
L_0040c0dd:; BB(0x0040c0dd);
    /* 0040c0dd: mov dword ptr [edx*4 + 0xa3addc], 0 */ W32((u32)(r_edx*4+0xa3addcu), 0x0u);
L_0040c0e8:; BB(0x0040c0e8);
    /* 0040c0e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c0ef: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40c0f4u); f_008171e8();
    /* 0040c0f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c0f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c0fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c101: ret  */ FN_RET(0x0040c09c); r_esp += 4; return;
}

void f_0040c104(void) /* sub_40C104 */
{
    FN_ENTER(0x0040c104);
    /* 0040c104: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c105: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c107: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c109: push 0x8cc694 */ { u32 v = 0x8cc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c10e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c115: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040c11c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c11f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040c122: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040c125: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040c128: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040c12b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040c12e: mov eax, dword ptr [eax*4 + 0xa3addc] */ r_eax = R32((u32)(r_eax*4+0xa3addcu));
    /* 0040c135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c137: je 0x40c147 */ if (fZ) goto L_0040c147;
L_0040c139:; BB(0x0040c139);
    /* 0040c139: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c13c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c143: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c145: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c146: ret  */ FN_RET(0x0040c104); r_esp += 4; return;
L_0040c147:; BB(0x0040c147);
    /* 0040c147: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0040c14e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c150: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40c155u); f_005caba4();
    /* 0040c155: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040c156: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040c159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c15b: je 0x40c190 */ if (fZ) goto L_0040c190;
L_0040c15d:; BB(0x0040c15d);
    /* 0040c15d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0040c164: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c16b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040c16e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c172: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c175: call 0x40c194 */ r_esp -= 4; W32(r_esp, 0x40c17au); f_0040c194();
    /* 0040c17a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c17d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040c184:; BB(0x0040c184);
    /* 0040c184: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040c187: mov dword ptr [edx*4 + 0xa3addc], eax */ W32((u32)(r_edx*4+0xa3addcu), r_eax);
    /* 0040c18e: jmp 0x40c139 */ goto L_0040c139;
L_0040c190:; BB(0x0040c190);
    /* 0040c190: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c192: jmp 0x40c184 */ goto L_0040c184;
}

void f_0040c194(void) /* sub_40C194 */
{
    FN_ENTER(0x0040c194);
    /* 0040c194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c195: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040c197: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c19b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040c19d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40c1a2u); f_008193cc();
    /* 0040c1a2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0040c1a6: mov dword ptr [ebp], 0xaf2930 */ W32((u32)(r_ebp), 0xaf2930u);
    /* 0040c1ad: mov edx, dword ptr [0x9a3140] */ r_edx = R32((u32)(0x9a3140u));
    /* 0040c1b3: mov dword ptr [ebp + 0x20], 0xffffffff */ W32((u32)(r_ebp+0x20u), 0xffffffffu);
    /* 0040c1ba: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0040c1bd: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0040c1c0: mov eax, ebp */ r_eax = r_ebp;
    /* 0040c1c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c1c3: ret 8 */ FN_RET(0x0040c194); r_esp += 12; return;
}

void f_0040c1c8(void) /* sub_40C1C8 */
{
    FN_ENTER(0x0040c1c8);
    /* 0040c1c8: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0040c1cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c1d0: je 0x40c1e6 */ if (fZ) goto L_0040c1e6;
L_0040c1d2:; BB(0x0040c1d2);
    /* 0040c1d2: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0040c1d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c1d8: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0040c1db: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c1de: jge 0x40c1e1 */ if ((fS==fO)) goto L_0040c1e1;
L_0040c1e0:; BB(0x0040c1e0);
    /* 0040c1e0: ret  */ FN_RET(0x0040c1c8); r_esp += 4; return;
L_0040c1e1:; BB(0x0040c1e1);
    /* 0040c1e1: call 0x40c1e8 */ r_esp -= 4; W32(r_esp, 0x40c1e6u); f_0040c1e8();
L_0040c1e6:; BB(0x0040c1e6);
    /* 0040c1e6: ret  */ FN_RET(0x0040c1c8); r_esp += 4; return;
}

void f_0040c1e8(void) /* sub_40C1E8 */
{
    FN_ENTER(0x0040c1e8);
    /* 0040c1e8: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c1ee: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0040c1f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c1f3: je 0x40c3bc */ if (fZ) goto L_0040c3bc;
L_0040c1f9:; BB(0x0040c1f9);
    /* 0040c1f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c1fc: je 0x40c2e5 */ if (fZ) goto L_0040c2e5;
L_0040c202:; BB(0x0040c202);
    /* 0040c202: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c205: je 0x40c20e */ if (fZ) goto L_0040c20e;
L_0040c207:; BB(0x0040c207);
    /* 0040c207: add esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040c20d: ret  */ FN_RET(0x0040c1e8); r_esp += 4; return;
L_0040c20e:; BB(0x0040c20e);
    /* 0040c20e: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0040c216: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0040c21a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0040c21e: mov dword ptr [esp + 0x38], 4 */ W32((u32)(r_esp+0x38u), 0x4u);
    /* 0040c226: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0040c22a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0040c22e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0040c232: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040c234: mov ebx, edx */ r_ebx = r_edx;
    /* 0040c236: jmp 0x40c23c */ goto L_0040c23c;
L_0040c238:; BB(0x0040c238);
    /* 0040c238: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
L_0040c23c:; BB(0x0040c23c);
    /* 0040c23c: mov edx, dword ptr [ebx + 0x8f9f18] */ r_edx = R32((u32)(r_ebx+0x8f9f18u));
    /* 0040c242: mov ecx, dword ptr [ebx + 0x8f9f1c] */ r_ecx = R32((u32)(r_ebx+0x8f9f1cu));
    /* 0040c248: fld dword ptr [ebx + 0x8f9f0c] */ FPUSH(R_F32((u32)(r_ebx+0x8f9f0cu)));
    /* 0040c24e: fld dword ptr [ebx + 0x8f9f08] */ FPUSH(R_F32((u32)(r_ebx+0x8f9f08u)));
    /* 0040c254: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0040c256: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0040c25a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0040c25d: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0040c261: mov eax, 0x77000000 */ r_eax = 0x77000000u;
    /* 0040c266: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040c268: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0040c26c: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040c26f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0040c273: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0040c276: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0040c278: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0040c27b: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0040c27f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040c282: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0040c286: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0040c288: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040c28a: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 0040c28d: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0040c291: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0040c294: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0040c296: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040c298: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 0040c29b: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0040c29f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0040c2a2: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0040c2a6: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0040c2a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040c2aa: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0040c2ad: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0040c2b1: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0040c2b4: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0040c2b7: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0040c2bb: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0040c2be: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0040c2c2: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2c4: push 0xc3f50000 */ { u32 v = 0xc3f50000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2c9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2cc: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40c2d1u); f_0082b5d8();
    /* 0040c2d1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c2d4: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040c2d7: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040c2da: jb 0x40c238 */ if (fC) goto L_0040c238;
L_0040c2e0:; BB(0x0040c2e0);
    /* 0040c2e0: jmp 0x40c4ca */ goto L_0040c4ca;
L_0040c2e5:; BB(0x0040c2e5);
    /* 0040c2e5: mov dword ptr [esp + 0x74], 0 */ W32((u32)(r_esp+0x74u), 0x0u);
    /* 0040c2ed: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 0040c2f1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0040c2f5: mov dword ptr [esp + 0x78], 4 */ W32((u32)(r_esp+0x78u), 0x4u);
    /* 0040c2fd: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 0040c301: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0040c305: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0040c309: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040c30b: mov ebx, edx */ r_ebx = r_edx;
    /* 0040c30d: jmp 0x40c313 */ goto L_0040c313;
L_0040c30f:; BB(0x0040c30f);
    /* 0040c30f: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
L_0040c313:; BB(0x0040c313);
    /* 0040c313: mov edx, dword ptr [ebx + 0x8f9f3c] */ r_edx = R32((u32)(r_ebx+0x8f9f3cu));
    /* 0040c319: mov ecx, dword ptr [ebx + 0x8f9f40] */ r_ecx = R32((u32)(r_ebx+0x8f9f40u));
    /* 0040c31f: fld dword ptr [ebx + 0x8f9f30] */ FPUSH(R_F32((u32)(r_ebx+0x8f9f30u)));
    /* 0040c325: fld dword ptr [ebx + 0x8f9f2c] */ FPUSH(R_F32((u32)(r_ebx+0x8f9f2cu)));
    /* 0040c32b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0040c32d: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0040c331: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0040c334: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 0040c338: mov eax, 0xff000000 */ r_eax = 0xff000000u;
    /* 0040c33d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040c33f: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0040c343: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040c346: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0040c34a: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0040c34d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0040c34f: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0040c352: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 0040c356: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040c359: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0040c35d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0040c35f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040c361: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 0040c364: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0040c368: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0040c36b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0040c36d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040c36f: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 0040c372: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 0040c376: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0040c379: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0040c37d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0040c37f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040c381: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0040c384: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0040c388: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0040c38b: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0040c38e: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 0040c392: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0040c395: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0040c399: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c39b: push 0xc3f50000 */ { u32 v = 0xc3f50000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3a0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3a3: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40c3a8u); f_0082b5d8();
    /* 0040c3a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c3ab: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040c3ae: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040c3b1: jb 0x40c30f */ if (fC) goto L_0040c30f;
L_0040c3b7:; BB(0x0040c3b7);
    /* 0040c3b7: jmp 0x40c4d3 */ goto L_0040c4d3;
L_0040c3bc:; BB(0x0040c3bc);
    /* 0040c3bc: mov dword ptr [esp + 0xb4], 0 */ W32((u32)(r_esp+0xb4u), 0x0u);
    /* 0040c3c7: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 0040c3ce: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 0040c3d5: mov dword ptr [esp + 0xb8], 4 */ W32((u32)(r_esp+0xb8u), 0x4u);
    /* 0040c3e0: lea edx, [esp + 0xbc] */ r_edx = (u32)(r_esp+0xbcu);
    /* 0040c3e7: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 0040c3ee: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0040c3f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040c3f4: mov ebx, edx */ r_ebx = r_edx;
    /* 0040c3f6: jmp 0x40c3ff */ goto L_0040c3ff;
L_0040c3f8:; BB(0x0040c3f8);
    /* 0040c3f8: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
L_0040c3ff:; BB(0x0040c3ff);
    /* 0040c3ff: fld dword ptr [0x8f9ef4] */ FPUSH(R_F32((u32)(0x8f9ef4u)));
    /* 0040c405: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0040c408: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0040c40b: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0040c411: mov eax, dword ptr [esp + 0xac] */ r_eax = R32((u32)(r_esp+0xacu));
    /* 0040c418: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040c41a: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0040c41d: fadd dword ptr [ecx*4 + 0x8f9ee0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8f9ee0u));
    /* 0040c424: fmul dword ptr [0x8f9efc] */ ST(0) = ST(0) * R_F32((u32)(0x8f9efcu));
    /* 0040c42a: fst dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0));
    /* 0040c42d: mov eax, 0xff001a36 */ r_eax = 0xff001a36u;
    /* 0040c432: mov ecx, dword ptr [esp + 0xb0] */ r_ecx = R32((u32)(r_esp+0xb0u));
    /* 0040c439: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040c43b: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 0040c442: mov dword ptr [ecx + 8], 0x44200000 */ W32((u32)(r_ecx+0x8u), 0x44200000u);
    /* 0040c449: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 0040c450: fst dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0));
    /* 0040c453: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040c455: mov ecx, dword ptr [esp + 0xb0] */ r_ecx = R32((u32)(r_esp+0xb0u));
    /* 0040c45c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040c45f: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 0040c466: mov dword ptr [ecx + 0x10], 0x44200000 */ W32((u32)(r_ecx+0x10u), 0x44200000u);
    /* 0040c46d: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 0040c474: fst dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0));
    /* 0040c477: mov ecx, dword ptr [esp + 0xb0] */ r_ecx = R32((u32)(r_esp+0xb0u));
    /* 0040c47e: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0040c481: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 0040c488: mov dword ptr [ecx + 0x18], 0x44200000 */ W32((u32)(r_ecx+0x18u), 0x44200000u);
    /* 0040c48f: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 0040c496: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0040c499: mov ecx, dword ptr [esp + 0xb0] */ r_ecx = R32((u32)(r_esp+0xb0u));
    /* 0040c4a0: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0040c4a3: lea eax, [esp + 0xac] */ r_eax = (u32)(r_esp+0xacu);
    /* 0040c4aa: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4ac: push 0xc3fa0000 */ { u32 v = 0xc3fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4b1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4b4: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x40c4b9u); f_0082b558();
    /* 0040c4b9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c4bc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040c4bf: cmp ebx, 0x78 */ {  u32 a = r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040c4c2: jb 0x40c3f8 */ if (fC) goto L_0040c3f8;
L_0040c4c8:; BB(0x0040c4c8);
    /* 0040c4c8: jmp 0x40c4dc */ goto L_0040c4dc;
L_0040c4ca:; BB(0x0040c4ca);
    /* 0040c4ca: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0040c4ce: jmp 0x40c207 */ goto L_0040c207;
L_0040c4d3:; BB(0x0040c4d3);
    /* 0040c4d3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0040c4d7: jmp 0x40c207 */ goto L_0040c207;
L_0040c4dc:; BB(0x0040c4dc);
    /* 0040c4dc: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0040c4e0: jmp 0x40c207 */ goto L_0040c207;
}

void f_0040c4e8(void) /* sub_40C4E8 */
{
    FN_ENTER(0x0040c4e8);
    /* 0040c4e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c4eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4ed: push 0x8cc6b0 */ { u32 v = 0x8cc6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c4f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c4f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040c500: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c503: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040c506: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040c509: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040c50c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040c50f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040c512: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040c515: mov eax, ecx */ r_eax = r_ecx;
    /* 0040c517: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0040c51a: mov dword ptr [eax], 0xaf2998 */ W32((u32)(r_eax), 0xaf2998u);
    /* 0040c520: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c522: je 0x40c53a */ if (fZ) goto L_0040c53a;
L_0040c524:; BB(0x0040c524);
    /* 0040c524: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c528: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c52d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040c531: mov edx, ecx */ r_edx = r_ecx;
    /* 0040c533: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
L_0040c53a:; BB(0x0040c53a);
    /* 0040c53a: mov edx, dword ptr [0xa3ae04] */ r_edx = R32((u32)(0xa3ae04u));
    /* 0040c540: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c542: je 0x40c551 */ if (fZ) goto L_0040c551;
L_0040c544:; BB(0x0040c544);
    /* 0040c544: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c548: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c54d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c551:; BB(0x0040c551);
    /* 0040c551: mov edx, dword ptr [0xa3ae00] */ r_edx = R32((u32)(0xa3ae00u));
    /* 0040c557: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c559: je 0x40c568 */ if (fZ) goto L_0040c568;
L_0040c55b:; BB(0x0040c55b);
    /* 0040c55b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c55f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c564: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c568:; BB(0x0040c568);
    /* 0040c568: mov edx, dword ptr [0xa3adfc] */ r_edx = R32((u32)(0xa3adfcu));
    /* 0040c56e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c570: je 0x40c57f */ if (fZ) goto L_0040c57f;
L_0040c572:; BB(0x0040c572);
    /* 0040c572: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c576: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c57b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c57f:; BB(0x0040c57f);
    /* 0040c57f: mov edx, dword ptr [0xa3adf4] */ r_edx = R32((u32)(0xa3adf4u));
    /* 0040c585: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c587: je 0x40c596 */ if (fZ) goto L_0040c596;
L_0040c589:; BB(0x0040c589);
    /* 0040c589: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c58d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c592: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c596:; BB(0x0040c596);
    /* 0040c596: mov edx, dword ptr [0xa3adf0] */ r_edx = R32((u32)(0xa3adf0u));
    /* 0040c59c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c59e: je 0x40c5ad */ if (fZ) goto L_0040c5ad;
L_0040c5a0:; BB(0x0040c5a0);
    /* 0040c5a0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c5a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c5a9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c5ad:; BB(0x0040c5ad);
    /* 0040c5ad: mov edx, dword ptr [0xa3ade4] */ r_edx = R32((u32)(0xa3ade4u));
    /* 0040c5b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c5b5: je 0x40c5c4 */ if (fZ) goto L_0040c5c4;
L_0040c5b7:; BB(0x0040c5b7);
    /* 0040c5b7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c5bb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c5c0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c5c4:; BB(0x0040c5c4);
    /* 0040c5c4: mov edx, dword ptr [0xa3ade0] */ r_edx = R32((u32)(0xa3ade0u));
    /* 0040c5ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c5cc: je 0x40c5db */ if (fZ) goto L_0040c5db;
L_0040c5ce:; BB(0x0040c5ce);
    /* 0040c5ce: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c5d2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c5d7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c5db:; BB(0x0040c5db);
    /* 0040c5db: mov edx, dword ptr [0xa3addc] */ r_edx = R32((u32)(0xa3addcu));
    /* 0040c5e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c5e3: je 0x40c5f2 */ if (fZ) goto L_0040c5f2;
L_0040c5e5:; BB(0x0040c5e5);
    /* 0040c5e5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040c5e9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040c5ee: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0040c5f2:; BB(0x0040c5f2);
    /* 0040c5f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c5f9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40c5feu); f_008171e8();
    /* 0040c5fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c601: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c603: jne 0x40c615 */ if (!fZ) goto L_0040c615;
L_0040c605:; BB(0x0040c605);
    /* 0040c605: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c608: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c60f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c612: ret 4 */ FN_RET(0x0040c4e8); r_esp += 8; return;
L_0040c615:; BB(0x0040c615);
    /* 0040c615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040c618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c619: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40c61eu); f_005c2f74();
    /* 0040c61e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040c61f: jmp 0x40c605 */ goto L_0040c605;
}

void f_0040c624(void) /* sub_40C624 */
{
    FN_ENTER(0x0040c624);
    /* 0040c624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c625: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c629: push 0x8cc6e6 */ { u32 v = 0x8cc6e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c62e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040c63c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c63f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040c642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040c645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040c648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040c64b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c64e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040c651: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40c656u); f_008193cc();
    /* 0040c656: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c65d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c660: mov dword ptr [edx], 0xaf2998 */ W32((u32)(r_edx), 0xaf2998u);
    /* 0040c666: mov eax, dword ptr [0x9a3144] */ r_eax = R32((u32)(0x9a3144u));
    /* 0040c66b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c66d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c66e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0040c671: call 0x40c104 */ r_esp -= 4; W32(r_esp, 0x40c676u); f_0040c104();
    /* 0040c676: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c678: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c67b: call 0x40ce9c */ r_esp -= 4; W32(r_esp, 0x40c680u); f_0040ce9c();
    /* 0040c680: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c682: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c685: call 0x40c104 */ r_esp -= 4; W32(r_esp, 0x40c68au); f_0040c104();
    /* 0040c68a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c68c: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c68f: call 0x40c104 */ r_esp -= 4; W32(r_esp, 0x40c694u); f_0040c104();
    /* 0040c694: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c696: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c699: call 0x40c7a0 */ r_esp -= 4; W32(r_esp, 0x40c69eu); f_0040c7a0();
    /* 0040c69e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6a0: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c6a3: call 0x40c7a0 */ r_esp -= 4; W32(r_esp, 0x40c6a8u); f_0040c7a0();
    /* 0040c6a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6aa: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c6ad: call 0x40ce9c */ r_esp -= 4; W32(r_esp, 0x40c6b2u); f_0040ce9c();
    /* 0040c6b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6b4: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c6b7: call 0x40ce9c */ r_esp -= 4; W32(r_esp, 0x40c6bcu); f_0040ce9c();
    /* 0040c6bc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0040c6c3: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c6c8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40c6cdu); f_005caba4();
    /* 0040c6cd: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c6d0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040c6d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c6d5: je 0x40c710 */ if (fZ) goto L_0040c710;
L_0040c6d7:; BB(0x0040c6d7);
    /* 0040c6d7: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0040c6de: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040c6e5: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c6e8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040c6eb: call 0x40b990 */ r_esp -= 4; W32(r_esp, 0x40c6f0u); f_0040b990();
    /* 0040c6f0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040c6f3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040c6fa:; BB(0x0040c6fa);
    /* 0040c6fa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c6fd: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0040c700: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c703: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c70a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c70c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c70d: ret 4 */ FN_RET(0x0040c624); r_esp += 8; return;
L_0040c710:; BB(0x0040c710);
    /* 0040c710: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c712: jmp 0x40c6fa */ goto L_0040c6fa;
}

void f_0040c714(void) /* sub_40C714 */
{
    FN_ENTER(0x0040c714);
    /* 0040c714: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c715: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040c717: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040c719: call 0x40c738 */ r_esp -= 4; W32(r_esp, 0x40c71eu); f_0040c738();
    /* 0040c71e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040c722: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c724: jne 0x40c72a */ if (!fZ) goto L_0040c72a;
L_0040c726:; BB(0x0040c726);
    /* 0040c726: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040c727: ret 4 */ FN_RET(0x0040c714); r_esp += 8; return;
L_0040c72a:; BB(0x0040c72a);
    /* 0040c72a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c72b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40c730u); f_005c2f74();
    /* 0040c730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040c731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040c732: ret 4 */ FN_RET(0x0040c714); r_esp += 8; return;
}

void f_0040c738(void) /* sub_40C738 */
{
    FN_ENTER(0x0040c738);
    /* 0040c738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c739: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c73b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c73d: push 0x8cc700 */ { u32 v = 0x8cc700u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c742: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c749: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040c750: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c753: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040c756: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040c759: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040c75c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040c75f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040c762: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c765: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0040c768: mov dword ptr [ecx], 0xaf29f8 */ W32((u32)(r_ecx), 0xaf29f8u);
    /* 0040c76e: mov eax, dword ptr [edx*4 + 0xa3adf0] */ r_eax = R32((u32)(r_edx*4+0xa3adf0u));
    /* 0040c775: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c777: je 0x40c784 */ if (fZ) goto L_0040c784;
L_0040c779:; BB(0x0040c779);
    /* 0040c779: mov dword ptr [edx*4 + 0xa3adf0], 0 */ W32((u32)(r_edx*4+0xa3adf0u), 0x0u);
L_0040c784:; BB(0x0040c784);
    /* 0040c784: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c78b: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40c790u); f_008171e8();
    /* 0040c790: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c793: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c79a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c79c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c79d: ret  */ FN_RET(0x0040c738); r_esp += 4; return;
}

void f_0040c7a0(void) /* sub_40C7A0 */
{
    FN_ENTER(0x0040c7a0);
    /* 0040c7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7a5: push 0x8cc728 */ { u32 v = 0x8cc728u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040c7b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c7bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040c7be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040c7c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040c7c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040c7c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040c7ca: mov eax, dword ptr [eax*4 + 0xa3adf0] */ r_eax = R32((u32)(r_eax*4+0xa3adf0u));
    /* 0040c7d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c7d3: je 0x40c7e3 */ if (fZ) goto L_0040c7e3;
L_0040c7d5:; BB(0x0040c7d5);
    /* 0040c7d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c7d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c7df: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c7e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c7e2: ret  */ FN_RET(0x0040c7a0); r_esp += 4; return;
L_0040c7e3:; BB(0x0040c7e3);
    /* 0040c7e3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0040c7ea: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7ec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40c7f1u); f_005caba4();
    /* 0040c7f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040c7f2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040c7f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c7f7: je 0x40c82c */ if (fZ) goto L_0040c82c;
L_0040c7f9:; BB(0x0040c7f9);
    /* 0040c7f9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0040c800: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c807: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040c80a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c80d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c80e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c811: call 0x40c830 */ r_esp -= 4; W32(r_esp, 0x40c816u); f_0040c830();
    /* 0040c816: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c819: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040c820:; BB(0x0040c820);
    /* 0040c820: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040c823: mov dword ptr [edx*4 + 0xa3adf0], eax */ W32((u32)(r_edx*4+0xa3adf0u), r_eax);
    /* 0040c82a: jmp 0x40c7d5 */ goto L_0040c7d5;
L_0040c82c:; BB(0x0040c82c);
    /* 0040c82c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040c82e: jmp 0x40c820 */ goto L_0040c820;
}

void f_0040c830(void) /* sub_40C830 */
{
    FN_ENTER(0x0040c830);
    /* 0040c830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c831: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040c833: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c837: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040c839: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40c83eu); f_008193cc();
    /* 0040c83e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0040c842: mov dword ptr [ebp], 0xaf29f8 */ W32((u32)(r_ebp), 0xaf29f8u);
    /* 0040c849: mov edx, dword ptr [0x9a3148] */ r_edx = R32((u32)(0x9a3148u));
    /* 0040c84f: mov dword ptr [ebp + 0x20], 0xffffffff */ W32((u32)(r_ebp+0x20u), 0xffffffffu);
    /* 0040c856: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0040c859: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0040c85c: mov eax, ebp */ r_eax = r_ebp;
    /* 0040c85e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c85f: ret 8 */ FN_RET(0x0040c830); r_esp += 12; return;
}

void f_0040c864(void) /* sub_40C864 */
{
    FN_ENTER(0x0040c864);
    /* 0040c864: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0040c869: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c86c: je 0x40c882 */ if (fZ) goto L_0040c882;
L_0040c86e:; BB(0x0040c86e);
    /* 0040c86e: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0040c871: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c874: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0040c877: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c87a: jge 0x40c87d */ if ((fS==fO)) goto L_0040c87d;
L_0040c87c:; BB(0x0040c87c);
    /* 0040c87c: ret  */ FN_RET(0x0040c864); r_esp += 4; return;
L_0040c87d:; BB(0x0040c87d);
    /* 0040c87d: call 0x40c884 */ r_esp -= 4; W32(r_esp, 0x40c882u); f_0040c884();
L_0040c882:; BB(0x0040c882);
    /* 0040c882: ret  */ FN_RET(0x0040c864); r_esp += 4; return;
}

void f_0040c884(void) /* sub_40C884 */
{
    FN_ENTER(0x0040c884);
    /* 0040c884: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0040c887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c889: jne 0x40c891 */ if (!fZ) goto L_0040c891;
L_0040c88b:; BB(0x0040c88b);
    /* 0040c88b: call 0x40cba8 */ r_esp -= 4; W32(r_esp, 0x40c890u); f_0040cba8();
    /* 0040c890: ret  */ FN_RET(0x0040c884); r_esp += 4; return;
L_0040c891:; BB(0x0040c891);
    /* 0040c891: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c894: jne 0x40c89b */ if (!fZ) goto L_0040c89b;
L_0040c896:; BB(0x0040c896);
    /* 0040c896: call 0x40c89c */ r_esp -= 4; W32(r_esp, 0x40c89bu); f_0040c89c();
L_0040c89b:; BB(0x0040c89b);
    /* 0040c89b: ret  */ FN_RET(0x0040c884); r_esp += 4; return;
}

void f_0040c89c(void) /* sub_40C89C */
{
    FN_ENTER(0x0040c89c);
    /* 0040c89c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c89d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c89e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c89f: sub esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c8a5: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0040c8ad: mov eax, 2 */ r_eax = 0x2u;
    /* 0040c8b2: mov edx, 0xff777777 */ r_edx = 0xff777777u;
    /* 0040c8b7: mov dword ptr [esp + 0x2c], 4 */ W32((u32)(r_esp+0x2cu), 0x4u);
    /* 0040c8bf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0040c8c2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0040c8c6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040c8ca: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0040c8ce: mov dword ptr [esp + 8], 0x8fa154 */ W32((u32)(r_esp+0x8u), 0x8fa154u);
    /* 0040c8d6: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0040c8da: mov dword ptr [esp + 0xc], 0x8fa144 */ W32((u32)(r_esp+0xcu), 0x8fa144u);
    /* 0040c8e2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0040c8e6: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 0040c8ea: mov dword ptr [esp + 0x18], 0x8fa134 */ W32((u32)(r_esp+0x18u), 0x8fa134u);
    /* 0040c8f2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0040c8f6: mov dword ptr [esp + 0x1c], 0x8fa124 */ W32((u32)(r_esp+0x1cu), 0x8fa124u);
    /* 0040c8fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c900: mov ebx, eax */ r_ebx = r_eax;
L_0040c902:; BB(0x0040c902);
    /* 0040c902: mov edi, dword ptr [esp + ebx + 4] */ r_edi = R32((u32)(r_esp+r_ebx+0x4u));
    /* 0040c906: mov edx, dword ptr [esp + ebx] */ r_edx = R32((u32)(r_esp+r_ebx));
    /* 0040c909: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0040c90b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0040c90d: jbe 0x40c9dc */ if ((fC||fZ)) goto L_0040c9dc;
L_0040c913:; BB(0x0040c913);
    /* 0040c913: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040c917: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0040c91b: mov ecx, dword ptr [edx + esi*8] */ r_ecx = R32((u32)(r_edx+r_esi*8));
    /* 0040c91e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0040c920: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040c924: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0040c928: mov edx, dword ptr [edx + esi*8 + 4] */ r_edx = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 0040c92c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0040c92f: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0040c933: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 0040c935: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040c939: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0040c93d: mov edx, dword ptr [edx + esi*8] */ r_edx = R32((u32)(r_edx+r_esi*8));
    /* 0040c940: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040c943: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0040c947: mov edx, dword ptr [esp + ebx + 0xc] */ r_edx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040c94b: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0040c94e: fadd dword ptr [edx + esi*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*8+0x4u));
    /* 0040c952: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0040c955: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0040c959: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 0040c95c: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040c960: mov ecx, dword ptr [esp + ebx + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040c964: fld dword ptr [edx + esi*8] */ FPUSH(R_F32((u32)(r_edx+r_esi*8)));
    /* 0040c967: fadd dword ptr [ecx + esi*8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*8));
    /* 0040c96a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0040c96e: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 0040c971: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040c975: fld dword ptr [edx + esi*8 + 4] */ FPUSH(R_F32((u32)(r_edx+r_esi*8+0x4u)));
    /* 0040c979: mov ecx, dword ptr [esp + ebx + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040c97d: fadd dword ptr [ecx + esi*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*8+0x4u));
    /* 0040c981: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0040c985: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 0040c988: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0040c98c: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 0040c98f: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040c993: mov ecx, dword ptr [esp + ebx + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040c997: fld dword ptr [edx + esi*8] */ FPUSH(R_F32((u32)(r_edx+r_esi*8)));
    /* 0040c99a: fadd dword ptr [ecx + esi*8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*8));
    /* 0040c99d: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0040c9a1: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0040c9a4: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040c9a8: mov edx, dword ptr [edx + esi*8 + 4] */ r_edx = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 0040c9ac: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0040c9b0: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0040c9b3: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0040c9b7: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 0040c9ba: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0040c9be: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9c0: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9c5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9c8: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40c9cdu); f_0082b5d8();
    /* 0040c9cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c9d0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040c9d3: cmp esi, dword ptr [esp + ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040c9d6: jb 0x40c913 */ if (fC) goto L_0040c913;
L_0040c9dc:; BB(0x0040c9dc);
    /* 0040c9dc: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040c9df: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040c9e2: jb 0x40c902 */ if (fC) goto L_0040c902;
L_0040c9e8:; BB(0x0040c9e8);
    /* 0040c9e8: mov dword ptr [esp + 0x88], 0 */ W32((u32)(r_esp+0x88u), 0x0u);
    /* 0040c9f3: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0040c9f7: mov edx, 4 */ r_edx = 0x4u;
    /* 0040c9fc: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 0040ca03: mov dword ptr [esp + 0x60], 0x43540000 */ W32((u32)(r_esp+0x60u), 0x43540000u);
    /* 0040ca0b: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 0040ca12: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0040ca19: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 0040ca20: mov eax, 0xff777777 */ r_eax = 0xff777777u;
    /* 0040ca25: mov dword ptr [esp + 0x64], 0x425c0000 */ W32((u32)(r_esp+0x64u), 0x425c0000u);
    /* 0040ca2d: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 0040ca34: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040ca36: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0040ca3d: mov dword ptr [ecx + 8], 0x43540000 */ W32((u32)(r_ecx+0x8u), 0x43540000u);
    /* 0040ca44: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0040ca4b: mov dword ptr [ecx + 0xc], 0x42600000 */ W32((u32)(r_ecx+0xcu), 0x42600000u);
    /* 0040ca52: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 0040ca59: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040ca5c: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0040ca63: mov dword ptr [ecx + 0x10], 0x43650000 */ W32((u32)(r_ecx+0x10u), 0x43650000u);
    /* 0040ca6a: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0040ca71: mov dword ptr [ecx + 0x14], 0x41c80000 */ W32((u32)(r_ecx+0x14u), 0x41c80000u);
    /* 0040ca78: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 0040ca7f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0040ca82: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0040ca89: mov dword ptr [ecx + 0x18], 0x43650000 */ W32((u32)(r_ecx+0x18u), 0x43650000u);
    /* 0040ca90: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 0040ca97: mov dword ptr [ecx + 0x1c], 0x41c00000 */ W32((u32)(r_ecx+0x1cu), 0x41c00000u);
    /* 0040ca9e: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 0040caa5: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0040caa8: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 0040caaf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cab1: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cab6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cab8: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40cabdu); f_0082b5d8();
    /* 0040cabd: mov dword ptr [esp + 0xd8], 0 */ W32((u32)(r_esp+0xd8u), 0x0u);
    /* 0040cac8: lea ecx, [esp + 0xb0] */ r_ecx = (u32)(r_esp+0xb0u);
    /* 0040cacf: mov edx, 4 */ r_edx = 0x4u;
    /* 0040cad4: mov dword ptr [esp + 0xd0], ecx */ W32((u32)(r_esp+0xd0u), r_ecx);
    /* 0040cadb: mov dword ptr [esp + 0xb0], 0x43cc8000 */ W32((u32)(r_esp+0xb0u), 0x43cc8000u);
    /* 0040cae6: lea eax, [esp + 0xe0] */ r_eax = (u32)(r_esp+0xe0u);
    /* 0040caed: mov dword ptr [esp + 0xd4], eax */ W32((u32)(r_esp+0xd4u), r_eax);
    /* 0040caf4: mov dword ptr [esp + 0xdc], edx */ W32((u32)(r_esp+0xdcu), r_edx);
    /* 0040cafb: mov eax, 0xff777777 */ r_eax = 0xff777777u;
    /* 0040cb00: mov dword ptr [esp + 0xb4], 0x43e40000 */ W32((u32)(r_esp+0xb4u), 0x43e40000u);
    /* 0040cb0b: mov ecx, dword ptr [esp + 0xd4] */ r_ecx = R32((u32)(r_esp+0xd4u));
    /* 0040cb12: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040cb14: mov ecx, dword ptr [esp + 0xd0] */ r_ecx = R32((u32)(r_esp+0xd0u));
    /* 0040cb1b: mov dword ptr [ecx + 8], 0x43cc8000 */ W32((u32)(r_ecx+0x8u), 0x43cc8000u);
    /* 0040cb22: mov ecx, dword ptr [esp + 0xd0] */ r_ecx = R32((u32)(r_esp+0xd0u));
    /* 0040cb29: mov dword ptr [ecx + 0xc], 0x43e48000 */ W32((u32)(r_ecx+0xcu), 0x43e48000u);
    /* 0040cb30: mov ecx, dword ptr [esp + 0xd4] */ r_ecx = R32((u32)(r_esp+0xd4u));
    /* 0040cb37: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040cb3a: mov ecx, dword ptr [esp + 0xd0] */ r_ecx = R32((u32)(r_esp+0xd0u));
    /* 0040cb41: mov dword ptr [ecx + 0x10], 0x43d50000 */ W32((u32)(r_ecx+0x10u), 0x43d50000u);
    /* 0040cb48: mov ecx, dword ptr [esp + 0xd0] */ r_ecx = R32((u32)(r_esp+0xd0u));
    /* 0040cb4f: mov dword ptr [ecx + 0x14], 0x43d50000 */ W32((u32)(r_ecx+0x14u), 0x43d50000u);
    /* 0040cb56: mov ecx, dword ptr [esp + 0xd4] */ r_ecx = R32((u32)(r_esp+0xd4u));
    /* 0040cb5d: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0040cb60: mov ecx, dword ptr [esp + 0xd0] */ r_ecx = R32((u32)(r_esp+0xd0u));
    /* 0040cb67: mov dword ptr [ecx + 0x18], 0x43d50000 */ W32((u32)(r_ecx+0x18u), 0x43d50000u);
    /* 0040cb6e: mov ecx, dword ptr [esp + 0xd0] */ r_ecx = R32((u32)(r_esp+0xd0u));
    /* 0040cb75: mov dword ptr [ecx + 0x1c], 0x43d48000 */ W32((u32)(r_ecx+0x1cu), 0x43d48000u);
    /* 0040cb7c: mov ecx, dword ptr [esp + 0xd4] */ r_ecx = R32((u32)(r_esp+0xd4u));
    /* 0040cb83: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0040cb86: lea eax, [esp + 0xd0] */ r_eax = (u32)(r_esp+0xd0u);
    /* 0040cb8d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb8f: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cb96: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40cb9bu); f_0082b5d8();
    /* 0040cb9b: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040cba1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040cba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040cba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040cba4: ret  */ FN_RET(0x0040c89c); r_esp += 4; return;
}

void f_0040cba8(void) /* sub_40CBA8 */
{
    FN_ENTER(0x0040cba8);
    /* 0040cba8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040cba9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cbab: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cbb1: mov eax, 0x8f9f80 */ r_eax = 0x8f9f80u;
    /* 0040cbb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040cbb8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0040cbbb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0040cbbe: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0040cbc2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0040cbc5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0040cbc9: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0040cbcc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0040cbd0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0040cbd3: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0040cbd7: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0040cbda: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0040cbde: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0040cbe1: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0040cbe5: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0040cbe8: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0040cbec: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0040cbef: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0040cbf3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0040cbf6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0040cbfa: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0040cbfd: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0040cc01: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0040cc04: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0040cc08: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0040cc0b: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0040cc0f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0040cc12: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0040cc16: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0040cc19: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0040cc1d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0040cc20: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0040cc24: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0040cc27: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0040cc2b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0040cc2e: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0040cc32: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0040cc35: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0040cc39: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0040cc3c: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0040cc40: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040cc43: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0040cc47: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0040cc4a: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0040cc4e: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0040cc51: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 0040cc54: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0040cc58: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0040cc5c: mov dword ptr [esp + 8], 0x8fa108 */ W32((u32)(r_esp+0x8u), 0x8fa108u);
    /* 0040cc64: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 0040cc68: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0040cc6c: mov dword ptr [esp + 0xc], 0x8fa0f0 */ W32((u32)(r_esp+0xcu), 0x8fa0f0u);
    /* 0040cc74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040cc76: mov ebx, eax */ r_ebx = r_eax;
    /* 0040cc78: mov dword ptr [esp + 0x18], 0x8fa0d8 */ W32((u32)(r_esp+0x18u), 0x8fa0d8u);
    /* 0040cc80: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0040cc87: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0040cc8b: mov dword ptr [esp + 0x1c], 0x8fa0c0 */ W32((u32)(r_esp+0x1cu), 0x8fa0c0u);
    /* 0040cc93: mov dword ptr [esp + 0x28], 0x8fa0a8 */ W32((u32)(r_esp+0x28u), 0x8fa0a8u);
    /* 0040cc9b: mov dword ptr [esp + 0x2c], 0x8fa090 */ W32((u32)(r_esp+0x2cu), 0x8fa090u);
    /* 0040cca3: mov dword ptr [esp + 0x38], 0x8fa078 */ W32((u32)(r_esp+0x38u), 0x8fa078u);
    /* 0040ccab: mov dword ptr [esp + 0x3c], 0x8fa060 */ W32((u32)(r_esp+0x3cu), 0x8fa060u);
    /* 0040ccb3: mov dword ptr [esp + 0x48], 0x8fa050 */ W32((u32)(r_esp+0x48u), 0x8fa050u);
    /* 0040ccbb: mov dword ptr [esp + 0x4c], 0x8fa040 */ W32((u32)(r_esp+0x4cu), 0x8fa040u);
    /* 0040ccc3: mov dword ptr [esp + 0x58], 0x8fa030 */ W32((u32)(r_esp+0x58u), 0x8fa030u);
    /* 0040cccb: mov dword ptr [esp + 0x5c], 0x8fa020 */ W32((u32)(r_esp+0x5cu), 0x8fa020u);
    /* 0040ccd3: mov dword ptr [esp + 0x68], 0 */ W32((u32)(r_esp+0x68u), 0x0u);
    /* 0040ccdb: mov dword ptr [esp + 0x6c], 4 */ W32((u32)(r_esp+0x6cu), 0x4u);
L_0040cce3:; BB(0x0040cce3);
    /* 0040cce3: mov edi, dword ptr [esp + ebx + 4] */ r_edi = R32((u32)(r_esp+r_ebx+0x4u));
    /* 0040cce7: mov edx, dword ptr [esp + ebx] */ r_edx = R32((u32)(r_esp+r_ebx));
    /* 0040ccea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0040ccec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0040ccee: jbe 0x40cdbd */ if ((fC||fZ)) goto L_0040cdbd;
L_0040ccf4:; BB(0x0040ccf4);
    /* 0040ccf4: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040ccf8: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0040ccfc: mov ecx, dword ptr [edx + esi*8] */ r_ecx = R32((u32)(r_edx+r_esi*8));
    /* 0040ccff: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0040cd01: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040cd05: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0040cd09: mov edx, dword ptr [edx + esi*8 + 4] */ r_edx = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 0040cd0d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0040cd10: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0040cd14: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 0040cd16: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040cd1a: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0040cd1e: mov edx, dword ptr [edx + esi*8] */ r_edx = R32((u32)(r_edx+r_esi*8));
    /* 0040cd21: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0040cd24: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0040cd28: mov edx, dword ptr [esp + ebx + 0xc] */ r_edx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040cd2c: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0040cd2f: fadd dword ptr [edx + esi*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*8+0x4u));
    /* 0040cd33: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0040cd36: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0040cd3a: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 0040cd3d: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040cd41: mov ecx, dword ptr [esp + ebx + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040cd45: fld dword ptr [edx + esi*8] */ FPUSH(R_F32((u32)(r_edx+r_esi*8)));
    /* 0040cd48: fadd dword ptr [ecx + esi*8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*8));
    /* 0040cd4b: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0040cd4f: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 0040cd52: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040cd56: fld dword ptr [edx + esi*8 + 4] */ FPUSH(R_F32((u32)(r_edx+r_esi*8+0x4u)));
    /* 0040cd5a: mov ecx, dword ptr [esp + ebx + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040cd5e: fadd dword ptr [ecx + esi*8 + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*8+0x4u));
    /* 0040cd62: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0040cd66: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 0040cd69: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0040cd6d: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 0040cd70: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040cd74: mov ecx, dword ptr [esp + ebx + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx+0xcu));
    /* 0040cd78: fld dword ptr [edx + esi*8] */ FPUSH(R_F32((u32)(r_edx+r_esi*8)));
    /* 0040cd7b: fadd dword ptr [ecx + esi*8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*8));
    /* 0040cd7e: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0040cd82: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0040cd85: mov edx, dword ptr [esp + ebx + 8] */ r_edx = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0040cd89: mov edx, dword ptr [edx + esi*8 + 4] */ r_edx = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 0040cd8d: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0040cd91: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0040cd94: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0040cd98: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 0040cd9b: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 0040cd9f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cda1: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cda6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cda8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040cda9: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40cdaeu); f_0082b5d8();
    /* 0040cdae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040cdb1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040cdb4: cmp esi, dword ptr [esp + ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+r_ebx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040cdb7: jb 0x40ccf4 */ if (fC) goto L_0040ccf4;
L_0040cdbd:; BB(0x0040cdbd);
    /* 0040cdbd: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040cdc0: cmp ebx, 0x60 */ {  u32 a = r_ebx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040cdc3: jb 0x40cce3 */ if (fC) goto L_0040cce3;
L_0040cdc9:; BB(0x0040cdc9);
    /* 0040cdc9: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040cdcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040cdd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040cdd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040cdd2: ret  */ FN_RET(0x0040cba8); r_esp += 4; return;
}

void f_0040cdd4(void) /* sub_40CDD4 */
{
    FN_ENTER(0x0040cdd4);
    /* 0040cdd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cdd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cdd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040cdd9: push 0x8cc744 */ { u32 v = 0x8cc744u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cdde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040cde4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cde5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040cdec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cdef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040cdf2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040cdf5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040cdf8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040cdfb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040cdfe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040ce01: mov eax, ecx */ r_eax = r_ecx;
    /* 0040ce03: mov dword ptr [eax], 0xaf2a80 */ W32((u32)(r_eax), 0xaf2a80u);
    /* 0040ce09: mov eax, dword ptr [eax + 0x220] */ r_eax = R32((u32)(r_eax+0x220u));
    /* 0040ce0f: mov edx, dword ptr [eax*4 + 0xa3adfc] */ r_edx = R32((u32)(r_eax*4+0xa3adfcu));
    /* 0040ce16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce18: je 0x40ce25 */ if (fZ) goto L_0040ce25;
L_0040ce1a:; BB(0x0040ce1a);
    /* 0040ce1a: mov dword ptr [eax*4 + 0xa3adfc], 0 */ W32((u32)(r_eax*4+0xa3adfcu), 0x0u);
L_0040ce25:; BB(0x0040ce25);
    /* 0040ce25: mov eax, ecx */ r_eax = r_ecx;
    /* 0040ce27: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 0040ce2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040ce2c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0040ce2e: jle 0x40ce61 */ if ((fZ||fS!=fO)) goto L_0040ce61;
L_0040ce30:; BB(0x0040ce30);
    /* 0040ce30: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ce33: mov ebx, dword ptr [ecx + edx*4 + 0x20] */ r_ebx = R32((u32)(r_ecx+r_edx*4+0x20u));
    /* 0040ce37: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0040ce3a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ce3c: je 0x40ce5a */ if (fZ) goto L_0040ce5a;
L_0040ce3e:; BB(0x0040ce3e);
    /* 0040ce3e: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0040ce42: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ce48: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0040ce4c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ce4f: mov dword ptr [ebx + eax*2 + 0x20], 0 */ W32((u32)(r_ebx+r_eax*2+0x20u), 0x0u);
    /* 0040ce57: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
L_0040ce5a:; BB(0x0040ce5a);
    /* 0040ce5a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040ce5d: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ce5f: jl 0x40ce30 */ if ((fS!=fO)) goto L_0040ce30;
L_0040ce61:; BB(0x0040ce61);
    /* 0040ce61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040ce68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ce6b: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40ce70u); f_008171e8();
    /* 0040ce70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ce73: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ce75: jne 0x40ce90 */ if (!fZ) goto L_0040ce90;
L_0040ce77:; BB(0x0040ce77);
    /* 0040ce77: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ce7a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040ce7d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ce80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ce83: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040ce8a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ce8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ce8d: ret 4 */ FN_RET(0x0040cdd4); r_esp += 8; return;
L_0040ce90:; BB(0x0040ce90);
    /* 0040ce90: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ce93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce94: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40ce99u); f_005c2f74();
    /* 0040ce99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ce9a: jmp 0x40ce77 */ goto L_0040ce77;
}

void f_0040ce9c(void) /* sub_40CE9C */
{
    FN_ENTER(0x0040ce9c);
    /* 0040ce9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ce9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ce9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040cea1: push 0x8cc76c */ { u32 v = 0x8cc76cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040cea6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040ceac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cead: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040ceb4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ceb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040ceba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040cebd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040cec0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040cec3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040cec6: mov eax, dword ptr [eax*4 + 0xa3adfc] */ r_eax = R32((u32)(r_eax*4+0xa3adfcu));
    /* 0040cecd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040cecf: je 0x40cedf */ if (fZ) goto L_0040cedf;
L_0040ced1:; BB(0x0040ced1);
    /* 0040ced1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ced4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040cedb: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cedd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cede: ret  */ FN_RET(0x0040ce9c); r_esp += 4; return;
L_0040cedf:; BB(0x0040cedf);
    /* 0040cedf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0040cee6: push 0x228 */ { u32 v = 0x228u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ceeb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40cef0u); f_005caba4();
    /* 0040cef0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040cef1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040cef4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040cef6: je 0x40cf2b */ if (fZ) goto L_0040cf2b;
L_0040cef8:; BB(0x0040cef8);
    /* 0040cef8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0040ceff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040cf06: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040cf09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040cf0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf0d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040cf10: call 0x40cf30 */ r_esp -= 4; W32(r_esp, 0x40cf15u); f_0040cf30();
    /* 0040cf15: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040cf18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040cf1f:; BB(0x0040cf1f);
    /* 0040cf1f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040cf22: mov dword ptr [edx*4 + 0xa3adfc], eax */ W32((u32)(r_edx*4+0xa3adfcu), r_eax);
    /* 0040cf29: jmp 0x40ced1 */ goto L_0040ced1;
L_0040cf2b:; BB(0x0040cf2b);
    /* 0040cf2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040cf2d: jmp 0x40cf1f */ goto L_0040cf1f;
}

void f_0040cf30(void) /* sub_40CF30 */
{
    FN_ENTER(0x0040cf30);
    /* 0040cf30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf31: mov ebp, esp */ r_ebp = r_esp;
    /* 0040cf33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf35: push 0x8cc788 */ { u32 v = 0x8cc788u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040cf40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040cf41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040cf48: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040cf4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040cf4e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0040cf51: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0040cf54: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0040cf57: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040cf5a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040cf5d: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0040cf60: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040cf63: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40cf68u); f_008193cc();
    /* 0040cf68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040cf6f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040cf72: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040cf75: mov dword ptr [eax], 0xaf2a80 */ W32((u32)(r_eax), 0xaf2a80u);
    /* 0040cf7b: mov edx, dword ptr [0x9a314c] */ r_edx = R32((u32)(0x9a314cu));
    /* 0040cf81: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0040cf84: mov dword ptr [eax + 0x220], ebx */ W32((u32)(r_eax+0x220u), r_ebx);
    /* 0040cf8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040cf8c: mov dword ptr [eax + 0x224], ecx */ W32((u32)(r_eax+0x224u), r_ecx);
    /* 0040cf92: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0040cf95: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0040cf98: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0040cf9b: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 0040cf9e: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0040cfa1: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0040cfa4: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 0040cfa7: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0040cfaa: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 0040cfad: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0040cfb0: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 0040cfb3: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 0040cfb6: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 0040cfb9: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0040cfbc: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 0040cfbf: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 0040cfc2: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 0040cfc5: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0040cfc8: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 0040cfcb: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 0040cfce: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 0040cfd1: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 0040cfd4: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 0040cfd7: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 0040cfda: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 0040cfe0: mov dword ptr [eax + 0x84], ecx */ W32((u32)(r_eax+0x84u), r_ecx);
    /* 0040cfe6: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 0040cfec: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 0040cff2: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
    /* 0040cff8: mov dword ptr [eax + 0x94], ecx */ W32((u32)(r_eax+0x94u), r_ecx);
    /* 0040cffe: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 0040d004: mov dword ptr [eax + 0x9c], ecx */ W32((u32)(r_eax+0x9cu), r_ecx);
    /* 0040d00a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d00c: je 0x40d1a6 */ if (fZ) goto L_0040d1a6;
L_0040d012:; BB(0x0040d012);
    /* 0040d012: mov edx, ebx */ r_edx = r_ebx;
    /* 0040d014: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d017: jne 0x40d0c5 */ if (!fZ) goto L_0040d0c5;
L_0040d01d:; BB(0x0040d01d);
    /* 0040d01d: mov dword ptr [eax + 0x1c], 0x13 */ W32((u32)(r_eax+0x1cu), 0x13u);
    /* 0040d024: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0040d026:; BB(0x0040d026);
    /* 0040d026: fld dword ptr [0x8fa1c4] */ FPUSH(R_F32((u32)(0x8fa1c4u)));
L_0040d02c:; BB(0x0040d02c);
    /* 0040d02c: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d02f: jle 0x40d038 */ if ((fZ||fS!=fO)) goto L_0040d038;
L_0040d031:; BB(0x0040d031);
    /* 0040d031: mov ecx, 0x43de8000 */ r_ecx = 0x43de8000u;
    /* 0040d036: jmp 0x40d03d */ goto L_0040d03d;
L_0040d038:; BB(0x0040d038);
    /* 0040d038: mov ecx, 0x420c0000 */ r_ecx = 0x420c0000u;
L_0040d03d:; BB(0x0040d03d);
    /* 0040d03d: jle 0x40d044 */ if ((fZ||fS!=fO)) goto L_0040d044;
L_0040d03f:; BB(0x0040d03f);
    /* 0040d03f: lea edx, [ebx - 9] */ r_edx = (u32)(r_ebx+0xfffffff7u);
    /* 0040d042: jmp 0x40d046 */ goto L_0040d046;
L_0040d044:; BB(0x0040d044);
    /* 0040d044: mov edx, ebx */ r_edx = r_ebx;
L_0040d046:; BB(0x0040d046);
    /* 0040d046: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0040d049: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0040d04c: fmul dword ptr [0x8fa1d4] */ ST(0) = ST(0) * R_F32((u32)(0x8fa1d4u));
    /* 0040d052: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040d054: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d056: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d058: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0040d05b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040d05d: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0040d060: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040d062: fstp dword ptr [esi + eax + 0xa0] */ W_F32((u32)(r_esi+r_eax+0xa0u), ST(0)); FPOP();
    /* 0040d069: lea edi, [eax + esi + 0xa0] */ r_edi = (u32)(r_eax+r_esi+0xa0u);
    /* 0040d070: mov dword ptr [esi + eax + 0xa8], 0x3b11a2b4 */ W32((u32)(r_esi+r_eax+0xa8u), 0x3b11a2b4u);
    /* 0040d07b: mov dword ptr [esi + eax + 0xa4], ecx */ W32((u32)(r_esi+r_eax+0xa4u), r_ecx);
    /* 0040d082: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040d083: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x40d088u); f_0050a0ec();
    /* 0040d088: mov ecx, eax */ r_ecx = r_eax;
    /* 0040d08a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d08d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040d090: mov dword ptr [eax + ebx*4 + 0x20], ecx */ W32((u32)(r_eax+r_ebx*4+0x20u), r_ecx);
    /* 0040d094: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d096: je 0x40d0a5 */ if (fZ) goto L_0040d0a5;
L_0040d098:; BB(0x0040d098);
    /* 0040d098: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d09d: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x40d0a2u); f_00508efc();
    /* 0040d0a2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_0040d0a5:; BB(0x0040d0a5);
    /* 0040d0a5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040d0a8: cmp ebx, dword ptr [eax + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d0ab: jge 0x40d18d */ if ((fS==fO)) goto L_0040d18d;
L_0040d0b1:; BB(0x0040d0b1);
    /* 0040d0b1: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d0b4: jle 0x40d026 */ if ((fZ||fS!=fO)) goto L_0040d026;
L_0040d0ba:; BB(0x0040d0ba);
    /* 0040d0ba: fld dword ptr [0x8fa1c0] */ FPUSH(R_F32((u32)(0x8fa1c0u)));
    /* 0040d0c0: jmp 0x40d02c */ goto L_0040d02c;
L_0040d0c5:; BB(0x0040d0c5);
    /* 0040d0c5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d0c8: jne 0x40d18d */ if (!fZ) goto L_0040d18d;
L_0040d0ce:; BB(0x0040d0ce);
    /* 0040d0ce: mov dword ptr [eax + 0x1c], 0x20 */ W32((u32)(r_eax+0x1cu), 0x20u);
    /* 0040d0d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040d0d7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0040d0da:; BB(0x0040d0da);
    /* 0040d0da: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040d0dd: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0040d0e0: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0040d0e3: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0040d0e6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0040d0e8: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0040d0eb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040d0ed: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0040d0f0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0040d0f3:; BB(0x0040d0f3);
    /* 0040d0f3: fld dword ptr [0x8fa1cc] */ FPUSH(R_F32((u32)(0x8fa1ccu)));
    /* 0040d0f9: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0040d0fc: fadd dword ptr [0x8fa1d0] */ ST(0) = ST(0) + R_F32((u32)(0x8fa1d0u));
    /* 0040d102: lea ebx, [edi + esi] */ r_ebx = (u32)(r_edi+r_esi);
    /* 0040d105: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0040d108: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0040d10b: fmul dword ptr [0x8fa1d4] */ ST(0) = ST(0) * R_F32((u32)(0x8fa1d4u));
    /* 0040d111: fadd dword ptr [0x8fa1d8] */ ST(0) = ST(0) + R_F32((u32)(0x8fa1d8u));
    /* 0040d117: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d119: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0040d11c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d11e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d120: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0040d123: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d125: fstp dword ptr [edx + eax + 0xa0] */ W_F32((u32)(r_edx+r_eax+0xa0u), ST(0)); FPOP();
    /* 0040d12c: fstp dword ptr [edx + eax + 0xa4] */ W_F32((u32)(r_edx+r_eax+0xa4u), ST(0)); FPOP();
    /* 0040d133: lea ecx, [eax + edx + 0xa0] */ r_ecx = (u32)(r_eax+r_edx+0xa0u);
    /* 0040d13a: mov dword ptr [edx + eax + 0xa8], 0x3dcccccd */ W32((u32)(r_edx+r_eax+0xa8u), 0x3dcccccdu);
    /* 0040d145: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d146: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x40d14bu); f_0050a0ec();
    /* 0040d14b: mov edx, eax */ r_edx = r_eax;
    /* 0040d14d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d150: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040d153: mov dword ptr [eax + ebx*4 + 0x20], edx */ W32((u32)(r_eax+r_ebx*4+0x20u), r_edx);
    /* 0040d157: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d15a: mov ecx, dword ptr [eax + edx*2 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x20u));
    /* 0040d15e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d160: je 0x40d16f */ if (fZ) goto L_0040d16f;
L_0040d162:; BB(0x0040d162);
    /* 0040d162: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d167: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x40d16cu); f_00508efc();
    /* 0040d16c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_0040d16f:; BB(0x0040d16f);
    /* 0040d16f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040d172: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d175: jl 0x40d0f3 */ if ((fS!=fO)) goto L_0040d0f3;
L_0040d17b:; BB(0x0040d17b);
    /* 0040d17b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040d17e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d181: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0040d184: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d187: jl 0x40d0da */ if ((fS!=fO)) goto L_0040d0da;
L_0040d18d:; BB(0x0040d18d);
    /* 0040d18d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040d190: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040d193: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d196: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d199: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040d1a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d1a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d1a3: ret 8 */ FN_RET(0x0040cf30); r_esp += 12; return;
L_0040d1a6:; BB(0x0040d1a6);
    /* 0040d1a6: mov dword ptr [eax + 0x1c], 0x16 */ W32((u32)(r_eax+0x1cu), 0x16u);
    /* 0040d1ad: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0040d1af:; BB(0x0040d1af);
    /* 0040d1af: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0040d1b2: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0040d1b5: fmul dword ptr [0x8fa1d4] */ ST(0) = ST(0) * R_F32((u32)(0x8fa1d4u));
    /* 0040d1bb: fadd dword ptr [0x8fa1ac] */ ST(0) = ST(0) + R_F32((u32)(0x8fa1acu));
    /* 0040d1c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1c3: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0040d1c6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d1ca: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0040d1cd: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d1cf: fstp dword ptr [ecx + eax + 0xa4] */ W_F32((u32)(r_ecx+r_eax+0xa4u), ST(0)); FPOP();
    /* 0040d1d6: mov dword ptr [ecx + eax + 0xa0], 0x41000000 */ W32((u32)(r_ecx+r_eax+0xa0u), 0x41000000u);
    /* 0040d1e1: lea ebx, [eax + ecx + 0xa0] */ r_ebx = (u32)(r_eax+r_ecx+0xa0u);
    /* 0040d1e8: mov dword ptr [ecx + eax + 0xa8], 0x3b04655e */ W32((u32)(r_ecx+r_eax+0xa8u), 0x3b04655eu);
    /* 0040d1f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d1f4: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x40d1f9u); f_0050a0ec();
    /* 0040d1f9: mov ecx, eax */ r_ecx = r_eax;
    /* 0040d1fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d1fe: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040d201: mov dword ptr [eax + esi*4 + 0x20], ecx */ W32((u32)(r_eax+r_esi*4+0x20u), r_ecx);
    /* 0040d205: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0040d208: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d20a: je 0x40d225 */ if (fZ) goto L_0040d225;
L_0040d20c:; BB(0x0040d20c);
    /* 0040d20c: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d211: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x40d216u); f_00508efc();
    /* 0040d216: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040d219: mov ecx, dword ptr [eax + ebx*2 + 0x20] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x20u));
    /* 0040d21d: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x40d222u); f_00508f48();
    /* 0040d222: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_0040d225:; BB(0x0040d225);
    /* 0040d225: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040d228: cmp esi, dword ptr [eax + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d22b: jl 0x40d1af */ if ((fS!=fO)) goto L_0040d1af;
L_0040d22d:; BB(0x0040d22d);
    /* 0040d22d: jmp 0x40d18d */ goto L_0040d18d;
}

