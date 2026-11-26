#include "protos.h"

void f_0070c004(void)
{
    FN_ENTER(0x0070c004);
    /* 0070c004: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c005: mov edi, ecx */ r_edi = r_ecx;
    /* 0070c007: mov ecx, edi */ r_ecx = r_edi;
    /* 0070c009: call 0x70c970 */ r_esp -= 4; W32(r_esp, 0x70c00eu); f_0070c970();
    /* 0070c00e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c010: je 0x70c014 */ if (fZ) goto L_0070c014;
L_0070c012:; BB(0x0070c012);
    /* 0070c012: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c013: ret  */ FN_RET(0x0070c004); r_esp += 4; return;
L_0070c014:; BB(0x0070c014);
    /* 0070c014: mov ecx, edi */ r_ecx = r_edi;
    /* 0070c016: call 0x70c020 */ r_esp -= 4; W32(r_esp, 0x70c01bu); f_0070c020();
    /* 0070c01b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c01c: ret  */ FN_RET(0x0070c004); r_esp += 4; return;
}

void f_0070c020(void) /* sub_70C020 */
{
    FN_ENTER(0x0070c020);
    /* 0070c020: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c021: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070c024: mov esi, ecx */ r_esi = r_ecx;
    /* 0070c026: movzx edx, word ptr [esi + 0x1a8c4] */ r_edx = (u32)R16((u32)(r_esi+0x1a8c4u));
    /* 0070c02d: mov byte ptr [esp + 2], 4 */ W8((u32)(r_esp+0x2u), 0x4u);
    /* 0070c032: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0070c037: mov eax, 0x70 */ r_eax = 0x70u;
    /* 0070c03c: mov byte ptr [esp + 3], 0 */ W8((u32)(r_esp+0x3u), 0x0u);
    /* 0070c041: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0070c045: movzx eax, word ptr [esi + 0x1a8c6] */ r_eax = (u32)R16((u32)(r_esi+0x1a8c6u));
    /* 0070c04c: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0070c051: movzx eax, word ptr [esi + 0x1a8c8] */ r_eax = (u32)R16((u32)(r_esi+0x1a8c8u));
    /* 0070c058: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0070c05d: movzx eax, word ptr [esi + 0x1a8ca] */ r_eax = (u32)R16((u32)(r_esi+0x1a8cau));
    /* 0070c064: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0070c069: movzx eax, word ptr [esi + 0x1a8cc] */ r_eax = (u32)R16((u32)(r_esi+0x1a8ccu));
    /* 0070c070: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0070c075: movzx eax, word ptr [esi + 0x1a8ce] */ r_eax = (u32)R16((u32)(r_esi+0x1a8ceu));
    /* 0070c07c: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0070c081: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0070c085: lea eax, [esi + 0x1a8e0] */ r_eax = (u32)(r_esi+0x1a8e0u);
    /* 0070c08b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c08d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c08e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c08f: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70c094u); f_00858900();
    /* 0070c094: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 0070c098: lea eax, [esi + 0x1a8f0] */ r_eax = (u32)(r_esi+0x1a8f0u);
    /* 0070c09e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0a2: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70c0a7u); f_00858900();
    /* 0070c0a7: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0070c0ab: lea eax, [esi + 0x1a900] */ r_eax = (u32)(r_esi+0x1a900u);
    /* 0070c0b1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0b5: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70c0bau); f_00858900();
    /* 0070c0ba: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070c0bd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0070c0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0c1: mov ecx, esi */ r_ecx = r_esi;
    /* 0070c0c3: call 0x70b8e8 */ r_esp -= 4; W32(r_esp, 0x70c0c8u); f_0070b8e8();
    /* 0070c0c8: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c0cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c0cc: ret  */ FN_RET(0x0070c020); r_esp += 4; return;
}

void f_0070c0d0(void) /* sub_70C0D0 */
{
    FN_ENTER(0x0070c0d0);
    /* 0070c0d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070c0d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c0d5: call 0x70b62c */ r_esp -= 4; W32(r_esp, 0x70c0dau); f_0070b62c();
    /* 0070c0da: mov ecx, dword ptr [ebx + 0x8108] */ r_ecx = R32((u32)(r_ebx+0x8108u));
    /* 0070c0e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c0e2: mov byte ptr [ebx + 0x10288], al */ W8((u32)(r_ebx+0x10288u), (u8)r_eax);
    /* 0070c0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0e9: mov dword ptr [ebx + 0x1ec], eax */ W32((u32)(r_ebx+0x1ecu), r_eax);
    /* 0070c0ef: mov dword ptr [ebx + 0x80fc], eax */ W32((u32)(r_ebx+0x80fcu), r_eax);
    /* 0070c0f5: mov dword ptr [ebx + 0x8100], eax */ W32((u32)(r_ebx+0x8100u), r_eax);
    /* 0070c0fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c0fd: mov edx, 2 */ r_edx = 0x2u;
    /* 0070c102: mov dword ptr [ebx + 0x18290], edx */ W32((u32)(r_ebx+0x18290u), r_edx);
    /* 0070c108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c109: mov dword ptr [ebx + 0x1e0], ecx */ W32((u32)(r_ebx+0x1e0u), r_ecx);
    /* 0070c10f: movzx ecx, word ptr [ebx + 0x810c] */ r_ecx = (u32)R16((u32)(r_ebx+0x810cu));
    /* 0070c116: mov word ptr [ebx + 0x1de], cx */ W16((u32)(r_ebx+0x1deu), (u16)r_ecx);
    /* 0070c11d: call dword ptr [0x8f83e0] */ { u32 t = R32((u32)(0x8f83e0u)); r_esp -= 4; W32(r_esp, 0x70c123u); call_ind(t); }
    /* 0070c123: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0070c126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c128: jl 0x70c149 */ if ((fS!=fO)) goto L_0070c149;
L_0070c12a:; BB(0x0070c12a);
    /* 0070c12a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c12c: call 0x70b54c */ r_esp -= 4; W32(r_esp, 0x70c131u); f_0070b54c();
    /* 0070c131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c133: je 0x70c147 */ if (fZ) goto L_0070c147;
L_0070c135:; BB(0x0070c135);
    /* 0070c135: mov eax, dword ptr [ebx + 0x1a8bc] */ r_eax = R32((u32)(r_ebx+0x1a8bcu));
    /* 0070c13b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c13d: je 0x70c147 */ if (fZ) goto L_0070c147;
L_0070c13f:; BB(0x0070c13f);
    /* 0070c13f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c141: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c142: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70c144u); call_ind(t); }
    /* 0070c144: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0070c147:; BB(0x0070c147);
    /* 0070c147: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c148: ret  */ FN_RET(0x0070c0d0); r_esp += 4; return;
L_0070c149:; BB(0x0070c149);
    /* 0070c149: or dword ptr [ebx], 3 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c14c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c14d: ret  */ FN_RET(0x0070c0d0); r_esp += 4; return;
}

