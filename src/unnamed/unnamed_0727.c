#include "protos.h"

void f_00727041(void)
{
    FN_ENTER(0x00727041);
    /* 00727041: jmp dword ptr [esi - 0x77] */ { u32 t = R32((u32)(r_esi+0xffffff89u)); jmp_ind(t); return; }
}

void f_00727078(void) /* sub_727078 */
{
    FN_ENTER(0x00727078);
    /* 00727078: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00727079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072707a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072707b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072707c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072707f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00727081: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00727085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727086: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72708bu); f_0068d5a8();
    /* 0072708b: mov ebx, eax */ r_ebx = r_eax;
    /* 0072708d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00727090: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727092: jne 0x72709c */ if (!fZ) goto L_0072709c;
L_00727094:; BB(0x00727094);
    /* 00727094: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00727097: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727099: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072709a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072709b: ret  */ FN_RET(0x00727078); r_esp += 4; return;
L_0072709c:; BB(0x0072709c);
    /* 0072709c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072709e: call 0x726f38 */ r_esp -= 4; W32(r_esp, 0x7270a3u); f_00726f38();
    /* 007270a3: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007270a6: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 007270a9: mov dword ptr [ebp + 0xb0], 0x725b58 */ W32((u32)(r_ebp+0xb0u), 0x725b58u);
    /* 007270b3: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 007270b6: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 007270b9: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 007270bd: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 007270c0: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 007270c4: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 007270c7: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007270cb: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 007270ce: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 007270d1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007270d4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007270d8: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x7270ddu); f_005d2890();
    /* 007270dd: mov edi, eax */ r_edi = r_eax;
    /* 007270df: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 007270e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007270e4: push dword ptr [ebp + 0x68] */ { u32 v = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 007270e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007270e8: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x7270edu); f_005c9e40();
    /* 007270ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007270f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007270f2: jne 0x727101 */ if (!fZ) goto L_00727101;
L_007270f4:; BB(0x007270f4);
    /* 007270f4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007270f8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007270fb: jne 0x7271b2 */ if (!fZ) goto L_007271b2;
L_00727101:; BB(0x00727101);
    /* 00727101: movzx edx, byte ptr [edi + 0x14] */ r_edx = (u32)R8((u32)(r_edi+0x14u));
    /* 00727105: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727107: je 0x727146 */ if (fZ) goto L_00727146;
L_00727109:; BB(0x00727109);
    /* 00727109: push 0x43680000 */ { u32 v = 0x43680000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072710e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00727110: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00727114: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x727119u); f_0072e7e4();
    /* 00727119: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0072711d: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x727122u); f_0072e0e4();
    /* 00727122: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00727126: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x72712bu); f_0072e0e4();
    /* 0072712b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0072712f: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x727134u); f_0072e0e4();
    /* 00727134: movzx eax, byte ptr [edi + 0x14] */ r_eax = (u32)R8((u32)(r_edi+0x14u));
    /* 00727138: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072713b: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0072713e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00727141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727142: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727143: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00727144: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00727145: ret  */ FN_RET(0x00727078); r_esp += 4; return;
L_00727146:; BB(0x00727146);
    /* 00727146: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0072714a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0072714e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00727152: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00727156: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072715b: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 0072715f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00727162: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00727166: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0072716c: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 00727170: movzx ebp, word ptr [esi + 4] */ r_ebp = (u32)R16((u32)(r_esi+0x4u));
    /* 00727174: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0072717a: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
    /* 0072717e: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 00727182: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00727188: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 0072718c: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00727190: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727195: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00727199: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072719d: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 007271a1: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007271a6: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 007271aa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007271ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007271ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007271af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007271b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007271b1: ret  */ FN_RET(0x00727078); r_esp += 4; return;
L_007271b2:; BB(0x007271b2);
    /* 007271b2: push 0x43040000 */ { u32 v = 0x43040000u; r_esp -= 4; W32(r_esp, v); }
    /* 007271b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007271b9: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007271bd: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7271c2u); f_0072e7e4();
    /* 007271c2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007271c6: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 007271ca: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007271cd: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 007271d1: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007271d6: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 007271da: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007271de: movzx ecx, word ptr [esi + 4] */ r_ecx = (u32)R16((u32)(r_esi+0x4u));
    /* 007271e2: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007271e8: mov word ptr [esi + 4], cx */ W16((u32)(r_esi+0x4u), (u16)r_ecx);
    /* 007271ec: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 007271f0: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 007271f6: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
    /* 007271fa: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 007271fe: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00727204: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00727208: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0072720c: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727211: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00727215: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00727218: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072721a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072721b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072721c: ret  */ FN_RET(0x00727078); r_esp += 4; return;
}

