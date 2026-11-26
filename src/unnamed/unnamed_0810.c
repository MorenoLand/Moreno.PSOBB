#include "protos.h"

void f_00810000(void)
{
    FN_ENTER(0x00810000);
    /* 00810000: add edx, dword ptr [0xaaff38] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810006: add edx, dword ptr [0xaaff3c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081000c: add edx, dword ptr [0xaaff40] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810012: add edx, dword ptr [0xaaff44] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff44u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810018: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081001a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081001c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0081001f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810021: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810023: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810025: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810027: add eax, dword ptr [0xab0210] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081002d: ret  */ FN_RET(0x00810000); r_esp += 4; return;
}

void f_00810010(void)
{
    FN_ENTER(0x00810010);
    /* 00810010: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00810011: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 00810013: adc eax, 0xaaff44 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xaaff44u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00810018: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081001a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081001c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0081001f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810021: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810023: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810025: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810027: add eax, dword ptr [0xab0210] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081002d: ret  */ FN_RET(0x00810010); r_esp += 4; return;
}

void f_00810030(void) /* sub_810030 */
{
    FN_ENTER(0x00810030);
    /* 00810030: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00810031: mov ecx, dword ptr [0xaaff60] */ r_ecx = R32((u32)(0xaaff60u));
    /* 00810037: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0081003b: add ecx, dword ptr [0xaaff64] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810041: add ecx, dword ptr [0xaaff68] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810047: add ecx, dword ptr [0xaaff6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081004d: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00810052: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00810054: mov esi, edx */ r_esi = r_edx;
    /* 00810056: shr esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00810059: add ecx, dword ptr [0xaaff70] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081005f: add ecx, dword ptr [0xaaff74] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff74u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810065: add ecx, dword ptr [0xaaff78] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff78u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081006b: add ecx, dword ptr [0xaaff7c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff7cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810071: add ecx, dword ptr [0xaaff80] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff80u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810077: add ecx, dword ptr [0xaaff84] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff84u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081007d: add ecx, dword ptr [0xaaff88] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff88u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810083: add ecx, dword ptr [0xaaff8c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff8cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810089: add ecx, dword ptr [0xaaff90] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff90u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081008f: add ecx, dword ptr [0xaaff94] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff94u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810095: add ecx, dword ptr [0xaaff98] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff98u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081009b: add ecx, dword ptr [0xaaff9c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100a1: add ecx, dword ptr [0xaaffa0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaffa0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100a7: add ecx, dword ptr [0xaaffa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaffa4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100ad: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100af: cmp ecx, 0x5a8 */ {  u32 a = r_ecx; u32 b = 0x5a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008100b5: jbe 0x8100bb */ if ((fC||fZ)) goto L_008100bb;
L_008100b7:; BB(0x008100b7);
    /* 008100b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008100b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008100ba: ret  */ FN_RET(0x00810030); r_esp += 4; return;
L_008100bb:; BB(0x008100bb);
    /* 008100bb: call 0x8100e4 */ r_esp -= 4; W32(r_esp, 0x8100c0u); f_008100e4();
    /* 008100c0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008100c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008100c5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008100c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008100ca: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x8100cfu); f_0086b6b8();
    /* 008100cf: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008100d3: mov dword ptr [ecx*4 + 0xaaff60], esi */ W32((u32)(r_ecx*4+0xaaff60u), r_esi);
    /* 008100da: mov eax, 1 */ r_eax = 0x1u;
    /* 008100df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008100e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008100e3: ret  */ FN_RET(0x00810030); r_esp += 4; return;
}

void f_00810080(void)
{
    FN_ENTER(0x00810080);
    /* 00810080: jmp ptr [edx - 0x73f2fd00] */ { u32 t = R32((u32)(r_edx+0x8c0d0300u)); jmp_ind(t); return; }
}

void f_00810081(void)
{
    FN_ENTER(0x00810081);
    /* 00810081: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00810082: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00810084: or eax, 0xaaff8c */ {  u32 a = r_eax; u32 b = 0xaaff8cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00810089: add ecx, dword ptr [0xaaff90] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff90u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081008f: add ecx, dword ptr [0xaaff94] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff94u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810095: add ecx, dword ptr [0xaaff98] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff98u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081009b: add ecx, dword ptr [0xaaff9c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100a1: add ecx, dword ptr [0xaaffa0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaffa0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100a7: add ecx, dword ptr [0xaaffa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaffa4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100ad: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008100af: cmp ecx, 0x5a8 */ {  u32 a = r_ecx; u32 b = 0x5a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008100b5: jbe 0x8100bb */ if ((fC||fZ)) goto L_008100bb;
L_008100b7:; BB(0x008100b7);
    /* 008100b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008100b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008100ba: ret  */ FN_RET(0x00810081); r_esp += 4; return;
L_008100bb:; BB(0x008100bb);
    /* 008100bb: call 0x8100e4 */ r_esp -= 4; W32(r_esp, 0x8100c0u); f_008100e4();
    /* 008100c0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008100c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008100c5: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008100c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008100ca: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x8100cfu); f_0086b6b8();
    /* 008100cf: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008100d3: mov dword ptr [ecx*4 + 0xaaff60], esi */ W32((u32)(r_ecx*4+0xaaff60u), r_esi);
    /* 008100da: mov eax, 1 */ r_eax = 0x1u;
    /* 008100df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008100e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008100e3: ret  */ FN_RET(0x00810081); r_esp += 4; return;
}

void f_008100e4(void) /* sub_8100E4 */
{
    FN_ENTER(0x008100e4);
    /* 008100e4: mov edx, dword ptr [0xaaff60] */ r_edx = R32((u32)(0xaaff60u));
    /* 008100ea: add edx, dword ptr [0xaaff64] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008100f0: add edx, dword ptr [0xaaff68] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008100f6: add edx, dword ptr [0xaaff6c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008100fc: add edx, dword ptr [0xaaff70] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810102: add edx, dword ptr [0xaaff74] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff74u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810108: add edx, dword ptr [0xaaff78] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff78u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081010e: add edx, dword ptr [0xaaff7c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff7cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810114: add edx, dword ptr [0xaaff80] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff80u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081011a: add edx, dword ptr [0xaaff84] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810120: add edx, dword ptr [0xaaff88] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff88u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810126: add edx, dword ptr [0xaaff8c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081012c: add edx, dword ptr [0xaaff90] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff90u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810132: add edx, dword ptr [0xaaff94] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff94u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810138: add edx, dword ptr [0xaaff98] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff98u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081013e: add edx, dword ptr [0xaaff9c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff9cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810144: add edx, dword ptr [0xaaffa0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaffa0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081014a: add edx, dword ptr [0xaaffa4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaffa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810150: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 00810153: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810155: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810157: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810159: add eax, dword ptr [0xab0214] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081015f: ret  */ FN_RET(0x008100e4); r_esp += 4; return;
}

void f_00810160(void) /* sub_810160 */
{
    FN_ENTER(0x00810160);
    /* 00810160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00810161: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00810165: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810168: jg 0x8101cb */ if ((!fZ&&fS==fO)) goto L_008101cb;
L_0081016a:; BB(0x0081016a);
    /* 0081016a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081016c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081016e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810170: jle 0x8101b2 */ if ((fZ||fS!=fO)) goto L_008101b2;
L_00810172:; BB(0x00810172);
    /* 00810172: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810175: jl 0x8101a4 */ if ((fS!=fO)) goto L_008101a4;
L_00810177:; BB(0x00810177);
    /* 00810177: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
L_0081017a:; BB(0x0081017a);
    /* 0081017a: add eax, dword ptr [ecx*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810181: add eax, dword ptr [ecx*4 + 0xaaff04] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810188: add eax, dword ptr [ecx*4 + 0xaaff08] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081018f: add eax, dword ptr [ecx*4 + 0xaaff0c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810196: add eax, dword ptr [ecx*4 + 0xaaff10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081019d: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008101a0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008101a2: jle 0x81017a */ if ((fZ||fS!=fO)) goto L_0081017a;
L_008101a4:; BB(0x008101a4);
    /* 008101a4: add eax, dword ptr [ecx*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008101ab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008101ae: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008101b0: jl 0x8101a4 */ if ((fS!=fO)) goto L_008101a4;
L_008101b2:; BB(0x008101b2);
    /* 008101b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008101b4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008101b6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008101b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008101bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008101bd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008101bf: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008101c1: add edx, dword ptr [0xab0210] */ {  u32 a = r_edx; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008101c7: mov eax, edx */ r_eax = r_edx;
    /* 008101c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008101ca: ret  */ FN_RET(0x00810160); r_esp += 4; return;
L_008101cb:; BB(0x008101cb);
    /* 008101cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008101cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008101ce: ret  */ FN_RET(0x00810160); r_esp += 4; return;
}

void f_008101d0(void) /* sub_8101D0 */
{
    FN_ENTER(0x008101d0);
    /* 008101d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008101d1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 008101d5: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008101d8: jg 0x810233 */ if ((!fZ&&fS==fO)) goto L_00810233;
L_008101da:; BB(0x008101da);
    /* 008101da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008101dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008101de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008101e0: jle 0x810222 */ if ((fZ||fS!=fO)) goto L_00810222;
L_008101e2:; BB(0x008101e2);
    /* 008101e2: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008101e5: jl 0x810214 */ if ((fS!=fO)) goto L_00810214;
L_008101e7:; BB(0x008101e7);
    /* 008101e7: lea eax, [ebp - 6] */ r_eax = (u32)(r_ebp+0xfffffffau);
L_008101ea:; BB(0x008101ea);
    /* 008101ea: add ecx, dword ptr [edx*4 + 0xaaff60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008101f1: add ecx, dword ptr [edx*4 + 0xaaff64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008101f8: add ecx, dword ptr [edx*4 + 0xaaff68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008101ff: add ecx, dword ptr [edx*4 + 0xaaff6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810206: add ecx, dword ptr [edx*4 + 0xaaff70] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081020d: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810210: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810212: jle 0x8101ea */ if ((fZ||fS!=fO)) goto L_008101ea;
L_00810214:; BB(0x00810214);
    /* 00810214: add ecx, dword ptr [edx*4 + 0xaaff60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081021b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081021e: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810220: jl 0x810214 */ if ((fS!=fO)) goto L_00810214;
L_00810222:; BB(0x00810222);
    /* 00810222: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 00810225: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810227: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810229: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081022b: add eax, dword ptr [0xab0214] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00810231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00810232: ret  */ FN_RET(0x008101d0); r_esp += 4; return;
L_00810233:; BB(0x00810233);
    /* 00810233: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00810235: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00810236: ret  */ FN_RET(0x008101d0); r_esp += 4; return;
}

void f_00810238(void) /* sub_810238 */
{
    FN_ENTER(0x00810238);
    /* 00810238: mov eax, dword ptr [0xaaff00] */ r_eax = R32((u32)(0xaaff00u));
    /* 0081023d: add eax, dword ptr [0xaaff04] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810243: add eax, dword ptr [0xaaff08] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810249: add eax, dword ptr [0xaaff0c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081024f: add eax, dword ptr [0xaaff10] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810255: add eax, dword ptr [0xaaff14] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081025b: add eax, dword ptr [0xaaff18] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810261: add eax, dword ptr [0xaaff1c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810267: add eax, dword ptr [0xaaff20] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081026d: add eax, dword ptr [0xaaff24] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810273: add eax, dword ptr [0xaaff28] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810279: add eax, dword ptr [0xaaff2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081027f: add eax, dword ptr [0xaaff30] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff30u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810285: add eax, dword ptr [0xaaff34] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff34u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081028b: add eax, dword ptr [0xaaff38] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff38u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810291: add eax, dword ptr [0xaaff3c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810297: add eax, dword ptr [0xaaff40] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff40u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081029d: add eax, dword ptr [0xaaff44] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff44u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008102a3: ret  */ FN_RET(0x00810238); r_esp += 4; return;
}

void f_008102a4(void) /* sub_8102A4 */
{
    FN_ENTER(0x008102a4);
    /* 008102a4: mov eax, dword ptr [0xaaff60] */ r_eax = R32((u32)(0xaaff60u));
    /* 008102a9: add eax, dword ptr [0xaaff64] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102af: add eax, dword ptr [0xaaff68] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102b5: add eax, dword ptr [0xaaff6c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102bb: add eax, dword ptr [0xaaff70] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102c1: add eax, dword ptr [0xaaff74] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff74u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102c7: add eax, dword ptr [0xaaff78] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff78u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102cd: add eax, dword ptr [0xaaff7c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102d3: add eax, dword ptr [0xaaff80] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff80u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102d9: add eax, dword ptr [0xaaff84] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff84u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102df: add eax, dword ptr [0xaaff88] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102e5: add eax, dword ptr [0xaaff8c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff8cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102eb: add eax, dword ptr [0xaaff90] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff90u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102f1: add eax, dword ptr [0xaaff94] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff94u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102f7: add eax, dword ptr [0xaaff98] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff98u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008102fd: add eax, dword ptr [0xaaff9c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaff9cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810303: add eax, dword ptr [0xaaffa0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaffa0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810309: add eax, dword ptr [0xaaffa4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaaffa4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081030f: ret  */ FN_RET(0x008102a4); r_esp += 4; return;
}

void f_00810310(void) /* sub_810310 */
{
    FN_ENTER(0x00810310);
    /* 00810310: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00810313: call dword ptr [eax*4 + 0xa11e40] */ { u32 t = R32((u32)(r_eax*4+0xa11e40u)); r_esp -= 4; W32(r_esp, 0x81031au); call_ind(t); }
    /* 0081031a: ret  */ FN_RET(0x00810310); r_esp += 4; return;
}

void f_0081031c(void) /* sub_81031C */
{
    FN_ENTER(0x0081031c);
    /* 0081031c: mov eax, dword ptr [0xab0248] */ r_eax = R32((u32)(0xab0248u));
    /* 00810321: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810323: je 0x810336 */ if (fZ) goto L_00810336;
L_00810325:; BB(0x00810325);
    /* 00810325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810326: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81032bu); f_0082e960();
    /* 0081032b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081032c: mov dword ptr [0xab0248], 0 */ W32((u32)(0xab0248u), 0x0u);
L_00810336:; BB(0x00810336);
    /* 00810336: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 0081033b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081033d: je 0x810350 */ if (fZ) goto L_00810350;
L_0081033f:; BB(0x0081033f);
    /* 0081033f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810340: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x810345u); f_0082e960();
    /* 00810345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00810346: mov dword ptr [0xab02b8], 0 */ W32((u32)(0xab02b8u), 0x0u);
L_00810350:; BB(0x00810350);
    /* 00810350: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00810355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810357: je 0x81036a */ if (fZ) goto L_0081036a;
L_00810359:; BB(0x00810359);
    /* 00810359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081035a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x81035fu); f_0082e960();
    /* 0081035f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00810360: mov dword ptr [0xab02bc], 0 */ W32((u32)(0xab02bcu), 0x0u);
L_0081036a:; BB(0x0081036a);
    /* 0081036a: mov ecx, dword ptr [0xab026c] */ r_ecx = R32((u32)(0xab026cu));
    /* 00810370: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810372: je 0x810387 */ if (fZ) goto L_00810387;
L_00810374:; BB(0x00810374);
    /* 00810374: je 0x81037d */ if (fZ) goto L_0081037d;
L_00810376:; BB(0x00810376);
    /* 00810376: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00810378: call 0x508320 */ r_esp -= 4; W32(r_esp, 0x81037du); f_00508320();
L_0081037d:; BB(0x0081037d);
    /* 0081037d: mov dword ptr [0xab026c], 0 */ W32((u32)(0xab026cu), 0x0u);
L_00810387:; BB(0x00810387);
    /* 00810387: mov ecx, dword ptr [0xab0270] */ r_ecx = R32((u32)(0xab0270u));
    /* 0081038d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081038f: je 0x8103a4 */ if (fZ) goto L_008103a4;
L_00810391:; BB(0x00810391);
    /* 00810391: je 0x81039a */ if (fZ) goto L_0081039a;
L_00810393:; BB(0x00810393);
    /* 00810393: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00810395: call 0x80fe60 */ r_esp -= 4; W32(r_esp, 0x81039au); f_0080fe60();
L_0081039a:; BB(0x0081039a);
    /* 0081039a: mov dword ptr [0xab0270], 0 */ W32((u32)(0xab0270u), 0x0u);
L_008103a4:; BB(0x008103a4);
    /* 008103a4: mov eax, dword ptr [0xab0214] */ r_eax = R32((u32)(0xab0214u));
    /* 008103a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008103ab: je 0x8103be */ if (fZ) goto L_008103be;
L_008103ad:; BB(0x008103ad);
    /* 008103ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008103ae: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x8103b3u); f_0082e960();
    /* 008103b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008103b4: mov dword ptr [0xab0214], 0 */ W32((u32)(0xab0214u), 0x0u);
L_008103be:; BB(0x008103be);
    /* 008103be: mov eax, dword ptr [0xab0210] */ r_eax = R32((u32)(0xab0210u));
    /* 008103c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008103c5: je 0x8103d8 */ if (fZ) goto L_008103d8;
L_008103c7:; BB(0x008103c7);
    /* 008103c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008103c8: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x8103cdu); f_0082e960();
    /* 008103cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008103ce: mov dword ptr [0xab0210], 0 */ W32((u32)(0xab0210u), 0x0u);
L_008103d8:; BB(0x008103d8);
    /* 008103d8: ret  */ FN_RET(0x0081031c); r_esp += 4; return;
}

void f_008103dc(void) /* sub_8103DC */
{
    FN_ENTER(0x008103dc);
    /* 008103dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008103dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008103de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008103df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008103e0: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 008103e6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008103e9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008103eb: mov esi, dword ptr [0xab0268] */ r_esi = R32((u32)(0xab0268u));
    /* 008103f1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008103f3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008103f5: je 0x810432 */ if (fZ) goto L_00810432;
L_008103f7:; BB(0x008103f7);
    /* 008103f7: mov ebx, dword ptr [eax*8 + 0xaaffd0] */ r_ebx = R32((u32)(r_eax*8+0xaaffd0u));
    /* 008103fe: mov edx, dword ptr [eax*8 + 0xaaffc0] */ r_edx = R32((u32)(r_eax*8+0xaaffc0u));
    /* 00810405: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00810407: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810409: jle 0x810432 */ if ((fZ||fS!=fO)) goto L_00810432;
L_0081040b:; BB(0x0081040b);
    /* 0081040b: movzx edi, word ptr [ebx] */ r_edi = (u32)R16((u32)(r_ebx));
    /* 0081040e: movzx ebp, word ptr [esi + 8] */ r_ebp = (u32)R16((u32)(r_esi+0x8u));
    /* 00810412: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810414: jne 0x810425 */ if (!fZ) goto L_00810425;
L_00810416:; BB(0x00810416);
    /* 00810416: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 0081041a: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 0081041e: mov edx, dword ptr [eax*8 + 0xaaffc0] */ r_edx = R32((u32)(r_eax*8+0xaaffc0u));
L_00810425:; BB(0x00810425);
    /* 00810425: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810428: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081042b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081042e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810430: jl 0x81040b */ if ((fS!=fO)) goto L_0081040b;
L_00810432:; BB(0x00810432);
    /* 00810432: mov esi, dword ptr [0xab0260] */ r_esi = R32((u32)(0xab0260u));
    /* 00810438: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081043a: je 0x81047d */ if (fZ) goto L_0081047d;
L_0081043c:; BB(0x0081043c);
    /* 0081043c: mov ebx, dword ptr [eax*8 + 0xaaffd4] */ r_ebx = R32((u32)(r_eax*8+0xaaffd4u));
    /* 00810443: mov edx, dword ptr [eax*8 + 0xaaffc4] */ r_edx = R32((u32)(r_eax*8+0xaaffc4u));
    /* 0081044a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0081044c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081044e: jle 0x81047d */ if ((fZ||fS!=fO)) goto L_0081047d;
L_00810450:; BB(0x00810450);
    /* 00810450: movzx edi, word ptr [ebx] */ r_edi = (u32)R16((u32)(r_ebx));
    /* 00810453: movzx ebp, word ptr [esi + 0xa] */ r_ebp = (u32)R16((u32)(r_esi+0xau));
    /* 00810457: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810459: jne 0x81046a */ if (!fZ) goto L_0081046a;
L_0081045b:; BB(0x0081045b);
    /* 0081045b: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 0081045f: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 00810463: mov edx, dword ptr [eax*8 + 0xaaffc4] */ r_edx = R32((u32)(r_eax*8+0xaaffc4u));
L_0081046a:; BB(0x0081046a);
    /* 0081046a: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081046d: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00810470: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810473: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810475: jl 0x810450 */ if ((fS!=fO)) goto L_00810450;
L_00810477:; BB(0x00810477);
    /* 00810477: mov esi, dword ptr [0xab0260] */ r_esi = R32((u32)(0xab0260u));
L_0081047d:; BB(0x0081047d);
    /* 0081047d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081047f: je 0x810492 */ if (fZ) goto L_00810492;
L_00810481:; BB(0x00810481);
    /* 00810481: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00810482: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x810487u); f_0082e960();
    /* 00810487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00810488: mov dword ptr [0xab0260], 0 */ W32((u32)(0xab0260u), 0x0u);
L_00810492:; BB(0x00810492);
    /* 00810492: mov eax, dword ptr [0xab0268] */ r_eax = R32((u32)(0xab0268u));
    /* 00810497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00810499: je 0x8104ac */ if (fZ) goto L_008104ac;
L_0081049b:; BB(0x0081049b);
    /* 0081049b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081049c: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x8104a1u); f_0082e960();
    /* 008104a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008104a2: mov dword ptr [0xab0268], 0 */ W32((u32)(0xab0268u), 0x0u);
L_008104ac:; BB(0x008104ac);
    /* 008104ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008104ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008104ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008104af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008104b0: ret  */ FN_RET(0x008103dc); r_esp += 4; return;
}

void f_008104b4(void) /* sub_8104B4 */
{
    FN_ENTER(0x008104b4);
    /* 008104b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008104b5: mov ebp, esp */ r_ebp = r_esp;
    /* 008104b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008104b9: push 0x8f7450 */ { u32 v = 0x8f7450u; r_esp -= 4; W32(r_esp, v); }
    /* 008104be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008104c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008104c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008104cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008104cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008104d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008104d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008104d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008104db: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008104dd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 008104e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x8104e9u); f_005caba4();
    /* 008104e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008104ea: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008104ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008104ef: je 0x810514 */ if (fZ) goto L_00810514;
L_008104f1:; BB(0x008104f1);
    /* 008104f1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 008104f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 008104ff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00810505: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00810508: call 0x810524 */ r_esp -= 4; W32(r_esp, 0x81050du); f_00810524();
    /* 0081050d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00810514:; BB(0x00810514);
    /* 00810514: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00810517: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081051e: mov esp, ebp */ r_esp = r_ebp;
    /* 00810520: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00810521: ret  */ FN_RET(0x008104b4); r_esp += 4; return;
}

void f_00810524(void) /* sub_810524 */
{
    FN_ENTER(0x00810524);
    /* 00810524: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00810525: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00810527: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081052b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0081052d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x810532u); f_008193cc();
    /* 00810532: mov dword ptr [ebx], 0xb47890 */ W32((u32)(r_ebx), 0xb47890u);
    /* 00810538: mov edx, dword ptr [0xa11e48] */ r_edx = R32((u32)(0xa11e48u));
    /* 0081053e: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00810541: mov eax, ebx */ r_eax = r_ebx;
    /* 00810543: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 0081054a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081054b: ret 4 */ FN_RET(0x00810524); r_esp += 8; return;
}

void f_00810550(void) /* sub_810550 */
{
    FN_ENTER(0x00810550);
    /* 00810550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00810551: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00810552: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810554: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 0081055a: mov eax, dword ptr [0xab0210] */ r_eax = R32((u32)(0xab0210u));
    /* 0081055f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810561: je 0x8105b1 */ if (fZ) goto L_008105b1;
L_00810563:; BB(0x00810563);
    /* 00810563: push 0x31680 */ { u32 v = 0x31680u; r_esp -= 4; W32(r_esp, v); }
    /* 00810568: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081056a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081056b: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x810570u); f_0086b5cc();
    /* 00810570: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00810573: mov edx, dword ptr [0xab0210] */ r_edx = R32((u32)(0xab0210u));
    /* 00810579: lea eax, [edx + 0x31680] */ r_eax = (u32)(r_edx+0x31680u);
L_0081057f:; BB(0x0081057f);
    /* 0081057f: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00810584: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00810587: mov word ptr [edx + 0x44], cx */ W16((u32)(r_edx+0x44u), (u16)r_ecx);
    /* 0081058b: mov word ptr [edx + 0x88], cx */ W16((u32)(r_edx+0x88u), (u16)r_ecx);
    /* 00810592: mov word ptr [edx + 0xcc], cx */ W16((u32)(r_edx+0xccu), (u16)r_ecx);
    /* 00810599: mov word ptr [edx + 0x110], cx */ W16((u32)(r_edx+0x110u), (u16)r_ecx);
    /* 008105a0: mov word ptr [edx + 0x154], cx */ W16((u32)(r_edx+0x154u), (u16)r_ecx);
    /* 008105a7: add edx, 0x198 */ {  u32 a = r_edx; u32 b = 0x198u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008105ad: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008105af: ja 0x81057f */ if ((!fC&&!fZ)) goto L_0081057f;
L_008105b1:; BB(0x008105b1);
    /* 008105b1: mov eax, dword ptr [0xab0214] */ r_eax = R32((u32)(0xab0214u));
    /* 008105b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008105b8: je 0x8105fa */ if (fZ) goto L_008105fa;
L_008105ba:; BB(0x008105ba);
    /* 008105ba: push 0x19740 */ { u32 v = 0x19740u; r_esp -= 4; W32(r_esp, v); }
    /* 008105bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008105c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008105c2: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x8105c7u); f_0086b5cc();
    /* 008105c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008105ca: mov edx, dword ptr [0xab0214] */ r_edx = R32((u32)(0xab0214u));
    /* 008105d0: lea eax, [edx + 0x19740] */ r_eax = (u32)(r_edx+0x19740u);
L_008105d6:; BB(0x008105d6);
    /* 008105d6: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 008105db: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 008105de: mov word ptr [edx + 0x48], cx */ W16((u32)(r_edx+0x48u), (u16)r_ecx);
    /* 008105e2: mov word ptr [edx + 0x90], cx */ W16((u32)(r_edx+0x90u), (u16)r_ecx);
    /* 008105e9: mov word ptr [edx + 0xd8], cx */ W16((u32)(r_edx+0xd8u), (u16)r_ecx);
    /* 008105f0: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008105f6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008105f8: ja 0x8105d6 */ if ((!fC&&!fZ)) goto L_008105d6;
L_008105fa:; BB(0x008105fa);
    /* 008105fa: mov edx, 0xaaff00 */ r_edx = 0xaaff00u;
    /* 008105ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810601: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00810603: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00810606: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00810609: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0081060c: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0081060f: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00810612: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00810615: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00810618: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0081061b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0081061e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00810621: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00810624: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00810627: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0081062a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0081062d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00810630: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00810633: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00810636: mov edx, 0xaaff60 */ r_edx = 0xaaff60u;
    /* 0081063b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081063d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0081063f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00810642: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00810645: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00810648: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0081064b: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0081064e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00810651: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00810654: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00810657: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0081065a: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0081065d: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00810660: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00810663: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00810666: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00810669: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0081066c: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0081066f: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00810672: mov edx, 0xab0218 */ r_edx = 0xab0218u;
    /* 00810677: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810679: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0081067b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0081067e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00810681: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00810684: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00810687: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0081068a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0081068d: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00810690: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00810693: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00810698: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0081069a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081069c: je 0x810701 */ if (fZ) goto L_00810701;
L_0081069e:; BB(0x0081069e);
    /* 0081069e: push 0x2e80 */ { u32 v = 0x2e80u; r_esp -= 4; W32(r_esp, v); }
    /* 008106a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008106a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008106a6: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8106abu); f_0086b688();
    /* 008106ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008106ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008106b0:; BB(0x008106b0);
    /* 008106b0: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 008106b6: lea edx, [ebx + 0x100] */ r_edx = (u32)(r_ebx+0x100u);
    /* 008106bc: mov word ptr [ecx + eax*4 + 2], dx */ W16((u32)(r_ecx+r_eax*4+0x2u), (u16)r_edx);
    /* 008106c1: lea edx, [ebx + 0x101] */ r_edx = (u32)(r_ebx+0x101u);
    /* 008106c7: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 008106cd: mov word ptr [ecx + eax*4 + 6], dx */ W16((u32)(r_ecx+r_eax*4+0x6u), (u16)r_edx);
    /* 008106d2: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 008106d8: lea edx, [ebx + 0x102] */ r_edx = (u32)(r_ebx+0x102u);
    /* 008106de: mov word ptr [ecx + eax*4 + 0xa], dx */ W16((u32)(r_ecx+r_eax*4+0xau), (u16)r_edx);
    /* 008106e3: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 008106e9: lea edx, [ebx + 0x103] */ r_edx = (u32)(r_ebx+0x103u);
    /* 008106ef: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008106f2: mov word ptr [ecx + eax*4 + 0xe], dx */ W16((u32)(r_ecx+r_eax*4+0xeu), (u16)r_edx);
    /* 008106f7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008106fa: cmp eax, 0xba0 */ {  u32 a = r_eax; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008106ff: jl 0x8106b0 */ if ((fS!=fO)) goto L_008106b0;
L_00810701:; BB(0x00810701);
    /* 00810701: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 00810706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810708: je 0x810758 */ if (fZ) goto L_00810758;
L_0081070a:; BB(0x0081070a);
    /* 0081070a: push 0x87c0 */ { u32 v = 0x87c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081070f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00810711: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810712: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x810717u); f_0086b5cc();
    /* 00810717: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081071a: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 0081071f: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 00810722: add eax, 0x87c4 */ {  u32 a = r_eax; u32 b = 0x87c4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00810727:; BB(0x00810727);
    /* 00810727: lea ecx, [ebx + 0x100] */ r_ecx = (u32)(r_ebx+0x100u);
    /* 0081072d: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00810730: lea ecx, [ebx + 0x101] */ r_ecx = (u32)(r_ebx+0x101u);
    /* 00810736: mov word ptr [edx + 0xc], cx */ W16((u32)(r_edx+0xcu), (u16)r_ecx);
    /* 0081073a: lea ecx, [ebx + 0x102] */ r_ecx = (u32)(r_ebx+0x102u);
    /* 00810740: mov word ptr [edx + 0x18], cx */ W16((u32)(r_edx+0x18u), (u16)r_ecx);
    /* 00810744: lea ecx, [ebx + 0x103] */ r_ecx = (u32)(r_ebx+0x103u);
    /* 0081074a: mov word ptr [edx + 0x24], cx */ W16((u32)(r_edx+0x24u), (u16)r_ecx);
    /* 0081074e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00810751: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810754: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00810756: ja 0x810727 */ if ((!fC&&!fZ)) goto L_00810727;
L_00810758:; BB(0x00810758);
    /* 00810758: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 0081075e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810760: mov dword ptr [0xab02b4], eax */ W32((u32)(0xab02b4u), r_eax);
    /* 00810765: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810767: mov dword ptr [0xab02b0], eax */ W32((u32)(0xab02b0u), r_eax);
    /* 0081076c: je 0x810810 */ if (fZ) goto L_00810810;
L_00810772:; BB(0x00810772);
    /* 00810772: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00810777: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0081077a: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00810780: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 00810784: mov ecx, dword ptr [0xab0248] */ r_ecx = R32((u32)(0xab0248u));
    /* 0081078a: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0081078e: mov ebx, dword ptr [0xab0248] */ r_ebx = R32((u32)(0xab0248u));
    /* 00810794: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 00810798: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 0081079e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 008107a2: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107a8: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 008107ac: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107b2: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 008107b6: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107bc: mov word ptr [edx + 0xe], ax */ W16((u32)(r_edx+0xeu), (u16)r_eax);
    /* 008107c0: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107c6: mov word ptr [edx + 0x10], ax */ W16((u32)(r_edx+0x10u), (u16)r_eax);
    /* 008107ca: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107d0: mov word ptr [edx + 0x12], ax */ W16((u32)(r_edx+0x12u), (u16)r_eax);
    /* 008107d4: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107da: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 008107de: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107e4: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 008107e8: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107ee: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 008107f2: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 008107f8: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 008107fc: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 00810802: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00810806: mov edx, dword ptr [0xab0248] */ r_edx = R32((u32)(0xab0248u));
    /* 0081080c: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
L_00810810:; BB(0x00810810);
    /* 00810810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810812: mov dword ptr [0xab0258], eax */ W32((u32)(0xab0258u), r_eax);
    /* 00810817: mov dword ptr [0xab0250], eax */ W32((u32)(0xab0250u), r_eax);
    /* 0081081c: mov ebx, 0x88 */ r_ebx = 0x88u;
    /* 00810821: mov dword ptr [0xab0254], eax */ W32((u32)(0xab0254u), r_eax);
    /* 00810826: mov dword ptr [0xab024c], eax */ W32((u32)(0xab024cu), r_eax);
    /* 0081082b: mov dword ptr [0xab027c], eax */ W32((u32)(0xab027cu), r_eax);
    /* 00810830: mov eax, 0x88 */ r_eax = 0x88u;
    /* 00810835: mov esi, eax */ r_esi = r_eax;
L_00810837:; BB(0x00810837);
    /* 00810837: mov edx, dword ptr [ebx + 0xab0184] */ r_edx = R32((u32)(r_ebx+0xab0184u));
    /* 0081083d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081083f: je 0x810857 */ if (fZ) goto L_00810857;
L_00810841:; BB(0x00810841);
    /* 00810841: mov ecx, dword ptr [0xab0270] */ r_ecx = R32((u32)(0xab0270u));
    /* 00810847: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00810848: call 0x77a2a0 */ r_esp -= 4; W32(r_esp, 0x81084du); f_0077a2a0();
    /* 0081084d: mov dword ptr [esi + 0xab0184], 0 */ W32((u32)(r_esi+0xab0184u), 0x0u);
L_00810857:; BB(0x00810857);
    /* 00810857: add esi, -8 */ {  u32 a = r_esi; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081085a: add ebx, -8 */ {  u32 a = r_ebx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081085d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0081085f: jge 0x810837 */ if ((fS==fO)) goto L_00810837;
L_00810861:; BB(0x00810861);
    /* 00810861: mov ebx, 0x88 */ r_ebx = 0x88u;
L_00810866:; BB(0x00810866);
    /* 00810866: mov eax, dword ptr [ebx + 0xab0180] */ r_eax = R32((u32)(r_ebx+0xab0180u));
    /* 0081086c: add ebx, -8 */ {  u32 a = r_ebx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081086f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810871: je 0x810889 */ if (fZ) goto L_00810889;
L_00810873:; BB(0x00810873);
    /* 00810873: mov ecx, dword ptr [0xab0270] */ r_ecx = R32((u32)(0xab0270u));
    /* 00810879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081087a: call 0x77a2a0 */ r_esp -= 4; W32(r_esp, 0x81087fu); f_0077a2a0();
    /* 0081087f: mov dword ptr [ebx + 0xab0188], 0 */ W32((u32)(r_ebx+0xab0188u), 0x0u);
L_00810889:; BB(0x00810889);
    /* 00810889: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0081088b: jge 0x810866 */ if ((fS==fO)) goto L_00810866;
L_0081088d:; BB(0x0081088d);
    /* 0081088d: mov ebx, 0x198 */ r_ebx = 0x198u;
L_00810892:; BB(0x00810892);
    /* 00810892: mov eax, dword ptr [ebx + 0xaaffd4] */ r_eax = R32((u32)(r_ebx+0xaaffd4u));
    /* 00810898: add ebx, -0x18 */ {  u32 a = r_ebx; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0081089b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081089d: je 0x8108b5 */ if (fZ) goto L_008108b5;
L_0081089f:; BB(0x0081089f);
    /* 0081089f: mov ecx, dword ptr [0xab026c] */ r_ecx = R32((u32)(0xab026cu));
    /* 008108a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008108a6: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x8108abu); f_007a8b04();
    /* 008108ab: mov dword ptr [ebx + 0xaaffec], 0 */ W32((u32)(r_ebx+0xaaffecu), 0x0u);
L_008108b5:; BB(0x008108b5);
    /* 008108b5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008108b7: jge 0x810892 */ if ((fS==fO)) goto L_00810892;
L_008108b9:; BB(0x008108b9);
    /* 008108b9: mov ebx, 0x198 */ r_ebx = 0x198u;
L_008108be:; BB(0x008108be);
    /* 008108be: mov eax, dword ptr [ebx + 0xaaffd0] */ r_eax = R32((u32)(r_ebx+0xaaffd0u));
    /* 008108c4: add ebx, -0x18 */ {  u32 a = r_ebx; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008108c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008108c9: je 0x8108e1 */ if (fZ) goto L_008108e1;
L_008108cb:; BB(0x008108cb);
    /* 008108cb: mov ecx, dword ptr [0xab026c] */ r_ecx = R32((u32)(0xab026cu));
    /* 008108d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008108d2: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x8108d7u); f_007a8b04();
    /* 008108d7: mov dword ptr [ebx + 0xaaffe8], 0 */ W32((u32)(r_ebx+0xaaffe8u), 0x0u);
L_008108e1:; BB(0x008108e1);
    /* 008108e1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008108e3: jge 0x8108be */ if ((fS==fO)) goto L_008108be;
L_008108e5:; BB(0x008108e5);
    /* 008108e5: push 0x1b0 */ { u32 v = 0x1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008108ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008108ec: push 0xaaffc0 */ { u32 v = 0xaaffc0u; r_esp -= 4; W32(r_esp, v); }
    /* 008108f1: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8108f6u); f_0086b688();
    /* 008108f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008108f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008108fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008108fb: ret  */ FN_RET(0x00810550); r_esp += 4; return;
}

void f_008108fc(void) /* sub_8108FC */
{
    FN_ENTER(0x008108fc);
    /* 008108fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008108fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008108fe: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00810901: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810903: movzx edx, word ptr [0xab02c0] */ r_edx = (u32)R16((u32)(0xab02c0u));
    /* 0081090a: mov dword ptr [0xab0258], eax */ W32((u32)(0xab0258u), r_eax);
    /* 0081090f: mov dword ptr [0xab0250], eax */ W32((u32)(0xab0250u), r_eax);
    /* 00810914: mov dword ptr [0xab0254], eax */ W32((u32)(0xab0254u), r_eax);
    /* 00810919: mov dword ptr [0xab024c], eax */ W32((u32)(0xab024cu), r_eax);
    /* 0081091e: and edx, 0xffe7 */ {  u32 a = r_edx; u32 b = 0xffe7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00810924: mov word ptr [0xab02c0], dx */ W16((u32)(0xab02c0u), (u16)r_edx);
    /* 0081092b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x810930u); f_00807ac0();
    /* 00810930: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 00810936: mov dword ptr [0xab0284], eax */ W32((u32)(0xab0284u), r_eax);
    /* 0081093b: mov dword ptr [0xab0280], edx */ W32((u32)(0xab0280u), r_edx);
    /* 00810941: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00810944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810945: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00810946: call 0x80bf14 */ r_esp -= 4; W32(r_esp, 0x81094bu); f_0080bf14();
    /* 0081094b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081094e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810950: jne 0x810962 */ if (!fZ) goto L_00810962;
L_00810952:; BB(0x00810952);
    /* 00810952: mov dword ptr [0xab0284], 0xffffffff */ W32((u32)(0xab0284u), 0xffffffffu);
    /* 0081095c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081095f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00810960: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00810961: ret  */ FN_RET(0x008108fc); r_esp += 4; return;
L_00810962:; BB(0x00810962);
    /* 00810962: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00810965: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00810969: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0081096d: mov esi, dword ptr [0xaafdd0] */ r_esi = R32((u32)(0xaafdd0u));
    /* 00810973: mov ecx, dword ptr [esi + edi*8] */ r_ecx = R32((u32)(r_esi+r_edi*8));
    /* 00810976: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810978: je 0x810a8c */ if (fZ) goto L_00810a8c;
L_0081097e:; BB(0x0081097e);
    /* 0081097e: mov esi, dword ptr [esi + edi*8 + 4] */ r_esi = R32((u32)(r_esi+r_edi*8+0x4u));
    /* 00810982: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810985: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810987: jl 0x810a8c */ if ((fS!=fO)) goto L_00810a8c;
L_0081098d:; BB(0x0081098d);
    /* 0081098d: mov esi, dword ptr [ecx + eax*8] */ r_esi = R32((u32)(r_ecx+r_eax*8));
    /* 00810990: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810992: je 0x810a8c */ if (fZ) goto L_00810a8c;
L_00810998:; BB(0x00810998);
    /* 00810998: mov eax, dword ptr [ecx + eax*8 + 4] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 0081099c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081099f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008109a1: jl 0x810a8c */ if ((fS!=fO)) goto L_00810a8c;
L_008109a7:; BB(0x008109a7);
    /* 008109a7: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x8109acu); f_0078b220();
    /* 008109ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008109ae: je 0x8109c7 */ if (fZ) goto L_008109c7;
L_008109b0:; BB(0x008109b0);
    /* 008109b0: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 008109b4: push 0x9808f0 */ { u32 v = 0x9808f0u; r_esp -= 4; W32(r_esp, v); }
    /* 008109b9: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008109bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008109bd: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x8109c2u); f_0078e574();
    /* 008109c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008109c5: jmp 0x8109dc */ goto L_008109dc;
L_008109c7:; BB(0x008109c7);
    /* 008109c7: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 008109cb: push 0x9808f8 */ { u32 v = 0x9808f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008109d0: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008109d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008109d4: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x8109d9u); f_0078e574();
    /* 008109d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008109dc:; BB(0x008109dc);
    /* 008109dc: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 008109e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008109e1: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x8109e6u); f_005b9328();
    /* 008109e6: mov edx, eax */ r_edx = r_eax;
    /* 008109e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008109eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008109ed: jl 0x810a8c */ if ((fS!=fO)) goto L_00810a8c;
L_008109f3:; BB(0x008109f3);
    /* 008109f3: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 008109f8: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 008109fa: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008109fd: mov dword ptr [0xab0254], edx */ W32((u32)(0xab0254u), r_edx);
    /* 00810a03: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810a05: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810a07: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00810a0a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810a0c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810a0e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810a10: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810a12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00810a13: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x810a18u); f_008581c5();
    /* 00810a18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00810a19: mov dword ptr [0xab0258], eax */ W32((u32)(0xab0258u), r_eax);
    /* 00810a1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810a20: je 0x810a8c */ if (fZ) goto L_00810a8c;
L_00810a22:; BB(0x00810a22);
    /* 00810a22: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00810a26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810a27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00810a28: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x810a2du); f_005b9910();
    /* 00810a2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00810a30: mov eax, dword ptr [0xab0254] */ r_eax = R32((u32)(0xab0254u));
    /* 00810a35: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00810a37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810a39: jle 0x810a8c */ if ((fZ||fS!=fO)) goto L_00810a8c;
L_00810a3b:; BB(0x00810a3b);
    /* 00810a3b: mov ecx, dword ptr [0xab0258] */ r_ecx = R32((u32)(0xab0258u));
    /* 00810a41: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00810a44: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810a46: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00810a49: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810a4b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810a4d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810a4f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00810a51:; BB(0x00810a51);
    /* 00810a51: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810a53: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x810a58u); f_0061cdb0();
    /* 00810a58: mov eax, dword ptr [0xab0258] */ r_eax = R32((u32)(0xab0258u));
    /* 00810a5d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00810a62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00810a64: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810a67: mov word ptr [esi + eax + 2], cx */ W16((u32)(r_esi+r_eax+0x2u), (u16)r_ecx);
    /* 00810a6c: mov ecx, dword ptr [0xab0258] */ r_ecx = R32((u32)(0xab0258u));
    /* 00810a72: mov word ptr [esi + ecx + 8], dx */ W16((u32)(r_esi+r_ecx+0x8u), (u16)r_edx);
    /* 00810a77: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00810a7c: mov word ptr [esi + ecx + 4], ax */ W16((u32)(r_esi+r_ecx+0x4u), (u16)r_eax);
    /* 00810a81: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810a84: cmp edi, dword ptr [0xab0254] */ {  u32 a = r_edi; u32 b = R32((u32)(0xab0254u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810a8a: jl 0x810a51 */ if ((fS!=fO)) goto L_00810a51;
L_00810a8c:; BB(0x00810a8c);
    /* 00810a8c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00810a8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00810a90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00810a91: ret  */ FN_RET(0x008108fc); r_esp += 4; return;
}

void f_00810a94(void) /* sub_810A94 */
{
    FN_ENTER(0x00810a94);
    /* 00810a94: call 0x810aac */ r_esp -= 4; W32(r_esp, 0x810a99u); f_00810aac();
    /* 00810a99: movzx eax, word ptr [0xab02c0] */ r_eax = (u32)R16((u32)(0xab02c0u));
    /* 00810aa0: and eax, 0xffe7 */ {  u32 a = r_eax; u32 b = 0xffe7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00810aa5: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 00810aab: ret  */ FN_RET(0x00810a94); r_esp += 4; return;
}

void f_00810aac(void) /* sub_810AAC */
{
    FN_ENTER(0x00810aac);
    /* 00810aac: mov eax, dword ptr [0xab0258] */ r_eax = R32((u32)(0xab0258u));
    /* 00810ab1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810ab3: je 0x810ac8 */ if (fZ) goto L_00810ac8;
L_00810ab5:; BB(0x00810ab5);
    /* 00810ab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810ab6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x810abbu); f_00857e98();
    /* 00810abb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00810abc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810abe: mov dword ptr [0xab0258], eax */ W32((u32)(0xab0258u), r_eax);
    /* 00810ac3: mov dword ptr [0xab0254], eax */ W32((u32)(0xab0254u), r_eax);
L_00810ac8:; BB(0x00810ac8);
    /* 00810ac8: mov eax, dword ptr [0xab0250] */ r_eax = R32((u32)(0xab0250u));
    /* 00810acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00810acf: je 0x810ae4 */ if (fZ) goto L_00810ae4;
L_00810ad1:; BB(0x00810ad1);
    /* 00810ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810ad2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x810ad7u); f_00857e98();
    /* 00810ad7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00810ad8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00810ada: mov dword ptr [0xab0250], eax */ W32((u32)(0xab0250u), r_eax);
    /* 00810adf: mov dword ptr [0xab024c], eax */ W32((u32)(0xab024cu), r_eax);
L_00810ae4:; BB(0x00810ae4);
    /* 00810ae4: ret  */ FN_RET(0x00810aac); r_esp += 4; return;
}

void f_00810ae8(void) /* sub_810AE8 */
{
    FN_ENTER(0x00810ae8);
    /* 00810ae8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00810ae9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00810aea: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00810aed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00810aef: mov edx, dword ptr [0xab0280] */ r_edx = R32((u32)(0xab0280u));
    /* 00810af5: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810af8: jg 0x810b5d */ if ((!fZ&&fS==fO)) goto L_00810b5d;
L_00810afa:; BB(0x00810afa);
    /* 00810afa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810afc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00810afe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810b00: jle 0x810b42 */ if ((fZ||fS!=fO)) goto L_00810b42;
L_00810b02:; BB(0x00810b02);
    /* 00810b02: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810b05: jl 0x810b34 */ if ((fS!=fO)) goto L_00810b34;
L_00810b07:; BB(0x00810b07);
    /* 00810b07: lea ebp, [edx - 6] */ r_ebp = (u32)(r_edx+0xfffffffau);
L_00810b0a:; BB(0x00810b0a);
    /* 00810b0a: add eax, dword ptr [edi*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b11: add eax, dword ptr [edi*4 + 0xaaff04] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b18: add eax, dword ptr [edi*4 + 0xaaff08] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b1f: add eax, dword ptr [edi*4 + 0xaaff0c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b26: add eax, dword ptr [edi*4 + 0xaaff10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b2d: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810b30: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810b32: jle 0x810b0a */ if ((fZ||fS!=fO)) goto L_00810b0a;
L_00810b34:; BB(0x00810b34);
    /* 00810b34: add eax, dword ptr [edi*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b3b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810b3e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810b40: jl 0x810b34 */ if ((fS!=fO)) goto L_00810b34;
L_00810b42:; BB(0x00810b42);
    /* 00810b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b44: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810b46: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00810b49: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810b4b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810b4d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810b4f: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810b51: add ebp, dword ptr [0xab0210] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810b57: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00810b5b: jmp 0x810b63 */ goto L_00810b63;
L_00810b5d:; BB(0x00810b5d);
    /* 00810b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810b5f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_00810b63:; BB(0x00810b63);
    /* 00810b63: mov edi, dword ptr [edx*4 + 0xaaff00] */ r_edi = R32((u32)(r_edx*4+0xaaff00u));
    /* 00810b6a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00810b6c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810b6e: jle 0x810c52 */ if ((fZ||fS!=fO)) goto L_00810c52;
L_00810b74:; BB(0x00810b74);
    /* 00810b74: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00810b78: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00810b7b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00810b7f: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_00810b83:; BB(0x00810b83);
    /* 00810b83: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00810b87: test al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00810b89: jne 0x810c39 */ if (!fZ) goto L_00810c39;
L_00810b8f:; BB(0x00810b8f);
    /* 00810b8f: movsx eax, word ptr [ebx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 00810b93: cmp ax, word ptr [esp + 0x1c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810b98: jne 0x810c39 */ if (!fZ) goto L_00810c39;
L_00810b9e:; BB(0x00810b9e);
    /* 00810b9e: movsx eax, word ptr [ebx + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xau));
    /* 00810ba2: cmp ax, word ptr [esp + 0x20] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810ba7: jne 0x810c39 */ if (!fZ) goto L_00810c39;
L_00810bad:; BB(0x00810bad);
    /* 00810bad: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00810bb0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810bb3: je 0x810be4 */ if (fZ) goto L_00810be4;
L_00810bb5:; BB(0x00810bb5);
    /* 00810bb5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00810bb7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x810bbcu); f_00807ac0();
    /* 00810bbc: mov edx, dword ptr [eax*4 + 0xa06be0] */ r_edx = R32((u32)(r_eax*4+0xa06be0u));
    /* 00810bc3: mov eax, edx */ r_eax = r_edx;
    /* 00810bc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810bc7: je 0x810be4 */ if (fZ) goto L_00810be4;
L_00810bc9:; BB(0x00810bc9);
    /* 00810bc9: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00810bcc: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810bcf: je 0x810be4 */ if (fZ) goto L_00810be4;
L_00810bd1:; BB(0x00810bd1);
    /* 00810bd1: cmp cx, word ptr [ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810bd4: je 0x810c5a */ if (fZ) goto L_00810c5a;
L_00810bda:; BB(0x00810bda);
    /* 00810bda: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810bdd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810be0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810be2: jne 0x810bc9 */ if (!fZ) goto L_00810bc9;
L_00810be4:; BB(0x00810be4);
    /* 00810be4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00810be6:; BB(0x00810be6);
    /* 00810be6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810be8: je 0x810c71 */ if (fZ) goto L_00810c71;
L_00810bee:; BB(0x00810bee);
    /* 00810bee: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 00810bf2: movzx esi, word ptr [ebx + 0xc] */ r_esi = (u32)R16((u32)(r_ebx+0xcu));
    /* 00810bf6: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 00810bf9: or edx, 0xffff0012 */ {  u32 a = r_edx; u32 b = 0xffff0012u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00810bff: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 00810c03: mov word ptr [ecx + 0x28], si */ W16((u32)(r_ecx+0x28u), (u16)r_esi);
    /* 00810c07: movzx edx, word ptr [ebx + 0xa] */ r_edx = (u32)R16((u32)(r_ebx+0xau));
    /* 00810c0b: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 00810c0f: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 00810c13: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 00810c17: mov dword ptr [ecx + 0x80], ebx */ W32((u32)(r_ecx+0x80u), r_ebx);
    /* 00810c1d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810c20: je 0x810c34 */ if (fZ) goto L_00810c34;
L_00810c22:; BB(0x00810c22);
    /* 00810c22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00810c24: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00810c26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810c28: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810c2a: add edx, dword ptr [0xab02bc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xab02bcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810c30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00810c31: call dword ptr [esi + 0x10] */ { u32 t = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, 0x810c34u); call_ind(t); }
L_00810c34:; BB(0x00810c34);
    /* 00810c34: add dword ptr [esp + 8], 1 */ { u32 ad = (u32)(r_esp+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00810c39:; BB(0x00810c39);
    /* 00810c39: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00810c3c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810c3f: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810c41: jl 0x810b83 */ if ((fS!=fO)) goto L_00810b83;
L_00810c47:; BB(0x00810c47);
    /* 00810c47: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00810c4b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00810c4e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00810c52:; BB(0x00810c52);
    /* 00810c52: mov eax, ecx */ r_eax = r_ecx;
    /* 00810c54: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00810c57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00810c58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00810c59: ret  */ FN_RET(0x00810ae8); r_esp += 4; return;
L_00810c5a:; BB(0x00810c5a);
    /* 00810c5a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00810c5d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00810c5f: jl 0x810be4 */ if ((fS!=fO)) goto L_00810be4;
L_00810c61:; BB(0x00810c61);
    /* 00810c61: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 00810c64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810c65: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x810c67u); call_ind(t); }
    /* 00810c67: mov ecx, eax */ r_ecx = r_eax;
    /* 00810c69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00810c6c: jmp 0x810be6 */ goto L_00810be6;
L_00810c71:; BB(0x00810c71);
    /* 00810c71: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 00810c78: jmp 0x810c39 */ goto L_00810c39;
}

void f_00810c7c(void) /* sub_810C7C */
{
    FN_ENTER(0x00810c7c);
    /* 00810c7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00810c7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00810c7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00810c7f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00810c82: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00810c86: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810c8c: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00810c91: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00810c96: jne 0x810c9d */ if (!fZ) goto L_00810c9d;
L_00810c98:; BB(0x00810c98);
    /* 00810c98: mov ecx, 1 */ r_ecx = 0x1u;
L_00810c9d:; BB(0x00810c9d);
    /* 00810c9d: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810ca0: jg 0x810d05 */ if ((!fZ&&fS==fO)) goto L_00810d05;
L_00810ca2:; BB(0x00810ca2);
    /* 00810ca2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810ca4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00810ca6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810ca8: jle 0x810cea */ if ((fZ||fS!=fO)) goto L_00810cea;
L_00810caa:; BB(0x00810caa);
    /* 00810caa: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810cad: jl 0x810cdc */ if ((fS!=fO)) goto L_00810cdc;
L_00810caf:; BB(0x00810caf);
    /* 00810caf: lea esi, [edx - 6] */ r_esi = (u32)(r_edx+0xfffffffau);
L_00810cb2:; BB(0x00810cb2);
    /* 00810cb2: add eax, dword ptr [edi*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810cb9: add eax, dword ptr [edi*4 + 0xaaff04] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810cc0: add eax, dword ptr [edi*4 + 0xaaff08] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810cc7: add eax, dword ptr [edi*4 + 0xaaff0c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810cce: add eax, dword ptr [edi*4 + 0xaaff10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810cd5: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810cd8: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810cda: jle 0x810cb2 */ if ((fZ||fS!=fO)) goto L_00810cb2;
L_00810cdc:; BB(0x00810cdc);
    /* 00810cdc: add eax, dword ptr [edi*4 + 0xaaff00] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaaff00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810ce3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810ce6: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810ce8: jl 0x810cdc */ if ((fS!=fO)) goto L_00810cdc;
L_00810cea:; BB(0x00810cea);
    /* 00810cea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810cec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810cee: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00810cf1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810cf3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810cf5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810cf7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810cf9: add esi, dword ptr [0xab0210] */ {  u32 a = r_esi; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810cff: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00810d03: jmp 0x810d0b */ goto L_00810d0b;
L_00810d05:; BB(0x00810d05);
    /* 00810d05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810d07: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_00810d0b:; BB(0x00810d0b);
    /* 00810d0b: mov edi, dword ptr [edx*4 + 0xaaff00] */ r_edi = R32((u32)(r_edx*4+0xaaff00u));
    /* 00810d12: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00810d14: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810d16: jle 0x810e17 */ if ((fZ||fS!=fO)) goto L_00810e17;
L_00810d1c:; BB(0x00810d1c);
    /* 00810d1c: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00810d20: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00810d24: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_00810d28:; BB(0x00810d28);
    /* 00810d28: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00810d2c: test al, 0xb */ {  u32 a = (u8)r_eax; u32 b = 0xbu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00810d2e: jne 0x810e05 */ if (!fZ) goto L_00810e05;
L_00810d34:; BB(0x00810d34);
    /* 00810d34: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00810d38: cmp dx, word ptr [esp + 0x28] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810d3d: jne 0x810e05 */ if (!fZ) goto L_00810e05;
L_00810d43:; BB(0x00810d43);
    /* 00810d43: movsx edx, word ptr [ebp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00810d47: cmp dx, word ptr [esp + 0x2c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810d4c: jne 0x810e05 */ if (!fZ) goto L_00810e05;
L_00810d52:; BB(0x00810d52);
    /* 00810d52: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00810d56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810d58: jne 0x810d6b */ if (!fZ) goto L_00810d6b;
L_00810d5a:; BB(0x00810d5a);
    /* 00810d5a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00810d5f: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 00810d63: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00810d66: jmp 0x810e05 */ goto L_00810e05;
L_00810d6b:; BB(0x00810d6b);
    /* 00810d6b: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00810d6f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810d72: je 0x810db2 */ if (fZ) goto L_00810db2;
L_00810d74:; BB(0x00810d74);
    /* 00810d74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810d76: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00810d7a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x810d7fu); f_00807ac0();
    /* 00810d7f: mov edx, dword ptr [eax*4 + 0xa06be0] */ r_edx = R32((u32)(r_eax*4+0xa06be0u));
    /* 00810d86: mov eax, edx */ r_eax = r_edx;
    /* 00810d88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810d8a: je 0x810db2 */ if (fZ) goto L_00810db2;
L_00810d8c:; BB(0x00810d8c);
    /* 00810d8c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00810d8f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00810d93:; BB(0x00810d93);
    /* 00810d93: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00810d96: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810d99: je 0x810e42 */ if (fZ) goto L_00810e42;
L_00810d9f:; BB(0x00810d9f);
    /* 00810d9f: cmp cx, word ptr [ebp] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_ebp)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810da3: je 0x810e20 */ if (fZ) goto L_00810e20;
L_00810da5:; BB(0x00810da5);
    /* 00810da5: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810da8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00810dab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810dad: jne 0x810d93 */ if (!fZ) goto L_00810d93;
L_00810daf:; BB(0x00810daf);
    /* 00810daf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00810db2:; BB(0x00810db2);
    /* 00810db2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00810db4:; BB(0x00810db4);
    /* 00810db4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810db6: je 0x810e4a */ if (fZ) goto L_00810e4a;
L_00810dbc:; BB(0x00810dbc);
    /* 00810dbc: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00810dc0: mov dword ptr [ebp + 0x40], ecx */ W32((u32)(r_ebp+0x40u), r_ecx);
    /* 00810dc3: or edx, 0xffff0012 */ {  u32 a = r_edx; u32 b = 0xffff0012u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00810dc9: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00810dcd: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 00810dd1: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 00810dd5: movzx edx, word ptr [ebp + 0xa] */ r_edx = (u32)R16((u32)(r_ebp+0xau));
    /* 00810dd9: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 00810ddd: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00810de1: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 00810de5: mov dword ptr [ecx + 0x80], ebp */ W32((u32)(r_ecx+0x80u), r_ebp);
    /* 00810deb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810dee: je 0x810e02 */ if (fZ) goto L_00810e02;
L_00810df0:; BB(0x00810df0);
    /* 00810df0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00810df2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00810df4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810df6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810df8: add eax, dword ptr [0xab02bc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab02bcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810dfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810dff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x810e02u); call_ind(t); }
L_00810e02:; BB(0x00810e02);
    /* 00810e02: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00810e05:; BB(0x00810e05);
    /* 00810e05: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810e08: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810e0b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810e0d: jl 0x810d28 */ if ((fS!=fO)) goto L_00810d28;
L_00810e13:; BB(0x00810e13);
    /* 00810e13: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_00810e17:; BB(0x00810e17);
    /* 00810e17: mov eax, ebx */ r_eax = r_ebx;
    /* 00810e19: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00810e1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00810e1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00810e1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00810e1f: ret  */ FN_RET(0x00810c7c); r_esp += 4; return;
L_00810e20:; BB(0x00810e20);
    /* 00810e20: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00810e23: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00810e27: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00810e2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00810e2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00810e30: jl 0x810db2 */ if ((fS!=fO)) goto L_00810db2;
L_00810e32:; BB(0x00810e32);
    /* 00810e32: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 00810e35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810e36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x810e38u); call_ind(t); }
    /* 00810e38: mov ecx, eax */ r_ecx = r_eax;
    /* 00810e3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00810e3d: jmp 0x810db4 */ goto L_00810db4;
L_00810e42:; BB(0x00810e42);
    /* 00810e42: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00810e45: jmp 0x810db2 */ goto L_00810db2;
L_00810e4a:; BB(0x00810e4a);
    /* 00810e4a: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 00810e51: jmp 0x810e05 */ goto L_00810e05;
}

void f_00810e54(void) /* sub_810E54 */
{
    FN_ENTER(0x00810e54);
    /* 00810e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00810e55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00810e56: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00810e59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00810e5b: mov eax, dword ptr [0xab0280] */ r_eax = R32((u32)(0xab0280u));
    /* 00810e60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00810e62: jl 0x810fdb */ if ((fS!=fO)) goto L_00810fdb;
L_00810e68:; BB(0x00810e68);
    /* 00810e68: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810e6b: jg 0x810ec6 */ if ((!fZ&&fS==fO)) goto L_00810ec6;
L_00810e6d:; BB(0x00810e6d);
    /* 00810e6d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00810e6f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00810e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810e73: jle 0x810eb5 */ if ((fZ||fS!=fO)) goto L_00810eb5;
L_00810e75:; BB(0x00810e75);
    /* 00810e75: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810e78: jl 0x810ea7 */ if ((fS!=fO)) goto L_00810ea7;
L_00810e7a:; BB(0x00810e7a);
    /* 00810e7a: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
L_00810e7d:; BB(0x00810e7d);
    /* 00810e7d: add edi, dword ptr [ebp*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810e84: add edi, dword ptr [ebp*4 + 0xaaff64] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810e8b: add edi, dword ptr [ebp*4 + 0xaaff68] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810e92: add edi, dword ptr [ebp*4 + 0xaaff6c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810e99: add edi, dword ptr [ebp*4 + 0xaaff70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810ea0: add ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810ea3: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810ea5: jle 0x810e7d */ if ((fZ||fS!=fO)) goto L_00810e7d;
L_00810ea7:; BB(0x00810ea7);
    /* 00810ea7: add edi, dword ptr [ebp*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00810eae: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810eb1: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810eb3: jl 0x810ea7 */ if ((fS!=fO)) goto L_00810ea7;
L_00810eb5:; BB(0x00810eb5);
    /* 00810eb5: lea ecx, [edi + edi*8] */ r_ecx = (u32)(r_edi+r_edi*8);
    /* 00810eb8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810eba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810ebc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810ebe: add ecx, dword ptr [0xab0214] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00810ec4: jmp 0x810ec8 */ goto L_00810ec8;
L_00810ec6:; BB(0x00810ec6);
    /* 00810ec6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00810ec8:; BB(0x00810ec8);
    /* 00810ec8: mov edi, dword ptr [eax*4 + 0xaaff60] */ r_edi = R32((u32)(r_eax*4+0xaaff60u));
    /* 00810ecf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00810ed1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00810ed3: jle 0x810faf */ if ((fZ||fS!=fO)) goto L_00810faf;
L_00810ed9:; BB(0x00810ed9);
    /* 00810ed9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00810edd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00810ee0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00810ee2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_00810ee6:; BB(0x00810ee6);
    /* 00810ee6: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00810eea: test al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00810eec: jne 0x810f96 */ if (!fZ) goto L_00810f96;
L_00810ef2:; BB(0x00810ef2);
    /* 00810ef2: movsx eax, word ptr [ebx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 00810ef6: cmp ax, word ptr [esp + 0x18] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810efb: jne 0x810f96 */ if (!fZ) goto L_00810f96;
L_00810f01:; BB(0x00810f01);
    /* 00810f01: movsx eax, word ptr [ebx + 0xe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xeu));
    /* 00810f05: cmp ax, word ptr [esp + 0x1c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810f0a: jne 0x810f96 */ if (!fZ) goto L_00810f96;
L_00810f10:; BB(0x00810f10);
    /* 00810f10: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00810f12: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x810f17u); f_00807ac0();
    /* 00810f17: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 00810f1e: mov eax, edx */ r_eax = r_edx;
    /* 00810f20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810f22: je 0x810f3f */ if (fZ) goto L_00810f3f;
L_00810f24:; BB(0x00810f24);
    /* 00810f24: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00810f27: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810f2a: je 0x810f3f */ if (fZ) goto L_00810f3f;
L_00810f2c:; BB(0x00810f2c);
    /* 00810f2c: cmp cx, word ptr [ebx] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00810f2f: je 0x810fc0 */ if (fZ) goto L_00810fc0;
L_00810f35:; BB(0x00810f35);
    /* 00810f35: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810f38: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810f3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810f3d: jne 0x810f24 */ if (!fZ) goto L_00810f24;
L_00810f3f:; BB(0x00810f3f);
    /* 00810f3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00810f41:; BB(0x00810f41);
    /* 00810f41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810f43: je 0x810fb7 */ if (fZ) goto L_00810fb7;
L_00810f45:; BB(0x00810f45);
    /* 00810f45: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 00810f49: movzx esi, word ptr [ebx + 0xc] */ r_esi = (u32)R16((u32)(r_ebx+0xcu));
    /* 00810f4d: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
    /* 00810f50: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00810f56: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 00810f5a: mov word ptr [ecx + 0x28], si */ W16((u32)(r_ecx+0x28u), (u16)r_esi);
    /* 00810f5e: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00810f62: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 00810f66: movsx esi, word ptr [ebx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 00810f6a: mov word ptr [ecx + 0x2c], si */ W16((u32)(r_ecx+0x2cu), (u16)r_esi);
    /* 00810f6e: mov dword ptr [ecx + 0x80], ebx */ W32((u32)(r_ecx+0x80u), r_ebx);
    /* 00810f74: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810f77: je 0x810f91 */ if (fZ) goto L_00810f91;
L_00810f79:; BB(0x00810f79);
    /* 00810f79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00810f7b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810f7d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00810f7f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00810f82: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810f84: add eax, dword ptr [0xab02b8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab02b8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810f8b: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x810f91u); call_ind(t); }
L_00810f91:; BB(0x00810f91);
    /* 00810f91: add dword ptr [esp + 8], 1 */ { u32 ad = (u32)(r_esp+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00810f96:; BB(0x00810f96);
    /* 00810f96: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00810f99: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00810f9c: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00810f9e: jl 0x810ee6 */ if ((fS!=fO)) goto L_00810ee6;
L_00810fa4:; BB(0x00810fa4);
    /* 00810fa4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00810fa8: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00810fab: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00810faf:; BB(0x00810faf);
    /* 00810faf: mov eax, edx */ r_eax = r_edx;
    /* 00810fb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00810fb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00810fb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00810fb6: ret  */ FN_RET(0x00810e54); r_esp += 4; return;
L_00810fb7:; BB(0x00810fb7);
    /* 00810fb7: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 00810fbe: jmp 0x810f96 */ goto L_00810f96;
L_00810fc0:; BB(0x00810fc0);
    /* 00810fc0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00810fc3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00810fc5: jl 0x810f3f */ if ((fS!=fO)) goto L_00810f3f;
L_00810fcb:; BB(0x00810fcb);
    /* 00810fcb: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 00810fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00810fcf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x810fd1u); call_ind(t); }
    /* 00810fd1: mov ecx, eax */ r_ecx = r_eax;
    /* 00810fd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00810fd6: jmp 0x810f41 */ goto L_00810f41;
L_00810fdb:; BB(0x00810fdb);
    /* 00810fdb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00810fdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00810fe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00810fe1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00810fe2: ret  */ FN_RET(0x00810e54); r_esp += 4; return;
}

void f_00810fe4(void) /* sub_810FE4 */
{
    FN_ENTER(0x00810fe4);
    /* 00810fe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00810fe5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00810fe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00810fe7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00810fea: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00810fee: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00810ff4: mov ebp, 0 */ r_ebp = 0x0u;
    /* 00810ff9: mov edx, 0 */ r_edx = 0x0u;
    /* 00810ffe: jne 0x811005 */ if (!fZ) goto L_00811005;
L_00811000:; BB(0x00811000);
    /* 00811000: mov edx, 1 */ r_edx = 0x1u;
L_00811005:; BB(0x00811005);
    /* 00811005: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811008: jg 0x811063 */ if ((!fZ&&fS==fO)) goto L_00811063;
L_0081100a:; BB(0x0081100a);
    /* 0081100a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0081100c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0081100e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811010: jle 0x811052 */ if ((fZ||fS!=fO)) goto L_00811052;
L_00811012:; BB(0x00811012);
    /* 00811012: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811015: jl 0x811044 */ if ((fS!=fO)) goto L_00811044;
L_00811017:; BB(0x00811017);
    /* 00811017: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
L_0081101a:; BB(0x0081101a);
    /* 0081101a: add edi, dword ptr [esi*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811021: add edi, dword ptr [esi*4 + 0xaaff64] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff64u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811028: add edi, dword ptr [esi*4 + 0xaaff68] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff68u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081102f: add edi, dword ptr [esi*4 + 0xaaff6c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff6cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00811036: add edi, dword ptr [esi*4 + 0xaaff70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081103d: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811040: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811042: jle 0x81101a */ if ((fZ||fS!=fO)) goto L_0081101a;
L_00811044:; BB(0x00811044);
    /* 00811044: add edi, dword ptr [esi*4 + 0xaaff60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xaaff60u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081104b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081104e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811050: jl 0x811044 */ if ((fS!=fO)) goto L_00811044;
L_00811052:; BB(0x00811052);
    /* 00811052: lea ecx, [edi + edi*8] */ r_ecx = (u32)(r_edi+r_edi*8);
    /* 00811055: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811057: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811059: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081105b: add ecx, dword ptr [0xab0214] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xab0214u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00811061: jmp 0x811065 */ goto L_00811065;
L_00811063:; BB(0x00811063);
    /* 00811063: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00811065:; BB(0x00811065);
    /* 00811065: mov edi, dword ptr [eax*4 + 0xaaff60] */ r_edi = R32((u32)(r_eax*4+0xaaff60u));
    /* 0081106c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0081106e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00811070: jle 0x811173 */ if ((fZ||fS!=fO)) goto L_00811173;
L_00811076:; BB(0x00811076);
    /* 00811076: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0081107a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0081107e: mov ebx, ecx */ r_ebx = r_ecx;
L_00811080:; BB(0x00811080);
    /* 00811080: movsx eax, word ptr [ebx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 00811084: test al, 0xb */ {  u32 a = (u8)r_eax; u32 b = 0xbu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00811086: jne 0x811161 */ if (!fZ) goto L_00811161;
L_0081108c:; BB(0x0081108c);
    /* 0081108c: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 00811090: cmp dx, word ptr [esp + 0x28] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00811095: jne 0x811161 */ if (!fZ) goto L_00811161;
L_0081109b:; BB(0x0081109b);
    /* 0081109b: movsx edx, word ptr [ebx + 0xe] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xeu));
    /* 0081109f: cmp dx, word ptr [esp + 0x2c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008110a4: jne 0x811161 */ if (!fZ) goto L_00811161;
L_008110aa:; BB(0x008110aa);
    /* 008110aa: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008110ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008110b0: jne 0x8110c3 */ if (!fZ) goto L_008110c3;
L_008110b2:; BB(0x008110b2);
    /* 008110b2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008110b7: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 008110bb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008110be: jmp 0x811161 */ goto L_00811161;
L_008110c3:; BB(0x008110c3);
    /* 008110c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008110c5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008110c9: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x8110ceu); f_00807ac0();
    /* 008110ce: mov edx, dword ptr [eax*4 + 0x9fba60] */ r_edx = R32((u32)(r_eax*4+0x9fba60u));
    /* 008110d5: mov eax, edx */ r_eax = r_edx;
    /* 008110d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008110d9: je 0x811104 */ if (fZ) goto L_00811104;
L_008110db:; BB(0x008110db);
    /* 008110db: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008110df: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_008110e2:; BB(0x008110e2);
    /* 008110e2: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008110e5: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008110e8: je 0x8111a9 */ if (fZ) goto L_008111a9;
L_008110ee:; BB(0x008110ee);
    /* 008110ee: cmp bp, word ptr [ebx] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_ebx)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008110f1: je 0x811185 */ if (fZ) goto L_00811185;
L_008110f7:; BB(0x008110f7);
    /* 008110f7: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008110fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008110fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008110ff: jne 0x8110e2 */ if (!fZ) goto L_008110e2;
L_00811101:; BB(0x00811101);
    /* 00811101: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00811104:; BB(0x00811104);
    /* 00811104: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00811106:; BB(0x00811106);
    /* 00811106: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00811108: je 0x81117c */ if (fZ) goto L_0081117c;
L_0081110a:; BB(0x0081110a);
    /* 0081110a: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0081110e: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
    /* 00811111: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00811117: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 0081111b: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 0081111f: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 00811123: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00811127: mov word ptr [ecx + 0x2a], dx */ W16((u32)(r_ecx+0x2au), (u16)r_edx);
    /* 0081112b: movsx eax, word ptr [ebx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 0081112f: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 00811133: mov dword ptr [ecx + 0x80], ebx */ W32((u32)(r_ecx+0x80u), r_ebx);
    /* 00811139: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081113c: je 0x81115e */ if (fZ) goto L_0081115e;
L_0081113e:; BB(0x0081113e);
    /* 0081113e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00811140: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00811144: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00811146: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00811148: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0081114b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081114d: add esi, dword ptr [0xab02b8] */ {  u32 a = r_esi; u32 b = R32((u32)(0xab02b8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00811154: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00811158: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x81115eu); call_ind(t); }
L_0081115e:; BB(0x0081115e);
    /* 0081115e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00811161:; BB(0x00811161);
    /* 00811161: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00811164: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00811167: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00811169: jl 0x811080 */ if ((fS!=fO)) goto L_00811080;
L_0081116f:; BB(0x0081116f);
    /* 0081116f: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00811173:; BB(0x00811173);
    /* 00811173: mov eax, ebp */ r_eax = r_ebp;
    /* 00811175: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00811178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00811179: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081117a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081117b: ret  */ FN_RET(0x00810fe4); r_esp += 4; return;
L_0081117c:; BB(0x0081117c);
    /* 0081117c: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 00811183: jmp 0x811161 */ goto L_00811161;
L_00811185:; BB(0x00811185);
    /* 00811185: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00811188: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0081118b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0081118f: mov eax, ecx */ r_eax = r_ecx;
    /* 00811191: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00811193: jl 0x811104 */ if ((fS!=fO)) goto L_00811104;
L_00811199:; BB(0x00811199);
    /* 00811199: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0081119c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081119d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x81119fu); call_ind(t); }
    /* 0081119f: mov ecx, eax */ r_ecx = r_eax;
    /* 008111a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008111a4: jmp 0x811106 */ goto L_00811106;
L_008111a9:; BB(0x008111a9);
    /* 008111a9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008111ac: jmp 0x811104 */ goto L_00811104;
}

