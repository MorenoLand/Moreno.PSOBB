#include "protos.h"

void f_008bc04b(void) /* sub_8BC04B */
{
    FN_ENTER(0x008bc04b);
    /* 008bc04b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bc04c: mov ebp, esp */ r_ebp = r_esp;
    /* 008bc04e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bc051: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 008bc054: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008bc057: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008bc05a: movsx ecx, word ptr [ecx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 008bc05d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008bc060: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bc063: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008bc066: mov ecx, dword ptr [ecx + 0x11c] */ r_ecx = R32((u32)(r_ecx+0x11cu));
    /* 008bc06c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 008bc06e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc071: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc074: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bc079: mov al, byte ptr [eax + ecx + 0x80] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x80u))) & 0xffu);
    /* 008bc080: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008bc083: mov byte ptr [ecx + edx], al */ W8((u32)(r_ecx+r_edx), (u8)r_eax);
    /* 008bc086: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008bc087: ret  */ FN_RET(0x008bc04b); r_esp += 4; return;
}

void f_008bc088(void) /* sub_8BC088 */
{
    FN_ENTER(0x008bc088);
    /* 008bc088: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bc089: mov ebp, esp */ r_ebp = r_esp;
    /* 008bc08b: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bc091: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bc094: mov eax, dword ptr [eax + 0x11c] */ r_eax = R32((u32)(r_eax+0x11cu));
    /* 008bc09a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008bc09d: mov edx, dword ptr [edx + 0x50] */ r_edx = R32((u32)(r_edx+0x50u));
    /* 008bc0a0: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc0a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bc0a6: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc0a9: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 008bc0af: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc0b2: and ecx, 0xfffffff8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc0b5: cmp byte ptr [0xa35fc8], 0 */ {  u32 a = R8((u32)(0xa35fc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008bc0bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008bc0bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008bc0be: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc0c1: je 0x8bc0ca */ if (fZ) goto L_008bc0ca;
L_008bc0c3:; BB(0x008bc0c3);
    /* 008bc0c3: call 0x8bd557 */ r_esp -= 4; W32(r_esp, 0x8bc0c8u); f_008bd557();
    /* 008bc0c8: jmp 0x8bc0cf */ goto L_008bc0cf;
L_008bc0ca:; BB(0x008bc0ca);
    /* 008bc0ca: call 0x8bd0f5 */ r_esp -= 4; W32(r_esp, 0x8bc0cfu); f_008bd0f5();
L_008bc0cf:; BB(0x008bc0cf);
    /* 008bc0cf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bc0d2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bc0d3: ret  */ FN_RET(0x008bc088); r_esp += 4; return;
}

void f_008bc0d4(void) /* sub_8BC0D4 */
{
    FN_ENTER(0x008bc0d4);
    /* 008bc0d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bc0d5: mov ebp, esp */ r_ebp = r_esp;
    /* 008bc0d7: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bc0dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bc0e0: mov eax, dword ptr [eax + 0x11c] */ r_eax = R32((u32)(r_eax+0x11cu));
    /* 008bc0e6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008bc0e9: mov edx, dword ptr [edx + 0x50] */ r_edx = R32((u32)(r_edx+0x50u));
    /* 008bc0ec: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc0f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bc0f2: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc0f5: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 008bc0fb: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc0fe: and ecx, 0xfffffff8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc101: cmp byte ptr [0xa35fc8], 0 */ {  u32 a = R8((u32)(0xa35fc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008bc108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008bc109: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008bc10a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc10d: je 0x8bc116 */ if (fZ) goto L_008bc116;
L_008bc10f:; BB(0x008bc10f);
    /* 008bc10f: call 0x8bdf6a */ r_esp -= 4; W32(r_esp, 0x8bc114u); f_008bdf6a();
    /* 008bc114: jmp 0x8bc11b */ goto L_008bc11b;
L_008bc116:; BB(0x008bc116);
    /* 008bc116: call 0x8bdc0f */ r_esp -= 4; W32(r_esp, 0x8bc11bu); f_008bdc0f();
L_008bc11b:; BB(0x008bc11b);
    /* 008bc11b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bc11e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bc11f: ret  */ FN_RET(0x008bc0d4); r_esp += 4; return;
}

void f_008bc120(void) /* sub_8BC120 */
{
    FN_ENTER(0x008bc120);
    /* 008bc120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bc121: mov ebp, esp */ r_ebp = r_esp;
    /* 008bc123: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bc129: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bc12c: fld dword ptr [0x99edcc] */ FPUSH(R_F32((u32)(0x99edccu)));
    /* 008bc132: mov eax, dword ptr [eax + 0x11c] */ r_eax = R32((u32)(r_eax+0x11cu));
    /* 008bc138: fld dword ptr [0x99edc8] */ FPUSH(R_F32((u32)(0x99edc8u)));
    /* 008bc13e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008bc141: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc146: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008bc149: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bc14c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 008bc14f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bc150: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc151: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 008bc157: mov dword ptr [ebp - 0x18], 8 */ W32((u32)(r_ebp+0xffffffe8u), 0x8u);
    /* 008bc15e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008bc15f:; BB(0x008bc15f);
    /* 008bc15f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008bc161: mov di, word ptr [edx + 0x20] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_edx+0x20u))) & 0xffffu);
    /* 008bc165: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc167: mov bx, word ptr [edx + 0x10] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_edx+0x10u))) & 0xffffu);
    /* 008bc16b: mov si, word ptr [edx + 0x70] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_edx+0x70u))) & 0xffffu);
    /* 008bc16f: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc171: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008bc173: mov di, word ptr [edx + 0x30] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_edx+0x30u))) & 0xffffu);
    /* 008bc177: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc179: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008bc17b: mov di, word ptr [edx + 0x40] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_edx+0x40u))) & 0xffffu);
    /* 008bc17f: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc181: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008bc183: mov di, word ptr [edx + 0x50] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_edx+0x50u))) & 0xffffu);
    /* 008bc187: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc189: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008bc18b: mov di, word ptr [edx + 0x60] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_edx+0x60u))) & 0xffffu);
    /* 008bc18f: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc191: or ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc193: test bx, bx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008bc196: jne 0x8bc1cb */ if (!fZ) goto L_008bc1cb;
L_008bc198:; BB(0x008bc198);
    /* 008bc198: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 008bc19b: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008bc19e: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 008bc1a1: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008bc1a3: fst dword ptr [eax] */ W_F32((u32)(r_eax), ST(0));
    /* 008bc1a5: fst dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0));
    /* 008bc1a8: fst dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0));
    /* 008bc1ab: fst dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0));
    /* 008bc1ae: fst dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0));
    /* 008bc1b4: fst dword ptr [eax + 0xa0] */ W_F32((u32)(r_eax+0xa0u), ST(0));
    /* 008bc1ba: fst dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0));
    /* 008bc1c0: fstp dword ptr [eax + 0xe0] */ W_F32((u32)(r_eax+0xe0u), ST(0)); FPOP();
    /* 008bc1c6: jmp 0x8bc341 */ goto L_008bc341;
L_008bc1cb:; BB(0x008bc1cb);
    /* 008bc1cb: movsx ebx, word ptr [edx] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 008bc1ce: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008bc1d1: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 008bc1d5: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 008bc1d8: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008bc1db: movsx ebx, word ptr [edx + 0x40] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x40u));
    /* 008bc1df: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 008bc1e2: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008bc1e4: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 008bc1e7: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 008bc1ea: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 008bc1ed: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008bc1ef: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008bc1f2: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 008bc1f8: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 008bc1fb: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 008bc1fe: movsx edi, word ptr [edx + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x10u));
    /* 008bc202: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008bc204: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 008bc20a: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 008bc20d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008bc20f: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008bc212: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008bc214: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008bc216: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008bc219: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008bc21b: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc21d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 008bc21f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc221: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008bc224: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 008bc227: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008bc22a: fsub dword ptr [ebp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x10u));
    /* 008bc22d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008bc22f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc231: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008bc233: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 008bc236: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008bc239: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008bc23c: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 008bc23f: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 008bc241: movsx edi, word ptr [edx + 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x30u));
    /* 008bc245: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008bc248: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008bc24a: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 008bc24c: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008bc24f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008bc251: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc253: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 008bc255: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc257: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc259: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 008bc25c: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008bc25f: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 008bc262: movsx edi, word ptr [edx + 0x50] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x50u));
    /* 008bc266: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008bc268: fld dword ptr [ecx + 0x60] */ FPUSH(R_F32((u32)(r_ecx+0x60u)));
    /* 008bc26b: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008bc26e: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 008bc271: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008bc273: fld dword ptr [ecx + 0xa0] */ FPUSH(R_F32((u32)(r_ecx+0xa0u)));
    /* 008bc279: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 008bc27c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008bc27e: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 008bc281: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 008bc284: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008bc287: fld dword ptr [ecx + 0xe0] */ FPUSH(R_F32((u32)(r_ecx+0xe0u)));
    /* 008bc28d: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 008bc290: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008bc292: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008bc295: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 008bc297: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008bc29a: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008bc29d: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 008bc29f: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008bc2a2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008bc2a4: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 008bc2a6: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008bc2a9: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008bc2ab: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc2ad: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 008bc2af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc2b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc2b3: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008bc2b6: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 008bc2b9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008bc2bb: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 008bc2be: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008bc2c0: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008bc2c3: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008bc2c6: fmul dword ptr [0x99edc4] */ ST(0) = ST(0) * R_F32((u32)(0x99edc4u));
    /* 008bc2cc: fsubr dword ptr [ebp - 0xc] */ ST(0) = R_F32((u32)(r_ebp+0xfffffff4u)) - ST(0);
    /* 008bc2cf: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc2d1: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008bc2d4: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 008bc2d7: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 008bc2d9: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc2db: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 008bc2de: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 008bc2e0: fmul dword ptr [0x99edc0] */ ST(0) = ST(0) * R_F32((u32)(0x99edc0u));
    /* 008bc2e6: fsub dword ptr [ebp - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff4u));
    /* 008bc2e9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008bc2eb: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008bc2ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc2f0: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008bc2f2: fadd dword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffecu));
    /* 008bc2f5: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008bc2f7: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008bc2fa: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 008bc2fc: fstp dword ptr [eax + 0xe0] */ W_F32((u32)(r_eax+0xe0u), ST(0)); FPOP();
    /* 008bc302: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008bc305: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008bc307: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 008bc30a: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008bc30d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc30f: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 008bc315: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc317: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc319: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc31b: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008bc31e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008bc320: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 008bc323: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008bc326: fstp dword ptr [eax + 0xa0] */ W_F32((u32)(r_eax+0xa0u), ST(0)); FPOP();
    /* 008bc32c: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008bc32f: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 008bc332: fstp dword ptr [eax + 0x80] */ W_F32((u32)(r_eax+0x80u), ST(0)); FPOP();
    /* 008bc338: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008bc33b: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 008bc33e: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
L_008bc341:; BB(0x008bc341);
    /* 008bc341: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bc342: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc345: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bc346: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc349: dec dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008bc34c: jne 0x8bc15f */ if (!fZ) goto L_008bc15f;
L_008bc352:; BB(0x008bc352);
    /* 008bc352: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc356: lea esi, [ebp - 0x110] */ r_esi = (u32)(r_ebp+0xfffffef0u);
    /* 008bc35c: mov ebx, 0x3ff */ r_ebx = 0x3ffu;
L_008bc361:; BB(0x008bc361);
    /* 008bc361: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008bc364: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008bc367: fadd dword ptr [esi - 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffff8u));
    /* 008bc36a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008bc36d: mov edi, dword ptr [eax + ecx*4] */ r_edi = R32((u32)(r_eax+r_ecx*4));
    /* 008bc370: add edi, dword ptr [ebp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bc373: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008bc376: fld dword ptr [esi - 8] */ FPUSH(R_F32((u32)(r_esi+0xfffffff8u)));
    /* 008bc379: fsub dword ptr [esi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x8u));
    /* 008bc37c: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 008bc37e: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 008bc381: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 008bc383: fsub dword ptr [esi + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x10u));
    /* 008bc386: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008bc388: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc38a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008bc38c: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 008bc38f: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008bc392: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008bc395: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 008bc397: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008bc39a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008bc39c: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 008bc39e: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008bc3a1: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 008bc3a3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc3a5: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 008bc3a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc3a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc3ab: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 008bc3ae: fadd dword ptr [esi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4u));
    /* 008bc3b1: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 008bc3b4: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 008bc3b7: fsub dword ptr [esi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4u));
    /* 008bc3ba: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008bc3bd: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 008bc3c0: fadd dword ptr [esi - 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffffcu));
    /* 008bc3c3: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008bc3c6: fld dword ptr [esi - 4] */ FPUSH(R_F32((u32)(r_esi+0xfffffffcu)));
    /* 008bc3c9: fsub dword ptr [esi + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x14u));
    /* 008bc3cc: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008bc3cf: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008bc3d2: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008bc3d5: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 008bc3d8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008bc3da: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008bc3dd: fmul dword ptr [0x99edc4] */ ST(0) = ST(0) * R_F32((u32)(0x99edc4u));
    /* 008bc3e3: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 008bc3e5: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 008bc3e7: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 008bc3ea: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008bc3ed: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 008bc3f0: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 008bc3f2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc3f4: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 008bc3f7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008bc3f9: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 008bc3fc: fmul dword ptr [0x99edc0] */ ST(0) = ST(0) * R_F32((u32)(0x99edc0u));
    /* 008bc402: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 008bc404: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008bc406: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008bc409: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc40b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc40d: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008bc410: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008bc412: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc417u); f_008cb1e8();
    /* 008bc417: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008bc41a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc41d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008bc41f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc422: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc425: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc427: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc42a: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 008bc42c: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc431u); f_008cb1e8();
    /* 008bc431: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc434: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc436: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 008bc439: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc43c: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 008bc43f: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc442: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc444: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc447: mov byte ptr [edi + 7], al */ W8((u32)(r_edi+0x7u), (u8)r_eax);
    /* 008bc44a: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc44fu); f_008cb1e8();
    /* 008bc44f: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008bc452: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc455: fsub dword ptr [ebp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xcu));
    /* 008bc458: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc45b: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc45e: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc460: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc463: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 008bc466: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc46bu); f_008cb1e8();
    /* 008bc46b: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 008bc46e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc471: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008bc473: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc476: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc479: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc47b: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc47e: mov byte ptr [edi + 6], al */ W8((u32)(r_edi+0x6u), (u8)r_eax);
    /* 008bc481: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc486u); f_008cb1e8();
    /* 008bc486: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 008bc489: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc48c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc48f: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc492: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc494: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc497: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 008bc49a: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc49fu); f_008cb1e8();
    /* 008bc49f: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 008bc4a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc4a5: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 008bc4a8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc4ab: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc4ae: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc4b0: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc4b3: mov byte ptr [edi + 5], al */ W8((u32)(r_edi+0x5u), (u8)r_eax);
    /* 008bc4b6: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc4bbu); f_008cb1e8();
    /* 008bc4bb: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008bc4be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc4c1: fsub dword ptr [ebp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff8u));
    /* 008bc4c4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc4c7: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc4ca: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc4cc: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc4cf: mov byte ptr [edi + 4], al */ W8((u32)(r_edi+0x4u), (u8)r_eax);
    /* 008bc4d2: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8bc4d7u); f_008cb1e8();
    /* 008bc4d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc4da: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc4dd: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008bc4e0: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc4e2: mov al, byte ptr [eax + ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bc4e5: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bc4e8: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc4eb: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bc4ef: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 008bc4f2: jl 0x8bc361 */ if ((fS!=fO)) goto L_008bc361;
L_008bc4f8:; BB(0x008bc4f8);
    /* 008bc4f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bc4f9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc4fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bc4fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008bc4fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bc4ff: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bc500: ret  */ FN_RET(0x008bc120); r_esp += 4; return;
}

void f_008bc501(void) /* sub_8BC501 */
{
    FN_ENTER(0x008bc501);
    /* 008bc501: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bc502: mov ebp, esp */ r_ebp = r_esp;
    /* 008bc504: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008bc507: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008bc509: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008bc50b: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc50e: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x8bc511u); call_ind(t); }
    /* 008bc511: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bc514: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bc516: je 0x8bc533 */ if (fZ) goto L_008bc533;
L_008bc518:; BB(0x008bc518);
    /* 008bc518: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 008bc51b: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bc51e: mov byte ptr [eax + 0x10], cl */ W8((u32)(r_eax+0x10u), (u8)r_ecx);
    /* 008bc521: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 008bc524: mov byte ptr [eax + 0x11], cl */ W8((u32)(r_eax+0x11u), (u8)r_ecx);
    /* 008bc527: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008bc52a: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008bc52d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008bc530: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
L_008bc533:; BB(0x008bc533);
    /* 008bc533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008bc534: ret  */ FN_RET(0x008bc501); r_esp += 4; return;
}

void f_008bc535(void) /* sub_8BC535 */
{
    FN_ENTER(0x008bc535);
    /* 008bc535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bc536: mov ebp, esp */ r_ebp = r_esp;
    /* 008bc538: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bc53b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bc53c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc53d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008bc540: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008bc542: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008bc545: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008bc548: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc549: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008bc54c: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 008bc54f: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 008bc552: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008bc555: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 008bc558: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008bc55b: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 008bc55e: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008bc561: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008bc564: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc566: jae 0x8bc570 */ if (!fC) goto L_008bc570;
L_008bc568:; BB(0x008bc568);
    /* 008bc568: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc56a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc56b: jmp 0x8bc99e */ goto L_008bc99e;
L_008bc570:; BB(0x008bc570);
    /* 008bc570: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bc573: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc575: jmp 0x8bc99e */ goto L_008bc99e;
L_008bc57a:; BB(0x008bc57a);
    /* 008bc57a: jmp dword ptr [ecx*4 + 0x8bca71] */ { u32 t = R32((u32)(r_ecx*4+0x8bca71u)); switch (t) { case 0x8bc581u: goto L_008bc581; case 0x8bc657u: goto L_008bc657; case 0x8bc707u: goto L_008bc707; case 0x8bc762u: goto L_008bc762; case 0x8bc7ebu: goto L_008bc7eb; case 0x8bc811u: goto L_008bc811; case 0x8bc902u: goto L_008bc902; case 0x8bca18u: goto L_008bca18; case 0x8bca6au: goto L_008bca6a; case 0x8bc9ebu: goto L_008bc9eb; default: UNSUP(0x008bc57a, "jump table entry is not a known target"); } }
L_008bc581:; BB(0x008bc581);
    /* 008bc581: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc586: jb 0x8bc61c */ if (fC) goto L_008bc61c;
L_008bc58c:; BB(0x008bc58c);
    /* 008bc58c: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc590: jb 0x8bc61c */ if (fC) goto L_008bc61c;
L_008bc596:; BB(0x008bc596);
    /* 008bc596: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bc599: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 008bc59c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bc59f: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 008bc5a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bc5a5: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008bc5a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bc5ab: mov ecx, eax */ r_ecx = r_eax;
    /* 008bc5ad: sub ecx, dword ptr [esi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc5af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc5b0: add dword ptr [esi + 8], ecx */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc5b3: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008bc5b5: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 008bc5b8: movzx eax, byte ptr [ebx + 0x11] */ r_eax = (u32)R8((u32)(r_ebx+0x11u));
    /* 008bc5bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc5bd: push dword ptr [ebx + 0x18] */ { u32 v = R32((u32)(r_ebx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc5c0: push dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc5c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bc5c4: movzx eax, byte ptr [ebx + 0x10] */ r_eax = (u32)R8((u32)(r_ebx+0x10u));
    /* 008bc5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bc5c9: call 0x8bed3d */ r_esp -= 4; W32(r_esp, 0x8bc5ceu); f_008bed3d();
    /* 008bc5ce: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 008bc5d1: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008bc5d4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008bc5d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008bc5d9: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008bc5dc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008bc5df: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 008bc5e2: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008bc5e5: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 008bc5e8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008bc5eb: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008bc5ee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bc5f1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc5f3: jae 0x8bc5fa */ if (!fC) goto L_008bc5fa;
L_008bc5f5:; BB(0x008bc5f5);
    /* 008bc5f5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc5f7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc5f8: jmp 0x8bc5ff */ goto L_008bc5ff;
L_008bc5fa:; BB(0x008bc5fa);
    /* 008bc5fa: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bc5fd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008bc5ff:; BB(0x008bc5ff);
    /* 008bc5ff: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc603: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008bc606: je 0x8bc61c */ if (fZ) goto L_008bc61c;
L_008bc608:; BB(0x008bc608);
    /* 008bc608: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bc60a: cmp dword ptr [ebp + 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc60e: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008bc611: lea eax, [eax + eax + 7] */ r_eax = (u32)(r_eax+r_eax+0x7u);
    /* 008bc615: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008bc617: jmp 0x8bc7bd */ goto L_008bc7bd;
L_008bc61c:; BB(0x008bc61c);
    /* 008bc61c: movzx eax, byte ptr [ebx + 0x10] */ r_eax = (u32)R8((u32)(r_ebx+0x10u));
    /* 008bc620: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008bc623: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008bc626: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 008bc629: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 008bc62f: jmp 0x8bc657 */ goto L_008bc657;
L_008bc631:; BB(0x008bc631);
    /* 008bc631: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc635: je 0x8bc9fe */ if (fZ) goto L_008bc9fe;
L_008bc63b:; BB(0x008bc63b);
    /* 008bc63b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bc63e: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008bc641: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008bc644: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008bc648: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bc64b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bc64d: or dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc650: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc653: add dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008bc657:; BB(0x008bc657);
    /* 008bc657: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008bc65a: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc65d: jb 0x8bc631 */ if (fC) goto L_008bc631;
L_008bc65f:; BB(0x008bc65f);
    /* 008bc65f: mov eax, dword ptr [eax*4 + 0xa37ae0] */ r_eax = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008bc666: and eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008bc669: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008bc66c: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 008bc66f: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bc673: shr dword ptr [ebp + 0xc], cl */ { u32 ad = (u32)(r_ebp+0xcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008bc676: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008bc679: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 008bc67d: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc680: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008bc683: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008bc686: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc688: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008bc68b: jne 0x8bc69b */ if (!fZ) goto L_008bc69b;
L_008bc68d:; BB(0x008bc68d);
    /* 008bc68d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008bc690: mov dword ptr [ebx], 6 */ W32((u32)(r_ebx), 0x6u);
    /* 008bc696: jmp 0x8bc7ba */ goto L_008bc7ba;
L_008bc69b:; BB(0x008bc69b);
    /* 008bc69b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008bc69e: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bc6a1: je 0x8bc6ba */ if (fZ) goto L_008bc6ba;
L_008bc6a3:; BB(0x008bc6a3);
    /* 008bc6a3: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc6a6: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 008bc6a9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008bc6ac: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008bc6af: mov dword ptr [ebx], 2 */ W32((u32)(r_ebx), 0x2u);
    /* 008bc6b5: jmp 0x8bc7bd */ goto L_008bc7bd;
L_008bc6ba:; BB(0x008bc6ba);
    /* 008bc6ba: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bc6bd: jne 0x8bc6cd */ if (!fZ) goto L_008bc6cd;
L_008bc6bf:; BB(0x008bc6bf);
    /* 008bc6bf: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 008bc6c2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008bc6c5: lea eax, [eax + ecx*8] */ r_eax = (u32)(r_eax+r_ecx*8);
    /* 008bc6c8: jmp 0x8bc7ba */ goto L_008bc7ba;
L_008bc6cd:; BB(0x008bc6cd);
    /* 008bc6cd: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bc6d0: je 0x8bc9de */ if (fZ) goto L_008bc9de;
L_008bc6d6:; BB(0x008bc6d6);
    /* 008bc6d6: mov dword ptr [ebx], 7 */ W32((u32)(r_ebx), 0x7u);
    /* 008bc6dc: jmp 0x8bc7bd */ goto L_008bc7bd;
L_008bc6e1:; BB(0x008bc6e1);
    /* 008bc6e1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc6e5: je 0x8bc9fe */ if (fZ) goto L_008bc9fe;
L_008bc6eb:; BB(0x008bc6eb);
    /* 008bc6eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bc6ee: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008bc6f1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008bc6f4: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008bc6f8: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bc6fb: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bc6fd: or dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc700: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc703: add dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008bc707:; BB(0x008bc707);
    /* 008bc707: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008bc70a: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc70d: jb 0x8bc6e1 */ if (fC) goto L_008bc6e1;
L_008bc70f:; BB(0x008bc70f);
    /* 008bc70f: mov eax, dword ptr [eax*4 + 0xa37ae0] */ r_eax = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008bc716: and eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc719: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008bc71c: add dword ptr [ebx + 4], eax */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bc71f: shr dword ptr [ebp + 0xc], cl */ { u32 ad = (u32)(r_ebp+0xcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008bc722: mov eax, ecx */ r_eax = r_ecx;
    /* 008bc724: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc727: movzx eax, byte ptr [ebx + 0x11] */ r_eax = (u32)R8((u32)(r_ebx+0x11u));
    /* 008bc72b: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008bc72e: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 008bc731: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 008bc734: mov dword ptr [ebx], 3 */ W32((u32)(r_ebx), 0x3u);
    /* 008bc73a: jmp 0x8bc762 */ goto L_008bc762;
L_008bc73c:; BB(0x008bc73c);
    /* 008bc73c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc740: je 0x8bc9fe */ if (fZ) goto L_008bc9fe;
L_008bc746:; BB(0x008bc746);
    /* 008bc746: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bc749: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008bc74c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008bc74f: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008bc753: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bc756: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bc758: or dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc75b: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc75e: add dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008bc762:; BB(0x008bc762);
    /* 008bc762: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008bc765: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc768: jb 0x8bc73c */ if (fC) goto L_008bc73c;
L_008bc76a:; BB(0x008bc76a);
    /* 008bc76a: mov eax, dword ptr [eax*4 + 0xa37ae0] */ r_eax = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008bc771: and eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008bc774: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008bc777: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 008bc77a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bc77e: shr dword ptr [ebp + 0xc], cl */ { u32 ad = (u32)(r_ebp+0xcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008bc781: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008bc784: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 008bc788: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc78b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008bc78e: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008bc791: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bc793: je 0x8bc7a9 */ if (fZ) goto L_008bc7a9;
L_008bc795:; BB(0x008bc795);
    /* 008bc795: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc798: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 008bc79b: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008bc79e: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008bc7a1: mov dword ptr [ebx], 4 */ W32((u32)(r_ebx), 0x4u);
    /* 008bc7a7: jmp 0x8bc7bd */ goto L_008bc7bd;
L_008bc7a9:; BB(0x008bc7a9);
    /* 008bc7a9: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bc7ab: jne 0x8bc9ef */ if (!fZ) goto L_008bc9ef;
L_008bc7b1:; BB(0x008bc7b1);
    /* 008bc7b1: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008bc7b4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008bc7b7: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
L_008bc7ba:; BB(0x008bc7ba);
    /* 008bc7ba: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
L_008bc7bd:; BB(0x008bc7bd);
    /* 008bc7bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008bc7c0: jmp 0x8bc9a1 */ goto L_008bc9a1;
L_008bc7c5:; BB(0x008bc7c5);
    /* 008bc7c5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc7c9: je 0x8bc9fe */ if (fZ) goto L_008bc9fe;
L_008bc7cf:; BB(0x008bc7cf);
    /* 008bc7cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bc7d2: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008bc7d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008bc7d8: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
    /* 008bc7dc: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bc7df: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bc7e1: or dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc7e4: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc7e7: add dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008bc7eb:; BB(0x008bc7eb);
    /* 008bc7eb: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008bc7ee: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc7f1: jb 0x8bc7c5 */ if (fC) goto L_008bc7c5;
L_008bc7f3:; BB(0x008bc7f3);
    /* 008bc7f3: mov eax, dword ptr [eax*4 + 0xa37ae0] */ r_eax = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008bc7fa: and eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bc7fd: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008bc800: add dword ptr [ebx + 0xc], eax */ { u32 ad = (u32)(r_ebx+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bc803: shr dword ptr [ebp + 0xc], cl */ { u32 ad = (u32)(r_ebp+0xcu); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008bc806: mov eax, ecx */ r_eax = r_ecx;
    /* 008bc808: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc80b: mov dword ptr [ebx], 5 */ W32((u32)(r_ebx), 0x5u);
L_008bc811:; BB(0x008bc811);
    /* 008bc811: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 008bc814: mov ecx, edx */ r_ecx = r_edx;
    /* 008bc816: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc818: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008bc81b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc81d: jae 0x8bc82f */ if (!fC) goto L_008bc82f;
L_008bc81f:; BB(0x008bc81f);
    /* 008bc81f: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bc822: sub eax, dword ptr [edi + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc825: sub eax, dword ptr [ebx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc828: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc82a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008bc82d: jmp 0x8bc836 */ goto L_008bc836;
L_008bc82f:; BB(0x008bc82f);
    /* 008bc82f: mov ecx, edx */ r_ecx = r_edx;
    /* 008bc831: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc833: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_008bc836:; BB(0x008bc836);
    /* 008bc836: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_008bc839:; BB(0x008bc839);
    /* 008bc839: cmp dword ptr [ebx + 4], 0 */ {  u32 a = R32((u32)(r_ebx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc83d: je 0x8bc8fa */ if (fZ) goto L_008bc8fa;
L_008bc843:; BB(0x008bc843);
    /* 008bc843: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc845: jne 0x8bc8d1 */ if (!fZ) goto L_008bc8d1;
L_008bc84b:; BB(0x008bc84b);
    /* 008bc84b: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bc84e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc850: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008bc853: jne 0x8bc873 */ if (!fZ) goto L_008bc873;
L_008bc855:; BB(0x008bc855);
    /* 008bc855: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008bc858: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 008bc85b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc85d: je 0x8bc873 */ if (fZ) goto L_008bc873;
L_008bc85f:; BB(0x008bc85f);
    /* 008bc85f: mov edx, ecx */ r_edx = r_ecx;
    /* 008bc861: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc863: jae 0x8bc86a */ if (!fC) goto L_008bc86a;
L_008bc865:; BB(0x008bc865);
    /* 008bc865: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc867: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc868: jmp 0x8bc86f */ goto L_008bc86f;
L_008bc86a:; BB(0x008bc86a);
    /* 008bc86a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc86d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008bc86f:; BB(0x008bc86f);
    /* 008bc86f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc871: jne 0x8bc8d1 */ if (!fZ) goto L_008bc8d1;
L_008bc873:; BB(0x008bc873);
    /* 008bc873: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc876: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 008bc879: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc87a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc87b: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8bc880u); f_008bcfe0();
    /* 008bc880: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 008bc883: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008bc886: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008bc889: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bc88c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc88e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008bc891: jae 0x8bc898 */ if (!fC) goto L_008bc898;
L_008bc893:; BB(0x008bc893);
    /* 008bc893: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc895: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc896: jmp 0x8bc89d */ goto L_008bc89d;
L_008bc898:; BB(0x008bc898);
    /* 008bc898: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bc89b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008bc89d:; BB(0x008bc89d);
    /* 008bc89d: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 008bc8a0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc8a2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008bc8a5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008bc8a8: jne 0x8bc8c9 */ if (!fZ) goto L_008bc8c9;
L_008bc8aa:; BB(0x008bc8aa);
    /* 008bc8aa: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 008bc8ad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008bc8b0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc8b2: je 0x8bc8c6 */ if (fZ) goto L_008bc8c6;
L_008bc8b4:; BB(0x008bc8b4);
    /* 008bc8b4: mov edx, ecx */ r_edx = r_ecx;
    /* 008bc8b6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc8b8: jae 0x8bc8bf */ if (!fC) goto L_008bc8bf;
L_008bc8ba:; BB(0x008bc8ba);
    /* 008bc8ba: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc8bc: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc8bd: jmp 0x8bc8c9 */ goto L_008bc8c9;
L_008bc8bf:; BB(0x008bc8bf);
    /* 008bc8bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc8c2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc8c4: jmp 0x8bc8c9 */ goto L_008bc8c9;
L_008bc8c6:; BB(0x008bc8c6);
    /* 008bc8c6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_008bc8c9:; BB(0x008bc8c9);
    /* 008bc8c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc8cb: je 0x8bca13 */ if (fZ) goto L_008bca13;
L_008bc8d1:; BB(0x008bc8d1);
    /* 008bc8d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008bc8d4: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc8d8: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008bc8da: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 008bc8dc: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bc8dd: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc8e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008bc8e3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc8e4: cmp ecx, dword ptr [edi + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc8e7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008bc8ea: jne 0x8bc8f2 */ if (!fZ) goto L_008bc8f2;
L_008bc8ec:; BB(0x008bc8ec);
    /* 008bc8ec: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 008bc8ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_008bc8f2:; BB(0x008bc8f2);
    /* 008bc8f2: dec dword ptr [ebx + 4] */ { u32 ad = (u32)(r_ebx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc8f5: jmp 0x8bc839 */ goto L_008bc839;
L_008bc8fa:; BB(0x008bc8fa);
    /* 008bc8fa: and dword ptr [ebx], 0 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc8fd: jmp 0x8bc9a1 */ goto L_008bc9a1;
L_008bc902:; BB(0x008bc902);
    /* 008bc902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc904: jne 0x8bc990 */ if (!fZ) goto L_008bc990;
L_008bc90a:; BB(0x008bc90a);
    /* 008bc90a: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bc90d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc90f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008bc912: jne 0x8bc932 */ if (!fZ) goto L_008bc932;
L_008bc914:; BB(0x008bc914);
    /* 008bc914: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008bc917: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 008bc91a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc91c: je 0x8bc932 */ if (fZ) goto L_008bc932;
L_008bc91e:; BB(0x008bc91e);
    /* 008bc91e: mov edx, ecx */ r_edx = r_ecx;
    /* 008bc920: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc922: jae 0x8bc929 */ if (!fC) goto L_008bc929;
L_008bc924:; BB(0x008bc924);
    /* 008bc924: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc926: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc927: jmp 0x8bc92e */ goto L_008bc92e;
L_008bc929:; BB(0x008bc929);
    /* 008bc929: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc92c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008bc92e:; BB(0x008bc92e);
    /* 008bc92e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc930: jne 0x8bc990 */ if (!fZ) goto L_008bc990;
L_008bc932:; BB(0x008bc932);
    /* 008bc932: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bc935: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 008bc938: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc939: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc93a: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8bc93fu); f_008bcfe0();
    /* 008bc93f: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 008bc942: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008bc945: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008bc948: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bc94b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc94d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008bc950: jae 0x8bc957 */ if (!fC) goto L_008bc957;
L_008bc952:; BB(0x008bc952);
    /* 008bc952: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc954: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc955: jmp 0x8bc95c */ goto L_008bc95c;
L_008bc957:; BB(0x008bc957);
    /* 008bc957: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bc95a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008bc95c:; BB(0x008bc95c);
    /* 008bc95c: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 008bc95f: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc961: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008bc964: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008bc967: jne 0x8bc988 */ if (!fZ) goto L_008bc988;
L_008bc969:; BB(0x008bc969);
    /* 008bc969: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 008bc96c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008bc96f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc971: je 0x8bc985 */ if (fZ) goto L_008bc985;
L_008bc973:; BB(0x008bc973);
    /* 008bc973: mov edx, ecx */ r_edx = r_ecx;
    /* 008bc975: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bc977: jae 0x8bc97e */ if (!fC) goto L_008bc97e;
L_008bc979:; BB(0x008bc979);
    /* 008bc979: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc97b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc97c: jmp 0x8bc988 */ goto L_008bc988;
L_008bc97e:; BB(0x008bc97e);
    /* 008bc97e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bc981: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc983: jmp 0x8bc988 */ goto L_008bc988;
L_008bc985:; BB(0x008bc985);
    /* 008bc985: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_008bc988:; BB(0x008bc988);
    /* 008bc988: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bc98a: je 0x8bca13 */ if (fZ) goto L_008bca13;
L_008bc990:; BB(0x008bc990);
    /* 008bc990: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc994: mov cl, byte ptr [ebx + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+0x8u))) & 0xffu);
    /* 008bc997: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 008bc999: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bc99a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bc99b: and dword ptr [ebx], 0 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008bc99e:; BB(0x008bc99e);
    /* 008bc99e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008bc9a1:; BB(0x008bc9a1);
    /* 008bc9a1: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008bc9a3: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bc9a6: jbe 0x8bc57a */ if ((fC||fZ)) goto L_008bc57a;
L_008bc9ac:; BB(0x008bc9ac);
    /* 008bc9ac: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
L_008bc9ae:; BB(0x008bc9ae);
    /* 008bc9ae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bc9b1: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 008bc9b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bc9b7: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 008bc9ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bc9bd: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008bc9c0:; BB(0x008bc9c0);
    /* 008bc9c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bc9c3: mov ecx, eax */ r_ecx = r_eax;
    /* 008bc9c5: sub ecx, dword ptr [esi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc9c7: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008bc9c9: add dword ptr [esi + 8], ecx */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008bc9cc:; BB(0x008bc9cc);
    /* 008bc9cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc9cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bc9ce: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 008bc9d1: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8bc9d6u); f_008bcfe0();
    /* 008bc9d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bc9d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bc9da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bc9db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bc9dc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bc9dd: ret  */ FN_RET(0x008bc535); r_esp += 4; return;
L_008bc9de:; BB(0x008bc9de);
    /* 008bc9de: mov dword ptr [ebx], 9 */ W32((u32)(r_ebx), 0x9u);
    /* 008bc9e4: mov dword ptr [esi + 0x18], 0x99ede8 */ W32((u32)(r_esi+0x18u), 0x99ede8u);
L_008bc9eb:; BB(0x008bc9eb);
    /* 008bc9eb: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008bc9ed: jmp 0x8bc9ae */ goto L_008bc9ae;
L_008bc9ef:; BB(0x008bc9ef);
    /* 008bc9ef: mov dword ptr [ebx], 9 */ W32((u32)(r_ebx), 0x9u);
    /* 008bc9f5: mov dword ptr [esi + 0x18], 0x99edd0 */ W32((u32)(r_esi+0x18u), 0x99edd0u);
    /* 008bc9fc: jmp 0x8bc9eb */ goto L_008bc9eb;
L_008bc9fe:; BB(0x008bc9fe);
    /* 008bc9fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bca01: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bca04: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 008bca07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bca0a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 008bca0d: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bca11: jmp 0x8bc9c0 */ goto L_008bc9c0;
L_008bca13:; BB(0x008bca13);
    /* 008bca13: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bca16: jmp 0x8bc9ae */ goto L_008bc9ae;
L_008bca18:; BB(0x008bca18);
    /* 008bca18: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bca1c: jbe 0x8bca28 */ if ((fC||fZ)) goto L_008bca28;
L_008bca1e:; BB(0x008bca1e);
    /* 008bca1e: sub dword ptr [ebp + 8], 8 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bca22: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bca25: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008bca28:; BB(0x008bca28);
    /* 008bca28: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bca2b: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 008bca2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bca2f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bca30: call 0x8bcfe0 */ r_esp -= 4; W32(r_esp, 0x8bca35u); f_008bcfe0();
    /* 008bca35: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 008bca38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bca3b: cmp dword ptr [edi + 0x30], edx */ {  u32 a = R32((u32)(r_edi+0x30u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bca3e: je 0x8bca64 */ if (fZ) goto L_008bca64;
L_008bca40:; BB(0x008bca40);
    /* 008bca40: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008bca43: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 008bca46: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008bca49: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 008bca4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bca4f: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 008bca52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bca55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008bca57: sub ebx, dword ptr [esi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008bca59: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 008bca5b: add dword ptr [esi + 8], ebx */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bca5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bca5f: jmp 0x8bc9cc */ goto L_008bc9cc;
L_008bca64:; BB(0x008bca64);
    /* 008bca64: mov dword ptr [ebx], 8 */ W32((u32)(r_ebx), 0x8u);
L_008bca6a:; BB(0x008bca6a);
    /* 008bca6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008bca6c: jmp 0x8bc9ae */ goto L_008bc9ae;
}

void f_008bca99(void) /* sub_8BCA99 */
{
    FN_ENTER(0x008bca99);
    /* 008bca99: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bca9d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008bcaa1: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcaa4: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x8bcaa7u); call_ind(t); }
    /* 008bcaa7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008bcaa8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008bcaa9: ret  */ FN_RET(0x008bca99); r_esp += 4; return;
}

void f_008bcaaa(void) /* sub_8BCAAA */
{
    FN_ENTER(0x008bcaaa);
    /* 008bcaaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bcaab: lea ebp, [esp - 0x54] */ r_ebp = (u32)(r_esp+0xffffffacu);
    /* 008bcaaf: sub esp, 0xf8 */ {  u32 a = r_esp; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bcab5: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 008bcab8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bcab9: mov ebx, dword ptr [ebp + 0x60] */ r_ebx = R32((u32)(r_ebp+0x60u));
    /* 008bcabc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bcabd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bcabe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008bcac0: mov esi, eax */ r_esi = r_eax;
    /* 008bcac2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008bcac5: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 008bcac8: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 008bcacb: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008bcace: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 008bcad1: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008bcad4: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008bcad7: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 008bcada: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008bcadd: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008bcae0: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
    /* 008bcae3: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 008bcae6: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008bcae9: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 008bcaec: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 008bcaef: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 008bcaf2: mov edx, ebx */ r_edx = r_ebx;
L_008bcaf4:; BB(0x008bcaf4);
    /* 008bcaf4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008bcaf6: lea eax, [ebp + eax*4 - 0x28] */ r_eax = (u32)(r_ebp+r_eax*4+0xffffffd8u);
    /* 008bcafa: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bcafc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcaff: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008bcb00: jne 0x8bcaf4 */ if (!fZ) goto L_008bcaf4;
L_008bcb02:; BB(0x008bcb02);
    /* 008bcb02: cmp dword ptr [ebp - 0x28], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcb05: jne 0x8bcb18 */ if (!fZ) goto L_008bcb18;
L_008bcb07:; BB(0x008bcb07);
    /* 008bcb07: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 008bcb0a: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 008bcb0c: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
L_008bcb0e:; BB(0x008bcb0e);
    /* 008bcb0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008bcb10:; BB(0x008bcb10);
    /* 008bcb10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bcb11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bcb12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bcb13: add ebp, 0x54 */ {  u32 a = r_ebp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bcb16: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bcb17: ret  */ FN_RET(0x008bcaaa); r_esp += 4; return;
L_008bcb18:; BB(0x008bcb18);
    /* 008bcb18: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 008bcb1a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008bcb1c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bcb1d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008bcb1f: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 008bcb22: mov ecx, edx */ r_ecx = r_edx;
    /* 008bcb24: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008bcb25:; BB(0x008bcb25);
    /* 008bcb25: cmp dword ptr [ebp + ecx*4 - 0x28], edi */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcb29: jne 0x8bcb30 */ if (!fZ) goto L_008bcb30;
L_008bcb2b:; BB(0x008bcb2b);
    /* 008bcb2b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcb2c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bcb2e: jbe 0x8bcb25 */ if ((fC||fZ)) goto L_008bcb25;
L_008bcb30:; BB(0x008bcb30);
    /* 008bcb30: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcb32: mov dword ptr [ebp + 0x4c], ecx */ W32((u32)(r_ebp+0x4cu), r_ecx);
    /* 008bcb35: jae 0x8bcb3a */ if (!fC) goto L_008bcb3a;
L_008bcb37:; BB(0x008bcb37);
    /* 008bcb37: mov dword ptr [ebp + 0x50], ecx */ W32((u32)(r_ebp+0x50u), r_ecx);
L_008bcb3a:; BB(0x008bcb3a);
    /* 008bcb3a: cmp dword ptr [ebp + eax*4 - 0x28], edi */ {  u32 a = R32((u32)(r_ebp+r_eax*4+0xffffffd8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcb3e: jne 0x8bcb43 */ if (!fZ) goto L_008bcb43;
L_008bcb40:; BB(0x008bcb40);
    /* 008bcb40: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008bcb41: jne 0x8bcb3a */ if (!fZ) goto L_008bcb3a;
L_008bcb43:; BB(0x008bcb43);
    /* 008bcb43: cmp dword ptr [ebp + 0x50], eax */ {  u32 a = R32((u32)(r_ebp+0x50u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bcb46: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 008bcb49: jbe 0x8bcb4e */ if ((fC||fZ)) goto L_008bcb4e;
L_008bcb4b:; BB(0x008bcb4b);
    /* 008bcb4b: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
L_008bcb4e:; BB(0x008bcb4e);
    /* 008bcb4e: mov ebx, dword ptr [ebp + 0x50] */ r_ebx = R32((u32)(r_ebp+0x50u));
    /* 008bcb51: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 008bcb53: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bcb55: jmp 0x8bcb64 */ goto L_008bcb64;
L_008bcb57:; BB(0x008bcb57);
    /* 008bcb57: sub edx, dword ptr [ebp + ecx*4 - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 008bcb5b: js 0x8bcc2f */ if (fS) goto L_008bcc2f;
L_008bcb61:; BB(0x008bcb61);
    /* 008bcb61: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcb62: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
L_008bcb64:; BB(0x008bcb64);
    /* 008bcb64: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcb66: jb 0x8bcb57 */ if (fC) goto L_008bcb57;
L_008bcb68:; BB(0x008bcb68);
    /* 008bcb68: mov esi, eax */ r_esi = r_eax;
    /* 008bcb6a: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008bcb6d: lea ecx, [ebp + esi - 0x28] */ r_ecx = (u32)(r_ebp+r_esi+0xffffffd8u);
    /* 008bcb71: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008bcb73: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 008bcb75: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 008bcb78: js 0x8bcc2f */ if (fS) goto L_008bcc2f;
L_008bcb7e:; BB(0x008bcb7e);
    /* 008bcb7e: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bcb80: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 008bcb82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcb84: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008bcb85: mov dword ptr [ebp - 0x64], edi */ W32((u32)(r_ebp+0xffffff9cu), r_edi);
    /* 008bcb88: je 0x8bcb9a */ if (fZ) goto L_008bcb9a;
L_008bcb8a:; BB(0x008bcb8a);
    /* 008bcb8a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_008bcb8c:; BB(0x008bcb8c);
    /* 008bcb8c: add ecx, dword ptr [ebp + ebx - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_ebx+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcb90: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bcb93: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008bcb94: mov dword ptr [ebp + ebx - 0x64], ecx */ W32((u32)(r_ebp+r_ebx+0xffffff9cu), r_ecx);
    /* 008bcb98: jne 0x8bcb8c */ if (!fZ) goto L_008bcb8c;
L_008bcb9a:; BB(0x008bcb9a);
    /* 008bcb9a: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 008bcb9d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_008bcb9f:; BB(0x008bcb9f);
    /* 008bcb9f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008bcba1: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcba4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcba6: mov dword ptr [ebp + 0x5c], ecx */ W32((u32)(r_ebp+0x5cu), r_ecx);
    /* 008bcba9: je 0x8bcbc0 */ if (fZ) goto L_008bcbc0;
L_008bcbab:; BB(0x008bcbab);
    /* 008bcbab: mov edx, dword ptr [ebp + 0x7c] */ r_edx = R32((u32)(r_ebp+0x7cu));
    /* 008bcbae: lea eax, [ebp + eax*4 - 0x68] */ r_eax = (u32)(r_ebp+r_eax*4+0xffffff98u);
    /* 008bcbb2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008bcbb4: mov dword ptr [edx + ecx*4], ebx */ W32((u32)(r_edx+r_ecx*4), r_ebx);
    /* 008bcbb7: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 008bcbba: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcbbb: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008bcbbd: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
L_008bcbc0:; BB(0x008bcbc0);
    /* 008bcbc0: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bcbc1: cmp ebx, dword ptr [ebp + 0x60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcbc4: jb 0x8bcb9f */ if (fC) goto L_008bcb9f;
L_008bcbc6:; BB(0x008bcbc6);
    /* 008bcbc6: mov eax, dword ptr [ebp + esi - 0x68] */ r_eax = R32((u32)(r_ebp+r_esi+0xffffff98u));
    /* 008bcbca: mov ebx, dword ptr [ebp + 0x50] */ r_ebx = R32((u32)(r_ebp+0x50u));
    /* 008bcbcd: or dword ptr [ebp + 0x48], 0xffffffff */ { u32 ad = (u32)(r_ebp+0x48u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008bcbd1: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 008bcbd4: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 008bcbd7: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 008bcbda: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 008bcbdd: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008bcbdf: cmp eax, dword ptr [ebp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bcbe2: mov dword ptr [ebp + 0x34], edi */ W32((u32)(r_ebp+0x34u), r_edi);
    /* 008bcbe5: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 008bcbe8: mov dword ptr [ebp - 0xa4], edi */ W32((u32)(r_ebp+0xffffff5cu), r_edi);
    /* 008bcbee: mov dword ptr [ebp + 0x2c], edi */ W32((u32)(r_ebp+0x2cu), r_edi);
    /* 008bcbf1: mov dword ptr [ebp + 0x44], edi */ W32((u32)(r_ebp+0x44u), r_edi);
    /* 008bcbf4: jg 0x8bce11 */ if ((!fZ&&fS==fO)) goto L_008bce11;
L_008bcbfa:; BB(0x008bcbfa);
    /* 008bcbfa: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 008bcbfd: lea eax, [ebp + eax*4 - 0x28] */ r_eax = (u32)(r_ebp+r_eax*4+0xffffffd8u);
    /* 008bcc01: mov dword ptr [ebp + 0x24], ecx */ W32((u32)(r_ebp+0x24u), r_ecx);
    /* 008bcc04: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_008bcc07:; BB(0x008bcc07);
    /* 008bcc07: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 008bcc0a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008bcc0c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcc0e: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 008bcc11: je 0x8bcdfb */ if (fZ) goto L_008bcdfb;
L_008bcc17:; BB(0x008bcc17);
    /* 008bcc17: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 008bcc1a: dec dword ptr [ebp + 0x38] */ { u32 ad = (u32)(r_ebp+0x38u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bcc1d: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bcc1f: cmp dword ptr [ebp + 0x4c], eax */ {  u32 a = R32((u32)(r_ebp+0x4cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bcc22: jle 0x8bcd1d */ if ((fZ||fS!=fO)) goto L_008bcd1d;
L_008bcc28:; BB(0x008bcc28);
    /* 008bcc28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008bcc2a: sub ecx, dword ptr [ebp + 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcc2d: jmp 0x8bcc39 */ goto L_008bcc39;
L_008bcc2f:; BB(0x008bcc2f);
    /* 008bcc2f: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008bcc31: jmp 0x8bce25 */ goto L_008bce25;
L_008bcc36:; BB(0x008bcc36);
    /* 008bcc36: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
L_008bcc39:; BB(0x008bcc39);
    /* 008bcc39: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 008bcc3c: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 008bcc3f: inc dword ptr [ebp + 0x48] */ { u32 ad = (u32)(r_ebp+0x48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bcc42: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bcc44: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcc46: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bcc48: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008bcc4a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bcc4c: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 008bcc4f: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 008bcc52: jbe 0x8bcc56 */ if ((fC||fZ)) goto L_008bcc56;
L_008bcc54:; BB(0x008bcc54);
    /* 008bcc54: mov esi, edx */ r_esi = r_edx;
L_008bcc56:; BB(0x008bcc56);
    /* 008bcc56: mov ecx, dword ptr [ebp + 0x4c] */ r_ecx = R32((u32)(r_ebp+0x4cu));
    /* 008bcc59: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 008bcc5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bcc5e: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 008bcc60: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008bcc61: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bcc63: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bcc64: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bcc66: jbe 0x8bcc96 */ if ((fC||fZ)) goto L_008bcc96;
L_008bcc68:; BB(0x008bcc68);
    /* 008bcc68: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008bcc6b: sub edx, dword ptr [ebp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bcc6e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bcc70: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcc72: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 008bcc75: jae 0x8bcc96 */ if (!fC) goto L_008bcc96;
L_008bcc77:; BB(0x008bcc77);
    /* 008bcc77: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcc78: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcc7a: jae 0x8bcc96 */ if (!fC) goto L_008bcc96;
L_008bcc7c:; BB(0x008bcc7c);
    /* 008bcc7c: jmp 0x8bcc81 */ goto L_008bcc81;
L_008bcc7e:; BB(0x008bcc7e);
    /* 008bcc7e: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
L_008bcc81:; BB(0x008bcc81);
    /* 008bcc81: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bcc84: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 008bcc87: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 008bcc89: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bcc8b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bcc8d: jbe 0x8bcc96 */ if ((fC||fZ)) goto L_008bcc96;
L_008bcc8f:; BB(0x008bcc8f);
    /* 008bcc8f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bcc91: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcc92: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcc94: jb 0x8bcc7e */ if (fC) goto L_008bcc7e;
L_008bcc96:; BB(0x008bcc96);
    /* 008bcc96: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 008bcc99: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008bcc9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008bcc9d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008bcc9e: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bcca0: lea esi, [eax + edx] */ r_esi = (u32)(r_eax+r_edx);
    /* 008bcca3: cmp esi, 0x5a0 */ {  u32 a = r_esi; u32 b = 0x5a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bcca9: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 008bccac: ja 0x8bce2b */ if ((!fC&&!fZ)) goto L_008bce2b;
L_008bccb2:; BB(0x008bccb2);
    /* 008bccb2: mov edx, dword ptr [ebp + 0x74] */ r_edx = R32((u32)(r_ebp+0x74u));
    /* 008bccb5: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 008bccb8: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 008bccbb: lea edx, [ebp + edx*4 - 0xa4] */ r_edx = (u32)(r_ebp+r_edx*4+0xffffff5cu);
    /* 008bccc2: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 008bccc5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008bccc7: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 008bccca: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008bcccc: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008bcccf: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bccd1: je 0x8bcd06 */ if (fZ) goto L_008bcd06;
L_008bccd3:; BB(0x008bccd3);
    /* 008bccd3: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 008bccd6: mov dword ptr [ebp + eax*4 - 0x68], esi */ W32((u32)(r_ebp+r_eax*4+0xffffff98u), r_esi);
    /* 008bccda: mov al, byte ptr [ebp + 0x50] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x50u))) & 0xffu);
    /* 008bccdd: mov byte ptr [ebp + 0x3d], al */ W8((u32)(r_ebp+0x3du), (u8)r_eax);
    /* 008bcce0: mov byte ptr [ebp + 0x3c], cl */ W8((u32)(r_ebp+0x3cu), (u8)r_ecx);
    /* 008bcce3: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008bcce6: mov eax, esi */ r_eax = r_esi;
    /* 008bcce8: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 008bcceb: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008bcced: mov ecx, dword ptr [edx - 4] */ r_ecx = R32((u32)(r_edx+0xfffffffcu));
    /* 008bccf0: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 008bccf3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bccf5: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008bccf8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bccfa: mov dword ptr [ecx + eax*8], esi */ W32((u32)(r_ecx+r_eax*8), r_esi);
    /* 008bccfd: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 008bcd00: mov dword ptr [ecx + eax*8 + 4], edx */ W32((u32)(r_ecx+r_eax*8+0x4u), r_edx);
    /* 008bcd04: jmp 0x8bcd0e */ goto L_008bcd0e;
L_008bcd06:; BB(0x008bcd06);
    /* 008bcd06: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 008bcd09: mov ecx, dword ptr [ebp + 0x70] */ r_ecx = R32((u32)(r_ebp+0x70u));
    /* 008bcd0c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_008bcd0e:; BB(0x008bcd0e);
    /* 008bcd0e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008bcd11: cmp dword ptr [ebp + 0x4c], eax */ {  u32 a = R32((u32)(r_ebp+0x4cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bcd14: jg 0x8bcc36 */ if ((!fZ&&fS==fO)) goto L_008bcc36;
L_008bcd1a:; BB(0x008bcd1a);
    /* 008bcd1a: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
L_008bcd1d:; BB(0x008bcd1d);
    /* 008bcd1d: mov al, byte ptr [ebp + 0x4c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x4cu))) & 0xffu);
    /* 008bcd20: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 008bcd23: sub al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bcd25: mov byte ptr [ebp + 0x3d], al */ W8((u32)(r_ebp+0x3du), (u8)r_eax);
    /* 008bcd28: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 008bcd2b: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 008bcd2e: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 008bcd31: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcd33: jb 0x8bcd3b */ if (fC) goto L_008bcd3b;
L_008bcd35:; BB(0x008bcd35);
    /* 008bcd35: mov byte ptr [ebp + 0x3c], 0xc0 */ W8((u32)(r_ebp+0x3cu), 0xc0u);
    /* 008bcd39: jmp 0x8bcd73 */ goto L_008bcd73;
L_008bcd3b:; BB(0x008bcd3b);
    /* 008bcd3b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008bcd3d: cmp eax, dword ptr [ebp + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x64u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcd40: jae 0x8bcd54 */ if (!fC) goto L_008bcd54;
L_008bcd42:; BB(0x008bcd42);
    /* 008bcd42: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcd47: setb cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 008bcd4a: dec cl */ { u32 x = (u8)r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bcd4c: and ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcd4f: mov byte ptr [ebp + 0x3c], cl */ W8((u32)(r_ebp+0x3cu), (u8)r_ecx);
    /* 008bcd52: jmp 0x8bcd6c */ goto L_008bcd6c;
L_008bcd54:; BB(0x008bcd54);
    /* 008bcd54: sub eax, dword ptr [ebp + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bcd57: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 008bcd5a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bcd5d: mov cl, byte ptr [eax + ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 008bcd60: add cl, 0x50 */ {  u32 a = (u8)r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008bcd63: mov byte ptr [ebp + 0x3c], cl */ W8((u32)(r_ebp+0x3cu), (u8)r_ecx);
    /* 008bcd66: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 008bcd69: mov eax, dword ptr [eax + ecx] */ r_eax = R32((u32)(r_eax+r_ecx));
L_008bcd6c:; BB(0x008bcd6c);
    /* 008bcd6c: add dword ptr [ebp + 0x5c], 4 */ { u32 ad = (u32)(r_ebp+0x5cu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bcd70: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
L_008bcd73:; BB(0x008bcd73);
    /* 008bcd73: mov ecx, dword ptr [ebp + 0x4c] */ r_ecx = R32((u32)(r_ebp+0x4cu));
    /* 008bcd76: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 008bcd79: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008bcd7b: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 008bcd7d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008bcd7e: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008bcd80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008bcd82: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008bcd84: cmp eax, dword ptr [ebp + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x44u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcd87: jae 0x8bcdab */ if (!fC) goto L_008bcdab;
L_008bcd89:; BB(0x008bcd89);
    /* 008bcd89: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 008bcd8c: lea ecx, [ecx + eax*8] */ r_ecx = (u32)(r_ecx+r_eax*8);
L_008bcd8f:; BB(0x008bcd8f);
    /* 008bcd8f: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 008bcd92: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008bcd94: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 008bcd97: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 008bcd9a: mov edx, esi */ r_edx = r_esi;
    /* 008bcd9c: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bcd9f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bcda1: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bcda3: cmp eax, dword ptr [ebp + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x44u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bcda6: jb 0x8bcd8f */ if (fC) goto L_008bcd8f;
L_008bcda8:; BB(0x008bcda8);
    /* 008bcda8: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
L_008bcdab:; BB(0x008bcdab);
    /* 008bcdab: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008bcdae: mov esi, dword ptr [ebp + 0x34] */ r_esi = R32((u32)(r_ebp+0x34u));
    /* 008bcdb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008bcdb3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008bcdb4: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bcdb6: jmp 0x8bcdbc */ goto L_008bcdbc;
L_008bcdb8:; BB(0x008bcdb8);
    /* 008bcdb8: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008bcdba: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_008bcdbc:; BB(0x008bcdbc);
    /* 008bcdbc: test esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcdbe: jne 0x8bcdb8 */ if (!fZ) goto L_008bcdb8;
L_008bcdc0:; BB(0x008bcdc0);
    /* 008bcdc0: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008bcdc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008bcdc4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008bcdc5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008bcdc7: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bcdc9: mov dword ptr [ebp + 0x34], esi */ W32((u32)(r_ebp+0x34u), r_esi);
    /* 008bcdcc: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bcdcd: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bcdcf: mov ecx, eax */ r_ecx = r_eax;
    /* 008bcdd1: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008bcdd4: cmp ecx, dword ptr [ebp + eax*4 - 0x68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffff98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcdd8: je 0x8bcdf2 */ if (fZ) goto L_008bcdf2;
L_008bcdda:; BB(0x008bcdda);
    /* 008bcdda: sub ebx, dword ptr [ebp + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008bcddd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fC = 0; }
    /* 008bcddf: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008bcde0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008bcde2: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008bcde4: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bcde5: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008bcde6: and esi, dword ptr [ebp + 0x34] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008bcde9: cmp esi, dword ptr [ebp + eax*4 - 0x68] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffff98u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcded: jne 0x8bcdda */ if (!fZ) goto L_008bcdda;
L_008bcdef:; BB(0x008bcdef);
    /* 008bcdef: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
L_008bcdf2:; BB(0x008bcdf2);
    /* 008bcdf2: cmp dword ptr [ebp + 0x38], edi */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcdf5: jne 0x8bcc17 */ if (!fZ) goto L_008bcc17;
L_008bcdfb:; BB(0x008bcdfb);
    /* 008bcdfb: inc dword ptr [ebp + 0x4c] */ { u32 ad = (u32)(r_ebp+0x4cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bcdfe: add dword ptr [ebp + 0x30], 4 */ { u32 ad = (u32)(r_ebp+0x30u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bce02: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 008bce05: inc dword ptr [ebp + 0x24] */ { u32 ad = (u32)(r_ebp+0x24u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bce08: cmp eax, dword ptr [ebp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bce0b: jle 0x8bcc07 */ if ((fZ||fS!=fO)) goto L_008bcc07;
L_008bce11:; BB(0x008bce11);
    /* 008bce11: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bce13: je 0x8bcb0e */ if (fZ) goto L_008bcb0e;
L_008bce19:; BB(0x008bce19);
    /* 008bce19: cmp dword ptr [ebp + 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bce1d: je 0x8bcb0e */ if (fZ) goto L_008bcb0e;
L_008bce23:; BB(0x008bce23);
    /* 008bce23: push -5 */ { u32 v = 0xfffffffbu; r_esp -= 4; W32(r_esp, v); }
L_008bce25:; BB(0x008bce25);
    /* 008bce25: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008bce26: jmp 0x8bcb10 */ goto L_008bcb10;
L_008bce2b:; BB(0x008bce2b);
    /* 008bce2b: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008bce2d: jmp 0x8bce25 */ goto L_008bce25;
}

void f_008bce2f(void) /* sub_8BCE2F */
{
    FN_ENTER(0x008bce2f);
    /* 008bce2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bce30: mov ebp, esp */ r_ebp = r_esp;
    /* 008bce32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008bce33: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bce37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bce38: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 008bce3b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008bce3d: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008bce3f: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bce42: call dword ptr [esi + 0x20] */ { u32 t = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, 0x8bce45u); call_ind(t); }
    /* 008bce45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bce48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bce4a: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 008bce4d: jne 0x8bce54 */ if (!fZ) goto L_008bce54;
L_008bce4f:; BB(0x008bce4f);
    /* 008bce4f: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008bce51: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008bce52: jmp 0x8bceab */ goto L_008bceab;
L_008bce54:; BB(0x008bce54);
    /* 008bce54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bce55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bce56: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008bce59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bce5a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bce5d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bce60: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bce63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008bce65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008bce67: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008bce69: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008bce6b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bce6e: call 0x8bcaaa */ r_esp -= 4; W32(r_esp, 0x8bce73u); f_008bcaaa();
    /* 008bce73: mov ebx, eax */ r_ebx = r_eax;
    /* 008bce75: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bce78: cmp ebx, -3 */ {  u32 a = r_ebx; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bce7b: jne 0x8bce86 */ if (!fZ) goto L_008bce86;
L_008bce7d:; BB(0x008bce7d);
    /* 008bce7d: mov dword ptr [esi + 0x18], 0x99f01c */ W32((u32)(r_esi+0x18u), 0x99f01cu);
    /* 008bce84: jmp 0x8bce9d */ goto L_008bce9d;
L_008bce86:; BB(0x008bce86);
    /* 008bce86: cmp ebx, -5 */ {  u32 a = r_ebx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bce89: je 0x8bce93 */ if (fZ) goto L_008bce93;
L_008bce8b:; BB(0x008bce8b);
    /* 008bce8b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bce8e: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bce91: jne 0x8bce9d */ if (!fZ) goto L_008bce9d;
L_008bce93:; BB(0x008bce93);
    /* 008bce93: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008bce95: mov dword ptr [esi + 0x18], 0x99eff8 */ W32((u32)(r_esi+0x18u), 0x99eff8u);
    /* 008bce9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008bce9d:; BB(0x008bce9d);
    /* 008bce9d: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcea0: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcea3: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8bcea6u); call_ind(t); }
    /* 008bcea6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008bcea7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008bcea8: mov eax, ebx */ r_eax = r_ebx;
    /* 008bceaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008bceab:; BB(0x008bceab);
    /* 008bceab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bceac: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bcead: ret  */ FN_RET(0x008bce2f); r_esp += 4; return;
}

void f_008bceae(void) /* sub_8BCEAE */
{
    FN_ENTER(0x008bceae);
    /* 008bceae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bceaf: mov ebp, esp */ r_ebp = r_esp;
    /* 008bceb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008bceb2: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bceb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bceb7: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 008bceba: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008bcebc: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 008bcec1: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcec4: call dword ptr [esi + 0x20] */ { u32 t = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, 0x8bcec7u); call_ind(t); }
    /* 008bcec7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bceca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bcecc: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 008bcecf: jne 0x8bced9 */ if (!fZ) goto L_008bced9;
L_008bced1:; BB(0x008bced1);
    /* 008bced1: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008bced3: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008bced4: jmp 0x8bcfae */ goto L_008bcfae;
L_008bced9:; BB(0x008bced9);
    /* 008bced9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bceda: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008bcedd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bcede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bcedf: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008bcee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bcee3: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcee6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008bcee9: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008bceec: mov edi, 0x101 */ r_edi = 0x101u;
    /* 008bcef1: push 0x99ee88 */ { u32 v = 0x99ee88u; r_esp -= 4; W32(r_esp, v); }
    /* 008bcef6: push 0x99ee08 */ { u32 v = 0x99ee08u; r_esp -= 4; W32(r_esp, v); }
    /* 008bcefb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bcefc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bcefd: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcf00: call 0x8bcaaa */ r_esp -= 4; W32(r_esp, 0x8bcf05u); f_008bcaaa();
    /* 008bcf05: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bcf08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf0a: jne 0x8bcf80 */ if (!fZ) goto L_008bcf80;
L_008bcf0c:; BB(0x008bcf0c);
    /* 008bcf0c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008bcf0f: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf12: je 0x8bcf93 */ if (fZ) goto L_008bcf93;
L_008bcf14:; BB(0x008bcf14);
    /* 008bcf14: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcf17: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008bcf1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bcf1b: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcf1e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008bcf21: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcf24: lea eax, [eax + ebx*4] */ r_eax = (u32)(r_eax+r_ebx*4);
    /* 008bcf27: push 0x99ef80 */ { u32 v = 0x99ef80u; r_esp -= 4; W32(r_esp, v); }
    /* 008bcf2c: push 0x99ef08 */ { u32 v = 0x99ef08u; r_esp -= 4; W32(r_esp, v); }
    /* 008bcf31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008bcf33: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcf36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008bcf37: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008bcf3a: call 0x8bcaaa */ r_esp -= 4; W32(r_esp, 0x8bcf3fu); f_008bcaaa();
    /* 008bcf3f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bcf42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf44: jne 0x8bcf56 */ if (!fZ) goto L_008bcf56;
L_008bcf46:; BB(0x008bcf46);
    /* 008bcf46: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008bcf49: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf4c: jne 0x8bcf52 */ if (!fZ) goto L_008bcf52;
L_008bcf4e:; BB(0x008bcf4e);
    /* 008bcf4e: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bcf50: ja 0x8bcf77 */ if ((!fC&&!fZ)) goto L_008bcf77;
L_008bcf52:; BB(0x008bcf52);
    /* 008bcf52: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008bcf54: jmp 0x8bcf9f */ goto L_008bcf9f;
L_008bcf56:; BB(0x008bcf56);
    /* 008bcf56: cmp eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf59: jne 0x8bcf64 */ if (!fZ) goto L_008bcf64;
L_008bcf5b:; BB(0x008bcf5b);
    /* 008bcf5b: mov dword ptr [esi + 0x18], 0x99f0c8 */ W32((u32)(r_esi+0x18u), 0x99f0c8u);
    /* 008bcf62: jmp 0x8bcf9d */ goto L_008bcf9d;
L_008bcf64:; BB(0x008bcf64);
    /* 008bcf64: cmp eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf67: jne 0x8bcf72 */ if (!fZ) goto L_008bcf72;
L_008bcf69:; BB(0x008bcf69);
    /* 008bcf69: mov dword ptr [esi + 0x18], 0x99f0ac */ W32((u32)(r_esi+0x18u), 0x99f0acu);
    /* 008bcf70: jmp 0x8bcf9a */ goto L_008bcf9a;
L_008bcf72:; BB(0x008bcf72);
    /* 008bcf72: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf75: je 0x8bcf9d */ if (fZ) goto L_008bcf9d;
L_008bcf77:; BB(0x008bcf77);
    /* 008bcf77: mov dword ptr [esi + 0x18], 0x99f088 */ W32((u32)(r_esi+0x18u), 0x99f088u);
    /* 008bcf7e: jmp 0x8bcf9a */ goto L_008bcf9a;
L_008bcf80:; BB(0x008bcf80);
    /* 008bcf80: cmp eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf83: jne 0x8bcf8e */ if (!fZ) goto L_008bcf8e;
L_008bcf85:; BB(0x008bcf85);
    /* 008bcf85: mov dword ptr [esi + 0x18], 0x99f064 */ W32((u32)(r_esi+0x18u), 0x99f064u);
    /* 008bcf8c: jmp 0x8bcf9d */ goto L_008bcf9d;
L_008bcf8e:; BB(0x008bcf8e);
    /* 008bcf8e: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bcf91: je 0x8bcf9d */ if (fZ) goto L_008bcf9d;
L_008bcf93:; BB(0x008bcf93);
    /* 008bcf93: mov dword ptr [esi + 0x18], 0x99f044 */ W32((u32)(r_esi+0x18u), 0x99f044u);
L_008bcf9a:; BB(0x008bcf9a);
    /* 008bcf9a: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 008bcf9c: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008bcf9d:; BB(0x008bcf9d);
    /* 008bcf9d: mov edi, eax */ r_edi = r_eax;
L_008bcf9f:; BB(0x008bcf9f);
    /* 008bcf9f: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcfa2: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008bcfa5: call dword ptr [esi + 0x24] */ { u32 t = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, 0x8bcfa8u); call_ind(t); }
    /* 008bcfa8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008bcfa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008bcfaa: mov eax, edi */ r_eax = r_edi;
    /* 008bcfac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bcfad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008bcfae:; BB(0x008bcfae);
    /* 008bcfae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bcfaf: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bcfb0: ret  */ FN_RET(0x008bceae); r_esp += 4; return;
}

void f_008bcfb1(void) /* sub_8BCFB1 */
{
    FN_ENTER(0x008bcfb1);
    /* 008bcfb1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008bcfb5: mov ecx, dword ptr [0xa369d8] */ r_ecx = R32((u32)(0xa369d8u));
    /* 008bcfbb: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008bcfbd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008bcfc1: mov ecx, dword ptr [0xa369dc] */ r_ecx = R32((u32)(0xa369dcu));
    /* 008bcfc7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008bcfc9: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008bcfcd: mov dword ptr [eax], 0xa369e0 */ W32((u32)(r_eax), 0xa369e0u);
    /* 008bcfd3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008bcfd7: mov dword ptr [eax], 0xa379e0 */ W32((u32)(r_eax), 0xa379e0u);
    /* 008bcfdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bcfdf: ret  */ FN_RET(0x008bcfb1); r_esp += 4; return;
}

void f_008bcfe0(void) /* sub_8BCFE0 */
{
    FN_ENTER(0x008bcfe0);
    /* 008bcfe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bcfe1: mov ebp, esp */ r_ebp = r_esp;
    /* 008bcfe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008bcfe4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008bcfe5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bcfe6: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008bcfe9: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 008bcfec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bcfed: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008bcff0: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008bcff3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bcff4: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 008bcff7: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bcff9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008bcffc: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008bcfff: jbe 0x8bd004 */ if ((fC||fZ)) goto L_008bd004;
L_008bd001:; BB(0x008bd001);
    /* 008bd001: mov edi, dword ptr [ebx + 0x2c] */ r_edi = R32((u32)(r_ebx+0x2cu));
L_008bd004:; BB(0x008bd004);
    /* 008bd004: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008bd007: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008bd009: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bd00b: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008bd00e: jbe 0x8bd015 */ if ((fC||fZ)) goto L_008bd015;
L_008bd010:; BB(0x008bd010);
    /* 008bd010: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008bd013: mov edi, eax */ r_edi = r_eax;
L_008bd015:; BB(0x008bd015);
    /* 008bd015: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bd017: je 0x8bd023 */ if (fZ) goto L_008bd023;
L_008bd019:; BB(0x008bd019);
    /* 008bd019: cmp dword ptr [ebp + 0x10], -5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bd01d: jne 0x8bd023 */ if (!fZ) goto L_008bd023;
L_008bd01f:; BB(0x008bd01f);
    /* 008bd01f: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008bd023:; BB(0x008bd023);
    /* 008bd023: add dword ptr [esi + 0x14], edi */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd026: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bd028: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008bd02b: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 008bd02e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bd030: je 0x8bd045 */ if (fZ) goto L_008bd045;
L_008bd032:; BB(0x008bd032);
    /* 008bd032: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bd033: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008bd034: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008bd037: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8bd039u); call_ind(t); }
    /* 008bd039: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008bd03c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 008bd03f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bd042: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_008bd045:; BB(0x008bd045);
    /* 008bd045: mov ecx, edi */ r_ecx = r_edi;
    /* 008bd047: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bd04a: mov eax, ecx */ r_eax = r_ecx;
    /* 008bd04c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008bd04f: mov esi, edx */ r_esi = r_edx;
    /* 008bd051: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008bd053: mov ecx, eax */ r_ecx = r_eax;
    /* 008bd055: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bd058: add dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd05b: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd05e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd061: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008bd063: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 008bd066: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bd069: jne 0x8bd0de */ if (!fZ) goto L_008bd0de;
L_008bd06b:; BB(0x008bd06b);
    /* 008bd06b: cmp dword ptr [ebx + 0x34], eax */ {  u32 a = R32((u32)(r_ebx+0x34u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bd06e: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 008bd071: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008bd074: jne 0x8bd079 */ if (!fZ) goto L_008bd079;
L_008bd076:; BB(0x008bd076);
    /* 008bd076: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
L_008bd079:; BB(0x008bd079);
    /* 008bd079: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 008bd07c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008bd07f: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008bd082: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008bd084: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008bd086: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008bd089: jbe 0x8bd090 */ if ((fC||fZ)) goto L_008bd090;
L_008bd08b:; BB(0x008bd08b);
    /* 008bd08b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008bd08e: mov edi, eax */ r_edi = r_eax;
L_008bd090:; BB(0x008bd090);
    /* 008bd090: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bd092: je 0x8bd09e */ if (fZ) goto L_008bd09e;
L_008bd094:; BB(0x008bd094);
    /* 008bd094: cmp dword ptr [ebp + 0x10], -5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bd098: jne 0x8bd09e */ if (!fZ) goto L_008bd09e;
L_008bd09a:; BB(0x008bd09a);
    /* 008bd09a: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008bd09e:; BB(0x008bd09e);
    /* 008bd09e: add dword ptr [esi + 0x14], edi */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd0a1: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bd0a3: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008bd0a6: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 008bd0a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bd0ab: je 0x8bd0c0 */ if (fZ) goto L_008bd0c0;
L_008bd0ad:; BB(0x008bd0ad);
    /* 008bd0ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bd0ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008bd0af: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008bd0b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8bd0b4u); call_ind(t); }
    /* 008bd0b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008bd0b7: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 008bd0ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008bd0bd: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_008bd0c0:; BB(0x008bd0c0);
    /* 008bd0c0: mov ecx, edi */ r_ecx = r_edi;
    /* 008bd0c2: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bd0c5: mov eax, ecx */ r_eax = r_ecx;
    /* 008bd0c7: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008bd0ca: mov esi, edx */ r_esi = r_edx;
    /* 008bd0cc: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008bd0ce: mov ecx, eax */ r_ecx = r_eax;
    /* 008bd0d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bd0d3: add dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bd0d6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bd0d9: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bd0dc: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_008bd0de:; BB(0x008bd0de);
    /* 008bd0de: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bd0e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bd0e4: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008bd0e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bd0ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bd0eb: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 008bd0ee: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008bd0f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bd0f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bd0f3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bd0f4: ret  */ FN_RET(0x008bcfe0); r_esp += 4; return;
}