void f_00727220(void) /* sub_727220 */
{
    FN_ENTER(0x00727220);
    /* 00727220: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00727221: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00727222: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00727223: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727224: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00727227: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00727229: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 0072722d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072722e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x727233u); f_0068d5a8();
    /* 00727233: mov ebx, eax */ r_ebx = r_eax;
    /* 00727235: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00727238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072723a: jne 0x727244 */ if (!fZ) goto L_00727244;
L_0072723c:; BB(0x0072723c);
    /* 0072723c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072723f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727240: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727241: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00727242: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00727243: ret  */ FN_RET(0x00727220); r_esp += 4; return;
L_00727244:; BB(0x00727244);
    /* 00727244: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00727246: call 0x726f38 */ r_esp -= 4; W32(r_esp, 0x72724bu); f_00726f38();
    /* 0072724b: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0072724e: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 00727251: mov dword ptr [ebp + 0xb0], 0x7257d4 */ W32((u32)(r_ebp+0xb0u), 0x7257d4u);
    /* 0072725b: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 0072725e: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00727261: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00727265: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 00727268: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0072726c: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 0072726f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00727273: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00727276: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 00727279: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0072727c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00727280: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x727285u); f_005d2890();
    /* 00727285: mov edi, eax */ r_edi = r_eax;
    /* 00727287: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0072728b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072728c: push dword ptr [ebp + 0x68] */ { u32 v = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072728f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727290: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x727295u); f_005c9e40();
    /* 00727295: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00727298: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072729a: jne 0x7272a9 */ if (!fZ) goto L_007272a9;
L_0072729c:; BB(0x0072729c);
    /* 0072729c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007272a0: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007272a3: jne 0x7273e3 */ if (!fZ) goto L_007273e3;
L_007272a9:; BB(0x007272a9);
    /* 007272a9: movzx edx, word ptr [edi + 0x12] */ r_edx = (u32)R16((u32)(r_edi+0x12u));
    /* 007272ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007272af: jne 0x7273a9 */ if (!fZ) goto L_007273a9;
L_007272b5:; BB(0x007272b5);
    /* 007272b5: movzx edx, word ptr [edi + 0x14] */ r_edx = (u32)R16((u32)(r_edi+0x14u));
    /* 007272b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007272bb: jne 0x72736f */ if (!fZ) goto L_0072736f;
L_007272c1:; BB(0x007272c1);
    /* 007272c1: movzx edx, word ptr [edi + 0x16] */ r_edx = (u32)R16((u32)(r_edi+0x16u));
    /* 007272c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007272c7: je 0x727303 */ if (fZ) goto L_00727303;
L_007272c9:; BB(0x007272c9);
    /* 007272c9: push 0x43540000 */ { u32 v = 0x43540000u; r_esp -= 4; W32(r_esp, v); }
    /* 007272ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007272d0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007272d4: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7272d9u); f_0072e7e4();
    /* 007272d9: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007272dd: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7272e2u); f_0072e0e4();
    /* 007272e2: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007272e6: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7272ebu); f_0072e0e4();
    /* 007272eb: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007272ef: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7272f4u); f_0072e0e4();
    /* 007272f4: movzx eax, word ptr [edi + 0x16] */ r_eax = (u32)R16((u32)(r_edi+0x16u));
    /* 007272f8: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007272fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007272fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007272ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727300: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00727301: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00727302: ret  */ FN_RET(0x00727220); r_esp += 4; return;
L_00727303:; BB(0x00727303);
    /* 00727303: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00727307: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0072730b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0072730f: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00727313: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727318: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 0072731c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0072731f: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00727323: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00727329: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 0072732d: movzx ebp, word ptr [esi + 4] */ r_ebp = (u32)R16((u32)(r_esi+0x4u));
    /* 00727331: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00727337: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
    /* 0072733b: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 0072733f: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00727345: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00727349: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0072734d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727352: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00727356: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072735a: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0072735e: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727363: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00727367: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072736a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072736b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072736c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072736d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072736e: ret  */ FN_RET(0x00727220); r_esp += 4; return;
L_0072736f:; BB(0x0072736f);
    /* 0072736f: push 0x43400000 */ { u32 v = 0x43400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00727374: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00727376: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072737a: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x72737fu); f_0072e7e4();
    /* 0072737f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00727383: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x727388u); f_0072e0e4();
    /* 00727388: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0072738c: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x727391u); f_0072e0e4();
    /* 00727391: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00727395: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x72739au); f_0072e0e4();
    /* 0072739a: movzx eax, word ptr [edi + 0x14] */ r_eax = (u32)R16((u32)(r_edi+0x14u));
    /* 0072739e: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007273a1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007273a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007273a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007273a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007273a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007273a8: ret  */ FN_RET(0x00727220); r_esp += 4; return;
L_007273a9:; BB(0x007273a9);
    /* 007273a9: push 0x432c0000 */ { u32 v = 0x432c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007273ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007273b0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007273b4: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7273b9u); f_0072e7e4();
    /* 007273b9: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007273bd: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7273c2u); f_0072e0e4();
    /* 007273c2: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007273c6: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7273cbu); f_0072e0e4();
    /* 007273cb: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007273cf: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7273d4u); f_0072e0e4();
    /* 007273d4: movzx eax, word ptr [edi + 0x12] */ r_eax = (u32)R16((u32)(r_edi+0x12u));
    /* 007273d8: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007273db: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007273de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007273df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007273e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007273e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007273e2: ret  */ FN_RET(0x00727220); r_esp += 4; return;
L_007273e3:; BB(0x007273e3);
    /* 007273e3: push 0x43040000 */ { u32 v = 0x43040000u; r_esp -= 4; W32(r_esp, v); }
    /* 007273e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007273ea: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007273ee: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7273f3u); f_0072e7e4();
    /* 007273f3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007273f7: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 007273fb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 007273fe: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00727402: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727407: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 0072740b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072740f: movzx ecx, word ptr [esi + 4] */ r_ecx = (u32)R16((u32)(r_esi+0x4u));
    /* 00727413: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00727419: mov word ptr [esi + 4], cx */ W16((u32)(r_esi+0x4u), (u16)r_ecx);
    /* 0072741d: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00727421: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00727427: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
    /* 0072742b: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 0072742f: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00727435: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 00727439: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0072743d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727442: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00727446: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00727449: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072744a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072744b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072744c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072744d: ret  */ FN_RET(0x00727220); r_esp += 4; return;
}

void f_00727450(void) /* sub_727450 */
{
    FN_ENTER(0x00727450);
    /* 00727450: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00727451: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727452: mov edi, ecx */ r_edi = r_ecx;
    /* 00727454: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 00727457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727458: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x72745du); f_0072a590();
    /* 0072745d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072745e: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00727464: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727467: je 0x7275b0 */ if (fZ) goto L_007275b0;
L_0072746d:; BB(0x0072746d);
    /* 0072746d: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 00727470: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 00727473: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00727477: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072747a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072747c: je 0x727483 */ if (fZ) goto L_00727483;
L_0072747e:; BB(0x0072747e);
    /* 0072747e: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00727483:; BB(0x00727483);
    /* 00727483: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 00727486: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727488: jne 0x7274c7 */ if (!fZ) goto L_007274c7;
L_0072748a:; BB(0x0072748a);
    /* 0072748a: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00727490: cmp edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727496: je 0x727555 */ if (fZ) goto L_00727555;
L_0072749c:; BB(0x0072749c);
    /* 0072749c: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007274a1: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007274a6: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 007274a9: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007274ac: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007274af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007274b0: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007274b2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7274b7u); f_00792fe8();
    /* 007274b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007274ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007274bb: mov ecx, edi */ r_ecx = r_edi;
    /* 007274bd: call 0x7265b0 */ r_esp -= 4; W32(r_esp, 0x7274c2u); f_007265b0();
    /* 007274c2: jmp 0x72754b */ goto L_0072754b;
L_007274c7:; BB(0x007274c7);
    /* 007274c7: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 007274ca: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x7274cfu); f_005d281c();
    /* 007274cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007274d1: jne 0x727533 */ if (!fZ) goto L_00727533;
L_007274d3:; BB(0x007274d3);
    /* 007274d3: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 007274d6: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 007274d9: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 007274dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007274df: je 0x7275a5 */ if (fZ) goto L_007275a5;
L_007274e5:; BB(0x007274e5);
    /* 007274e5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007274e8: je 0x72751e */ if (fZ) goto L_0072751e;
L_007274ea:; BB(0x007274ea);
    /* 007274ea: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007274ed: jne 0x7274fa */ if (!fZ) goto L_007274fa;
L_007274ef:; BB(0x007274ef);
    /* 007274ef: mov ecx, edi */ r_ecx = r_edi;
    /* 007274f1: call dword ptr [ebx*4 + 0x9f2544] */ { u32 t = R32((u32)(r_ebx*4+0x9f2544u)); r_esp -= 4; W32(r_esp, 0x7274f8u); call_ind(t); }
    /* 007274f8: jmp 0x72754b */ goto L_0072754b;
L_007274fa:; BB(0x007274fa);
    /* 007274fa: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007274fd: jne 0x72754b */ if (!fZ) goto L_0072754b;
L_007274ff:; BB(0x007274ff);
    /* 007274ff: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00727503: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00727508: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072750d: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00727510: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727513: je 0x727577 */ if (fZ) goto L_00727577;
L_00727515:; BB(0x00727515);
    /* 00727515: mov ecx, edi */ r_ecx = r_edi;
    /* 00727517: call 0x7265f0 */ r_esp -= 4; W32(r_esp, 0x72751cu); f_007265f0();
    /* 0072751c: jmp 0x72754b */ goto L_0072754b;
L_0072751e:; BB(0x0072751e);
    /* 0072751e: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727521: je 0x72758b */ if (fZ) goto L_0072758b;
L_00727523:; BB(0x00727523);
    /* 00727523: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727526: je 0x727580 */ if (fZ) goto L_00727580;
L_00727528:; BB(0x00727528);
    /* 00727528: mov ecx, edi */ r_ecx = r_edi;
    /* 0072752a: call dword ptr [ebx*4 + 0x9f2538] */ { u32 t = R32((u32)(r_ebx*4+0x9f2538u)); r_esp -= 4; W32(r_esp, 0x727531u); call_ind(t); }
    /* 00727531: jmp 0x72754b */ goto L_0072754b;
L_00727533:; BB(0x00727533);
    /* 00727533: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00727537: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072753c: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727541: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00727544: mov ecx, edi */ r_ecx = r_edi;
    /* 00727546: call 0x7265f0 */ r_esp -= 4; W32(r_esp, 0x72754bu); f_007265f0();
L_0072754b:; BB(0x0072754b);
    /* 0072754b: mov ecx, edi */ r_ecx = r_edi;
    /* 0072754d: call 0x725ee8 */ r_esp -= 4; W32(r_esp, 0x727552u); f_00725ee8();
    /* 00727552: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727553: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00727554: ret  */ FN_RET(0x00727450); r_esp += 4; return;
L_00727555:; BB(0x00727555);
    /* 00727555: push 0x135 */ { u32 v = 0x135u; r_esp -= 4; W32(r_esp, v); }
    /* 0072755a: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072755f: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727564: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00727567: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72756cu); f_0079317c();
    /* 0072756c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072756d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072756e: mov ecx, edi */ r_ecx = r_edi;
    /* 00727570: call 0x7265b0 */ r_esp -= 4; W32(r_esp, 0x727575u); f_007265b0();
    /* 00727575: jmp 0x72754b */ goto L_0072754b;
L_00727577:; BB(0x00727577);
    /* 00727577: mov ecx, edi */ r_ecx = r_edi;
    /* 00727579: call 0x726608 */ r_esp -= 4; W32(r_esp, 0x72757eu); f_00726608();
    /* 0072757e: jmp 0x72754b */ goto L_0072754b;
L_00727580:; BB(0x00727580);
    /* 00727580: mov ecx, edi */ r_ecx = r_edi;
    /* 00727582: call dword ptr [ebx*4 + 0x9f252c] */ { u32 t = R32((u32)(r_ebx*4+0x9f252cu)); r_esp -= 4; W32(r_esp, 0x727589u); call_ind(t); }
    /* 00727589: jmp 0x72754b */ goto L_0072754b;
L_0072758b:; BB(0x0072758b);
    /* 0072758b: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 0072758f: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00727594: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727599: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 0072759c: mov ecx, edi */ r_ecx = r_edi;
    /* 0072759e: call 0x726780 */ r_esp -= 4; W32(r_esp, 0x7275a3u); f_00726780();
    /* 007275a3: jmp 0x72754b */ goto L_0072754b;
L_007275a5:; BB(0x007275a5);
    /* 007275a5: mov ecx, edi */ r_ecx = r_edi;
    /* 007275a7: call dword ptr [ebx*4 + 0x9f2520] */ { u32 t = R32((u32)(r_ebx*4+0x9f2520u)); r_esp -= 4; W32(r_esp, 0x7275aeu); call_ind(t); }
    /* 007275ae: jmp 0x72754b */ goto L_0072754b;
L_007275b0:; BB(0x007275b0);
    /* 007275b0: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 007275b4: and eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007275b9: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 007275bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007275bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007275be: ret  */ FN_RET(0x00727450); r_esp += 4; return;
}

