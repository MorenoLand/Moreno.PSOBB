#include "protos.h"

void f_00671000(void) /* sub_671000 */
{
    FN_ENTER(0x00671000);
    /* 00671000: mov eax, dword ptr [0xa8fde8] */ r_eax = R32((u32)(0xa8fde8u));
    /* 00671005: ret  */ FN_RET(0x00671000); r_esp += 4; return;
}

void f_00671008(void) /* sub_671008 */
{
    FN_ENTER(0x00671008);
    /* 00671008: mov eax, dword ptr [0xa8fde4] */ r_eax = R32((u32)(0xa8fde4u));
    /* 0067100d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067100f: je 0x671020 */ if (fZ) goto L_00671020;
L_00671011:; BB(0x00671011);
    /* 00671011: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00671014: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671017: mov eax, 0 */ r_eax = 0x0u;
    /* 0067101c: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0067101f: ret  */ FN_RET(0x00671008); r_esp += 4; return;
L_00671020:; BB(0x00671020);
    /* 00671020: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671022: ret  */ FN_RET(0x00671008); r_esp += 4; return;
}

void f_00671024(void) /* sub_671024 */
{
    FN_ENTER(0x00671024);
    /* 00671024: mov eax, dword ptr [0xa8fde4] */ r_eax = R32((u32)(0xa8fde4u));
    /* 00671029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067102b: je 0x67103c */ if (fZ) goto L_0067103c;
L_0067102d:; BB(0x0067102d);
    /* 0067102d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00671030: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671033: mov eax, 0 */ r_eax = 0x0u;
    /* 00671038: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0067103b: ret  */ FN_RET(0x00671024); r_esp += 4; return;
L_0067103c:; BB(0x0067103c);
    /* 0067103c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067103e: ret  */ FN_RET(0x00671024); r_esp += 4; return;
}

void f_00671040(void) /* sub_671040 */
{
    FN_ENTER(0x00671040);
    /* 00671040: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x671045u); f_00670fb8();
    /* 00671045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671047: mov eax, 0 */ r_eax = 0x0u;
    /* 0067104c: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0067104f: ret  */ FN_RET(0x00671040); r_esp += 4; return;
}

