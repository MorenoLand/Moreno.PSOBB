#include "protos.h"

void f_0068c038(void) /* sub_68C038 */
{
    FN_ENTER(0x0068c038);
    /* 0068c038: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c039: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c03c: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0068c040: call 0x68c098 */ r_esp -= 4; W32(r_esp, 0x68c045u); f_0068c098();
    /* 0068c045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c047: je 0x68c08c */ if (fZ) goto L_0068c08c;
L_0068c049:; BB(0x0068c049);
    /* 0068c049: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x68c04eu); f_008587a5();
    /* 0068c04e: fld dword ptr [0x93c74c] */ FPUSH(R_F32((u32)(0x93c74cu)));
    /* 0068c054: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0068c057: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0068c05a: fdiv dword ptr [0x93c750] */ ST(0) = ST(0) / R_F32((u32)(0x93c750u));
    /* 0068c060: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0068c062: fmul dword ptr [0x93c748] */ ST(0) = ST(0) * R_F32((u32)(0x93c748u));
    /* 0068c068: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0068c06a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0068c06e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0068c073: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068c078: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068c07c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0068c080: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068c084: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0068c088: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_0068c08c:; BB(0x0068c08c);
    /* 0068c08c: mov eax, ebx */ r_eax = r_ebx;
    /* 0068c08e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c091: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c092: ret 4 */ FN_RET(0x0068c038); r_esp += 8; return;
}

void f_0068c098(void) /* sub_68C098 */
{
    FN_ENTER(0x0068c098);
    /* 0068c098: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c099: mov esi, ecx */ r_esi = r_ecx;
    /* 0068c09b: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c09d: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68c0a2u); f_0068a3fc();
    /* 0068c0a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c0a4: jne 0x68c0aa */ if (!fZ) goto L_0068c0aa;
L_0068c0a6:; BB(0x0068c0a6);
    /* 0068c0a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c0a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c0a9: ret  */ FN_RET(0x0068c098); r_esp += 4; return;
L_0068c0aa:; BB(0x0068c0aa);
    /* 0068c0aa: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0068c0ad: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c0b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c0b1: ret  */ FN_RET(0x0068c098); r_esp += 4; return;
}

void f_0068c0b4(void) /* sub_68C0B4 */
{
    FN_ENTER(0x0068c0b4);
    /* 0068c0b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c0b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c0b6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068c0b8: mov ebx, dword ptr [ebp + 0x45c] */ r_ebx = R32((u32)(r_ebp+0x45cu));
    /* 0068c0be: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c0c0: je 0x68c0d0 */ if (fZ) goto L_0068c0d0;
L_0068c0c2:; BB(0x0068c0c2);
    /* 0068c0c2: movzx eax, word ptr [ebp + 0x94] */ r_eax = (u32)R16((u32)(r_ebp+0x94u));
    /* 0068c0c9: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c0ce: je 0x68c0d5 */ if (fZ) goto L_0068c0d5;
L_0068c0d0:; BB(0x0068c0d0);
    /* 0068c0d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c0d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c0d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c0d4: ret  */ FN_RET(0x0068c0b4); r_esp += 4; return;
L_0068c0d5:; BB(0x0068c0d5);
    /* 0068c0d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068c0d7: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x68c0dcu); f_00689410();
    /* 0068c0dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c0de: jne 0x68c0d0 */ if (!fZ) goto L_0068c0d0;
L_0068c0e0:; BB(0x0068c0e0);
    /* 0068c0e0: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0068c0e3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068c0e5: jne 0x68c0d0 */ if (!fZ) goto L_0068c0d0;
L_0068c0e7:; BB(0x0068c0e7);
    /* 0068c0e7: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 0068c0ed: test eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c0f2: jne 0x68c0d0 */ if (!fZ) goto L_0068c0d0;
L_0068c0f4:; BB(0x0068c0f4);
    /* 0068c0f4: mov eax, dword ptr [ebp + 0x328] */ r_eax = R32((u32)(r_ebp+0x328u));
    /* 0068c0fa: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c0fc: je 0x68c0d0 */ if (fZ) goto L_0068c0d0;
L_0068c0fe:; BB(0x0068c0fe);
    /* 0068c0fe: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c103: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c104: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c105: ret  */ FN_RET(0x0068c0b4); r_esp += 4; return;
}

void f_0068c10d(void) /* sub_68C10D */
{
    FN_ENTER(0x0068c10d);
    /* 0068c10d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c10e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c10f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c110: mov esi, eax */ r_esi = r_eax;
    /* 0068c112: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c113: call 0x6a9f0c */ r_esp -= 4; W32(r_esp, 0x68c118u); f_006a9f0c();
    /* 0068c118: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c11b: jne 0x68c123 */ if (!fZ) goto L_0068c123;
L_0068c11d:; BB(0x0068c11d);
    /* 0068c11d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c11f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c120: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c121: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c122: ret  */ FN_RET(0x0068c10d); r_esp += 4; return;
L_0068c123:; BB(0x0068c123);
    /* 0068c123: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 0068c126: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68c12bu); f_0068d5ac();
    /* 0068c12b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c12c: mov ebp, eax */ r_ebp = r_eax;
    /* 0068c12e: call 0x6a9fe8 */ r_esp -= 4; W32(r_esp, 0x68c133u); f_006a9fe8();
    /* 0068c133: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c136: je 0x68c14e */ if (fZ) goto L_0068c14e;
L_0068c138:; BB(0x0068c138);
    /* 0068c138: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068c13a: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x68c13fu); f_00689410();
    /* 0068c13f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c141: jne 0x68c14e */ if (!fZ) goto L_0068c14e;
L_0068c143:; BB(0x0068c143);
    /* 0068c143: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068c145: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68c14au); f_0068a3fc();
    /* 0068c14a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c14c: jne 0x68c154 */ if (!fZ) goto L_0068c154;
L_0068c14e:; BB(0x0068c14e);
    /* 0068c14e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c150: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c153: ret  */ FN_RET(0x0068c10d); r_esp += 4; return;
L_0068c154:; BB(0x0068c154);
    /* 0068c154: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c159: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c15a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c15b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c15c: ret  */ FN_RET(0x0068c10d); r_esp += 4; return;
}

void f_0068c160(void) /* sub_68C160 */
{
    FN_ENTER(0x0068c160);
    /* 0068c160: mov eax, dword ptr [ecx + 0x45c] */ r_eax = R32((u32)(r_ecx+0x45cu));
    /* 0068c166: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c168: je 0x68c185 */ if (fZ) goto L_0068c185;
L_0068c16a:; BB(0x0068c16a);
    /* 0068c16a: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x68c16fu); f_0068aa24();
    /* 0068c16f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068c171: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c173: jne 0x68c17a */ if (!fZ) goto L_0068c17a;
L_0068c175:; BB(0x0068c175);
    /* 0068c175: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c178: jmp 0x68c17d */ goto L_0068c17d;
L_0068c17a:; BB(0x0068c17a);
    /* 0068c17a: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0068c17d:; BB(0x0068c17d);
    /* 0068c17d: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 0068c181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c183: jne 0x68c188 */ if (!fZ) goto L_0068c188;
L_0068c185:; BB(0x0068c185);
    /* 0068c185: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c187: ret  */ FN_RET(0x0068c160); r_esp += 4; return;
L_0068c188:; BB(0x0068c188);
    /* 0068c188: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c18d: ret  */ FN_RET(0x0068c160); r_esp += 4; return;
}

void f_0068c190(void) /* sub_68C190 */
{
    FN_ENTER(0x0068c190);
    /* 0068c190: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c191: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c192: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c193: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c196: mov esi, ecx */ r_esi = r_ecx;
    /* 0068c198: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0068c19c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c19d: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c19f: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x68c1a4u); f_0068aa04();
    /* 0068c1a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1a5: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c1a8: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c1aa: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x68c1afu); f_0068aa6c();
    /* 0068c1af: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c1b2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068c1b6: mov byte ptr [esi + 0x354], bl */ W8((u32)(r_esi+0x354u), (u8)r_ebx);
    /* 0068c1bc: mov byte ptr [esi + 0x355], dl */ W8((u32)(r_esi+0x355u), (u8)r_edx);
    /* 0068c1c2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c1c4: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c1ca:; BB(0x0068c1ca);
    /* 0068c1ca: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c1cd: je 0x68c2f3 */ if (fZ) goto L_0068c2f3;
L_0068c1d3:; BB(0x0068c1d3);
    /* 0068c1d3: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c1d6: je 0x68c298 */ if (fZ) goto L_0068c298;
L_0068c1dc:; BB(0x0068c1dc);
    /* 0068c1dc: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c1df: je 0x68c266 */ if (fZ) goto L_0068c266;
L_0068c1e5:; BB(0x0068c1e5);
    /* 0068c1e5: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c1e8: je 0x68c240 */ if (fZ) goto L_0068c240;
L_0068c1ea:; BB(0x0068c1ea);
    /* 0068c1ea: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c1ed: jne 0x68c221 */ if (!fZ) goto L_0068c221;
L_0068c1ef:; BB(0x0068c1ef);
    /* 0068c1ef: mov eax, edx */ r_eax = r_edx;
    /* 0068c1f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c1f4: call 0x69a8c0 */ r_esp -= 4; W32(r_esp, 0x68c1f9u); f_0069a8c0();
    /* 0068c1f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c1fb: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c1fd:; BB(0x0068c1fd);
    /* 0068c1fd: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0068c201: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c203: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c205: mov word ptr [esi + 0x4e6], ax */ W16((u32)(r_esi+0x4e6u), (u16)r_eax);
    /* 0068c20c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c20e: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68c213u); f_00698a08();
L_0068c213:; BB(0x0068c213);
    /* 0068c213: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c218: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c21b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c21c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c21d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c21e: ret 8 */ FN_RET(0x0068c190); r_esp += 12; return;
L_0068c221:; BB(0x0068c221);
    /* 0068c221: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c224: jne 0x68c25b */ if (!fZ) goto L_0068c25b;
L_0068c226:; BB(0x0068c226);
    /* 0068c226: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068c22a: call 0x68c10d */ r_esp -= 4; W32(r_esp, 0x68c22fu); f_0068c10d();
    /* 0068c22f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c231: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c233:; BB(0x0068c233);
    /* 0068c233: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068c237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c238: call 0x6aa040 */ r_esp -= 4; W32(r_esp, 0x68c23du); f_006aa040();
    /* 0068c23d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c23e: jmp 0x68c25b */ goto L_0068c25b;
L_0068c240:; BB(0x0068c240);
    /* 0068c240: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c242: call 0x68aa8c */ r_esp -= 4; W32(r_esp, 0x68c247u); f_0068aa8c();
    /* 0068c247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c249: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c24b:; BB(0x0068c24b);
    /* 0068c24b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0068c24f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c250: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c252: call 0x68aadc */ r_esp -= 4; W32(r_esp, 0x68c257u); f_0068aadc();
    /* 0068c257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c259: jne 0x68c213 */ if (!fZ) goto L_0068c213;
L_0068c25b:; BB(0x0068c25b);
    /* 0068c25b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068c25d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c260: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c261: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c262: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c263: ret 8 */ FN_RET(0x0068c190); r_esp += 12; return;
L_0068c266:; BB(0x0068c266);
    /* 0068c266: mov eax, edx */ r_eax = r_edx;
    /* 0068c268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c269: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c26b: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x68c270u); f_0069a088();
    /* 0068c270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c272: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c274:; BB(0x0068c274);
    /* 0068c274: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0068c278: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c27a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c27c: mov word ptr [esi + 0x464], ax */ W16((u32)(r_esi+0x464u), (u16)r_eax);
    /* 0068c283: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c285: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68c28au); f_00698a08();
    /* 0068c28a: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c28f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c292: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c293: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c294: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c295: ret 8 */ FN_RET(0x0068c190); r_esp += 12; return;
L_0068c298:; BB(0x0068c298);
    /* 0068c298: mov eax, edx */ r_eax = r_edx;
    /* 0068c29a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c29b: mov word ptr [esi + 0x8a4], ax */ W16((u32)(r_esi+0x8a4u), (u16)r_eax);
    /* 0068c2a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c2a4: call 0x6994d4 */ r_esp -= 4; W32(r_esp, 0x68c2a9u); f_006994d4();
    /* 0068c2a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c2ab: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c2ad:; BB(0x0068c2ad);
    /* 0068c2ad: lea ebx, [esi + 0x628] */ r_ebx = (u32)(r_esi+0x628u);
    /* 0068c2b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c2b5: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x68c2bau); f_006a7c8c();
    /* 0068c2ba: fcomp dword ptr [0x93c754] */ fx_compare(ST(0), R_F32((u32)(0x93c754u))); FPOP();
    /* 0068c2c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068c2c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068c2c3: jb 0x68c2d7 */ if (fC) goto L_0068c2d7;
L_0068c2c5:; BB(0x0068c2c5);
    /* 0068c2c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c2c7: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x68c2ccu); f_006a7cac();
    /* 0068c2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2cd: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c2cf: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x68c2d4u); f_0068c038();
    /* 0068c2d4: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
L_0068c2d7:; BB(0x0068c2d7);
    /* 0068c2d7: mov eax, 5 */ r_eax = 0x5u;
    /* 0068c2dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2de: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c2e0: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x68c2e5u); f_00698a08();
    /* 0068c2e5: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c2ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c2ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c2ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c2ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c2f0: ret 8 */ FN_RET(0x0068c190); r_esp += 12; return;
L_0068c2f3:; BB(0x0068c2f3);
    /* 0068c2f3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068c2f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c2f9: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c2ff:; BB(0x0068c2ff);
    /* 0068c2ff: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c301: call 0x68c0b4 */ r_esp -= 4; W32(r_esp, 0x68c306u); f_0068c0b4();
    /* 0068c306: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c308: je 0x68c25b */ if (fZ) goto L_0068c25b;
L_0068c30e:; BB(0x0068c30e);
    /* 0068c30e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068c312: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068c316: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c317: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0068c319: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0068c31d: call dword ptr [ebx + 0x2c] */ { u32 t = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, 0x68c320u); call_ind(t); }
    /* 0068c320: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c325: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c328: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c329: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c32a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c32b: ret 8 */ FN_RET(0x0068c190); r_esp += 12; return;
}