void f_0070c150(void) /* sub_70C150 */
{
    FN_ENTER(0x0070c150);
    /* 0070c150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070c151: mov ebp, esp */ r_ebp = r_esp;
    /* 0070c153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070c155: push 0x8f0264 */ { u32 v = 0x8f0264u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c15a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070c160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c161: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070c168: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070c16b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070c16e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0070c171: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0070c174: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0070c177: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0070c17a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0070c17d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0070c180: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0070c183: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0070c187: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0070c18a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0070c18d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c18f: call 0x70b2ac */ r_esp -= 4; W32(r_esp, 0x70c194u); f_0070b2ac();
    /* 0070c194: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070c19b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0070c19e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0070c1a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c1a2: call 0x70c998 */ r_esp -= 4; W32(r_esp, 0x70c1a7u); f_0070c998();
    /* 0070c1a7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0070c1aa: mov eax, dword ptr [ecx + 0x18298] */ r_eax = R32((u32)(r_ecx+0x18298u));
    /* 0070c1b0: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0070c1b3: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0070c1b6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070c1b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070c1ba: mov dword ptr [ecx + 0x18294], 1 */ W32((u32)(r_ecx+0x18294u), 0x1u);
    /* 0070c1c4: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0070c1c6: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0070c1c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070c1cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070c1cd: lea esi, [ecx + edx + 0x1829c] */ r_esi = (u32)(r_ecx+r_edx+0x1829cu);
L_0070c1d4:; BB(0x0070c1d4);
    /* 0070c1d4: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0070c1d6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070c1d9: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0070c1db: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070c1de: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070c1e0: jne 0x70c1d4 */ if (!fZ) goto L_0070c1d4;
L_0070c1e2:; BB(0x0070c1e2);
    /* 0070c1e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0070c1e5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0070c1e8: mov dword ptr [ecx + ebx*8 + 0x1831c], eax */ W32((u32)(r_ecx+r_ebx*8+0x1831cu), r_eax);
    /* 0070c1ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c1f0: mov dword ptr [ecx + ebx*8 + 0x18330], 0 */ W32((u32)(r_ecx+r_ebx*8+0x18330u), 0x0u);
    /* 0070c1fb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0070c1fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c1ff: mov dword ptr [ecx + 0x18290], 1 */ W32((u32)(r_ecx+0x18290u), 0x1u);
    /* 0070c209: call 0x70b450 */ r_esp -= 4; W32(r_esp, 0x70c20eu); f_0070b450();
    /* 0070c20e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0070c211: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0070c214: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0070c217: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070c21a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070c21d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070c224: mov esp, ebp */ r_esp = r_ebp;
    /* 0070c226: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c227: ret 0xc */ FN_RET(0x0070c150); r_esp += 16; return;
}

void f_0070c22c(void) /* sub_70C22C */
{
    FN_ENTER(0x0070c22c);
    /* 0070c22c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070c22d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070c22f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070c231: push 0x8f0280 */ { u32 v = 0x8f0280u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c236: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070c23c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c23d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070c244: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070c247: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070c24a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070c24d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070c250: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070c253: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070c256: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0070c25d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c25f: call dword ptr [0x8f83b4] */ { u32 t = R32((u32)(0x8f83b4u)); r_esp -= 4; W32(r_esp, 0x70c265u); call_ind(t); }
    /* 0070c265: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070c268: add eax, 0x10004 */ {  u32 a = r_eax; u32 b = 0x10004u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c26d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c26e: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x70c273u); f_0085afdb();
    /* 0070c273: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070c274: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070c27b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070c27e: call 0x70b304 */ r_esp -= 4; W32(r_esp, 0x70c283u); f_0070b304();
    /* 0070c283: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070c286: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070c28d: mov esp, ebp */ r_esp = r_ebp;
    /* 0070c28f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c290: ret  */ FN_RET(0x0070c22c); r_esp += 4; return;
}

void f_0070c294(void) /* sub_70C294 */
{
    FN_ENTER(0x0070c294);
    /* 0070c294: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c295: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070c29b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070c29d: lea eax, [ebx + 0x1a8e0] */ r_eax = (u32)(r_ebx+0x1a8e0u);
    /* 0070c2a3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2a5: push dword ptr [esp + 0x110] */ { u32 v = R32((u32)(r_esp+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070c2ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2ad: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70c2b2u); f_00858900();
    /* 0070c2b2: lea eax, [ebx + 0x1a8f0] */ r_eax = (u32)(r_ebx+0x1a8f0u);
    /* 0070c2b8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2ba: push dword ptr [esp + 0x120] */ { u32 v = R32((u32)(r_esp+0x120u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070c2c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2c2: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70c2c7u); f_00858900();
    /* 0070c2c7: lea eax, [ebx + 0x1a900] */ r_eax = (u32)(r_ebx+0x1a900u);
    /* 0070c2cd: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2cf: push dword ptr [esp + 0x130] */ { u32 v = R32((u32)(r_esp+0x130u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070c2d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2d7: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70c2dcu); f_00858900();
    /* 0070c2dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070c2df: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 0070c2e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c2e6: je 0x70c315 */ if (fZ) goto L_0070c315;
L_0070c2e8:; BB(0x0070c2e8);
    /* 0070c2e8: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0070c2ec: push 0xaf0700 */ { u32 v = 0xaf0700u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2f1: push 0x96f15c */ { u32 v = 0x96f15cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c2f7: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x70c2fcu); f_00858bf5();
    /* 0070c2fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070c2ff: push 0xacba40 */ { u32 v = 0xacba40u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c304: call dword ptr [0x8f8148] */ { u32 t = R32((u32)(0x8f8148u)); r_esp -= 4; W32(r_esp, 0x70c30au); call_ind(t); }
    /* 0070c30a: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0070c30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c30f: call 0x83c4cc */ r_esp -= 4; W32(r_esp, 0x70c314u); f_0083c4cc();
    /* 0070c314: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0070c315:; BB(0x0070c315);
    /* 0070c315: mov eax, dword ptr [ebx + 0x18290] */ r_eax = R32((u32)(r_ebx+0x18290u));
    /* 0070c31b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c31d: jne 0x70c3f2 */ if (!fZ) goto L_0070c3f2;
L_0070c323:; BB(0x0070c323);
    /* 0070c323: mov eax, dword ptr [ebx + 0x18298] */ r_eax = R32((u32)(r_ebx+0x18298u));
    /* 0070c329: cmp eax, dword ptr [ebx + 0x18294] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x18294u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c32f: jge 0x70c408 */ if ((fS==fO)) goto L_0070c408;
L_0070c335:; BB(0x0070c335);
    /* 0070c335: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0070c338:; BB(0x0070c338);
    /* 0070c338: lea esi, [eax + eax*4] */ r_esi = (u32)(r_eax+r_eax*4);
    /* 0070c33b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070c33d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070c33f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0070c341: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0070c344: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c346: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c348: lea eax, [ebx + eax + 0x1829c] */ r_eax = (u32)(r_ebx+r_eax+0x1829cu);
    /* 0070c34f: movzx edx, word ptr [eax + 0x80] */ r_edx = (u32)R16((u32)(r_eax+0x80u));
    /* 0070c356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c357: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c35a: call 0x70b450 */ r_esp -= 4; W32(r_esp, 0x70c35fu); f_0070b450();
    /* 0070c35f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c361: jne 0x70c3b4 */ if (!fZ) goto L_0070c3b4;
L_0070c363:; BB(0x0070c363);
    /* 0070c363: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 0070c369: mov dword ptr [ebx + esi*8 + 0x18320], eax */ W32((u32)(r_ebx+r_esi*8+0x18320u), r_eax);
    /* 0070c370: mov edx, dword ptr [ebx + 0x1e0] */ r_edx = R32((u32)(r_ebx+0x1e0u));
    /* 0070c376: mov dword ptr [ebx + esi*8 + 0x18324], edx */ W32((u32)(r_ebx+r_esi*8+0x18324u), r_edx);
    /* 0070c37d: mov eax, dword ptr [ebx + 0x1e4] */ r_eax = R32((u32)(r_ebx+0x1e4u));
    /* 0070c383: mov dword ptr [ebx + esi*8 + 0x18328], eax */ W32((u32)(r_ebx+r_esi*8+0x18328u), r_eax);
    /* 0070c38a: mov eax, dword ptr [ebx + 0x1e8] */ r_eax = R32((u32)(r_ebx+0x1e8u));
    /* 0070c390: mov dword ptr [ebx + esi*8 + 0x1832c], eax */ W32((u32)(r_ebx+r_esi*8+0x1832cu), r_eax);
    /* 0070c397: call dword ptr [0x8f83b8] */ { u32 t = R32((u32)(0x8f83b8u)); r_esp -= 4; W32(r_esp, 0x70c39du); call_ind(t); }
    /* 0070c39d: mov dword ptr [ebx + 0x1a89c], eax */ W32((u32)(r_ebx+0x1a89cu), r_eax);
    /* 0070c3a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c3a5: call 0x70b574 */ r_esp -= 4; W32(r_esp, 0x70c3aau); f_0070b574();
    /* 0070c3aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c3ac: je 0x70c3ed */ if (fZ) goto L_0070c3ed;
L_0070c3ae:; BB(0x0070c3ae);
    /* 0070c3ae: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0070c3b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070c3b2: jne 0x70c403 */ if (!fZ) goto L_0070c403;
L_0070c3b4:; BB(0x0070c3b4);
    /* 0070c3b4: mov eax, dword ptr [ebx + 0x18298] */ r_eax = R32((u32)(r_ebx+0x18298u));
    /* 0070c3ba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c3bd: cmp eax, dword ptr [ebx + 0x18294] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x18294u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c3c3: mov dword ptr [ebx + 0x18298], eax */ W32((u32)(r_ebx+0x18298u), r_eax);
    /* 0070c3c9: jl 0x70c338 */ if ((fS!=fO)) goto L_0070c338;
L_0070c3cf:; BB(0x0070c3cf);
    /* 0070c3cf: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c3d2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
L_0070c3d4:; BB(0x0070c3d4);
    /* 0070c3d4: or eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070c3d7: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0070c3d9: mov eax, dword ptr [ebx + 0x1a8bc] */ r_eax = R32((u32)(r_ebx+0x1a8bcu));
    /* 0070c3df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c3e1: je 0x70c3f9 */ if (fZ) goto L_0070c3f9;
L_0070c3e3:; BB(0x0070c3e3);
    /* 0070c3e3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c3e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c3e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70c3e8u); call_ind(t); }
    /* 0070c3e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070c3eb: jmp 0x70c3f9 */ goto L_0070c3f9;
L_0070c3ed:; BB(0x0070c3ed);
    /* 0070c3ed: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c3f0: jmp 0x70c3f9 */ goto L_0070c3f9;
L_0070c3f2:; BB(0x0070c3f2);
    /* 0070c3f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c3f4: call 0x70c8e4 */ r_esp -= 4; W32(r_esp, 0x70c3f9u); f_0070c8e4();
L_0070c3f9:; BB(0x0070c3f9);
    /* 0070c3f9: add esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c3ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c400: ret 0xc */ FN_RET(0x0070c294); r_esp += 16; return;
L_0070c403:; BB(0x0070c403);
    /* 0070c403: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c406: jmp 0x70c3d4 */ goto L_0070c3d4;
L_0070c408:; BB(0x0070c408);
    /* 0070c408: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0070c40a: jmp 0x70c3d4 */ goto L_0070c3d4;
}

void f_0070c40c(void) /* sub_70C40C */
{
    FN_ENTER(0x0070c40c);
    /* 0070c40c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070c40d: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070c413: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0070c415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c417: call 0x70b5c4 */ r_esp -= 4; W32(r_esp, 0x70c41cu); f_0070b5c4();
    /* 0070c41c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c41e: jne 0x70c428 */ if (!fZ) goto L_0070c428;
L_0070c420:; BB(0x0070c420);
    /* 0070c420: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0070c423: jmp 0x70c576 */ goto L_0070c576;
L_0070c428:; BB(0x0070c428);
    /* 0070c428: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c42a: call 0x70b3e4 */ r_esp -= 4; W32(r_esp, 0x70c42fu); f_0070b3e4();
    /* 0070c42f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c431: call 0x70b298 */ r_esp -= 4; W32(r_esp, 0x70c436u); f_0070b298();
    /* 0070c436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c438: jne 0x70c601 */ if (!fZ) goto L_0070c601;
L_0070c43e:; BB(0x0070c43e);
    /* 0070c43e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0070c441: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_0070c445:; BB(0x0070c445);
    /* 0070c445: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c447: call 0x70b268 */ r_esp -= 4; W32(r_esp, 0x70c44cu); f_0070b268();
    /* 0070c44c: mov esi, dword ptr [ebp + 0x80fc] */ r_esi = R32((u32)(r_ebp+0x80fcu));
    /* 0070c452: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 0070c455: mov dword ptr [ebp + 0x80fc], edx */ W32((u32)(r_ebp+0x80fcu), r_edx);
    /* 0070c45b: mov byte ptr [ebp + esi + 0x8104], al */ W8((u32)(r_ebp+r_esi+0x8104u), (u8)r_eax);
    /* 0070c462: mov eax, dword ptr [ebp + 0x80fc] */ r_eax = R32((u32)(r_ebp+0x80fcu));
    /* 0070c468: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c46b: jne 0x70c4ae */ if (!fZ) goto L_0070c4ae;
L_0070c46d:; BB(0x0070c46d);
    /* 0070c46d: lea edx, [ebp + 0x8104] */ r_edx = (u32)(r_ebp+0x8104u);
    /* 0070c473: mov eax, dword ptr [ebp + 0x1ec] */ r_eax = R32((u32)(r_ebp+0x1ecu));
    /* 0070c479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c47b: je 0x70c48b */ if (fZ) goto L_0070c48b;
L_0070c47d:; BB(0x0070c47d);
    /* 0070c47d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c47f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c480: lea ecx, [ebp + 0xf4] */ r_ecx = (u32)(r_ebp+0xf4u);
    /* 0070c486: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x70c48bu); f_00763054();
L_0070c48b:; BB(0x0070c48b);
    /* 0070c48b: movzx edx, word ptr [ebp + 0x8104] */ r_edx = (u32)R16((u32)(r_ebp+0x8104u));
    /* 0070c492: cmp edx, 0x7f00 */ {  u32 a = r_edx; u32 b = 0x7f00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0070c498: ja 0x70c5c8 */ if ((!fC&&!fZ)) goto L_0070c5c8;
L_0070c49e:; BB(0x0070c49e);
    /* 0070c49e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c4a0: je 0x70c5a8 */ if (fZ) goto L_0070c5a8;
L_0070c4a6:; BB(0x0070c4a6);
    /* 0070c4a6: mov dword ptr [ebp + 0x8100], edx */ W32((u32)(r_ebp+0x8100u), r_edx);
    /* 0070c4ac: jmp 0x70c4b4 */ goto L_0070c4b4;
L_0070c4ae:; BB(0x0070c4ae);
    /* 0070c4ae: mov edx, dword ptr [ebp + 0x8100] */ r_edx = R32((u32)(r_ebp+0x8100u));
L_0070c4b4:; BB(0x0070c4b4);
    /* 0070c4b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0070c4b6: jbe 0x70c55d */ if ((fC||fZ)) goto L_0070c55d;
L_0070c4bc:; BB(0x0070c4bc);
    /* 0070c4bc: cmp edx, dword ptr [ebp + 0x80fc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x80fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0070c4c2: ja 0x70c55d */ if ((!fC&&!fZ)) goto L_0070c55d;
L_0070c4c8:; BB(0x0070c4c8);
    /* 0070c4c8: mov eax, dword ptr [ebp + 0x1ec] */ r_eax = R32((u32)(r_ebp+0x1ecu));
    /* 0070c4ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c4d0: je 0x70c4e8 */ if (fZ) goto L_0070c4e8;
L_0070c4d2:; BB(0x0070c4d2);
    /* 0070c4d2: lea eax, [ebp + 0x8108] */ r_eax = (u32)(r_ebp+0x8108u);
    /* 0070c4d8: lea ecx, [ebp + 0xf4] */ r_ecx = (u32)(r_ebp+0xf4u);
    /* 0070c4de: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070c4e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c4e3: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x70c4e8u); f_00763054();
L_0070c4e8:; BB(0x0070c4e8);
    /* 0070c4e8: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 0070c4ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c4ee: mov dword ptr [ebp + 0x8100], eax */ W32((u32)(r_ebp+0x8100u), r_eax);
    /* 0070c4f4: mov dword ptr [ebp + 0x80fc], eax */ W32((u32)(r_ebp+0x80fcu), r_eax);
    /* 0070c4fa: mov esi, 0x96f020 */ r_esi = 0x96f020u;
    /* 0070c4ff: mov ecx, 0xcc */ r_ecx = 0xccu;
    /* 0070c504: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c505: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0070c508: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0070c50a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070c50b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0070c50e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0070c510: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0070c514: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c516: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c518: je 0x70c5f5 */ if (fZ) goto L_0070c5f5;
L_0070c51e:; BB(0x0070c51e);
    /* 0070c51e: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0070c522: movzx esi, byte ptr [ebp + 0x8106] */ r_esi = (u32)R8((u32)(r_ebp+0x8106u));
    /* 0070c529: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0070c52b:; BB(0x0070c52b);
    /* 0070c52b: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c52d: je 0x70c5d1 */ if (fZ) goto L_0070c5d1;
L_0070c533:; BB(0x0070c533);
    /* 0070c533: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c536: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0070c539: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070c53b: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0070c53e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070c540: mov edi, dword ptr [esp + edx + 8] */ r_edi = R32((u32)(r_esp+r_edx+0x8u));
    /* 0070c544: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c546: jne 0x70c52b */ if (!fZ) goto L_0070c52b;
L_0070c548:; BB(0x0070c548);
    /* 0070c548: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c54b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0070c54f:; BB(0x0070c54f);
    /* 0070c54f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c551: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c553: call 0x70cbbc */ r_esp -= 4; W32(r_esp, 0x70c558u); f_0070cbbc();
    /* 0070c558: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0070c55b: jmp 0x70c576 */ goto L_0070c576;
L_0070c55d:; BB(0x0070c55d);
    /* 0070c55d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c55f: call 0x70b298 */ r_esp -= 4; W32(r_esp, 0x70c564u); f_0070b298();
    /* 0070c564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c566: je 0x70c445 */ if (fZ) goto L_0070c445;
L_0070c56c:; BB(0x0070c56c);
    /* 0070c56c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c56f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0070c573: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
L_0070c576:; BB(0x0070c576);
    /* 0070c576: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070c579: jne 0x70c5a0 */ if (!fZ) goto L_0070c5a0;
L_0070c57b:; BB(0x0070c57b);
    /* 0070c57b: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0070c57e: je 0x70c5a0 */ if (fZ) goto L_0070c5a0;
L_0070c580:; BB(0x0070c580);
    /* 0070c580: mov eax, dword ptr [ebp + 0x18290] */ r_eax = R32((u32)(r_ebp+0x18290u));
    /* 0070c586: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c588: jne 0x70c59a */ if (!fZ) goto L_0070c59a;
L_0070c58a:; BB(0x0070c58a);
    /* 0070c58a: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 0070c591: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c593: call 0x70c60c */ r_esp -= 4; W32(r_esp, 0x70c598u); f_0070c60c();
    /* 0070c598: jmp 0x70c5a0 */ goto L_0070c5a0;
L_0070c59a:; BB(0x0070c59a);
    /* 0070c59a: or edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070c59d: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
L_0070c5a0:; BB(0x0070c5a0);
    /* 0070c5a0: add esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c5a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c5a7: ret  */ FN_RET(0x0070c40c); r_esp += 4; return;
L_0070c5a8:; BB(0x0070c5a8);
    /* 0070c5a8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c5ab: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0070c5af:; BB(0x0070c5af);
    /* 0070c5af: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0070c5b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c5b4: mov dword ptr [ebp + 0x8100], eax */ W32((u32)(r_ebp+0x8100u), r_eax);
    /* 0070c5ba: mov dword ptr [ebp + 0x80fc], eax */ W32((u32)(r_ebp+0x80fcu), r_eax);
    /* 0070c5c0: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0070c5c3: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0070c5c6: jmp 0x70c576 */ goto L_0070c576;
L_0070c5c8:; BB(0x0070c5c8);
    /* 0070c5c8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c5cb: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0070c5cf: jmp 0x70c5af */ goto L_0070c5af;
L_0070c5d1:; BB(0x0070c5d1);
    /* 0070c5d1: movzx eax, word ptr [ebp + 0x8104] */ r_eax = (u32)R16((u32)(r_ebp+0x8104u));
    /* 0070c5d8: cmp eax, dword ptr [esp + edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0070c5dc: jbe 0x70c5ea */ if ((fC||fZ)) goto L_0070c5ea;
L_0070c5de:; BB(0x0070c5de);
    /* 0070c5de: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c5e1: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0070c5e5: jmp 0x70c54f */ goto L_0070c54f;
L_0070c5ea:; BB(0x0070c5ea);
    /* 0070c5ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070c5ec: call dword ptr [esp + edx + 0xc] */ { u32 t = R32((u32)(r_esp+r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x70c5f0u); call_ind(t); }
    /* 0070c5f0: jmp 0x70c55d */ goto L_0070c55d;
L_0070c5f5:; BB(0x0070c5f5);
    /* 0070c5f5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0070c5f8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0070c5fc: jmp 0x70c54f */ goto L_0070c54f;
L_0070c601:; BB(0x0070c601);
    /* 0070c601: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0070c604: jmp 0x70c576 */ goto L_0070c576;
}

void f_0070c60c(void) /* sub_70C60C */
{
    FN_ENTER(0x0070c60c);
    /* 0070c60c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c60d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c60e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070c60f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c610: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070c613: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070c615: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c617: call 0x70b62c */ r_esp -= 4; W32(r_esp, 0x70c61cu); f_0070b62c();
    /* 0070c61c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c61e: mov byte ptr [ebx + 0x10288], al */ W8((u32)(r_ebx+0x10288u), (u8)r_eax);
    /* 0070c624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c625: mov dword ptr [ebx + 0x1ec], eax */ W32((u32)(r_ebx+0x1ecu), r_eax);
    /* 0070c62b: mov dword ptr [ebx + 0x80fc], eax */ W32((u32)(r_ebx+0x80fcu), r_eax);
    /* 0070c631: mov dword ptr [ebx + 0x8100], eax */ W32((u32)(r_ebx+0x8100u), r_eax);
    /* 0070c637: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c639: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c63b: call dword ptr [0x8f83e0] */ { u32 t = R32((u32)(0x8f83e0u)); r_esp -= 4; W32(r_esp, 0x70c641u); call_ind(t); }
    /* 0070c641: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0070c644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c646: jl 0x70c8c5 */ if ((fS!=fO)) goto L_0070c8c5;
L_0070c64c:; BB(0x0070c64c);
    /* 0070c64c: mov eax, dword ptr [ebx + 0x18298] */ r_eax = R32((u32)(r_ebx+0x18298u));
    /* 0070c652: mov edx, dword ptr [ebx + 0x18294] */ r_edx = R32((u32)(r_ebx+0x18294u));
    /* 0070c658: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c65b: mov dword ptr [ebx + 0x18298], eax */ W32((u32)(r_ebx+0x18298u), r_eax);
    /* 0070c661: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c663: jl 0x70c6af */ if ((fS!=fO)) goto L_0070c6af;
L_0070c665:; BB(0x0070c665);
    /* 0070c665: lea ecx, [ebx + 0x1829c] */ r_ecx = (u32)(r_ebx+0x1829cu);
    /* 0070c66b: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0070c670: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c672: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0070c674: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c676: jle 0x70c827 */ if ((fZ||fS!=fO)) goto L_0070c827;
L_0070c67c:; BB(0x0070c67c);
    /* 0070c67c: mov ebp, dword ptr [ecx + 0x94] */ r_ebp = R32((u32)(r_ecx+0x94u));
    /* 0070c682: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c684: jl 0x70c68a */ if ((fS!=fO)) goto L_0070c68a;
L_0070c686:; BB(0x0070c686);
    /* 0070c686: mov esi, ebp */ r_esi = r_ebp;
    /* 0070c688: mov eax, ecx */ r_eax = r_ecx;
L_0070c68a:; BB(0x0070c68a);
    /* 0070c68a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0070c68d: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070c693: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c695: jge 0x70c7e4 */ if ((fS==fO)) goto L_0070c7e4;
L_0070c69b:; BB(0x0070c69b);
    /* 0070c69b: mov ebp, dword ptr [ecx + 0x94] */ r_ebp = R32((u32)(r_ecx+0x94u));
    /* 0070c6a1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c6a3: jl 0x70c68a */ if ((fS!=fO)) goto L_0070c68a;
L_0070c6a5:; BB(0x0070c6a5);
    /* 0070c6a5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c6a7: jl 0x70c686 */ if ((fS!=fO)) goto L_0070c686;
L_0070c6a9:; BB(0x0070c6a9);
    /* 0070c6a9: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c6ab: jge 0x70c68a */ if ((fS==fO)) goto L_0070c68a;
L_0070c6ad:; BB(0x0070c6ad);
    /* 0070c6ad: jmp 0x70c686 */ goto L_0070c686;
L_0070c6af:; BB(0x0070c6af);
    /* 0070c6af: jge 0x70c8b9 */ if ((fS==fO)) goto L_0070c8b9;
L_0070c6b5:; BB(0x0070c6b5);
    /* 0070c6b5: lea ebp, [eax + eax*4] */ r_ebp = (u32)(r_eax+r_eax*4);
    /* 0070c6b8: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070c6ba: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070c6bc: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0070c6be: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0070c6c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c6c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c6c6: lea esi, [ebx + eax + 0x1829c] */ r_esi = (u32)(r_ebx+r_eax+0x1829cu);
    /* 0070c6cd: movzx edx, word ptr [esi + 0x80] */ r_edx = (u32)R16((u32)(r_esi+0x80u));
    /* 0070c6d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c6d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c6d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c6d8: call 0x70b450 */ r_esp -= 4; W32(r_esp, 0x70c6ddu); f_0070b450();
    /* 0070c6dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c6df: jne 0x70c739 */ if (!fZ) goto L_0070c739;
L_0070c6e1:; BB(0x0070c6e1);
    /* 0070c6e1: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 0070c6e7: mov dword ptr [ebx + ebp*8 + 0x18320], eax */ W32((u32)(r_ebx+r_ebp*8+0x18320u), r_eax);
    /* 0070c6ee: mov edx, dword ptr [ebx + 0x1e0] */ r_edx = R32((u32)(r_ebx+0x1e0u));
    /* 0070c6f4: mov dword ptr [ebx + ebp*8 + 0x18324], edx */ W32((u32)(r_ebx+r_ebp*8+0x18324u), r_edx);
    /* 0070c6fb: mov esi, dword ptr [ebx + 0x1e4] */ r_esi = R32((u32)(r_ebx+0x1e4u));
    /* 0070c701: mov dword ptr [ebx + ebp*8 + 0x18328], esi */ W32((u32)(r_ebx+r_ebp*8+0x18328u), r_esi);
    /* 0070c708: mov edi, dword ptr [ebx + 0x1e8] */ r_edi = R32((u32)(r_ebx+0x1e8u));
    /* 0070c70e: mov dword ptr [ebx + ebp*8 + 0x1832c], edi */ W32((u32)(r_ebx+r_ebp*8+0x1832cu), r_edi);
    /* 0070c715: call dword ptr [0x8f83b8] */ { u32 t = R32((u32)(0x8f83b8u)); r_esp -= 4; W32(r_esp, 0x70c71bu); call_ind(t); }
    /* 0070c71b: mov dword ptr [ebx + 0x1a89c], eax */ W32((u32)(r_ebx+0x1a89cu), r_eax);
    /* 0070c721: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c723: call 0x70b574 */ r_esp -= 4; W32(r_esp, 0x70c728u); f_0070b574();
    /* 0070c728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c72a: je 0x70c7dc */ if (fZ) goto L_0070c7dc;
L_0070c730:; BB(0x0070c730);
    /* 0070c730: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0070c732: mov eax, edi */ r_eax = r_edi;
    /* 0070c734: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0070c737: jne 0x70c75b */ if (!fZ) goto L_0070c75b;
L_0070c739:; BB(0x0070c739);
    /* 0070c739: mov eax, dword ptr [ebx + 0x18298] */ r_eax = R32((u32)(r_ebx+0x18298u));
    /* 0070c73f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070c742: cmp eax, dword ptr [ebx + 0x18294] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x18294u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c748: mov dword ptr [ebx + 0x18298], eax */ W32((u32)(r_ebx+0x18298u), r_eax);
    /* 0070c74e: jl 0x70c6b5 */ if ((fS!=fO)) goto L_0070c6b5;
L_0070c754:; BB(0x0070c754);
    /* 0070c754: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0070c756: mov eax, edi */ r_eax = r_edi;
    /* 0070c758: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0070c75b:; BB(0x0070c75b);
    /* 0070c75b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c75d: je 0x70c779 */ if (fZ) goto L_0070c779;
L_0070c75f:; BB(0x0070c75f);
    /* 0070c75f: mov eax, dword ptr [ebx + 0x1a8bc] */ r_eax = R32((u32)(r_ebx+0x1a8bcu));
    /* 0070c765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c767: je 0x70c7dc */ if (fZ) goto L_0070c7dc;
L_0070c769:; BB(0x0070c769);
    /* 0070c769: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c76b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c76c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70c76eu); call_ind(t); }
    /* 0070c76e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070c771: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c774: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c775: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c776: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c777: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c778: ret  */ FN_RET(0x0070c60c); r_esp += 4; return;
L_0070c779:; BB(0x0070c779);
    /* 0070c779: lea edx, [ebx + 0x1829c] */ r_edx = (u32)(r_ebx+0x1829cu);
    /* 0070c77f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0070c783: mov edx, dword ptr [ebx + 0x18294] */ r_edx = R32((u32)(r_ebx+0x18294u));
    /* 0070c789: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0070c78e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0070c790: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0070c792: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c794: jle 0x70c88a */ if ((fZ||fS!=fO)) goto L_0070c88a;
L_0070c79a:; BB(0x0070c79a);
    /* 0070c79a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0070c79e: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 0070c7a4: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0070c7a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c7aa: jl 0x70c8ad */ if ((fS!=fO)) goto L_0070c8ad;
L_0070c7b0:; BB(0x0070c7b0);
    /* 0070c7b0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0070c7b3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_0070c7b7:; BB(0x0070c7b7);
    /* 0070c7b7: mov eax, ecx */ r_eax = r_ecx;
    /* 0070c7b9: mov esi, ebx */ r_esi = r_ebx;
L_0070c7bb:; BB(0x0070c7bb);
    /* 0070c7bb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070c7be: add ebx, 0x98 */ {  u32 a = r_ebx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070c7c4: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c7c6: jge 0x70c844 */ if ((fS==fO)) goto L_0070c844;
L_0070c7c8:; BB(0x0070c7c8);
    /* 0070c7c8: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 0070c7ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c7d0: jl 0x70c7bb */ if ((fS!=fO)) goto L_0070c7bb;
L_0070c7d2:; BB(0x0070c7d2);
    /* 0070c7d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0070c7d4: jl 0x70c7b7 */ if ((fS!=fO)) goto L_0070c7b7;
L_0070c7d6:; BB(0x0070c7d6);
    /* 0070c7d6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070c7d8: jge 0x70c7bb */ if ((fS==fO)) goto L_0070c7bb;
L_0070c7da:; BB(0x0070c7da);
    /* 0070c7da: jmp 0x70c7b7 */ goto L_0070c7b7;
L_0070c7dc:; BB(0x0070c7dc);
    /* 0070c7dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c7df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c7e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c7e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c7e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c7e3: ret  */ FN_RET(0x0070c60c); r_esp += 4; return;
L_0070c7e4:; BB(0x0070c7e4);
    /* 0070c7e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c7e6: je 0x70c827 */ if (fZ) goto L_0070c827;
L_0070c7e8:; BB(0x0070c7e8);
    /* 0070c7e8: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0070c7ee: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 0070c7f4: mov ebp, dword ptr [eax + 0x88] */ r_ebp = R32((u32)(r_eax+0x88u));
    /* 0070c7fa: mov dword ptr [ebx + 0x1e0], ebp */ W32((u32)(r_ebx+0x1e0u), r_ebp);
    /* 0070c800: mov esi, dword ptr [eax + 0x8c] */ r_esi = R32((u32)(r_eax+0x8cu));
    /* 0070c806: mov dword ptr [ebx + 0x1e4], esi */ W32((u32)(r_ebx+0x1e4u), r_esi);
    /* 0070c80c: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 0070c812: mov dword ptr [ebx + 0x1e8], eax */ W32((u32)(r_ebx+0x1e8u), r_eax);
    /* 0070c818: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c81a: call 0x70c8e4 */ r_esp -= 4; W32(r_esp, 0x70c81fu); f_0070c8e4();
    /* 0070c81f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c822: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c824: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c825: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c826: ret  */ FN_RET(0x0070c60c); r_esp += 4; return;
L_0070c827:; BB(0x0070c827);
    /* 0070c827: mov eax, dword ptr [ebx + 0x1a8bc] */ r_eax = R32((u32)(r_ebx+0x1a8bcu));
    /* 0070c82d: or dword ptr [ebx], 3 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0070c830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c832: je 0x70c7dc */ if (fZ) goto L_0070c7dc;
L_0070c834:; BB(0x0070c834);
    /* 0070c834: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c836: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c837: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70c839u); call_ind(t); }
    /* 0070c839: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070c83c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c83f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c840: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c841: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c842: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c843: ret  */ FN_RET(0x0070c60c); r_esp += 4; return;
L_0070c844:; BB(0x0070c844);
    /* 0070c844: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0070c847: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c849: je 0x70c88a */ if (fZ) goto L_0070c88a;
L_0070c84b:; BB(0x0070c84b);
    /* 0070c84b: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 0070c851: mov dword ptr [ebx + 0x1dc], eax */ W32((u32)(r_ebx+0x1dcu), r_eax);
    /* 0070c857: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 0070c85d: mov dword ptr [ebx + 0x1e0], edx */ W32((u32)(r_ebx+0x1e0u), r_edx);
    /* 0070c863: mov ebp, dword ptr [esi + 0x8c] */ r_ebp = R32((u32)(r_esi+0x8cu));
    /* 0070c869: mov dword ptr [ebx + 0x1e4], ebp */ W32((u32)(r_ebx+0x1e4u), r_ebp);
    /* 0070c86f: mov esi, dword ptr [esi + 0x90] */ r_esi = R32((u32)(r_esi+0x90u));
    /* 0070c875: mov dword ptr [ebx + 0x1e8], esi */ W32((u32)(r_ebx+0x1e8u), r_esi);
    /* 0070c87b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070c87d: call 0x70c8e4 */ r_esp -= 4; W32(r_esp, 0x70c882u); f_0070c8e4();
    /* 0070c882: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c885: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c886: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c887: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c888: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c889: ret  */ FN_RET(0x0070c60c); r_esp += 4; return;
L_0070c88a:; BB(0x0070c88a);
    /* 0070c88a: mov eax, dword ptr [ebx + 0x1a8bc] */ r_eax = R32((u32)(r_ebx+0x1a8bcu));
    /* 0070c890: or edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0070c893: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 0070c895: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c897: je 0x70c7dc */ if (fZ) goto L_0070c7dc;
L_0070c89d:; BB(0x0070c89d);
    /* 0070c89d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c89f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c8a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70c8a2u); call_ind(t); }
    /* 0070c8a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070c8a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c8a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c8a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c8aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c8ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c8ac: ret  */ FN_RET(0x0070c60c); r_esp += 4; return;
L_0070c8ad:; BB(0x0070c8ad);
    /* 0070c8ad: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0070c8b0: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0070c8b4: jmp 0x70c7bb */ goto L_0070c7bb;
L_0070c8b9:; BB(0x0070c8b9);
    /* 0070c8b9: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0070c8bb: mov eax, edi */ r_eax = r_edi;
    /* 0070c8bd: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0070c8c0: jmp 0x70c75b */ goto L_0070c75b;
L_0070c8c5:; BB(0x0070c8c5);
    /* 0070c8c5: mov eax, dword ptr [ebx + 0x1a8bc] */ r_eax = R32((u32)(r_ebx+0x1a8bcu));
    /* 0070c8cb: or dword ptr [ebx], 3 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0070c8ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c8d0: je 0x70c8da */ if (fZ) goto L_0070c8da;
L_0070c8d2:; BB(0x0070c8d2);
    /* 0070c8d2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c8d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c8d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70c8d7u); call_ind(t); }
    /* 0070c8d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070c8da:; BB(0x0070c8da);
    /* 0070c8da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070c8dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c8de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070c8df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c8e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c8e1: ret  */ FN_RET(0x0070c60c); r_esp += 4; return;
}

void f_0070c8e4(void) /* sub_70C8E4 */
{
    FN_ENTER(0x0070c8e4);
    /* 0070c8e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c8e5: mov edi, ecx */ r_edi = r_ecx;
    /* 0070c8e7: mov ecx, edi */ r_ecx = r_edi;
    /* 0070c8e9: mov dword ptr [edi + 0x18290], 1 */ W32((u32)(r_edi+0x18290u), 0x1u);
    /* 0070c8f3: call 0x70b54c */ r_esp -= 4; W32(r_esp, 0x70c8f8u); f_0070b54c();
    /* 0070c8f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c8fa: je 0x70c90e */ if (fZ) goto L_0070c90e;
L_0070c8fc:; BB(0x0070c8fc);
    /* 0070c8fc: mov eax, dword ptr [edi + 0x1a8bc] */ r_eax = R32((u32)(r_edi+0x1a8bcu));
    /* 0070c902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c904: je 0x70c90e */ if (fZ) goto L_0070c90e;
L_0070c906:; BB(0x0070c906);
    /* 0070c906: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c909: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70c90bu); call_ind(t); }
    /* 0070c90b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0070c90e:; BB(0x0070c90e);
    /* 0070c90e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070c90f: ret  */ FN_RET(0x0070c8e4); r_esp += 4; return;
}

void f_0070c910(void)
{
    FN_ENTER(0x0070c910);
    /* 0070c910: mov edx, dword ptr [ecx + 0x1a8c0] */ r_edx = R32((u32)(r_ecx+0x1a8c0u));
    /* 0070c916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c918: je 0x70c928 */ if (fZ) goto L_0070c928;
L_0070c91a:; BB(0x0070c91a);
    /* 0070c91a: movzx eax, byte ptr [ecx + 0x8107] */ r_eax = (u32)R8((u32)(r_ecx+0x8107u));
    /* 0070c921: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070c922: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c923: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x70c925u); call_ind(t); }
    /* 0070c925: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0070c928:; BB(0x0070c928);
    /* 0070c928: ret  */ FN_RET(0x0070c910); r_esp += 4; return;
}

void f_0070c92c(void)
{
    FN_ENTER(0x0070c92c);
    /* 0070c92c: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c931: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x70c936u); f_0085afdb();
    /* 0070c936: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070c937: ret  */ FN_RET(0x0070c92c); r_esp += 4; return;
}

void f_0070c938(void) /* sub_70C938 */
{
    FN_ENTER(0x0070c938);
    /* 0070c938: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c939: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070c93b: call dword ptr [0x8f83b8] */ { u32 t = R32((u32)(0x8f83b8u)); r_esp -= 4; W32(r_esp, 0x70c941u); call_ind(t); }
    /* 0070c941: sub eax, dword ptr [ebx + 0x1a89c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1a89cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0070c947: mov edx, 0x7fffffff */ r_edx = 0x7fffffffu;
    /* 0070c94c: cmp eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0070c951: jbe 0x70c955 */ if ((fC||fZ)) goto L_0070c955;
L_0070c953:; BB(0x0070c953);
    /* 0070c953: mov eax, edx */ r_eax = r_edx;
L_0070c955:; BB(0x0070c955);
    /* 0070c955: mov edx, dword ptr [ebx + 0x18298] */ r_edx = R32((u32)(r_ebx+0x18298u));
    /* 0070c95b: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0070c95e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070c960: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070c962: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070c964: mov dword ptr [ebx + ecx*8 + 0x18330], eax */ W32((u32)(r_ebx+r_ecx*8+0x18330u), r_eax);
    /* 0070c96b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070c96c: ret  */ FN_RET(0x0070c938); r_esp += 4; return;
}

void f_0070c970(void) /* sub_70C970 */
{
    FN_ENTER(0x0070c970);
    /* 0070c970: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c971: mov esi, ecx */ r_esi = r_ecx;
    /* 0070c973: mov eax, dword ptr [esi + 0x18290] */ r_eax = R32((u32)(r_esi+0x18290u));
    /* 0070c979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070c97b: jne 0x70c992 */ if (!fZ) goto L_0070c992;
L_0070c97d:; BB(0x0070c97d);
    /* 0070c97d: mov ecx, esi */ r_ecx = r_esi;
    /* 0070c97f: call 0x70c938 */ r_esp -= 4; W32(r_esp, 0x70c984u); f_0070c938();
    /* 0070c984: mov ecx, esi */ r_ecx = r_esi;
    /* 0070c986: call 0x70c60c */ r_esp -= 4; W32(r_esp, 0x70c98bu); f_0070c60c();
    /* 0070c98b: mov eax, 1 */ r_eax = 0x1u;
    /* 0070c990: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c991: ret  */ FN_RET(0x0070c970); r_esp += 4; return;
L_0070c992:; BB(0x0070c992);
    /* 0070c992: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070c994: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070c995: ret  */ FN_RET(0x0070c970); r_esp += 4; return;
}

void f_0070c998(void) /* sub_70C998 */
{
    FN_ENTER(0x0070c998);
    /* 0070c998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c999: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070c99a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070c99c: lea edi, [ebx + 0x10004] */ r_edi = (u32)(r_ebx+0x10004u);
    /* 0070c9a2: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c9a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070c9a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c9ab: mov dword ptr [ebx + 0x80fc], eax */ W32((u32)(r_ebx+0x80fcu), r_eax);
    /* 0070c9b1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c9b2: mov dword ptr [ebx + 0x8100], eax */ W32((u32)(r_ebx+0x8100u), r_eax);
    /* 0070c9b8: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x70c9bdu); f_0086b688();
    /* 0070c9bd: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070c9c2: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070c9c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c9c7: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x70c9ccu); f_00858900();
    /* 0070c9cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070c9cd: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x70c9d2u); f_0085afdb();
    /* 0070c9d2: lea edx, [ebx + 0x10204] */ r_edx = (u32)(r_ebx+0x10204u);
    /* 0070c9d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070c9da: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070c9dc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0070c9df: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0070c9e2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0070c9e5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0070c9e8: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0070c9eb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0070c9ee: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0070c9f1: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0070c9f4: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0070c9f7: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0070c9fa: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0070c9fd: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0070ca00: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0070ca03: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0070ca06: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0070ca09: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0070ca0c: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0070ca0f: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0070ca12: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0070ca15: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0070ca18: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0070ca1b: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0070ca1e: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0070ca21: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0070ca24: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0070ca27: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 0070ca2a: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 0070ca2d: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 0070ca30: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 0070ca33: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0070ca36: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0070ca39: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ca3e: lea edx, [ebx + 0x1028c] */ r_edx = (u32)(r_ebx+0x1028cu);
    /* 0070ca44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070ca46: mov byte ptr [ebx + 0x10289], al */ W8((u32)(r_ebx+0x10289u), (u8)r_eax);
    /* 0070ca4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070ca4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ca4e: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x70ca53u); f_0086b5cc();
    /* 0070ca53: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070ca56: lea edi, [ebx + 0x1a8e0] */ r_edi = (u32)(r_ebx+0x1a8e0u);
    /* 0070ca5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070ca5e: mov dword ptr [ebx + 0x1828c], eax */ W32((u32)(r_ebx+0x1828cu), r_eax);
    /* 0070ca64: mov dword ptr [ebx + 0x1a8a0], eax */ W32((u32)(r_ebx+0x1a8a0u), r_eax);
    /* 0070ca6a: mov dword ptr [ebx + 0x1a8a4], eax */ W32((u32)(r_ebx+0x1a8a4u), r_eax);
    /* 0070ca70: mov dword ptr [ebx + 0x1a8a8], eax */ W32((u32)(r_ebx+0x1a8a8u), r_eax);
    /* 0070ca76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070ca78: mov dword ptr [ebx + 0x1a8ac], eax */ W32((u32)(r_ebx+0x1a8acu), r_eax);
    /* 0070ca7e: mov dword ptr [ebx + 0x1a8b0], eax */ W32((u32)(r_ebx+0x1a8b0u), r_eax);
    /* 0070ca84: mov dword ptr [ebx + 0x1a8b4], eax */ W32((u32)(r_ebx+0x1a8b4u), r_eax);
    /* 0070ca8a: mov dword ptr [ebx + 0x1a8b8], eax */ W32((u32)(r_ebx+0x1a8b8u), r_eax);
    /* 0070ca90: mov dword ptr [ebx + 0x1a8bc], eax */ W32((u32)(r_ebx+0x1a8bcu), r_eax);
    /* 0070ca96: mov dword ptr [ebx + 0x1a8c0], eax */ W32((u32)(r_ebx+0x1a8c0u), r_eax);
    /* 0070ca9c: mov word ptr [ebx + 0x1a8c4], ax */ W16((u32)(r_ebx+0x1a8c4u), (u16)r_eax);
    /* 0070caa3: mov word ptr [ebx + 0x1a8c6], ax */ W16((u32)(r_ebx+0x1a8c6u), (u16)r_eax);
    /* 0070caaa: mov word ptr [ebx + 0x1a8c8], ax */ W16((u32)(r_ebx+0x1a8c8u), (u16)r_eax);
    /* 0070cab1: mov word ptr [ebx + 0x1a8ca], ax */ W16((u32)(r_ebx+0x1a8cau), (u16)r_eax);
    /* 0070cab8: mov word ptr [ebx + 0x1a8cc], ax */ W16((u32)(r_ebx+0x1a8ccu), (u16)r_eax);
    /* 0070cabf: mov word ptr [ebx + 0x1a8ce], ax */ W16((u32)(r_ebx+0x1a8ceu), (u16)r_eax);
    /* 0070cac6: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0070cac8: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0070cacb: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 0070cace: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 0070cad1: lea edx, [ebx + 0x1a8f0] */ r_edx = (u32)(r_ebx+0x1a8f0u);
    /* 0070cad7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070cad9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070cadb: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0070cade: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0070cae1: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0070cae4: lea edx, [ebx + 0x1a900] */ r_edx = (u32)(r_ebx+0x1a900u);
    /* 0070caea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070caec: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0070caee: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0070caf1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0070caf4: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0070caf7: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0070cafa: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0070cafd: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0070cb00: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0070cb03: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0070cb06: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0070cb09: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0070cb0c: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0070cb0f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0070cb12: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0070cb15: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0070cb18: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0070cb1b: lea edi, [ebx + 0x1a954] */ r_edi = (u32)(r_ebx+0x1a954u);
    /* 0070cb21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070cb23: mov dword ptr [ebx + 0x1a940], eax */ W32((u32)(r_ebx+0x1a940u), r_eax);
    /* 0070cb29: mov dword ptr [ebx + 0x1a944], eax */ W32((u32)(r_ebx+0x1a944u), r_eax);
    /* 0070cb2f: mov dword ptr [ebx + 0x1a94c], eax */ W32((u32)(r_ebx+0x1a94cu), r_eax);
    /* 0070cb35: mov dword ptr [ebx + 0x1a950], eax */ W32((u32)(r_ebx+0x1a950u), r_eax);
    /* 0070cb3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070cb3d: mov dword ptr [ebx + 0x1a948], eax */ W32((u32)(r_ebx+0x1a948u), r_eax);
    /* 0070cb43: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0070cb45: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0070cb48: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 0070cb4b: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 0070cb4e: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0070cb51: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 0070cb54: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 0070cb57: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 0070cb5a: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 0070cb5d: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0070cb60: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0070cb63: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 0070cb66: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0070cb69: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 0070cb6c: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 0070cb6f: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0070cb72: lea edx, [ebx + 0x1829c] */ r_edx = (u32)(r_ebx+0x1829cu);
    /* 0070cb78: push 0x2600 */ { u32 v = 0x2600u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cb7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cb7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0070cb81: mov dword ptr [ebx + 0x1a994], eax */ W32((u32)(r_ebx+0x1a994u), r_eax);
    /* 0070cb87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070cb88: mov dword ptr [ebx + 0x1a998], eax */ W32((u32)(r_ebx+0x1a998u), r_eax);
    /* 0070cb8e: mov dword ptr [ebx + 0x1a99c], eax */ W32((u32)(r_ebx+0x1a99cu), r_eax);
    /* 0070cb94: mov dword ptr [ebx + 0x18298], eax */ W32((u32)(r_ebx+0x18298u), r_eax);
    /* 0070cb9a: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x70cb9fu); f_0086b688();
    /* 0070cb9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070cba2: mov dword ptr [ebx + 0x1a89c], 0 */ W32((u32)(r_ebx+0x1a89cu), 0x0u);
    /* 0070cbac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cbae: call dword ptr [0x8f83bc] */ { u32 t = R32((u32)(0x8f83bcu)); r_esp -= 4; W32(r_esp, 0x70cbb4u); call_ind(t); }
    /* 0070cbb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070cbb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070cbb6: ret 4 */ FN_RET(0x0070c998); r_esp += 8; return;
}

void f_0070cbbc(void) /* sub_70CBBC */
{
    FN_ENTER(0x0070cbbc);
    /* 0070cbbc: mov eax, dword ptr [ecx + 0x18290] */ r_eax = R32((u32)(r_ecx+0x18290u));
    /* 0070cbc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070cbc4: jne 0x70cbcc */ if (!fZ) goto L_0070cbcc;
L_0070cbc6:; BB(0x0070cbc6);
    /* 0070cbc6: or dword ptr [ecx], 2 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070cbc9: ret 4 */ FN_RET(0x0070cbbc); r_esp += 8; return;
L_0070cbcc:; BB(0x0070cbcc);
    /* 0070cbcc: mov eax, dword ptr [ecx + 0x1a8bc] */ r_eax = R32((u32)(r_ecx+0x1a8bcu));
    /* 0070cbd2: or dword ptr [ecx], 3 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0070cbd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070cbd7: je 0x70cbe3 */ if (fZ) goto L_0070cbe3;
L_0070cbd9:; BB(0x0070cbd9);
    /* 0070cbd9: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070cbdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070cbde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x70cbe0u); call_ind(t); }
    /* 0070cbe0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0070cbe3:; BB(0x0070cbe3);
    /* 0070cbe3: ret 4 */ FN_RET(0x0070cbbc); r_esp += 8; return;
}

void f_0070cbe8(void) /* sub_70CBE8 */
{
    FN_ENTER(0x0070cbe8);
    /* 0070cbe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070cbe9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070cbeb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070cbed: call 0x70cc0c */ r_esp -= 4; W32(r_esp, 0x70cbf2u); f_0070cc0c();
    /* 0070cbf2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0070cbf6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070cbf8: jne 0x70cbfe */ if (!fZ) goto L_0070cbfe;
L_0070cbfa:; BB(0x0070cbfa);
    /* 0070cbfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070cbfb: ret 4 */ FN_RET(0x0070cbe8); r_esp += 8; return;
L_0070cbfe:; BB(0x0070cbfe);
    /* 0070cbfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070cbff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x70cc04u); f_005c2f74();
    /* 0070cc04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070cc05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070cc06: ret 4 */ FN_RET(0x0070cbe8); r_esp += 8; return;
}

void f_0070cc0c(void) /* sub_70CC0C */
{
    FN_ENTER(0x0070cc0c);
    /* 0070cc0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0070cc0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc11: push 0x8f029c */ { u32 v = 0x8f029cu; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0070cc1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0070cc24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070cc27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0070cc2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0070cc2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0070cc30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0070cc33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0070cc36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0070cc39: mov dword ptr [ecx], 0xb3eef0 */ W32((u32)(r_ecx), 0xb3eef0u);
    /* 0070cc3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0070cc46: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x70cc4bu); f_008171e8();
    /* 0070cc4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0070cc4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0070cc55: mov esp, ebp */ r_esp = r_ebp;
    /* 0070cc57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070cc58: ret  */ FN_RET(0x0070cc0c); r_esp += 4; return;
}

void f_0070cc5c(void) /* sub_70CC5C */
{
    FN_ENTER(0x0070cc5c);
    /* 0070cc5c: mov eax, dword ptr [0xa983a0] */ r_eax = R32((u32)(0xa983a0u));
    /* 0070cc61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070cc63: je 0x70cc76 */ if (fZ) goto L_0070cc76;
L_0070cc65:; BB(0x0070cc65);
    /* 0070cc65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc66: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x70cc6bu); f_00800b5c();
    /* 0070cc6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070cc6c: mov dword ptr [0xa983a0], 0 */ W32((u32)(0xa983a0u), 0x0u);
L_0070cc76:; BB(0x0070cc76);
    /* 0070cc76: ret  */ FN_RET(0x0070cc5c); r_esp += 4; return;
}

void f_0070cc78(void) /* sub_70CC78 */
{
    FN_ENTER(0x0070cc78);
    /* 0070cc78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc79: mov edi, ecx */ r_edi = r_ecx;
    /* 0070cc7b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070cc7f: mov ecx, edi */ r_ecx = r_edi;
    /* 0070cc81: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x70cc86u); f_008193cc();
    /* 0070cc86: mov dword ptr [edi], 0xb3eef0 */ W32((u32)(r_edi), 0xb3eef0u);
    /* 0070cc8c: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc91: lea eax, [edi + 0x1c] */ r_eax = (u32)(r_edi+0x1cu);
    /* 0070cc94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070cc97: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x70cc9cu); f_0086b688();
    /* 0070cc9c: mov dword ptr [edi + 0x22c], 0 */ W32((u32)(r_edi+0x22cu), 0x0u);
    /* 0070cca6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0070cca8: mov dword ptr [edi + 0x228], edx */ W32((u32)(r_edi+0x228u), r_edx);
    /* 0070ccae: mov dword ptr [edi + 0x230], edx */ W32((u32)(r_edi+0x230u), r_edx);
    /* 0070ccb4: mov dword ptr [edi + 0x240], 0 */ W32((u32)(r_edi+0x240u), 0x0u);
    /* 0070ccbe: mov dword ptr [edi + 0x234], edx */ W32((u32)(r_edi+0x234u), r_edx);
    /* 0070ccc4: mov dword ptr [edi + 0x238], edx */ W32((u32)(r_edi+0x238u), r_edx);
    /* 0070ccca: mov dword ptr [edi + 0x23c], edx */ W32((u32)(r_edi+0x23cu), r_edx);
    /* 0070ccd0: mov eax, edi */ r_eax = r_edi;
    /* 0070ccd2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070ccd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070ccd6: ret 4 */ FN_RET(0x0070cc78); r_esp += 8; return;
}

void f_0070ccdc(void) /* sub_70CCDC */
{
    FN_ENTER(0x0070ccdc);
    /* 0070ccdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070ccdd: sub esp, 0x274 */ {  u32 a = r_esp; u32 b = 0x274u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070cce3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0070cce5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x70cceau); f_0082dbac();
    /* 0070ccea: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x70ccefu); f_007a9044();
    /* 0070ccef: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x70ccf4u); f_007a93d8();
    /* 0070ccf4: mov ecx, dword ptr [0xa983a0] */ r_ecx = R32((u32)(0xa983a0u));
    /* 0070ccfa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x70ccffu); f_00829cc8();
    /* 0070ccff: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070cd04: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x70cd09u); f_0082bb30();
    /* 0070cd09: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0070cd0b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0070cd10: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x70cd15u); f_0082bb60();
    /* 0070cd15: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cd19: mov edx, 0x96f2a0 */ r_edx = 0x96f2a0u;
    /* 0070cd1e: mov ecx, 0xa98380 */ r_ecx = 0xa98380u;
    /* 0070cd23: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cd28u); f_0070d1f8();
    /* 0070cd28: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cd2d: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cd31: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cd36u); f_0082b440();
    /* 0070cd36: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cd3a: mov edx, 0x96f290 */ r_edx = 0x96f290u;
    /* 0070cd3f: mov ecx, 0x9f0b6c */ r_ecx = 0x9f0b6cu;
    /* 0070cd44: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cd49u); f_0070d1f8();
    /* 0070cd49: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cd4e: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cd52: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cd57u); f_0082b440();
    /* 0070cd57: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cd5b: mov edx, 0x96f280 */ r_edx = 0x96f280u;
    /* 0070cd60: mov ecx, 0x9f0b5c */ r_ecx = 0x9f0b5cu;
    /* 0070cd65: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cd6au); f_0070d1f8();
    /* 0070cd6a: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cd6f: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cd73: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cd78u); f_0082b440();
    /* 0070cd78: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cd7c: mov edx, 0x96f270 */ r_edx = 0x96f270u;
    /* 0070cd81: mov ecx, 0xa98390 */ r_ecx = 0xa98390u;
    /* 0070cd86: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cd8bu); f_0070d1f8();
    /* 0070cd8b: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cd90: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cd94: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cd99u); f_0082b440();
    /* 0070cd99: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cd9d: mov edx, 0x96f260 */ r_edx = 0x96f260u;
    /* 0070cda2: mov ecx, 0x9f0b4c */ r_ecx = 0x9f0b4cu;
    /* 0070cda7: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cdacu); f_0070d1f8();
    /* 0070cdac: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cdb1: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cdb5: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cdbau); f_0082b440();
    /* 0070cdba: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cdbe: mov edx, 0x96f250 */ r_edx = 0x96f250u;
    /* 0070cdc3: mov ecx, 0x9f0b3c */ r_ecx = 0x9f0b3cu;
    /* 0070cdc8: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cdcdu); f_0070d1f8();
    /* 0070cdcd: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cdd2: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cdd6: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cddbu); f_0082b440();
    /* 0070cddb: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0070cde0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0070cde5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x70cdeau); f_0082bb60();
    /* 0070cdea: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cdee: mov edx, 0x96f240 */ r_edx = 0x96f240u;
    /* 0070cdf3: mov ecx, 0x9f0b2c */ r_ecx = 0x9f0b2cu;
    /* 0070cdf8: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cdfdu); f_0070d1f8();
    /* 0070cdfd: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ce02: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070ce06: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70ce0bu); f_0082b440();
    /* 0070ce0b: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070ce0f: mov edx, 0x96f230 */ r_edx = 0x96f230u;
    /* 0070ce14: mov ecx, 0x9f0b1c */ r_ecx = 0x9f0b1cu;
    /* 0070ce19: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70ce1eu); f_0070d1f8();
    /* 0070ce1e: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ce23: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070ce27: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70ce2cu); f_0082b440();
    /* 0070ce2c: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070ce30: mov edx, 0x96f220 */ r_edx = 0x96f220u;
    /* 0070ce35: mov ecx, 0x9f0b0c */ r_ecx = 0x9f0b0cu;
    /* 0070ce3a: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70ce3fu); f_0070d1f8();
    /* 0070ce3f: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ce44: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070ce48: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70ce4du); f_0082b440();
    /* 0070ce4d: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070ce51: mov edx, 0x96f240 */ r_edx = 0x96f240u;
    /* 0070ce56: mov ecx, 0x9f0afc */ r_ecx = 0x9f0afcu;
    /* 0070ce5b: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70ce60u); f_0070d1f8();
    /* 0070ce60: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ce65: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070ce69: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70ce6eu); f_0082b440();
    /* 0070ce6e: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070ce72: mov edx, 0x96f230 */ r_edx = 0x96f230u;
    /* 0070ce77: mov ecx, 0x9f0aec */ r_ecx = 0x9f0aecu;
    /* 0070ce7c: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70ce81u); f_0070d1f8();
    /* 0070ce81: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070ce86: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070ce8a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70ce8fu); f_0082b440();
    /* 0070ce8f: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070ce93: mov edx, 0x96f220 */ r_edx = 0x96f220u;
    /* 0070ce98: mov ecx, 0x9f0adc */ r_ecx = 0x9f0adcu;
    /* 0070ce9d: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cea2u); f_0070d1f8();
    /* 0070cea2: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cea7: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070ceab: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70ceb0u); f_0082b440();
    /* 0070ceb0: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0070ceb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070ceb6: je 0x70cfd7 */ if (fZ) goto L_0070cfd7;
L_0070cebc:; BB(0x0070cebc);
    /* 0070cebc: fld dword ptr [0x96f2b8] */ FPUSH(R_F32((u32)(0x96f2b8u)));
    /* 0070cec2: fld dword ptr [0x96f2b4] */ FPUSH(R_F32((u32)(0x96f2b4u)));
    /* 0070cec8: fld dword ptr [0x9f0ad4] */ FPUSH(R_F32((u32)(0x9f0ad4u)));
    /* 0070cece: fadd dword ptr [0x9f0ac4] */ ST(0) = ST(0) + R_F32((u32)(0x9f0ac4u));
    /* 0070ced4: fld dword ptr [ebx + 0x22c] */ FPUSH(R_F32((u32)(r_ebx+0x22cu)));
    /* 0070ceda: fld dword ptr [0x96f2b0] */ FPUSH(R_F32((u32)(0x96f2b0u)));
    /* 0070cee0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070cee2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0070cee4: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0070cee6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0070cee8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0070ceec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070ceee: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0070cef0: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0070cef2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070cef4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070cef6: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0070cefa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070cefb: jae 0x70cfef */ if (!fC) goto L_0070cfef;
L_0070cf01:; BB(0x0070cf01);
    /* 0070cf01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070cf03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070cf05: mov eax, dword ptr [0x9f0ad0] */ r_eax = R32((u32)(0x9f0ad0u));
    /* 0070cf0a: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 0070cf12: mov edx, 0x96f210 */ r_edx = 0x96f210u;
    /* 0070cf17: mov ecx, 0x9f0acc */ r_ecx = 0x9f0accu;
    /* 0070cf1c: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0070cf24: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0070cf28: mov eax, dword ptr [0x9f0ad8] */ r_eax = R32((u32)(0x9f0ad8u));
    /* 0070cf2d: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0070cf31: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cf35: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cf3au); f_0070d1f8();
    /* 0070cf3a: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cf3f: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cf43: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cf48u); f_0082b440();
    /* 0070cf48: fld dword ptr [0x9f0acc] */ FPUSH(R_F32((u32)(0x9f0accu)));
    /* 0070cf4e: fadd dword ptr [0x9f0ad4] */ ST(0) = ST(0) + R_F32((u32)(0x9f0ad4u));
    /* 0070cf54: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 0070cf58: mov eax, dword ptr [0x9f0ac4] */ r_eax = R32((u32)(0x9f0ac4u));
    /* 0070cf5d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0070cf61: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0070cf65: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cf69: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0070cf6d: mov edx, 0x96f200 */ r_edx = 0x96f200u;
    /* 0070cf72: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cf77u); f_0070d1f8();
    /* 0070cf77: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cf7c: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cf80: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cf85u); f_0082b440();
    /* 0070cf85: fld dword ptr [0x9f0acc] */ FPUSH(R_F32((u32)(0x9f0accu)));
    /* 0070cf8b: fadd dword ptr [0x9f0ad4] */ ST(0) = ST(0) + R_F32((u32)(0x9f0ad4u));
    /* 0070cf91: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0070cf95: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0070cf99: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0070cf9d: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070cfa1: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0070cfa5: mov edx, 0x96f1f0 */ r_edx = 0x96f1f0u;
    /* 0070cfaa: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70cfafu); f_0070d1f8();
    /* 0070cfaf: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070cfb4: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070cfb8: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70cfbdu); f_0082b440();
    /* 0070cfbd: fld dword ptr [0x96f2b8] */ FPUSH(R_F32((u32)(0x96f2b8u)));
    /* 0070cfc3: fld dword ptr [0x96f2b4] */ FPUSH(R_F32((u32)(0x96f2b4u)));
    /* 0070cfc9: fld dword ptr [0x96f2b0] */ FPUSH(R_F32((u32)(0x96f2b0u)));
    /* 0070cfcf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070cfd1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0070cfd5: jmp 0x70cfef */ goto L_0070cfef;
L_0070cfd7:; BB(0x0070cfd7);
    /* 0070cfd7: fld dword ptr [0x96f2b8] */ FPUSH(R_F32((u32)(0x96f2b8u)));
    /* 0070cfdd: fld dword ptr [0x96f2b4] */ FPUSH(R_F32((u32)(0x96f2b4u)));
    /* 0070cfe3: fld dword ptr [0x96f2b0] */ FPUSH(R_F32((u32)(0x96f2b0u)));
    /* 0070cfe9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0070cfeb: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0070cfef:; BB(0x0070cfef);
    /* 0070cfef: fld dword ptr [0x9f0ab4] */ FPUSH(R_F32((u32)(0x9f0ab4u)));
    /* 0070cff5: fadd dword ptr [0x9f0aa4] */ ST(0) = ST(0) + R_F32((u32)(0x9f0aa4u));
    /* 0070cffb: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0070cfff: fmul dword ptr [ebx + 0x240] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x240u));
    /* 0070d005: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0070d007: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0070d009: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0070d00b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070d00d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0070d00f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0070d011: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0070d015: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0070d016: jbe 0x70d0d4 */ if ((fC||fZ)) goto L_0070d0d4;
L_0070d01c:; BB(0x0070d01c);
    /* 0070d01c: mov eax, dword ptr [0x9f0ab0] */ r_eax = R32((u32)(0x9f0ab0u));
    /* 0070d021: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 0070d029: mov edx, 0x96f1e0 */ r_edx = 0x96f1e0u;
    /* 0070d02e: mov ecx, 0x9f0aac */ r_ecx = 0x9f0aacu;
    /* 0070d033: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 0070d03b: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0070d03f: mov eax, dword ptr [0x9f0ab8] */ r_eax = R32((u32)(0x9f0ab8u));
    /* 0070d044: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0070d048: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070d04c: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70d051u); f_0070d1f8();
    /* 0070d051: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d056: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070d05a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70d05fu); f_0082b440();
    /* 0070d05f: fld dword ptr [0x9f0aac] */ FPUSH(R_F32((u32)(0x9f0aacu)));
    /* 0070d065: fadd dword ptr [0x9f0ab4] */ ST(0) = ST(0) + R_F32((u32)(0x9f0ab4u));
    /* 0070d06b: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 0070d06f: mov eax, dword ptr [0x9f0aa4] */ r_eax = R32((u32)(0x9f0aa4u));
    /* 0070d074: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0070d078: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0070d07c: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070d080: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0070d084: mov edx, 0x96f1d0 */ r_edx = 0x96f1d0u;
    /* 0070d089: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70d08eu); f_0070d1f8();
    /* 0070d08e: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d093: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070d097: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70d09cu); f_0082b440();
    /* 0070d09c: fld dword ptr [0x9f0aac] */ FPUSH(R_F32((u32)(0x9f0aacu)));
    /* 0070d0a2: fadd dword ptr [0x9f0ab4] */ ST(0) = ST(0) + R_F32((u32)(0x9f0ab4u));
    /* 0070d0a8: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0070d0ac: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0070d0b0: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0070d0b4: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0070d0b8: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0070d0bc: mov edx, 0x96f1c0 */ r_edx = 0x96f1c0u;
    /* 0070d0c1: call 0x70d1f8 */ r_esp -= 4; W32(r_esp, 0x70d0c6u); f_0070d1f8();
    /* 0070d0c6: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d0cb: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0070d0cf: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x70d0d4u); f_0082b440();
L_0070d0d4:; BB(0x0070d0d4);
    /* 0070d0d4: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x70d0d9u); f_004ac444();
    /* 0070d0d9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0070d0db: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d0dd: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x70d0e2u); f_00792fe8();
    /* 0070d0e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070d0e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070d0e5: push dword ptr [0x9f0a98] */ { u32 v = R32((u32)(0x9f0a98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d0eb: push dword ptr [0x9f0a94] */ { u32 v = R32((u32)(0x9f0a94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d0f1: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x70d0f6u); f_007ac12c();
    /* 0070d0f6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0070d0f8: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d0fa: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x70d0ffu); f_00792fe8();
    /* 0070d0ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070d101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070d102: push dword ptr [0x9f0a90] */ { u32 v = R32((u32)(0x9f0a90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d108: push dword ptr [0x9f0a8c] */ { u32 v = R32((u32)(0x9f0a8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d10e: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x70d113u); f_007ac12c();
    /* 0070d113: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070d116: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0070d11a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070d11c: je 0x70d1e4 */ if (fZ) goto L_0070d1e4;
L_0070d122:; BB(0x0070d122);
    /* 0070d122: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 0070d126: fld dword ptr [ebx + 0x22c] */ FPUSH(R_F32((u32)(r_ebx+0x22cu)));
    /* 0070d12c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0070d130: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0070d135: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070d13a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0070d13e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0070d142: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0070d146: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0070d14a: lea edx, [ebx + 0x1c] */ r_edx = (u32)(r_ebx+0x1cu);
    /* 0070d14d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0070d151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070d152: push dword ptr [ebx + 0x224] */ { u32 v = R32((u32)(r_ebx+0x224u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d158: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070d159: push 0x96f2d0 */ { u32 v = 0x96f2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d15e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0070d15f: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x70d164u); f_00857e29();
    /* 0070d164: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 0070d16b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070d16d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070d16e: push dword ptr [0x9f0a88] */ { u32 v = R32((u32)(0x9f0a88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d174: push dword ptr [0x9f0a84] */ { u32 v = R32((u32)(0x9f0a84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d17a: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x70d17fu); f_007ac12c();
    /* 0070d17f: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0070d186: fld dword ptr [ebx + 0x240] */ FPUSH(R_F32((u32)(r_ebx+0x240u)));
    /* 0070d18c: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0070d190: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0070d195: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0070d19a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0070d19e: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0070d1a2: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070d1a6: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0070d1aa: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0070d1ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070d1af: push dword ptr [ebx + 0x234] */ { u32 v = R32((u32)(r_ebx+0x234u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d1b5: push dword ptr [ebx + 0x230] */ { u32 v = R32((u32)(r_ebx+0x230u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d1bb: push 0x96f2f8 */ { u32 v = 0x96f2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070d1c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070d1c1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x70d1c6u); f_00857e29();
    /* 0070d1c6: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 0070d1cd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0070d1cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070d1d0: push dword ptr [0x9f0a80] */ { u32 v = R32((u32)(0x9f0a80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d1d6: push dword ptr [0x9f0a7c] */ { u32 v = R32((u32)(0x9f0a7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070d1dc: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x70d1e1u); f_007ac12c();
    /* 0070d1e1: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0070d1e4:; BB(0x0070d1e4);
    /* 0070d1e4: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x70d1e9u); f_007a9318();
    /* 0070d1e9: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x70d1eeu); f_0082dab0();
    /* 0070d1ee: add esp, 0x274 */ {  u32 a = r_esp; u32 b = 0x274u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070d1f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070d1f5: ret  */ FN_RET(0x0070ccdc); r_esp += 4; return;
}