void f_00671050(void) /* sub_671050 */
{
    FN_ENTER(0x00671050);
    /* 00671050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671051: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671057: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0067105a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067105c: je 0x6711ae */ if (fZ) goto L_006711ae;
L_00671062:; BB(0x00671062);
    /* 00671062: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00671065: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00671067: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00671069: jle 0x6711ae */ if ((fZ||fS!=fO)) goto L_006711ae;
L_0067106f:; BB(0x0067106f);
    /* 0067106f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00671072: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00671076: mov ebx, edx */ r_ebx = r_edx;
    /* 00671078: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0067107c: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_00671080:; BB(0x00671080);
    /* 00671080: movsx esi, word ptr [ebx + 0x62] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x62u));
    /* 00671084: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671087: jle 0x671194 */ if ((fZ||fS!=fO)) goto L_00671194;
L_0067108d:; BB(0x0067108d);
    /* 0067108d: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00671092: movsx ecx, byte ptr [ebx + 0x61] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00671096: mov edi, dword ptr [ebx + 0x64] */ r_edi = R32((u32)(r_ebx+0x64u));
    /* 00671099: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0067109d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067109f: div edi */ { u32 d = r_edi; if (!d) UNSUP(0x0067109f, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0067109f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006710a1: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 006710a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006710a6: jl 0x6710d9 */ if ((fS!=fO)) goto L_006710d9;
L_006710a8:; BB(0x006710a8);
    /* 006710a8: mov eax, ecx */ r_eax = r_ecx;
    /* 006710aa: mov edi, dword ptr [ebx + 0x68] */ r_edi = R32((u32)(r_ebx+0x68u));
    /* 006710ad: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006710b1: lea esi, [edi + esi*4 + 2] */ r_esi = (u32)(r_edi+r_esi*4+0x2u);
    /* 006710b5: add edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_006710b8:; BB(0x006710b8);
    /* 006710b8: movsx ebp, word ptr [esi - 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0xfffffffcu));
    /* 006710bc: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006710be: jae 0x6710ca */ if (!fC) goto L_006710ca;
L_006710c0:; BB(0x006710c0);
    /* 006710c0: movzx eax, word ptr [esi - 6] */ r_eax = (u32)R16((u32)(r_esi+0xfffffffau));
    /* 006710c4: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006710c7: mov byte ptr [ebx + 0x61], al */ W8((u32)(r_ebx+0x61u), (u8)r_eax);
L_006710ca:; BB(0x006710ca);
    /* 006710ca: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006710cd: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006710cf: jbe 0x6710b8 */ if ((fC||fZ)) goto L_006710b8;
L_006710d1:; BB(0x006710d1);
    /* 006710d1: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 006710d5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_006710d9:; BB(0x006710d9);
    /* 006710d9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006710dd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006710df: jne 0x6710ec */ if (!fZ) goto L_006710ec;
L_006710e1:; BB(0x006710e1);
    /* 006710e1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006710e4: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006710e7: jmp 0x671194 */ goto L_00671194;
L_006710ec:; BB(0x006710ec);
    /* 006710ec: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
    /* 006710f0: mov esi, 0x93a260 */ r_esi = 0x93a260u;
    /* 006710f5: mov ecx, 0xa0 */ r_ecx = 0xa0u;
    /* 006710fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006710fb: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006710fe: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00671100: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671101: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00671104: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00671106: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0067110b: movsx esi, byte ptr [ebx + 0x61] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 0067110f: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00671111: mov edi, esi */ r_edi = r_esi;
    /* 00671113: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00671116: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00671119: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067111b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0067111e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671120: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671122: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671124: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00671126: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00671129: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067112b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067112d: jg 0x671131 */ if ((!fZ&&fS==fO)) goto L_00671131;
L_0067112f:; BB(0x0067112f);
    /* 0067112f: mov ecx, eax */ r_ecx = r_eax;
L_00671131:; BB(0x00671131);
    /* 00671131: mov eax, 1 */ r_eax = 0x1u;
    /* 00671136: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671139: jl 0x67113d */ if ((fS!=fO)) goto L_0067113d;
L_0067113b:; BB(0x0067113b);
    /* 0067113b: mov ecx, eax */ r_ecx = r_eax;
L_0067113d:; BB(0x0067113d);
    /* 0067113d: mov byte ptr [ebx + 0x60], cl */ W8((u32)(r_ebx+0x60u), (u8)r_ecx);
    /* 00671140: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671142: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00671144: jge 0x671148 */ if ((fS==fO)) goto L_00671148;
L_00671146:; BB(0x00671146);
    /* 00671146: mov esi, eax */ r_esi = r_eax;
L_00671148:; BB(0x00671148);
    /* 00671148: mov eax, 8 */ r_eax = 0x8u;
    /* 0067114d: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671150: jle 0x671154 */ if ((fZ||fS!=fO)) goto L_00671154;
L_00671152:; BB(0x00671152);
    /* 00671152: mov esi, eax */ r_esi = r_eax;
L_00671154:; BB(0x00671154);
    /* 00671154: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00671156: mov eax, dword ptr [esp + esi*8 + 0x18] */ r_eax = R32((u32)(r_esp+r_esi*8+0x18u));
    /* 0067115a: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0067115d: mov eax, dword ptr [esp + esi*8 + 0x1c] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1cu));
    /* 00671161: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00671164: mov eax, dword ptr [esp + esi*8 + 0x18] */ r_eax = R32((u32)(r_esp+r_esi*8+0x18u));
    /* 00671168: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0067116b: mov eax, dword ptr [esp + esi*8 + 0x24] */ r_eax = R32((u32)(r_esp+r_esi*8+0x24u));
    /* 0067116f: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00671172: mov eax, dword ptr [esp + esi*8 + 0x20] */ r_eax = R32((u32)(r_esp+r_esi*8+0x20u));
    /* 00671176: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00671179: mov eax, dword ptr [esp + esi*8 + 0x1c] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1cu));
    /* 0067117d: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00671180: mov eax, dword ptr [esp + esi*8 + 0x20] */ r_eax = R32((u32)(r_esp+r_esi*8+0x20u));
    /* 00671184: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 00671187: mov eax, dword ptr [esp + esi*8 + 0x24] */ r_eax = R32((u32)(r_esp+r_esi*8+0x24u));
    /* 0067118b: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0067118e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00671191: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
L_00671194:; BB(0x00671194);
    /* 00671194: add ebx, 0x6c */ {  u32 a = r_ebx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00671197: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067119a: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067119c: jl 0x671080 */ if ((fS!=fO)) goto L_00671080;
L_006711a2:; BB(0x006711a2);
    /* 006711a2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006711a6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006711aa: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_006711ae:; BB(0x006711ae);
    /* 006711ae: add esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006711b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006711b5: ret  */ FN_RET(0x00671050); r_esp += 4; return;
}

void f_006711b8(void) /* sub_6711B8 */
{
    FN_ENTER(0x006711b8);
    /* 006711b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006711b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006711bc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006711be: mov eax, dword ptr [0xa8fddc] */ r_eax = R32((u32)(0xa8fddcu));
    /* 006711c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006711c5: je 0x671238 */ if (fZ) goto L_00671238;
L_006711c7:; BB(0x006711c7);
    /* 006711c7: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006711ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006711cc: jne 0x6711d3 */ if (!fZ) goto L_006711d3;
L_006711ce:; BB(0x006711ce);
    /* 006711ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006711d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006711d2: ret  */ FN_RET(0x006711b8); r_esp += 4; return;
L_006711d3:; BB(0x006711d3);
    /* 006711d3: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6711d8u); f_0082dbac();
    /* 006711d8: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x6711ddu); f_007a9044();
    /* 006711dd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6711e2u); f_0082d7b0();
    /* 006711e2: mov ecx, dword ptr [0xa8fddc] */ r_ecx = R32((u32)(0xa8fddcu));
    /* 006711e8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6711edu); f_00829cc8();
    /* 006711ed: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 006711f0: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006711f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006711f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006711f7: jle 0x67122e */ if ((fZ||fS!=fO)) goto L_0067122e;
L_006711f9:; BB(0x006711f9);
    /* 006711f9: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006711fd: mov esi, edx */ r_esi = r_edx;
    /* 006711ff: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00671202: mov edi, ebx */ r_edi = r_ebx;
    /* 00671204: mov ebx, eax */ r_ebx = r_eax;
L_00671206:; BB(0x00671206);
    /* 00671206: movsx ecx, byte ptr [esi + 0x60] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x60u));
    /* 0067120a: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x67120fu); f_00829d68();
    /* 0067120f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00671211: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00671213: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00671214: call 0x82b2f0 */ r_esp -= 4; W32(r_esp, 0x671219u); f_0082b2f0();
    /* 00671219: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067121c: add esi, 0x6c */ {  u32 a = r_esi; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067121f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00671222: cmp ebx, dword ptr [edi + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671225: jl 0x671206 */ if ((fS!=fO)) goto L_00671206;
L_00671227:; BB(0x00671227);
    /* 00671227: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0067122b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0067122e:; BB(0x0067122e);
    /* 0067122e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x671233u); f_0082da80();
    /* 00671233: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x671238u); f_0082dab0();
L_00671238:; BB(0x00671238);
    /* 00671238: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067123b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067123c: ret  */ FN_RET(0x006711b8); r_esp += 4; return;
}

void f_00671240(void) /* sub_671240 */
{
    FN_ENTER(0x00671240);
    /* 00671240: mov ecx, dword ptr [0xa8fddc] */ r_ecx = R32((u32)(0xa8fddcu));
    /* 00671246: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671248: je 0x671265 */ if (fZ) goto L_00671265;
L_0067124a:; BB(0x0067124a);
    /* 0067124a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x67124fu); f_00829de0();
    /* 0067124f: push dword ptr [0xa8fddc] */ { u32 v = R32((u32)(0xa8fddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00671255: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x67125au); f_0082e960();
    /* 0067125a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067125b: mov dword ptr [0xa8fddc], 0 */ W32((u32)(0xa8fddcu), 0x0u);
L_00671265:; BB(0x00671265);
    /* 00671265: ret  */ FN_RET(0x00671240); r_esp += 4; return;
}

void f_00671268(void) /* sub_671268 */
{
    FN_ENTER(0x00671268);
    /* 00671268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671269: mov ebp, esp */ r_ebp = r_esp;
    /* 0067126b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067126d: push 0x8e9218 */ { u32 v = 0x8e9218u; r_esp -= 4; W32(r_esp, v); }
    /* 00671272: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671279: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00671280: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671283: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00671286: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00671289: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067128c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067128f: mov eax, dword ptr [0xa8fde0] */ r_eax = R32((u32)(0xa8fde0u));
    /* 00671294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671296: je 0x6712a6 */ if (fZ) goto L_006712a6;
L_00671298:; BB(0x00671298);
    /* 00671298: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067129b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006712a2: mov esp, ebp */ r_esp = r_ebp;
    /* 006712a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006712a5: ret  */ FN_RET(0x00671268); r_esp += 4; return;
L_006712a6:; BB(0x006712a6);
    /* 006712a6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006712ad: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006712af: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6712b4u); f_005caba4();
    /* 006712b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006712b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006712b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006712ba: je 0x6712e9 */ if (fZ) goto L_006712e9;
L_006712bc:; BB(0x006712bc);
    /* 006712bc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006712c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006712ca: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006712d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006712d3: call 0x6712f0 */ r_esp -= 4; W32(r_esp, 0x6712d8u); f_006712f0();
    /* 006712d8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006712db: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006712e2:; BB(0x006712e2);
    /* 006712e2: mov dword ptr [0xa8fde0], eax */ W32((u32)(0xa8fde0u), r_eax);
    /* 006712e7: jmp 0x671298 */ goto L_00671298;
L_006712e9:; BB(0x006712e9);
    /* 006712e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006712eb: jmp 0x6712e2 */ goto L_006712e2;
}

void f_006712f0(void) /* sub_6712F0 */
{
    FN_ENTER(0x006712f0);
    /* 006712f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006712f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006712f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006712f5: push 0x8e9234 */ { u32 v = 0x8e9234u; r_esp -= 4; W32(r_esp, v); }
    /* 006712fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671301: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00671308: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067130b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067130e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00671311: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00671314: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00671317: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067131a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067131d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x671322u); f_008193cc();
    /* 00671322: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671329: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067132c: mov dword ptr [ecx], 0xb35df8 */ W32((u32)(r_ecx), 0xb35df8u);
    /* 00671332: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00671334: mov eax, dword ptr [0x9c96f8] */ r_eax = R32((u32)(0x9c96f8u));
    /* 00671339: lea ebx, [ebp - 0x24] */ r_ebx = (u32)(r_ebp+0xffffffdcu);
    /* 0067133c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067133d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00671340: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00671343: push 0x93a408 */ { u32 v = 0x93a408u; r_esp -= 4; W32(r_esp, v); }
    /* 00671348: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0067134b: call 0x5b9780 */ r_esp -= 4; W32(r_esp, 0x671350u); f_005b9780();
    /* 00671350: mov ebx, eax */ r_ebx = r_eax;
    /* 00671352: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671355: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671357: je 0x67136c */ if (fZ) goto L_0067136c;
L_00671359:; BB(0x00671359);
    /* 00671359: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0067135c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067135f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671360: call 0x671384 */ r_esp -= 4; W32(r_esp, 0x671365u); f_00671384();
    /* 00671365: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671366: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x67136bu); f_0082e960();
    /* 0067136b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0067136c:; BB(0x0067136c);
    /* 0067136c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067136f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00671372: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671375: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067137c: mov esp, ebp */ r_esp = r_ebp;
    /* 0067137e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067137f: ret 4 */ FN_RET(0x006712f0); r_esp += 8; return;
}

void f_00671384(void) /* sub_671384 */
{
    FN_ENTER(0x00671384);
    /* 00671384: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00671385: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00671386: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671387: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671388: sub esp, 0x264 */ {  u32 a = r_esp; u32 b = 0x264u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067138e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00671390: mov eax, dword ptr [esp + 0x278] */ r_eax = R32((u32)(r_esp+0x278u));
    /* 00671397: mov edi, dword ptr [esp + 0x27c] */ r_edi = R32((u32)(r_esp+0x27cu));
    /* 0067139e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006713a2: mov eax, dword ptr [0xaafc98] */ r_eax = R32((u32)(0xaafc98u));
    /* 006713a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006713a9: jle 0x6714d2 */ if ((fZ||fS!=fO)) goto L_006714d2;
L_006713af:; BB(0x006713af);
    /* 006713af: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006713b2: jg 0x6714d2 */ if ((!fZ&&fS==fO)) goto L_006714d2;
L_006713b8:; BB(0x006713b8);
    /* 006713b8: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006713bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006713be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006713c0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006713c2: jbe 0x6714cb */ if ((fC||fZ)) goto L_006714cb;
L_006713c8:; BB(0x006713c8);
    /* 006713c8: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 006713cc: mov ebx, eax */ r_ebx = r_eax;
    /* 006713ce: mov ebp, edx */ r_ebp = r_edx;
L_006713d0:; BB(0x006713d0);
    /* 006713d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006713d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006713d4: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006713d8: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 006713dc: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 006713e0: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 006713e4: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006713e8: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 006713ec: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 006713f0: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006713f4: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 006713f8: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 006713fc: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00671400: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00671404: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00671408: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 0067140c: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00671410: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 00671414: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 00671418: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 0067141c: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00671420: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 00671424: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00671428: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 0067142c: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 00671430: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 00671437: mov dword ptr [esp + 0x84], ecx */ W32((u32)(r_esp+0x84u), r_ecx);
    /* 0067143e: mov dword ptr [esp + 0x88], ecx */ W32((u32)(r_esp+0x88u), r_ecx);
    /* 00671445: mov dword ptr [esp + 0x8c], ecx */ W32((u32)(r_esp+0x8cu), r_ecx);
    /* 0067144c: mov dword ptr [esp + 0x90], ecx */ W32((u32)(r_esp+0x90u), r_ecx);
    /* 00671453: mov dword ptr [esp + 0x94], ecx */ W32((u32)(r_esp+0x94u), r_ecx);
    /* 0067145a: mov dword ptr [esp + 0x98], ecx */ W32((u32)(r_esp+0x98u), r_ecx);
    /* 00671461: mov dword ptr [esp + 0x9c], ecx */ W32((u32)(r_esp+0x9cu), r_ecx);
    /* 00671468: mov dword ptr [esp + 0xa0], ecx */ W32((u32)(r_esp+0xa0u), r_ecx);
L_0067146f:; BB(0x0067146f);
    /* 0067146f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00671472: movzx eax, byte ptr [esi - 1] */ r_eax = (u32)R8((u32)(r_esi+0xffffffffu));
    /* 00671476: mov byte ptr [esp + edx + 0x24], al */ W8((u32)(r_esp+r_edx+0x24u), (u8)r_eax);
    /* 0067147a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067147d: movsx ecx, byte ptr [esp + edx + 0x24] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+r_edx+0x24u));
    /* 00671482: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00671485: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671488: je 0x671bff */ if (fZ) goto L_00671bff;
L_0067148e:; BB(0x0067148e);
    /* 0067148e: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671494: jge 0x6714a2 */ if ((fS==fO)) goto L_006714a2;
L_00671496:; BB(0x00671496);
    /* 00671496: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00671498: jb 0x67146f */ if (fC) goto L_0067146f;
L_0067149a:; BB(0x0067149a);
    /* 0067149a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067149c: je 0x671bf4 */ if (fZ) goto L_00671bf4;
L_006714a2:; BB(0x006714a2);
    /* 006714a2: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 006714a6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006714a8: push 0x93a3d4 */ { u32 v = 0x93a3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006714ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006714ae: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6714b3u); f_008598c0();
    /* 006714b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006714b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006714b8: jne 0x6714bd */ if (!fZ) goto L_006714bd;
L_006714ba:; BB(0x006714ba);
    /* 006714ba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006714bd:; BB(0x006714bd);
    /* 006714bd: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006714bf: jb 0x6713d0 */ if (fC) goto L_006713d0;
L_006714c5:; BB(0x006714c5);
    /* 006714c5: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 006714c9: mov eax, ebx */ r_eax = r_ebx;
L_006714cb:; BB(0x006714cb);
    /* 006714cb: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 006714ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006714d0: jne 0x6714df */ if (!fZ) goto L_006714df;
L_006714d2:; BB(0x006714d2);
    /* 006714d2: add esp, 0x264 */ {  u32 a = r_esp; u32 b = 0x264u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006714d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006714d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006714da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006714db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006714dc: ret 8 */ FN_RET(0x00671384); r_esp += 12; return;
L_006714df:; BB(0x006714df);
    /* 006714df: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006714e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006714e4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006714e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006714e8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006714ea: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 006714ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006714ee: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6714f3u); f_008581c5();
    /* 006714f3: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006714f6: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 006714f9: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006714fc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006714fe: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00671500: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00671502: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00671504: lea edx, [esi + esi*8] */ r_edx = (u32)(r_esi+r_esi*8);
    /* 00671507: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671508: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067150a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067150b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x671510u); f_0086b688();
    /* 00671510: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671513: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00671517: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0067151a: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0067151e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671520: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00671522: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00671526: mov ebx, eax */ r_ebx = r_eax;
    /* 00671528: mov ebp, edx */ r_ebp = r_edx;
L_0067152a:; BB(0x0067152a);
    /* 0067152a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067152c: jae 0x6716da */ if (!fC) goto L_006716da;
L_00671532:; BB(0x00671532);
    /* 00671532: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00671534: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671536: mov dword ptr [esp + 0xa4], ecx */ W32((u32)(r_esp+0xa4u), r_ecx);
    /* 0067153d: mov dword ptr [esp + 0xa8], ecx */ W32((u32)(r_esp+0xa8u), r_ecx);
    /* 00671544: mov dword ptr [esp + 0xac], ecx */ W32((u32)(r_esp+0xacu), r_ecx);
    /* 0067154b: mov dword ptr [esp + 0xb0], ecx */ W32((u32)(r_esp+0xb0u), r_ecx);
    /* 00671552: mov dword ptr [esp + 0xb4], ecx */ W32((u32)(r_esp+0xb4u), r_ecx);
    /* 00671559: mov dword ptr [esp + 0xb8], ecx */ W32((u32)(r_esp+0xb8u), r_ecx);
    /* 00671560: mov dword ptr [esp + 0xbc], ecx */ W32((u32)(r_esp+0xbcu), r_ecx);
    /* 00671567: mov dword ptr [esp + 0xc0], ecx */ W32((u32)(r_esp+0xc0u), r_ecx);
    /* 0067156e: mov dword ptr [esp + 0xc4], ecx */ W32((u32)(r_esp+0xc4u), r_ecx);
    /* 00671575: mov dword ptr [esp + 0xc8], ecx */ W32((u32)(r_esp+0xc8u), r_ecx);
    /* 0067157c: mov dword ptr [esp + 0xcc], ecx */ W32((u32)(r_esp+0xccu), r_ecx);
    /* 00671583: mov dword ptr [esp + 0xd0], ecx */ W32((u32)(r_esp+0xd0u), r_ecx);
    /* 0067158a: mov dword ptr [esp + 0xd4], ecx */ W32((u32)(r_esp+0xd4u), r_ecx);
    /* 00671591: mov dword ptr [esp + 0xd8], ecx */ W32((u32)(r_esp+0xd8u), r_ecx);
    /* 00671598: mov dword ptr [esp + 0xdc], ecx */ W32((u32)(r_esp+0xdcu), r_ecx);
    /* 0067159f: mov dword ptr [esp + 0xe0], ecx */ W32((u32)(r_esp+0xe0u), r_ecx);
    /* 006715a6: mov dword ptr [esp + 0xe4], ecx */ W32((u32)(r_esp+0xe4u), r_ecx);
    /* 006715ad: mov dword ptr [esp + 0xe8], ecx */ W32((u32)(r_esp+0xe8u), r_ecx);
    /* 006715b4: mov dword ptr [esp + 0xec], ecx */ W32((u32)(r_esp+0xecu), r_ecx);
    /* 006715bb: mov dword ptr [esp + 0xf0], ecx */ W32((u32)(r_esp+0xf0u), r_ecx);
    /* 006715c2: mov dword ptr [esp + 0xf4], ecx */ W32((u32)(r_esp+0xf4u), r_ecx);
    /* 006715c9: mov dword ptr [esp + 0xf8], ecx */ W32((u32)(r_esp+0xf8u), r_ecx);
    /* 006715d0: mov dword ptr [esp + 0xfc], ecx */ W32((u32)(r_esp+0xfcu), r_ecx);
    /* 006715d7: mov dword ptr [esp + 0x100], ecx */ W32((u32)(r_esp+0x100u), r_ecx);
    /* 006715de: mov dword ptr [esp + 0x104], ecx */ W32((u32)(r_esp+0x104u), r_ecx);
    /* 006715e5: mov dword ptr [esp + 0x108], ecx */ W32((u32)(r_esp+0x108u), r_ecx);
    /* 006715ec: mov dword ptr [esp + 0x10c], ecx */ W32((u32)(r_esp+0x10cu), r_ecx);
    /* 006715f3: mov dword ptr [esp + 0x110], ecx */ W32((u32)(r_esp+0x110u), r_ecx);
    /* 006715fa: mov dword ptr [esp + 0x114], ecx */ W32((u32)(r_esp+0x114u), r_ecx);
    /* 00671601: mov dword ptr [esp + 0x118], ecx */ W32((u32)(r_esp+0x118u), r_ecx);
    /* 00671608: mov dword ptr [esp + 0x11c], ecx */ W32((u32)(r_esp+0x11cu), r_ecx);
    /* 0067160f: mov dword ptr [esp + 0x120], ecx */ W32((u32)(r_esp+0x120u), r_ecx);
    /* 00671616: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
L_0067161a:; BB(0x0067161a);
    /* 0067161a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067161d: movzx eax, byte ptr [ecx - 1] */ r_eax = (u32)R8((u32)(r_ecx+0xffffffffu));
    /* 00671621: mov byte ptr [esp + edx + 0xa4], al */ W8((u32)(r_esp+r_edx+0xa4u), (u8)r_eax);
    /* 00671628: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067162b: movsx eax, byte ptr [esp + edx + 0xa4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+r_edx+0xa4u));
    /* 00671633: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00671636: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671639: je 0x671bd9 */ if (fZ) goto L_00671bd9;
L_0067163f:; BB(0x0067163f);
    /* 0067163f: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671645: jge 0x671bd0 */ if ((fS==fO)) goto L_00671bd0;
L_0067164b:; BB(0x0067164b);
    /* 0067164b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067164d: jb 0x67161a */ if (fC) goto L_0067161a;
L_0067164f:; BB(0x0067164f);
    /* 0067164f: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
L_00671653:; BB(0x00671653);
    /* 00671653: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671655: je 0x67152a */ if (fZ) goto L_0067152a;
L_0067165b:; BB(0x0067165b);
    /* 0067165b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067165d: jne 0x671688 */ if (!fZ) goto L_00671688;
L_0067165f:; BB(0x0067165f);
    /* 0067165f: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 00671666: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00671668: push 0x93a3d4 */ { u32 v = 0x93a3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067166d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067166e: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x671673u); f_008598c0();
    /* 00671673: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671676: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671678: jne 0x67152a */ if (!fZ) goto L_0067152a;
L_0067167e:; BB(0x0067167e);
    /* 0067167e: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00671683: jmp 0x67152a */ goto L_0067152a;
L_00671688:; BB(0x00671688);
    /* 00671688: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067168b: jne 0x67152a */ if (!fZ) goto L_0067152a;
L_00671691:; BB(0x00671691);
    /* 00671691: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 00671698: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067169a: push 0x93a3dc */ { u32 v = 0x93a3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067169f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006716a0: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6716a5u); f_008598c0();
    /* 006716a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006716a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006716aa: jne 0x6716b1 */ if (!fZ) goto L_006716b1;
L_006716ac:; BB(0x006716ac);
    /* 006716ac: add word ptr [ebp + 0x62], 1 */ { u32 ad = (u32)(r_ebp+0x62u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_006716b1:; BB(0x006716b1);
    /* 006716b1: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 006716b8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006716ba: push 0x93a3e4 */ { u32 v = 0x93a3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006716bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006716c0: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6716c5u); f_008598c0();
    /* 006716c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006716c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006716ca: jne 0x67152a */ if (!fZ) goto L_0067152a;
L_006716d0:; BB(0x006716d0);
    /* 006716d0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006716d2: add ebp, 0x6c */ {  u32 a = r_ebp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006716d5: jmp 0x67152a */ goto L_0067152a;
L_006716da:; BB(0x006716da);
    /* 006716da: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 006716de: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006716e1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006716e5: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006716e8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006716ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006716ec: jle 0x67172f */ if ((fZ||fS!=fO)) goto L_0067172f;
L_006716ee:; BB(0x006716ee);
    /* 006716ee: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_006716f2:; BB(0x006716f2);
    /* 006716f2: movsx edx, word ptr [ebx + 0x62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x62u));
    /* 006716f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006716f8: je 0x67171e */ if (fZ) goto L_0067171e;
L_006716fa:; BB(0x006716fa);
    /* 006716fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006716fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006716fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006716ff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x671704u); f_008581c5();
    /* 00671704: movsx edx, word ptr [ebx + 0x62] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x62u));
    /* 00671708: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 0067170b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067170d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067170f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671710: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671713: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x671718u); f_0086b688();
    /* 00671718: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067171b: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
L_0067171e:; BB(0x0067171e);
    /* 0067171e: add ebx, 0x6c */ {  u32 a = r_ebx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00671721: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00671724: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671726: jl 0x6716f2 */ if ((fS!=fO)) goto L_006716f2;
L_00671728:; BB(0x00671728);
    /* 00671728: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0067172b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
L_0067172f:; BB(0x0067172f);
    /* 0067172f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00671733: mov esi, dword ptr [edx + 0x68] */ r_esi = R32((u32)(r_edx+0x68u));
    /* 00671736: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671738: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0067173a: mov ebx, edi */ r_ebx = r_edi;
    /* 0067173c: mov edi, eax */ r_edi = r_eax;
L_0067173e:; BB(0x0067173e);
    /* 0067173e: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00671740: jae 0x671bc3 */ if (!fC) goto L_00671bc3;
L_00671746:; BB(0x00671746);
    /* 00671746: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00671748: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067174a: mov dword ptr [esp + 0x124], ecx */ W32((u32)(r_esp+0x124u), r_ecx);
    /* 00671751: mov dword ptr [esp + 0x128], ecx */ W32((u32)(r_esp+0x128u), r_ecx);
    /* 00671758: mov dword ptr [esp + 0x12c], ecx */ W32((u32)(r_esp+0x12cu), r_ecx);
    /* 0067175f: mov dword ptr [esp + 0x130], ecx */ W32((u32)(r_esp+0x130u), r_ecx);
    /* 00671766: mov dword ptr [esp + 0x134], ecx */ W32((u32)(r_esp+0x134u), r_ecx);
    /* 0067176d: mov dword ptr [esp + 0x138], ecx */ W32((u32)(r_esp+0x138u), r_ecx);
    /* 00671774: mov dword ptr [esp + 0x13c], ecx */ W32((u32)(r_esp+0x13cu), r_ecx);
    /* 0067177b: mov dword ptr [esp + 0x140], ecx */ W32((u32)(r_esp+0x140u), r_ecx);
    /* 00671782: mov dword ptr [esp + 0x144], ecx */ W32((u32)(r_esp+0x144u), r_ecx);
    /* 00671789: mov dword ptr [esp + 0x148], ecx */ W32((u32)(r_esp+0x148u), r_ecx);
    /* 00671790: mov dword ptr [esp + 0x14c], ecx */ W32((u32)(r_esp+0x14cu), r_ecx);
    /* 00671797: mov dword ptr [esp + 0x150], ecx */ W32((u32)(r_esp+0x150u), r_ecx);
    /* 0067179e: mov dword ptr [esp + 0x154], ecx */ W32((u32)(r_esp+0x154u), r_ecx);
    /* 006717a5: mov dword ptr [esp + 0x158], ecx */ W32((u32)(r_esp+0x158u), r_ecx);
    /* 006717ac: mov dword ptr [esp + 0x15c], ecx */ W32((u32)(r_esp+0x15cu), r_ecx);
    /* 006717b3: mov dword ptr [esp + 0x160], ecx */ W32((u32)(r_esp+0x160u), r_ecx);
    /* 006717ba: mov dword ptr [esp + 0x164], ecx */ W32((u32)(r_esp+0x164u), r_ecx);
    /* 006717c1: mov dword ptr [esp + 0x168], ecx */ W32((u32)(r_esp+0x168u), r_ecx);
    /* 006717c8: mov dword ptr [esp + 0x16c], ecx */ W32((u32)(r_esp+0x16cu), r_ecx);
    /* 006717cf: mov dword ptr [esp + 0x170], ecx */ W32((u32)(r_esp+0x170u), r_ecx);
    /* 006717d6: mov dword ptr [esp + 0x174], ecx */ W32((u32)(r_esp+0x174u), r_ecx);
    /* 006717dd: mov dword ptr [esp + 0x178], ecx */ W32((u32)(r_esp+0x178u), r_ecx);
    /* 006717e4: mov dword ptr [esp + 0x17c], ecx */ W32((u32)(r_esp+0x17cu), r_ecx);
    /* 006717eb: mov dword ptr [esp + 0x180], ecx */ W32((u32)(r_esp+0x180u), r_ecx);
    /* 006717f2: mov dword ptr [esp + 0x184], ecx */ W32((u32)(r_esp+0x184u), r_ecx);
    /* 006717f9: mov dword ptr [esp + 0x188], ecx */ W32((u32)(r_esp+0x188u), r_ecx);
    /* 00671800: mov dword ptr [esp + 0x18c], ecx */ W32((u32)(r_esp+0x18cu), r_ecx);
    /* 00671807: mov dword ptr [esp + 0x190], ecx */ W32((u32)(r_esp+0x190u), r_ecx);
    /* 0067180e: mov dword ptr [esp + 0x194], ecx */ W32((u32)(r_esp+0x194u), r_ecx);
    /* 00671815: mov dword ptr [esp + 0x198], ecx */ W32((u32)(r_esp+0x198u), r_ecx);
    /* 0067181c: mov dword ptr [esp + 0x19c], ecx */ W32((u32)(r_esp+0x19cu), r_ecx);
    /* 00671823: mov dword ptr [esp + 0x1a0], ecx */ W32((u32)(r_esp+0x1a0u), r_ecx);
    /* 0067182a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
L_0067182e:; BB(0x0067182e);
    /* 0067182e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00671831: movzx eax, byte ptr [ecx - 1] */ r_eax = (u32)R8((u32)(r_ecx+0xffffffffu));
    /* 00671835: mov byte ptr [esp + edx + 0x124], al */ W8((u32)(r_esp+r_edx+0x124u), (u8)r_eax);
    /* 0067183c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067183f: movsx eax, byte ptr [esp + edx + 0x124] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+r_edx+0x124u));
    /* 00671847: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067184a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067184d: je 0x671beb */ if (fZ) goto L_00671beb;
L_00671853:; BB(0x00671853);
    /* 00671853: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671859: jge 0x671be2 */ if ((fS==fO)) goto L_00671be2;
L_0067185f:; BB(0x0067185f);
    /* 0067185f: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00671861: jb 0x67182e */ if (fC) goto L_0067182e;
L_00671863:; BB(0x00671863);
    /* 00671863: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_00671867:; BB(0x00671867);
    /* 00671867: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671869: je 0x67173e */ if (fZ) goto L_0067173e;
L_0067186f:; BB(0x0067186f);
    /* 0067186f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671871: jne 0x671a5b */ if (!fZ) goto L_00671a5b;
L_00671877:; BB(0x00671877);
    /* 00671877: lea edx, [esp + 0x124] */ r_edx = (u32)(r_esp+0x124u);
    /* 0067187e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00671880: push 0x93a3d4 */ { u32 v = 0x93a3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00671885: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671886: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x67188bu); f_008598c0();
    /* 0067188b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067188e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671890: jne 0x67173e */ if (!fZ) goto L_0067173e;
L_00671896:; BB(0x00671896);
    /* 00671896: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671898: mov dword ptr [esp + 0x248], eax */ W32((u32)(r_esp+0x248u), r_eax);
    /* 0067189f: mov dword ptr [esp + 0x24c], eax */ W32((u32)(r_esp+0x24cu), r_eax);
    /* 006718a6: mov dword ptr [esp + 0x250], eax */ W32((u32)(r_esp+0x250u), r_eax);
    /* 006718ad: mov dword ptr [esp + 0x254], eax */ W32((u32)(r_esp+0x254u), r_eax);
    /* 006718b4: mov dword ptr [esp + 0x258], eax */ W32((u32)(r_esp+0x258u), r_eax);
    /* 006718bb: mov dword ptr [esp + 0x25c], eax */ W32((u32)(r_esp+0x25cu), r_eax);
    /* 006718c2: mov dword ptr [esp + 0x260], eax */ W32((u32)(r_esp+0x260u), r_eax);
    /* 006718c9: lea edi, [esp + 0x254] */ r_edi = (u32)(r_esp+0x254u);
    /* 006718d0: lea ecx, [esp + 0x258] */ r_ecx = (u32)(r_esp+0x258u);
    /* 006718d7: lea edx, [esp + 0x25c] */ r_edx = (u32)(r_esp+0x25cu);
    /* 006718de: lea eax, [esp + 0x260] */ r_eax = (u32)(r_esp+0x260u);
    /* 006718e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006718e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006718e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006718e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006718e9: lea eax, [esp + 0x260] */ r_eax = (u32)(r_esp+0x260u);
    /* 006718f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006718f1: lea eax, [esp + 0x260] */ r_eax = (u32)(r_esp+0x260u);
    /* 006718f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006718f9: lea eax, [esp + 0x260] */ r_eax = (u32)(r_esp+0x260u);
    /* 00671900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671901: push 0x93a3e8 */ { u32 v = 0x93a3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00671906: lea eax, [esp + 0x14a] */ r_eax = (u32)(r_esp+0x14au);
    /* 0067190d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067190e: call 0x859b7a */ r_esp -= 4; W32(r_esp, 0x671913u); f_00859b7a();
    /* 00671913: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671916: fld dword ptr [0x93a3ac] */ FPUSH(R_F32((u32)(0x93a3acu)));
    /* 0067191c: fld dword ptr [esp + 0x254] */ FPUSH(R_F32((u32)(r_esp+0x254u)));
    /* 00671923: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00671925: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00671927: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067192c: fchs  */ ST(0) = -ST(0);
    /* 0067192e: fld dword ptr [esp + 0x258] */ FPUSH(R_F32((u32)(r_esp+0x258u)));
    /* 00671935: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00671937: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00671939: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0067193d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067193f: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00671942: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00671944: fst dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0));
    /* 00671947: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00671949: fst dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0));
    /* 0067194c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067194e: fstp dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0)); FPOP();
    /* 00671951: fstp dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0)); FPOP();
    /* 00671954: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00671956: fstp dword ptr [edx + 0x4c] */ W_F32((u32)(r_edx+0x4cu), ST(0)); FPOP();
    /* 00671959: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0067195c: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0067195f: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00671966: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00671969: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0067196c: fchs  */ ST(0) = -ST(0);
    /* 0067196e: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 00671970: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00671973: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 0067197a: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 00671981: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 00671988: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x67198du); f_0082d7b0();
    /* 0067198d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067198f: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x671994u); f_00830cd8();
    /* 00671994: lea edx, [esp + 0x248] */ r_edx = (u32)(r_esp+0x248u);
    /* 0067199b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067199d: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x6719a2u); f_008316b4();
    /* 006719a2: fld dword ptr [esp + 0x25c] */ FPUSH(R_F32((u32)(r_esp+0x25cu)));
    /* 006719a9: fmul dword ptr [0x93a3a4] */ ST(0) = ST(0) * R_F32((u32)(0x93a3a4u));
    /* 006719af: fdiv dword ptr [0x93a3a0] */ ST(0) = ST(0) / R_F32((u32)(0x93a3a0u));
    /* 006719b5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006719b8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006719bc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006719c1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006719c5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006719c9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006719cd: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006719d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006719d2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006719d6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6719dbu); f_0082d8bc();
    /* 006719db: fld dword ptr [esp + 0x260] */ FPUSH(R_F32((u32)(r_esp+0x260u)));
    /* 006719e2: fmul dword ptr [0x93a3a4] */ ST(0) = ST(0) * R_F32((u32)(0x93a3a4u));
    /* 006719e8: fdiv dword ptr [0x93a3a0] */ ST(0) = ST(0) / R_F32((u32)(0x93a3a0u));
    /* 006719ee: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006719f1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006719f5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006719fa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006719fe: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00671a02: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00671a06: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00671a09: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671a0b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00671a0f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x671a14u); f_0082e9e4();
    /* 00671a14: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00671a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671a19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671a1a: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x671a1fu); f_00835c3c();
    /* 00671a1f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00671a23: lea edx, [eax + 0x18] */ r_edx = (u32)(r_eax+0x18u);
    /* 00671a26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a28: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x671a2du); f_00835c3c();
    /* 00671a2d: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00671a31: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 00671a34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a36: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x671a3bu); f_00835c3c();
    /* 00671a3b: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00671a3f: lea edx, [eax + 0x48] */ r_edx = (u32)(r_eax+0x48u);
    /* 00671a42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a44: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x671a49u); f_00835c3c();
    /* 00671a49: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671a4c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x671a51u); f_0082da80();
    /* 00671a51: mov edi, 1 */ r_edi = 0x1u;
    /* 00671a56: jmp 0x67173e */ goto L_0067173e;
L_00671a5b:; BB(0x00671a5b);
    /* 00671a5b: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671a5e: jne 0x67173e */ if (!fZ) goto L_0067173e;
L_00671a64:; BB(0x00671a64);
    /* 00671a64: lea edx, [esp + 0x124] */ r_edx = (u32)(r_esp+0x124u);
    /* 00671a6b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00671a6d: push 0x93a3dc */ { u32 v = 0x93a3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00671a72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a73: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x671a78u); f_008598c0();
    /* 00671a78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671a7d: jne 0x671ab5 */ if (!fZ) goto L_00671ab5;
L_00671a7f:; BB(0x00671a7f);
    /* 00671a7f: lea ecx, [esp + 0x12a] */ r_ecx = (u32)(r_esp+0x12au);
    /* 00671a86: lea edx, [esp + 0x1a4] */ r_edx = (u32)(r_esp+0x1a4u);
    /* 00671a8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00671a8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a8f: push 0x93a400 */ { u32 v = 0x93a400u; r_esp -= 4; W32(r_esp, v); }
    /* 00671a94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671a95: call 0x859b7a */ r_esp -= 4; W32(r_esp, 0x671a9au); f_00859b7a();
    /* 00671a9a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671a9d: mov ecx, dword ptr [esp + 0x1a4] */ r_ecx = R32((u32)(r_esp+0x1a4u));
    /* 00671aa4: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00671aa8: add ecx, dword ptr [edx + 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x64u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00671aab: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 00671aae: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 00671ab2: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00671ab5:; BB(0x00671ab5);
    /* 00671ab5: lea edx, [esp + 0x124] */ r_edx = (u32)(r_esp+0x124u);
    /* 00671abc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00671abe: push 0x93a3e4 */ { u32 v = 0x93a3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00671ac3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671ac4: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x671ac9u); f_008598c0();
    /* 00671ac9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671acc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671ace: jne 0x67173e */ if (!fZ) goto L_0067173e;
L_00671ad4:; BB(0x00671ad4);
    /* 00671ad4: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00671ad8: lea edi, [esp + 0x1a8] */ r_edi = (u32)(r_esp+0x1a8u);
    /* 00671adf: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00671ae2: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00671ae5: mov byte ptr [ecx + 0x61], dl */ W8((u32)(r_ecx+0x61u), (u8)r_edx);
    /* 00671ae8: mov esi, 0x93a300 */ r_esi = 0x93a300u;
    /* 00671aed: mov ecx, 0xa0 */ r_ecx = 0xa0u;
    /* 00671af2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671af3: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00671af6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00671af8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671af9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00671afc: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00671afe: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00671b02: mov ecx, eax */ r_ecx = r_eax;
    /* 00671b04: movsx esi, byte ptr [eax + 0x61] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x61u));
    /* 00671b08: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00671b0d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00671b0f: mov eax, esi */ r_eax = r_esi;
    /* 00671b11: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00671b14: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00671b17: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00671b19: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00671b1d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00671b20: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671b22: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671b24: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671b26: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00671b28: mov eax, edx */ r_eax = r_edx;
    /* 00671b2a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00671b2d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00671b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00671b31: mov edi, 0 */ r_edi = 0x0u;
    /* 00671b36: jg 0x671b3a */ if ((!fZ&&fS==fO)) goto L_00671b3a;
L_00671b38:; BB(0x00671b38);
    /* 00671b38: mov eax, edx */ r_eax = r_edx;
L_00671b3a:; BB(0x00671b3a);
    /* 00671b3a: mov edx, 1 */ r_edx = 0x1u;
    /* 00671b3f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671b42: jl 0x671b46 */ if ((fS!=fO)) goto L_00671b46;
L_00671b44:; BB(0x00671b44);
    /* 00671b44: mov eax, edx */ r_eax = r_edx;
L_00671b46:; BB(0x00671b46);
    /* 00671b46: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00671b48: mov edx, ecx */ r_edx = r_ecx;
    /* 00671b4a: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 00671b4d: mov eax, 0 */ r_eax = 0x0u;
    /* 00671b52: jge 0x671b56 */ if ((fS==fO)) goto L_00671b56;
L_00671b54:; BB(0x00671b54);
    /* 00671b54: mov esi, eax */ r_esi = r_eax;
L_00671b56:; BB(0x00671b56);
    /* 00671b56: mov eax, 8 */ r_eax = 0x8u;
    /* 00671b5b: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671b5e: jle 0x671b62 */ if ((fZ||fS!=fO)) goto L_00671b62;
L_00671b60:; BB(0x00671b60);
    /* 00671b60: mov esi, eax */ r_esi = r_eax;
L_00671b62:; BB(0x00671b62);
    /* 00671b62: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00671b64: mov eax, dword ptr [esp + esi*8 + 0x1a8] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1a8u));
    /* 00671b6b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00671b6e: mov eax, dword ptr [esp + esi*8 + 0x1ac] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1acu));
    /* 00671b75: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00671b78: mov eax, dword ptr [esp + esi*8 + 0x1a8] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1a8u));
    /* 00671b7f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00671b82: mov eax, dword ptr [esp + esi*8 + 0x1b4] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1b4u));
    /* 00671b89: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00671b8c: mov eax, dword ptr [esp + esi*8 + 0x1b0] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1b0u));
    /* 00671b93: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00671b96: mov eax, dword ptr [esp + esi*8 + 0x1ac] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1acu));
    /* 00671b9d: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00671ba0: mov eax, dword ptr [esp + esi*8 + 0x1b0] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1b0u));
    /* 00671ba7: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 00671baa: mov eax, dword ptr [esp + esi*8 + 0x1b4] */ r_eax = R32((u32)(r_esp+r_esi*8+0x1b4u));
    /* 00671bb1: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00671bb4: add edx, 0x6c */ {  u32 a = r_edx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00671bb7: mov esi, dword ptr [edx + 0x68] */ r_esi = R32((u32)(r_edx+0x68u));
    /* 00671bba: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00671bbe: jmp 0x67173e */ goto L_0067173e;
L_00671bc3:; BB(0x00671bc3);
    /* 00671bc3: add esp, 0x264 */ {  u32 a = r_esp; u32 b = 0x264u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00671bc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00671bca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671bcb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00671bcc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671bcd: ret 8 */ FN_RET(0x00671384); r_esp += 12; return;
L_00671bd0:; BB(0x00671bd0);
    /* 00671bd0: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00671bd4: jmp 0x67165b */ goto L_0067165b;
L_00671bd9:; BB(0x00671bd9);
    /* 00671bd9: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00671bdd: jmp 0x671653 */ goto L_00671653;
L_00671be2:; BB(0x00671be2);
    /* 00671be2: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00671be6: jmp 0x67186f */ goto L_0067186f;
L_00671beb:; BB(0x00671beb);
    /* 00671beb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00671bef: jmp 0x671867 */ goto L_00671867;
L_00671bf4:; BB(0x00671bf4);
    /* 00671bf4: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00671bf8: mov eax, ebx */ r_eax = r_ebx;
    /* 00671bfa: jmp 0x6714cb */ goto L_006714cb;
L_00671bff:; BB(0x00671bff);
    /* 00671bff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671c01: jne 0x6714a2 */ if (!fZ) goto L_006714a2;
L_00671c07:; BB(0x00671c07);
    /* 00671c07: jmp 0x6714bd */ goto L_006714bd;
}

void f_00671c0c(void) /* sub_671C0C */
{
    FN_ENTER(0x00671c0c);
    /* 00671c0c: push 0x93a424 */ { u32 v = 0x93a424u; r_esp -= 4; W32(r_esp, v); }
    /* 00671c11: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x671c16u); f_008009dc();
    /* 00671c16: mov dword ptr [0xa8fddc], eax */ W32((u32)(0xa8fddcu), r_eax);
    /* 00671c1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671c1c: ret  */ FN_RET(0x00671c0c); r_esp += 4; return;
}

void f_00671c20(void) /* sub_671C20 */
{
    FN_ENTER(0x00671c20);
    /* 00671c20: push 0x93a3c0 */ { u32 v = 0x93a3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671c25: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x671c2au); f_008009dc();
    /* 00671c2a: mov dword ptr [0xa8fde8], eax */ W32((u32)(0xa8fde8u), r_eax);
    /* 00671c2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671c30: ret  */ FN_RET(0x00671c20); r_esp += 4; return;
}

void f_00671c34(void) /* sub_671C34 */
{
    FN_ENTER(0x00671c34);
    /* 00671c34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671c35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00671c37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671c39: call 0x671c58 */ r_esp -= 4; W32(r_esp, 0x671c3eu); f_00671c58();
    /* 00671c3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00671c42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671c44: jne 0x671c4a */ if (!fZ) goto L_00671c4a;
L_00671c46:; BB(0x00671c46);
    /* 00671c46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00671c47: ret 4 */ FN_RET(0x00671c34); r_esp += 8; return;
L_00671c4a:; BB(0x00671c4a);
    /* 00671c4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671c4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x671c50u); f_005c2f74();
    /* 00671c50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671c51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00671c52: ret 4 */ FN_RET(0x00671c34); r_esp += 8; return;
}

void f_00671c58(void) /* sub_671C58 */
{
    FN_ENTER(0x00671c58);
    /* 00671c58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671c59: mov ebp, esp */ r_ebp = r_esp;
    /* 00671c5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671c5d: push 0x8e9250 */ { u32 v = 0x8e9250u; r_esp -= 4; W32(r_esp, v); }
    /* 00671c62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671c68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671c69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00671c70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671c73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00671c76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00671c79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00671c7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00671c7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00671c82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671c89: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00671c8c: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 00671c92: mov dword ptr [eax], 0xb35ea8 */ W32((u32)(r_eax), 0xb35ea8u);
    /* 00671c98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671c9a: je 0x671cb6 */ if (fZ) goto L_00671cb6;
L_00671c9c:; BB(0x00671c9c);
    /* 00671c9c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00671ca0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00671ca5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00671ca9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00671cac: mov dword ptr [eax + 0xd8], 0 */ W32((u32)(r_eax+0xd8u), 0x0u);
L_00671cb6:; BB(0x00671cb6);
    /* 00671cb6: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00671cbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671cbe: je 0x671cda */ if (fZ) goto L_00671cda;
L_00671cc0:; BB(0x00671cc0);
    /* 00671cc0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00671cc4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00671cc9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00671ccd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00671cd0: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
L_00671cda:; BB(0x00671cda);
    /* 00671cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671cdb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x671ce0u); f_007b4e84();
    /* 00671ce0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671ce1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00671ce4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x671ce9u); f_007b9c8c();
    /* 00671ce9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671cf0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00671cf3: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x671cf8u); f_006131f4();
    /* 00671cf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671cfb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00671d02: mov esp, ebp */ r_esp = r_ebp;
    /* 00671d04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671d05: ret  */ FN_RET(0x00671c58); r_esp += 4; return;
}

void f_00671d08(void) /* sub_671D08 */
{
    FN_ENTER(0x00671d08);
    /* 00671d08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671d09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00671d0b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x671d10u); f_004f7c84();
    /* 00671d10: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 00671d16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671d18: jne 0x671d23 */ if (!fZ) goto L_00671d23;
L_00671d1a:; BB(0x00671d1a);
    /* 00671d1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671d1c: call 0x671dcc */ r_esp -= 4; W32(r_esp, 0x671d21u); f_00671dcc();
    /* 00671d21: jmp 0x671d38 */ goto L_00671d38;
L_00671d23:; BB(0x00671d23);
    /* 00671d23: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671d26: jne 0x671d31 */ if (!fZ) goto L_00671d31;
L_00671d28:; BB(0x00671d28);
    /* 00671d28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671d2a: call 0x671d94 */ r_esp -= 4; W32(r_esp, 0x671d2fu); f_00671d94();
    /* 00671d2f: jmp 0x671d38 */ goto L_00671d38;
L_00671d31:; BB(0x00671d31);
    /* 00671d31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671d33: call 0x671d50 */ r_esp -= 4; W32(r_esp, 0x671d38u); f_00671d50();
L_00671d38:; BB(0x00671d38);
    /* 00671d38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671d3a: call 0x671fcc */ r_esp -= 4; W32(r_esp, 0x671d3fu); f_00671fcc();
    /* 00671d3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671d41: call 0x672008 */ r_esp -= 4; W32(r_esp, 0x671d46u); f_00672008();
    /* 00671d46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671d48: call 0x67206c */ r_esp -= 4; W32(r_esp, 0x671d4du); f_0067206c();
    /* 00671d4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00671d4e: ret  */ FN_RET(0x00671d08); r_esp += 4; return;
}

void f_00671d50(void) /* sub_671D50 */
{
    FN_ENTER(0x00671d50);
    /* 00671d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671d51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00671d53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00671d55: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x671d5au); f_00671d78();
    /* 00671d5a: cmp eax, dword ptr [ebx + 0xcc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00671d60: je 0x671d76 */ if (fZ) goto L_00671d76;
L_00671d62:; BB(0x00671d62);
    /* 00671d62: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00671d6c: mov dword ptr [ebx + 0xd4], 0x3f800000 */ W32((u32)(r_ebx+0xd4u), 0x3f800000u);
L_00671d76:; BB(0x00671d76);
    /* 00671d76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00671d77: ret  */ FN_RET(0x00671d50); r_esp += 4; return;
}

void f_00671d78(void) /* sub_671D78 */
{
    FN_ENTER(0x00671d78);
    /* 00671d78: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x671d7du); f_00670fb8();
    /* 00671d7d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671d80: jne 0x671d85 */ if (!fZ) goto L_00671d85;
L_00671d82:; BB(0x00671d82);
    /* 00671d82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671d84: ret  */ FN_RET(0x00671d78); r_esp += 4; return;
L_00671d85:; BB(0x00671d85);
    /* 00671d85: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00671d88: jne 0x671d90 */ if (!fZ) goto L_00671d90;
L_00671d8a:; BB(0x00671d8a);
    /* 00671d8a: mov eax, 8 */ r_eax = 0x8u;
    /* 00671d8f: ret  */ FN_RET(0x00671d78); r_esp += 4; return;
L_00671d90:; BB(0x00671d90);
    /* 00671d90: ret  */ FN_RET(0x00671d78); r_esp += 4; return;
}

void f_00671d94(void) /* sub_671D94 */
{
    FN_ENTER(0x00671d94);
    /* 00671d94: fld dword ptr [0x93a53c] */ FPUSH(R_F32((u32)(0x93a53cu)));
    /* 00671d9a: fadd dword ptr [ecx + 0xd4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xd4u));
    /* 00671da0: fcom dword ptr [0x93a538] */ fx_compare(ST(0), R_F32((u32)(0x93a538u))); 
    /* 00671da6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00671da8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00671da9: jb 0x671dc3 */ if (fC) goto L_00671dc3;
L_00671dab:; BB(0x00671dab);
    /* 00671dab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00671dad: mov dword ptr [ecx + 0xc8], 2 */ W32((u32)(r_ecx+0xc8u), 0x2u);
    /* 00671db7: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00671dbc: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 00671dc2: ret  */ FN_RET(0x00671d94); r_esp += 4; return;
L_00671dc3:; BB(0x00671dc3);
    /* 00671dc3: fstp dword ptr [ecx + 0xd4] */ W_F32((u32)(r_ecx+0xd4u), ST(0)); FPOP();
    /* 00671dc9: ret  */ FN_RET(0x00671d94); r_esp += 4; return;
}

void f_00671dcc(void) /* sub_671DCC */
{
    FN_ENTER(0x00671dcc);
    /* 00671dcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00671dcd: mov edi, ecx */ r_edi = r_ecx;
    /* 00671dcf: fld dword ptr [0x93a534] */ FPUSH(R_F32((u32)(0x93a534u)));
    /* 00671dd5: fadd dword ptr [edi + 0xd4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xd4u));
    /* 00671ddb: fcom dword ptr [0x93a530] */ fx_compare(ST(0), R_F32((u32)(0x93a530u))); 
    /* 00671de1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00671de3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00671de4: jbe 0x671dee */ if ((fC||fZ)) goto L_00671dee;
L_00671de6:; BB(0x00671de6);
    /* 00671de6: fstp dword ptr [edi + 0xd4] */ W_F32((u32)(r_edi+0xd4u), ST(0)); FPOP();
    /* 00671dec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ded: ret  */ FN_RET(0x00671dcc); r_esp += 4; return;
L_00671dee:; BB(0x00671dee);
    /* 00671dee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00671df0: mov dword ptr [edi + 0xc8], 1 */ W32((u32)(r_edi+0xc8u), 0x1u);
    /* 00671dfa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671dfc: mov dword ptr [edi + 0xd4], eax */ W32((u32)(r_edi+0xd4u), r_eax);
    /* 00671e02: mov ecx, edi */ r_ecx = r_edi;
    /* 00671e04: call 0x671e1c */ r_esp -= 4; W32(r_esp, 0x671e09u); f_00671e1c();
    /* 00671e09: mov ecx, edi */ r_ecx = r_edi;
    /* 00671e0b: call 0x671ed4 */ r_esp -= 4; W32(r_esp, 0x671e10u); f_00671ed4();
    /* 00671e10: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 00671e1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671e1b: ret  */ FN_RET(0x00671dcc); r_esp += 4; return;
}

void f_00671e1c(void) /* sub_671E1C */
{
    FN_ENTER(0x00671e1c);
    /* 00671e1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00671e1d: mov edi, ecx */ r_edi = r_ecx;
    /* 00671e1f: mov ecx, edi */ r_ecx = r_edi;
    /* 00671e21: call 0x671d78 */ r_esp -= 4; W32(r_esp, 0x671e26u); f_00671d78();
    /* 00671e26: mov dword ptr [edi + 0xcc], eax */ W32((u32)(r_edi+0xccu), r_eax);
    /* 00671e2c: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00671e2f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00671e32: ja 0x671ec2 */ if ((!fC&&!fZ)) goto L_00671ec2;
L_00671e38:; BB(0x00671e38);
    /* 00671e38: mov eax, dword ptr [eax*4 + 0x93a43c] */ r_eax = R32((u32)(r_eax*4+0x93a43cu));
    /* 00671e3f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00671ec2:; BB(0x00671ec2);
    /* 00671ec2: movzx eax, word ptr [edi + 0xd2] */ r_eax = (u32)R16((u32)(r_edi+0xd2u));
    /* 00671ec9: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e1c); r_esp += 4; return;
}

void f_00671e41(void)
{
    FN_ENTER(0x00671e41);
    /* 00671e41: mov eax, 0xd */ r_eax = 0xdu;
    /* 00671e46: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671e4d: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e41); r_esp += 4; return;
}

void f_00671e52(void)
{
    FN_ENTER(0x00671e52);
    /* 00671e52: mov eax, 1 */ r_eax = 0x1u;
    /* 00671e57: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671e5e: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e52); r_esp += 4; return;
}

void f_00671e60(void)
{
    FN_ENTER(0x00671e60);
    /* 00671e60: mov eax, 0x11 */ r_eax = 0x11u;
    /* 00671e65: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671e6c: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e60); r_esp += 4; return;
}

void f_00671e6e(void)
{
    FN_ENTER(0x00671e6e);
    /* 00671e6e: mov eax, 0xb */ r_eax = 0xbu;
    /* 00671e73: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671e7a: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e6e); r_esp += 4; return;
}

void f_00671e7c(void)
{
    FN_ENTER(0x00671e7c);
    /* 00671e7c: mov eax, 0xa */ r_eax = 0xau;
    /* 00671e81: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671e88: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e7c); r_esp += 4; return;
}

void f_00671e8a(void)
{
    FN_ENTER(0x00671e8a);
    /* 00671e8a: mov eax, 0xf */ r_eax = 0xfu;
    /* 00671e8f: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671e96: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e8a); r_esp += 4; return;
}

void f_00671e98(void)
{
    FN_ENTER(0x00671e98);
    /* 00671e98: mov eax, 0xe */ r_eax = 0xeu;
    /* 00671e9d: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671ea4: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671e98); r_esp += 4; return;
}

void f_00671ea6(void)
{
    FN_ENTER(0x00671ea6);
    /* 00671ea6: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00671eab: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671eb2: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671ea6); r_esp += 4; return;
}

void f_00671eb4(void)
{
    FN_ENTER(0x00671eb4);
    /* 00671eb4: mov eax, 0xc */ r_eax = 0xcu;
    /* 00671eb9: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671ec0: jmp 0x671ed0 */ goto L_00671ed0;
L_00671ed0:; BB(0x00671ed0);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671eb4); r_esp += 4; return;
}

void f_00671ec2(void)
{
    FN_ENTER(0x00671ec2);
    /* 00671ec2: movzx eax, word ptr [edi + 0xd2] */ r_eax = (u32)R16((u32)(r_edi+0xd2u));
    /* 00671ec9: mov word ptr [edi + 0xd0], ax */ W16((u32)(r_edi+0xd0u), (u16)r_eax);
    /* 00671ed0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00671ed1: ret  */ FN_RET(0x00671ec2); r_esp += 4; return;
}

void f_00671ed4(void) /* sub_671ED4 */
{
    FN_ENTER(0x00671ed4);
    /* 00671ed4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00671ed5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00671ed8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00671eda: movsx eax, word ptr [ebx + 0xd0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xd0u));
    /* 00671ee1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671ee4: jne 0x671fc5 */ if (!fZ) goto L_00671fc5;
L_00671eea:; BB(0x00671eea);
    /* 00671eea: mov ecx, dword ptr [ebx + 0xd8] */ r_ecx = R32((u32)(r_ebx+0xd8u));
    /* 00671ef0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671ef2: je 0x671f56 */ if (fZ) goto L_00671f56;
L_00671ef4:; BB(0x00671ef4);
    /* 00671ef4: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00671efb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00671f03: mov dword ptr [esp + 8], 0x41900000 */ W32((u32)(r_esp+0x8u), 0x41900000u);
    /* 00671f0b: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 00671f10: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x671f15u); f_00508d4c();
    /* 00671f15: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x671f1au); f_0082d7b0();
    /* 00671f1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671f1c: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x671f21u); f_00830cd8();
    /* 00671f21: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00671f24: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x671f29u); f_0082d838();
    /* 00671f29: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00671f2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671f2e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x671f33u); f_0082d8bc();
    /* 00671f33: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00671f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671f37: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00671f3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671f3d: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x671f42u); f_00830aa0();
    /* 00671f42: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00671f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671f46: mov ecx, dword ptr [ebx + 0xd8] */ r_ecx = R32((u32)(r_ebx+0xd8u));
    /* 00671f4c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x671f51u); f_00508db8();
    /* 00671f51: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x671f56u); f_0082da80();
L_00671f56:; BB(0x00671f56);
    /* 00671f56: mov ecx, dword ptr [ebx + 0xdc] */ r_ecx = R32((u32)(r_ebx+0xdcu));
    /* 00671f5c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671f5e: je 0x671fc5 */ if (fZ) goto L_00671fc5;
L_00671f60:; BB(0x00671f60);
    /* 00671f60: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00671f68: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00671f70: mov dword ptr [esp + 0x14], 0xc1900000 */ W32((u32)(r_esp+0x14u), 0xc1900000u);
    /* 00671f78: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 00671f7d: call 0x508d4c */ r_esp -= 4; W32(r_esp, 0x671f82u); f_00508d4c();
    /* 00671f82: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x671f87u); f_0082d7b0();
    /* 00671f87: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671f89: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x671f8eu); f_00830cd8();
    /* 00671f8e: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00671f91: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x671f96u); f_0082d838();
    /* 00671f96: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00671f99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671f9b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x671fa0u); f_0082d8bc();
    /* 00671fa0: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00671fa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671fa5: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00671fa9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00671fab: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x671fb0u); f_00830aa0();
    /* 00671fb0: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00671fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671fb5: mov ecx, dword ptr [ebx + 0xdc] */ r_ecx = R32((u32)(r_ebx+0xdcu));
    /* 00671fbb: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x671fc0u); f_00508db8();
    /* 00671fc0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x671fc5u); f_0082da80();
L_00671fc5:; BB(0x00671fc5);
    /* 00671fc5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00671fc8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00671fc9: ret  */ FN_RET(0x00671ed4); r_esp += 4; return;
}

void f_00671fcc(void) /* sub_671FCC */
{
    FN_ENTER(0x00671fcc);
    /* 00671fcc: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00671fd1: cmp eax, dword ptr [0xa8fe00] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8fe00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00671fd7: je 0x672007 */ if (fZ) goto L_00672007;
L_00671fd9:; BB(0x00671fd9);
    /* 00671fd9: mov ecx, dword ptr [0xa8fdf0] */ r_ecx = R32((u32)(0xa8fdf0u));
    /* 00671fdf: mov dword ptr [0xa8fe00], eax */ W32((u32)(0xa8fe00u), r_eax);
    /* 00671fe4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671fe6: je 0x671ff4 */ if (fZ) goto L_00671ff4;
L_00671fe8:; BB(0x00671fe8);
    /* 00671fe8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00671fea: mov edx, 1 */ r_edx = 0x1u;
    /* 00671fef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671ff0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671ff1: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x671ff4u); call_ind(t); }
L_00671ff4:; BB(0x00671ff4);
    /* 00671ff4: mov ecx, dword ptr [0xa8fdf4] */ r_ecx = R32((u32)(0xa8fdf4u));
    /* 00671ffa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00671ffc: je 0x672007 */ if (fZ) goto L_00672007;
L_00671ffe:; BB(0x00671ffe);
    /* 00671ffe: push -0x14 */ { u32 v = 0xffffffecu; r_esp -= 4; W32(r_esp, v); }
    /* 00672000: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672002: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00672004: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x672007u); call_ind(t); }
L_00672007:; BB(0x00672007);
    /* 00672007: ret  */ FN_RET(0x00671fcc); r_esp += 4; return;
}

