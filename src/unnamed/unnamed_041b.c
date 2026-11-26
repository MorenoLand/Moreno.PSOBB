#include "protos.h"

void f_0041b0bc(void) /* sub_41B0BC */
{
    FN_ENTER(0x0041b0bc);
    /* 0041b0bc: fld dword ptr [0x8fbe70] */ FPUSH(R_F32((u32)(0x8fbe70u)));
    /* 0041b0c2: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0041b0c8: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0041b0cb: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041b0cd: fld dword ptr [ecx + 0x5e8] */ FPUSH(R_F32((u32)(r_ecx+0x5e8u)));
    /* 0041b0d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041b0d5: fstp dword ptr [ecx + 0x5e0] */ W_F32((u32)(r_ecx+0x5e0u), ST(0)); FPOP();
    /* 0041b0db: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041b0dd: fstp dword ptr [ecx + 0x5e4] */ W_F32((u32)(r_ecx+0x5e4u), ST(0)); FPOP();
    /* 0041b0e3: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b0e8: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0041b0ee: ret  */ FN_RET(0x0041b0bc); r_esp += 4; return;
}

void f_0041b0f0(void) /* sub_41B0F0 */
{
    FN_ENTER(0x0041b0f0);
    /* 0041b0f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0041b0f4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b0f7: je 0x41b153 */ if (fZ) goto L_0041b153;
L_0041b0f9:; BB(0x0041b0f9);
    /* 0041b0f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b0fc: je 0x41b150 */ if (fZ) goto L_0041b150;
L_0041b0fe:; BB(0x0041b0fe);
    /* 0041b0fe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b101: je 0x41b150 */ if (fZ) goto L_0041b150;
L_0041b103:; BB(0x0041b103);
    /* 0041b103: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b105: jne 0x41b150 */ if (!fZ) goto L_0041b150;
L_0041b107:; BB(0x0041b107);
    /* 0041b107: mov eax, dword ptr [ecx + 0x86c] */ r_eax = R32((u32)(r_ecx+0x86cu));
    /* 0041b10d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041b110: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b113: jle 0x41b145 */ if ((fZ||fS!=fO)) goto L_0041b145;
L_0041b115:; BB(0x0041b115);
    /* 0041b115: movsx edx, word ptr [ecx + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 0041b11c: mov dword ptr [ecx + 0x86c], 0 */ W32((u32)(r_ecx+0x86cu), 0x0u);
    /* 0041b126: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041b129: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0041b12c: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b12f: jl 0x41b13c */ if ((fS!=fO)) goto L_0041b13c;
L_0041b131:; BB(0x0041b131);
    /* 0041b131: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b133: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0041b13a: jmp 0x41b14b */ goto L_0041b14b;
L_0041b13c:; BB(0x0041b13c);
    /* 0041b13c: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0041b143: jmp 0x41b14b */ goto L_0041b14b;
L_0041b145:; BB(0x0041b145);
    /* 0041b145: mov dword ptr [ecx + 0x86c], eax */ W32((u32)(r_ecx+0x86cu), r_eax);
L_0041b14b:; BB(0x0041b14b);
    /* 0041b14b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41b150u); f_007aa094();
L_0041b150:; BB(0x0041b150);
    /* 0041b150: ret 4 */ FN_RET(0x0041b0f0); r_esp += 8; return;
L_0041b153:; BB(0x0041b153);
    /* 0041b153: mov dword ptr [ecx + 0x86c], 0 */ W32((u32)(r_ecx+0x86cu), 0x0u);
    /* 0041b15d: mov eax, 0xb */ r_eax = 0xbu;
    /* 0041b162: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0041b169: ret 4 */ FN_RET(0x0041b0f0); r_esp += 8; return;
}