void f_007275c0(void) /* sub_7275C0 */
{
    FN_ENTER(0x007275c0);
    /* 007275c0: movzx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)R8((u32)(r_ecx+0x60u));
    /* 007275c4: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 007275ca: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007275cd: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007275d0: je 0x7275e2 */ if (fZ) goto L_007275e2;
L_007275d2:; BB(0x007275d2);
    /* 007275d2: mov byte ptr [ecx + 0x60], al */ W8((u32)(r_ecx+0x60u), (u8)r_eax);
    /* 007275d5: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 007275d8: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 007275db: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 007275e1: ret  */ FN_RET(0x007275c0); r_esp += 4; return;
L_007275e2:; BB(0x007275e2);
    /* 007275e2: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 007275e8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007275eb: je 0x7275fd */ if (fZ) goto L_007275fd;
L_007275ed:; BB(0x007275ed);
    /* 007275ed: mov byte ptr [ecx + 0x60], al */ W8((u32)(r_ecx+0x60u), (u8)r_eax);
    /* 007275f0: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 007275f3: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 007275f6: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 007275fc: ret  */ FN_RET(0x007275c0); r_esp += 4; return;
L_007275fd:; BB(0x007275fd);
    /* 007275fd: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 00727604: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00727609: mov byte ptr [ecx + 0x60], al */ W8((u32)(r_ecx+0x60u), (u8)r_eax);
    /* 0072760c: mov dword ptr [ecx + 0x9c], 0xffffffff */ W32((u32)(r_ecx+0x9cu), 0xffffffffu);
    /* 00727616: ret  */ FN_RET(0x007275c0); r_esp += 4; return;
}

void f_00727618(void) /* sub_727618 */
{
    FN_ENTER(0x00727618);
    /* 00727618: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727619: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072761b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072761d: call 0x72763c */ r_esp -= 4; W32(r_esp, 0x727622u); f_0072763c();
    /* 00727622: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00727626: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00727628: jne 0x72762e */ if (!fZ) goto L_0072762e;
L_0072762a:; BB(0x0072762a);
    /* 0072762a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072762b: ret 4 */ FN_RET(0x00727618); r_esp += 8; return;
L_0072762e:; BB(0x0072762e);
    /* 0072762e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072762f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x727634u); f_005c2f74();
    /* 00727634: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00727635: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727636: ret 4 */ FN_RET(0x00727618); r_esp += 8; return;
}

void f_0072763c(void) /* sub_72763C */
{
    FN_ENTER(0x0072763c);
    /* 0072763c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072763d: mov ebp, esp */ r_ebp = r_esp;
    /* 0072763f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00727641: push 0x8f0f88 */ { u32 v = 0x8f0f88u; r_esp -= 4; W32(r_esp, v); }
    /* 00727646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072764c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072764d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00727654: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00727657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072765a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072765d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00727660: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00727663: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00727666: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072766d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00727670: mov dword ptr [ecx], 0xb400d0 */ W32((u32)(r_ecx), 0xb400d0u);
    /* 00727676: call 0x7288ec */ r_esp -= 4; W32(r_esp, 0x72767bu); f_007288ec();
    /* 0072767b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00727682: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00727685: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x72768au); f_008171e8();
    /* 0072768a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072768d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00727694: mov esp, ebp */ r_esp = r_ebp;
    /* 00727696: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727697: ret  */ FN_RET(0x0072763c); r_esp += 4; return;
}

void f_00727670(void)
{
    FN_ENTER(0x00727670);
    /* 00727670: mov dword ptr [ecx], 0xb400d0 */ W32((u32)(r_ecx), 0xb400d0u);
    /* 00727676: call 0x7288ec */ r_esp -= 4; W32(r_esp, 0x72767bu); f_007288ec();
    /* 0072767b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00727682: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00727685: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x72768au); f_008171e8();
    /* 0072768a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072768d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00727694: mov esp, ebp */ r_esp = r_ebp;
    /* 00727696: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727697: ret  */ FN_RET(0x00727670); r_esp += 4; return;
}

