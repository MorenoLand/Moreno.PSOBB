#include "protos.h"

void f_006bb0ac(void) /* sub_6BB0AC */
{
    FN_ENTER(0x006bb0ac);
    /* 006bb0ac: push 0x969be0 */ { u32 v = 0x969be0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb0b1: push 0x40008 */ { u32 v = 0x40008u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb0b6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bb0bbu); f_0061cdb0();
    /* 006bb0bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb0be: ret  */ FN_RET(0x006bb0ac); r_esp += 4; return;
}

void f_006bb0c0(void) /* sub_6BB0C0 */
{
    FN_ENTER(0x006bb0c0);
    /* 006bb0c0: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006bb0c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb0c8: je 0x6bb0d7 */ if (fZ) goto L_006bb0d7;
L_006bb0ca:; BB(0x006bb0ca);
    /* 006bb0ca: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006bb0ce: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb0d3: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006bb0d7:; BB(0x006bb0d7);
    /* 006bb0d7: ret  */ FN_RET(0x006bb0c0); r_esp += 4; return;
}

void f_006bb0d8(void) /* sub_6BB0D8 */
{
    FN_ENTER(0x006bb0d8);
    /* 006bb0d8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006bb0dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb0de: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6bb0e3u); f_006c1bd4();
    /* 006bb0e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb0e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb0e6: je 0x6bb0fe */ if (fZ) goto L_006bb0fe;
L_006bb0e8:; BB(0x006bb0e8);
    /* 006bb0e8: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb0ed: push 0xa95680 */ { u32 v = 0xa95680u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb0f2: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb0f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb0f6: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bb0fbu); f_0086b6b8();
    /* 006bb0fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006bb0fe:; BB(0x006bb0fe);
    /* 006bb0fe: ret  */ FN_RET(0x006bb0d8); r_esp += 4; return;
}

void f_006bb100(void) /* sub_6BB100 */
{
    FN_ENTER(0x006bb100);
    /* 006bb100: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb101: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6bb106u); f_007a61a4();
    /* 006bb106: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb109: je 0x6bb116 */ if (fZ) goto L_006bb116;
L_006bb10b:; BB(0x006bb10b);
    /* 006bb10b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb10f: call 0x6bb130 */ r_esp -= 4; W32(r_esp, 0x6bb114u); f_006bb130();
    /* 006bb114: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb115: ret  */ FN_RET(0x006bb100); r_esp += 4; return;
L_006bb116:; BB(0x006bb116);
    /* 006bb116: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb11a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb11c: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006bb11f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb120: call 0x6b9b44 */ r_esp -= 4; W32(r_esp, 0x6bb125u); f_006b9b44();
    /* 006bb125: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb128: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb129: ret  */ FN_RET(0x006bb100); r_esp += 4; return;
}

void f_006bb130(void) /* sub_6BB130 */
{
    FN_ENTER(0x006bb130);
    /* 006bb130: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb131: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb134: jl 0x6bb18d */ if ((fS!=fO)) goto L_006bb18d;
L_006bb136:; BB(0x006bb136);
    /* 006bb136: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb13b: jg 0x6bb18d */ if ((!fZ&&fS==fO)) goto L_006bb18d;
L_006bb13d:; BB(0x006bb13d);
    /* 006bb13d: mov esi, dword ptr [0xa9cd68] */ r_esi = R32((u32)(0xa9cd68u));
    /* 006bb143: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb145: jl 0x6bb18d */ if ((fS!=fO)) goto L_006bb18d;
L_006bb147:; BB(0x006bb147);
    /* 006bb147: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb14a: jge 0x6bb18d */ if ((fS==fO)) goto L_006bb18d;
L_006bb14c:; BB(0x006bb14c);
    /* 006bb14c: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006bb14f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bb151: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb154: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bb157: lea ebx, [ebx + eax + 1] */ r_ebx = (u32)(r_ebx+r_eax+0x1u);
    /* 006bb15b: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb15e: mov eax, ecx */ r_eax = r_ecx;
    /* 006bb160: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb161: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb163: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb165: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb167: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb169: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb16c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb16e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb170: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb172: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb176: jle 0x6bb190 */ if ((fZ||fS!=fO)) goto L_006bb190;
L_006bb178:; BB(0x006bb178);
    /* 006bb178: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb17a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb17d: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb17f: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb184: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb186: or byte ptr [ebx + esi*8 + 0xa95680], dl */ { u32 ad = (u32)(r_ebx+r_esi*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006bb18d:; BB(0x006bb18d);
    /* 006bb18d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb18e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb18f: ret  */ FN_RET(0x006bb130); r_esp += 4; return;
L_006bb190:; BB(0x006bb190);
    /* 006bb190: movzx eax, byte ptr [ebx + esi*8 + 0xa9567f] */ r_eax = (u32)R8((u32)(r_ebx+r_esi*8+0xa9567fu));
    /* 006bb198: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb19d: mov byte ptr [ebx + esi*8 + 0xa9567f], al */ W8((u32)(r_ebx+r_esi*8+0xa9567fu), (u8)r_eax);
    /* 006bb1a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb1a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb1a6: ret  */ FN_RET(0x006bb130); r_esp += 4; return;
}

void f_006bb1a8(void) /* sub_6BB1A8 */
{
    FN_ENTER(0x006bb1a8);
    /* 006bb1a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb1a9: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6bb1aeu); f_007a61a4();
    /* 006bb1ae: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb1b1: je 0x6bb1be */ if (fZ) goto L_006bb1be;
L_006bb1b3:; BB(0x006bb1b3);
    /* 006bb1b3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb1b7: call 0x6bb1d8 */ r_esp -= 4; W32(r_esp, 0x6bb1bcu); f_006bb1d8();
    /* 006bb1bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb1bd: ret  */ FN_RET(0x006bb1a8); r_esp += 4; return;
L_006bb1be:; BB(0x006bb1be);
    /* 006bb1be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb1c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb1c4: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006bb1c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb1c8: call 0x6b9b44 */ r_esp -= 4; W32(r_esp, 0x6bb1cdu); f_006b9b44();
    /* 006bb1cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb1d1: ret  */ FN_RET(0x006bb1a8); r_esp += 4; return;
}

void f_006bb1d8(void) /* sub_6BB1D8 */
{
    FN_ENTER(0x006bb1d8);
    /* 006bb1d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb1d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb1da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb1dc: jl 0x6bb237 */ if ((fS!=fO)) goto L_006bb237;
L_006bb1de:; BB(0x006bb1de);
    /* 006bb1de: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb1e3: jg 0x6bb237 */ if ((!fZ&&fS==fO)) goto L_006bb237;
L_006bb1e5:; BB(0x006bb1e5);
    /* 006bb1e5: mov esi, dword ptr [0xa9cd68] */ r_esi = R32((u32)(0xa9cd68u));
    /* 006bb1eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb1ed: jl 0x6bb237 */ if ((fS!=fO)) goto L_006bb237;
L_006bb1ef:; BB(0x006bb1ef);
    /* 006bb1ef: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb1f2: jge 0x6bb237 */ if ((fS==fO)) goto L_006bb237;
L_006bb1f4:; BB(0x006bb1f4);
    /* 006bb1f4: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006bb1f7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bb1f9: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb1fc: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bb1ff: lea ebx, [ebx + eax + 1] */ r_ebx = (u32)(r_ebx+r_eax+0x1u);
    /* 006bb203: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb206: mov eax, ecx */ r_eax = r_ecx;
    /* 006bb208: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb209: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb20b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb20d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb20f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb211: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb214: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb216: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb218: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb21a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb21c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb21e: jle 0x6bb23a */ if ((fZ||fS!=fO)) goto L_006bb23a;
L_006bb220:; BB(0x006bb220);
    /* 006bb220: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb222: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb225: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb227: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb22c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb22e: not edx */ r_edx = ~r_edx;
    /* 006bb230: and byte ptr [ebx + esi*8 + 0xa95680], dl */ { u32 ad = (u32)(r_ebx+r_esi*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006bb237:; BB(0x006bb237);
    /* 006bb237: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb238: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb239: ret  */ FN_RET(0x006bb1d8); r_esp += 4; return;
L_006bb23a:; BB(0x006bb23a);
    /* 006bb23a: movzx eax, byte ptr [ebx + esi*8 + 0xa9567f] */ r_eax = (u32)R8((u32)(r_ebx+r_esi*8+0xa9567fu));
    /* 006bb242: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb247: mov byte ptr [ebx + esi*8 + 0xa9567f], al */ W8((u32)(r_ebx+r_esi*8+0xa9567fu), (u8)r_eax);
    /* 006bb24e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb24f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb250: ret  */ FN_RET(0x006bb1d8); r_esp += 4; return;
}

void f_006bb254(void) /* sub_6BB254 */
{
    FN_ENTER(0x006bb254);
    /* 006bb254: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb255: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006bb259: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb25b: jl 0x6bb2be */ if ((fS!=fO)) goto L_006bb2be;
L_006bb25d:; BB(0x006bb25d);
    /* 006bb25d: cmp ecx, 0x3ff */ {  u32 a = r_ecx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb263: jg 0x6bb2be */ if ((!fZ&&fS==fO)) goto L_006bb2be;
L_006bb265:; BB(0x006bb265);
    /* 006bb265: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 006bb26b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb26d: jl 0x6bb2be */ if ((fS!=fO)) goto L_006bb2be;
L_006bb26f:; BB(0x006bb26f);
    /* 006bb26f: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb272: jge 0x6bb2be */ if ((fS==fO)) goto L_006bb2be;
L_006bb274:; BB(0x006bb274);
    /* 006bb274: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 006bb277: mov edx, eax */ r_edx = r_eax;
    /* 006bb279: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006bb27c: shr edx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bb27f: lea ecx, [edx + ecx + 1] */ r_ecx = (u32)(r_edx+r_ecx+0x1u);
    /* 006bb283: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006bb286: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb287: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb289: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb28b: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb28e: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb290: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb294: jle 0x6bb2c5 */ if ((fZ||fS!=fO)) goto L_006bb2c5;
L_006bb296:; BB(0x006bb296);
    /* 006bb296: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb298: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb29b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb29d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb29f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb2a1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb2a3: movzx ebx, byte ptr [ecx + ebx*8 + 0xa95680] */ r_ebx = (u32)R8((u32)(r_ecx+r_ebx*8+0xa95680u));
    /* 006bb2ab: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb2ad: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb2b2: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb2b4: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb2b6: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb2b8: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006bb2ba: mov eax, ebx */ r_eax = r_ebx;
    /* 006bb2bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb2bd: ret  */ FN_RET(0x006bb254); r_esp += 4; return;
L_006bb2be:; BB(0x006bb2be);
    /* 006bb2be: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006bb2c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb2c4: ret  */ FN_RET(0x006bb254); r_esp += 4; return;
L_006bb2c5:; BB(0x006bb2c5);
    /* 006bb2c5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb2c7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb2c9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb2cb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb2cd: movzx eax, byte ptr [ecx + ebx*8 + 0xa9567f] */ r_eax = (u32)R8((u32)(r_ecx+r_ebx*8+0xa9567fu));
    /* 006bb2d5: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb2d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb2d9: ret  */ FN_RET(0x006bb254); r_esp += 4; return;
}

void f_006bb2dc(void) /* sub_6BB2DC */
{
    FN_ENTER(0x006bb2dc);
    /* 006bb2dc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bb2df: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6bb2e4u); f_007a61a4();
    /* 006bb2e4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb2e7: je 0x6bb2fa */ if (fZ) goto L_006bb2fa;
L_006bb2e9:; BB(0x006bb2e9);
    /* 006bb2e9: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006bb2ed: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006bb2f1: call 0x6bb320 */ r_esp -= 4; W32(r_esp, 0x6bb2f6u); f_006bb320();
    /* 006bb2f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb2f9: ret  */ FN_RET(0x006bb2dc); r_esp += 4; return;
L_006bb2fa:; BB(0x006bb2fa);
    /* 006bb2fa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006bb2fe: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006bb302: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb303: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 006bb306: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb309: call 0x6b9b84 */ r_esp -= 4; W32(r_esp, 0x6bb30eu); f_006b9b84();
    /* 006bb30e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bb311: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb314: ret  */ FN_RET(0x006bb2dc); r_esp += 4; return;
}

void f_006bb318(void) /* sub_6BB318 */
{
    FN_ENTER(0x006bb318);
    /* 006bb318: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006bb31c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006bb320: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb321: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb322: mov esi, eax */ r_esi = r_eax;
    /* 006bb324: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb326: jl 0x6bb378 */ if ((fS!=fO)) goto L_006bb378;
L_006bb328:; BB(0x006bb328);
    /* 006bb328: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb32e: jg 0x6bb378 */ if ((!fZ&&fS==fO)) goto L_006bb378;
L_006bb330:; BB(0x006bb330);
    /* 006bb330: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb332: jl 0x6bb378 */ if ((fS!=fO)) goto L_006bb378;
L_006bb334:; BB(0x006bb334);
    /* 006bb334: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb337: jge 0x6bb378 */ if ((fS==fO)) goto L_006bb378;
L_006bb339:; BB(0x006bb339);
    /* 006bb339: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006bb33c: mov ebx, eax */ r_ebx = r_eax;
    /* 006bb33e: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb341: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bb344: lea ebx, [ebx + edx + 1] */ r_ebx = (u32)(r_ebx+r_edx+0x1u);
    /* 006bb348: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb34b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb34c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb34e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb350: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb352: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb354: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb357: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb359: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb35b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb35d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb35f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb361: jle 0x6bb37b */ if ((fZ||fS!=fO)) goto L_006bb37b;
L_006bb363:; BB(0x006bb363);
    /* 006bb363: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb365: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb368: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb36a: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb36f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb371: or byte ptr [ebx + esi*8 + 0xa95680], dl */ { u32 ad = (u32)(r_ebx+r_esi*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006bb378:; BB(0x006bb378);
    /* 006bb378: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb379: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb37a: ret  */ FN_RET(0x006bb318); r_esp += 4; return;
L_006bb37b:; BB(0x006bb37b);
    /* 006bb37b: movzx edx, byte ptr [ebx + esi*8 + 0xa9567f] */ r_edx = (u32)R8((u32)(r_ebx+r_esi*8+0xa9567fu));
    /* 006bb383: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb389: mov byte ptr [ebx + esi*8 + 0xa9567f], dl */ W8((u32)(r_ebx+r_esi*8+0xa9567fu), (u8)r_edx);
    /* 006bb390: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb391: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb392: ret  */ FN_RET(0x006bb318); r_esp += 4; return;
}

void f_006bb320(void) /* sub_6BB320 */
{
    FN_ENTER(0x006bb320);
    /* 006bb320: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb321: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb322: mov esi, eax */ r_esi = r_eax;
    /* 006bb324: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb326: jl 0x6bb378 */ if ((fS!=fO)) goto L_006bb378;
L_006bb328:; BB(0x006bb328);
    /* 006bb328: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb32e: jg 0x6bb378 */ if ((!fZ&&fS==fO)) goto L_006bb378;
L_006bb330:; BB(0x006bb330);
    /* 006bb330: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb332: jl 0x6bb378 */ if ((fS!=fO)) goto L_006bb378;
L_006bb334:; BB(0x006bb334);
    /* 006bb334: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb337: jge 0x6bb378 */ if ((fS==fO)) goto L_006bb378;
L_006bb339:; BB(0x006bb339);
    /* 006bb339: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006bb33c: mov ebx, eax */ r_ebx = r_eax;
    /* 006bb33e: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb341: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bb344: lea ebx, [ebx + edx + 1] */ r_ebx = (u32)(r_ebx+r_edx+0x1u);
    /* 006bb348: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb34b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb34c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb34e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb350: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb352: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb354: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb357: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb359: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb35b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb35d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb35f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb361: jle 0x6bb37b */ if ((fZ||fS!=fO)) goto L_006bb37b;
L_006bb363:; BB(0x006bb363);
    /* 006bb363: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb365: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb368: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb36a: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb36f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb371: or byte ptr [ebx + esi*8 + 0xa95680], dl */ { u32 ad = (u32)(r_ebx+r_esi*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006bb378:; BB(0x006bb378);
    /* 006bb378: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb379: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb37a: ret  */ FN_RET(0x006bb320); r_esp += 4; return;
L_006bb37b:; BB(0x006bb37b);
    /* 006bb37b: movzx edx, byte ptr [ebx + esi*8 + 0xa9567f] */ r_edx = (u32)R8((u32)(r_ebx+r_esi*8+0xa9567fu));
    /* 006bb383: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb389: mov byte ptr [ebx + esi*8 + 0xa9567f], dl */ W8((u32)(r_ebx+r_esi*8+0xa9567fu), (u8)r_edx);
    /* 006bb390: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb391: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb392: ret  */ FN_RET(0x006bb320); r_esp += 4; return;
}

void f_006bb394(void) /* sub_6BB394 */
{
    FN_ENTER(0x006bb394);
    /* 006bb394: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bb397: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6bb39cu); f_007a61a4();
    /* 006bb39c: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb39f: je 0x6bb3b2 */ if (fZ) goto L_006bb3b2;
L_006bb3a1:; BB(0x006bb3a1);
    /* 006bb3a1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006bb3a5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006bb3a9: call 0x6bb3d8 */ r_esp -= 4; W32(r_esp, 0x6bb3aeu); f_006bb3d8();
    /* 006bb3ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb3b1: ret  */ FN_RET(0x006bb394); r_esp += 4; return;
L_006bb3b2:; BB(0x006bb3b2);
    /* 006bb3b2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006bb3b6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006bb3ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb3bb: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 006bb3be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb3c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb3c1: call 0x6b9b84 */ r_esp -= 4; W32(r_esp, 0x6bb3c6u); f_006b9b84();
    /* 006bb3c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bb3c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb3cc: ret  */ FN_RET(0x006bb394); r_esp += 4; return;
}

void f_006bb3d0(void) /* sub_6BB3D0 */
{
    FN_ENTER(0x006bb3d0);
    /* 006bb3d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006bb3d4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006bb3d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb3d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb3da: mov esi, eax */ r_esi = r_eax;
    /* 006bb3dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb3de: jl 0x6bb432 */ if ((fS!=fO)) goto L_006bb432;
L_006bb3e0:; BB(0x006bb3e0);
    /* 006bb3e0: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb3e6: jg 0x6bb432 */ if ((!fZ&&fS==fO)) goto L_006bb432;
L_006bb3e8:; BB(0x006bb3e8);
    /* 006bb3e8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb3ea: jl 0x6bb432 */ if ((fS!=fO)) goto L_006bb432;
L_006bb3ec:; BB(0x006bb3ec);
    /* 006bb3ec: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb3ef: jge 0x6bb432 */ if ((fS==fO)) goto L_006bb432;
L_006bb3f1:; BB(0x006bb3f1);
    /* 006bb3f1: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006bb3f4: mov ebx, eax */ r_ebx = r_eax;
    /* 006bb3f6: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb3f9: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bb3fc: lea ebx, [ebx + edx + 1] */ r_ebx = (u32)(r_ebx+r_edx+0x1u);
    /* 006bb400: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb403: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb404: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb406: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb408: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb40a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb40c: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb40f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb411: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb413: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb415: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb419: jle 0x6bb435 */ if ((fZ||fS!=fO)) goto L_006bb435;
L_006bb41b:; BB(0x006bb41b);
    /* 006bb41b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb41d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb420: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb422: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb427: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb429: not edx */ r_edx = ~r_edx;
    /* 006bb42b: and byte ptr [ebx + esi*8 + 0xa95680], dl */ { u32 ad = (u32)(r_ebx+r_esi*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006bb432:; BB(0x006bb432);
    /* 006bb432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb433: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb434: ret  */ FN_RET(0x006bb3d0); r_esp += 4; return;
L_006bb435:; BB(0x006bb435);
    /* 006bb435: movzx edx, byte ptr [ebx + esi*8 + 0xa9567f] */ r_edx = (u32)R8((u32)(r_ebx+r_esi*8+0xa9567fu));
    /* 006bb43d: and edx, 0xfe */ {  u32 a = r_edx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb443: mov byte ptr [ebx + esi*8 + 0xa9567f], dl */ W8((u32)(r_ebx+r_esi*8+0xa9567fu), (u8)r_edx);
    /* 006bb44a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb44b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb44c: ret  */ FN_RET(0x006bb3d0); r_esp += 4; return;
}

void f_006bb3d8(void) /* sub_6BB3D8 */
{
    FN_ENTER(0x006bb3d8);
    /* 006bb3d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb3d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb3da: mov esi, eax */ r_esi = r_eax;
    /* 006bb3dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb3de: jl 0x6bb432 */ if ((fS!=fO)) goto L_006bb432;
L_006bb3e0:; BB(0x006bb3e0);
    /* 006bb3e0: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb3e6: jg 0x6bb432 */ if ((!fZ&&fS==fO)) goto L_006bb432;
L_006bb3e8:; BB(0x006bb3e8);
    /* 006bb3e8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb3ea: jl 0x6bb432 */ if ((fS!=fO)) goto L_006bb432;
L_006bb3ec:; BB(0x006bb3ec);
    /* 006bb3ec: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb3ef: jge 0x6bb432 */ if ((fS==fO)) goto L_006bb432;
L_006bb3f1:; BB(0x006bb3f1);
    /* 006bb3f1: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006bb3f4: mov ebx, eax */ r_ebx = r_eax;
    /* 006bb3f6: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb3f9: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bb3fc: lea ebx, [ebx + edx + 1] */ r_ebx = (u32)(r_ebx+r_edx+0x1u);
    /* 006bb400: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006bb403: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb404: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb406: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb408: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb40a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb40c: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb40f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb411: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb413: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb415: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb419: jle 0x6bb435 */ if ((fZ||fS!=fO)) goto L_006bb435;
L_006bb41b:; BB(0x006bb41b);
    /* 006bb41b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb41d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb420: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb422: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb427: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb429: not edx */ r_edx = ~r_edx;
    /* 006bb42b: and byte ptr [ebx + esi*8 + 0xa95680], dl */ { u32 ad = (u32)(r_ebx+r_esi*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006bb432:; BB(0x006bb432);
    /* 006bb432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb433: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb434: ret  */ FN_RET(0x006bb3d8); r_esp += 4; return;
L_006bb435:; BB(0x006bb435);
    /* 006bb435: movzx edx, byte ptr [ebx + esi*8 + 0xa9567f] */ r_edx = (u32)R8((u32)(r_ebx+r_esi*8+0xa9567fu));
    /* 006bb43d: and edx, 0xfe */ {  u32 a = r_edx; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb443: mov byte ptr [ebx + esi*8 + 0xa9567f], dl */ W8((u32)(r_ebx+r_esi*8+0xa9567fu), (u8)r_edx);
    /* 006bb44a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb44b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb44c: ret  */ FN_RET(0x006bb3d8); r_esp += 4; return;
}

void f_006bb450(void) /* sub_6BB450 */
{
    FN_ENTER(0x006bb450);
    /* 006bb450: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb451: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006bb455: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006bb459: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb45b: jl 0x6bb4b9 */ if ((fS!=fO)) goto L_006bb4b9;
L_006bb45d:; BB(0x006bb45d);
    /* 006bb45d: cmp edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb463: jg 0x6bb4b9 */ if ((!fZ&&fS==fO)) goto L_006bb4b9;
L_006bb465:; BB(0x006bb465);
    /* 006bb465: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb467: jl 0x6bb4b9 */ if ((fS!=fO)) goto L_006bb4b9;
L_006bb469:; BB(0x006bb469);
    /* 006bb469: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb46c: jge 0x6bb4b9 */ if ((fS==fO)) goto L_006bb4b9;
L_006bb46e:; BB(0x006bb46e);
    /* 006bb46e: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006bb471: mov esi, eax */ r_esi = r_eax;
    /* 006bb473: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006bb476: shr esi, 0x1d */ { u32 c = (29u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 006bb479: lea esi, [esi + edx + 1] */ r_esi = (u32)(r_esi+r_edx+0x1u);
    /* 006bb47d: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006bb480: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb481: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb483: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb485: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb488: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb48a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb48c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb48e: jle 0x6bb4c0 */ if ((fZ||fS!=fO)) goto L_006bb4c0;
L_006bb490:; BB(0x006bb490);
    /* 006bb490: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb492: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb495: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006bb498: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb49a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb49c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb49e: movzx edx, byte ptr [esi + edx*8 + 0xa95680] */ r_edx = (u32)R8((u32)(r_esi+r_edx*8+0xa95680u));
    /* 006bb4a6: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb4a8: mov esi, 1 */ r_esi = 0x1u;
    /* 006bb4ad: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006bb4af: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb4b1: and edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb4b3: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006bb4b5: mov eax, edx */ r_eax = r_edx;
    /* 006bb4b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb4b8: ret  */ FN_RET(0x006bb450); r_esp += 4; return;
L_006bb4b9:; BB(0x006bb4b9);
    /* 006bb4b9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006bb4be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb4bf: ret  */ FN_RET(0x006bb450); r_esp += 4; return;
L_006bb4c0:; BB(0x006bb4c0);
    /* 006bb4c0: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006bb4c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb4c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb4c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb4c9: movzx eax, byte ptr [esi + edx*8 + 0xa9567f] */ r_eax = (u32)R8((u32)(r_esi+r_edx*8+0xa9567fu));
    /* 006bb4d1: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb4d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb4d5: ret  */ FN_RET(0x006bb450); r_esp += 4; return;
}

void f_006bb4d8(void) /* sub_6BB4D8 */
{
    FN_ENTER(0x006bb4d8);
    /* 006bb4d8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bb4ddu); f_006dc358();
    /* 006bb4dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb4e0: je 0x6bb50d */ if (fZ) goto L_006bb50d;
L_006bb4e2:; BB(0x006bb4e2);
    /* 006bb4e2: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006bb4e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb4e9: jne 0x6bb50e */ if (!fZ) goto L_006bb50e;
L_006bb4eb:; BB(0x006bb4eb);
    /* 006bb4eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb4ed: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6bb4f2u); f_006c1bd4();
    /* 006bb4f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb4f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb4f5: je 0x6bb50d */ if (fZ) goto L_006bb50d;
L_006bb4f7:; BB(0x006bb4f7);
    /* 006bb4f7: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb4fc: push 0xa95680 */ { u32 v = 0xa95680u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb501: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb505: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bb50au); f_0086b6b8();
    /* 006bb50a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006bb50d:; BB(0x006bb50d);
    /* 006bb50d: ret  */ FN_RET(0x006bb4d8); r_esp += 4; return;
L_006bb50e:; BB(0x006bb50e);
    /* 006bb50e: call 0x6cc6cc */ r_esp -= 4; W32(r_esp, 0x6bb513u); f_006cc6cc();
    /* 006bb513: jmp 0x6bb4eb */ goto L_006bb4eb;
}

void f_006bb518(void) /* sub_6BB518 */
{
    FN_ENTER(0x006bb518);
    /* 006bb518: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb519: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb51a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb51b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bb51d: mov eax, dword ptr [0x96a0cc] */ r_eax = R32((u32)(0x96a0ccu));
    /* 006bb522: mov ebx, eax */ r_ebx = r_eax;
    /* 006bb524: mov esi, edx */ r_esi = r_edx;
L_006bb526:; BB(0x006bb526);
    /* 006bb526: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6bb52bu); f_007a61a4();
    /* 006bb52b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb52e: je 0x6bb54a */ if (fZ) goto L_006bb54a;
L_006bb530:; BB(0x006bb530);
    /* 006bb530: mov eax, ebx */ r_eax = r_ebx;
    /* 006bb532: call 0x6bb1d8 */ r_esp -= 4; W32(r_esp, 0x6bb537u); f_006bb1d8();
L_006bb537:; BB(0x006bb537);
    /* 006bb537: mov ebx, dword ptr [esi*4 + 0x96a0d0] */ r_ebx = R32((u32)(r_esi*4+0x96a0d0u));
    /* 006bb53e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb541: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb544: jne 0x6bb526 */ if (!fZ) goto L_006bb526;
L_006bb546:; BB(0x006bb546);
    /* 006bb546: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb548: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb549: ret  */ FN_RET(0x006bb518); r_esp += 4; return;
L_006bb54a:; BB(0x006bb54a);
    /* 006bb54a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb54c: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 006bb54f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb550: call 0x6b9b44 */ r_esp -= 4; W32(r_esp, 0x6bb555u); f_006b9b44();
    /* 006bb555: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bb558: jmp 0x6bb537 */ goto L_006bb537;
}

void f_006bb55c(void) /* sub_6BB55C */
{
    FN_ENTER(0x006bb55c);
    /* 006bb55c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb55d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb55e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bb55f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb560: sub esp, 0x470 */ {  u32 a = r_esp; u32 b = 0x470u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bb566: lea edi, [esp + 4] */ r_edi = (u32)(r_esp+0x4u);
    /* 006bb56a: mov esi, 0x969c60 */ r_esi = 0x969c60u;
    /* 006bb56f: mov ecx, 0x46c */ r_ecx = 0x46cu;
    /* 006bb574: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb575: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006bb578: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006bb57a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb57b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006bb57e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006bb580: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006bb582:; BB(0x006bb582);
    /* 006bb582: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006bb584:; BB(0x006bb584);
    /* 006bb584: mov ebp, dword ptr [esp + ebx*4 + 4] */ r_ebp = R32((u32)(r_esp+r_ebx*4+0x4u));
    /* 006bb588: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb58a: je 0x6bb6e6 */ if (fZ) goto L_006bb6e6;
L_006bb590:; BB(0x006bb590);
    /* 006bb590: jl 0x6bb602 */ if ((fS!=fO)) goto L_006bb602;
L_006bb592:; BB(0x006bb592);
    /* 006bb592: cmp ebp, 0x3ff */ {  u32 a = r_ebp; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb598: jg 0x6bb602 */ if ((!fZ&&fS==fO)) goto L_006bb602;
L_006bb59a:; BB(0x006bb59a);
    /* 006bb59a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb59c: jl 0x6bb5fb */ if ((fS!=fO)) goto L_006bb5fb;
L_006bb59e:; BB(0x006bb59e);
    /* 006bb59e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb5a1: jge 0x6bb5fb */ if ((fS==fO)) goto L_006bb5fb;
L_006bb5a3:; BB(0x006bb5a3);
    /* 006bb5a3: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 006bb5a6: mov edi, eax */ r_edi = r_eax;
    /* 006bb5a8: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006bb5ab: shr edi, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006bb5ae: lea edi, [edi + ebp + 1] */ r_edi = (u32)(r_edi+r_ebp+0x1u);
    /* 006bb5b2: sar edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006bb5b5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb5b6: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb5b8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb5ba: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb5bd: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb5bf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb5c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb5c3: jle 0x6bb6fd */ if ((fZ||fS!=fO)) goto L_006bb6fd;
L_006bb5c9:; BB(0x006bb5c9);
    /* 006bb5c9: mov edx, dword ptr [esp + 0x484] */ r_edx = R32((u32)(r_esp+0x484u));
    /* 006bb5d0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb5d2: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb5d5: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006bb5d8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bb5da: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bb5dc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bb5de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bb5e0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bb5e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bb5e4: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb5e6: movzx edx, byte ptr [edi + ecx] */ r_edx = (u32)R8((u32)(r_edi+r_ecx));
    /* 006bb5ea: mov edi, 1 */ r_edi = 0x1u;
    /* 006bb5ef: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb5f1: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006bb5f3: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb5f5: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006bb5f7: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006bb5f9: jmp 0x6bb607 */ goto L_006bb607;
L_006bb5fb:; BB(0x006bb5fb);
    /* 006bb5fb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006bb600: jmp 0x6bb607 */ goto L_006bb607;
L_006bb602:; BB(0x006bb602);
    /* 006bb602: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_006bb607:; BB(0x006bb607);
    /* 006bb607: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb60a: jne 0x6bb67d */ if (!fZ) goto L_006bb67d;
L_006bb60c:; BB(0x006bb60c);
    /* 006bb60c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb60e: jl 0x6bb6de */ if ((fS!=fO)) goto L_006bb6de;
L_006bb614:; BB(0x006bb614);
    /* 006bb614: cmp ebp, 0x3ff */ {  u32 a = r_ebp; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb61a: jg 0x6bb6de */ if ((!fZ&&fS==fO)) goto L_006bb6de;
L_006bb620:; BB(0x006bb620);
    /* 006bb620: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb622: jl 0x6bb6de */ if ((fS!=fO)) goto L_006bb6de;
L_006bb628:; BB(0x006bb628);
    /* 006bb628: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb62b: jge 0x6bb6de */ if ((fS==fO)) goto L_006bb6de;
L_006bb631:; BB(0x006bb631);
    /* 006bb631: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 006bb634: mov edi, eax */ r_edi = r_eax;
    /* 006bb636: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006bb639: shr edi, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006bb63c: lea ebp, [edi + ebp + 1] */ r_ebp = (u32)(r_edi+r_ebp+0x1u);
    /* 006bb640: sar ebp, 3 */ { u32 c = (3u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 006bb643: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006bb646: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb647: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 006bb64a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006bb64c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb64e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb650: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb653: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb655: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb657: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006bb659: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006bb65b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb65d: jle 0x6bb722 */ if ((fZ||fS!=fO)) goto L_006bb722;
L_006bb663:; BB(0x006bb663);
    /* 006bb663: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb665: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb668: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb66a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006bb66d: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb672: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb674: or byte ptr [eax + ebp*8 + 0xa95680], dl */ { u32 ad = (u32)(r_eax+r_ebp*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 006bb67b: jmp 0x6bb6de */ goto L_006bb6de;
L_006bb67d:; BB(0x006bb67d);
    /* 006bb67d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb67f: jne 0x6bb6de */ if (!fZ) goto L_006bb6de;
L_006bb681:; BB(0x006bb681);
    /* 006bb681: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb683: jl 0x6bb6de */ if ((fS!=fO)) goto L_006bb6de;
L_006bb685:; BB(0x006bb685);
    /* 006bb685: cmp ebp, 0x3ff */ {  u32 a = r_ebp; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb68b: jg 0x6bb6de */ if ((!fZ&&fS==fO)) goto L_006bb6de;
L_006bb68d:; BB(0x006bb68d);
    /* 006bb68d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb68f: jl 0x6bb6de */ if ((fS!=fO)) goto L_006bb6de;
L_006bb691:; BB(0x006bb691);
    /* 006bb691: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb694: jge 0x6bb6de */ if ((fS==fO)) goto L_006bb6de;
L_006bb696:; BB(0x006bb696);
    /* 006bb696: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 006bb699: mov edi, eax */ r_edi = r_eax;
    /* 006bb69b: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006bb69e: shr edi, 0x1d */ { u32 c = (29u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006bb6a1: lea ebp, [edi + ebp + 1] */ r_ebp = (u32)(r_edi+r_ebp+0x1u);
    /* 006bb6a5: sar ebp, 3 */ { u32 c = (3u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 006bb6a8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006bb6ab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006bb6ac: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 006bb6af: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006bb6b1: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb6b3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb6b5: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb6b8: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bb6ba: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb6bc: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006bb6be: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006bb6c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bb6c2: jle 0x6bb73b */ if ((fZ||fS!=fO)) goto L_006bb73b;
L_006bb6c4:; BB(0x006bb6c4);
    /* 006bb6c4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006bb6c6: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb6c9: mov ecx, eax */ r_ecx = r_eax;
    /* 006bb6cb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006bb6ce: mov edx, 1 */ r_edx = 0x1u;
    /* 006bb6d3: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bb6d5: not edx */ r_edx = ~r_edx;
    /* 006bb6d7: and byte ptr [eax + ebp*8 + 0xa95680], dl */ { u32 ad = (u32)(r_eax+r_ebp*8+0xa95680u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu; W8(ad, r);  }
L_006bb6de:; BB(0x006bb6de);
    /* 006bb6de: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bb6e1: jmp 0x6bb584 */ goto L_006bb584;
L_006bb6e6:; BB(0x006bb6e6);
    /* 006bb6e6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb6e9: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bb6ec: jl 0x6bb582 */ if ((fS!=fO)) goto L_006bb582;
L_006bb6f2:; BB(0x006bb6f2);
    /* 006bb6f2: add esp, 0x470 */ {  u32 a = r_esp; u32 b = 0x470u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb6f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb6f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bb6fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb6fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bb6fc: ret  */ FN_RET(0x006bb55c); r_esp += 4; return;
L_006bb6fd:; BB(0x006bb6fd);
    /* 006bb6fd: mov eax, dword ptr [esp + 0x484] */ r_eax = R32((u32)(r_esp+0x484u));
    /* 006bb704: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006bb707: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb709: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb70b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb70d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb70f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb711: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb713: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bb715: movzx edx, byte ptr [edi + edx - 1] */ r_edx = (u32)R8((u32)(r_edi+r_edx+0xffffffffu));
    /* 006bb71a: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006bb71d: jmp 0x6bb607 */ goto L_006bb607;
L_006bb722:; BB(0x006bb722);
    /* 006bb722: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006bb725: movzx eax, byte ptr [edx + ebp*8 + 0xa9567f] */ r_eax = (u32)R8((u32)(r_edx+r_ebp*8+0xa9567fu));
    /* 006bb72d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bb732: mov byte ptr [edx + ebp*8 + 0xa9567f], al */ W8((u32)(r_edx+r_ebp*8+0xa9567fu), (u8)r_eax);
    /* 006bb739: jmp 0x6bb6de */ goto L_006bb6de;
L_006bb73b:; BB(0x006bb73b);
    /* 006bb73b: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006bb73e: movzx eax, byte ptr [edx + ebp*8 + 0xa9567f] */ r_eax = (u32)R8((u32)(r_edx+r_ebp*8+0xa9567fu));
    /* 006bb746: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bb74b: mov byte ptr [edx + ebp*8 + 0xa9567f], al */ W8((u32)(r_edx+r_ebp*8+0xa9567fu), (u8)r_eax);
    /* 006bb752: jmp 0x6bb6de */ goto L_006bb6de;
}

void f_006bb754(void) /* sub_6BB754 */
{
    FN_ENTER(0x006bb754);
    /* 006bb754: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006bb759: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006bb75c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb75d: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6bb762u); f_006c1bd4();
    /* 006bb762: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb763: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb765: je 0x6bb77d */ if (fZ) goto L_006bb77d;
L_006bb767:; BB(0x006bb767);
    /* 006bb767: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb76c: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb76f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb770: push 0xa95680 */ { u32 v = 0xa95680u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb775: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bb77au); f_0086b6b8();
    /* 006bb77a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006bb77d:; BB(0x006bb77d);
    /* 006bb77d: ret  */ FN_RET(0x006bb754); r_esp += 4; return;
}

void f_006bb759(void)
{
    FN_ENTER(0x006bb759);
    /* 006bb759: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006bb75c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb75d: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x6bb762u); f_006c1bd4();
    /* 006bb762: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb763: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb765: je 0x6bb77d */ if (fZ) goto L_006bb77d;
L_006bb767:; BB(0x006bb767);
    /* 006bb767: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb76c: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bb76f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb770: push 0xa95680 */ { u32 v = 0xa95680u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb775: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bb77au); f_0086b6b8();
    /* 006bb77a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006bb77d:; BB(0x006bb77d);
    /* 006bb77d: ret  */ FN_RET(0x006bb759); r_esp += 4; return;
}

void f_006bb780(void) /* sub_6BB780 */
{
    FN_ENTER(0x006bb780);
    /* 006bb780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb781: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bb786u); f_006dc358();
    /* 006bb786: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bb789: je 0x6bb78d */ if (fZ) goto L_006bb78d;
L_006bb78b:; BB(0x006bb78b);
    /* 006bb78b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb78c: ret  */ FN_RET(0x006bb780); r_esp += 4; return;
L_006bb78d:; BB(0x006bb78d);
    /* 006bb78d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb78f: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x6bb794u); f_004d30cc();
    /* 006bb794: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb795: call 0x6bb759 */ r_esp -= 4; W32(r_esp, 0x6bb79au); f_006bb759();
    /* 006bb79a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb79b: ret  */ FN_RET(0x006bb780); r_esp += 4; return;
}

void f_006bb79c(void) /* sub_6BB79C */
{
    FN_ENTER(0x006bb79c);
    /* 006bb79c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb79d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb79e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bb79f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bb7a1: mov eax, dword ptr [0x96a0cc] */ r_eax = R32((u32)(0x96a0ccu));
    /* 006bb7a6: mov ebx, eax */ r_ebx = r_eax;
    /* 006bb7a8: mov esi, edx */ r_esi = r_edx;
L_006bb7aa:; BB(0x006bb7aa);
    /* 006bb7aa: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6bb7afu); f_007a61a4();
    /* 006bb7af: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb7b2: je 0x6bb7d3 */ if (fZ) goto L_006bb7d3;
L_006bb7b4:; BB(0x006bb7b4);
    /* 006bb7b4: mov eax, ebx */ r_eax = r_ebx;
    /* 006bb7b6: call 0x6bb1d8 */ r_esp -= 4; W32(r_esp, 0x6bb7bbu); f_006bb1d8();
L_006bb7bb:; BB(0x006bb7bb);
    /* 006bb7bb: mov ebx, dword ptr [esi*4 + 0x96a0d0] */ r_ebx = R32((u32)(r_esi*4+0x96a0d0u));
    /* 006bb7c2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006bb7c5: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb7c8: jne 0x6bb7aa */ if (!fZ) goto L_006bb7aa;
L_006bb7ca:; BB(0x006bb7ca);
    /* 006bb7ca: call 0x6bb780 */ r_esp -= 4; W32(r_esp, 0x6bb7cfu); f_006bb780();
    /* 006bb7cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb7d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb7d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bb7d2: ret  */ FN_RET(0x006bb79c); r_esp += 4; return;
L_006bb7d3:; BB(0x006bb7d3);
    /* 006bb7d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb7d5: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 006bb7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb7d9: call 0x6b9b44 */ r_esp -= 4; W32(r_esp, 0x6bb7deu); f_006b9b44();
    /* 006bb7de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bb7e1: jmp 0x6bb7bb */ goto L_006bb7bb;
}

void f_006bb7e4(void) /* sub_6BB7E4 */
{
    FN_ENTER(0x006bb7e4);
    /* 006bb7e4: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb7e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb7eb: push 0xa95680 */ { u32 v = 0xa95680u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb7f0: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6bb7f5u); f_0086b688();
    /* 006bb7f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bb7f8: ret  */ FN_RET(0x006bb7e4); r_esp += 4; return;
}

void f_006bb7fc(void) /* sub_6BB7FC */
{
    FN_ENTER(0x006bb7fc);
    /* 006bb7fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb7fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bb7ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bb801: call 0x6bb820 */ r_esp -= 4; W32(r_esp, 0x6bb806u); f_006bb820();
    /* 006bb806: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb80a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb80c: jne 0x6bb812 */ if (!fZ) goto L_006bb812;
L_006bb80e:; BB(0x006bb80e);
    /* 006bb80e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb80f: ret 4 */ FN_RET(0x006bb7fc); r_esp += 8; return;
L_006bb812:; BB(0x006bb812);
    /* 006bb812: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb813: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bb818u); f_005c2f74();
    /* 006bb818: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb81a: ret 4 */ FN_RET(0x006bb7fc); r_esp += 8; return;
}

void f_006bb820(void) /* sub_6BB820 */
{
    FN_ENTER(0x006bb820);
    /* 006bb820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bb821: mov ebp, esp */ r_ebp = r_esp;
    /* 006bb823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bb825: push 0x8ec098 */ { u32 v = 0x8ec098u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb82a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bb830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb831: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bb838: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bb83b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bb83e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bb841: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bb844: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bb847: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bb84a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bb851: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb854: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 006bb85a: mov dword ptr [edx], 0xb3aed8 */ W32((u32)(r_edx), 0xb3aed8u);
    /* 006bb860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb862: je 0x6bb897 */ if (fZ) goto L_006bb897;
L_006bb864:; BB(0x006bb864);
    /* 006bb864: mov dword ptr [0xa95aa4], 0 */ W32((u32)(0xa95aa4u), 0x0u);
L_006bb86e:; BB(0x006bb86e);
    /* 006bb86e: push dword ptr [edx + 0x19c] */ { u32 v = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bb874: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bb879u); f_0082e960();
    /* 006bb879: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb87a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bb881: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb884: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bb889u); f_008171e8();
    /* 006bb889: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bb88c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bb893: mov esp, ebp */ r_esp = r_ebp;
    /* 006bb895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bb896: ret  */ FN_RET(0x006bb820); r_esp += 4; return;
L_006bb897:; BB(0x006bb897);
    /* 006bb897: mov dword ptr [0xa95aa8], 0 */ W32((u32)(0xa95aa8u), 0x0u);
    /* 006bb8a1: call 0x6bd7d8 */ r_esp -= 4; W32(r_esp, 0x6bb8a6u); f_006bd7d8();
    /* 006bb8a6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb8a9: jmp 0x6bb86e */ goto L_006bb86e;
}

void f_006bb8ac(void) /* sub_6BB8AC */
{
    FN_ENTER(0x006bb8ac);
    /* 006bb8ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb8ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bb8af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bb8b1: call 0x6bb8d0 */ r_esp -= 4; W32(r_esp, 0x6bb8b6u); f_006bb8d0();
    /* 006bb8b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb8ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb8bc: jne 0x6bb8c2 */ if (!fZ) goto L_006bb8c2;
L_006bb8be:; BB(0x006bb8be);
    /* 006bb8be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb8bf: ret 4 */ FN_RET(0x006bb8ac); r_esp += 8; return;
L_006bb8c2:; BB(0x006bb8c2);
    /* 006bb8c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb8c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bb8c8u); f_005c2f74();
    /* 006bb8c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb8c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb8ca: ret 4 */ FN_RET(0x006bb8ac); r_esp += 8; return;
}

void f_006bb8d0(void) /* sub_6BB8D0 */
{
    FN_ENTER(0x006bb8d0);
    /* 006bb8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bb8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006bb8d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bb8d5: push 0x8ec0b4 */ { u32 v = 0x8ec0b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb8da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bb8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb8e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bb8e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bb8eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bb8ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bb8f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bb8f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bb8f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bb8fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb8fd: mov dword ptr [ecx], 0xb3aee8 */ W32((u32)(r_ecx), 0xb3aee8u);
    /* 006bb903: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bb90a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bb90fu); f_008171e8();
    /* 006bb90f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bb912: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bb919: mov esp, ebp */ r_esp = r_ebp;
    /* 006bb91b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bb91c: ret  */ FN_RET(0x006bb8d0); r_esp += 4; return;
}

void f_006bb920(void) /* sub_6BB920 */
{
    FN_ENTER(0x006bb920);
    /* 006bb920: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb921: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bb923: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bb925: call 0x6bb944 */ r_esp -= 4; W32(r_esp, 0x6bb92au); f_006bb944();
    /* 006bb92a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb92e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb930: jne 0x6bb936 */ if (!fZ) goto L_006bb936;
L_006bb932:; BB(0x006bb932);
    /* 006bb932: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb933: ret 4 */ FN_RET(0x006bb920); r_esp += 8; return;
L_006bb936:; BB(0x006bb936);
    /* 006bb936: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb937: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bb93cu); f_005c2f74();
    /* 006bb93c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb93d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb93e: ret 4 */ FN_RET(0x006bb920); r_esp += 8; return;
}

void f_006bb944(void) /* sub_6BB944 */
{
    FN_ENTER(0x006bb944);
    /* 006bb944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bb945: mov ebp, esp */ r_ebp = r_esp;
    /* 006bb947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bb949: push 0x8ec0d0 */ { u32 v = 0x8ec0d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bb94e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bb954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bb955: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bb95c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bb95f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bb962: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bb965: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bb968: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bb96b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bb96e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bb975: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb978: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006bb97b: mov dword ptr [eax], 0xb3aef8 */ W32((u32)(r_eax), 0xb3aef8u);
    /* 006bb981: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb983: je 0x6bb994 */ if (fZ) goto L_006bb994;
L_006bb985:; BB(0x006bb985);
    /* 006bb985: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bb98au); f_007127b0();
    /* 006bb98a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb98d: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_006bb994:; BB(0x006bb994);
    /* 006bb994: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006bb997: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bb999: je 0x6bb9aa */ if (fZ) goto L_006bb9aa;
L_006bb99b:; BB(0x006bb99b);
    /* 006bb99b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bb9a0u); f_007127b0();
    /* 006bb9a0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb9a3: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006bb9aa:; BB(0x006bb9aa);
    /* 006bb9aa: call 0x6b0ba4 */ r_esp -= 4; W32(r_esp, 0x6bb9afu); f_006b0ba4();
    /* 006bb9af: mov dword ptr [0xa95aa0], 0 */ W32((u32)(0xa95aa0u), 0x0u);
    /* 006bb9b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bb9c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bb9c3: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bb9c8u); f_008171e8();
    /* 006bb9c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bb9cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bb9d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006bb9d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bb9d5: ret  */ FN_RET(0x006bb944); r_esp += 4; return;
}

void f_006bb9d8(void) /* sub_6BB9D8 */
{
    FN_ENTER(0x006bb9d8);
    /* 006bb9d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb9d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bb9db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bb9dd: call 0x6bb9fc */ r_esp -= 4; W32(r_esp, 0x6bb9e2u); f_006bb9fc();
    /* 006bb9e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bb9e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bb9e8: jne 0x6bb9ee */ if (!fZ) goto L_006bb9ee;
L_006bb9ea:; BB(0x006bb9ea);
    /* 006bb9ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb9eb: ret 4 */ FN_RET(0x006bb9d8); r_esp += 8; return;
L_006bb9ee:; BB(0x006bb9ee);
    /* 006bb9ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bb9ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bb9f4u); f_005c2f74();
    /* 006bb9f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bb9f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bb9f6: ret 4 */ FN_RET(0x006bb9d8); r_esp += 8; return;
}

void f_006bb9fc(void) /* sub_6BB9FC */
{
    FN_ENTER(0x006bb9fc);
    /* 006bb9fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bb9fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006bb9ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bba01: push 0x8ec0ec */ { u32 v = 0x8ec0ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006bba06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bba0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bba0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bba14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bba17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bba1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bba1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bba20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bba23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bba26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bba2d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bba30: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006bba33: mov dword ptr [eax], 0xb3af08 */ W32((u32)(r_eax), 0xb3af08u);
    /* 006bba39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bba3b: je 0x6bba4c */ if (fZ) goto L_006bba4c;
L_006bba3d:; BB(0x006bba3d);
    /* 006bba3d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bba42u); f_007127b0();
    /* 006bba42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bba45: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_006bba4c:; BB(0x006bba4c);
    /* 006bba4c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006bba4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bba51: je 0x6bba75 */ if (fZ) goto L_006bba75;
L_006bba53:; BB(0x006bba53);
    /* 006bba53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bba55: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bba59: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bba5e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bba62: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bba65: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 006bba6c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6bba71u); f_00791748();
    /* 006bba71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bba72: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006bba75:; BB(0x006bba75);
    /* 006bba75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bba7c: mov ecx, eax */ r_ecx = r_eax;
    /* 006bba7e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bba83u); f_008171e8();
    /* 006bba83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bba86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bba8d: mov esp, ebp */ r_esp = r_ebp;
    /* 006bba8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bba90: ret  */ FN_RET(0x006bb9fc); r_esp += 4; return;
}

void f_006bba94(void) /* sub_6BBA94 */
{
    FN_ENTER(0x006bba94);
    /* 006bba94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bba95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bba97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bba99: call 0x6bbab8 */ r_esp -= 4; W32(r_esp, 0x6bba9eu); f_006bbab8();
    /* 006bba9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bbaa2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbaa4: jne 0x6bbaaa */ if (!fZ) goto L_006bbaaa;
L_006bbaa6:; BB(0x006bbaa6);
    /* 006bbaa6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bbaa7: ret 4 */ FN_RET(0x006bba94); r_esp += 8; return;
L_006bbaaa:; BB(0x006bbaaa);
    /* 006bbaaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bbaab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bbab0u); f_005c2f74();
    /* 006bbab0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbab1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bbab2: ret 4 */ FN_RET(0x006bba94); r_esp += 8; return;
}

void f_006bbab8(void) /* sub_6BBAB8 */
{
    FN_ENTER(0x006bbab8);
    /* 006bbab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bbab9: mov ebp, esp */ r_ebp = r_esp;
    /* 006bbabb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bbabd: push 0x8ec108 */ { u32 v = 0x8ec108u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbac2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bbac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbac9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bbad0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bbad3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bbad6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bbad9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bbadc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bbadf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bbae2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bbae9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbaec: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006bbaef: mov dword ptr [eax], 0xb3af18 */ W32((u32)(r_eax), 0xb3af18u);
    /* 006bbaf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbaf7: je 0x6bbb13 */ if (fZ) goto L_006bbb13;
L_006bbaf9:; BB(0x006bbaf9);
    /* 006bbaf9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bbafeu); f_007127b0();
    /* 006bbafe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbb01: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 006bbb08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbb0a: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6bbb0fu); f_00791748();
    /* 006bbb0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbb10: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006bbb13:; BB(0x006bbb13);
    /* 006bbb13: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006bbb16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbb18: je 0x6bbb29 */ if (fZ) goto L_006bbb29;
L_006bbb1a:; BB(0x006bbb1a);
    /* 006bbb1a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bbb1fu); f_007127b0();
    /* 006bbb1f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbb22: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_006bbb29:; BB(0x006bbb29);
    /* 006bbb29: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bbb30: mov ecx, eax */ r_ecx = r_eax;
    /* 006bbb32: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bbb37u); f_008171e8();
    /* 006bbb37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bbb3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bbb41: mov esp, ebp */ r_esp = r_ebp;
    /* 006bbb43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bbb44: ret  */ FN_RET(0x006bbab8); r_esp += 4; return;
}

void f_006bbb48(void) /* sub_6BBB48 */
{
    FN_ENTER(0x006bbb48);
    /* 006bbb48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bbb49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bbb4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bbb4d: call 0x6bbb6c */ r_esp -= 4; W32(r_esp, 0x6bbb52u); f_006bbb6c();
    /* 006bbb52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bbb56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbb58: jne 0x6bbb5e */ if (!fZ) goto L_006bbb5e;
L_006bbb5a:; BB(0x006bbb5a);
    /* 006bbb5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bbb5b: ret 4 */ FN_RET(0x006bbb48); r_esp += 8; return;
L_006bbb5e:; BB(0x006bbb5e);
    /* 006bbb5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bbb5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bbb64u); f_005c2f74();
    /* 006bbb64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbb65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bbb66: ret 4 */ FN_RET(0x006bbb48); r_esp += 8; return;
}

void f_006bbb6c(void) /* sub_6BBB6C */
{
    FN_ENTER(0x006bbb6c);
    /* 006bbb6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bbb6d: mov ebp, esp */ r_ebp = r_esp;
    /* 006bbb6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bbb71: push 0x8ec124 */ { u32 v = 0x8ec124u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbb76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bbb7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbb7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bbb84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bbb87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bbb8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bbb8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bbb90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bbb93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bbb96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bbb9d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbba0: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 006bbba6: mov dword ptr [eax], 0xb3af28 */ W32((u32)(r_eax), 0xb3af28u);
    /* 006bbbac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbbae: je 0x6bbbc2 */ if (fZ) goto L_006bbbc2;
L_006bbbb0:; BB(0x006bbbb0);
    /* 006bbbb0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bbbb5u); f_007127b0();
    /* 006bbbb5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbbb8: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
L_006bbbc2:; BB(0x006bbbc2);
    /* 006bbbc2: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 006bbbc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbbca: je 0x6bbbde */ if (fZ) goto L_006bbbde;
L_006bbbcc:; BB(0x006bbbcc);
    /* 006bbbcc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bbbd1u); f_007127b0();
    /* 006bbbd1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbbd4: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
L_006bbbde:; BB(0x006bbbde);
    /* 006bbbde: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 006bbbe4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbbe6: je 0x6bbc05 */ if (fZ) goto L_006bbc05;
L_006bbbe8:; BB(0x006bbbe8);
    /* 006bbbe8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bbbedu); f_007127b0();
    /* 006bbbed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbbf0: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 006bbbfa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbbfc: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6bbc01u); f_00791748();
    /* 006bbc01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbc02: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006bbc05:; BB(0x006bbc05);
    /* 006bbc05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bbc0c: mov ecx, eax */ r_ecx = r_eax;
    /* 006bbc0e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bbc13u); f_008171e8();
    /* 006bbc13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bbc16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bbc1d: mov esp, ebp */ r_esp = r_ebp;
    /* 006bbc1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bbc20: ret  */ FN_RET(0x006bbb6c); r_esp += 4; return;
}

void f_006bbc24(void) /* sub_6BBC24 */
{
    FN_ENTER(0x006bbc24);
    /* 006bbc24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bbc25: mov ebp, esp */ r_ebp = r_esp;
    /* 006bbc27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bbc29: push 0x8ec140 */ { u32 v = 0x8ec140u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbc2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bbc34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbc35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bbc3c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bbc3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bbc42: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006bbc45: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006bbc48: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006bbc4b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006bbc4e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbc51: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006bbc54: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006bbc57: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006bbc5a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006bbc5d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006bbc60: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bbc63: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bbc68u); f_008193cc();
    /* 006bbc68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bbc6f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbc72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bbc75: mov dword ptr [eax], 0xb3aed8 */ W32((u32)(r_eax), 0xb3aed8u);
    /* 006bbc7b: mov dword ptr [eax + 0x1a4], edx */ W32((u32)(r_eax+0x1a4u), r_edx);
    /* 006bbc81: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
    /* 006bbc8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbc8d: jne 0x6bbd2a */ if (!fZ) goto L_006bbd2a;
L_006bbc93:; BB(0x006bbc93);
    /* 006bbc93: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bbc96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbc98: je 0x6bbca5 */ if (fZ) goto L_006bbca5;
L_006bbc9a:; BB(0x006bbc9a);
    /* 006bbc9a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbc9d: je 0x6bbdc9 */ if (fZ) goto L_006bbdc9;
L_006bbca3:; BB(0x006bbca3);
    /* 006bbca3: jmp 0x6bbcef */ goto L_006bbcef;
L_006bbca5:; BB(0x006bbca5);
    /* 006bbca5: push 0x938e4c */ { u32 v = 0x938e4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bbcaa: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x6bbcafu); f_005ba214();
    /* 006bbcaf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbcb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbcb3: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6bbcb8u); f_005b9328();
    /* 006bbcb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bbcbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bbcbd: jl 0x6bbd0c */ if ((fS!=fO)) goto L_006bbd0c;
L_006bbcbf:; BB(0x006bbcbf);
    /* 006bbcbf: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bbcc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbcc5: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bbccau); f_0082e940();
    /* 006bbcca: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbcce: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bbcd4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbcd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbcd8: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6bbcddu); f_005b9910();
    /* 006bbcdd: mov ebx, eax */ r_ebx = r_eax;
    /* 006bbcdf: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbce4: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x6bbce9u); f_005ba214();
    /* 006bbce9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bbcec: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_006bbcef:; BB(0x006bbcef);
    /* 006bbcef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bbcf1: jl 0x6bbd0f */ if ((fS!=fO)) goto L_006bbd0f;
L_006bbcf3:; BB(0x006bbcf3);
    /* 006bbcf3: mov dword ptr [0xa95aa8], eax */ W32((u32)(0xa95aa8u), r_eax);
    /* 006bbcf8: lea edx, [eax + 0x24] */ r_edx = (u32)(r_eax+0x24u);
    /* 006bbcfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bbcfc: push dword ptr [eax + 0x19c] */ { u32 v = R32((u32)(r_eax+0x19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbd02: call 0x6b9980 */ r_esp -= 4; W32(r_esp, 0x6bbd07u); f_006b9980();
    /* 006bbd07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bbd0a: jmp 0x6bbd1d */ goto L_006bbd1d;
L_006bbd0c:; BB(0x006bbd0c);
    /* 006bbd0c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_006bbd0f:; BB(0x006bbd0f);
    /* 006bbd0f: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006bbd13: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006bbd19: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_006bbd1d:; BB(0x006bbd1d);
    /* 006bbd1d: call 0x6bd7d8 */ r_esp -= 4; W32(r_esp, 0x6bbd22u); f_006bd7d8();
    /* 006bbd22: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbd25: jmp 0x6bbdb6 */ goto L_006bbdb6;
L_006bbd2a:; BB(0x006bbd2a);
    /* 006bbd2a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbd2d: jne 0x6bbda8 */ if (!fZ) goto L_006bbda8;
L_006bbd2f:; BB(0x006bbd2f);
    /* 006bbd2f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bbd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbd34: je 0x6bbd41 */ if (fZ) goto L_006bbd41;
L_006bbd36:; BB(0x006bbd36);
    /* 006bbd36: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbd39: je 0x6bbe0a */ if (fZ) goto L_006bbe0a;
L_006bbd3f:; BB(0x006bbd3f);
    /* 006bbd3f: jmp 0x6bbd75 */ goto L_006bbd75;
L_006bbd41:; BB(0x006bbd41);
    /* 006bbd41: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbd44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbd45: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6bbd4au); f_005b9328();
    /* 006bbd4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbd4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bbd4d: jl 0x6bbd95 */ if ((fS!=fO)) goto L_006bbd95;
L_006bbd4f:; BB(0x006bbd4f);
    /* 006bbd4f: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bbd54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbd55: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bbd5au); f_0082e940();
    /* 006bbd5a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbd5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbd5e: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bbd64: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbd67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbd68: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6bbd6du); f_005b9910();
    /* 006bbd6d: mov ecx, eax */ r_ecx = r_eax;
    /* 006bbd6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bbd72: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_006bbd75:; BB(0x006bbd75);
    /* 006bbd75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bbd77: jl 0x6bbd98 */ if ((fS!=fO)) goto L_006bbd98;
L_006bbd79:; BB(0x006bbd79);
    /* 006bbd79: mov dword ptr [0xa95aa4], eax */ W32((u32)(0xa95aa4u), r_eax);
    /* 006bbd7e: lea edx, [eax + 0x24] */ r_edx = (u32)(r_eax+0x24u);
    /* 006bbd81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bbd82: push dword ptr [eax + 0x19c] */ { u32 v = R32((u32)(r_eax+0x19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbd88: call 0x6b9980 */ r_esp -= 4; W32(r_esp, 0x6bbd8du); f_006b9980();
    /* 006bbd8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bbd90: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbd93: jmp 0x6bbdb6 */ goto L_006bbdb6;
L_006bbd95:; BB(0x006bbd95);
    /* 006bbd95: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_006bbd98:; BB(0x006bbd98);
    /* 006bbd98: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006bbd9c: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbda2: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 006bbda6: jmp 0x6bbdb6 */ goto L_006bbdb6;
L_006bbda8:; BB(0x006bbda8);
    /* 006bbda8: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006bbdac: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbdb2: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_006bbdb6:; BB(0x006bbdb6);
    /* 006bbdb6: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bbdb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bbdbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bbdc3: mov esp, ebp */ r_esp = r_ebp;
    /* 006bbdc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bbdc6: ret 0x10 */ FN_RET(0x006bbc24); r_esp += 20; return;
L_006bbdc9:; BB(0x006bbdc9);
    /* 006bbdc9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbdcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbdcd: call 0x5b9fe4 */ r_esp -= 4; W32(r_esp, 0x6bbdd2u); f_005b9fe4();
    /* 006bbdd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbdd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bbdd5: jl 0x6bbe02 */ if ((fS!=fO)) goto L_006bbe02;
L_006bbdd7:; BB(0x006bbdd7);
    /* 006bbdd7: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bbddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbddd: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bbde2u); f_0082e940();
    /* 006bbde2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbde5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbde6: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bbdec: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbdef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbdf0: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x6bbdf5u); f_005b9ec4();
    /* 006bbdf5: mov ebx, eax */ r_ebx = r_eax;
    /* 006bbdf7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bbdfa: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbdfd: jmp 0x6bbcef */ goto L_006bbcef;
L_006bbe02:; BB(0x006bbe02);
    /* 006bbe02: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbe05: jmp 0x6bbd0f */ goto L_006bbd0f;
L_006bbe0a:; BB(0x006bbe0a);
    /* 006bbe0a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbe0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe0e: call 0x5b9fe4 */ r_esp -= 4; W32(r_esp, 0x6bbe13u); f_005b9fe4();
    /* 006bbe13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbe14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bbe16: jl 0x6bbe43 */ if ((fS!=fO)) goto L_006bbe43;
L_006bbe18:; BB(0x006bbe18);
    /* 006bbe18: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bbe1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe1e: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bbe23u); f_0082e940();
    /* 006bbe23: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbe26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe27: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bbe2d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bbe30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe31: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x6bbe36u); f_005b9ec4();
    /* 006bbe36: mov ecx, eax */ r_ecx = r_eax;
    /* 006bbe38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bbe3b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbe3e: jmp 0x6bbd75 */ goto L_006bbd75;
L_006bbe43:; BB(0x006bbe43);
    /* 006bbe43: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006bbe46: jmp 0x6bbd98 */ goto L_006bbd98;
}

void f_006bbe4c(void) /* sub_6BBE4C */
{
    FN_ENTER(0x006bbe4c);
    /* 006bbe4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe4d: mov ebp, esp */ r_ebp = r_esp;
    /* 006bbe4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe51: push 0x8ec1d4 */ { u32 v = 0x8ec1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bbe5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbe5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bbe64: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bbe67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bbe6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bbe6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bbe70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bbe73: mov eax, dword ptr [0xa955e0] */ r_eax = R32((u32)(0xa955e0u));
    /* 006bbe78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbe7a: je 0x6bbf58 */ if (fZ) goto L_006bbf58;
L_006bbe80:; BB(0x006bbe80);
    /* 006bbe80: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbe83: je 0x6bc035 */ if (fZ) goto L_006bc035;
L_006bbe89:; BB(0x006bbe89);
    /* 006bbe89: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbe8c: je 0x6bbfd8 */ if (fZ) goto L_006bbfd8;
L_006bbe92:; BB(0x006bbe92);
    /* 006bbe92: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbe95: je 0x6bbf68 */ if (fZ) goto L_006bbf68;
L_006bbe9b:; BB(0x006bbe9b);
    /* 006bbe9b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbe9e: jne 0x6bbefd */ if (!fZ) goto L_006bbefd;
L_006bbea0:; BB(0x006bbea0);
    /* 006bbea0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006bbea7: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbeac: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bbeb1u); f_005caba4();
    /* 006bbeb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbeb2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006bbeb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbeb7: je 0x6bbfc6 */ if (fZ) goto L_006bbfc6;
L_006bbebd:; BB(0x006bbebd);
    /* 006bbebd: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006bbec4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006bbecb: push dword ptr [0xa96170] */ { u32 v = R32((u32)(0xa96170u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbed1: push dword ptr [0xa96178] */ { u32 v = R32((u32)(0xa96178u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbed7: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbedd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bbee0: call 0x6bc08c */ r_esp -= 4; W32(r_esp, 0x6bbee5u); f_006bc08c();
    /* 006bbee5: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bbee8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006bbeef:; BB(0x006bbeef);
    /* 006bbeef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bbef2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bbef9: mov esp, ebp */ r_esp = r_ebp;
    /* 006bbefb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bbefc: ret  */ FN_RET(0x006bbe4c); r_esp += 4; return;
L_006bbefd:; BB(0x006bbefd);
    /* 006bbefd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbf00: jne 0x6bbf58 */ if (!fZ) goto L_006bbf58;
L_006bbf02:; BB(0x006bbf02);
    /* 006bbf02: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006bbf09: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbf0e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bbf13u); f_005caba4();
    /* 006bbf13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbf14: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006bbf17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbf19: je 0x6bbfcd */ if (fZ) goto L_006bbfcd;
L_006bbf1f:; BB(0x006bbf1f);
    /* 006bbf1f: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006bbf26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bbf2d: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbf32: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbf38: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bbf3b: call 0x6bc160 */ r_esp -= 4; W32(r_esp, 0x6bbf40u); f_006bc160();
    /* 006bbf40: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bbf43: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006bbf4a:; BB(0x006bbf4a);
    /* 006bbf4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bbf4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bbf54: mov esp, ebp */ r_esp = r_ebp;
    /* 006bbf56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bbf57: ret  */ FN_RET(0x006bbe4c); r_esp += 4; return;
L_006bbf58:; BB(0x006bbf58);
    /* 006bbf58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbf5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bbf5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bbf64: mov esp, ebp */ r_esp = r_ebp;
    /* 006bbf66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bbf67: ret  */ FN_RET(0x006bbe4c); r_esp += 4; return;
L_006bbf68:; BB(0x006bbf68);
    /* 006bbf68: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006bbf6f: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbf74: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bbf79u); f_005caba4();
    /* 006bbf79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbf7a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006bbf7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbf7f: je 0x6bbfd4 */ if (fZ) goto L_006bbfd4;
L_006bbf81:; BB(0x006bbf81);
    /* 006bbf81: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006bbf88: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006bbf8f: call 0x6cf5b0 */ r_esp -= 4; W32(r_esp, 0x6bbf94u); f_006cf5b0();
    /* 006bbf94: mov ebx, eax */ r_ebx = r_eax;
    /* 006bbf96: call 0x6cf5b8 */ r_esp -= 4; W32(r_esp, 0x6bbf9bu); f_006cf5b8();
    /* 006bbf9b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bbf9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bbf9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bbfa0: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bbfa6: call 0x6bc08c */ r_esp -= 4; W32(r_esp, 0x6bbfabu); f_006bc08c();
    /* 006bbfab: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bbfae: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006bbfb5:; BB(0x006bbfb5);
    /* 006bbfb5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bbfb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bbfbb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bbfc2: mov esp, ebp */ r_esp = r_ebp;
    /* 006bbfc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bbfc5: ret  */ FN_RET(0x006bbe4c); r_esp += 4; return;
L_006bbfc6:; BB(0x006bbfc6);
    /* 006bbfc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbfc8: jmp 0x6bbeef */ goto L_006bbeef;
L_006bbfcd:; BB(0x006bbfcd);
    /* 006bbfcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbfcf: jmp 0x6bbf4a */ goto L_006bbf4a;
L_006bbfd4:; BB(0x006bbfd4);
    /* 006bbfd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bbfd6: jmp 0x6bbfb5 */ goto L_006bbfb5;
L_006bbfd8:; BB(0x006bbfd8);
    /* 006bbfd8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006bbfdf: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bbfe4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bbfe9u); f_005caba4();
    /* 006bbfe9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bbfea: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006bbfed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bbfef: je 0x6bc031 */ if (fZ) goto L_006bc031;
L_006bbff1:; BB(0x006bbff1);
    /* 006bbff1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006bbff8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006bbfff: push dword ptr [0xa96170] */ { u32 v = R32((u32)(0xa96170u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc005: push dword ptr [0xa96178] */ { u32 v = R32((u32)(0xa96178u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc00b: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc011: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bc014: call 0x6bc08c */ r_esp -= 4; W32(r_esp, 0x6bc019u); f_006bc08c();
    /* 006bc019: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bc01c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006bc023:; BB(0x006bc023);
    /* 006bc023: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc026: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc02d: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc02f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc030: ret  */ FN_RET(0x006bbe4c); r_esp += 4; return;
L_006bc031:; BB(0x006bc031);
    /* 006bc031: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc033: jmp 0x6bc023 */ goto L_006bc023;
L_006bc035:; BB(0x006bc035);
    /* 006bc035: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 006bc03c: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc041: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bc046u); f_005caba4();
    /* 006bc046: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc047: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006bc04a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc04c: je 0x6bc087 */ if (fZ) goto L_006bc087;
L_006bc04e:; BB(0x006bc04e);
    /* 006bc04e: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 006bc055: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006bc05c: push 0xa95604 */ { u32 v = 0xa95604u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc061: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc067: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bc06a: call 0x6bc160 */ r_esp -= 4; W32(r_esp, 0x6bc06fu); f_006bc160();
    /* 006bc06f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006bc072: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006bc079:; BB(0x006bc079);
    /* 006bc079: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc07c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc083: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc086: ret  */ FN_RET(0x006bbe4c); r_esp += 4; return;
L_006bc087:; BB(0x006bc087);
    /* 006bc087: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc089: jmp 0x6bc079 */ goto L_006bc079;
}