void f_0041b16c(void) /* sub_41B16C */
{
    FN_ENTER(0x0041b16c);
    /* 0041b16c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041b16d: mov edi, ecx */ r_edi = r_ecx;
    /* 0041b16f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0041b173: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b176: je 0x41b1dd */ if (fZ) goto L_0041b1dd;
L_0041b178:; BB(0x0041b178);
    /* 0041b178: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b17b: je 0x41b1b3 */ if (fZ) goto L_0041b1b3;
L_0041b17d:; BB(0x0041b17d);
    /* 0041b17d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b180: je 0x41b19d */ if (fZ) goto L_0041b19d;
L_0041b182:; BB(0x0041b182);
    /* 0041b182: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b184: jne 0x41b1b3 */ if (!fZ) goto L_0041b1b3;
L_0041b186:; BB(0x0041b186);
    /* 0041b186: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b188: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x41b18du); f_0068d5a8();
    /* 0041b18d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041b18e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b190: je 0x41b1b7 */ if (fZ) goto L_0041b1b7;
L_0041b192:; BB(0x0041b192);
    /* 0041b192: add dword ptr [edi + 0x86c], 1 */ { u32 ad = (u32)(r_edi+0x86cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b199: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041b19a: ret 4 */ FN_RET(0x0041b16c); r_esp += 8; return;
L_0041b19d:; BB(0x0041b19d);
    /* 0041b19d: mov eax, dword ptr [edi + 0x86c] */ r_eax = R32((u32)(r_edi+0x86cu));
    /* 0041b1a3: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b1a8: jle 0x41b1b3 */ if ((fZ||fS!=fO)) goto L_0041b1b3;
L_0041b1aa:; BB(0x0041b1aa);
    /* 0041b1aa: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1ac: mov ecx, edi */ r_ecx = r_edi;
    /* 0041b1ae: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x41b1b3u); f_0051f62c();
L_0041b1b3:; BB(0x0041b1b3);
    /* 0041b1b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041b1b4: ret 4 */ FN_RET(0x0041b16c); r_esp += 8; return;
L_0041b1b7:; BB(0x0041b1b7);
    /* 0041b1b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1b9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x41b1beu); f_0068d5a8();
    /* 0041b1be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041b1bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b1c1: jne 0x41b192 */ if (!fZ) goto L_0041b192;
L_0041b1c3:; BB(0x0041b1c3);
    /* 0041b1c3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1c5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x41b1cau); f_0068d5a8();
    /* 0041b1ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041b1cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b1cd: jne 0x41b192 */ if (!fZ) goto L_0041b192;
L_0041b1cf:; BB(0x0041b1cf);
    /* 0041b1cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1d1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x41b1d6u); f_0068d5a8();
    /* 0041b1d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041b1d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b1d9: jne 0x41b192 */ if (!fZ) goto L_0041b192;
L_0041b1db:; BB(0x0041b1db);
    /* 0041b1db: jmp 0x41b1b3 */ goto L_0041b1b3;
L_0041b1dd:; BB(0x0041b1dd);
    /* 0041b1dd: fld dword ptr [0x8fbe6c] */ FPUSH(R_F32((u32)(0x8fbe6cu)));
    /* 0041b1e3: fld dword ptr [0x8fbe68] */ FPUSH(R_F32((u32)(0x8fbe68u)));
    /* 0041b1e9: fld dword ptr [edi + 0x5e8] */ FPUSH(R_F32((u32)(r_edi+0x5e8u)));
    /* 0041b1ef: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0041b1f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041b1f3: fst dword ptr [edi + 0x5e4] */ W_F32((u32)(r_edi+0x5e4u), ST(0));
    /* 0041b1f9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0041b1fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041b1fd: fstp dword ptr [edi + 0x5e0] */ W_F32((u32)(r_edi+0x5e0u), ST(0)); FPOP();
    /* 0041b203: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b205: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0041b20c: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 0041b213: mov dword ptr [edi + 0x86c], eax */ W32((u32)(r_edi+0x86cu), r_eax);
    /* 0041b219: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041b21a: ret 4 */ FN_RET(0x0041b16c); r_esp += 8; return;
}

void f_0041b220(void) /* sub_41B220 */
{
    FN_ENTER(0x0041b220);
    /* 0041b220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b221: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b225: push 0x8cd67c */ { u32 v = 0x8cd67cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b22a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041b230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b231: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041b238: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b23b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041b23e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0041b241: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0041b244: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0041b247: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b24a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041b24d: lea eax, [ecx + 0x878] */ r_eax = (u32)(r_ecx+0x878u);
    /* 0041b253: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b256: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041b259: je 0x41bb53 */ if (fZ) goto L_0041bb53;
L_0041b25f:; BB(0x0041b25f);
    /* 0041b25f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b262: je 0x41baea */ if (fZ) goto L_0041baea;
L_0041b268:; BB(0x0041b268);
    /* 0041b268: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b26b: je 0x41baea */ if (fZ) goto L_0041baea;
L_0041b271:; BB(0x0041b271);
    /* 0041b271: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b274: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b27a:; BB(0x0041b27a);
    /* 0041b27a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b27c: jne 0x41b5ca */ if (!fZ) goto L_0041b5ca;
L_0041b282:; BB(0x0041b282);
    /* 0041b282: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b284: mov eax, dword ptr [eax + 0x86c] */ r_eax = R32((u32)(r_eax+0x86cu));
    /* 0041b28a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b28c: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b292:; BB(0x0041b292);
    /* 0041b292: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b295: je 0x41b801 */ if (fZ) goto L_0041b801;
L_0041b29b:; BB(0x0041b29b);
    /* 0041b29b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b29e: je 0x41b433 */ if (fZ) goto L_0041b433;
L_0041b2a4:; BB(0x0041b2a4);
    /* 0041b2a4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b2a7: jne 0x41b420 */ if (!fZ) goto L_0041b420;
L_0041b2ad:; BB(0x0041b2ad);
    /* 0041b2ad: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41b2b2u); f_007aa094();
    /* 0041b2b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b2b5: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0041b2bb: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041b2be: je 0x41b2c7 */ if (fZ) goto L_0041b2c7;
L_0041b2c0:; BB(0x0041b2c0);
    /* 0041b2c0: mov eax, 1 */ r_eax = 0x1u;
    /* 0041b2c5: jmp 0x41b2c9 */ goto L_0041b2c9;
L_0041b2c7:; BB(0x0041b2c7);
    /* 0041b2c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0041b2c9:; BB(0x0041b2c9);
    /* 0041b2c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b2cb: je 0x41b2eb */ if (fZ) goto L_0041b2eb;
L_0041b2cd:; BB(0x0041b2cd);
    /* 0041b2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b2d0: mov dword ptr [eax + 0x86c], 4 */ W32((u32)(r_eax+0x86cu), 0x4u);
    /* 0041b2da: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x41b2dfu); f_00717f38();
    /* 0041b2df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b2e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b2e4: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_0041b2eb:; BB(0x0041b2eb);
    /* 0041b2eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b2ee: mov edx, dword ptr [eax + 0x874] */ r_edx = R32((u32)(r_eax+0x874u));
    /* 0041b2f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b2f6: je 0x41b6be */ if (fZ) goto L_0041b6be;
L_0041b2fc:; BB(0x0041b2fc);
    /* 0041b2fc: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b2ff: je 0x41b655 */ if (fZ) goto L_0041b655;
L_0041b305:; BB(0x0041b305);
    /* 0041b305: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b308: je 0x41baab */ if (fZ) goto L_0041baab;
L_0041b30e:; BB(0x0041b30e);
    /* 0041b30e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b311: je 0x41b3f9 */ if (fZ) goto L_0041b3f9;
L_0041b317:; BB(0x0041b317);
    /* 0041b317: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b31a: jne 0x41b354 */ if (!fZ) goto L_0041b354;
L_0041b31c:; BB(0x0041b31c);
    /* 0041b31c: push 0x42d20000 */ { u32 v = 0x42d20000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b321: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b323: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b328u); f_007aaa30();
    /* 0041b328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b32a: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b330:; BB(0x0041b330);
    /* 0041b330: push 0x8fc30c */ { u32 v = 0x8fc30cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b335: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x41b33au); f_00814f0c();
    /* 0041b33a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041b33b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b33e: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b345: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 0041b34f: jmp 0x41b613 */ goto L_0041b613;
L_0041b354:; BB(0x0041b354);
    /* 0041b354: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b357: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041b35d:; BB(0x0041b35d);
    /* 0041b35d: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b35f: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 0041b365: fcomp dword ptr [0x8fbe64] */ fx_compare(ST(0), R_F32((u32)(0x8fbe64u))); FPOP();
    /* 0041b36b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041b36d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041b36e: jb 0x41b3ac */ if (fC) goto L_0041b3ac;
L_0041b370:; BB(0x0041b370);
    /* 0041b370: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b372: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 0041b378: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b37a: je 0x41b39b */ if (fZ) goto L_0041b39b;
L_0041b37c:; BB(0x0041b37c);
    /* 0041b37c: mov edx, eax */ r_edx = r_eax;
    /* 0041b37e: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0041b382: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041b387: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0041b38b: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
    /* 0041b395: mov edx, dword ptr [edx + 0x874] */ r_edx = R32((u32)(r_edx+0x874u));
L_0041b39b:; BB(0x0041b39b);
    /* 0041b39b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b39e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b3a1: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041b3a7: jmp 0x41b613 */ goto L_0041b613;
L_0041b3ac:; BB(0x0041b3ac);
    /* 0041b3ac: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b3ae: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0041b3b1: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0041b3b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3b5: lea ebx, [eax + 0x420] */ r_ebx = (u32)(r_eax+0x420u);
    /* 0041b3bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3bd: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x41b3c2u); f_007a8d98();
    /* 0041b3c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b3c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b3c8: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 0041b3ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b3d0: je 0x41b62c */ if (fZ) goto L_0041b62c;
L_0041b3d6:; BB(0x0041b3d6);
    /* 0041b3d6: lea edx, [eax + 0x414] */ r_edx = (u32)(r_eax+0x414u);
    /* 0041b3dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3dd: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x41b3e2u); f_00508db8();
    /* 0041b3e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b3e5: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0041b3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3e9: mov ecx, dword ptr [edx + 0x8b4] */ r_ecx = R32((u32)(r_edx+0x8b4u));
    /* 0041b3ef: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x41b3f4u); f_00508dd0();
    /* 0041b3f4: jmp 0x41b613 */ goto L_0041b613;
L_0041b3f9:; BB(0x0041b3f9);
    /* 0041b3f9: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b3fb: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 0041b401: fcomp dword ptr [0x8fbe5c] */ fx_compare(ST(0), R_F32((u32)(0x8fbe5cu))); FPOP();
    /* 0041b407: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041b409: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041b40a: jbe 0x41b613 */ if ((fC||fZ)) goto L_0041b613;
L_0041b410:; BB(0x0041b410);
    /* 0041b410: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b412: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b415: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041b41b: jmp 0x41b613 */ goto L_0041b613;
L_0041b420:; BB(0x0041b420);
    /* 0041b420: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b423: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041b429:; BB(0x0041b429);
    /* 0041b429: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41b42eu); f_007aa094();
    /* 0041b42e: jmp 0x41b613 */ goto L_0041b613;
L_0041b433:; BB(0x0041b433);
    /* 0041b433: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41b438u); f_007aa094();
    /* 0041b438: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b43b: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0041b441: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041b444: je 0x41b44d */ if (fZ) goto L_0041b44d;
L_0041b446:; BB(0x0041b446);
    /* 0041b446: mov eax, 1 */ r_eax = 0x1u;
    /* 0041b44b: jmp 0x41b44f */ goto L_0041b44f;
L_0041b44d:; BB(0x0041b44d);
    /* 0041b44d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0041b44f:; BB(0x0041b44f);
    /* 0041b44f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b451: je 0x41b471 */ if (fZ) goto L_0041b471;
L_0041b453:; BB(0x0041b453);
    /* 0041b453: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b456: mov dword ptr [eax + 0x86c], 4 */ W32((u32)(r_eax+0x86cu), 0x4u);
    /* 0041b460: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x41b465u); f_00717f38();
    /* 0041b465: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b468: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b46a: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_0041b471:; BB(0x0041b471);
    /* 0041b471: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b474: mov edx, dword ptr [eax + 0x874] */ r_edx = R32((u32)(r_eax+0x874u));
    /* 0041b47a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b47c: je 0x41b75e */ if (fZ) goto L_0041b75e;
L_0041b482:; BB(0x0041b482);
    /* 0041b482: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b485: je 0x41b71f */ if (fZ) goto L_0041b71f;
L_0041b48b:; BB(0x0041b48b);
    /* 0041b48b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b48e: je 0x41b576 */ if (fZ) goto L_0041b576;
L_0041b494:; BB(0x0041b494);
    /* 0041b494: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b497: jne 0x41b4d1 */ if (!fZ) goto L_0041b4d1;
L_0041b499:; BB(0x0041b499);
    /* 0041b499: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b49e: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b4a0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b4a5u); f_007aaa30();
    /* 0041b4a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b4a7: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b4ad:; BB(0x0041b4ad);
    /* 0041b4ad: push 0x8fc30c */ { u32 v = 0x8fc30cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4b2: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x41b4b7u); f_00814f0c();
    /* 0041b4b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041b4b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b4bb: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b4c2: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 0041b4cc: jmp 0x41b613 */ goto L_0041b613;
L_0041b4d1:; BB(0x0041b4d1);
    /* 0041b4d1: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b4d4: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041b4da:; BB(0x0041b4da);
    /* 0041b4da: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b4dc: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 0041b4e2: fcomp dword ptr [0x8fbe48] */ fx_compare(ST(0), R_F32((u32)(0x8fbe48u))); FPOP();
    /* 0041b4e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041b4ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041b4eb: jb 0x41b529 */ if (fC) goto L_0041b529;
L_0041b4ed:; BB(0x0041b4ed);
    /* 0041b4ed: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b4ef: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 0041b4f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b4f7: je 0x41b518 */ if (fZ) goto L_0041b518;
L_0041b4f9:; BB(0x0041b4f9);
    /* 0041b4f9: mov edx, eax */ r_edx = r_eax;
    /* 0041b4fb: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0041b4ff: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041b504: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0041b508: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
    /* 0041b512: mov edx, dword ptr [edx + 0x874] */ r_edx = R32((u32)(r_edx+0x874u));
L_0041b518:; BB(0x0041b518);
    /* 0041b518: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b51b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b51e: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041b524: jmp 0x41b613 */ goto L_0041b613;
L_0041b529:; BB(0x0041b529);
    /* 0041b529: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b52b: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0041b52e: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0041b531: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b532: lea ebx, [eax + 0x420] */ r_ebx = (u32)(r_eax+0x420u);
    /* 0041b538: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b539: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b53a: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x41b53fu); f_007a8d98();
    /* 0041b53f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b542: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b545: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 0041b54b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b54d: je 0x41b6f3 */ if (fZ) goto L_0041b6f3;
L_0041b553:; BB(0x0041b553);
    /* 0041b553: lea edx, [eax + 0x414] */ r_edx = (u32)(r_eax+0x414u);
    /* 0041b559: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b55a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x41b55fu); f_00508db8();
    /* 0041b55f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b562: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0041b565: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b566: mov ecx, dword ptr [edx + 0x8b4] */ r_ecx = R32((u32)(r_edx+0x8b4u));
    /* 0041b56c: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x41b571u); f_00508dd0();
    /* 0041b571: jmp 0x41b613 */ goto L_0041b613;
L_0041b576:; BB(0x0041b576);
    /* 0041b576: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b578: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 0041b57e: fcomp dword ptr [0x8fbe40] */ fx_compare(ST(0), R_F32((u32)(0x8fbe40u))); FPOP();
    /* 0041b584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041b586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041b587: ja 0x41b5bd */ if ((!fC&&!fZ)) goto L_0041b5bd;
L_0041b589:; BB(0x0041b589);
    /* 0041b589: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b58b: mov edx, dword ptr [eax + 0x870] */ r_edx = R32((u32)(r_eax+0x870u));
    /* 0041b591: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041b594: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 0041b59a: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0041b59d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b59f: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041b5a1:; BB(0x0041b5a1);
    /* 0041b5a1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5a3: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041b5a9: lea ecx, [eax + 0x414] */ r_ecx = (u32)(r_eax+0x414u);
    /* 0041b5af: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041b5b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5b3: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41b5b8u); f_0050b7a4();
    /* 0041b5b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b5bb: jmp 0x41b613 */ goto L_0041b613;
L_0041b5bd:; BB(0x0041b5bd);
    /* 0041b5bd: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b5bf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b5c2: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041b5c8: jmp 0x41b613 */ goto L_0041b613;
L_0041b5ca:; BB(0x0041b5ca);
    /* 0041b5ca: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b5cd: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041b5cf:; BB(0x0041b5cf);
    /* 0041b5cf: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b5d1: mov edx, dword ptr [eax + 0x8b4] */ r_edx = R32((u32)(r_eax+0x8b4u));
    /* 0041b5d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b5d9: je 0x41b5f4 */ if (fZ) goto L_0041b5f4;
L_0041b5db:; BB(0x0041b5db);
    /* 0041b5db: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041b5df: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041b5e4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0041b5e8: mov edx, ecx */ r_edx = r_ecx;
    /* 0041b5ea: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
L_0041b5f4:; BB(0x0041b5f4);
    /* 0041b5f4: call 0x7b9fbc */ r_esp -= 4; W32(r_esp, 0x41b5f9u); f_007b9fbc();
    /* 0041b5f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b5fc: mov dword ptr [eax + 0x878], 0 */ W32((u32)(r_eax+0x878u), 0x0u);
    /* 0041b606: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x41b60bu); f_00717f38();
    /* 0041b60b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b60e: call 0x520e34 */ r_esp -= 4; W32(r_esp, 0x41b613u); f_00520e34();
L_0041b613:; BB(0x0041b613);
    /* 0041b613: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041b616: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041b619: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041b61c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b61f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041b626: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b629: ret 4 */ FN_RET(0x0041b220); r_esp += 8; return;
L_0041b62c:; BB(0x0041b62c);
    /* 0041b62c: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0041b62f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b631: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041b637: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 0041b63d: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041b640: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b641: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b642: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x41b647u); f_00509dc4();
    /* 0041b647: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b64a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b64d: mov dword ptr [edx + 0x8b4], eax */ W32((u32)(r_edx+0x8b4u), r_eax);
    /* 0041b653: jmp 0x41b613 */ goto L_0041b613;
L_0041b655:; BB(0x0041b655);
    /* 0041b655: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b65a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b65c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b661u); f_007aaa30();
    /* 0041b661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b663: je 0x41b677 */ if (fZ) goto L_0041b677;
L_0041b665:; BB(0x0041b665);
    /* 0041b665: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b66a: push 0x322 */ { u32 v = 0x322u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b66f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b674u); f_00814298();
    /* 0041b674: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041b677:; BB(0x0041b677);
    /* 0041b677: push 0x427c0000 */ { u32 v = 0x427c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b67c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b67f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b684u); f_007aaa30();
    /* 0041b684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b686: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b688:; BB(0x0041b688);
    /* 0041b688: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b68b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b68d: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041b693: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 0041b696: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041b699: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b69a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41b69fu); f_0050b7a4();
    /* 0041b69f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6a1: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6a7: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41b6acu); f_0050b7a4();
    /* 0041b6ac: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b6af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b6b2: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b6b9: jmp 0x41b613 */ goto L_0041b613;
L_0041b6be:; BB(0x0041b6be);
    /* 0041b6be: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6c3: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b6c5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b6cau); f_007aaa30();
    /* 0041b6ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b6cc: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b6d2:; BB(0x0041b6d2);
    /* 0041b6d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b6d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6d7: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6dc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b6e1u); f_00814298();
    /* 0041b6e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b6e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b6e7: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b6ee: jmp 0x41b613 */ goto L_0041b613;
L_0041b6f3:; BB(0x0041b6f3);
    /* 0041b6f3: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0041b6f6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6f8: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041b6fe: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 0041b704: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041b707: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b708: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b709: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x41b70eu); f_00509dc4();
    /* 0041b70e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b711: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b714: mov dword ptr [edx + 0x8b4], eax */ W32((u32)(r_edx+0x8b4u), r_eax);
    /* 0041b71a: jmp 0x41b613 */ goto L_0041b613;
L_0041b71f:; BB(0x0041b71f);
    /* 0041b71f: push 0x42b80000 */ { u32 v = 0x42b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b724: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b726: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b72bu); f_007aaa30();
    /* 0041b72b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b72d: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b733:; BB(0x0041b733);
    /* 0041b733: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b738: push 0x31a */ { u32 v = 0x31au; r_esp -= 4; W32(r_esp, v); }
    /* 0041b73d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b742u); f_00814298();
    /* 0041b742: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b745: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b748: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b74f: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 0041b759: jmp 0x41b613 */ goto L_0041b613;
L_0041b75e:; BB(0x0041b75e);
    /* 0041b75e: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b763: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b765: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b76au); f_007aaa30();
    /* 0041b76a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b76c: jne 0x41b77f */ if (!fZ) goto L_0041b77f;
L_0041b76e:; BB(0x0041b76e);
    /* 0041b76e: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b773: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b776: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b77bu); f_007aaa30();
    /* 0041b77b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b77d: je 0x41b791 */ if (fZ) goto L_0041b791;
L_0041b77f:; BB(0x0041b77f);
    /* 0041b77f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b783: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b784: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b789: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b78eu); f_00814298();
    /* 0041b78e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041b791:; BB(0x0041b791);
    /* 0041b791: push 0x42780000 */ { u32 v = 0x42780000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b796: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b799: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b79eu); f_007aaa30();
    /* 0041b79e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b7a0: je 0x41b7b4 */ if (fZ) goto L_0041b7b4;
L_0041b7a2:; BB(0x0041b7a2);
    /* 0041b7a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b7a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7a7: push 0x322 */ { u32 v = 0x322u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7ac: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b7b1u); f_00814298();
    /* 0041b7b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041b7b4:; BB(0x0041b7b4);
    /* 0041b7b4: push 0x42800000 */ { u32 v = 0x42800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b7bc: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b7c1u); f_007aaa30();
    /* 0041b7c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b7c3: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b7c9:; BB(0x0041b7c9);
    /* 0041b7c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b7cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7ce: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7d3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b7d8u); f_00814298();
    /* 0041b7d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b7db: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7dd: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041b7e3: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0041b7e6: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041b7e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7ea: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41b7efu); f_0050b7a4();
    /* 0041b7ef: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b7f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b7f5: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b7fc: jmp 0x41b613 */ goto L_0041b613;
L_0041b801:; BB(0x0041b801);
    /* 0041b801: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41b806u); f_007aa094();
    /* 0041b806: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b809: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0041b80f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041b812: je 0x41b81b */ if (fZ) goto L_0041b81b;
L_0041b814:; BB(0x0041b814);
    /* 0041b814: mov eax, 1 */ r_eax = 0x1u;
    /* 0041b819: jmp 0x41b81d */ goto L_0041b81d;
L_0041b81b:; BB(0x0041b81b);
    /* 0041b81b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0041b81d:; BB(0x0041b81d);
    /* 0041b81d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b81f: je 0x41b83f */ if (fZ) goto L_0041b83f;
L_0041b821:; BB(0x0041b821);
    /* 0041b821: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b824: mov dword ptr [eax + 0x86c], 4 */ W32((u32)(r_eax+0x86cu), 0x4u);
    /* 0041b82e: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x41b833u); f_00717f38();
    /* 0041b833: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b836: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b838: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_0041b83f:; BB(0x0041b83f);
    /* 0041b83f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b842: mov edx, dword ptr [eax + 0x874] */ r_edx = R32((u32)(r_eax+0x874u));
    /* 0041b848: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b84a: je 0x41ba76 */ if (fZ) goto L_0041ba76;
L_0041b850:; BB(0x0041b850);
    /* 0041b850: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b853: je 0x41ba16 */ if (fZ) goto L_0041ba16;
L_0041b859:; BB(0x0041b859);
    /* 0041b859: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b85c: je 0x41b9d7 */ if (fZ) goto L_0041b9d7;
L_0041b862:; BB(0x0041b862);
    /* 0041b862: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b865: je 0x41b94d */ if (fZ) goto L_0041b94d;
L_0041b86b:; BB(0x0041b86b);
    /* 0041b86b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b86e: jne 0x41b8a8 */ if (!fZ) goto L_0041b8a8;
L_0041b870:; BB(0x0041b870);
    /* 0041b870: push 0x42d20000 */ { u32 v = 0x42d20000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b875: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b877: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b87cu); f_007aaa30();
    /* 0041b87c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b87e: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b884:; BB(0x0041b884);
    /* 0041b884: push 0x8fc30c */ { u32 v = 0x8fc30cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b889: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x41b88eu); f_00814f0c();
    /* 0041b88e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041b88f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b892: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b899: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 0041b8a3: jmp 0x41b613 */ goto L_0041b613;
L_0041b8a8:; BB(0x0041b8a8);
    /* 0041b8a8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041b8ab: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041b8b1:; BB(0x0041b8b1);
    /* 0041b8b1: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b8b3: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 0041b8b9: fcomp dword ptr [0x8fbe64] */ fx_compare(ST(0), R_F32((u32)(0x8fbe64u))); FPOP();
    /* 0041b8bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041b8c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041b8c2: jb 0x41b900 */ if (fC) goto L_0041b900;
L_0041b8c4:; BB(0x0041b8c4);
    /* 0041b8c4: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b8c6: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 0041b8cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b8ce: je 0x41b8ef */ if (fZ) goto L_0041b8ef;
L_0041b8d0:; BB(0x0041b8d0);
    /* 0041b8d0: mov edx, eax */ r_edx = r_eax;
    /* 0041b8d2: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0041b8d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041b8db: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0041b8df: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
    /* 0041b8e9: mov edx, dword ptr [edx + 0x874] */ r_edx = R32((u32)(r_edx+0x874u));
L_0041b8ef:; BB(0x0041b8ef);
    /* 0041b8ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b8f2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b8f5: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041b8fb: jmp 0x41b613 */ goto L_0041b613;
L_0041b900:; BB(0x0041b900);
    /* 0041b900: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b902: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0041b905: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0041b908: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b909: lea ebx, [eax + 0x420] */ r_ebx = (u32)(r_eax+0x420u);
    /* 0041b90f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b910: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b911: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x41b916u); f_007a8d98();
    /* 0041b916: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b919: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b91c: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 0041b922: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b924: je 0x41b9ab */ if (fZ) goto L_0041b9ab;
L_0041b92a:; BB(0x0041b92a);
    /* 0041b92a: lea edx, [eax + 0x414] */ r_edx = (u32)(r_eax+0x414u);
    /* 0041b930: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b931: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x41b936u); f_00508db8();
    /* 0041b936: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b939: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0041b93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b93d: mov ecx, dword ptr [edx + 0x8b4] */ r_ecx = R32((u32)(r_edx+0x8b4u));
    /* 0041b943: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x41b948u); f_00508dd0();
    /* 0041b948: jmp 0x41b613 */ goto L_0041b613;
L_0041b94d:; BB(0x0041b94d);
    /* 0041b94d: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b94f: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 0041b955: fcomp dword ptr [0x8fbe5c] */ fx_compare(ST(0), R_F32((u32)(0x8fbe5cu))); FPOP();
    /* 0041b95b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041b95d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041b95e: ja 0x41b99b */ if ((!fC&&!fZ)) goto L_0041b99b;
L_0041b960:; BB(0x0041b960);
    /* 0041b960: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b962: mov edx, dword ptr [eax + 0x870] */ r_edx = R32((u32)(r_eax+0x870u));
    /* 0041b968: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041b96b: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 0041b971: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0041b974: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b976: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041b97c:; BB(0x0041b97c);
    /* 0041b97c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b97e: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041b984: lea ecx, [eax + 0x414] */ r_ecx = (u32)(r_eax+0x414u);
    /* 0041b98a: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041b98d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b98e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41b993u); f_0050b7a4();
    /* 0041b993: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b996: jmp 0x41b613 */ goto L_0041b613;
L_0041b99b:; BB(0x0041b99b);
    /* 0041b99b: mov eax, ecx */ r_eax = r_ecx;
    /* 0041b99d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b9a0: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041b9a6: jmp 0x41b613 */ goto L_0041b613;
L_0041b9ab:; BB(0x0041b9ab);
    /* 0041b9ab: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0041b9ae: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9b0: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041b9b6: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 0041b9bc: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041b9bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9c1: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x41b9c6u); f_00509dc4();
    /* 0041b9c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b9c9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b9cc: mov dword ptr [edx + 0x8b4], eax */ W32((u32)(r_edx+0x8b4u), r_eax);
    /* 0041b9d2: jmp 0x41b613 */ goto L_0041b613;
L_0041b9d7:; BB(0x0041b9d7);
    /* 0041b9d7: push 0x42960000 */ { u32 v = 0x42960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9dc: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b9de: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41b9e3u); f_007aaa30();
    /* 0041b9e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041b9e5: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041b9eb:; BB(0x0041b9eb);
    /* 0041b9eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b9ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9f0: push 0x31a */ { u32 v = 0x31au; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9f5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41b9fau); f_00814298();
    /* 0041b9fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b9fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ba00: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041ba07: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 0041ba11: jmp 0x41b613 */ goto L_0041b613;
L_0041ba16:; BB(0x0041ba16);
    /* 0041ba16: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba1b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041ba1d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41ba22u); f_007aaa30();
    /* 0041ba22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ba24: je 0x41ba38 */ if (fZ) goto L_0041ba38;
L_0041ba26:; BB(0x0041ba26);
    /* 0041ba26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ba28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba2b: push 0x322 */ { u32 v = 0x322u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba30: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41ba35u); f_00814298();
    /* 0041ba35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041ba38:; BB(0x0041ba38);
    /* 0041ba38: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ba40: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41ba45u); f_007aaa30();
    /* 0041ba45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041ba47: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041ba4d:; BB(0x0041ba4d);
    /* 0041ba4d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ba50: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba52: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 0041ba58: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0041ba5b: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ba5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba5f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41ba64u); f_0050b7a4();
    /* 0041ba64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ba67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ba6a: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041ba71: jmp 0x41b613 */ goto L_0041b613;
L_0041ba76:; BB(0x0041ba76);
    /* 0041ba76: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba7b: mov ecx, eax */ r_ecx = r_eax;
    /* 0041ba7d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41ba82u); f_007aaa30();
    /* 0041ba82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041ba84: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041ba8a:; BB(0x0041ba8a);
    /* 0041ba8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ba8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba8f: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba94: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41ba99u); f_00814298();
    /* 0041ba99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ba9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ba9f: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041baa6: jmp 0x41b613 */ goto L_0041b613;
L_0041baab:; BB(0x0041baab);
    /* 0041baab: push 0x42960000 */ { u32 v = 0x42960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bab0: mov ecx, eax */ r_ecx = r_eax;
    /* 0041bab2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41bab7u); f_007aaa30();
    /* 0041bab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041bab9: je 0x41b613 */ if (fZ) goto L_0041b613;
L_0041babf:; BB(0x0041babf);
    /* 0041babf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041bac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bac3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bac4: push 0x31a */ { u32 v = 0x31au; r_esp -= 4; W32(r_esp, v); }
    /* 0041bac9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41baceu); f_00814298();
    /* 0041bace: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bad1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bad4: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041badb: mov dword ptr [eax + 0x870], 0 */ W32((u32)(r_eax+0x870u), 0x0u);
    /* 0041bae5: jmp 0x41b613 */ goto L_0041b613;
L_0041baea:; BB(0x0041baea);
    /* 0041baea: mov eax, ecx */ r_eax = r_ecx;
    /* 0041baec: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 0041baf2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041baf5: jne 0x41b613 */ if (!fZ) goto L_0041b613;
L_0041bafb:; BB(0x0041bafb);
    /* 0041bafb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bafd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041baff: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041bb01: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41bb07u); call_ind(t); }
    /* 0041bb07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bb0a: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0041bb0e: mov ebx, dword ptr [ecx + 0x684] */ r_ebx = R32((u32)(r_ecx+0x684u));
    /* 0041bb14: movzx esi, word ptr [ecx + 0x394] */ r_esi = (u32)R16((u32)(r_ecx+0x394u));
    /* 0041bb1b: mov edi, dword ptr [ecx + 0x698] */ r_edi = R32((u32)(r_ecx+0x698u));
    /* 0041bb21: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041bb23: mov byte ptr [ebp - 0x40], 0x12 */ W8((u32)(r_ebp+0xffffffc0u), 0x12u);
    /* 0041bb27: mov word ptr [ebp - 0x3e], ax */ W16((u32)(r_ebp+0xffffffc2u), (u16)r_eax);
    /* 0041bb2b: mov eax, dword ptr [ecx + 0x69c] */ r_eax = R32((u32)(r_ecx+0x69cu));
    /* 0041bb31: mov byte ptr [ebp - 0x3f], 5 */ W8((u32)(r_ebp+0xffffffc1u), 0x5u);
    /* 0041bb35: mov word ptr [ebp - 0x3c], dx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_edx);
    /* 0041bb39: mov word ptr [ebp - 0x3a], bx */ W16((u32)(r_ebp+0xffffffc6u), (u16)r_ebx);
    /* 0041bb3d: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0041bb40: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0041bb43: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0041bb46: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0041bb49: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41bb4eu); f_008003e0();
    /* 0041bb4e: jmp 0x41b613 */ goto L_0041b613;
L_0041bb53:; BB(0x0041bb53);
    /* 0041bb53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041bb55: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0041bb5c: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 0041bb62: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41bb67u); f_007aa094();
    /* 0041bb67: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bb6a: mov eax, dword ptr [ecx + 0x5e8] */ r_eax = R32((u32)(r_ecx+0x5e8u));
    /* 0041bb70: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 0041bb77: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041bb79: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0041bb80: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0041bb83: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0041bb86: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0041bb89: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 0041bb90: mov dword ptr [ecx + 0x5e4], eax */ W32((u32)(r_ecx+0x5e4u), r_eax);
    /* 0041bb96: mov dword ptr [ecx + 0x8b4], edx */ W32((u32)(r_ecx+0x8b4u), r_edx);
    /* 0041bb9c: mov dword ptr [ecx + 0x5e0], 0 */ W32((u32)(r_ecx+0x5e0u), 0x0u);
    /* 0041bba6: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41bbabu); f_00420a44();
    /* 0041bbab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bbad: jne 0x41bbbe */ if (!fZ) goto L_0041bbbe;
L_0041bbaf:; BB(0x0041bbaf);
    /* 0041bbaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bbb2: mov dword ptr [eax + 0x86c], 1 */ W32((u32)(r_eax+0x86cu), 0x1u);
    /* 0041bbbc: jmp 0x41bbd0 */ goto L_0041bbd0;
L_0041bbbe:; BB(0x0041bbbe);
    /* 0041bbbe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bbc1: jne 0x41bbd0 */ if (!fZ) goto L_0041bbd0;
L_0041bbc3:; BB(0x0041bbc3);
    /* 0041bbc3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bbc6: mov dword ptr [eax + 0x86c], 2 */ W32((u32)(r_eax+0x86cu), 0x2u);
L_0041bbd0:; BB(0x0041bbd0);
    /* 0041bbd0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bbd3: mov dword ptr [eax + 0x878], 1 */ W32((u32)(r_eax+0x878u), 0x1u);
    /* 0041bbdd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041bbdf: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0041bbe5: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbe7: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 0041bbed: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0041bbf0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41bbf5u); f_005caba4();
    /* 0041bbf5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041bbf6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041bbf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bbfb: je 0x41bc28 */ if (fZ) goto L_0041bc28;
L_0041bbfd:; BB(0x0041bbfd);
    /* 0041bbfd: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0041bc04: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041bc0b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041bc0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0041bc11: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc16: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041bc1c: call 0x4262e0 */ r_esp -= 4; W32(r_esp, 0x41bc21u); f_004262e0();
    /* 0041bc21: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0041bc28:; BB(0x0041bc28);
    /* 0041bc28: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041bc2f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bc32: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0041bc37: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0041bc3e: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x41bc43u); f_00717f74();
    /* 0041bc43: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bc46: call 0x520e2c */ r_esp -= 4; W32(r_esp, 0x41bc4bu); f_00520e2c();
    /* 0041bc4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041bc4e: call 0x7ba03c */ r_esp -= 4; W32(r_esp, 0x41bc53u); f_007ba03c();
    /* 0041bc53: jmp 0x41b613 */ goto L_0041b613;
}

void f_0041b6e0(void)
{
    FN_ENTER(0x0041b6e0);
    goto L_0041b6e0;
L_0041b613:; BB(0x0041b613);
    /* 0041b613: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041b616: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041b619: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041b61c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b61f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041b626: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b629: ret 4 */ FN_RET(0x0041b6e0); r_esp += 8; return;
L_0041b6e0:; BB(0x0041b6e0);
    /* 0041b6e0: add byte ptr [ebx + 0x458b10c4], al */ { u32 ad = (u32)(r_ebx+0x458b10c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0041b6e6: in al, dx */ UNSUP(0x0041b6e6, "in al, dx");
    /* 0041b6e7: add dword ptr [eax + 0x874], 1 */ { u32 ad = (u32)(r_eax+0x874u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041b6ee: jmp 0x41b613 */ goto L_0041b613;
}

void f_0041bc58(void) /* sub_41BC58 */
{
    FN_ENTER(0x0041bc58);
    /* 0041bc58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc5a: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041bc5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041bc5f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0041bc63: lea ebp, [ebx + 0x898] */ r_ebp = (u32)(r_ebx+0x898u);
    /* 0041bc69: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041bc6c: ja 0x41beb6 */ if ((!fC&&!fZ)) goto L_0041beb6;
L_0041bc72:; BB(0x0041bc72);
    /* 0041bc72: mov eax, dword ptr [eax*4 + 0x8fb33c] */ r_eax = R32((u32)(r_eax*4+0x8fb33cu));
    /* 0041bc79: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041beb6:; BB(0x0041beb6);
    /* 0041beb6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041beb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041beba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bebb: ret 4 */ FN_RET(0x0041bc58); r_esp += 8; return;
}

void f_0041bc7b(void)
{
    FN_ENTER(0x0041bc7b);
    /* 0041bc7b: mov eax, dword ptr [ebx + 0x86c] */ r_eax = R32((u32)(r_ebx+0x86cu));
    /* 0041bc81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041bc84: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bc87: jge 0x41bc97 */ if ((fS==fO)) goto L_0041bc97;
L_0041bc89:; BB(0x0041bc89);
    /* 0041bc89: mov dword ptr [ebx + 0x86c], eax */ W32((u32)(r_ebx+0x86cu), r_eax);
    /* 0041bc8f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041bc92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041bc93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bc94: ret 4 */ FN_RET(0x0041bc7b); r_esp += 8; return;
L_0041bc97:; BB(0x0041bc97);
    /* 0041bc97: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0041bc9d: mov dword ptr [ebx + 0x86c], 0 */ W32((u32)(r_ebx+0x86cu), 0x0u);
    /* 0041bca7: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041bcaa: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041bcb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041bcb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041bcb3: ja 0x41bcc7 */ if ((!fC&&!fZ)) goto L_0041bcc7;
L_0041bcb5:; BB(0x0041bcb5);
    /* 0041bcb5: mov dword ptr [ebx + 0x870], 1 */ W32((u32)(r_ebx+0x870u), 0x1u);
    /* 0041bcbf: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041bcc2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041bcc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bcc4: ret 4 */ FN_RET(0x0041bc7b); r_esp += 8; return;
L_0041bcc7:; BB(0x0041bcc7);
    /* 0041bcc7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0041bcca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bccb: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0041bcce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bcd0: call 0x41bfa8 */ r_esp -= 4; W32(r_esp, 0x41bcd5u); f_0041bfa8();
    /* 0041bcd5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bcd7: call 0x41bf24 */ r_esp -= 4; W32(r_esp, 0x41bcdcu); f_0041bf24();
    /* 0041bcdc: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041bcdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041bce0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bce1: ret 4 */ FN_RET(0x0041bc7b); r_esp += 8; return;
}

void f_0041bce4(void)
{
    FN_ENTER(0x0041bce4);
    /* 0041bce4: lea eax, [ebx + 0x60] */ r_eax = (u32)(r_ebx+0x60u);
    /* 0041bce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bce8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bcea: call 0x41bf7c */ r_esp -= 4; W32(r_esp, 0x41bcefu); f_0041bf7c();
    /* 0041bcef: jmp 0x41beb6 */ goto L_0041beb6;
L_0041beb6:; BB(0x0041beb6);
    /* 0041beb6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041beb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041beba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bebb: ret 4 */ FN_RET(0x0041bce4); r_esp += 8; return;
}

void f_0041bcf4(void)
{
    FN_ENTER(0x0041bcf4);
    /* 0041bcf4: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041bcf7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bcf9: call 0x41bfa8 */ r_esp -= 4; W32(r_esp, 0x41bcfeu); f_0041bfa8();
    /* 0041bcfe: jmp 0x41beb6 */ goto L_0041beb6;
L_0041beb6:; BB(0x0041beb6);
    /* 0041beb6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041beb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041beba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bebb: ret 4 */ FN_RET(0x0041bcf4); r_esp += 8; return;
}

void f_0041bd03(void)
{
    FN_ENTER(0x0041bd03);
    /* 0041bd03: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041bd09: call 0x427a58 */ r_esp -= 4; W32(r_esp, 0x41bd0eu); f_00427a58();
    /* 0041bd0e: jmp 0x41beb6 */ goto L_0041beb6;
L_0041beb6:; BB(0x0041beb6);
    /* 0041beb6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041beb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041beba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bebb: ret 4 */ FN_RET(0x0041bd03); r_esp += 8; return;
}

void f_0041bd13(void)
{
    FN_ENTER(0x0041bd13);
    /* 0041bd13: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0041bd15: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0041bd1a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0041bd21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bd23: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41bd29u); call_ind(t); }
    /* 0041bd29: mov dword ptr [ebx + 0x3ec], 2 */ W32((u32)(r_ebx+0x3ecu), 0x2u);
    /* 0041bd33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bd35: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x41bd3au); f_0041a018();
    /* 0041bd3a: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0041bd40: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0041bd42: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041bd47: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041bd4c: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0041bd52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bd54: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x41bd5au); call_ind(t); }
    /* 0041bd5a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041bd5c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bd5e: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x41bd64u); call_ind(t); }
    /* 0041bd64: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0041bd67: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0041bd6a: mov ecx, dword ptr [ebx + 0x6e0] */ r_ecx = R32((u32)(r_ebx+0x6e0u));
    /* 0041bd70: mov dword ptr [ebx + 0x898], eax */ W32((u32)(r_ebx+0x898u), r_eax);
    /* 0041bd76: mov dword ptr [ebx + 0x8a0], edx */ W32((u32)(r_ebx+0x8a0u), r_edx);
    /* 0041bd7c: mov dword ptr [ebx + 0x86c], 0x64 */ W32((u32)(r_ebx+0x86cu), 0x64u);
    /* 0041bd86: mov dword ptr [ebx + 0x870], 0 */ W32((u32)(r_ebx+0x870u), 0x0u);
    /* 0041bd90: mov dword ptr [ebx + 0x89c], 0 */ W32((u32)(r_ebx+0x89cu), 0x0u);
    /* 0041bd9a: mov dword ptr [ebx + 0x884], 0 */ W32((u32)(r_ebx+0x884u), 0x0u);
    /* 0041bda4: mov dword ptr [ebx + 0x888], 0 */ W32((u32)(r_ebx+0x888u), 0x0u);
    /* 0041bdae: call 0x427bb4 */ r_esp -= 4; W32(r_esp, 0x41bdb3u); f_00427bb4();
    /* 0041bdb3: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041bdb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041bdb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bdb8: ret 4 */ FN_RET(0x0041bd13); r_esp += 8; return;
}

void f_0041bdbb(void)
{
    FN_ENTER(0x0041bdbb);
    /* 0041bdbb: mov eax, dword ptr [ebx + 0x870] */ r_eax = R32((u32)(r_ebx+0x870u));
    /* 0041bdc1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bdc4: je 0x41bebe */ if (fZ) goto L_0041bebe;
L_0041bdca:; BB(0x0041bdca);
    /* 0041bdca: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0041bdd0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041bdd3: test dword ptr [0xa0f678], edx */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bdd9: je 0x41beb6 */ if (fZ) goto L_0041beb6;
L_0041bddf:; BB(0x0041bddf);
    /* 0041bddf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bde1: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bde3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041bde5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bde7: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41bdedu); call_ind(t); }
    /* 0041bded: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0041bdf1: mov ebp, dword ptr [ebx + 0x684] */ r_ebp = R32((u32)(r_ebx+0x684u));
    /* 0041bdf7: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041bdfb: mov edx, 0x13 */ r_edx = 0x13u;
    /* 0041be00: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041be05: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041be0a: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0041be11: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041be16: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 0041be1b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041be1f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041be22: mov eax, dword ptr [ebx + 0x698] */ r_eax = R32((u32)(r_ebx+0x698u));
    /* 0041be28: mov ebx, dword ptr [ebx + 0x69c] */ r_ebx = R32((u32)(r_ebx+0x69cu));
    /* 0041be2e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041be32: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0041be36: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41be3bu); f_008003e0();
    /* 0041be3b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041be3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041be3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041be40: ret 4 */ FN_RET(0x0041bdbb); r_esp += 8; return;
L_0041beb6:; BB(0x0041beb6);
    /* 0041beb6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041beb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041beba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bebb: ret 4 */ FN_RET(0x0041bdbb); r_esp += 8; return;
L_0041bebe:; BB(0x0041bebe);
    /* 0041bebe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bec0: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041bec2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041bec4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041bec6: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41beccu); call_ind(t); }
    /* 0041becc: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0041bed0: mov ebp, dword ptr [ebx + 0x684] */ r_ebp = R32((u32)(r_ebx+0x684u));
    /* 0041bed6: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 0041bedb: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 0041bee0: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 0041bee5: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0041beea: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0041bef1: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0041bef6: mov word ptr [esp + 0x1a], bp */ W16((u32)(r_esp+0x1au), (u16)r_ebp);
    /* 0041befb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041beff: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0041bf03: mov eax, dword ptr [ebx + 0x698] */ r_eax = R32((u32)(r_ebx+0x698u));
    /* 0041bf09: mov ebx, dword ptr [ebx + 0x69c] */ r_ebx = R32((u32)(r_ebx+0x69cu));
    /* 0041bf0f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0041bf13: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0041bf17: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41bf1cu); f_008003e0();
    /* 0041bf1c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041bf1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041bf20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bf21: ret 4 */ FN_RET(0x0041bdbb); r_esp += 8; return;
}

void f_0041be43(void)
{
    FN_ENTER(0x0041be43);
    /* 0041be43: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0041be46: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41be4bu); f_0082dcbc();
    /* 0041be4b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0041be4f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0041be52: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41be57u); f_0082ddd8();
    /* 0041be57: fld dword ptr [0x8fbe14] */ FPUSH(R_F32((u32)(0x8fbe14u)));
    /* 0041be5d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0041be5f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041be61: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0041be64: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0041be68: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0041be6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041be6c: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0041be6f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041be71: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0041be74: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0041be77: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0041be7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041be7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041be7c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x41be81u); f_007a9180();
    /* 0041be81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041be84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041be85: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041be88: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x41be8du); f_0082dc9c();
    /* 0041be8d: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0041be90: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0041be93: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 0041be96: fld dword ptr [ebx + 0x884] */ FPUSH(R_F32((u32)(r_ebx+0x884u)));
    /* 0041be9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041be9e: fstp dword ptr [ebx + 0x884] */ W_F32((u32)(r_ebx+0x884u), ST(0)); FPOP();
    /* 0041bea4: mov dword ptr [ebx + 0x898], eax */ W32((u32)(r_ebx+0x898u), r_eax);
    /* 0041beaa: mov dword ptr [ebx + 0x89c], edx */ W32((u32)(r_ebx+0x89cu), r_edx);
    /* 0041beb0: mov dword ptr [ebx + 0x8a0], ebp */ W32((u32)(r_ebx+0x8a0u), r_ebp);
    /* 0041beb6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041beb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041beba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bebb: ret 4 */ FN_RET(0x0041be43); r_esp += 8; return;
}

void f_0041beb6(void)
{
    FN_ENTER(0x0041beb6);
    /* 0041beb6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041beb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041beba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bebb: ret 4 */ FN_RET(0x0041beb6); r_esp += 8; return;
}

void f_0041bf24(void) /* sub_41BF24 */
{
    FN_ENTER(0x0041bf24);
    /* 0041bf24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041bf27: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0041bf2b: movzx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)R16((u32)(r_ecx+0x32eu));
    /* 0041bf32: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041bf37: mov eax, dword ptr [ecx + 0x684] */ r_eax = R32((u32)(r_ecx+0x684u));
    /* 0041bf3d: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041bf41: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041bf46: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041bf4b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0041bf50: movzx eax, word ptr [ecx + 0x394] */ r_eax = (u32)R16((u32)(r_ecx+0x394u));
    /* 0041bf57: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041bf5b: mov eax, dword ptr [ecx + 0x698] */ r_eax = R32((u32)(r_ecx+0x698u));
    /* 0041bf61: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041bf65: mov eax, dword ptr [ecx + 0x69c] */ r_eax = R32((u32)(r_ecx+0x69cu));
    /* 0041bf6b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0041bf6f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041bf72: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41bf77u); f_008003e0();
    /* 0041bf77: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041bf7a: ret  */ FN_RET(0x0041bf24); r_esp += 4; return;
}

void f_0041bf7c(void) /* sub_41BF7C */
{
    FN_ENTER(0x0041bf7c);
    /* 0041bf7c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041bf7f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0041bf83: fld dword ptr [ecx + 0x6a0] */ FPUSH(R_F32((u32)(r_ecx+0x6a0u)));
    /* 0041bf89: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0041bf8c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0041bf90: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041bf95: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041bf99: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0041bf9d: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 0041bf9f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0041bfa2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041bfa5: ret 4 */ FN_RET(0x0041bf7c); r_esp += 8; return;
}

void f_0041bfa8(void) /* sub_41BFA8 */
{
    FN_ENTER(0x0041bfa8);
    /* 0041bfa8: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0041bfac: fstp dword ptr [ecx + 0x698] */ W_F32((u32)(r_ecx+0x698u), ST(0)); FPOP();
    /* 0041bfb2: mov dword ptr [ecx + 0x69c], 0 */ W32((u32)(r_ecx+0x69cu), 0x0u);
    /* 0041bfbc: ret 4 */ FN_RET(0x0041bfa8); r_esp += 8; return;
}

void f_0041bfc0(void) /* sub_41BFC0 */
{
    FN_ENTER(0x0041bfc0);
    /* 0041bfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfc1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041bfc4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0041bfc6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0041bfca: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041bfcd: ja 0x41c15f */ if ((!fC&&!fZ)) goto L_0041c15f;
L_0041bfd3:; BB(0x0041bfd3);
    /* 0041bfd3: mov eax, dword ptr [eax*4 + 0x8fb36c] */ r_eax = R32((u32)(r_eax*4+0x8fb36cu));
    /* 0041bfda: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041c15f:; BB(0x0041c15f);
    /* 0041c15f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c163: ret 4 */ FN_RET(0x0041bfc0); r_esp += 8; return;
}

void f_0041bfdc(void)
{
    FN_ENTER(0x0041bfdc);
    /* 0041bfdc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041bfde: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x41bfe3u); f_00419ff0();
    /* 0041bfe3: jmp 0x41c15f */ goto L_0041c15f;
L_0041c15f:; BB(0x0041c15f);
    /* 0041c15f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c163: ret 4 */ FN_RET(0x0041bfdc); r_esp += 8; return;
}

void f_0041bfe8(void)
{
    FN_ENTER(0x0041bfe8);
    /* 0041bfe8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041bfea: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x41bfefu); f_0041a004();
    /* 0041bfef: jmp 0x41c15f */ goto L_0041c15f;
L_0041c15f:; BB(0x0041c15f);
    /* 0041c15f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c163: ret 4 */ FN_RET(0x0041bfe8); r_esp += 8; return;
}

void f_0041bff4(void)
{
    FN_ENTER(0x0041bff4);
    /* 0041bff4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041bff7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041bff9: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x41bfffu); call_ind(t); }
    /* 0041bfff: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 0041c009: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041c00b: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x41c010u); f_0041a018();
    /* 0041c010: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0041c016: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0041c019: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041c01e: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041c023: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0041c029: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041c02b: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x41c031u); call_ind(t); }
    /* 0041c031: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041c034: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041c036: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x41c03cu); call_ind(t); }
    /* 0041c03c: mov dword ptr [ebp + 0x86c], 0 */ W32((u32)(r_ebp+0x86cu), 0x0u);
    /* 0041c046: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c04a: ret 4 */ FN_RET(0x0041bff4); r_esp += 8; return;
}