void f_00727698(void) /* sub_727698 */
{
    FN_ENTER(0x00727698);
    /* 00727698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00727699: mov ebp, esp */ r_ebp = r_esp;
    /* 0072769b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072769d: push 0x8f0fa4 */ { u32 v = 0x8f0fa4u; r_esp -= 4; W32(r_esp, v); }
    /* 007276a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007276a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007276a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007276b0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007276b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007276b6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007276b9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007276bc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007276bf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007276c2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007276c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007276cc: mov eax, ecx */ r_eax = r_ecx;
    /* 007276ce: mov dword ptr [eax], 0xb400c0 */ W32((u32)(r_eax), 0xb400c0u);
    /* 007276d4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007276d6:; BB(0x007276d6);
    /* 007276d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007276d9: movsx edx, byte ptr [ebx + eax + 0x68] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+r_eax+0x68u));
    /* 007276de: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007276e1: je 0x727716 */ if (fZ) goto L_00727716;
L_007276e3:; BB(0x007276e3);
    /* 007276e3: mov esi, eax */ r_esi = r_eax;
    /* 007276e5: mov edi, dword ptr [esi + 0x64] */ r_edi = R32((u32)(r_esi+0x64u));
    /* 007276e8: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 007276eb: mov ecx, dword ptr [edi + eax*4] */ r_ecx = R32((u32)(r_edi+r_eax*4));
    /* 007276ee: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007276f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007276f3: je 0x7276fa */ if (fZ) goto L_007276fa;
L_007276f5:; BB(0x007276f5);
    /* 007276f5: call 0x7288ec */ r_esp -= 4; W32(r_esp, 0x7276fau); f_007288ec();
L_007276fa:; BB(0x007276fa);
    /* 007276fa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007276fc:; BB(0x007276fc);
    /* 007276fc: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 007276ff: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00727702: lea ecx, [esi + edx] */ r_ecx = (u32)(r_esi+r_edx);
    /* 00727705: cmp al, byte ptr [ecx + 0x68] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00727708: je 0x7277be */ if (fZ) goto L_007277be;
L_0072770e:; BB(0x0072770e);
    /* 0072770e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00727711: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00727714: jl 0x7276fc */ if ((fS!=fO)) goto L_007276fc;
L_00727716:; BB(0x00727716);
    /* 00727716: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00727719: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072771c: jl 0x7276d6 */ if ((fS!=fO)) goto L_007276d6;
L_0072771e:; BB(0x0072771e);
    /* 0072771e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00727721: movsx edx, byte ptr [eax + 0x6b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x6bu));
    /* 00727725: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00727727: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00727729: jle 0x727759 */ if ((fZ||fS!=fO)) goto L_00727759;
L_0072772b:; BB(0x0072772b);
    /* 0072772b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072772e: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00727731: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 00727734: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727736: je 0x727744 */ if (fZ) goto L_00727744;
L_00727738:; BB(0x00727738);
    /* 00727738: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072773a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0072773c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x72773eu); call_ind(t); }
    /* 0072773e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00727741: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
L_00727744:; BB(0x00727744);
    /* 00727744: mov dword ptr [eax + ebx*4], 0 */ W32((u32)(r_eax+r_ebx*4), 0x0u);
    /* 0072774b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072774e: movsx edx, byte ptr [eax + 0x6b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x6bu));
    /* 00727752: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00727755: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00727757: jl 0x72772b */ if ((fS!=fO)) goto L_0072772b;
L_00727759:; BB(0x00727759);
    /* 00727759: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0072775c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072775e: je 0x727767 */ if (fZ) goto L_00727767;
L_00727760:; BB(0x00727760);
    /* 00727760: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00727762: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x727767u); f_00721474();
L_00727767:; BB(0x00727767);
    /* 00727767: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072776a: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0072776d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072776f: je 0x727777 */ if (fZ) goto L_00727777;
L_00727771:; BB(0x00727771);
    /* 00727771: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00727773: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00727775: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x727777u); call_ind(t); }
L_00727777:; BB(0x00727777);
    /* 00727777: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072777a: push dword ptr [eax + 0x64] */ { u32 v = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072777d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x727782u); f_00857e98();
    /* 00727782: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00727783: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072778a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0072778d: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x727792u); f_00710c28();
    /* 00727792: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00727795: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00727797: jne 0x7277b2 */ if (!fZ) goto L_007277b2;
L_00727799:; BB(0x00727799);
    /* 00727799: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072779c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072779f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007277a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007277a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007277ac: mov esp, ebp */ r_esp = r_ebp;
    /* 007277ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007277af: ret 4 */ FN_RET(0x00727698); r_esp += 8; return;
L_007277b2:; BB(0x007277b2);
    /* 007277b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007277b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007277b6: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7277bbu); f_005c2f74();
    /* 007277bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007277bc: jmp 0x727799 */ goto L_00727799;
L_007277be:; BB(0x007277be);
    /* 007277be: mov byte ptr [ecx + 0x68], 0xff */ W8((u32)(r_ecx+0x68u), 0xffu);
    /* 007277c2: jmp 0x727716 */ goto L_00727716;
}

void f_007277c8(void) /* sub_7277C8 */
{
    FN_ENTER(0x007277c8);
    /* 007277c8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007277cc: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007277cf: jl 0x7277d9 */ if ((fS!=fO)) goto L_007277d9;
L_007277d1:; BB(0x007277d1);
    /* 007277d1: mov eax, 0x10 */ r_eax = 0x10u;
    /* 007277d6: ret 4 */ FN_RET(0x007277c8); r_esp += 8; return;
L_007277d9:; BB(0x007277d9);
    /* 007277d9: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007277dc: jl 0x7277d1 */ if ((fS!=fO)) goto L_007277d1;
L_007277de:; BB(0x007277de);
    /* 007277de: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007277e1: jg 0x7277d1 */ if ((!fZ&&fS==fO)) goto L_007277d1;
L_007277e3:; BB(0x007277e3);
    /* 007277e3: mov eax, 0x20 */ r_eax = 0x20u;
    /* 007277e8: ret 4 */ FN_RET(0x007277c8); r_esp += 8; return;
}

void f_007277ec(void) /* sub_7277EC */
{
    FN_ENTER(0x007277ec);
    /* 007277ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007277ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007277ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007277ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007277f0: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007277f3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007277f5: mov eax, dword ptr [ebp + 0x164] */ r_eax = R32((u32)(r_ebp+0x164u));
    /* 007277fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007277fd: jne 0x727807 */ if (!fZ) goto L_00727807;
L_007277ff:; BB(0x007277ff);
    /* 007277ff: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00727802: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727804: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00727805: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00727806: ret  */ FN_RET(0x007277ec); r_esp += 4; return;
L_00727807:; BB(0x00727807);
    /* 00727807: call 0x8379ac */ r_esp -= 4; W32(r_esp, 0x72780cu); f_008379ac();
    /* 0072780c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0072780f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00727810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727811: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00727813: call dword ptr [ebx + 0x80] */ { u32 t = R32((u32)(r_ebx+0x80u)); r_esp -= 4; W32(r_esp, 0x727819u); call_ind(t); }
    /* 00727819: call 0x837a00 */ r_esp -= 4; W32(r_esp, 0x72781eu); f_00837a00();
    /* 0072781e: mov edx, dword ptr [0x9707b0] */ r_edx = R32((u32)(0x9707b0u));
    /* 00727824: mov ebx, dword ptr [0x9707b4] */ r_ebx = R32((u32)(0x9707b4u));
    /* 0072782a: mov esi, dword ptr [0x9707b8] */ r_esi = R32((u32)(0x9707b8u));
    /* 00727830: mov edi, dword ptr [0x9707bc] */ r_edi = R32((u32)(0x9707bcu));
    /* 00727836: fld dword ptr [ebp + 0x148] */ FPUSH(R_F32((u32)(r_ebp+0x148u)));
    /* 0072783c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00727840: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00727844: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00727848: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0072784c: lea ebx, [esp + 4] */ r_ebx = (u32)(r_esp+0x4u);
    /* 00727850: mov eax, dword ptr [ebp + 0x120] */ r_eax = R32((u32)(r_ebp+0x120u));
    /* 00727856: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0072785a: mov eax, dword ptr [ebp + 0x124] */ r_eax = R32((u32)(r_ebp+0x124u));
    /* 00727860: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00727864: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727868: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 0072786d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727872: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727876: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0072787a: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0072787e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727882: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00727886: fld dword ptr [ebp + 0x14c] */ FPUSH(R_F32((u32)(r_ebp+0x14cu)));
    /* 0072788c: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727890: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727895: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072789a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0072789e: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 007278a2: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007278a6: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007278aa: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007278ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007278af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007278b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007278b1: call dword ptr [0x8f8338] */ { u32 t = R32((u32)(0x8f8338u)); r_esp -= 4; W32(r_esp, 0x7278b7u); call_ind(t); }
    /* 007278b7: lea ebx, [esp + 0x14] */ r_ebx = (u32)(r_esp+0x14u);
    /* 007278bb: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007278bf: lea eax, [ebp + 0x150] */ r_eax = (u32)(r_ebp+0x150u);
    /* 007278c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007278c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007278c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007278c8: call dword ptr [0x8f833c] */ { u32 t = R32((u32)(0x8f833cu)); r_esp -= 4; W32(r_esp, 0x7278ceu); call_ind(t); }
    /* 007278ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007278d0: je 0x727bb4 */ if (fZ) goto L_00727bb4;
L_007278d6:; BB(0x007278d6);
    /* 007278d6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007278da: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 007278de: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 007278e2: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 007278e6: fld dword ptr [ebp + 0x148] */ FPUSH(R_F32((u32)(r_ebp+0x148u)));
    /* 007278ec: fchs  */ ST(0) = -ST(0);
    /* 007278ee: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 007278f2: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 007278f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007278fc: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727900: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727904: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00727908: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0072790c: fld dword ptr [ebp + 0x14c] */ FPUSH(R_F32((u32)(r_ebp+0x14cu)));
    /* 00727912: fchs  */ ST(0) = -ST(0);
    /* 00727914: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00727918: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0072791c: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727920: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727925: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072792a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0072792e: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727932: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00727936: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0072793a: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0072793e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00727942: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00727946: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0072794a: lea ebx, [esp + 4] */ r_ebx = (u32)(r_esp+0x4u);
    /* 0072794e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072794f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00727950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727951: call dword ptr [0x8f8338] */ { u32 t = R32((u32)(0x8f8338u)); r_esp -= 4; W32(r_esp, 0x727957u); call_ind(t); }
    /* 00727957: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0072795a: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0072795e: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00727963: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00727965: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00727967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00727969: call dword ptr [ebx + 0x24] */ { u32 t = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, 0x72796cu); call_ind(t); }
    /* 0072796c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072796e: jne 0x727bb4 */ if (!fZ) goto L_00727bb4;
