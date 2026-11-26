#include "protos.h"

void f_007eba50(void) /* sub_7EBA50 */
{
    FN_ENTER(0x007eba50);
    /* 007eba50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007eba51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007eba52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007eba53: mov eax, 0x20fc */ r_eax = 0x20fcu;
    /* 007eba58: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7eba5du); f_00858020();
    /* 007eba5d: mov ecx, dword ptr [esp + 0x20fc] */ r_ecx = R32((u32)(r_esp+0x20fcu));
    /* 007eba64: mov eax, ecx */ r_eax = r_ecx;
    /* 007eba66: mov esi, dword ptr [esp + 0x210c] */ r_esi = R32((u32)(r_esp+0x210cu));
    /* 007eba6d: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007eba70: mov ecx, 0x2008 */ r_ecx = 0x2008u;
    /* 007eba75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007eba76: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007eba79: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007eba7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007eba7c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007eba7f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007eba81: mov esi, dword ptr [eax + 0x1e09c] */ r_esi = R32((u32)(r_eax+0x1e09cu));
    /* 007eba87: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007eba89: je 0x7ebaa7 */ if (fZ) goto L_007ebaa7;
L_007eba8b:; BB(0x007eba8b);
    /* 007eba8b: mov edx, dword ptr [eax + 0x12158] */ r_edx = R32((u32)(r_eax+0x12158u));
    /* 007eba91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007eba93: jne 0x7ebaa7 */ if (!fZ) goto L_007ebaa7;
L_007eba95:; BB(0x007eba95);
    /* 007eba95: mov dword ptr [eax + 0x12158], 1 */ W32((u32)(r_eax+0x12158u), 0x1u);
    /* 007eba9f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007ebaa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ebaa4: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x7ebaa6u); call_ind(t); }
    /* 007ebaa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007ebaa7:; BB(0x007ebaa7);
    /* 007ebaa7: add esp, 0x2100 */ {  u32 a = r_esp; u32 b = 0x2100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ebaad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ebaae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ebaaf: ret 4 */ FN_RET(0x007eba50); r_esp += 8; return;
}

void f_007ebab4(void) /* sub_7EBAB4 */
{
    FN_ENTER(0x007ebab4);
    /* 007ebab4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ebab7: mov byte ptr [esp + 2], 0xd6 */ W8((u32)(r_esp+0x2u), 0xd6u);
    /* 007ebabc: mov eax, 8 */ r_eax = 0x8u;
    /* 007ebac1: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007ebac5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007ebac8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ebaca: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007ebace: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ebad2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007ebad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ebad5: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7ebadau); f_0077fd10();
    /* 007ebada: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ebadd: ret  */ FN_RET(0x007ebab4); r_esp += 4; return;
}

void f_007ebae0(void)
{
    FN_ENTER(0x007ebae0);
    /* 007ebae0: mov edx, dword ptr [ecx + 0x1e12c] */ r_edx = R32((u32)(r_ecx+0x1e12cu));
    /* 007ebae6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ebae8: je 0x7ebaf4 */ if (fZ) goto L_007ebaf4;
L_007ebaea:; BB(0x007ebaea);
    /* 007ebaea: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007ebaee: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ebaf1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7ebaf3u); call_ind(t); }
    /* 007ebaf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007ebaf4:; BB(0x007ebaf4);
    /* 007ebaf4: ret 4 */ FN_RET(0x007ebae0); r_esp += 8; return;
}

void f_007ebaf8(void) /* sub_7EBAF8 */
{
    FN_ENTER(0x007ebaf8);
    /* 007ebaf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ebaf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ebafa: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ebafd: mov esi, ecx */ r_esi = r_ecx;
    /* 007ebaff: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 007ebb03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ebb05: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 007ebb09: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007ebb0d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ebb0f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007ebb12: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ebb16: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007ebb1a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007ebb1e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007ebb22: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007ebb26: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007ebb2a: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007ebb2e: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007ebb32: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 007ebb36: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007ebb3a: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007ebb3e: mov edx, dword ptr [esi + 0x163f4] */ r_edx = R32((u32)(r_esi+0x163f4u));
    /* 007ebb44: mov byte ptr [esp + 2], 0x9f */ W8((u32)(r_esp+0x2u), 0x9fu);
    /* 007ebb49: mov eax, 0x30 */ r_eax = 0x30u;
    /* 007ebb4e: mov ecx, esi */ r_ecx = r_esi;
    /* 007ebb50: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007ebb54: mov eax, dword ptr [esi + 0x163f8] */ r_eax = R32((u32)(r_esi+0x163f8u));
    /* 007ebb5a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007ebb5e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007ebb62: mov eax, dword ptr [esi + 0x163fc] */ r_eax = R32((u32)(r_esi+0x163fcu));
    /* 007ebb68: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007ebb6c: mov eax, dword ptr [esi + 0x16400] */ r_eax = R32((u32)(r_esi+0x16400u));
    /* 007ebb72: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ebb76: mov eax, dword ptr [esi + 0x16404] */ r_eax = R32((u32)(r_esi+0x16404u));
    /* 007ebb7c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007ebb80: mov eax, dword ptr [esi + 0x16408] */ r_eax = R32((u32)(r_esi+0x16408u));
    /* 007ebb86: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007ebb8a: mov eax, dword ptr [esi + 0x1640c] */ r_eax = R32((u32)(r_esi+0x1640cu));
    /* 007ebb90: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007ebb94: mov eax, dword ptr [esi + 0x16410] */ r_eax = R32((u32)(r_esi+0x16410u));
    /* 007ebb9a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007ebb9e: mov eax, dword ptr [esi + 0x16414] */ r_eax = R32((u32)(r_esi+0x16414u));
    /* 007ebba4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007ebba8: mov eax, dword ptr [esi + 0x16418] */ r_eax = R32((u32)(r_esi+0x16418u));
    /* 007ebbae: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007ebbb2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007ebbb5: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007ebbb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ebbb8: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7ebbbdu); f_0077fd10();
    /* 007ebbbd: movsx ecx, byte ptr [0xa46b9c] */ r_ecx = (u32)(i32)(i8)R8((u32)(0xa46b9cu));
    /* 007ebbc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ebbc5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007ebbc8: mov dword ptr [esi + 0x163f4], eax */ W32((u32)(r_esi+0x163f4u), r_eax);
    /* 007ebbce: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 007ebbd1: mov dword ptr [esi + 0x163f8], edx */ W32((u32)(r_esi+0x163f8u), r_edx);
    /* 007ebbd7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007ebbda: mov dword ptr [esi + 0x163fc], eax */ W32((u32)(r_esi+0x163fcu), r_eax);
    /* 007ebbe0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007ebbe3: mov dword ptr [esi + 0x16400], eax */ W32((u32)(r_esi+0x16400u), r_eax);
    /* 007ebbe9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 007ebbec: mov dword ptr [esi + 0x16404], eax */ W32((u32)(r_esi+0x16404u), r_eax);
    /* 007ebbf2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 007ebbf5: mov dword ptr [esi + 0x16408], eax */ W32((u32)(r_esi+0x16408u), r_eax);
    /* 007ebbfb: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007ebbfe: mov dword ptr [esi + 0x1640c], eax */ W32((u32)(r_esi+0x1640cu), r_eax);
    /* 007ebc04: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 007ebc07: mov dword ptr [esi + 0x16410], eax */ W32((u32)(r_esi+0x16410u), r_eax);
    /* 007ebc0d: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007ebc10: mov dword ptr [esi + 0x16414], eax */ W32((u32)(r_esi+0x16414u), r_eax);
    /* 007ebc16: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 007ebc19: mov dword ptr [esi + 0x16418], eax */ W32((u32)(r_esi+0x16418u), r_eax);
    /* 007ebc1f: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ebc22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ebc23: push 0xa46c0c */ { u32 v = 0xa46c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007ebc28: call 0x4682e4 */ r_esp -= 4; W32(r_esp, 0x7ebc2du); f_004682e4();
    /* 007ebc2d: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ebc30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ebc31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ebc32: ret 4 */ FN_RET(0x007ebaf8); r_esp += 8; return;
}

void f_007ebc38(void) /* sub_7EBC38 */
{
    FN_ENTER(0x007ebc38);
    /* 007ebc38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ebc39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ebc3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ebc3b: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ebc3e: mov edi, ecx */ r_edi = r_ecx;
    /* 007ebc40: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 007ebc44: movzx ebx, word ptr [esp + 0x44] */ r_ebx = (u32)R16((u32)(r_esp+0x44u));
    /* 007ebc49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ebc4b: movzx ecx, word ptr [esp + 0x48] */ r_ecx = (u32)R16((u32)(r_esp+0x48u));
    /* 007ebc50: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007ebc54: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 007ebc58: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007ebc5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ebc5e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007ebc61: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007ebc65: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007ebc69: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007ebc6d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007ebc71: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ebc75: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007ebc79: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007ebc7d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007ebc81: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007ebc85: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007ebc89: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007ebc8d: mov byte ptr [esp + 2], 0xaa */ W8((u32)(r_esp+0x2u), 0xaau);
    /* 007ebc92: mov word ptr [esp + 8], bp */ W16((u32)(r_esp+0x8u), (u16)r_ebp);
    /* 007ebc97: mov eax, 0x30 */ r_eax = 0x30u;
    /* 007ebc9c: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007ebca0: mov word ptr [esp + 0xc], bx */ W16((u32)(r_esp+0xcu), (u16)r_ebx);
    /* 007ebca5: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 007ebcaa: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007ebcac: mov word ptr [esp + 0xa], bp */ W16((u32)(r_esp+0xau), (u16)r_ebp);
    /* 007ebcb1: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 007ebcb3: mov ecx, edi */ r_ecx = r_edi;
    /* 007ebcb5: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 007ebcb9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 007ebcbc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007ebcc0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 007ebcc3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007ebcc7: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 007ebcca: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007ebcce: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 007ebcd1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007ebcd5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 007ebcd8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007ebcdc: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007ebcdf: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007ebce3: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 007ebce6: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007ebcea: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007ebcee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007ebcf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ebcf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ebcf3: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7ebcf8u); f_0077fd10();
    /* 007ebcf8: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ebcfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ebcfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ebcfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ebcfe: ret 0x10 */ FN_RET(0x007ebc38); r_esp += 20; return;
}

void f_007ebd04(void)
{
    FN_ENTER(0x007ebd04);
    /* 007ebd04: mov ecx, dword ptr [ecx + 0x1e130] */ r_ecx = R32((u32)(r_ecx+0x1e130u));
    /* 007ebd0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ebd0c: je 0x7ebd1a */ if (fZ) goto L_007ebd1a;
L_007ebd0e:; BB(0x007ebd0e);
    /* 007ebd0e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007ebd12: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 007ebd16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ebd17: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x7ebd19u); call_ind(t); }
    /* 007ebd19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007ebd1a:; BB(0x007ebd1a);
    /* 007ebd1a: ret 4 */ FN_RET(0x007ebd04); r_esp += 8; return;
}

void f_007ebd20(void) /* sub_7EBD20 */
{
    FN_ENTER(0x007ebd20);
    /* 007ebd20: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ebd23: mov byte ptr [esp + 2], 0xac */ W8((u32)(r_esp+0x2u), 0xacu);
    /* 007ebd28: mov eax, 8 */ r_eax = 0x8u;
    /* 007ebd2d: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007ebd31: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007ebd34: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007ebd36: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007ebd3a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007ebd3e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007ebd40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ebd41: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7ebd46u); f_0077fd10();
    /* 007ebd46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ebd49: ret  */ FN_RET(0x007ebd20); r_esp += 4; return;
}

void f_007ebd4c(void)
{
    FN_ENTER(0x007ebd4c);
    /* 007ebd4c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007ebd50: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007ebd53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ebd55: je 0x7ebd61 */ if (fZ) goto L_007ebd61;
L_007ebd57:; BB(0x007ebd57);
    /* 007ebd57: mov byte ptr [ecx + 0x10074], 1 */ W8((u32)(r_ecx+0x10074u), 0x1u);
    /* 007ebd5e: ret 4 */ FN_RET(0x007ebd4c); r_esp += 8; return;
L_007ebd61:; BB(0x007ebd61);
    /* 007ebd61: call 0x6cd074 */ r_esp -= 4; W32(r_esp, 0x7ebd66u); f_006cd074();
    /* 007ebd66: ret 4 */ FN_RET(0x007ebd4c); r_esp += 8; return;
}

void f_007ebd6c(void) /* sub_7EBD6C */
{
    FN_ENTER(0x007ebd6c);
    /* 007ebd6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ebd6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007ebd6f: mov eax, dword ptr [0xa95e48] */ r_eax = R32((u32)(0xa95e48u));
    /* 007ebd74: push dword ptr [0xaaecc4] */ { u32 v = R32((u32)(0xaaecc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ebd7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ebd7c: mov byte ptr [0xa46b95], al */ W8((u32)(0xa46b95u), (u8)r_eax);
    /* 007ebd81: mov byte ptr [0xa46b96], 4 */ W8((u32)(0xa46b96u), 0x4u);
    /* 007ebd88: call 0x77f8c8 */ r_esp -= 4; W32(r_esp, 0x7ebd8du); f_0077f8c8();
    /* 007ebd8d: movsx eax, word ptr [0xaaecc0] */ r_eax = (u32)(i32)(i16)R16((u32)(0xaaecc0u));
    /* 007ebd94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ebd95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ebd97: call 0x77f8ec */ r_esp -= 4; W32(r_esp, 0x7ebd9cu); f_0077f8ec();
    /* 007ebd9c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007ebd9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ebda0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x7ebda3u); call_ind(t); }
    /* 007ebda3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ebda5: jl 0x7ebdb2 */ if ((fS!=fO)) goto L_007ebdb2;
L_007ebda7:; BB(0x007ebda7);
    /* 007ebda7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007ebda9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ebdab: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7ebdaeu); call_ind(t); }
    /* 007ebdae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ebdb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ebdb1: ret  */ FN_RET(0x007ebd6c); r_esp += 4; return;
L_007ebdb2:; BB(0x007ebdb2);
    /* 007ebdb2: mov eax, 1 */ r_eax = 0x1u;
    /* 007ebdb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ebdb8: ret  */ FN_RET(0x007ebd6c); r_esp += 4; return;
}

void f_007ebdbc(void)
{
    FN_ENTER(0x007ebdbc);
    /* 007ebdbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ebdbd: mov ebp, esp */ r_ebp = r_esp;
    /* 007ebdbf: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ebdc5: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 007ebdc8: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 007ebdcb: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007ebdce: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 007ebdd1: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007ebdd2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007ebdd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ebdd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007ebdd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ebdda: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7ebde0u); call_ind(t); }
    /* 007ebde0: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007ebde1: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007ebde2: jmp 0x7ef003 */ f_007ef003(); return;
}

