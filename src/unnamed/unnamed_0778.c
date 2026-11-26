#include "protos.h"

void f_007780a8(void) /* sub_7780A8 */
{
    FN_ENTER(0x007780a8);
    /* 007780a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007780a9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007780ac: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007780ae: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007780b1: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007780b3: je 0x778118 */ if (fZ) goto L_00778118;
L_007780b5:; BB(0x007780b5);
    /* 007780b5: mov ecx, dword ptr [ebp + 0x270] */ r_ecx = R32((u32)(r_ebp+0x270u));
    /* 007780bb: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007780be: mov dword ptr [ebp + 0x270], ecx */ W32((u32)(r_ebp+0x270u), r_ecx);
    /* 007780c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007780c6: jle 0x77811f */ if ((fZ||fS!=fO)) goto L_0077811f;
L_007780c8:; BB(0x007780c8);
    /* 007780c8: and eax, 0xffffffc3 */ {  u32 a = r_eax; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007780cb: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007780ce: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 007780d1: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 007780d6: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007780d8: mov eax, ecx */ r_eax = r_ecx;
    /* 007780da: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007780dd: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007780df: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007780e2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007780e4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007780e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007780e9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007780eb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007780ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007780f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007780f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007780f4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007780f6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007780f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007780fa: jne 0x77810e */ if (!fZ) goto L_0077810e;
L_007780fc:; BB(0x007780fc);
    /* 007780fc: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007780ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778103: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00778104: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00778106: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x77810bu); f_00814298();
    /* 0077810b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077810e:; BB(0x0077810e);
    /* 0077810e: mov eax, 1 */ r_eax = 0x1u;
    /* 00778113: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00778117: ret  */ FN_RET(0x007780a8); r_esp += 4; return;
L_00778118:; BB(0x00778118);
    /* 00778118: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077811a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077811d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077811e: ret  */ FN_RET(0x007780a8); r_esp += 4; return;
L_0077811f:; BB(0x0077811f);
    /* 0077811f: movsx edx, word ptr [ebp + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2c8u));
    /* 00778126: fld dword ptr [ebp + 0x26c] */ FPUSH(R_F32((u32)(r_ebp+0x26cu)));
    /* 0077812c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0077812f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778132: mov dword ptr [ebp + 0x26c], 0 */ W32((u32)(r_ebp+0x26cu), 0x0u);
    /* 0077813c: and eax, 0xffffffc3 */ {  u32 a = r_eax; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077813f: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00778142: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00778145: mov dword ptr [ebp + 0x338], eax */ W32((u32)(r_ebp+0x338u), r_eax);
    /* 0077814b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077814d: fchs  */ ST(0) = -ST(0);
    /* 0077814f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778151: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778155: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077815a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077815f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778163: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778167: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077816b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077816f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778173: add word ptr [ebp + 0x2d0], ax */ { u32 ad = (u32)(r_ebp+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0077817a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077817c: mov dword ptr [ebp + 0x268], eax */ W32((u32)(r_ebp+0x268u), r_eax);
    /* 00778182: mov dword ptr [ebp + 0x270], eax */ W32((u32)(r_ebp+0x270u), r_eax);
    /* 00778188: jmp 0x778118 */ goto L_00778118;
}

void f_0077818c(void) /* sub_77818C */
{
    FN_ENTER(0x0077818c);
    /* 0077818c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077818d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077818e: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00778191: mov esi, ecx */ r_esi = r_ecx;
    /* 00778193: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 00778196: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077819c: je 0x778235 */ if (fZ) goto L_00778235;
L_007781a2:; BB(0x007781a2);
    /* 007781a2: mov ecx, dword ptr [esi + 0x270] */ r_ecx = R32((u32)(r_esi+0x270u));
    /* 007781a8: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007781ab: mov dword ptr [esi + 0x270], ecx */ W32((u32)(r_esi+0x270u), r_ecx);
    /* 007781b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007781b3: jle 0x77823d */ if ((fZ||fS!=fO)) goto L_0077823d;
L_007781b9:; BB(0x007781b9);
    /* 007781b9: and edi, 0xffffffc3 */ {  u32 a = r_edi; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007781bc: or edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007781bf: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 007781c2: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 007781c7: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007781c9: mov eax, ecx */ r_eax = r_ecx;
    /* 007781cb: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007781ce: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007781d0: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007781d3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007781d5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007781d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007781da: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007781dc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007781df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007781e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007781e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007781e5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007781e7: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007781e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007781eb: jne 0x77822a */ if (!fZ) goto L_0077822a;
L_007781ed:; BB(0x007781ed);
    /* 007781ed: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007781f3: jne 0x77822a */ if (!fZ) goto L_0077822a;
L_007781f5:; BB(0x007781f5);
    /* 007781f5: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 007781f7: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 007781f9: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 007781ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778200: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x778205u); f_0050b7a4();
    /* 00778205: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077820a: je 0x778218 */ if (fZ) goto L_00778218;
L_0077820c:; BB(0x0077820c);
    /* 0077820c: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00778210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778211: mov ecx, eax */ r_ecx = r_eax;
    /* 00778213: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x778218u); f_00508f14();
L_00778218:; BB(0x00778218);
    /* 00778218: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077821b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077821d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077821e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077821f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00778220: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00778222: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x778227u); f_00814298();
    /* 00778227: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0077822a:; BB(0x0077822a);
    /* 0077822a: mov eax, 1 */ r_eax = 0x1u;
    /* 0077822f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778232: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00778233: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00778234: ret  */ FN_RET(0x0077818c); r_esp += 4; return;
L_00778235:; BB(0x00778235);
    /* 00778235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778237: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077823a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077823b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077823c: ret  */ FN_RET(0x0077818c); r_esp += 4; return;
L_0077823d:; BB(0x0077823d);
    /* 0077823d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00778241: and edi, 0xffffffc3 */ {  u32 a = r_edi; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00778244: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 00778247: and edi, 0x3f */ {  u32 a = r_edi; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0077824a: mov dword ptr [esi + 0x338], edi */ W32((u32)(r_esi+0x338u), r_edi);
    /* 00778250: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778255: jl 0x778299 */ if ((fS!=fO)) goto L_00778299;
L_00778257:; BB(0x00778257);
    /* 00778257: movsx edx, word ptr [esi + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2c8u));
    /* 0077825e: fld dword ptr [esi + 0x26c] */ FPUSH(R_F32((u32)(r_esi+0x26cu)));
    /* 00778264: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00778267: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0077826a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077826c: fchs  */ ST(0) = -ST(0);
    /* 0077826e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778270: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778274: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778279: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077827e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778282: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778286: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077828a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077828e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778292: add word ptr [esi + 0x2d0], ax */ { u32 ad = (u32)(r_esi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00778299:; BB(0x00778299);
    /* 00778299: mov dword ptr [esi + 0x26c], 0 */ W32((u32)(r_esi+0x26cu), 0x0u);
    /* 007782a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007782a5: mov dword ptr [esi + 0x268], eax */ W32((u32)(r_esi+0x268u), r_eax);
    /* 007782ab: mov dword ptr [esi + 0x270], eax */ W32((u32)(r_esi+0x270u), r_eax);
    /* 007782b1: jmp 0x778235 */ goto L_00778235;
}

void f_007782b4(void) /* sub_7782B4 */
{
    FN_ENTER(0x007782b4);
    /* 007782b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007782b5: mov ebp, esp */ r_ebp = r_esp;
    /* 007782b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007782b9: push 0x8f4118 */ { u32 v = 0x8f4118u; r_esp -= 4; W32(r_esp, v); }
    /* 007782be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007782c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007782c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007782cc: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007782cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007782d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007782d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007782d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007782db: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007782de: mov ecx, dword ptr [ecx + 0x27c] */ r_ecx = R32((u32)(r_ecx+0x27cu));
    /* 007782e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007782e6: jle 0x7784e1 */ if ((fZ||fS!=fO)) goto L_007784e1;
L_007782ec:; BB(0x007782ec);
    /* 007782ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007782ef: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007782f2: mov dword ptr [eax + 0x27c], ecx */ W32((u32)(r_eax+0x27cu), r_ecx);
    /* 007782f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007782fa: jle 0x778440 */ if ((fZ||fS!=fO)) goto L_00778440;
L_00778300:; BB(0x00778300);
    /* 00778300: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00778305: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00778307: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00778309: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0077830c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077830e: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00778311: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00778313: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00778316: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00778318: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0077831a: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0077831d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077831f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00778321: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00778323: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00778325: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00778327: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00778329: jne 0x778424 */ if (!fZ) goto L_00778424;
L_0077832f:; BB(0x0077832f);
    /* 0077832f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00778332: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00778335: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077833b: jne 0x778424 */ if (!fZ) goto L_00778424;
L_00778341:; BB(0x00778341);
    /* 00778341: mov eax, dword ptr [eax + 0x274] */ r_eax = R32((u32)(r_eax+0x274u));
    /* 00778347: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077834a: jne 0x778388 */ if (!fZ) goto L_00778388;
L_0077834c:; BB(0x0077834c);
    /* 0077834c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077834f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00778351: call dword ptr [eax + 0x11c] */ { u32 t = R32((u32)(r_eax+0x11cu)); r_esp -= 4; W32(r_esp, 0x778357u); call_ind(t); }
    /* 00778357: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0077835a: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0077835d: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778363: je 0x778371 */ if (fZ) goto L_00778371;
L_00778365:; BB(0x00778365);
    /* 00778365: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0077836c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077836f: jne 0x7783d7 */ if (!fZ) goto L_007783d7;
L_00778371:; BB(0x00778371);
    /* 00778371: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00778374: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00778376: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778377: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778378: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00778379: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077837e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x778383u); f_00814298();
    /* 00778383: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778386: jmp 0x7783d7 */ goto L_007783d7;
L_00778388:; BB(0x00778388);
    /* 00778388: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077838b: jne 0x7783d7 */ if (!fZ) goto L_007783d7;
L_0077838d:; BB(0x0077838d);
    /* 0077838d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00778390: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00778392: call dword ptr [eax + 0x120] */ { u32 t = R32((u32)(r_eax+0x120u)); r_esp -= 4; W32(r_esp, 0x778398u); call_ind(t); }
    /* 00778398: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0077839b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0077839e: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007783a4: je 0x7783bf */ if (fZ) goto L_007783bf;
L_007783a6:; BB(0x007783a6);
    /* 007783a6: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007783ad: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007783b0: jne 0x7783b9 */ if (!fZ) goto L_007783b9;
L_007783b2:; BB(0x007783b2);
    /* 007783b2: mov eax, 1 */ r_eax = 0x1u;
    /* 007783b7: jmp 0x7783bb */ goto L_007783bb;
L_007783b9:; BB(0x007783b9);
    /* 007783b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007783bb:; BB(0x007783bb);
    /* 007783bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007783bd: je 0x7783d7 */ if (fZ) goto L_007783d7;
L_007783bf:; BB(0x007783bf);
    /* 007783bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007783c2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 007783c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007783c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007783c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007783c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007783ca: push 0xb2 */ { u32 v = 0xb2u; r_esp -= 4; W32(r_esp, v); }
    /* 007783cf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7783d4u); f_00814298();
    /* 007783d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007783d7:; BB(0x007783d7);
    /* 007783d7: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 007783de: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 007783e0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7783e5u); f_005caba4();
    /* 007783e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007783e6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007783e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007783eb: je 0x778424 */ if (fZ) goto L_00778424;
L_007783ed:; BB(0x007783ed);
    /* 007783ed: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 007783f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007783fb: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00778401: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00778404: mov ecx, eax */ r_ecx = r_eax;
    /* 00778406: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778407: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0077840c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0077840e: push 0x978158 */ { u32 v = 0x978158u; r_esp -= 4; W32(r_esp, v); }
    /* 00778413: push 0x978148 */ { u32 v = 0x978148u; r_esp -= 4; W32(r_esp, v); }
    /* 00778418: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x77841du); f_006eb52c();
    /* 0077841d: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00778424:; BB(0x00778424);
    /* 00778424: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00778427: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077842a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077842d: mov eax, 1 */ r_eax = 0x1u;
    /* 00778432: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00778435: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077843c: mov esp, ebp */ r_esp = r_ebp;
    /* 0077843e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077843f: ret  */ FN_RET(0x007782b4); r_esp += 4; return;
L_00778440:; BB(0x00778440);
    /* 00778440: mov edx, eax */ r_edx = r_eax;
    /* 00778442: movsx ecx, word ptr [edx + 0x2c4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2c4u));
    /* 00778449: fld dword ptr [edx + 0x278] */ FPUSH(R_F32((u32)(r_edx+0x278u)));
    /* 0077844f: movsx esi, word ptr [edx + 0x2c6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2c6u));
    /* 00778456: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00778459: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0077845c: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0077845f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778461: fchs  */ ST(0) = -ST(0);
    /* 00778463: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00778465: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778467: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0077846a: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0077846e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778473: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00778476: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00778479: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077847c: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0077847f: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00778482: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00778485: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778487: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0077848a: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0077848e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778493: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00778496: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00778499: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077849c: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0077849f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007784a2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007784a4: mov dword ptr [edx + 0x274], edi */ W32((u32)(r_edx+0x274u), r_edi);
    /* 007784aa: add word ptr [edx + 0x2cc], bx */ { u32 ad = (u32)(r_edx+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007784b1: mov dword ptr [edx + 0x27c], edi */ W32((u32)(r_edx+0x27cu), r_edi);
    /* 007784b7: add word ptr [edx + 0x2ce], ax */ { u32 ad = (u32)(r_edx+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007784be: mov dword ptr [edx + 0x278], 0 */ W32((u32)(r_edx+0x278u), 0x0u);
L_007784c8:; BB(0x007784c8);
    /* 007784c8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007784cb: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007784ce: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007784d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007784d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007784d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007784dd: mov esp, ebp */ r_esp = r_ebp;
    /* 007784df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007784e0: ret  */ FN_RET(0x007782b4); r_esp += 4; return;
L_007784e1:; BB(0x007784e1);
    /* 007784e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007784e4: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007784eb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007784ee: jne 0x7784c8 */ if (!fZ) goto L_007784c8;
L_007784f0:; BB(0x007784f0);
    /* 007784f0: mov edx, eax */ r_edx = r_eax;
    /* 007784f2: movsx ecx, word ptr [edx + 0x2c4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2c4u));
    /* 007784f9: fld dword ptr [edx + 0x278] */ FPUSH(R_F32((u32)(r_edx+0x278u)));
    /* 007784ff: movsx esi, word ptr [edx + 0x2c6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2c6u));
    /* 00778506: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00778509: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0077850c: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0077850f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778511: fchs  */ ST(0) = -ST(0);
    /* 00778513: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00778515: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778517: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0077851a: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0077851e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778523: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00778526: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00778529: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077852c: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0077852f: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00778532: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00778535: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778537: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0077853a: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0077853e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778543: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00778546: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00778549: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077854c: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0077854f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00778552: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00778554: mov dword ptr [edx + 0x274], edi */ W32((u32)(r_edx+0x274u), r_edi);
    /* 0077855a: add word ptr [edx + 0x2cc], bx */ { u32 ad = (u32)(r_edx+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_ebx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00778561: mov dword ptr [edx + 0x27c], edi */ W32((u32)(r_edx+0x27cu), r_edi);
    /* 00778567: add word ptr [edx + 0x2ce], ax */ { u32 ad = (u32)(r_edx+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0077856e: mov dword ptr [edx + 0x278], 0 */ W32((u32)(r_edx+0x278u), 0x0u);
    /* 00778578: jmp 0x7784c8 */ goto L_007784c8;
}

void f_00778580(void) /* sub_778580 */
{
    FN_ENTER(0x00778580);
    /* 00778580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00778581: mov ebp, esp */ r_ebp = r_esp;
    /* 00778583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00778585: push 0x8f4140 */ { u32 v = 0x8f4140u; r_esp -= 4; W32(r_esp, v); }
    /* 0077858a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00778590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778591: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00778598: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077859b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077859e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007785a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007785a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007785a7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007785aa: mov ecx, dword ptr [ecx + 0x288] */ r_ecx = R32((u32)(r_ecx+0x288u));
    /* 007785b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007785b2: jle 0x778774 */ if ((fZ||fS!=fO)) goto L_00778774;
L_007785b8:; BB(0x007785b8);
    /* 007785b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007785bb: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007785be: mov dword ptr [eax + 0x288], ecx */ W32((u32)(r_eax+0x288u), r_ecx);
    /* 007785c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007785c6: jle 0x77870c */ if ((fZ||fS!=fO)) goto L_0077870c;
L_007785cc:; BB(0x007785cc);
    /* 007785cc: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 007785d1: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007785d3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007785d5: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 007785d8: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007785da: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007785dd: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007785df: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007785e2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007785e4: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007785e6: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007785e9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007785eb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007785ed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007785ef: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007785f1: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007785f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007785f5: jne 0x7786f0 */ if (!fZ) goto L_007786f0;
L_007785fb:; BB(0x007785fb);
    /* 007785fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007785fe: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00778601: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00778607: jne 0x7786f0 */ if (!fZ) goto L_007786f0;
L_0077860d:; BB(0x0077860d);
    /* 0077860d: mov eax, dword ptr [eax + 0x280] */ r_eax = R32((u32)(r_eax+0x280u));
    /* 00778613: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778616: jne 0x778654 */ if (!fZ) goto L_00778654;
L_00778618:; BB(0x00778618);
    /* 00778618: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077861b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0077861d: call dword ptr [eax + 0x124] */ { u32 t = R32((u32)(r_eax+0x124u)); r_esp -= 4; W32(r_esp, 0x778623u); call_ind(t); }
    /* 00778623: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00778626: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00778629: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077862f: je 0x77863d */ if (fZ) goto L_0077863d;
L_00778631:; BB(0x00778631);
    /* 00778631: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00778638: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077863b: jne 0x7786a3 */ if (!fZ) goto L_007786a3;
L_0077863d:; BB(0x0077863d);
    /* 0077863d: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00778640: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00778642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778643: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778644: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00778645: push 0xb3 */ { u32 v = 0xb3u; r_esp -= 4; W32(r_esp, v); }
    /* 0077864a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x77864fu); f_00814298();
    /* 0077864f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778652: jmp 0x7786a3 */ goto L_007786a3;
L_00778654:; BB(0x00778654);
    /* 00778654: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778657: jne 0x7786a3 */ if (!fZ) goto L_007786a3;
L_00778659:; BB(0x00778659);
    /* 00778659: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077865c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0077865e: call dword ptr [eax + 0x128] */ { u32 t = R32((u32)(r_eax+0x128u)); r_esp -= 4; W32(r_esp, 0x778664u); call_ind(t); }
    /* 00778664: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00778667: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0077866a: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778670: je 0x77868b */ if (fZ) goto L_0077868b;
L_00778672:; BB(0x00778672);
    /* 00778672: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00778679: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077867c: jne 0x778685 */ if (!fZ) goto L_00778685;
L_0077867e:; BB(0x0077867e);
    /* 0077867e: mov eax, 1 */ r_eax = 0x1u;
    /* 00778683: jmp 0x778687 */ goto L_00778687;
L_00778685:; BB(0x00778685);
    /* 00778685: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00778687:; BB(0x00778687);
    /* 00778687: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778689: je 0x7786a3 */ if (fZ) goto L_007786a3;
L_0077868b:; BB(0x0077868b);
    /* 0077868b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0077868e: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00778691: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00778693: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778695: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00778696: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077869b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7786a0u); f_00814298();
    /* 007786a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007786a3:; BB(0x007786a3);
    /* 007786a3: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 007786aa: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 007786ac: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7786b1u); f_005caba4();
    /* 007786b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007786b2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007786b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007786b7: je 0x7786f0 */ if (fZ) goto L_007786f0;
L_007786b9:; BB(0x007786b9);
    /* 007786b9: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 007786c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007786c7: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 007786cd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007786d0: mov ecx, eax */ r_ecx = r_eax;
    /* 007786d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007786d3: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 007786d8: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 007786da: push 0x978158 */ { u32 v = 0x978158u; r_esp -= 4; W32(r_esp, v); }
    /* 007786df: push 0x978130 */ { u32 v = 0x978130u; r_esp -= 4; W32(r_esp, v); }
    /* 007786e4: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x7786e9u); f_006eb52c();
    /* 007786e9: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_007786f0:; BB(0x007786f0);
    /* 007786f0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007786f3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007786f6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007786f9: mov eax, 1 */ r_eax = 0x1u;
    /* 007786fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00778701: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00778708: mov esp, ebp */ r_esp = r_ebp;
    /* 0077870a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077870b: ret  */ FN_RET(0x00778580); r_esp += 4; return;
L_0077870c:; BB(0x0077870c);
    /* 0077870c: mov ebx, eax */ r_ebx = r_eax;
    /* 0077870e: movsx edx, word ptr [ebx + 0x2ca] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cau));
    /* 00778715: fld dword ptr [ebx + 0x284] */ FPUSH(R_F32((u32)(r_ebx+0x284u)));
    /* 0077871b: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0077871e: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 00778721: mov dword ptr [ebx + 0x284], 0 */ W32((u32)(r_ebx+0x284u), 0x0u);
    /* 0077872b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077872d: fchs  */ ST(0) = -ST(0);
    /* 0077872f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778731: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00778734: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00778738: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077873d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00778740: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00778743: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778746: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00778749: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077874b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0077874e: add word ptr [ebx + 0x2d2], ax */ { u32 ad = (u32)(r_ebx+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00778755: mov dword ptr [ebx + 0x280], ecx */ W32((u32)(r_ebx+0x280u), r_ecx);
    /* 0077875b: mov dword ptr [ebx + 0x288], ecx */ W32((u32)(r_ebx+0x288u), r_ecx);
L_00778761:; BB(0x00778761);
    /* 00778761: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00778764: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00778766: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00778769: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00778770: mov esp, ebp */ r_esp = r_ebp;
    /* 00778772: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00778773: ret  */ FN_RET(0x00778580); r_esp += 4; return;
L_00778774:; BB(0x00778774);
    /* 00778774: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00778777: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0077877e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778781: jne 0x778761 */ if (!fZ) goto L_00778761;
L_00778783:; BB(0x00778783);
    /* 00778783: mov ebx, eax */ r_ebx = r_eax;
    /* 00778785: movsx edx, word ptr [ebx + 0x2ca] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cau));
    /* 0077878c: fld dword ptr [ebx + 0x284] */ FPUSH(R_F32((u32)(r_ebx+0x284u)));
    /* 00778792: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00778795: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00778798: mov dword ptr [ebx + 0x284], 0 */ W32((u32)(r_ebx+0x284u), 0x0u);
    /* 007787a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007787a4: fchs  */ ST(0) = -ST(0);
    /* 007787a6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007787a8: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 007787ab: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 007787af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007787b4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 007787b7: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 007787ba: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 007787bd: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 007787c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007787c2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007787c5: add word ptr [ebx + 0x2d2], ax */ { u32 ad = (u32)(r_ebx+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007787cc: mov dword ptr [ebx + 0x280], ecx */ W32((u32)(r_ebx+0x280u), r_ecx);
    /* 007787d2: mov dword ptr [ebx + 0x288], ecx */ W32((u32)(r_ebx+0x288u), r_ecx);
    /* 007787d8: jmp 0x778761 */ goto L_00778761;
}

void f_007787dc(void) /* sub_7787DC */
{
    FN_ENTER(0x007787dc);
    /* 007787dc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007787df: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 007787e2: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007787e5: je 0x7787f8 */ if (fZ) goto L_007787f8;
L_007787e7:; BB(0x007787e7);
    /* 007787e7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007787e9: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x7787efu); call_ind(t); }
    /* 007787ef: mov eax, 1 */ r_eax = 0x1u;
    /* 007787f4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007787f7: ret  */ FN_RET(0x007787dc); r_esp += 4; return;
L_007787f8:; BB(0x007787f8);
    /* 007787f8: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 007787ff: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778802: jne 0x7788e3 */ if (!fZ) goto L_007788e3;
L_00778808:; BB(0x00778808);
    /* 00778808: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0077880b: jne 0x778872 */ if (!fZ) goto L_00778872;
L_0077880d:; BB(0x0077880d);
    /* 0077880d: mov eax, dword ptr [ecx + 0x25c] */ r_eax = R32((u32)(r_ecx+0x25cu));
    /* 00778813: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778816: jne 0x77885a */ if (!fZ) goto L_0077885a;
L_00778818:; BB(0x00778818);
    /* 00778818: movsx eax, word ptr [ecx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c8u));
    /* 0077881f: fld dword ptr [ecx + 0x260] */ FPUSH(R_F32((u32)(r_ecx+0x260u)));
    /* 00778825: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00778828: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0077882b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077882d: fchs  */ ST(0) = -ST(0);
    /* 0077882f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778831: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778835: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077883a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077883f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778843: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778847: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077884b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077884f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778853: add word ptr [ecx + 0x2d0], ax */ { u32 ad = (u32)(r_ecx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0077885a:; BB(0x0077885a);
    /* 0077885a: mov dword ptr [ecx + 0x260], 0 */ W32((u32)(r_ecx+0x260u), 0x0u);
    /* 00778864: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778866: mov dword ptr [ecx + 0x25c], eax */ W32((u32)(r_ecx+0x25cu), r_eax);
    /* 0077886c: mov dword ptr [ecx + 0x264], eax */ W32((u32)(r_ecx+0x264u), r_eax);
L_00778872:; BB(0x00778872);
    /* 00778872: test dl, 0x3c */ {  u32 a = (u8)r_edx; u32 b = 0x3cu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778875: jne 0x7788e3 */ if (!fZ) goto L_007788e3;
L_00778877:; BB(0x00778877);
    /* 00778877: mov eax, dword ptr [ecx + 0x268] */ r_eax = R32((u32)(r_ecx+0x268u));
    /* 0077887d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778880: jl 0x7788cb */ if ((fS!=fO)) goto L_007788cb;
L_00778882:; BB(0x00778882);
    /* 00778882: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778885: jg 0x7788cb */ if ((!fZ&&fS==fO)) goto L_007788cb;
L_00778887:; BB(0x00778887);
    /* 00778887: movsx edx, word ptr [ecx + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c8u));
    /* 0077888e: fld dword ptr [ecx + 0x26c] */ FPUSH(R_F32((u32)(r_ecx+0x26cu)));
    /* 00778894: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00778898: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0077889c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077889e: fchs  */ ST(0) = -ST(0);
    /* 007788a0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007788a2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007788a6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007788ab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007788b0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007788b4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007788b8: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007788bc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007788c0: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007788c4: add word ptr [ecx + 0x2d0], ax */ { u32 ad = (u32)(r_ecx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_007788cb:; BB(0x007788cb);
    /* 007788cb: mov dword ptr [ecx + 0x26c], 0 */ W32((u32)(r_ecx+0x26cu), 0x0u);
    /* 007788d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007788d7: mov dword ptr [ecx + 0x268], eax */ W32((u32)(r_ecx+0x268u), r_eax);
    /* 007788dd: mov dword ptr [ecx + 0x270], eax */ W32((u32)(r_ecx+0x270u), r_eax);
L_007788e3:; BB(0x007788e3);
    /* 007788e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007788e5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007788e8: ret  */ FN_RET(0x007787dc); r_esp += 4; return;
}

void f_007788ec(void) /* sub_7788EC */
{
    FN_ENTER(0x007788ec);
    /* 007788ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007788ed: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007788f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007788f2: mov eax, dword ptr [ebp + 0x2e8] */ r_eax = R32((u32)(r_ebp+0x2e8u));
    /* 007788f8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007788fa: jne 0x77897e */ if (!fZ) goto L_0077897e;
L_00778900:; BB(0x00778900);
    /* 00778900: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00778904: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778909: jge 0x77897e */ if ((fS==fO)) goto L_0077897e;
L_0077890b:; BB(0x0077890b);
    /* 0077890b: movzx eax, word ptr [ebp + 0x11c] */ r_eax = (u32)R16((u32)(r_ebp+0x11cu));
    /* 00778912: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778914: jne 0x77897e */ if (!fZ) goto L_0077897e;
L_00778916:; BB(0x00778916);
    /* 00778916: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00778919: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077891f: jne 0x77894c */ if (!fZ) goto L_0077894c;
L_00778921:; BB(0x00778921);
    /* 00778921: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00778923: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00778925: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0077892b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077892c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x778931u); f_0050b7a4();
    /* 00778931: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778936: je 0x778949 */ if (fZ) goto L_00778949;
L_00778938:; BB(0x00778938);
    /* 00778938: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0077893c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077893d: mov ecx, eax */ r_ecx = r_eax;
    /* 0077893f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x778944u); f_00508f14();
    /* 00778944: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00778947: jmp 0x77894c */ goto L_0077894c;
L_00778949:; BB(0x00778949);
    /* 00778949: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_0077894c:; BB(0x0077894c);
    /* 0077894c: mov eax, dword ptr [ebp + 0x25c] */ r_eax = R32((u32)(r_ebp+0x25cu));
    /* 00778952: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778955: je 0x778983 */ if (fZ) goto L_00778983;
L_00778957:; BB(0x00778957);
    /* 00778957: mov dword ptr [ebp + 0x25c], 0xf */ W32((u32)(r_ebp+0x25cu), 0xfu);
    /* 00778961: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00778964: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00778967: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0077896a: mov dword ptr [ebp + 0x260], 0 */ W32((u32)(r_ebp+0x260u), 0x0u);
    /* 00778974: mov dword ptr [ebp + 0x264], 0x2d */ W32((u32)(r_ebp+0x264u), 0x2du);
L_0077897e:; BB(0x0077897e);
    /* 0077897e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778981: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00778982: ret  */ FN_RET(0x007788ec); r_esp += 4; return;
L_00778983:; BB(0x00778983);
    /* 00778983: movsx eax, word ptr [ebp + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2c8u));
    /* 0077898a: fld dword ptr [ebp + 0x260] */ FPUSH(R_F32((u32)(r_ebp+0x260u)));
    /* 00778990: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00778993: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778996: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778998: fchs  */ ST(0) = -ST(0);
    /* 0077899a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077899c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007789a0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007789a5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007789aa: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007789ae: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007789b2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007789b6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007789ba: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007789be: add word ptr [ebp + 0x2d0], ax */ { u32 ad = (u32)(r_ebp+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007789c5: jmp 0x778957 */ goto L_00778957;
}

void f_007789c8(void) /* sub_7789C8 */
{
    FN_ENTER(0x007789c8);
    /* 007789c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007789c9: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007789cc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007789ce: mov eax, dword ptr [ebx + 0x2e8] */ r_eax = R32((u32)(r_ebx+0x2e8u));
    /* 007789d4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007789d6: jne 0x778ac0 */ if (!fZ) goto L_00778ac0;
L_007789dc:; BB(0x007789dc);
    /* 007789dc: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 007789df: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007789e5: jne 0x778ac0 */ if (!fZ) goto L_00778ac0;
L_007789eb:; BB(0x007789eb);
    /* 007789eb: movzx eax, word ptr [ebx + 0x11c] */ r_eax = (u32)R16((u32)(r_ebx+0x11cu));
    /* 007789f2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007789f4: jne 0x778ac0 */ if (!fZ) goto L_00778ac0;
L_007789fa:; BB(0x007789fa);
    /* 007789fa: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778a00: jne 0x778a2d */ if (!fZ) goto L_00778a2d;
L_00778a02:; BB(0x00778a02);
    /* 00778a02: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00778a04: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00778a06: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00778a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778a0d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x778a12u); f_0050b7a4();
    /* 00778a12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778a15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778a17: je 0x778a2a */ if (fZ) goto L_00778a2a;
L_00778a19:; BB(0x00778a19);
    /* 00778a19: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00778a1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778a1e: mov ecx, eax */ r_ecx = r_eax;
    /* 00778a20: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x778a25u); f_00508f14();
    /* 00778a25: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00778a28: jmp 0x778a2d */ goto L_00778a2d;
L_00778a2a:; BB(0x00778a2a);
    /* 00778a2a: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
L_00778a2d:; BB(0x00778a2d);
    /* 00778a2d: mov eax, dword ptr [ebx + 0x25c] */ r_eax = R32((u32)(r_ebx+0x25cu));
    /* 00778a33: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778a36: je 0x778ac5 */ if (fZ) goto L_00778ac5;
L_00778a3c:; BB(0x00778a3c);
    /* 00778a3c: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00778a40: mov dword ptr [ebx + 0x25c], 0x10 */ W32((u32)(r_ebx+0x25cu), 0x10u);
    /* 00778a4a: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778a4f: jl 0x778aa3 */ if ((fS!=fO)) goto L_00778aa3;
L_00778a51:; BB(0x00778a51);
    /* 00778a51: movsx eax, word ptr [ebx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c8u));
    /* 00778a58: mov dword ptr [ebx + 0x260], 0xbe19999a */ W32((u32)(r_ebx+0x260u), 0xbe19999au);
    /* 00778a62: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00778a65: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778a68: fmul dword ptr [0x97811c] */ ST(0) = ST(0) * R_F32((u32)(0x97811cu));
    /* 00778a6e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778a72: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778a77: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778a7c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778a80: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778a84: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778a88: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778a8c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778a90: add word ptr [ebx + 0x2d0], ax */ { u32 ad = (u32)(r_ebx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00778a97: mov dword ptr [ebx + 0x264], 0xd2 */ W32((u32)(r_ebx+0x264u), 0xd2u);
    /* 00778aa1: jmp 0x778ab7 */ goto L_00778ab7;
L_00778aa3:; BB(0x00778aa3);
    /* 00778aa3: mov dword ptr [ebx + 0x260], 0 */ W32((u32)(r_ebx+0x260u), 0x0u);
    /* 00778aad: mov dword ptr [ebx + 0x264], 0 */ W32((u32)(r_ebx+0x264u), 0x0u);
L_00778ab7:; BB(0x00778ab7);
    /* 00778ab7: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00778aba: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00778abd: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_00778ac0:; BB(0x00778ac0);
    /* 00778ac0: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778ac3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00778ac4: ret  */ FN_RET(0x007789c8); r_esp += 4; return;
L_00778ac5:; BB(0x00778ac5);
    /* 00778ac5: movsx eax, word ptr [ebx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c8u));
    /* 00778acc: fld dword ptr [ebx + 0x260] */ FPUSH(R_F32((u32)(r_ebx+0x260u)));
    /* 00778ad2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00778ad6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00778ada: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778adc: fchs  */ ST(0) = -ST(0);
    /* 00778ade: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778ae0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778ae4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778ae9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778aee: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778af2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778af6: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778afa: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778afe: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778b02: add word ptr [ebx + 0x2d0], ax */ { u32 ad = (u32)(r_ebx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00778b09: jmp 0x778a3c */ goto L_00778a3c;
}

void f_00778b10(void) /* sub_778B10 */
{
    FN_ENTER(0x00778b10);
    /* 00778b10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00778b11: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00778b14: mov edi, ecx */ r_edi = r_ecx;
    /* 00778b16: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00778b1a: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778b1f: jg 0x778be3 */ if ((!fZ&&fS==fO)) goto L_00778be3;
L_00778b25:; BB(0x00778b25);
    /* 00778b25: movzx eax, word ptr [edi + 0x11c] */ r_eax = (u32)R16((u32)(r_edi+0x11cu));
    /* 00778b2c: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778b2e: jne 0x778be3 */ if (!fZ) goto L_00778be3;
L_00778b34:; BB(0x00778b34);
    /* 00778b34: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00778b37: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778b3d: jne 0x778b6a */ if (!fZ) goto L_00778b6a;
L_00778b3f:; BB(0x00778b3f);
    /* 00778b3f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00778b41: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00778b43: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00778b49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778b4a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x778b4fu); f_0050b7a4();
    /* 00778b4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778b52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778b54: je 0x778b67 */ if (fZ) goto L_00778b67;
L_00778b56:; BB(0x00778b56);
    /* 00778b56: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00778b5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778b5b: mov ecx, eax */ r_ecx = r_eax;
    /* 00778b5d: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x778b62u); f_00508f14();
    /* 00778b62: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00778b65: jmp 0x778b6a */ goto L_00778b6a;
L_00778b67:; BB(0x00778b67);
    /* 00778b67: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
L_00778b6a:; BB(0x00778b6a);
    /* 00778b6a: mov eax, dword ptr [edi + 0x268] */ r_eax = R32((u32)(r_edi+0x268u));
    /* 00778b70: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778b73: jl 0x778bbc */ if ((fS!=fO)) goto L_00778bbc;
L_00778b75:; BB(0x00778b75);
    /* 00778b75: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778b78: jg 0x778bbc */ if ((!fZ&&fS==fO)) goto L_00778bbc;
L_00778b7a:; BB(0x00778b7a);
    /* 00778b7a: movsx eax, word ptr [edi + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00778b81: fld dword ptr [edi + 0x26c] */ FPUSH(R_F32((u32)(r_edi+0x26cu)));
    /* 00778b87: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00778b8a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778b8d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778b8f: fchs  */ ST(0) = -ST(0);
    /* 00778b91: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778b93: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778b97: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778b9c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778ba1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778ba5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778ba9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778bad: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778bb1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778bb5: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00778bbc:; BB(0x00778bbc);
    /* 00778bbc: mov dword ptr [edi + 0x268], 0x11 */ W32((u32)(r_edi+0x268u), 0x11u);
    /* 00778bc6: and edx, 0xffffffc3 */ {  u32 a = r_edx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00778bc9: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00778bcc: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00778bcf: mov dword ptr [edi + 0x26c], 0 */ W32((u32)(r_edi+0x26cu), 0x0u);
    /* 00778bd9: mov dword ptr [edi + 0x270], 0xd2 */ W32((u32)(r_edi+0x270u), 0xd2u);
L_00778be3:; BB(0x00778be3);
    /* 00778be3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778be6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00778be7: ret  */ FN_RET(0x00778b10); r_esp += 4; return;
}

void f_00778be8(void) /* sub_778BE8 */
{
    FN_ENTER(0x00778be8);
    /* 00778be8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00778be9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00778bec: mov edi, ecx */ r_edi = r_ecx;
    /* 00778bee: mov eax, dword ptr [edi + 0x2e8] */ r_eax = R32((u32)(r_edi+0x2e8u));
    /* 00778bf4: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778bf6: jne 0x778cba */ if (!fZ) goto L_00778cba;
L_00778bfc:; BB(0x00778bfc);
    /* 00778bfc: movzx eax, word ptr [edi + 0x11c] */ r_eax = (u32)R16((u32)(r_edi+0x11cu));
    /* 00778c03: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778c05: jne 0x778cba */ if (!fZ) goto L_00778cba;
L_00778c0b:; BB(0x00778c0b);
    /* 00778c0b: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00778c0e: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778c14: jne 0x778c41 */ if (!fZ) goto L_00778c41;
L_00778c16:; BB(0x00778c16);
    /* 00778c16: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00778c18: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00778c1a: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00778c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778c21: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x778c26u); f_0050b7a4();
    /* 00778c26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778c2b: je 0x778c3e */ if (fZ) goto L_00778c3e;
L_00778c2d:; BB(0x00778c2d);
    /* 00778c2d: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00778c31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778c32: mov ecx, eax */ r_ecx = r_eax;
    /* 00778c34: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x778c39u); f_00508f14();
    /* 00778c39: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00778c3c: jmp 0x778c41 */ goto L_00778c41;
L_00778c3e:; BB(0x00778c3e);
    /* 00778c3e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
L_00778c41:; BB(0x00778c41);
    /* 00778c41: mov eax, dword ptr [edi + 0x268] */ r_eax = R32((u32)(r_edi+0x268u));
    /* 00778c47: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778c4a: jl 0x778c93 */ if ((fS!=fO)) goto L_00778c93;
L_00778c4c:; BB(0x00778c4c);
    /* 00778c4c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778c4f: jg 0x778c93 */ if ((!fZ&&fS==fO)) goto L_00778c93;
L_00778c51:; BB(0x00778c51);
    /* 00778c51: movsx eax, word ptr [edi + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00778c58: fld dword ptr [edi + 0x26c] */ FPUSH(R_F32((u32)(r_edi+0x26cu)));
    /* 00778c5e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00778c61: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778c64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778c66: fchs  */ ST(0) = -ST(0);
    /* 00778c68: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778c6a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778c6e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778c73: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778c78: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778c7c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778c80: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778c84: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778c88: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778c8c: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00778c93:; BB(0x00778c93);
    /* 00778c93: mov dword ptr [edi + 0x268], 0x12 */ W32((u32)(r_edi+0x268u), 0x12u);
    /* 00778c9d: and edx, 0xffffffc3 */ {  u32 a = r_edx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00778ca0: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00778ca3: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00778ca6: mov dword ptr [edi + 0x26c], 0 */ W32((u32)(r_edi+0x26cu), 0x0u);
    /* 00778cb0: mov dword ptr [edi + 0x270], 0x12c */ W32((u32)(r_edi+0x270u), 0x12cu);
L_00778cba:; BB(0x00778cba);
    /* 00778cba: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778cbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00778cbe: ret  */ FN_RET(0x00778be8); r_esp += 4; return;
}

void f_00778cc0(void) /* sub_778CC0 */
{
    FN_ENTER(0x00778cc0);
    /* 00778cc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00778cc1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00778cc4: mov esi, ecx */ r_esi = r_ecx;
    /* 00778cc6: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00778cc9: test ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778ccf: jne 0x778e37 */ if (!fZ) goto L_00778e37;
L_00778cd5:; BB(0x00778cd5);
    /* 00778cd5: test ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778cdb: jne 0x778e37 */ if (!fZ) goto L_00778e37;
L_00778ce1:; BB(0x00778ce1);
    /* 00778ce1: movzx eax, word ptr [esi + 0x11c] */ r_eax = (u32)R16((u32)(r_esi+0x11cu));
    /* 00778ce8: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778cea: jne 0x778e37 */ if (!fZ) goto L_00778e37;
L_00778cf0:; BB(0x00778cf0);
    /* 00778cf0: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778cf3: jne 0x778e29 */ if (!fZ) goto L_00778e29;
L_00778cf9:; BB(0x00778cf9);
    /* 00778cf9: test ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778cff: jne 0x778d4c */ if (!fZ) goto L_00778d4c;
L_00778d01:; BB(0x00778d01);
    /* 00778d01: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00778d05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778d07: je 0x778d1e */ if (fZ) goto L_00778d1e;
L_00778d09:; BB(0x00778d09);
    /* 00778d09: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00778d0e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00778d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778d13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00778d14: call 0x500fe8 */ r_esp -= 4; W32(r_esp, 0x778d19u); f_00500fe8();
    /* 00778d19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778d1c: jmp 0x778d37 */ goto L_00778d37;
L_00778d1e:; BB(0x00778d1e);
    /* 00778d1e: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00778d24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778d26: je 0x778d37 */ if (fZ) goto L_00778d37;
L_00778d28:; BB(0x00778d28);
    /* 00778d28: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00778d2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778d2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00778d2f: call 0x500fe8 */ r_esp -= 4; W32(r_esp, 0x778d34u); f_00500fe8();
    /* 00778d34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00778d37:; BB(0x00778d37);
    /* 00778d37: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00778d3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778d3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778d3f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00778d41: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x778d46u); f_00814298();
    /* 00778d46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778d49: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
L_00778d4c:; BB(0x00778d4c);
    /* 00778d4c: mov eax, dword ptr [esi + 0x268] */ r_eax = R32((u32)(r_esi+0x268u));
    /* 00778d52: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778d55: jl 0x778db4 */ if ((fS!=fO)) goto L_00778db4;
L_00778d57:; BB(0x00778d57);
    /* 00778d57: movsx edx, word ptr [esi + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2c8u));
    /* 00778d5e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778d61: jle 0x778d72 */ if ((fZ||fS!=fO)) goto L_00778d72;
L_00778d63:; BB(0x00778d63);
    /* 00778d63: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00778d66: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778d69: movsx edx, word ptr [esi + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2d0u));
    /* 00778d70: jmp 0x778dca */ goto L_00778dca;
L_00778d72:; BB(0x00778d72);
    /* 00778d72: fld dword ptr [esi + 0x26c] */ FPUSH(R_F32((u32)(r_esi+0x26cu)));
    /* 00778d78: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00778d7c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00778d80: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778d82: fchs  */ ST(0) = -ST(0);
    /* 00778d84: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00778d86: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00778d8a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00778d8f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778d94: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00778d98: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00778d9c: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778da0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778da4: movzx eax, word ptr [esi + 0x2d0] */ r_eax = (u32)R16((u32)(r_esi+0x2d0u));
    /* 00778dab: add eax, dword ptr [esp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00778daf: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00778db2: jmp 0x778dca */ goto L_00778dca;
L_00778db4:; BB(0x00778db4);
    /* 00778db4: movsx eax, word ptr [esi + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2c8u));
    /* 00778dbb: movsx edx, word ptr [esi + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2d0u));
    /* 00778dc2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00778dc6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
L_00778dca:; BB(0x00778dca);
    /* 00778dca: fmul dword ptr [0x97810c] */ ST(0) = ST(0) * R_F32((u32)(0x97810cu));
    /* 00778dd0: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00778dd4: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00778dd9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778dde: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00778de2: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00778de6: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778dea: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778dee: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00778df2: mov dword ptr [esi + 0x268], 2 */ W32((u32)(r_esi+0x268u), 0x2u);
    /* 00778dfc: and ecx, 0xffffffc3 */ {  u32 a = r_ecx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00778dff: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00778e02: mov dword ptr [esi + 0x26c], 0xbe99999a */ W32((u32)(r_esi+0x26cu), 0xbe99999au);
    /* 00778e0c: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 00778e0f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00778e11: mov word ptr [esi + 0x2d0], ax */ W16((u32)(r_esi+0x2d0u), (u16)r_eax);
    /* 00778e18: mov dword ptr [esi + 0x270], 0x96 */ W32((u32)(r_esi+0x270u), 0x96u);
    /* 00778e22: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778e25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00778e26: ret 4 */ FN_RET(0x00778cc0); r_esp += 8; return;
L_00778e29:; BB(0x00778e29);
    /* 00778e29: mov eax, dword ptr [esi + 0x270] */ r_eax = R32((u32)(r_esi+0x270u));
    /* 00778e2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00778e31: jle 0x778cf9 */ if ((fZ||fS!=fO)) goto L_00778cf9;
L_00778e37:; BB(0x00778e37);
    /* 00778e37: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778e3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00778e3b: ret 4 */ FN_RET(0x00778cc0); r_esp += 8; return;
}

void f_00778e40(void) /* sub_778E40 */
{
    FN_ENTER(0x00778e40);
    /* 00778e40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00778e41: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00778e44: mov edi, ecx */ r_edi = r_ecx;
    /* 00778e46: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00778e4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778e4c: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778e52: jl 0x778e83 */ if ((fS!=fO)) goto L_00778e83;
L_00778e54:; BB(0x00778e54);
    /* 00778e54: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778e5a: jge 0x778e83 */ if ((fS==fO)) goto L_00778e83;
L_00778e5c:; BB(0x00778e5c);
    /* 00778e5c: mov ecx, dword ptr [edi + 0x2e8] */ r_ecx = R32((u32)(r_edi+0x2e8u));
    /* 00778e62: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778e65: je 0x778e83 */ if (fZ) goto L_00778e83;
L_00778e67:; BB(0x00778e67);
    /* 00778e67: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00778e6a: test ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778e70: jne 0x778e83 */ if (!fZ) goto L_00778e83;
L_00778e72:; BB(0x00778e72);
    /* 00778e72: movzx ecx, word ptr [edi + 0x11c] */ r_ecx = (u32)R16((u32)(r_edi+0x11cu));
    /* 00778e79: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778e7c: jne 0x778e83 */ if (!fZ) goto L_00778e83;
L_00778e7e:; BB(0x00778e7e);
    /* 00778e7e: mov eax, 1 */ r_eax = 0x1u;
L_00778e83:; BB(0x00778e83);
    /* 00778e83: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778e89: jge 0x778e97 */ if ((fS==fO)) goto L_00778e97;
L_00778e8b:; BB(0x00778e8b);
    /* 00778e8b: movzx ecx, word ptr [edi + 0x11c] */ r_ecx = (u32)R16((u32)(r_edi+0x11cu));
    /* 00778e92: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00778e95: je 0x778e9f */ if (fZ) goto L_00778e9f;
L_00778e97:; BB(0x00778e97);
    /* 00778e97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778e99: je 0x778fbe */ if (fZ) goto L_00778fbe;
L_00778e9f:; BB(0x00778e9f);
    /* 00778e9f: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00778ea2: mov eax, ecx */ r_eax = r_ecx;
    /* 00778ea4: and eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00778ea9: jne 0x778eeb */ if (!fZ) goto L_00778eeb;
L_00778eab:; BB(0x00778eab);
    /* 00778eab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778ead: jne 0x778eeb */ if (!fZ) goto L_00778eeb;
L_00778eaf:; BB(0x00778eaf);
    /* 00778eaf: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00778eb1: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00778eb3: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 00778eb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778eba: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x778ebfu); f_0050b7a4();
    /* 00778ebf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778ec4: je 0x778ed2 */ if (fZ) goto L_00778ed2;
L_00778ec6:; BB(0x00778ec6);
    /* 00778ec6: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00778eca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778ecb: mov ecx, eax */ r_ecx = r_eax;
    /* 00778ecd: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x778ed2u); f_00508f14();
L_00778ed2:; BB(0x00778ed2);
    /* 00778ed2: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00778ed5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778ed9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778eda: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00778edc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x778ee1u); f_00814298();
    /* 00778ee1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00778ee4: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00778ee8: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
L_00778eeb:; BB(0x00778eeb);
    /* 00778eeb: mov eax, dword ptr [edi + 0x268] */ r_eax = R32((u32)(r_edi+0x268u));
    /* 00778ef1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778ef4: jl 0x778f3d */ if ((fS!=fO)) goto L_00778f3d;
L_00778ef6:; BB(0x00778ef6);
    /* 00778ef6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778ef9: jg 0x778f3d */ if ((!fZ&&fS==fO)) goto L_00778f3d;
L_00778efb:; BB(0x00778efb);
    /* 00778efb: movsx eax, word ptr [edi + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00778f02: fld dword ptr [edi + 0x26c] */ FPUSH(R_F32((u32)(r_edi+0x26cu)));
    /* 00778f08: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00778f0b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778f0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778f10: fchs  */ ST(0) = -ST(0);
    /* 00778f12: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778f14: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778f18: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778f1d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778f22: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778f26: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778f2a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778f2e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778f32: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778f36: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00778f3d:; BB(0x00778f3d);
    /* 00778f3d: mov dword ptr [edi + 0x268], 3 */ W32((u32)(r_edi+0x268u), 0x3u);
    /* 00778f47: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778f4d: jge 0x778f5b */ if ((fS==fO)) goto L_00778f5b;
L_00778f4f:; BB(0x00778f4f);
    /* 00778f4f: mov dword ptr [edi + 0x26c], 0 */ W32((u32)(r_edi+0x26cu), 0x0u);
    /* 00778f59: jmp 0x778f65 */ goto L_00778f65;
L_00778f5b:; BB(0x00778f5b);
    /* 00778f5b: mov dword ptr [edi + 0x26c], 0xbe19999a */ W32((u32)(r_edi+0x26cu), 0xbe19999au);
L_00778f65:; BB(0x00778f65);
    /* 00778f65: mov dword ptr [edi + 0x270], 0x12c */ W32((u32)(r_edi+0x270u), 0x12cu);
    /* 00778f6f: and ecx, 0xffffffc3 */ {  u32 a = r_ecx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00778f72: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00778f75: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 00778f78: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778f7e: jl 0x778fbe */ if ((fS!=fO)) goto L_00778fbe;
L_00778f80:; BB(0x00778f80);
    /* 00778f80: movsx edx, word ptr [edi + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00778f87: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00778f8b: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00778f8f: fmul dword ptr [0x978100] */ ST(0) = ST(0) * R_F32((u32)(0x978100u));
    /* 00778f95: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778f99: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778f9e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778fa3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778fa7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778fab: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778faf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778fb3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778fb7: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00778fbe:; BB(0x00778fbe);
    /* 00778fbe: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778fc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00778fc2: ret  */ FN_RET(0x00778e40); r_esp += 4; return;
}

void f_00778eef(void)
{
    FN_ENTER(0x00778eef);
    /* 00778eef: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00778ef1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778ef4: jl 0x778f3d */ if ((fS!=fO)) goto L_00778f3d;
L_00778ef6:; BB(0x00778ef6);
    /* 00778ef6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778ef9: jg 0x778f3d */ if ((!fZ&&fS==fO)) goto L_00778f3d;
L_00778efb:; BB(0x00778efb);
    /* 00778efb: movsx eax, word ptr [edi + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00778f02: fld dword ptr [edi + 0x26c] */ FPUSH(R_F32((u32)(r_edi+0x26cu)));
    /* 00778f08: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00778f0b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778f0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778f10: fchs  */ ST(0) = -ST(0);
    /* 00778f12: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778f14: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778f18: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778f1d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778f22: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778f26: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778f2a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778f2e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778f32: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778f36: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00778f3d:; BB(0x00778f3d);
    /* 00778f3d: mov dword ptr [edi + 0x268], 3 */ W32((u32)(r_edi+0x268u), 0x3u);
    /* 00778f47: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778f4d: jge 0x778f5b */ if ((fS==fO)) goto L_00778f5b;
L_00778f4f:; BB(0x00778f4f);
    /* 00778f4f: mov dword ptr [edi + 0x26c], 0 */ W32((u32)(r_edi+0x26cu), 0x0u);
    /* 00778f59: jmp 0x778f65 */ goto L_00778f65;
L_00778f5b:; BB(0x00778f5b);
    /* 00778f5b: mov dword ptr [edi + 0x26c], 0xbe19999a */ W32((u32)(r_edi+0x26cu), 0xbe19999au);
L_00778f65:; BB(0x00778f65);
    /* 00778f65: mov dword ptr [edi + 0x270], 0x12c */ W32((u32)(r_edi+0x270u), 0x12cu);
    /* 00778f6f: and ecx, 0xffffffc3 */ {  u32 a = r_ecx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00778f72: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00778f75: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 00778f78: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00778f7e: jl 0x778fbe */ if ((fS!=fO)) goto L_00778fbe;
L_00778f80:; BB(0x00778f80);
    /* 00778f80: movsx edx, word ptr [edi + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00778f87: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00778f8b: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00778f8f: fmul dword ptr [0x978100] */ ST(0) = ST(0) * R_F32((u32)(0x978100u));
    /* 00778f95: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778f99: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778f9e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778fa3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778fa7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00778fab: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00778faf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00778fb3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00778fb7: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00778fbe:; BB(0x00778fbe);
    /* 00778fbe: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00778fc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00778fc2: ret  */ FN_RET(0x00778eef); r_esp += 4; return;
}

void f_00778fc4(void) /* sub_778FC4 */
{
    FN_ENTER(0x00778fc4);
    /* 00778fc4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00778fc7: mov eax, dword ptr [ecx + 0x25c] */ r_eax = R32((u32)(r_ecx+0x25cu));
    /* 00778fcd: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00778fd0: jne 0x779014 */ if (!fZ) goto L_00779014;
L_00778fd2:; BB(0x00778fd2);
    /* 00778fd2: movsx edx, word ptr [ecx + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c8u));
    /* 00778fd9: fld dword ptr [ecx + 0x260] */ FPUSH(R_F32((u32)(r_ecx+0x260u)));
    /* 00778fdf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00778fe2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00778fe5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00778fe7: fchs  */ ST(0) = -ST(0);
    /* 00778fe9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00778feb: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00778fef: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00778ff4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00778ff9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00778ffd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779001: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779005: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779009: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0077900d: add word ptr [ecx + 0x2d0], ax */ { u32 ad = (u32)(r_ecx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00779014:; BB(0x00779014);
    /* 00779014: mov eax, dword ptr [ecx + 0x268] */ r_eax = R32((u32)(r_ecx+0x268u));
    /* 0077901a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077901d: jl 0x779068 */ if ((fS!=fO)) goto L_00779068;
L_0077901f:; BB(0x0077901f);
    /* 0077901f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00779022: jg 0x779068 */ if ((!fZ&&fS==fO)) goto L_00779068;
L_00779024:; BB(0x00779024);
    /* 00779024: movsx edx, word ptr [ecx + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c8u));
    /* 0077902b: fld dword ptr [ecx + 0x26c] */ FPUSH(R_F32((u32)(r_ecx+0x26cu)));
    /* 00779031: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00779035: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779039: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077903b: fchs  */ ST(0) = -ST(0);
    /* 0077903d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077903f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779043: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00779048: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077904d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779051: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779055: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779059: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077905d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779061: add word ptr [ecx + 0x2d0], ax */ { u32 ad = (u32)(r_ecx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00779068:; BB(0x00779068);
    /* 00779068: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0077906b: mov dword ptr [ecx + 0x260], 0 */ W32((u32)(r_ecx+0x260u), 0x0u);
    /* 00779075: and eax, 0xffffffc0 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00779078: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0077907b: mov dword ptr [ecx + 0x26c], 0 */ W32((u32)(r_ecx+0x26cu), 0x0u);
    /* 00779085: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00779088: mov dword ptr [ecx + 0x338], eax */ W32((u32)(r_ecx+0x338u), r_eax);
    /* 0077908e: mov eax, dword ptr [ecx + 0x274] */ r_eax = R32((u32)(r_ecx+0x274u));
    /* 00779094: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00779096: mov dword ptr [ecx + 0x25c], edx */ W32((u32)(r_ecx+0x25cu), r_edx);
    /* 0077909c: mov dword ptr [ecx + 0x264], edx */ W32((u32)(r_ecx+0x264u), r_edx);
    /* 007790a2: mov dword ptr [ecx + 0x268], edx */ W32((u32)(r_ecx+0x268u), r_edx);
    /* 007790a8: mov dword ptr [ecx + 0x270], edx */ W32((u32)(r_ecx+0x270u), r_edx);
    /* 007790ae: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007790b1: jne 0x77914d */ if (!fZ) goto L_0077914d;
L_007790b7:; BB(0x007790b7);
    /* 007790b7: movsx edx, word ptr [ecx + 0x2c4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c4u));
    /* 007790be: fld dword ptr [ecx + 0x278] */ FPUSH(R_F32((u32)(r_ecx+0x278u)));
    /* 007790c4: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007790c8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 007790cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007790ce: fchs  */ ST(0) = -ST(0);
    /* 007790d0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007790d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007790d4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007790d8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007790dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007790e2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007790e6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007790ea: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007790ee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007790f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007790f4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007790f8: add word ptr [ecx + 0x2cc], ax */ { u32 ad = (u32)(r_ecx+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007790ff: movsx eax, word ptr [ecx + 0x2c6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c6u));
    /* 00779106: mov dword ptr [ecx + 0x274], edx */ W32((u32)(r_ecx+0x274u), r_edx);
    /* 0077910c: mov dword ptr [ecx + 0x27c], edx */ W32((u32)(r_ecx+0x27cu), r_edx);
    /* 00779112: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779116: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0077911a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077911c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779120: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00779125: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077912a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0077912e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779132: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779136: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077913a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0077913e: add word ptr [ecx + 0x2ce], ax */ { u32 ad = (u32)(r_ecx+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779145: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00779147: mov dword ptr [ecx + 0x278], eax */ W32((u32)(r_ecx+0x278u), r_eax);
L_0077914d:; BB(0x0077914d);
    /* 0077914d: mov eax, dword ptr [ecx + 0x280] */ r_eax = R32((u32)(r_ecx+0x280u));
    /* 00779153: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779156: jne 0x7791b2 */ if (!fZ) goto L_007791b2;
L_00779158:; BB(0x00779158);
    /* 00779158: movsx edx, word ptr [ecx + 0x2ca] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cau));
    /* 0077915f: fld dword ptr [ecx + 0x284] */ FPUSH(R_F32((u32)(r_ecx+0x284u)));
    /* 00779165: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00779169: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0077916d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077916f: fchs  */ ST(0) = -ST(0);
    /* 00779171: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00779173: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779177: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077917c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779181: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779185: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779189: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077918d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779191: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00779193: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779197: add word ptr [ecx + 0x2d2], ax */ { u32 ad = (u32)(r_ecx+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0077919e: mov dword ptr [ecx + 0x280], edx */ W32((u32)(r_ecx+0x280u), r_edx);
    /* 007791a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007791a6: mov dword ptr [ecx + 0x284], eax */ W32((u32)(r_ecx+0x284u), r_eax);
    /* 007791ac: mov dword ptr [ecx + 0x288], edx */ W32((u32)(r_ecx+0x288u), r_edx);
L_007791b2:; BB(0x007791b2);
    /* 007791b2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007791b5: ret  */ FN_RET(0x00778fc4); r_esp += 4; return;
}