L_00727974:; BB(0x00727974);
    /* 00727974: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00727978: fld dword ptr [ebp + 0x13c] */ FPUSH(R_F32((u32)(r_ebp+0x13cu)));
    /* 0072797e: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00727980: fld dword ptr [ebp + 0x140] */ FPUSH(R_F32((u32)(r_ebp+0x140u)));
    /* 00727986: movzx ecx, byte ptr [ebp + 0x160] */ r_ecx = (u32)R8((u32)(r_ebp+0x160u));
    /* 0072798d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072798f: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727993: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727998: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072799d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007279a1: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 007279a5: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007279a9: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007279ad: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007279b1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007279b3: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 007279b7: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 007279bb: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 007279c0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007279c5: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 007279c9: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 007279cd: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 007279d1: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007279d5: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 007279d9: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007279dd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007279df: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007279e3: imul edi, ecx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ecx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007279e6: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 007279ea: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007279ee: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 007279f2: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 007279f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007279fc: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727a00: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727a04: fistp dword ptr [esp + 0xc] */ W32((u32)(r_esp+0xcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00727a08: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727a0c: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00727a10: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00727a12: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727a16: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727a1b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727a20: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727a24: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727a28: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00727a2c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727a30: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00727a34: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00727a36: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727a3a: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727a3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727a44: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727a48: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727a4c: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00727a50: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727a54: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00727a58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00727a5a: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00727a5e: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727a62: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727a67: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727a6c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727a70: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727a74: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00727a78: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727a7c: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 00727a80: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00727a84: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00727a86: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727a8a: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727a8f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727a94: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727a98: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727a9c: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00727aa0: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727aa4: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00727aa8: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00727aac: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00727aae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00727ab0: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727ab4: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727ab9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727abe: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727ac2: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727ac6: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00727aca: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727ace: fild dword ptr [ebp + 0x120] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x120u)));
    /* 00727ad4: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00727ad8: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00727adc: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00727ae0: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00727ae4: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00727ae8: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00727aea: imul ebx, ecx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_ecx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00727aed: imul esi, ecx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ecx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00727af0: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00727af4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00727af8: mov eax, ebx */ r_eax = r_ebx;
    /* 00727afa: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00727afd: shr eax, 0x1d */ { u32 c = (29u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00727b00: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00727b02: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00727b06: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00727b09: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00727b0c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00727b10: mov eax, dword ptr [ebp + 0x120] */ r_eax = R32((u32)(r_ebp+0x120u));
    /* 00727b16: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00727b19: fadd dword ptr [eax*4 + 0x9707d8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9707d8u));
    /* 00727b20: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00727b22: mov edx, esi */ r_edx = r_esi;
    /* 00727b24: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00727b28: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00727b2d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00727b32: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00727b36: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00727b3a: fistp qword ptr [esp + 0x3c] */ W64((u32)(r_esp+0x3cu), (u64)fx_int64(ST(0))); FPOP();
    /* 00727b3e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00727b42: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00727b46: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00727b49: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00727b4c: shr edx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00727b4f: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00727b52: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00727b56: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00727b58: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00727b5b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00727b5d: add ebx, dword ptr [esp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00727b61: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00727b65: mov esi, edi */ r_esi = r_edi;
    /* 00727b67: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00727b6a: shr esi, 0x1d */ { u32 c = (29u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00727b6d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00727b6f: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00727b72: add esi, dword ptr [ebp + 0x144] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x144u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00727b78: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00727b7c: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00727b7f: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00727b81: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00727b85: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00727b87: jae 0x727bab */ if (!fC) goto L_00727bab;
L_00727b89:; BB(0x00727b89);
    /* 00727b89: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00727b8d: mov edi, eax */ r_edi = r_eax;
L_00727b8f:; BB(0x00727b8f);
    /* 00727b8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00727b90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00727b91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727b92: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x727b97u); f_0086b6b8();
    /* 00727b97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00727b9a: add ebx, dword ptr [esp + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00727b9e: add esi, dword ptr [esp + 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00727ba2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00727ba5: cmp edi, dword ptr [esp + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00727ba9: jb 0x727b8f */ if (fC) goto L_00727b8f;
L_00727bab:; BB(0x00727bab);
    /* 00727bab: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00727bae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727baf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00727bb1: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x727bb4u); call_ind(t); }
L_00727bb4:; BB(0x00727bb4);
    /* 00727bb4: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00727bb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727bb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727bb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00727bba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00727bbb: ret  */ FN_RET(0x007277ec); r_esp += 4; return;
}

void f_00727bbc(void) /* sub_727BBC */
{
    FN_ENTER(0x00727bbc);
    /* 00727bbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00727bbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00727bbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00727bc1: push 0x8f0fcc */ { u32 v = 0x8f0fccu; r_esp -= 4; W32(r_esp, v); }
    /* 00727bc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00727bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727bcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00727bd4: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00727bd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00727bda: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00727bdd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00727be0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00727be3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00727be6: call 0x837a00 */ r_esp -= 4; W32(r_esp, 0x727bebu); f_00837a00();
    /* 00727beb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727bed: je 0x727f00 */ if (fZ) goto L_00727f00;
L_00727bf3:; BB(0x00727bf3);
    /* 00727bf3: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727bf6: je 0x727e8c */ if (fZ) goto L_00727e8c;
L_00727bfc:; BB(0x00727bfc);
    /* 00727bfc: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727bff: je 0x727e18 */ if (fZ) goto L_00727e18;
L_00727c05:; BB(0x00727c05);
    /* 00727c05: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727c08: je 0x727d19 */ if (fZ) goto L_00727d19;
L_00727c0e:; BB(0x00727c0e);
    /* 00727c0e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727c11: jne 0x727c8a */ if (!fZ) goto L_00727c8a;
L_00727c13:; BB(0x00727c13);
    /* 00727c13: mov eax, 0x47438200 */ r_eax = 0x47438200u;
    /* 00727c18: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00727c1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00727c1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00727c1f: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00727c22: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00727c25: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00727c28: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00727c2a: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00727c2d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00727c2f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00727c31: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00727c34: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00727c37: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x727c3cu); f_006dc358();
    /* 00727c3c: cmp eax, dword ptr [0x9f2bf0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bf0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727c42: mov edx, 0 */ r_edx = 0x0u;
    /* 00727c47: je 0x727ded */ if (fZ) goto L_00727ded;
L_00727c4d:; BB(0x00727c4d);
    /* 00727c4d: cmp eax, dword ptr [0x9f2bf8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727c53: mov edx, 1 */ r_edx = 0x1u;
    /* 00727c58: je 0x727ded */ if (fZ) goto L_00727ded;
L_00727c5e:; BB(0x00727c5e);
    /* 00727c5e: cmp eax, dword ptr [0x9f2c00] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2c00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727c64: mov edx, 2 */ r_edx = 0x2u;
    /* 00727c69: je 0x727ded */ if (fZ) goto L_00727ded;
L_00727c6f:; BB(0x00727c6f);
    /* 00727c6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00727c71:; BB(0x00727c71);
    /* 00727c71: mov edx, dword ptr [0x9f2b8c] */ r_edx = R32((u32)(0x9f2b8cu));
    /* 00727c77: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00727c7a: mov eax, dword ptr [0x9f2b88] */ r_eax = R32((u32)(0x9f2b88u));
    /* 00727c7f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00727c82: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00727c85: jmp 0x727d8b */ goto L_00727d8b;
L_00727c8a:; BB(0x00727c8a);
    /* 00727c8a: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727c8d: jne 0x727d06 */ if (!fZ) goto L_00727d06;
L_00727c8f:; BB(0x00727c8f);
    /* 00727c8f: mov eax, 0x47438200 */ r_eax = 0x47438200u;
    /* 00727c94: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00727c97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00727c99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00727c9b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00727c9e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00727ca1: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00727ca4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00727ca6: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00727ca9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00727cab: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00727cad: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00727cb0: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00727cb3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x727cb8u); f_006dc358();
    /* 00727cb8: cmp eax, dword ptr [0x9f2c08] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2c08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727cbe: mov edx, 0 */ r_edx = 0x0u;
    /* 00727cc3: je 0x727df9 */ if (fZ) goto L_00727df9;
L_00727cc9:; BB(0x00727cc9);
    /* 00727cc9: cmp eax, dword ptr [0x9f2c10] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2c10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727ccf: mov edx, 1 */ r_edx = 0x1u;
    /* 00727cd4: je 0x727df9 */ if (fZ) goto L_00727df9;
L_00727cda:; BB(0x00727cda);
    /* 00727cda: cmp eax, dword ptr [0x9f2c18] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2c18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727ce0: mov edx, 2 */ r_edx = 0x2u;
    /* 00727ce5: je 0x727df9 */ if (fZ) goto L_00727df9;
L_00727ceb:; BB(0x00727ceb);
    /* 00727ceb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00727ced:; BB(0x00727ced);
    /* 00727ced: mov edx, dword ptr [0x9f2b8c] */ r_edx = R32((u32)(0x9f2b8cu));
    /* 00727cf3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00727cf6: mov eax, dword ptr [0x9f2b88] */ r_eax = R32((u32)(0x9f2b88u));
    /* 00727cfb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00727cfe: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00727d01: jmp 0x727d8b */ goto L_00727d8b;
L_00727d06:; BB(0x00727d06);
    /* 00727d06: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00727d09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00727d0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00727d0e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00727d15: mov esp, ebp */ r_esp = r_ebp;
    /* 00727d17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727d18: ret  */ FN_RET(0x00727bbc); r_esp += 4; return;
L_00727d19:; BB(0x00727d19);
    /* 00727d19: mov eax, 0x47438200 */ r_eax = 0x47438200u;
    /* 00727d1e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00727d21: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00727d23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00727d25: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00727d28: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00727d2b: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00727d2e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00727d30: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00727d33: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00727d35: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00727d37: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00727d3a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00727d3d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x727d42u); f_006dc358();
    /* 00727d42: cmp eax, dword ptr [0x9f2bd8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727d48: mov edx, 0 */ r_edx = 0x0u;
    /* 00727d4d: je 0x727e0c */ if (fZ) goto L_00727e0c;
L_00727d53:; BB(0x00727d53);
    /* 00727d53: cmp eax, dword ptr [0x9f2be0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2be0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727d59: mov edx, 1 */ r_edx = 0x1u;
    /* 00727d5e: je 0x727e0c */ if (fZ) goto L_00727e0c;
L_00727d64:; BB(0x00727d64);
    /* 00727d64: cmp eax, dword ptr [0x9f2be8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2be8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727d6a: mov edx, 2 */ r_edx = 0x2u;
    /* 00727d6f: je 0x727e0c */ if (fZ) goto L_00727e0c;
L_00727d75:; BB(0x00727d75);
    /* 00727d75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00727d77:; BB(0x00727d77);
    /* 00727d77: mov edx, dword ptr [0x9f2b8c] */ r_edx = R32((u32)(0x9f2b8cu));
    /* 00727d7d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00727d80: mov eax, dword ptr [0x9f2b88] */ r_eax = R32((u32)(0x9f2b88u));
    /* 00727d85: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00727d88: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00727d8b:; BB(0x00727d8b);
    /* 00727d8b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00727d92: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00727d94: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x727d99u); f_005caba4();
    /* 00727d99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00727d9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00727d9f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00727da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727da4: je 0x727e05 */ if (fZ) goto L_00727e05;
L_00727da6:; BB(0x00727da6);
    /* 00727da6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00727dad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00727db4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00727db7: movsx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 00727dbb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00727dbe: lea ebx, [ebp - 0x48] */ r_ebx = (u32)(r_ebp+0xffffffb8u);
    /* 00727dc1: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00727dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727dc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00727dc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727dc7: call 0x727f74 */ r_esp -= 4; W32(r_esp, 0x727dccu); f_00727f74();
    /* 00727dcc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00727dd3:; BB(0x00727dd3);
    /* 00727dd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00727dd6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00727dd9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00727ddc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00727ddf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00727de2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00727de9: mov esp, ebp */ r_esp = r_ebp;
    /* 00727deb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727dec: ret  */ FN_RET(0x00727bbc); r_esp += 4; return;
L_00727ded:; BB(0x00727ded);
    /* 00727ded: mov eax, dword ptr [edx*8 + 0x9f2bf4] */ r_eax = R32((u32)(r_edx*8+0x9f2bf4u));
    /* 00727df4: jmp 0x727c71 */ goto L_00727c71;
L_00727df9:; BB(0x00727df9);
    /* 00727df9: mov eax, dword ptr [edx*8 + 0x9f2c0c] */ r_eax = R32((u32)(r_edx*8+0x9f2c0cu));
    /* 00727e00: jmp 0x727ced */ goto L_00727ced;
L_00727e05:; BB(0x00727e05);
    /* 00727e05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00727e07: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00727e0a: jmp 0x727dd3 */ goto L_00727dd3;
L_00727e0c:; BB(0x00727e0c);
    /* 00727e0c: mov eax, dword ptr [edx*8 + 0x9f2bdc] */ r_eax = R32((u32)(r_edx*8+0x9f2bdcu));
    /* 00727e13: jmp 0x727d77 */ goto L_00727d77;
L_00727e18:; BB(0x00727e18);
    /* 00727e18: mov eax, 0x47438200 */ r_eax = 0x47438200u;
    /* 00727e1d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00727e20: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00727e22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00727e24: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00727e27: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00727e2a: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00727e2d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00727e2f: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00727e32: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00727e34: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00727e36: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00727e39: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00727e3c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x727e41u); f_006dc358();
    /* 00727e41: cmp eax, dword ptr [0x9f2bc0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727e47: mov edx, 0 */ r_edx = 0x0u;
    /* 00727e4c: je 0x727e83 */ if (fZ) goto L_00727e83;
L_00727e4e:; BB(0x00727e4e);
    /* 00727e4e: cmp eax, dword ptr [0x9f2bc8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727e54: mov edx, 1 */ r_edx = 0x1u;
    /* 00727e59: je 0x727e83 */ if (fZ) goto L_00727e83;
L_00727e5b:; BB(0x00727e5b);
    /* 00727e5b: cmp eax, dword ptr [0x9f2bd0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727e61: mov edx, 2 */ r_edx = 0x2u;
    /* 00727e66: je 0x727e83 */ if (fZ) goto L_00727e83;
L_00727e68:; BB(0x00727e68);
    /* 00727e68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00727e6a:; BB(0x00727e6a);
    /* 00727e6a: mov edx, dword ptr [0x9f2b84] */ r_edx = R32((u32)(0x9f2b84u));
    /* 00727e70: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00727e73: mov eax, dword ptr [0x9f2b80] */ r_eax = R32((u32)(0x9f2b80u));
    /* 00727e78: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00727e7b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00727e7e: jmp 0x727d8b */ goto L_00727d8b;
L_00727e83:; BB(0x00727e83);
    /* 00727e83: mov eax, dword ptr [edx*8 + 0x9f2bc4] */ r_eax = R32((u32)(r_edx*8+0x9f2bc4u));
    /* 00727e8a: jmp 0x727e6a */ goto L_00727e6a;
L_00727e8c:; BB(0x00727e8c);
    /* 00727e8c: mov eax, 0x47438200 */ r_eax = 0x47438200u;
    /* 00727e91: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00727e94: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00727e96: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00727e98: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00727e9b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00727e9e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00727ea1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00727ea3: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00727ea6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00727ea8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00727eaa: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00727ead: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00727eb0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x727eb5u); f_006dc358();
    /* 00727eb5: cmp eax, dword ptr [0x9f2ba8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2ba8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727ebb: mov edx, 0 */ r_edx = 0x0u;
    /* 00727ec0: je 0x727ef7 */ if (fZ) goto L_00727ef7;
L_00727ec2:; BB(0x00727ec2);
    /* 00727ec2: cmp eax, dword ptr [0x9f2bb0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727ec8: mov edx, 1 */ r_edx = 0x1u;
    /* 00727ecd: je 0x727ef7 */ if (fZ) goto L_00727ef7;
L_00727ecf:; BB(0x00727ecf);
    /* 00727ecf: cmp eax, dword ptr [0x9f2bb8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2bb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727ed5: mov edx, 2 */ r_edx = 0x2u;
    /* 00727eda: je 0x727ef7 */ if (fZ) goto L_00727ef7;
L_00727edc:; BB(0x00727edc);
    /* 00727edc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00727ede:; BB(0x00727ede);
    /* 00727ede: mov edx, dword ptr [0x9f2b84] */ r_edx = R32((u32)(0x9f2b84u));
    /* 00727ee4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00727ee7: mov eax, dword ptr [0x9f2b80] */ r_eax = R32((u32)(0x9f2b80u));
    /* 00727eec: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00727eef: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00727ef2: jmp 0x727d8b */ goto L_00727d8b;
L_00727ef7:; BB(0x00727ef7);
    /* 00727ef7: mov eax, dword ptr [edx*8 + 0x9f2bac] */ r_eax = R32((u32)(r_edx*8+0x9f2bacu));
    /* 00727efe: jmp 0x727ede */ goto L_00727ede;
L_00727f00:; BB(0x00727f00);
    /* 00727f00: mov eax, 0x47438200 */ r_eax = 0x47438200u;
    /* 00727f05: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00727f08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00727f0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00727f0c: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00727f0f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00727f12: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00727f15: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00727f17: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00727f1a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00727f1c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00727f1e: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00727f21: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00727f24: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x727f29u); f_006dc358();
    /* 00727f29: cmp eax, dword ptr [0x9f2b90] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2b90u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727f2f: mov edx, 0 */ r_edx = 0x0u;
    /* 00727f34: je 0x727f6b */ if (fZ) goto L_00727f6b;
L_00727f36:; BB(0x00727f36);
    /* 00727f36: cmp eax, dword ptr [0x9f2b98] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2b98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727f3c: mov edx, 1 */ r_edx = 0x1u;
    /* 00727f41: je 0x727f6b */ if (fZ) goto L_00727f6b;
L_00727f43:; BB(0x00727f43);
    /* 00727f43: cmp eax, dword ptr [0x9f2ba0] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9f2ba0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727f49: mov edx, 2 */ r_edx = 0x2u;
    /* 00727f4e: je 0x727f6b */ if (fZ) goto L_00727f6b;
L_00727f50:; BB(0x00727f50);
    /* 00727f50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00727f52:; BB(0x00727f52);
    /* 00727f52: mov edx, dword ptr [0x9f2b84] */ r_edx = R32((u32)(0x9f2b84u));
    /* 00727f58: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00727f5b: mov eax, dword ptr [0x9f2b80] */ r_eax = R32((u32)(0x9f2b80u));
    /* 00727f60: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00727f63: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00727f66: jmp 0x727d8b */ goto L_00727d8b;
L_00727f6b:; BB(0x00727f6b);
    /* 00727f6b: mov eax, dword ptr [edx*8 + 0x9f2b94] */ r_eax = R32((u32)(r_edx*8+0x9f2b94u));
    /* 00727f72: jmp 0x727f52 */ goto L_00727f52;
}

void f_00727f74(void) /* sub_727F74 */
{
    FN_ENTER(0x00727f74);
    /* 00727f74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00727f75: mov ebp, esp */ r_ebp = r_esp;
    /* 00727f77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00727f79: push 0x8f1056 */ { u32 v = 0x8f1056u; r_esp -= 4; W32(r_esp, v); }
    /* 00727f7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00727f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727f85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00727f8c: sub esp, 0x14c */ {  u32 a = r_esp; u32 b = 0x14cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00727f92: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00727f95: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00727f98: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00727f9b: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00727f9e: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00727fa1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00727fa4: movsx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x10u));
    /* 00727fa8: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00727fab: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00727fae: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00727fb1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00727fb4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00727fb7: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00727fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00727fbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00727fbc: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x727fc1u); f_00710d30();
    /* 00727fc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00727fc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00727fcb: mov dword ptr [esi], 0xb400c0 */ W32((u32)(r_esi), 0xb400c0u);
    /* 00727fd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00727fd3: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00727fd6: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 00727fdc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00727fde: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 00727fe1: mov byte ptr [esi + 0x6b], al */ W8((u32)(r_esi+0x6bu), (u8)r_eax);
    /* 00727fe4: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 00727fe7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x727fecu); f_008581c5();
    /* 00727fec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00727fef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00727ff2: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 00727ff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00727ffa: je 0x72826c */ if (fZ) goto L_0072826c;
L_00728000:; BB(0x00728000);
    /* 00728000: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
    /* 0072800a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00728011: mov eax, ebx */ r_eax = r_ebx;
    /* 00728013: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728016: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00728019: call 0x805d8c */ r_esp -= 4; W32(r_esp, 0x72801eu); f_00805d8c();
    /* 0072801e: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_00728028:; BB(0x00728028);
    /* 00728028: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072802b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072802e: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00728031: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00728038: mov ecx, eax */ r_ecx = r_eax;
    /* 0072803a: call 0x805eec */ r_esp -= 4; W32(r_esp, 0x72803fu); f_00805eec();
    /* 0072803f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00728042: ja 0x72804b */ if ((!fC&&!fZ)) goto L_0072804b;
L_00728044:; BB(0x00728044);
    /* 00728044: mov eax, 1 */ r_eax = 0x1u;
    /* 00728049: jmp 0x728056 */ goto L_00728056;
L_0072804b:; BB(0x0072804b);
    /* 0072804b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072804e: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00728051: call 0x805eec */ r_esp -= 4; W32(r_esp, 0x728056u); f_00805eec();
L_00728056:; BB(0x00728056);
    /* 00728056: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00728059: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072805c: mov byte ptr [edx + 0x6b], al */ W8((u32)(r_edx+0x6bu), (u8)r_eax);
    /* 0072805f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728062: jle 0x7280d0 */ if ((fZ||fS!=fO)) goto L_007280d0;
L_00728064:; BB(0x00728064);
    /* 00728064: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 0072806e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00728070: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x728075u); f_008581c5();
    /* 00728075: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00728078: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072807b: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 00728081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728083: je 0x72825b */ if (fZ) goto L_0072825b;
L_00728089:; BB(0x00728089);
    /* 00728089: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
    /* 00728093: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0072809a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072809d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007280a0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007280a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007280a6: movsx ebx, byte ptr [eax + 0x6b] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_eax+0x6bu));
    /* 007280aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007280ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007280ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007280ad: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x7280b2u); f_0073e5d4();
    /* 007280b2: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_007280bc:; BB(0x007280bc);
    /* 007280bc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007280bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007280c2: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007280c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007280cc: movsx eax, byte ptr [edx + 0x6b] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6bu));
L_007280d0:; BB(0x007280d0);
    /* 007280d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007280d2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007280d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007280d5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7280dau); f_008581c5();
    /* 007280da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007280db: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007280de: movsx edx, byte ptr [ecx + 0x6b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6bu));
    /* 007280e2: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 007280e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007280e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007280e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007280ec: jle 0x728228 */ if ((fZ||fS!=fO)) goto L_00728228;
L_007280f2:; BB(0x007280f2);
    /* 007280f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007280f5: lea edx, [ebp - 0x13c] */ r_edx = (u32)(r_ebp+0xfffffec4u);
    /* 007280fb: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00728100: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00728103: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00728105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00728107: call dword ptr [ebx + 4] */ { u32 t = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, 0x72810au); call_ind(t); }
    /* 0072810a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00728111: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00728116: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x72811bu); f_005caba4();
    /* 0072811b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0072811e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00728121: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00728124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728126: je 0x728265 */ if (fZ) goto L_00728265;
L_0072812c:; BB(0x0072812c);
    /* 0072812c: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00728133: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0072813a: mov ecx, eax */ r_ecx = r_eax;
    /* 0072813c: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
    /* 00728142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00728144: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x728149u); f_008193cc();
    /* 00728149: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00728150: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00728153: mov dword ptr [edx], 0xb400d0 */ W32((u32)(r_edx), 0xb400d0u);
    /* 00728159: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072815b: mov byte ptr [edx + 0x160], al */ W8((u32)(r_edx+0x160u), (u8)r_eax);
    /* 00728161: mov dword ptr [edx + 0x148], 0 */ W32((u32)(r_edx+0x148u), 0x0u);
    /* 0072816b: mov dword ptr [edx + 0x164], eax */ W32((u32)(r_edx+0x164u), r_eax);
    /* 00728171: lea ebx, [edx + 0x150] */ r_ebx = (u32)(r_edx+0x150u);
    /* 00728177: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00728179: mov dword ptr [edx + 0x14c], 0 */ W32((u32)(r_edx+0x14cu), 0x0u);
    /* 00728183: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 00728185: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 00728188: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0072818b: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0072818e: mov eax, edx */ r_eax = r_edx;
    /* 00728190: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00728195: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00728197: lea ebx, [eax + 0x1c] */ r_ebx = (u32)(r_eax+0x1cu);
    /* 0072819a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072819b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7281a0u); f_0086b688();
    /* 007281a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007281a3: lea ecx, [eax + 0x120] */ r_ecx = (u32)(r_eax+0x120u);
    /* 007281a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007281ab: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 007281ad: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 007281b0: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 007281b3: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 007281b6: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 007281b9: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 007281bc: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 007281bf: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 007281c2: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007281c5: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 007281c8: lea eax, [ebp - 0x13c] */ r_eax = (u32)(r_ebp+0xfffffec4u);
    /* 007281ce: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 007281d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007281d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007281d5: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7281dau); f_00858900();
    /* 007281da: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007281dd: call 0x8379b4 */ r_esp -= 4; W32(r_esp, 0x7281e2u); f_008379b4();
    /* 007281e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007281e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007281e6: call 0x7277c8 */ r_esp -= 4; W32(r_esp, 0x7281ebu); f_007277c8();
    /* 007281eb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007281ee: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007281f5: mov byte ptr [edx + 0x160], al */ W8((u32)(r_edx+0x160u), (u8)r_eax);
L_007281fb:; BB(0x007281fb);
    /* 007281fb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007281fe: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00728201: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00728204: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00728207: mov dword ptr [ecx + ebx*4], edx */ W32((u32)(r_ecx+r_ebx*4), r_edx);
    /* 0072820a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00728211: mov eax, ebx */ r_eax = r_ebx;
    /* 00728213: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00728216: movsx edx, byte ptr [ecx + 0x6b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6bu));
    /* 0072821a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072821d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072821f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00728222: jl 0x7280f2 */ if ((fS!=fO)) goto L_007280f2;
L_00728228:; BB(0x00728228);
    /* 00728228: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072822b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072822c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00728231: mov byte ptr [ecx + 0x68], al */ W8((u32)(r_ecx+0x68u), (u8)r_eax);
    /* 00728234: mov byte ptr [ecx + 0x69], al */ W8((u32)(r_ecx+0x69u), (u8)r_eax);
    /* 00728237: mov byte ptr [ecx + 0x6a], al */ W8((u32)(r_ecx+0x6au), (u8)r_eax);
    /* 0072823a: call 0x728340 */ r_esp -= 4; W32(r_esp, 0x72823fu); f_00728340();
    /* 0072823f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00728242: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00728245: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00728248: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0072824b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072824e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00728255: mov esp, ebp */ r_esp = r_ebp;
    /* 00728257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00728258: ret 0x10 */ FN_RET(0x00727f74); r_esp += 20; return;
L_0072825b:; BB(0x0072825b);
    /* 0072825b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072825d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00728260: jmp 0x7280bc */ goto L_007280bc;
L_00728265:; BB(0x00728265);
    /* 00728265: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728267: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0072826a: jmp 0x7281fb */ goto L_007281fb;
L_0072826c:; BB(0x0072826c);
    /* 0072826c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072826e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00728271: jmp 0x728028 */ goto L_00728028;
}