void f_0068c330(void) /* sub_68C330 */
{
    FN_ENTER(0x0068c330);
    /* 0068c330: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0068c337: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c33a: jne 0x68c345 */ if (!fZ) goto L_0068c345;
L_0068c33c:; BB(0x0068c33c);
    /* 0068c33c: fld dword ptr [0x93c744] */ FPUSH(R_F32((u32)(0x93c744u)));
    /* 0068c342: ret 8 */ FN_RET(0x0068c330); r_esp += 12; return;
L_0068c345:; BB(0x0068c345);
    /* 0068c345: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068c349: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068c34d: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x68c352u); f_007732b8();
    /* 0068c352: ret 8 */ FN_RET(0x0068c330); r_esp += 12; return;
}

void f_0068c358(void) /* sub_68C358 */
{
    FN_ENTER(0x0068c358);
    /* 0068c358: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c359: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068c35b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c35c: call 0x6ac778 */ r_esp -= 4; W32(r_esp, 0x68c361u); f_006ac778();
    /* 0068c361: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c362: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068c366: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068c369: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068c36b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c36d: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x68c373u); call_ind(t); }
    /* 0068c373: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c374: ret 4 */ FN_RET(0x0068c358); r_esp += 8; return;
}

void f_0068c378(void) /* sub_68C378 */
{
    FN_ENTER(0x0068c378);
    /* 0068c378: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c37b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068c37f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068c381: mov byte ptr [esp + 8], al */ W8((u32)(r_esp+0x8u), (u8)r_eax);
    /* 0068c385: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 0068c389: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 0068c38d: mov byte ptr [esp + 0xb], al */ W8((u32)(r_esp+0xbu), (u8)r_eax);
    /* 0068c391: mov byte ptr [esp + 4], 0x9b */ W8((u32)(r_esp+0x4u), 0x9bu);
    /* 0068c396: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 0068c39b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068c39d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068c3a1: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0068c3a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068c3a8: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068c3ac: call 0x6a979c */ r_esp -= 4; W32(r_esp, 0x68c3b1u); f_006a979c();
    /* 0068c3b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c3b3: je 0x68c3d5 */ if (fZ) goto L_0068c3d5;
L_0068c3b5:; BB(0x0068c3b5);
    /* 0068c3b5: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068c3ba: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68c3bfu); f_0068d5ac();
    /* 0068c3bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c3c1: je 0x68c3d5 */ if (fZ) goto L_0068c3d5;
L_0068c3c3:; BB(0x0068c3c3);
    /* 0068c3c3: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 0068c3c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3c9: add eax, 0x460 */ {  u32 a = r_eax; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c3ce: mov ecx, eax */ r_ecx = r_eax;
    /* 0068c3d0: call 0x6acfbc */ r_esp -= 4; W32(r_esp, 0x68c3d5u); f_006acfbc();
L_0068c3d5:; BB(0x0068c3d5);
    /* 0068c3d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c3d8: ret  */ FN_RET(0x0068c378); r_esp += 4; return;
}

void f_0068c3dc(void) /* sub_68C3DC */
{
    FN_ENTER(0x0068c3dc);
    /* 0068c3dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3de: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068c3e0: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0068c3e5: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68c3eau); f_0068d5ac();
    /* 0068c3ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c3ec: je 0x68c408 */ if (fZ) goto L_0068c408;
L_0068c3ee:; BB(0x0068c3ee);
    /* 0068c3ee: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0068c3f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3f4: movsx edx, byte ptr [ebx + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x961u));
    /* 0068c3fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c3fc: call 0x6ad29c */ r_esp -= 4; W32(r_esp, 0x68c401u); f_006ad29c();
    /* 0068c401: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c404: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c405: ret 8 */ FN_RET(0x0068c3dc); r_esp += 12; return;
L_0068c408:; BB(0x0068c408);
    /* 0068c408: fld dword ptr [0x93c740] */ FPUSH(R_F32((u32)(0x93c740u)));
    /* 0068c40e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c40f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c410: ret 8 */ FN_RET(0x0068c3dc); r_esp += 12; return;
}

void f_0068c414(void) /* sub_68C414 */
{
    FN_ENTER(0x0068c414);
    /* 0068c414: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c415: mov esi, ecx */ r_esi = r_ecx;
    /* 0068c417: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0068c41e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c421: je 0x68c447 */ if (fZ) goto L_0068c447;
L_0068c423:; BB(0x0068c423);
    /* 0068c423: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x68c428u); f_0067e408();
    /* 0068c428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c42a: je 0x68c430 */ if (fZ) goto L_0068c430;
L_0068c42c:; BB(0x0068c42c);
    /* 0068c42c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c42e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c42f: ret  */ FN_RET(0x0068c414); r_esp += 4; return;
L_0068c430:; BB(0x0068c430);
    /* 0068c430: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0068c436: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068c438: je 0x68c441 */ if (fZ) goto L_0068c441;
L_0068c43a:; BB(0x0068c43a);
    /* 0068c43a: mov eax, 1 */ r_eax = 0x1u;
    /* 0068c43f: jmp 0x68c443 */ goto L_0068c443;
L_0068c441:; BB(0x0068c441);
    /* 0068c441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068c443:; BB(0x0068c443);
    /* 0068c443: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c445: je 0x68c44b */ if (fZ) goto L_0068c44b;
L_0068c447:; BB(0x0068c447);
    /* 0068c447: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c449: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c44a: ret  */ FN_RET(0x0068c414); r_esp += 4; return;
L_0068c44b:; BB(0x0068c44b);
    /* 0068c44b: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c44d: call 0x77a23c */ r_esp -= 4; W32(r_esp, 0x68c452u); f_0077a23c();
    /* 0068c452: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c453: ret  */ FN_RET(0x0068c414); r_esp += 4; return;
}

void f_0068c454(void) /* sub_68C454 */
{
    FN_ENTER(0x0068c454);
    /* 0068c454: movsx eax, byte ptr [ecx + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x961u));
    /* 0068c45b: ret  */ FN_RET(0x0068c454); r_esp += 4; return;
}

void f_0068c45c(void) /* sub_68C45C */
{
    FN_ENTER(0x0068c45c);
    /* 0068c45c: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 0068c461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c463: jl 0x68c46a */ if ((fS!=fO)) goto L_0068c46a;
L_0068c465:; BB(0x0068c465);
    /* 0068c465: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c468: jl 0x68c46d */ if ((fS!=fO)) goto L_0068c46d;
L_0068c46a:; BB(0x0068c46a);
    /* 0068c46a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c46c: ret  */ FN_RET(0x0068c45c); r_esp += 4; return;
L_0068c46d:; BB(0x0068c46d);
    /* 0068c46d: ret  */ FN_RET(0x0068c45c); r_esp += 4; return;
}

void f_0068c470(void) /* sub_68C470 */
{
    FN_ENTER(0x0068c470);
    /* 0068c470: mov eax, dword ptr [ecx + 0x964] */ r_eax = R32((u32)(r_ecx+0x964u));
    /* 0068c476: ret  */ FN_RET(0x0068c470); r_esp += 4; return;
}

void f_0068c478(void) /* sub_68C478 */
{
    FN_ENTER(0x0068c478);
    /* 0068c478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c479: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c47a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068c47c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c47d: call 0x6ac420 */ r_esp -= 4; W32(r_esp, 0x68c482u); f_006ac420();
    /* 0068c482: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0068c486: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c487: call 0x6ac434 */ r_esp -= 4; W32(r_esp, 0x68c48cu); f_006ac434();
    /* 0068c48c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c48f: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c492: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0068c496: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0068c49a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0068c49e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068c4a0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0068c4a3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068c4a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068c4a9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068c4ad: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x68c4b2u); f_00770da4();
    /* 0068c4b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068c4b4: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x68c4b9u); f_00775270();
    /* 0068c4b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068c4bb: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x68c4c0u); f_007776f8();
    /* 0068c4c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c4c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c4c2: ret  */ FN_RET(0x0068c478); r_esp += 4; return;
}

void f_0068c4c4(void) /* sub_68C4C4 */
{
    FN_ENTER(0x0068c4c4);
    /* 0068c4c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c4c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068c4c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c4c7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c4ca: mov edi, ecx */ r_edi = r_ecx;
    /* 0068c4cc: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0068c4d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c4d1: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x68c4d6u); f_006ac458();
    /* 0068c4d6: mov ebx, eax */ r_ebx = r_eax;
    /* 0068c4d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c4db: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0068c4de: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0068c4e4: mov edx, ebp */ r_edx = r_ebp;
    /* 0068c4e6: call 0x68c574 */ r_esp -= 4; W32(r_esp, 0x68c4ebu); f_0068c574();
    /* 0068c4eb: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0068c4f1: movsx ecx, word ptr [ebx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 0068c4f5: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c4f8: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 0068c4fb: call 0x68c574 */ r_esp -= 4; W32(r_esp, 0x68c500u); f_0068c574();
    /* 0068c500: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0068c506: movsx ecx, word ptr [ebx + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 0068c50a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c50d: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 0068c510: call 0x68c574 */ r_esp -= 4; W32(r_esp, 0x68c515u); f_0068c574();
    /* 0068c515: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0068c51b: movsx ecx, word ptr [ebx + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 0068c51f: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c522: lea edx, [ebp + 6] */ r_edx = (u32)(r_ebp+0x6u);
    /* 0068c525: call 0x68c574 */ r_esp -= 4; W32(r_esp, 0x68c52au); f_0068c574();
    /* 0068c52a: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0068c530: movsx ecx, word ptr [ebx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 0068c534: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c537: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 0068c53a: call 0x68c574 */ r_esp -= 4; W32(r_esp, 0x68c53fu); f_0068c574();
    /* 0068c53f: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0068c545: movsx ecx, word ptr [ebx + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xau));
    /* 0068c549: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c54c: lea edx, [ebp + 0xa] */ r_edx = (u32)(r_ebp+0xau);
    /* 0068c54f: call 0x68c574 */ r_esp -= 4; W32(r_esp, 0x68c554u); f_0068c574();
    /* 0068c554: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0068c55a: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 0068c55e: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c561: lea edx, [ebp + 0xc] */ r_edx = (u32)(r_ebp+0xcu);
    /* 0068c564: call 0x68c574 */ r_esp -= 4; W32(r_esp, 0x68c569u); f_0068c574();
    /* 0068c569: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c56c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c56d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c56e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c56f: ret 4 */ FN_RET(0x0068c4c4); r_esp += 8; return;
}

void f_0068c574(void) /* sub_68C574 */
{
    FN_ENTER(0x0068c574);
    /* 0068c574: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c575: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c576: movsx edi, word ptr [edx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0068c579: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c57b: je 0x68c5a3 */ if (fZ) goto L_0068c5a3;
L_0068c57d:; BB(0x0068c57d);
    /* 0068c57d: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 0068c580: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068c582: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0068c585: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c587: jle 0x68c5a6 */ if ((fZ||fS!=fO)) goto L_0068c5a6;
L_0068c589:; BB(0x0068c589);
    /* 0068c589: movsx edi, cx */ r_edi = (u32)(i32)(i16)(u16)r_ecx;
    /* 0068c58c: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c58e: jle 0x68c5a0 */ if ((fZ||fS!=fO)) goto L_0068c5a0;
L_0068c590:; BB(0x0068c590);
    /* 0068c590: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0068c593: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068c596: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0068c598: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c59a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0068c59d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c59e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c59f: ret  */ FN_RET(0x0068c574); r_esp += 4; return;
L_0068c5a0:; BB(0x0068c5a0);
    /* 0068c5a0: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
L_0068c5a3:; BB(0x0068c5a3);
    /* 0068c5a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c5a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c5a5: ret  */ FN_RET(0x0068c574); r_esp += 4; return;
L_0068c5a6:; BB(0x0068c5a6);
    /* 0068c5a6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c5a8: jl 0x68c5b0 */ if ((fS!=fO)) goto L_0068c5b0;
L_0068c5aa:; BB(0x0068c5aa);
    /* 0068c5aa: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 0068c5ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c5ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c5af: ret  */ FN_RET(0x0068c574); r_esp += 4; return;
L_0068c5b0:; BB(0x0068c5b0);
    /* 0068c5b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c5b2: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0068c5b5: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068c5b8: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c5ba: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0068c5bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c5be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c5bf: ret  */ FN_RET(0x0068c574); r_esp += 4; return;
}

void f_0068c5c0(void) /* sub_68C5C0 */
{
    FN_ENTER(0x0068c5c0);
    /* 0068c5c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c5c2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068c5c6: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c5cc: movsx edi, word ptr [edx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0068c5cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c5d1: je 0x68c612 */ if (fZ) goto L_0068c612;
L_0068c5d3:; BB(0x0068c5d3);
    /* 0068c5d3: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 0068c5d6: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068c5d8: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 0068c5db: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c5dd: jle 0x68c7c3 */ if ((fZ||fS!=fO)) goto L_0068c7c3;
L_0068c5e3:; BB(0x0068c5e3);
    /* 0068c5e3: cmp esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c5e9: jle 0x68c609 */ if ((fZ||fS!=fO)) goto L_0068c609;
L_0068c5eb:; BB(0x0068c5eb);
    /* 0068c5eb: mov edi, 0x7fff */ r_edi = 0x7fffu;
    /* 0068c5f0: mov word ptr [eax], di */ W16((u32)(r_eax), (u16)r_edi);
    /* 0068c5f3: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068c5f6: add esi, 0xffff8001 */ {  u32 a = r_esi; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068c5fc: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068c5fe: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0068c601: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c607: jmp 0x68c612 */ goto L_0068c612;
L_0068c609:; BB(0x0068c609);
    /* 0068c609: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0068c60c: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c612:; BB(0x0068c612);
    /* 0068c612: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 0068c615: lea edi, [eax + 0x1c] */ r_edi = (u32)(r_eax+0x1cu);
    /* 0068c618: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c61a: je 0x68c653 */ if (fZ) goto L_0068c653;
L_0068c61c:; BB(0x0068c61c);
    /* 0068c61c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0068c61e: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c620: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c622: jle 0x68c7ed */ if ((fZ||fS!=fO)) goto L_0068c7ed;
L_0068c628:; BB(0x0068c628);
    /* 0068c628: cmp eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c62d: jle 0x68c64b */ if ((fZ||fS!=fO)) goto L_0068c64b;
L_0068c62f:; BB(0x0068c62f);
    /* 0068c62f: mov dword ptr [edi], 0x7fffffff */ W32((u32)(r_edi), 0x7fffffffu);
    /* 0068c635: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 0068c638: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0068c63a: add esi, 0x7fffffff */ {  u32 a = r_esi; u32 b = 0x7fffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068c640: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 0068c643: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c649: jmp 0x68c653 */ goto L_0068c653;
L_0068c64b:; BB(0x0068c64b);
    /* 0068c64b: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0068c64d: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c653:; BB(0x0068c653);
    /* 0068c653: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0068c657: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
    /* 0068c65a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c65c: je 0x68c69d */ if (fZ) goto L_0068c69d;
L_0068c65e:; BB(0x0068c65e);
    /* 0068c65e: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c661: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c663: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c666: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c668: jle 0x68c817 */ if ((fZ||fS!=fO)) goto L_0068c817;
L_0068c66e:; BB(0x0068c66e);
    /* 0068c66e: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c673: jle 0x68c694 */ if ((fZ||fS!=fO)) goto L_0068c694;
L_0068c675:; BB(0x0068c675);
    /* 0068c675: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c67a: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c67d: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 0068c681: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c686: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c688: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 0068c68c: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c692: jmp 0x68c69d */ goto L_0068c69d;
L_0068c694:; BB(0x0068c694);
    /* 0068c694: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c697: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c69d:; BB(0x0068c69d);
    /* 0068c69d: movsx esi, word ptr [edx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0068c6a1: lea edi, [eax + 4] */ r_edi = (u32)(r_eax+0x4u);
    /* 0068c6a4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c6a6: je 0x68c6e7 */ if (fZ) goto L_0068c6e7;
L_0068c6a8:; BB(0x0068c6a8);
    /* 0068c6a8: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c6ab: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c6ad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c6b0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c6b2: jle 0x68c843 */ if ((fZ||fS!=fO)) goto L_0068c843;
L_0068c6b8:; BB(0x0068c6b8);
    /* 0068c6b8: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c6bd: jle 0x68c6de */ if ((fZ||fS!=fO)) goto L_0068c6de;
L_0068c6bf:; BB(0x0068c6bf);
    /* 0068c6bf: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c6c4: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c6c7: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 0068c6cb: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c6d0: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c6d2: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 0068c6d6: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c6dc: jmp 0x68c6e7 */ goto L_0068c6e7;
L_0068c6de:; BB(0x0068c6de);
    /* 0068c6de: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c6e1: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c6e7:; BB(0x0068c6e7);
    /* 0068c6e7: movsx esi, word ptr [edx + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0068c6eb: lea edi, [eax + 6] */ r_edi = (u32)(r_eax+0x6u);
    /* 0068c6ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c6f0: je 0x68c731 */ if (fZ) goto L_0068c731;
L_0068c6f2:; BB(0x0068c6f2);
    /* 0068c6f2: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c6f5: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c6f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c6fa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c6fc: jle 0x68c86f */ if ((fZ||fS!=fO)) goto L_0068c86f;
L_0068c702:; BB(0x0068c702);
    /* 0068c702: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c707: jle 0x68c728 */ if ((fZ||fS!=fO)) goto L_0068c728;
L_0068c709:; BB(0x0068c709);
    /* 0068c709: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c70e: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c711: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 0068c715: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c71a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c71c: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 0068c720: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c726: jmp 0x68c731 */ goto L_0068c731;
L_0068c728:; BB(0x0068c728);
    /* 0068c728: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c72b: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c731:; BB(0x0068c731);
    /* 0068c731: movsx esi, word ptr [edx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0068c735: lea edi, [eax + 8] */ r_edi = (u32)(r_eax+0x8u);
    /* 0068c738: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c73a: je 0x68c77b */ if (fZ) goto L_0068c77b;
L_0068c73c:; BB(0x0068c73c);
    /* 0068c73c: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c73f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c741: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c744: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c746: jle 0x68c89b */ if ((fZ||fS!=fO)) goto L_0068c89b;
L_0068c74c:; BB(0x0068c74c);
    /* 0068c74c: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c751: jle 0x68c772 */ if ((fZ||fS!=fO)) goto L_0068c772;
L_0068c753:; BB(0x0068c753);
    /* 0068c753: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c758: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c75b: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 0068c75f: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c764: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c766: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 0068c76a: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c770: jmp 0x68c77b */ goto L_0068c77b;
L_0068c772:; BB(0x0068c772);
    /* 0068c772: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c775: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c77b:; BB(0x0068c77b);
    /* 0068c77b: movsx esi, word ptr [edx + 0xa] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 0068c77f: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c782: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c784: je 0x68c7be */ if (fZ) goto L_0068c7be;
L_0068c786:; BB(0x0068c786);
    /* 0068c786: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0068c789: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c78b: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0068c78e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c790: jle 0x68c8c7 */ if ((fZ||fS!=fO)) goto L_0068c8c7;
L_0068c796:; BB(0x0068c796);
    /* 0068c796: cmp ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c79c: jle 0x68c7bb */ if ((fZ||fS!=fO)) goto L_0068c7bb;
L_0068c79e:; BB(0x0068c79e);
    /* 0068c79e: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c7a3: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0068c7a6: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 0068c7aa: add ecx, 0xffff8001 */ {  u32 a = r_ecx; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c7b0: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c7b2: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 0068c7b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c7b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c7b8: ret 4 */ FN_RET(0x0068c5c0); r_esp += 8; return;
L_0068c7bb:; BB(0x0068c7bb);
    /* 0068c7bb: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
L_0068c7be:; BB(0x0068c7be);
    /* 0068c7be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c7bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c7c0: ret 4 */ FN_RET(0x0068c5c0); r_esp += 8; return;
L_0068c7c3:; BB(0x0068c7c3);
    /* 0068c7c3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c7c5: jl 0x68c7d5 */ if ((fS!=fO)) goto L_0068c7d5;
L_0068c7c7:; BB(0x0068c7c7);
    /* 0068c7c7: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0068c7ca: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c7d0: jmp 0x68c612 */ goto L_0068c612;
L_0068c7d5:; BB(0x0068c7d5);
    /* 0068c7d5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0068c7d7: mov word ptr [eax], di */ W16((u32)(r_eax), (u16)r_edi);
    /* 0068c7da: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068c7dd: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068c7df: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0068c7e2: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c7e8: jmp 0x68c612 */ goto L_0068c612;
L_0068c7ed:; BB(0x0068c7ed);
    /* 0068c7ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c7ef: jl 0x68c7fe */ if ((fS!=fO)) goto L_0068c7fe;
L_0068c7f1:; BB(0x0068c7f1);
    /* 0068c7f1: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0068c7f3: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c7f9: jmp 0x68c653 */ goto L_0068c653;
L_0068c7fe:; BB(0x0068c7fe);
    /* 0068c7fe: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 0068c804: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 0068c807: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0068c809: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 0068c80c: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c812: jmp 0x68c653 */ goto L_0068c653;
L_0068c817:; BB(0x0068c817);
    /* 0068c817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c819: jl 0x68c829 */ if ((fS!=fO)) goto L_0068c829;
L_0068c81b:; BB(0x0068c81b);
    /* 0068c81b: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c81e: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c824: jmp 0x68c69d */ goto L_0068c69d;
L_0068c829:; BB(0x0068c829);
    /* 0068c829: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c82b: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c82e: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 0068c832: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c834: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 0068c838: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c83e: jmp 0x68c69d */ goto L_0068c69d;
L_0068c843:; BB(0x0068c843);
    /* 0068c843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c845: jl 0x68c855 */ if ((fS!=fO)) goto L_0068c855;
L_0068c847:; BB(0x0068c847);
    /* 0068c847: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c84a: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c850: jmp 0x68c6e7 */ goto L_0068c6e7;
L_0068c855:; BB(0x0068c855);
    /* 0068c855: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c857: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c85a: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 0068c85e: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c860: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 0068c864: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c86a: jmp 0x68c6e7 */ goto L_0068c6e7;
L_0068c86f:; BB(0x0068c86f);
    /* 0068c86f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c871: jl 0x68c881 */ if ((fS!=fO)) goto L_0068c881;
L_0068c873:; BB(0x0068c873);
    /* 0068c873: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c876: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c87c: jmp 0x68c731 */ goto L_0068c731;
L_0068c881:; BB(0x0068c881);
    /* 0068c881: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c883: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c886: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 0068c88a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c88c: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 0068c890: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c896: jmp 0x68c731 */ goto L_0068c731;
L_0068c89b:; BB(0x0068c89b);
    /* 0068c89b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c89d: jl 0x68c8ad */ if ((fS!=fO)) goto L_0068c8ad;
L_0068c89f:; BB(0x0068c89f);
    /* 0068c89f: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c8a2: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c8a8: jmp 0x68c77b */ goto L_0068c77b;
L_0068c8ad:; BB(0x0068c8ad);
    /* 0068c8ad: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c8af: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c8b2: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 0068c8b6: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c8b8: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 0068c8bc: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c8c2: jmp 0x68c77b */ goto L_0068c77b;
L_0068c8c7:; BB(0x0068c8c7);
    /* 0068c8c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c8c9: jl 0x68c8d3 */ if ((fS!=fO)) goto L_0068c8d3;
L_0068c8cb:; BB(0x0068c8cb);
    /* 0068c8cb: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0068c8ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c8cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c8d0: ret 4 */ FN_RET(0x0068c5c0); r_esp += 8; return;
L_0068c8d3:; BB(0x0068c8d3);
    /* 0068c8d3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c8d5: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0068c8d8: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 0068c8dc: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c8de: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 0068c8e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c8e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c8e4: ret 4 */ FN_RET(0x0068c5c0); r_esp += 8; return;
}

void f_0068c7ff(void)
{
    FN_ENTER(0x0068c7ff);
    goto L_0068c7ff;
L_0068c653:; BB(0x0068c653);
    /* 0068c653: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0068c657: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
    /* 0068c65a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c65c: je 0x68c69d */ if (fZ) goto L_0068c69d;
L_0068c65e:; BB(0x0068c65e);
    /* 0068c65e: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c661: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c663: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c666: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c668: jle 0x68c817 */ if ((fZ||fS!=fO)) goto L_0068c817;
L_0068c66e:; BB(0x0068c66e);
    /* 0068c66e: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c673: jle 0x68c694 */ if ((fZ||fS!=fO)) goto L_0068c694;
L_0068c675:; BB(0x0068c675);
    /* 0068c675: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c67a: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c67d: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 0068c681: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c686: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c688: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 0068c68c: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c692: jmp 0x68c69d */ goto L_0068c69d;
L_0068c694:; BB(0x0068c694);
    /* 0068c694: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c697: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c69d:; BB(0x0068c69d);
    /* 0068c69d: movsx esi, word ptr [edx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0068c6a1: lea edi, [eax + 4] */ r_edi = (u32)(r_eax+0x4u);
    /* 0068c6a4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c6a6: je 0x68c6e7 */ if (fZ) goto L_0068c6e7;
L_0068c6a8:; BB(0x0068c6a8);
    /* 0068c6a8: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c6ab: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c6ad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c6b0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c6b2: jle 0x68c843 */ if ((fZ||fS!=fO)) goto L_0068c843;
L_0068c6b8:; BB(0x0068c6b8);
    /* 0068c6b8: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c6bd: jle 0x68c6de */ if ((fZ||fS!=fO)) goto L_0068c6de;
L_0068c6bf:; BB(0x0068c6bf);
    /* 0068c6bf: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c6c4: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c6c7: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 0068c6cb: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c6d0: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c6d2: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 0068c6d6: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c6dc: jmp 0x68c6e7 */ goto L_0068c6e7;
L_0068c6de:; BB(0x0068c6de);
    /* 0068c6de: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c6e1: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c6e7:; BB(0x0068c6e7);
    /* 0068c6e7: movsx esi, word ptr [edx + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0068c6eb: lea edi, [eax + 6] */ r_edi = (u32)(r_eax+0x6u);
    /* 0068c6ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c6f0: je 0x68c731 */ if (fZ) goto L_0068c731;
L_0068c6f2:; BB(0x0068c6f2);
    /* 0068c6f2: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c6f5: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c6f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c6fa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c6fc: jle 0x68c86f */ if ((fZ||fS!=fO)) goto L_0068c86f;
L_0068c702:; BB(0x0068c702);
    /* 0068c702: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c707: jle 0x68c728 */ if ((fZ||fS!=fO)) goto L_0068c728;
L_0068c709:; BB(0x0068c709);
    /* 0068c709: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c70e: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c711: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 0068c715: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c71a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c71c: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 0068c720: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c726: jmp 0x68c731 */ goto L_0068c731;
L_0068c728:; BB(0x0068c728);
    /* 0068c728: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c72b: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c731:; BB(0x0068c731);
    /* 0068c731: movsx esi, word ptr [edx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 0068c735: lea edi, [eax + 8] */ r_edi = (u32)(r_eax+0x8u);
    /* 0068c738: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c73a: je 0x68c77b */ if (fZ) goto L_0068c77b;
L_0068c73c:; BB(0x0068c73c);
    /* 0068c73c: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068c73f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c741: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0068c744: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c746: jle 0x68c89b */ if ((fZ||fS!=fO)) goto L_0068c89b;
L_0068c74c:; BB(0x0068c74c);
    /* 0068c74c: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068c751: jle 0x68c772 */ if ((fZ||fS!=fO)) goto L_0068c772;
L_0068c753:; BB(0x0068c753);
    /* 0068c753: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c758: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c75b: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 0068c75f: add eax, 0xffff8001 */ {  u32 a = r_eax; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c764: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c766: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 0068c76a: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c770: jmp 0x68c77b */ goto L_0068c77b;
L_0068c772:; BB(0x0068c772);
    /* 0068c772: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c775: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
L_0068c77b:; BB(0x0068c77b);
    /* 0068c77b: movsx esi, word ptr [edx + 0xa] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 0068c77f: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c782: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c784: je 0x68c7be */ if (fZ) goto L_0068c7be;
L_0068c786:; BB(0x0068c786);
    /* 0068c786: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0068c789: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c78b: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0068c78e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c790: jle 0x68c8c7 */ if ((fZ||fS!=fO)) goto L_0068c8c7;
L_0068c796:; BB(0x0068c796);
    /* 0068c796: cmp ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c79c: jle 0x68c7bb */ if ((fZ||fS!=fO)) goto L_0068c7bb;
L_0068c79e:; BB(0x0068c79e);
    /* 0068c79e: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 0068c7a3: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0068c7a6: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 0068c7aa: add ecx, 0xffff8001 */ {  u32 a = r_ecx; u32 b = 0xffff8001u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c7b0: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c7b2: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 0068c7b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c7b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c7b8: ret 4 */ FN_RET(0x0068c7ff); r_esp += 8; return;
L_0068c7bb:; BB(0x0068c7bb);
    /* 0068c7bb: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
L_0068c7be:; BB(0x0068c7be);
    /* 0068c7be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c7bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c7c0: ret 4 */ FN_RET(0x0068c7ff); r_esp += 8; return;
L_0068c7ff:; BB(0x0068c7ff);
    /* 0068c7ff: pop es */ UNSUP(0x0068c7ff, "pop es");
    /* 0068c800: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0068c802: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0068c804: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
    /* 0068c807: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0068c809: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 0068c80c: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c812: jmp 0x68c653 */ goto L_0068c653;
L_0068c817:; BB(0x0068c817);
    /* 0068c817: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c819: jl 0x68c829 */ if ((fS!=fO)) goto L_0068c829;
L_0068c81b:; BB(0x0068c81b);
    /* 0068c81b: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c81e: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c824: jmp 0x68c69d */ goto L_0068c69d;
L_0068c829:; BB(0x0068c829);
    /* 0068c829: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c82b: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c82e: movzx edi, word ptr [edx + 2] */ r_edi = (u32)R16((u32)(r_edx+0x2u));
    /* 0068c832: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c834: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 0068c838: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c83e: jmp 0x68c69d */ goto L_0068c69d;
L_0068c843:; BB(0x0068c843);
    /* 0068c843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c845: jl 0x68c855 */ if ((fS!=fO)) goto L_0068c855;
L_0068c847:; BB(0x0068c847);
    /* 0068c847: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c84a: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c850: jmp 0x68c6e7 */ goto L_0068c6e7;
L_0068c855:; BB(0x0068c855);
    /* 0068c855: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c857: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c85a: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 0068c85e: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c860: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 0068c864: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c86a: jmp 0x68c6e7 */ goto L_0068c6e7;
L_0068c86f:; BB(0x0068c86f);
    /* 0068c86f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c871: jl 0x68c881 */ if ((fS!=fO)) goto L_0068c881;
L_0068c873:; BB(0x0068c873);
    /* 0068c873: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c876: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c87c: jmp 0x68c731 */ goto L_0068c731;
L_0068c881:; BB(0x0068c881);
    /* 0068c881: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c883: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c886: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 0068c88a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c88c: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 0068c890: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c896: jmp 0x68c731 */ goto L_0068c731;
L_0068c89b:; BB(0x0068c89b);
    /* 0068c89b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068c89d: jl 0x68c8ad */ if ((fS!=fO)) goto L_0068c8ad;
L_0068c89f:; BB(0x0068c89f);
    /* 0068c89f: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0068c8a2: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c8a8: jmp 0x68c77b */ goto L_0068c77b;
L_0068c8ad:; BB(0x0068c8ad);
    /* 0068c8ad: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c8af: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 0068c8b2: movzx edi, word ptr [edx + 8] */ r_edi = (u32)R16((u32)(r_edx+0x8u));
    /* 0068c8b6: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0068c8b8: mov word ptr [edx + 8], di */ W16((u32)(r_edx+0x8u), (u16)r_edi);
    /* 0068c8bc: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 0068c8c2: jmp 0x68c77b */ goto L_0068c77b;
L_0068c8c7:; BB(0x0068c8c7);
    /* 0068c8c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c8c9: jl 0x68c8d3 */ if ((fS!=fO)) goto L_0068c8d3;
L_0068c8cb:; BB(0x0068c8cb);
    /* 0068c8cb: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0068c8ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c8cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c8d0: ret 4 */ FN_RET(0x0068c7ff); r_esp += 8; return;
L_0068c8d3:; BB(0x0068c8d3);
    /* 0068c8d3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068c8d5: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 0068c8d8: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 0068c8dc: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c8de: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 0068c8e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c8e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c8e4: ret 4 */ FN_RET(0x0068c7ff); r_esp += 8; return;
}

void f_0068c8e8(void) /* sub_68C8E8 */
{
    FN_ENTER(0x0068c8e8);
    /* 0068c8e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c8e9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068c8ec: mov esi, ecx */ r_esi = r_ecx;
    /* 0068c8ee: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 0068c8f4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c8f6: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68c8fbu); f_0069792c();
    /* 0068c8fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c8fd: je 0x68c90b */ if (fZ) goto L_0068c90b;
L_0068c8ff:; BB(0x0068c8ff);
    /* 0068c8ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068c901: mov ecx, eax */ r_ecx = r_eax;
    /* 0068c903: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x68c906u); call_ind(t); }
    /* 0068c906: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c909: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c90a: ret  */ FN_RET(0x0068c8e8); r_esp += 4; return;
L_0068c90b:; BB(0x0068c90b);
    /* 0068c90b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068c90e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c90f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c911: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0068c913: mov ecx, esi */ r_ecx = r_esi;
    /* 0068c915: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x68c91bu); call_ind(t); }
    /* 0068c91b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068c91e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c91f: call 0x5030bc */ r_esp -= 4; W32(r_esp, 0x68c924u); f_005030bc();
    /* 0068c924: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068c925: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068c928: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068c929: ret  */ FN_RET(0x0068c8e8); r_esp += 4; return;
}

void f_0068c92c(void) /* sub_68C92C */
{
    FN_ENTER(0x0068c92c);
    /* 0068c92c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c92d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c92e: mov edi, ecx */ r_edi = r_ecx;
    /* 0068c930: mov ecx, edi */ r_ecx = r_edi;
    /* 0068c932: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68c937u); f_00689b44();
    /* 0068c937: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c939: jne 0x68c946 */ if (!fZ) goto L_0068c946;
L_0068c93b:; BB(0x0068c93b);
    /* 0068c93b: mov ecx, edi */ r_ecx = r_edi;
    /* 0068c93d: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x68c942u); f_00688e9c();
    /* 0068c942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c944: je 0x68c949 */ if (fZ) goto L_0068c949;
L_0068c946:; BB(0x0068c946);
    /* 0068c946: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c948: ret  */ FN_RET(0x0068c92c); r_esp += 4; return;
L_0068c949:; BB(0x0068c949);
    /* 0068c949: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0068c94f: lea ebx, [edi + 0x394] */ r_ebx = (u32)(r_edi+0x394u);
    /* 0068c955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c957: je 0x68c967 */ if (fZ) goto L_0068c967;
L_0068c959:; BB(0x0068c959);
    /* 0068c959: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068c95b: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0068c95f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c960: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c962: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68c967u); f_006a350c();
L_0068c967:; BB(0x0068c967);
    /* 0068c967: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0068c96d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c96f: je 0x68c97f */ if (fZ) goto L_0068c97f;
L_0068c971:; BB(0x0068c971);
    /* 0068c971: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068c973: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0068c977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c978: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c97a: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68c97fu); f_006a350c();
L_0068c97f:; BB(0x0068c97f);
    /* 0068c97f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c980: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c981: ret  */ FN_RET(0x0068c92c); r_esp += 4; return;
}

void f_0068c984(void) /* sub_68C984 */
{
    FN_ENTER(0x0068c984);
    /* 0068c984: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068c985: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c986: mov edi, ecx */ r_edi = r_ecx;
    /* 0068c988: mov ecx, edi */ r_ecx = r_edi;
    /* 0068c98a: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68c98fu); f_00689b44();
    /* 0068c98f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c991: jne 0x68c99e */ if (!fZ) goto L_0068c99e;
L_0068c993:; BB(0x0068c993);
    /* 0068c993: mov ecx, edi */ r_ecx = r_edi;
    /* 0068c995: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x68c99au); f_00688e9c();
    /* 0068c99a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c99c: je 0x68c9a1 */ if (fZ) goto L_0068c9a1;
L_0068c99e:; BB(0x0068c99e);
    /* 0068c99e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c99f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c9a0: ret  */ FN_RET(0x0068c984); r_esp += 4; return;
L_0068c9a1:; BB(0x0068c9a1);
    /* 0068c9a1: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0068c9a7: lea ebx, [edi + 0x394] */ r_ebx = (u32)(r_edi+0x394u);
    /* 0068c9ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c9af: je 0x68c9bf */ if (fZ) goto L_0068c9bf;
L_0068c9b1:; BB(0x0068c9b1);
    /* 0068c9b1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9b3: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0068c9b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c9ba: call 0x6a354c */ r_esp -= 4; W32(r_esp, 0x68c9bfu); f_006a354c();
L_0068c9bf:; BB(0x0068c9bf);
    /* 0068c9bf: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0068c9c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c9c7: je 0x68c9d7 */ if (fZ) goto L_0068c9d7;
L_0068c9c9:; BB(0x0068c9c9);
    /* 0068c9c9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9cb: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0068c9cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c9d2: call 0x6a354c */ r_esp -= 4; W32(r_esp, 0x68c9d7u); f_006a354c();
L_0068c9d7:; BB(0x0068c9d7);
    /* 0068c9d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c9d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068c9d9: ret  */ FN_RET(0x0068c984); r_esp += 4; return;
}

void f_0068c9dc(void) /* sub_68C9DC */
{
    FN_ENTER(0x0068c9dc);
    /* 0068c9dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068c9df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c9e1: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68c9e6u); f_00689b44();
    /* 0068c9e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c9e8: jne 0x68c9f5 */ if (!fZ) goto L_0068c9f5;
L_0068c9ea:; BB(0x0068c9ea);
    /* 0068c9ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068c9ec: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x68c9f1u); f_00688e9c();
    /* 0068c9f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068c9f3: je 0x68c9f7 */ if (fZ) goto L_0068c9f7;
L_0068c9f5:; BB(0x0068c9f5);
    /* 0068c9f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068c9f6: ret  */ FN_RET(0x0068c9dc); r_esp += 4; return;
L_0068c9f7:; BB(0x0068c9f7);
    /* 0068c9f7: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0068c9fc: lea eax, [ebx + 0x394] */ r_eax = (u32)(r_ebx+0x394u);
    /* 0068ca02: movzx ebx, word ptr [ebx + 0x390] */ r_ebx = (u32)R16((u32)(r_ebx+0x390u));
    /* 0068ca09: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ca0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca0c: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68ca11u); f_006a350c();
    /* 0068ca11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ca12: ret  */ FN_RET(0x0068c9dc); r_esp += 4; return;
}

void f_0068ca14(void) /* sub_68CA14 */
{
    FN_ENTER(0x0068ca14);
    /* 0068ca14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068ca17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ca19: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68ca1eu); f_00689b44();
    /* 0068ca1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ca20: jne 0x68ca2d */ if (!fZ) goto L_0068ca2d;
L_0068ca22:; BB(0x0068ca22);
    /* 0068ca22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ca24: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x68ca29u); f_00688e9c();
    /* 0068ca29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ca2b: je 0x68ca2f */ if (fZ) goto L_0068ca2f;
L_0068ca2d:; BB(0x0068ca2d);
    /* 0068ca2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ca2e: ret  */ FN_RET(0x0068ca14); r_esp += 4; return;
L_0068ca2f:; BB(0x0068ca2f);
    /* 0068ca2f: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca34: lea eax, [ebx + 0x394] */ r_eax = (u32)(r_ebx+0x394u);
    /* 0068ca3a: movzx ebx, word ptr [ebx + 0x390] */ r_ebx = (u32)R16((u32)(r_ebx+0x390u));
    /* 0068ca41: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ca43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca44: call 0x6a354c */ r_esp -= 4; W32(r_esp, 0x68ca49u); f_006a354c();
    /* 0068ca49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ca4a: ret  */ FN_RET(0x0068ca14); r_esp += 4; return;
}

void f_0068ca4c(void) /* sub_68CA4C */
{
    FN_ENTER(0x0068ca4c);
    /* 0068ca4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca4e: mov edi, ecx */ r_edi = r_ecx;
    /* 0068ca50: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ca52: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68ca57u); f_00689b44();
    /* 0068ca57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ca59: je 0x68ca60 */ if (fZ) goto L_0068ca60;
L_0068ca5b:; BB(0x0068ca5b);
    /* 0068ca5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ca5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ca5d: ret 8 */ FN_RET(0x0068ca4c); r_esp += 12; return;
L_0068ca60:; BB(0x0068ca60);
    /* 0068ca60: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ca64: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ca66: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068ca6a: call 0x68cb54 */ r_esp -= 4; W32(r_esp, 0x68ca6fu); f_0068cb54();
    /* 0068ca6f: mov ebp, eax */ r_ebp = r_eax;
    /* 0068ca71: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ca73: jne 0x68ca7a */ if (!fZ) goto L_0068ca7a;
L_0068ca75:; BB(0x0068ca75);
    /* 0068ca75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ca76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ca77: ret 8 */ FN_RET(0x0068ca4c); r_esp += 12; return;
L_0068ca7a:; BB(0x0068ca7a);
    /* 0068ca7a: lea ecx, [edi + 0x36c] */ r_ecx = (u32)(r_edi+0x36cu);
    /* 0068ca80: call 0x697428 */ r_esp -= 4; W32(r_esp, 0x68ca85u); f_00697428();
    /* 0068ca85: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ca88: je 0x68cb06 */ if (fZ) goto L_0068cb06;
L_0068ca8a:; BB(0x0068ca8a);
    /* 0068ca8a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ca8d: je 0x68cae4 */ if (fZ) goto L_0068cae4;
L_0068ca8f:; BB(0x0068ca8f);
    /* 0068ca8f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ca92: je 0x68cac2 */ if (fZ) goto L_0068cac2;
L_0068ca94:; BB(0x0068ca94);
    /* 0068ca94: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ca97: jne 0x68caa6 */ if (!fZ) goto L_0068caa6;
L_0068ca99:; BB(0x0068ca99);
    /* 0068ca99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ca9a: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ca9c: call 0x68cb24 */ r_esp -= 4; W32(r_esp, 0x68caa1u); f_0068cb24();
    /* 0068caa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068caa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068caa3: ret 8 */ FN_RET(0x0068ca4c); r_esp += 12; return;
L_0068caa6:; BB(0x0068caa6);
    /* 0068caa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068caa8: jne 0x68cadf */ if (!fZ) goto L_0068cadf;
L_0068caaa:; BB(0x0068caaa);
    /* 0068caaa: mov edx, dword ptr [edi + 0x370] */ r_edx = R32((u32)(r_edi+0x370u));
    /* 0068cab0: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068cab3: je 0x68cadf */ if (fZ) goto L_0068cadf;
L_0068cab5:; BB(0x0068cab5);
    /* 0068cab5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068cab6: mov ecx, edi */ r_ecx = r_edi;
    /* 0068cab8: call 0x68cb24 */ r_esp -= 4; W32(r_esp, 0x68cabdu); f_0068cb24();
    /* 0068cabd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068cabe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cabf: ret 8 */ FN_RET(0x0068ca4c); r_esp += 12; return;
L_0068cac2:; BB(0x0068cac2);
    /* 0068cac2: call 0x807ed0 */ r_esp -= 4; W32(r_esp, 0x68cac7u); f_00807ed0();
    /* 0068cac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cac9: je 0x68cadf */ if (fZ) goto L_0068cadf;
L_0068cacb:; BB(0x0068cacb);
    /* 0068cacb: lea eax, [edi + 0x3b4] */ r_eax = (u32)(r_edi+0x3b4u);
    /* 0068cad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cad2: add edi, 0x394 */ {  u32 a = r_edi; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068cad8: mov ecx, edi */ r_ecx = r_edi;
    /* 0068cada: call 0x6a3658 */ r_esp -= 4; W32(r_esp, 0x68cadfu); f_006a3658();
L_0068cadf:; BB(0x0068cadf);
    /* 0068cadf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068cae0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cae1: ret 8 */ FN_RET(0x0068ca4c); r_esp += 12; return;
L_0068cae4:; BB(0x0068cae4);
    /* 0068cae4: call 0x807ed0 */ r_esp -= 4; W32(r_esp, 0x68cae9u); f_00807ed0();
    /* 0068cae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068caeb: je 0x68cadf */ if (fZ) goto L_0068cadf;
L_0068caed:; BB(0x0068caed);
    /* 0068caed: lea eax, [edi + 0x3b4] */ r_eax = (u32)(r_edi+0x3b4u);
    /* 0068caf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068caf4: add edi, 0x394 */ {  u32 a = r_edi; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068cafa: mov ecx, edi */ r_ecx = r_edi;
    /* 0068cafc: call 0x6a35ac */ r_esp -= 4; W32(r_esp, 0x68cb01u); f_006a35ac();
    /* 0068cb01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068cb02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cb03: ret 8 */ FN_RET(0x0068ca4c); r_esp += 12; return;
L_0068cb06:; BB(0x0068cb06);
    /* 0068cb06: push 0x23a */ { u32 v = 0x23au; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb0b: lea eax, [edi + 0x3a8] */ r_eax = (u32)(r_edi+0x3a8u);
    /* 0068cb11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb12: add edi, 0x394 */ {  u32 a = r_edi; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068cb18: mov ecx, edi */ r_ecx = r_edi;
    /* 0068cb1a: call 0x6a34f8 */ r_esp -= 4; W32(r_esp, 0x68cb1fu); f_006a34f8();
    /* 0068cb1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068cb20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cb21: ret 8 */ FN_RET(0x0068ca4c); r_esp += 12; return;
}

void f_0068cb24(void) /* sub_68CB24 */
{
    FN_ENTER(0x0068cb24);
    /* 0068cb24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0068cb28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cb2b: je 0x68cb43 */ if (fZ) goto L_0068cb43;
L_0068cb2d:; BB(0x0068cb2d);
    /* 0068cb2d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068cb30: jne 0x68cb40 */ if (!fZ) goto L_0068cb40;
L_0068cb32:; BB(0x0068cb32);
    /* 0068cb32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb33: lea eax, [ecx + 0x390] */ r_eax = (u32)(r_ecx+0x390u);
    /* 0068cb39: mov ecx, eax */ r_ecx = r_eax;
    /* 0068cb3b: call 0x6a39fc */ r_esp -= 4; W32(r_esp, 0x68cb40u); f_006a39fc();
L_0068cb40:; BB(0x0068cb40);
    /* 0068cb40: ret 4 */ FN_RET(0x0068cb24); r_esp += 8; return;
L_0068cb43:; BB(0x0068cb43);
    /* 0068cb43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb44: lea eax, [ecx + 0x390] */ r_eax = (u32)(r_ecx+0x390u);
    /* 0068cb4a: mov ecx, eax */ r_ecx = r_eax;
    /* 0068cb4c: call 0x6a39e8 */ r_esp -= 4; W32(r_esp, 0x68cb51u); f_006a39e8();
    /* 0068cb51: ret 4 */ FN_RET(0x0068cb24); r_esp += 8; return;
}

void f_0068cb54(void) /* sub_68CB54 */
{
    FN_ENTER(0x0068cb54);
    /* 0068cb54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb55: mov edi, ecx */ r_edi = r_ecx;
    /* 0068cb57: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068cb5b: mov ecx, edi */ r_ecx = r_edi;
    /* 0068cb5d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x68cb62u); f_007aaa30();
    /* 0068cb62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cb64: je 0x68cb6f */ if (fZ) goto L_0068cb6f;
L_0068cb66:; BB(0x0068cb66);
    /* 0068cb66: mov eax, 1 */ r_eax = 0x1u;
    /* 0068cb6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cb6c: ret 8 */ FN_RET(0x0068cb54); r_esp += 12; return;
L_0068cb6f:; BB(0x0068cb6f);
    /* 0068cb6f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068cb73: mov ecx, edi */ r_ecx = r_edi;
    /* 0068cb75: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x68cb7au); f_007aaa30();
    /* 0068cb7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cb7c: je 0x68cb87 */ if (fZ) goto L_0068cb87;
L_0068cb7e:; BB(0x0068cb7e);
    /* 0068cb7e: mov eax, 2 */ r_eax = 0x2u;
    /* 0068cb83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cb84: ret 8 */ FN_RET(0x0068cb54); r_esp += 12; return;
L_0068cb87:; BB(0x0068cb87);
    /* 0068cb87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cb89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cb8a: ret 8 */ FN_RET(0x0068cb54); r_esp += 12; return;
}

void f_0068cb90(void) /* sub_68CB90 */
{
    FN_ENTER(0x0068cb90);
    /* 0068cb90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cb92: mov edi, ecx */ r_edi = r_ecx;
    /* 0068cb94: mov ecx, edi */ r_ecx = r_edi;
    /* 0068cb96: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68cb9bu); f_00689b44();
    /* 0068cb9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cb9d: je 0x68cba2 */ if (fZ) goto L_0068cba2;
L_0068cb9f:; BB(0x0068cb9f);
    /* 0068cb9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068cba0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cba1: ret  */ FN_RET(0x0068cb90); r_esp += 4; return;
L_0068cba2:; BB(0x0068cba2);
    /* 0068cba2: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0068cba8: lea ebx, [edi + 0x394] */ r_ebx = (u32)(r_edi+0x394u);
    /* 0068cbae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cbb0: je 0x68cbd4 */ if (fZ) goto L_0068cbd4;
L_0068cbb2:; BB(0x0068cbb2);
    /* 0068cbb2: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbb4: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0068cbb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068cbbb: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68cbc0u); f_006a350c();
    /* 0068cbc0: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbc2: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0068cbc8: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0068cbcc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068cbce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbcf: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68cbd4u); f_006a350c();
L_0068cbd4:; BB(0x0068cbd4);
    /* 0068cbd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068cbd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cbd6: ret  */ FN_RET(0x0068cb90); r_esp += 4; return;
}

void f_0068cbd8(void) /* sub_68CBD8 */
{
    FN_ENTER(0x0068cbd8);
    /* 0068cbd8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068cbda: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0068cbdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbde: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x68cbe1u); call_ind(t); }
    /* 0068cbe1: ret  */ FN_RET(0x0068cbd8); r_esp += 4; return;
}

void f_0068cbe4(void) /* sub_68CBE4 */
{
    FN_ENTER(0x0068cbe4);
    /* 0068cbe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbe5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbe6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cbe7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068cbea: mov edi, ecx */ r_edi = r_ecx;
    /* 0068cbec: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0068cbf0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0068cbf2: mov edx, dword ptr [edi + 0x2b4] */ r_edx = R32((u32)(r_edi+0x2b4u));
    /* 0068cbf8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0068cbfb: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0068cbfe: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 0068cc01: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0068cc05: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0068cc08: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0068cc0b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068cc0f: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc11: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 0068cc17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cc19: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x68cc1eu); f_007806dc();
    /* 0068cc1e: mov ebp, eax */ r_ebp = r_eax;
    /* 0068cc20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068cc23: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cc25: je 0x68ccf4 */ if (fZ) goto L_0068ccf4;
L_0068cc2b:; BB(0x0068cc2b);
    /* 0068cc2b: mov dword ptr [edi + 0x36c], 0 */ W32((u32)(r_edi+0x36cu), 0x0u);
    /* 0068cc35: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 0068cc38: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068cc3b: je 0x68cc65 */ if (fZ) goto L_0068cc65;
L_0068cc3d:; BB(0x0068cc3d);
    /* 0068cc3d: mov dword ptr [edi + 0x36c], 2 */ W32((u32)(r_edi+0x36cu), 0x2u);
    /* 0068cc47: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0068cc4a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0068cc4d: mov dword ptr [edi + 0x3a8], edx */ W32((u32)(r_edi+0x3a8u), r_edx);
    /* 0068cc53: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068cc56: mov dword ptr [edi + 0x3ac], edx */ W32((u32)(r_edi+0x3acu), r_edx);
    /* 0068cc5c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0068cc5f: mov dword ptr [edi + 0x3b0], edx */ W32((u32)(r_edi+0x3b0u), r_edx);
L_0068cc65:; BB(0x0068cc65);
    /* 0068cc65: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068cc68: je 0x68cca0 */ if (fZ) goto L_0068cca0;
L_0068cc6a:; BB(0x0068cc6a);
    /* 0068cc6a: mov edx, dword ptr [edi + 0x36c] */ r_edx = R32((u32)(r_edi+0x36cu));
    /* 0068cc70: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068cc73: mov dword ptr [edi + 0x36c], edx */ W32((u32)(r_edi+0x36cu), r_edx);
    /* 0068cc79: call 0x807ed0 */ r_esp -= 4; W32(r_esp, 0x68cc7eu); f_00807ed0();
    /* 0068cc7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cc80: je 0x68cca0 */ if (fZ) goto L_0068cca0;
L_0068cc82:; BB(0x0068cc82);
    /* 0068cc82: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0068cc85: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068cc88: mov dword ptr [edi + 0x3b4], edx */ W32((u32)(r_edi+0x3b4u), r_edx);
    /* 0068cc8e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0068cc91: mov dword ptr [edi + 0x3b8], edx */ W32((u32)(r_edi+0x3b8u), r_edx);
    /* 0068cc97: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0068cc9a: mov dword ptr [edi + 0x3bc], edx */ W32((u32)(r_edi+0x3bcu), r_edx);
L_0068cca0:; BB(0x0068cca0);
    /* 0068cca0: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068cca3: je 0x68ccdb */ if (fZ) goto L_0068ccdb;
L_0068cca5:; BB(0x0068cca5);
    /* 0068cca5: mov edx, dword ptr [edi + 0x36c] */ r_edx = R32((u32)(r_edi+0x36cu));
    /* 0068ccab: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068ccae: mov dword ptr [edi + 0x36c], edx */ W32((u32)(r_edi+0x36cu), r_edx);
    /* 0068ccb4: call 0x807ed0 */ r_esp -= 4; W32(r_esp, 0x68ccb9u); f_00807ed0();
    /* 0068ccb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ccbb: je 0x68ccdb */ if (fZ) goto L_0068ccdb;
L_0068ccbd:; BB(0x0068ccbd);
    /* 0068ccbd: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0068ccc0: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0068ccc3: mov dword ptr [edi + 0x3b4], edx */ W32((u32)(r_edi+0x3b4u), r_edx);
    /* 0068ccc9: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0068cccc: mov dword ptr [edi + 0x3b8], edx */ W32((u32)(r_edi+0x3b8u), r_edx);
    /* 0068ccd2: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0068ccd5: mov dword ptr [edi + 0x3bc], edx */ W32((u32)(r_edi+0x3bcu), r_edx);
L_0068ccdb:; BB(0x0068ccdb);
    /* 0068ccdb: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068ccde: je 0x68ccef */ if (fZ) goto L_0068ccef;
L_0068cce0:; BB(0x0068cce0);
    /* 0068cce0: mov edx, dword ptr [edi + 0x36c] */ r_edx = R32((u32)(r_edi+0x36cu));
    /* 0068cce6: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068cce9: mov dword ptr [edi + 0x36c], edx */ W32((u32)(r_edi+0x36cu), r_edx);
L_0068ccef:; BB(0x0068ccef);
    /* 0068ccef: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068ccf2: jne 0x68ccff */ if (!fZ) goto L_0068ccff;
L_0068ccf4:; BB(0x0068ccf4);
    /* 0068ccf4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ccf6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ccf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ccfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ccfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ccfc: ret 4 */ FN_RET(0x0068cbe4); r_esp += 8; return;
L_0068ccff:; BB(0x0068ccff);
    /* 0068ccff: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0068cd02: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0068cd05: mov dword ptr [edi + 0x3c], ebx */ W32((u32)(r_edi+0x3cu), r_ebx);
    /* 0068cd08: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 0068cd0b: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0068cd0e: mov dword ptr [edi + 0x448], edx */ W32((u32)(r_edi+0x448u), r_edx);
    /* 0068cd14: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0068cd17: mov dword ptr [edi + 0x44c], edx */ W32((u32)(r_edi+0x44cu), r_edx);
    /* 0068cd1d: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0068cd20: mov dword ptr [edi + 0x450], edx */ W32((u32)(r_edi+0x450u), r_edx);
    /* 0068cd26: mov eax, ebp */ r_eax = r_ebp;
    /* 0068cd28: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068cd2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068cd2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068cd2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cd2e: ret 4 */ FN_RET(0x0068cbe4); r_esp += 8; return;
}

void f_0068cd34(void) /* sub_68CD34 */
{
    FN_ENTER(0x0068cd34);
    /* 0068cd34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd37: mov edx, ecx */ r_edx = r_ecx;
    /* 0068cd39: mov ecx, dword ptr [edx + 0x45c] */ r_ecx = R32((u32)(r_edx+0x45cu));
    /* 0068cd3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cd41: je 0x68cd80 */ if (fZ) goto L_0068cd80;
L_0068cd43:; BB(0x0068cd43);
    /* 0068cd43: add ecx, 0x84 */ {  u32 a = r_ecx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068cd49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068cd4b: mov esi, eax */ r_esi = r_eax;
    /* 0068cd4d: mov edi, edx */ r_edi = r_edx;
    /* 0068cd4f: mov ebx, ecx */ r_ebx = r_ecx;
L_0068cd51:; BB(0x0068cd51);
    /* 0068cd51: movzx edx, byte ptr [edi + 0x354] */ r_edx = (u32)R8((u32)(r_edi+0x354u));
    /* 0068cd58: movzx eax, byte ptr [edi + 0x355] */ r_eax = (u32)R8((u32)(r_edi+0x355u));
    /* 0068cd5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068cd62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068cd63: call 0x7a31bc */ r_esp -= 4; W32(r_esp, 0x68cd68u); f_007a31bc();
    /* 0068cd68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cd6a: jne 0x68cd86 */ if (!fZ) goto L_0068cd86;
L_0068cd6c:; BB(0x0068cd6c);
    /* 0068cd6c: add ebx, 0x124 */ {  u32 a = r_ebx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068cd72: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068cd75: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068cd78: jl 0x68cd51 */ if ((fS!=fO)) goto L_0068cd51;
L_0068cd7a:; BB(0x0068cd7a);
    /* 0068cd7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cd7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068cd7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068cd7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cd7f: ret  */ FN_RET(0x0068cd34); r_esp += 4; return;
L_0068cd80:; BB(0x0068cd80);
    /* 0068cd80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cd82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068cd83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068cd84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cd85: ret  */ FN_RET(0x0068cd34); r_esp += 4; return;
L_0068cd86:; BB(0x0068cd86);
    /* 0068cd86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068cd88: mov eax, ecx */ r_eax = r_ecx;
    /* 0068cd8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068cd8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068cd8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cd8d: ret  */ FN_RET(0x0068cd34); r_esp += 4; return;
}

void f_0068cd90(void) /* sub_68CD90 */
{
    FN_ENTER(0x0068cd90);
    /* 0068cd90: mov edx, dword ptr [ecx + 0x45c] */ r_edx = R32((u32)(r_ecx+0x45cu));
    /* 0068cd96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cd98: je 0x68cda3 */ if (fZ) goto L_0068cda3;
L_0068cd9a:; BB(0x0068cd9a);
    /* 0068cd9a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0068cd9d: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cda0: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_0068cda3:; BB(0x0068cda3);
    /* 0068cda3: ret  */ FN_RET(0x0068cd90); r_esp += 4; return;
}

void f_0068cda4(void) /* sub_68CDA4 */
{
    FN_ENTER(0x0068cda4);
    /* 0068cda4: mov edx, dword ptr [ecx + 0x45c] */ r_edx = R32((u32)(r_ecx+0x45cu));
    /* 0068cdaa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cdac: je 0x68cdb7 */ if (fZ) goto L_0068cdb7;
L_0068cdae:; BB(0x0068cdae);
    /* 0068cdae: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0068cdb1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cdb4: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_0068cdb7:; BB(0x0068cdb7);
    /* 0068cdb7: ret  */ FN_RET(0x0068cda4); r_esp += 4; return;
}

void f_0068cdb8(void) /* sub_68CDB8 */
{
    FN_ENTER(0x0068cdb8);
    /* 0068cdb8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068cdbc: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x68cdc1u); f_006893f0();
    /* 0068cdc1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068cdc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cdc7: jne 0x68cdce */ if (!fZ) goto L_0068cdce;
L_0068cdc9:; BB(0x0068cdc9);
    /* 0068cdc9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068cdcc: jmp 0x68cdd1 */ goto L_0068cdd1;
L_0068cdce:; BB(0x0068cdce);
    /* 0068cdce: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0068cdd1:; BB(0x0068cdd1);
    /* 0068cdd1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068cdd5: movzx eax, byte ptr [eax + edx*4 + 1] */ r_eax = (u32)R8((u32)(r_eax+r_edx*4+0x1u));
    /* 0068cdda: ret 0xc */ FN_RET(0x0068cdb8); r_esp += 16; return;
}

void f_0068cde0(void) /* sub_68CDE0 */
{
    FN_ENTER(0x0068cde0);
    /* 0068cde0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068cde4: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x68cde9u); f_006893f0();
    /* 0068cde9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0068cded: mov edx, eax */ r_edx = r_eax;
    /* 0068cdef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cdf1: jne 0x68cdf8 */ if (!fZ) goto L_0068cdf8;
L_0068cdf3:; BB(0x0068cdf3);
    /* 0068cdf3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068cdf6: jmp 0x68cdfb */ goto L_0068cdfb;
L_0068cdf8:; BB(0x0068cdf8);
    /* 0068cdf8: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0068cdfb:; BB(0x0068cdfb);
    /* 0068cdfb: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0068ce00: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0068ce04: mov byte ptr [edx + eax*4], cl */ W8((u32)(r_edx+r_eax*4), (u8)r_ecx);
    /* 0068ce07: movzx ecx, word ptr [esp + 0x14] */ r_ecx = (u32)R16((u32)(r_esp+0x14u));
    /* 0068ce0c: mov byte ptr [edx + eax*4 + 1], cl */ W8((u32)(r_edx+r_eax*4+0x1u), (u8)r_ecx);
    /* 0068ce10: ret 0x14 */ FN_RET(0x0068cde0); r_esp += 24; return;
}

void f_0068ce14(void) /* sub_68CE14 */
{
    FN_ENTER(0x0068ce14);
    /* 0068ce14: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x68ce19u); f_0068aa24();
    /* 0068ce19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ce1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ce1d: jne 0x68ce25 */ if (!fZ) goto L_0068ce25;
L_0068ce1f:; BB(0x0068ce1f);
    /* 0068ce1f: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ce24: ret  */ FN_RET(0x0068ce14); r_esp += 4; return;
L_0068ce25:; BB(0x0068ce25);
    /* 0068ce25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ce27: ret  */ FN_RET(0x0068ce14); r_esp += 4; return;
}

void f_0068ce28(void) /* sub_68CE28 */
{
    FN_ENTER(0x0068ce28);
    /* 0068ce28: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x68ce2du); f_0068aa24();
    /* 0068ce2d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ce2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ce31: jne 0x68ce38 */ if (!fZ) goto L_0068ce38;
L_0068ce33:; BB(0x0068ce33);
    /* 0068ce33: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ce36: jmp 0x68ce3b */ goto L_0068ce3b;
L_0068ce38:; BB(0x0068ce38);
    /* 0068ce38: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0068ce3b:; BB(0x0068ce3b);
    /* 0068ce3b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0068ce3f: movzx eax, word ptr [eax + edx*4 + 2] */ r_eax = (u32)R16((u32)(r_eax+r_edx*4+0x2u));
    /* 0068ce44: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ce46: jne 0x68ce50 */ if (!fZ) goto L_0068ce50;
L_0068ce48:; BB(0x0068ce48);
    /* 0068ce48: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ce4d: ret 4 */ FN_RET(0x0068ce28); r_esp += 8; return;
L_0068ce50:; BB(0x0068ce50);
    /* 0068ce50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ce52: ret 4 */ FN_RET(0x0068ce28); r_esp += 8; return;
}

void f_0068ce58(void) /* sub_68CE58 */
{
    FN_ENTER(0x0068ce58);
    /* 0068ce58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ce59: mov edi, ecx */ r_edi = r_ecx;
    /* 0068ce5b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068ce5f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ce62: je 0x68ce95 */ if (fZ) goto L_0068ce95;
L_0068ce64:; BB(0x0068ce64);
    /* 0068ce64: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ce66: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x68ce6bu); f_0068aa24();
    /* 0068ce6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ce6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ce6f: jne 0x68ce76 */ if (!fZ) goto L_0068ce76;
L_0068ce71:; BB(0x0068ce71);
    /* 0068ce71: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ce74: jmp 0x68ce79 */ goto L_0068ce79;
L_0068ce76:; BB(0x0068ce76);
    /* 0068ce76: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0068ce79:; BB(0x0068ce79);
    /* 0068ce79: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068ce7d: movzx eax, word ptr [eax + edx*4 + 2] */ r_eax = (u32)R16((u32)(r_eax+r_edx*4+0x2u));
    /* 0068ce82: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ce84: jne 0x68ce8f */ if (!fZ) goto L_0068ce8f;
L_0068ce86:; BB(0x0068ce86);
    /* 0068ce86: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ce8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ce8c: ret 4 */ FN_RET(0x0068ce58); r_esp += 8; return;
L_0068ce8f:; BB(0x0068ce8f);
    /* 0068ce8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ce91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ce92: ret 4 */ FN_RET(0x0068ce58); r_esp += 8; return;
L_0068ce95:; BB(0x0068ce95);
    /* 0068ce95: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ce97: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x68ce9cu); f_00689428();
    /* 0068ce9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ce9e: je 0x68cea9 */ if (fZ) goto L_0068cea9;
L_0068cea0:; BB(0x0068cea0);
    /* 0068cea0: mov eax, 1 */ r_eax = 0x1u;
    /* 0068cea5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068cea6: ret 4 */ FN_RET(0x0068ce58); r_esp += 8; return;
L_0068cea9:; BB(0x0068cea9);
    /* 0068cea9: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ceab: call 0x68c160 */ r_esp -= 4; W32(r_esp, 0x68ceb0u); f_0068c160();
    /* 0068ceb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ceb2: je 0x68ce64 */ if (fZ) goto L_0068ce64;
L_0068ceb4:; BB(0x0068ceb4);
    /* 0068ceb4: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ceb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ceba: ret 4 */ FN_RET(0x0068ce58); r_esp += 8; return;
}

void f_0068cec0(void) /* sub_68CEC0 */
{
    FN_ENTER(0x0068cec0);
    /* 0068cec0: mov eax, dword ptr [ecx + 0x45c] */ r_eax = R32((u32)(r_ecx+0x45cu));
    /* 0068cec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cec8: je 0x68cee5 */ if (fZ) goto L_0068cee5;
L_0068ceca:; BB(0x0068ceca);
    /* 0068ceca: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x68cecfu); f_0068aa24();
    /* 0068cecf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ced1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ced3: jne 0x68ceda */ if (!fZ) goto L_0068ceda;
L_0068ced5:; BB(0x0068ced5);
    /* 0068ced5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ced8: jmp 0x68cedd */ goto L_0068cedd;
L_0068ceda:; BB(0x0068ceda);
    /* 0068ceda: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0068cedd:; BB(0x0068cedd);
    /* 0068cedd: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 0068cee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068cee3: jne 0x68cee5 */ if (!fZ) goto L_0068cee5;
L_0068cee5:; BB(0x0068cee5);
    /* 0068cee5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068cee7: ret  */ FN_RET(0x0068cec0); r_esp += 4; return;
}

void f_0068cee8(void) /* sub_68CEE8 */
{
    FN_ENTER(0x0068cee8);
    /* 0068cee8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068cee9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ceea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ceeb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ceec: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ceef: mov esi, ecx */ r_esi = r_ecx;
    /* 0068cef1: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068cef5: mov ecx, esi */ r_ecx = r_esi;
    /* 0068cef7: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0068cefb: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 0068ceff: movzx edx, word ptr [esi + 0x2e] */ r_edx = (u32)R16((u32)(r_esi+0x2eu));
    /* 0068cf03: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 0068cf07: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0068cf0a: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068cf0f: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0068cf12: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0068cf15: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0068cf18: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0068cf1b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0068cf1e: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0068cf21: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0068cf24: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 0068cf27: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0068cf2a: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0068cf2d: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0068cf30: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 0068cf33: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0068cf36: movzx eax, word ptr [esi + 0x32e] */ r_eax = (u32)R16((u32)(r_esi+0x32eu));
    /* 0068cf3d: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 0068cf41: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 0068cf48: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 0068cf4c: mov eax, dword ptr [esi + 0x25c] */ r_eax = R32((u32)(r_esi+0x25cu));
    /* 0068cf52: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 0068cf55: mov eax, dword ptr [esi + 0x260] */ r_eax = R32((u32)(r_esi+0x260u));
    /* 0068cf5b: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0068cf5e: mov eax, dword ptr [esi + 0x264] */ r_eax = R32((u32)(r_esi+0x264u));
    /* 0068cf64: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0068cf67: mov eax, dword ptr [esi + 0x268] */ r_eax = R32((u32)(r_esi+0x268u));
    /* 0068cf6d: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0068cf70: mov eax, dword ptr [esi + 0x26c] */ r_eax = R32((u32)(r_esi+0x26cu));
    /* 0068cf76: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0068cf79: mov eax, dword ptr [esi + 0x270] */ r_eax = R32((u32)(r_esi+0x270u));
    /* 0068cf7f: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 0068cf82: mov eax, dword ptr [esi + 0x274] */ r_eax = R32((u32)(r_esi+0x274u));
    /* 0068cf88: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0068cf8b: mov eax, dword ptr [esi + 0x278] */ r_eax = R32((u32)(r_esi+0x278u));
    /* 0068cf91: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0068cf94: mov eax, dword ptr [esi + 0x27c] */ r_eax = R32((u32)(r_esi+0x27cu));
    /* 0068cf9a: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 0068cf9d: mov eax, dword ptr [esi + 0x280] */ r_eax = R32((u32)(r_esi+0x280u));
    /* 0068cfa3: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 0068cfa6: mov eax, dword ptr [esi + 0x284] */ r_eax = R32((u32)(r_esi+0x284u));
    /* 0068cfac: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 0068cfaf: mov eax, dword ptr [esi + 0x288] */ r_eax = R32((u32)(r_esi+0x288u));
    /* 0068cfb5: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 0068cfb8: mov eax, dword ptr [esi + 0x28c] */ r_eax = R32((u32)(r_esi+0x28cu));
    /* 0068cfbe: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 0068cfc1: mov eax, dword ptr [esi + 0x290] */ r_eax = R32((u32)(r_esi+0x290u));
    /* 0068cfc7: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 0068cfca: mov eax, dword ptr [esi + 0x294] */ r_eax = R32((u32)(r_esi+0x294u));
    /* 0068cfd0: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0068cfd3: mov eax, dword ptr [esi + 0xeb0] */ r_eax = R32((u32)(r_esi+0xeb0u));
    /* 0068cfd9: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 0068cfdc: mov eax, dword ptr [esi + 0xeb4] */ r_eax = R32((u32)(r_esi+0xeb4u));
    /* 0068cfe2: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 0068cfe5: mov eax, dword ptr [esi + 0x8fc] */ r_eax = R32((u32)(r_esi+0x8fcu));
    /* 0068cfeb: mov dword ptr [ebp + 0x70], eax */ W32((u32)(r_ebp+0x70u), r_eax);
    /* 0068cfee: mov eax, dword ptr [esi + 0x900] */ r_eax = R32((u32)(r_esi+0x900u));
    /* 0068cff4: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0068cff7: movzx eax, word ptr [esi + 0x904] */ r_eax = (u32)R16((u32)(r_esi+0x904u));
    /* 0068cffe: mov word ptr [ebp + 0x78], ax */ W16((u32)(r_ebp+0x78u), (u16)r_eax);
    /* 0068d002: movzx eax, word ptr [esi + 0x906] */ r_eax = (u32)R16((u32)(r_esi+0x906u));
    /* 0068d009: mov word ptr [ebp + 0x7a], ax */ W16((u32)(r_ebp+0x7au), (u16)r_eax);
    /* 0068d00d: mov eax, dword ptr [esi + 0x908] */ r_eax = R32((u32)(r_esi+0x908u));
    /* 0068d013: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0068d016: mov eax, dword ptr [esi + 0x90c] */ r_eax = R32((u32)(r_esi+0x90cu));
    /* 0068d01c: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 0068d022: mov eax, dword ptr [esi + 0x910] */ r_eax = R32((u32)(r_esi+0x910u));
    /* 0068d028: mov dword ptr [ebp + 0x84], eax */ W32((u32)(r_ebp+0x84u), r_eax);
    /* 0068d02e: mov eax, dword ptr [esi + 0x914] */ r_eax = R32((u32)(r_esi+0x914u));
    /* 0068d034: mov dword ptr [ebp + 0x88], eax */ W32((u32)(r_ebp+0x88u), r_eax);
    /* 0068d03a: mov eax, dword ptr [esi + 0x918] */ r_eax = R32((u32)(r_esi+0x918u));
    /* 0068d040: mov dword ptr [ebp + 0x8c], eax */ W32((u32)(r_ebp+0x8cu), r_eax);
    /* 0068d046: mov eax, dword ptr [esi + 0x91c] */ r_eax = R32((u32)(r_esi+0x91cu));
    /* 0068d04c: mov dword ptr [ebp + 0x90], eax */ W32((u32)(r_ebp+0x90u), r_eax);
    /* 0068d052: mov eax, dword ptr [esi + 0x92c] */ r_eax = R32((u32)(r_esi+0x92cu));
    /* 0068d058: mov dword ptr [ebp + 0x94], eax */ W32((u32)(r_ebp+0x94u), r_eax);
    /* 0068d05e: movzx eax, word ptr [esi + 0x808] */ r_eax = (u32)R16((u32)(r_esi+0x808u));
    /* 0068d065: mov word ptr [ebp + 0x98], ax */ W16((u32)(r_ebp+0x98u), (u16)r_eax);
    /* 0068d06c: movzx eax, word ptr [esi + 0x80a] */ r_eax = (u32)R16((u32)(r_esi+0x80au));
    /* 0068d073: mov word ptr [ebp + 0x9a], ax */ W16((u32)(r_ebp+0x9au), (u16)r_eax);
    /* 0068d07a: mov eax, dword ptr [esi + 0x80c] */ r_eax = R32((u32)(r_esi+0x80cu));
    /* 0068d080: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 0068d086: mov eax, dword ptr [esi + 0x810] */ r_eax = R32((u32)(r_esi+0x810u));
    /* 0068d08c: mov dword ptr [ebp + 0xa0], eax */ W32((u32)(r_ebp+0xa0u), r_eax);
    /* 0068d092: mov eax, dword ptr [esi + 0x814] */ r_eax = R32((u32)(r_esi+0x814u));
    /* 0068d098: mov dword ptr [ebp + 0xa4], eax */ W32((u32)(r_ebp+0xa4u), r_eax);
    /* 0068d09e: mov eax, dword ptr [esi + 0x818] */ r_eax = R32((u32)(r_esi+0x818u));
    /* 0068d0a4: mov dword ptr [ebp + 0xa8], eax */ W32((u32)(r_ebp+0xa8u), r_eax);
    /* 0068d0aa: mov eax, dword ptr [esi + 0x3ec] */ r_eax = R32((u32)(r_esi+0x3ecu));
    /* 0068d0b0: mov dword ptr [ebp + 0xac], eax */ W32((u32)(r_ebp+0xacu), r_eax);
    /* 0068d0b6: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0068d0bc: mov dword ptr [ebp + 0x4a8], eax */ W32((u32)(r_ebp+0x4a8u), r_eax);
    /* 0068d0c2: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0068d0c8: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0068d0ce: call 0x68d3e0 */ r_esp -= 4; W32(r_esp, 0x68d0d3u); f_0068d3e0();
    /* 0068d0d3: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 0068d0d6: lea edx, [ebp + 0xc8] */ r_edx = (u32)(r_ebp+0xc8u);
    /* 0068d0dc: lea eax, [esi + 0x930] */ r_eax = (u32)(r_esi+0x930u);
    /* 0068d0e2: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0068d0e4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0068d0e7: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 0068d0e9: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0068d0ec: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 0068d0ef: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 0068d0f2: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 0068d0f5: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 0068d0f8: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 0068d0fb: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 0068d0fe: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 0068d101: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 0068d104: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 0068d107: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 0068d10a: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 0068d10d: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 0068d110: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 0068d113: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 0068d116: mov ebx, dword ptr [eax + 0x24] */ r_ebx = R32((u32)(r_eax+0x24u));
    /* 0068d119: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 0068d11c: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 0068d11f: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0068d122: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 0068d125: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 0068d128: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 0068d12b: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 0068d12e: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 0068d131: mov dword ptr [edx + 0x34], ebx */ W32((u32)(r_edx+0x34u), r_ebx);
    /* 0068d134: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 0068d137: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 0068d13a: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 0068d13d: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 0068d140: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 0068d143: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 0068d146: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 0068d149: mov dword ptr [edx + 0x44], ebx */ W32((u32)(r_edx+0x44u), r_ebx);
    /* 0068d14c: mov ebx, dword ptr [eax + 0x48] */ r_ebx = R32((u32)(r_eax+0x48u));
    /* 0068d14f: mov dword ptr [edx + 0x48], ebx */ W32((u32)(r_edx+0x48u), r_ebx);
    /* 0068d152: mov ebx, dword ptr [eax + 0x4c] */ r_ebx = R32((u32)(r_eax+0x4cu));
    /* 0068d155: mov dword ptr [edx + 0x4c], ebx */ W32((u32)(r_edx+0x4cu), r_ebx);
    /* 0068d158: mov ebx, dword ptr [eax + 0x50] */ r_ebx = R32((u32)(r_eax+0x50u));
    /* 0068d15b: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 0068d15e: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 0068d161: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 0068d164: mov ebx, dword ptr [eax + 0x58] */ r_ebx = R32((u32)(r_eax+0x58u));
    /* 0068d167: mov dword ptr [edx + 0x58], ebx */ W32((u32)(r_edx+0x58u), r_ebx);
    /* 0068d16a: mov ebx, dword ptr [eax + 0x5c] */ r_ebx = R32((u32)(r_eax+0x5cu));
    /* 0068d16d: mov dword ptr [edx + 0x5c], ebx */ W32((u32)(r_edx+0x5cu), r_ebx);
    /* 0068d170: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 0068d173: mov dword ptr [edx + 0x60], ebx */ W32((u32)(r_edx+0x60u), r_ebx);
    /* 0068d176: mov ebx, dword ptr [eax + 0x64] */ r_ebx = R32((u32)(r_eax+0x64u));
    /* 0068d179: mov dword ptr [edx + 0x64], ebx */ W32((u32)(r_edx+0x64u), r_ebx);
    /* 0068d17c: mov ebx, dword ptr [eax + 0x68] */ r_ebx = R32((u32)(r_eax+0x68u));
    /* 0068d17f: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 0068d182: mov dword ptr [edx + 0x68], ebx */ W32((u32)(r_edx+0x68u), r_ebx);
    /* 0068d185: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 0068d188: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 0068d18e: lea eax, [ebp + 0x160] */ r_eax = (u32)(r_ebp+0x160u);
    /* 0068d194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d195: call 0x6a5340 */ r_esp -= 4; W32(r_esp, 0x68d19au); f_006a5340();
    /* 0068d19a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0068d19d: mov dword ptr [ebp + 0x15c], eax */ W32((u32)(r_ebp+0x15cu), r_eax);
    /* 0068d1a3: movsx ebx, word ptr [esi + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0068d1aa: movzx edi, word ptr [esi + 0x336] */ r_edi = (u32)R16((u32)(r_esi+0x336u));
    /* 0068d1b1: lea eax, [esi + 0xdf8] */ r_eax = (u32)(r_esi+0xdf8u);
    /* 0068d1b7: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0068d1bb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068d1bf: mov esi, eax */ r_esi = r_eax;
    /* 0068d1c1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0068d1c3:; BB(0x0068d1c3);
    /* 0068d1c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d1c4: mov ecx, esi */ r_ecx = r_esi;
    /* 0068d1c6: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68d1cbu); f_0069792c();
    /* 0068d1cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d1cd: je 0x68d1d8 */ if (fZ) goto L_0068d1d8;
L_0068d1cf:; BB(0x0068d1cf);
    /* 0068d1cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d1d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068d1d3: mov ecx, eax */ r_ecx = r_eax;
    /* 0068d1d5: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x68d1d8u); call_ind(t); }
L_0068d1d8:; BB(0x0068d1d8);
    /* 0068d1d8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068d1db: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068d1de: jl 0x68d1c3 */ if ((fS!=fO)) goto L_0068d1c3;
L_0068d1e0:; BB(0x0068d1e0);
    /* 0068d1e0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0068d1e3: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 0068d1e9: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0068d1ec: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0068d1f0: mov word ptr [ebp + 0x138], ax */ W16((u32)(r_ebp+0x138u), (u16)r_eax);
    /* 0068d1f7: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 0068d1fb: mov word ptr [ebp + 0x13a], dx */ W16((u32)(r_ebp+0x13au), (u16)r_edx);
    /* 0068d202: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0068d206: mov word ptr [ebp + 0x13c], ax */ W16((u32)(r_ebp+0x13cu), (u16)r_eax);
    /* 0068d20d: movzx eax, word ptr [edi + 6] */ r_eax = (u32)R16((u32)(r_edi+0x6u));
    /* 0068d211: mov word ptr [ebp + 0x13e], ax */ W16((u32)(r_ebp+0x13eu), (u16)r_eax);
    /* 0068d218: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0068d21c: mov word ptr [ebp + 0x140], ax */ W16((u32)(r_ebp+0x140u), (u16)r_eax);
    /* 0068d223: movzx eax, word ptr [edi + 0xa] */ r_eax = (u32)R16((u32)(r_edi+0xau));
    /* 0068d227: mov word ptr [ebp + 0x142], ax */ W16((u32)(r_ebp+0x142u), (u16)r_eax);
    /* 0068d22e: movzx eax, word ptr [edi + 0xc] */ r_eax = (u32)R16((u32)(r_edi+0xcu));
    /* 0068d232: mov word ptr [ebp + 0x144], ax */ W16((u32)(r_ebp+0x144u), (u16)r_eax);
    /* 0068d239: movzx eax, word ptr [edi + 0xe] */ r_eax = (u32)R16((u32)(r_edi+0xeu));
    /* 0068d23d: mov word ptr [ebp + 0x146], ax */ W16((u32)(r_ebp+0x146u), (u16)r_eax);
    /* 0068d244: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0068d247: mov dword ptr [ebp + 0x148], eax */ W32((u32)(r_ebp+0x148u), r_eax);
    /* 0068d24d: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0068d250: mov dword ptr [ebp + 0x14c], eax */ W32((u32)(r_ebp+0x14cu), r_eax);
    /* 0068d256: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0068d259: mov dword ptr [ebp + 0x150], eax */ W32((u32)(r_ebp+0x150u), r_eax);
    /* 0068d25f: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0068d262: mov dword ptr [ebp + 0x154], eax */ W32((u32)(r_ebp+0x154u), r_eax);
    /* 0068d268: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0068d26b: mov dword ptr [ebp + 0x158], eax */ W32((u32)(r_ebp+0x158u), r_eax);
    /* 0068d271: movzx eax, word ptr [esi + 0x2c0] */ r_eax = (u32)R16((u32)(r_esi+0x2c0u));
    /* 0068d278: mov word ptr [ebp + 0x24], ax */ W16((u32)(r_ebp+0x24u), (u16)r_eax);
    /* 0068d27c: movzx eax, word ptr [esi + 0x2c2] */ r_eax = (u32)R16((u32)(r_esi+0x2c2u));
    /* 0068d283: mov word ptr [ebp + 0x26], ax */ W16((u32)(r_ebp+0x26u), (u16)r_eax);
    /* 0068d287: movzx eax, byte ptr [esi + 0x384] */ r_eax = (u32)R8((u32)(r_esi+0x384u));
    /* 0068d28e: mov byte ptr [ebp + 0x243], al */ W8((u32)(r_ebp+0x243u), (u8)r_eax);
    /* 0068d294: movzx eax, byte ptr [esi + 0x385] */ r_eax = (u32)R8((u32)(r_esi+0x385u));
    /* 0068d29b: mov byte ptr [ebp + 0x25f], al */ W8((u32)(r_ebp+0x25fu), (u8)r_eax);
    /* 0068d2a1: movzx eax, byte ptr [esi + 0x386] */ r_eax = (u32)R8((u32)(r_esi+0x386u));
    /* 0068d2a8: mov byte ptr [ebp + 0x27b], al */ W8((u32)(r_ebp+0x27bu), (u8)r_eax);
    /* 0068d2ae: movzx eax, byte ptr [esi + 0x387] */ r_eax = (u32)R8((u32)(r_esi+0x387u));
    /* 0068d2b5: mov byte ptr [ebp + 0x297], al */ W8((u32)(r_ebp+0x297u), (u8)r_eax);
    /* 0068d2bb: movzx eax, byte ptr [esi + 0x388] */ r_eax = (u32)R8((u32)(r_esi+0x388u));
    /* 0068d2c2: mov byte ptr [ebp + 0x2b3], al */ W8((u32)(r_ebp+0x2b3u), (u8)r_eax);
    /* 0068d2c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068d2ca: lea eax, [ebp + 0xb4] */ r_eax = (u32)(r_ebp+0xb4u);
    /* 0068d2d0: lea edi, [ebp + 0x162] */ r_edi = (u32)(r_ebp+0x162u);
    /* 0068d2d6: mov ebx, eax */ r_ebx = r_eax;
    /* 0068d2d8: mov ebp, edx */ r_ebp = r_edx;
L_0068d2da:; BB(0x0068d2da);
    /* 0068d2da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d2db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d2dc: movzx eax, byte ptr [ebp + esi + 0x4a8] */ r_eax = (u32)R8((u32)(r_ebp+r_esi+0x4a8u));
    /* 0068d2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068d2e5: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x68d2eau); f_006ad238();
    /* 0068d2ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068d2ed: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068d2f0: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068d2f3: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0068d2f6: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068d2f9: jl 0x68d2da */ if ((fS!=fO)) goto L_0068d2da;
L_0068d2fb:; BB(0x0068d2fb);
    /* 0068d2fb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0068d2ff: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0068d303: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0068d306: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0068d30a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0068d30c:; BB(0x0068d30c);
    /* 0068d30c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068d30d: mov ecx, esi */ r_ecx = r_esi;
    /* 0068d30f: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68d314u); f_0069792c();
    /* 0068d314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068d316: je 0x68d321 */ if (fZ) goto L_0068d321;
L_0068d318:; BB(0x0068d318);
    /* 0068d318: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068d31a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068d31c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068d31e: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x68d321u); call_ind(t); }
L_0068d321:; BB(0x0068d321);
    /* 0068d321: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068d324: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068d327: jl 0x68d30c */ if ((fS!=fO)) goto L_0068d30c;
L_0068d329:; BB(0x0068d329);
    /* 0068d329: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0068d32c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068d32d: mov ecx, esi */ r_ecx = r_esi;
    /* 0068d32f: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x68d334u); f_00770b58();
    /* 0068d334: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068d338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068d339: mov word ptr [esi + 0x336], ax */ W16((u32)(r_esi+0x336u), (u16)r_eax);
    /* 0068d340: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68d345u); f_0061cdb0();
    /* 0068d345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068d346: mov eax, dword ptr [esi + 0x454] */ r_eax = R32((u32)(r_esi+0x454u));
    /* 0068d34c: mov byte ptr [ebp + 0x163], al */ W8((u32)(r_ebp+0x163u), (u8)r_eax);
    /* 0068d352: mov edx, eax */ r_edx = r_eax;
    /* 0068d354: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0068d357: mov byte ptr [ebp + 0x17f], dl */ W8((u32)(r_ebp+0x17fu), (u8)r_edx);
    /* 0068d35d: mov ebx, eax */ r_ebx = r_eax;
    /* 0068d35f: shr ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068d362: mov byte ptr [ebp + 0x19b], bl */ W8((u32)(r_ebp+0x19bu), (u8)r_ebx);
    /* 0068d368: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0068d36b: mov byte ptr [ebp + 0x1b7], al */ W8((u32)(r_ebp+0x1b7u), (u8)r_eax);
    /* 0068d371: movzx eax, byte ptr [esi + 0x344] */ r_eax = (u32)R8((u32)(r_esi+0x344u));
    /* 0068d378: mov byte ptr [ebp + 0x2cf], al */ W8((u32)(r_ebp+0x2cfu), (u8)r_eax);
    /* 0068d37e: movzx eax, byte ptr [esi + 0x345] */ r_eax = (u32)R8((u32)(r_esi+0x345u));
    /* 0068d385: mov byte ptr [ebp + 0x2eb], al */ W8((u32)(r_ebp+0x2ebu), (u8)r_eax);
    /* 0068d38b: movzx eax, byte ptr [esi + 0x346] */ r_eax = (u32)R8((u32)(r_esi+0x346u));
    /* 0068d392: mov byte ptr [ebp + 0x307], al */ W8((u32)(r_ebp+0x307u), (u8)r_eax);
    /* 0068d398: mov edi, dword ptr [esi + 0x41c] */ r_edi = R32((u32)(r_esi+0x41cu));
    /* 0068d39e: mov dword ptr [ebp + 0x4ac], edi */ W32((u32)(r_ebp+0x4acu), r_edi);
    /* 0068d3a4: mov eax, dword ptr [esi + 0x420] */ r_eax = R32((u32)(r_esi+0x420u));
    /* 0068d3aa: mov dword ptr [ebp + 0x4b0], eax */ W32((u32)(r_ebp+0x4b0u), r_eax);
    /* 0068d3b0: mov ecx, dword ptr [esi + 0x424] */ r_ecx = R32((u32)(r_esi+0x424u));
    /* 0068d3b6: mov dword ptr [ebp + 0x4b4], ecx */ W32((u32)(r_ebp+0x4b4u), r_ecx);
    /* 0068d3bc: lea esi, [ebp + 0x168] */ r_esi = (u32)(r_ebp+0x168u);
    /* 0068d3c2: lea ebx, [ebp + 0x4b0] */ r_ebx = (u32)(r_ebp+0x4b0u);
L_0068d3c8:; BB(0x0068d3c8);
    /* 0068d3c8: mov ecx, esi */ r_ecx = r_esi;
    /* 0068d3ca: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68d3cfu); f_0061cdb0();
    /* 0068d3cf: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068d3d2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068d3d4: jg 0x68d3c8 */ if ((!fZ&&fS==fO)) goto L_0068d3c8;
L_0068d3d6:; BB(0x0068d3d6);
    /* 0068d3d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068d3d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068d3da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068d3db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068d3dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068d3dd: ret 4 */ FN_RET(0x0068cee8); r_esp += 8; return;
}

