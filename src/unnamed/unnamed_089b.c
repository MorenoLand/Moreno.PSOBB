#include "protos.h"

void f_0089b066(void) /* sub_89B066 */
{
    FN_ENTER(0x0089b066);
    /* 0089b066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b067: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b069: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b06c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b06f: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b076: je 0x89b086 */ if (fZ) goto L_0089b086;
L_0089b078:; BB(0x0089b078);
    /* 0089b078: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b07b: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b080u); f_00899f81();
    /* 0089b080: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b083: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b086:; BB(0x0089b086);
    /* 0089b086: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b08c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b08f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b090: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b093: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b096: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b097: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089b09d: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b0a0: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b0a2: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b0a5: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b0a8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b0ab: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b0ae: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b0b1: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089b0b4: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b0b9u); f_0089a712();
    /* 0089b0b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b0bc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089b0be: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b0c4: jbe 0x89b172 */ if ((fC||fZ)) goto L_0089b172;
L_0089b0ca:; BB(0x0089b0ca);
    /* 0089b0ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b0cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089b0cd:; BB(0x0089b0cd);
    /* 0089b0cd: mov eax, esi */ r_eax = r_esi;
    /* 0089b0cf: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b0d2: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089b0d5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b0d8: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089b0db: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089b0de: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089b0e4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b0e6: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b0e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b0eb: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b0ee: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b0f1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b0f4: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089b0f8: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089b0fb: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089b101: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b104: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b107: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b10a: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b10d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b110: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0089b113: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b116: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0089b11a: fmul dword ptr [0x99ba98] */ ST(0) = ST(0) * R_F32((u32)(0x99ba98u));
    /* 0089b120: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b123: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b126: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b129: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b12c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089b12f: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089b132: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089b135: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b138: fadd dword ptr [ecx + eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax+0xcu));
    /* 0089b13c: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b13f: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b142: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b145: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089b148: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b14b: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b14d: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b150: or eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b153: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b156: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b159: or eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b15c: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0089b15f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b162: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b163: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b164: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b165: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b16b: jb 0x89b0cd */ if (fC) goto L_0089b0cd;
L_0089b171:; BB(0x0089b171);
    /* 0089b171: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089b172:; BB(0x0089b172);
    /* 0089b172: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b177: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089b17a: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 0089b17d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b17e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b17f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b180: ret 0xc */ FN_RET(0x0089b066); r_esp += 16; return;
}

void f_0089b183(void) /* sub_89B183 */
{
    FN_ENTER(0x0089b183);
    /* 0089b183: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b184: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b186: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b189: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b18c: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b193: je 0x89b1a3 */ if (fZ) goto L_0089b1a3;
L_0089b195:; BB(0x0089b195);
    /* 0089b195: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b198: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b19du); f_00899f81();
    /* 0089b19d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b1a0: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b1a3:; BB(0x0089b1a3);
    /* 0089b1a3: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b1a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b1ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b1ad: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b1b0: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b1b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b1b4: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089b1ba: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b1bd: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b1bf: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b1c2: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b1c5: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b1c8: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b1cb: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b1ce: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089b1d1: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b1d6u); f_0089a712();
    /* 0089b1d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b1d9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089b1db: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b1e1: jbe 0x89b295 */ if ((fC||fZ)) goto L_0089b295;
L_0089b1e7:; BB(0x0089b1e7);
    /* 0089b1e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b1e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089b1ea:; BB(0x0089b1ea);
    /* 0089b1ea: mov eax, esi */ r_eax = r_esi;
    /* 0089b1ec: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b1ef: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089b1f2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b1f5: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089b1f8: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089b1fb: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089b201: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b203: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b206: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b208: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b20b: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b20e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b211: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089b215: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089b218: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089b21e: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b221: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b224: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b227: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b22a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b22d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0089b230: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b233: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0089b237: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089b23d: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b240: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b243: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b246: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b249: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089b24c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089b24f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b252: fld dword ptr [ecx + eax + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0xcu)));
    /* 0089b256: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089b25c: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b25f: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b262: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b265: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b268: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089b26b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b26e: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b270: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b273: or eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b276: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b279: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b27c: or eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b27f: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0089b282: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b285: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b286: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b287: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b288: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b28e: jb 0x89b1ea */ if (fC) goto L_0089b1ea;
L_0089b294:; BB(0x0089b294);
    /* 0089b294: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089b295:; BB(0x0089b295);
    /* 0089b295: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b29a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089b29d: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 0089b2a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b2a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b2a2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b2a3: ret 0xc */ FN_RET(0x0089b183); r_esp += 16; return;
}

void f_0089b2a6(void) /* sub_89B2A6 */
{
    FN_ENTER(0x0089b2a6);
    /* 0089b2a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b2a7: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b2a9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b2ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089b2ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b2ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b2af: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089b2b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b2b4: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b2ba: je 0x89b2ca */ if (fZ) goto L_0089b2ca;
L_0089b2bc:; BB(0x0089b2bc);
    /* 0089b2bc: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b2bf: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b2c4u); f_00899f81();
    /* 0089b2c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b2c7: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b2ca:; BB(0x0089b2ca);
    /* 0089b2ca: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b2d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b2d3: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089b2d9: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b2dc: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b2df: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b2e2: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b2e4: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b2e7: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b2ea: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b2ed: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b2f0: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b2f3: lea ebx, [ecx + eax*4] */ r_ebx = (u32)(r_ecx+r_eax*4);
    /* 0089b2f6: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b2fbu); f_0089a712();
    /* 0089b2fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b2fe: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b304: jbe 0x89b392 */ if ((fC||fZ)) goto L_0089b392;
L_0089b30a:; BB(0x0089b30a);
    /* 0089b30a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0089b30c:; BB(0x0089b30c);
    /* 0089b30c: mov eax, edi */ r_eax = r_edi;
    /* 0089b30e: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b311: fld dword ptr [ebx + eax*4] */ FPUSH(R_F32((u32)(r_ebx+r_eax*4)));
    /* 0089b314: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b317: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089b31a: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 0089b31d: fmul dword ptr [0x99baa0] */ ST(0) = ST(0) * R_F32((u32)(0x99baa0u));
    /* 0089b323: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b325: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b328: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b32a: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b32d: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b330: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089b333: fld dword ptr [esi + ecx + 4] */ FPUSH(R_F32((u32)(r_esi+r_ecx+0x4u)));
    /* 0089b337: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089b33a: fmul dword ptr [0x99baa0] */ ST(0) = ST(0) * R_F32((u32)(0x99baa0u));
    /* 0089b340: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b343: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b346: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b349: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b34c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b34f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0089b352: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089b355: fld dword ptr [esi + ecx + 8] */ FPUSH(R_F32((u32)(r_esi+r_ecx+0x8u)));
    /* 0089b359: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 0089b35f: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b362: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b365: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b368: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b36b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089b36e: shl al, 3 */ { u32 c = (3u) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089b371: or al, byte ptr [ebp - 0x1c] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebp+0xffffffe4u)); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089b374: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b377: shl al, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089b37a: or al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089b37c: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0089b37e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b381: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b382: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089b383: cmp edi, dword ptr [eax + 0x1058] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b389: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0089b38c: jb 0x89b30c */ if (fC) goto L_0089b30c;
L_0089b392:; BB(0x0089b392);
    /* 0089b392: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b397: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089b39a: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0089b39d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b39e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b39f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089b3a0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b3a1: ret 0xc */ FN_RET(0x0089b2a6); r_esp += 16; return;
}

void f_0089b3a4(void) /* sub_89B3A4 */
{
    FN_ENTER(0x0089b3a4);
    /* 0089b3a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b3a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b3a7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b3aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089b3ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b3ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b3ad: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089b3af: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b3b2: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b3b8: je 0x89b3c8 */ if (fZ) goto L_0089b3c8;
L_0089b3ba:; BB(0x0089b3ba);
    /* 0089b3ba: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b3bd: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b3c2u); f_00899f81();
    /* 0089b3c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b3c5: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b3c8:; BB(0x0089b3c8);
    /* 0089b3c8: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b3ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b3d1: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089b3d7: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b3da: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b3dd: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b3e0: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b3e2: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b3e5: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b3e8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b3eb: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b3ee: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b3f1: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 0089b3f4: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b3f9u); f_0089a712();
    /* 0089b3f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b3fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b3fe: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b404: jbe 0x89b43b */ if ((fC||fZ)) goto L_0089b43b;
L_0089b406:; BB(0x0089b406);
    /* 0089b406: mov eax, ecx */ r_eax = r_ecx;
    /* 0089b408: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b40b: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0089b40e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b411: fld dword ptr [edi + eax + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_eax+0xcu)));
    /* 0089b415: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089b41b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089b41d: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089b420: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089b423: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b426: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089b429: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0089b42b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b42e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b42f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b430: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089b433: cmp ecx, dword ptr [eax + 0x1058] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b439: jb 0x89b406 */ if (fC) goto L_0089b406;
L_0089b43b:; BB(0x0089b43b);
    /* 0089b43b: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b440: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089b443: fldcw word ptr [ebp - 0xc] */ fcw = R16((u32)(r_ebp+0xfffffff4u));
    /* 0089b446: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b448: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089b449: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b44a: ret 0xc */ FN_RET(0x0089b3a4); r_esp += 16; return;
}

void f_0089b44d(void) /* sub_89B44D */
{
    FN_ENTER(0x0089b44d);
    /* 0089b44d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b44e: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b450: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b453: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b456: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b45d: je 0x89b46d */ if (fZ) goto L_0089b46d;
L_0089b45f:; BB(0x0089b45f);
    /* 0089b45f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b462: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b467u); f_00899f81();
    /* 0089b467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b46a: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b46d:; BB(0x0089b46d);
    /* 0089b46d: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b473: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b476: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b477: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b47a: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b47d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b47e: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089b484: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b487: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b489: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b48c: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b48f: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b492: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b495: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b498: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089b49b: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b4a0u); f_0089a712();
    /* 0089b4a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b4a3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089b4a5: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b4ab: jbe 0x89b55f */ if ((fC||fZ)) goto L_0089b55f;
L_0089b4b1:; BB(0x0089b4b1);
    /* 0089b4b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089b4b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089b4b4:; BB(0x0089b4b4);
    /* 0089b4b4: mov ecx, esi */ r_ecx = r_esi;
    /* 0089b4b6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b4b9: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0089b4bc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089b4bf: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089b4c2: fld dword ptr [eax + ecx] */ FPUSH(R_F32((u32)(r_eax+r_ecx)));
    /* 0089b4c5: fmul dword ptr [0x99baa0] */ ST(0) = ST(0) * R_F32((u32)(0x99baa0u));
    /* 0089b4cb: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b4cd: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b4d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b4d2: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b4d5: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b4d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089b4db: fld dword ptr [eax + ecx + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x4u)));
    /* 0089b4df: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089b4e2: fmul dword ptr [0x99baa0] */ ST(0) = ST(0) * R_F32((u32)(0x99baa0u));
    /* 0089b4e8: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b4eb: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b4ee: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b4f1: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b4f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b4f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0089b4fa: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089b4fd: fld dword ptr [eax + ecx + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0x8u)));
    /* 0089b501: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 0089b507: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b50a: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b50d: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b510: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b513: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089b516: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0089b519: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089b51c: fld dword ptr [eax + ecx + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_ecx+0xcu)));
    /* 0089b520: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089b526: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b529: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b52c: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b52f: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b532: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089b535: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089b538: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b53a: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089b53d: or ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b540: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089b543: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089b546: or ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b549: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0089b54c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b54f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b550: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b551: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b552: cmp esi, dword ptr [ecx + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b558: jb 0x89b4b4 */ if (fC) goto L_0089b4b4;
L_0089b55e:; BB(0x0089b55e);
    /* 0089b55e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089b55f:; BB(0x0089b55f);
    /* 0089b55f: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b564: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089b567: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 0089b56a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b56b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b56c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b56d: ret 0xc */ FN_RET(0x0089b44d); r_esp += 16; return;
}

void f_0089b570(void) /* sub_89B570 */
{
    FN_ENTER(0x0089b570);
    /* 0089b570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b571: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b573: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b576: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b579: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b580: je 0x89b590 */ if (fZ) goto L_0089b590;
L_0089b582:; BB(0x0089b582);
    /* 0089b582: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b585: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b58au); f_00899f81();
    /* 0089b58a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b58d: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b590:; BB(0x0089b590);
    /* 0089b590: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b596: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b599: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b59a: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b59d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b5a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b5a1: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089b5a7: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b5aa: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b5ac: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b5af: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b5b2: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b5b5: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b5b8: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b5bb: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089b5be: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b5c3u); f_0089a712();
    /* 0089b5c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b5c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089b5c8: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b5ce: jbe 0x89b660 */ if ((fC||fZ)) goto L_0089b660;
L_0089b5d4:; BB(0x0089b5d4);
    /* 0089b5d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b5d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089b5d7:; BB(0x0089b5d7);
    /* 0089b5d7: mov eax, esi */ r_eax = r_esi;
    /* 0089b5d9: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b5dc: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089b5df: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b5e2: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089b5e5: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089b5e8: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089b5ee: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b5f0: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b5f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b5f5: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b5f8: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b5fb: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089b5fe: fld dword ptr [ecx + ebx + 4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x4u)));
    /* 0089b602: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089b605: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089b60b: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b60e: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b611: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b614: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b617: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b61a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089b61d: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089b620: fld dword ptr [ecx + ebx + 8] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0x8u)));
    /* 0089b624: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089b62a: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b62d: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b630: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b633: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b636: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089b639: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b63c: or eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b63f: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b642: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b645: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b647: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0089b64a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b64d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b64e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b64f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b650: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b656: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0089b659: jb 0x89b5d7 */ if (fC) goto L_0089b5d7;
L_0089b65f:; BB(0x0089b65f);
    /* 0089b65f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089b660:; BB(0x0089b660);
    /* 0089b660: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b665: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089b668: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0089b66b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b66c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b66d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b66e: ret 0xc */ FN_RET(0x0089b570); r_esp += 16; return;
}

void f_0089b671(void) /* sub_89B671 */
{
    FN_ENTER(0x0089b671);
    /* 0089b671: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b672: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b674: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b677: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b67a: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b681: je 0x89b691 */ if (fZ) goto L_0089b691;
L_0089b683:; BB(0x0089b683);
    /* 0089b683: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b686: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b68bu); f_00899f81();
    /* 0089b68b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b68e: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b691:; BB(0x0089b691);
    /* 0089b691: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b697: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b69a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b69b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b69e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b6a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b6a2: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089b6a8: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b6ab: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b6ad: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b6b0: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b6b3: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b6b6: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b6b9: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b6bc: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089b6bf: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b6c4u); f_0089a712();
    /* 0089b6c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b6c7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089b6c9: cmp dword ptr [eax + 0x1058], esi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b6cf: jbe 0x89b783 */ if ((fC||fZ)) goto L_0089b783;
L_0089b6d5:; BB(0x0089b6d5);
    /* 0089b6d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b6d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089b6d8:; BB(0x0089b6d8);
    /* 0089b6d8: mov eax, esi */ r_eax = r_esi;
    /* 0089b6da: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b6dd: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089b6e0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b6e3: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089b6e6: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089b6e9: fmul dword ptr [0x99baa4] */ ST(0) = ST(0) * R_F32((u32)(0x99baa4u));
    /* 0089b6ef: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b6f1: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b6f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b6f6: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b6f9: fistp dword ptr [ebp - 0x10] */ W32((u32)(r_ebp+0xfffffff0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b6fc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089b6ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089b702: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b705: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089b709: fmul dword ptr [0x99baa4] */ ST(0) = ST(0) * R_F32((u32)(0x99baa4u));
    /* 0089b70f: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b712: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b715: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b718: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b71b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b71e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0089b721: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b724: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0089b728: fmul dword ptr [0x99baa4] */ ST(0) = ST(0) * R_F32((u32)(0x99baa4u));
    /* 0089b72e: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b731: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b734: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b737: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b73a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b73d: fld dword ptr [ecx + eax + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0xcu)));
    /* 0089b741: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089b744: fmul dword ptr [0x99b9e0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9e0u));
    /* 0089b74a: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089b74d: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089b750: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0089b753: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b756: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089b759: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b75c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b75e: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b761: or eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b764: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b767: shl eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b76a: or eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b76d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089b76f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b772: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b775: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b776: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b77c: jb 0x89b6d8 */ if (fC) goto L_0089b6d8;
L_0089b782:; BB(0x0089b782);
    /* 0089b782: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089b783:; BB(0x0089b783);
    /* 0089b783: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b788: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089b78b: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 0089b78e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b78f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b790: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b791: ret 0xc */ FN_RET(0x0089b671); r_esp += 16; return;
}

void f_0089b794(void) /* sub_89B794 */
{
    FN_ENTER(0x0089b794);
    /* 0089b794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b795: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b797: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b79a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089b79b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b79d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089b79f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b7a2: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b7a8: je 0x89b7b8 */ if (fZ) goto L_0089b7b8;
L_0089b7aa:; BB(0x0089b7aa);
    /* 0089b7aa: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b7ad: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b7b2u); f_00899f81();
    /* 0089b7b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b7b5: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b7b8:; BB(0x0089b7b8);
    /* 0089b7b8: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b7be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b7c1: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089b7c7: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b7ca: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b7cd: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b7d0: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b7d2: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b7d5: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b7d8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b7db: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b7de: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b7e1: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 0089b7e4: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b7e9u); f_0089a712();
    /* 0089b7e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b7ec: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b7f2: jbe 0x89b852 */ if ((fC||fZ)) goto L_0089b852;
L_0089b7f4:; BB(0x0089b7f4);
    /* 0089b7f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0089b7f6:; BB(0x0089b7f6);
    /* 0089b7f6: mov eax, edi */ r_eax = r_edi;
    /* 0089b7f8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b7fb: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0089b7fe: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b801: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0089b804: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089b807: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089b80d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b80f: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089b812: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b814: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089b817: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b81a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089b81d: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089b821: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089b824: fmul dword ptr [0x99baa8] */ ST(0) = ST(0) * R_F32((u32)(0x99baa8u));
    /* 0089b82a: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0089b82d: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089b830: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089b833: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b836: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b839: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089b83c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089b83e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089b840: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b843: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b846: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089b847: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b84a: cmp edi, dword ptr [eax + 0x1058] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b850: jb 0x89b7f6 */ if (fC) goto L_0089b7f6;
L_0089b852:; BB(0x0089b852);
    /* 0089b852: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b857: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089b85a: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 0089b85d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b85e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b85f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089b860: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b861: ret 0xc */ FN_RET(0x0089b794); r_esp += 16; return;
}

void f_0089b864(void) /* sub_89B864 */
{
    FN_ENTER(0x0089b864);
    /* 0089b864: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b865: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b867: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089b86a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089b86b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b86c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b86d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089b86f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089b872: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b878: je 0x89b888 */ if (fZ) goto L_0089b888;
L_0089b87a:; BB(0x0089b87a);
    /* 0089b87a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b87d: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b882u); f_00899f81();
    /* 0089b882: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b885: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089b888:; BB(0x0089b888);
    /* 0089b888: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b88e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089b891: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089b897: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b89a: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089b89d: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b8a0: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b8a2: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b8a5: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089b8a8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089b8ab: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089b8ae: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089b8b1: lea ebx, [ecx + eax*4] */ r_ebx = (u32)(r_ecx+r_eax*4);
    /* 0089b8b4: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89b8b9u); f_0089a712();
    /* 0089b8b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b8bc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089b8be: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b8c4: jbe 0x89b96a */ if ((fC||fZ)) goto L_0089b96a;
L_0089b8ca:; BB(0x0089b8ca);
    /* 0089b8ca: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 0089b8cd: jmp 0x89b8d1 */ goto L_0089b8d1;
L_0089b8cf:; BB(0x0089b8cf);
    /* 0089b8cf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0089b8d1:; BB(0x0089b8d1);
    /* 0089b8d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0089b8d3: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b8d6: fld dword ptr [ebx + ecx*4] */ FPUSH(R_F32((u32)(r_ebx+r_ecx*4)));
    /* 0089b8d9: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0089b8dc: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0089b8df: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0089b8e2: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
L_0089b8e5:; BB(0x0089b8e5);
    /* 0089b8e5: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0089b8e7: fsub dword ptr [ecx - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xfffffff8u));
    /* 0089b8ea: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0089b8ed: fsub dword ptr [ecx - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xfffffffcu));
    /* 0089b8f0: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0089b8f3: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0089b8f5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089b8f7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089b8f9: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089b8fb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0089b8fd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089b8ff: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089b901: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0089b903: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089b905: fcomp dword ptr [0x99baac] */ fx_compare(ST(0), R_F32((u32)(0x99baacu))); FPOP();
    /* 0089b90b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b90d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089b90f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b911: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089b914: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b916: jp 0x89b91e */ if (fP) goto L_0089b91e;
L_0089b918:; BB(0x0089b918);
    /* 0089b918: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089b91b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0089b91e:; BB(0x0089b91e);
    /* 0089b91e: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089b921: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b924: cmp dword ptr [ebp - 8], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089b92b: jb 0x89b8e5 */ if (fC) goto L_0089b8e5;
L_0089b92d:; BB(0x0089b92d);
    /* 0089b92d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089b930: fld dword ptr [eax + edi + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_edi+0xcu)));
    /* 0089b934: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089b93a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089b93c: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089b93f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b941: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089b944: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089b947: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089b94a: add dword ptr [ebp - 0xc], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089b94e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b950: mov ch, al */ r_ecx = (r_ecx & 0xffff00ffu) | ((((u8)r_eax) & 0xffu) << 8);
    /* 0089b952: or ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0089b955: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0089b958: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089b95b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b95c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b95d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089b95e: cmp esi, dword ptr [eax + 0x1058] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b964: jb 0x89b8cf */ if (fC) goto L_0089b8cf;
L_0089b96a:; BB(0x0089b96a);
    /* 0089b96a: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089b96f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089b972: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 0089b975: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089b976: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089b977: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089b978: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089b979: ret 0xc */ FN_RET(0x0089b864); r_esp += 16; return;
}

void f_0089b97c(void) /* sub_89B97C */
{
    FN_ENTER(0x0089b97c);
    /* 0089b97c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089b97d: mov ebp, esp */ r_ebp = r_esp;
    /* 0089b97f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b980: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089b982: cmp dword ptr [ecx + 0x1048], esi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089b988: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089b989: je 0x89b995 */ if (fZ) goto L_0089b995;
L_0089b98b:; BB(0x0089b98b);
    /* 0089b98b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089b98e: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89b993u); f_00899f81();
    /* 0089b993: jmp 0x89b998 */ goto L_0089b998;
L_0089b995:; BB(0x0089b995);
    /* 0089b995: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0089b998:; BB(0x0089b998);
    /* 0089b998: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089b99e: imul edx, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b9a2: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089b9a8: imul edi, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089b9ac: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b9ae: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089b9b1: cmp dword ptr [ecx + 0x1058], esi */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089b9b7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 0089b9ba: jbe 0x89ba3b */ if ((fC||fZ)) goto L_0089ba3b;
L_0089b9bc:; BB(0x0089b9bc);
    /* 0089b9bc: lea esi, [eax + 8] */ r_esi = (u32)(r_eax+0x8u);
    /* 0089b9bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089b9c0:; BB(0x0089b9c0);
    /* 0089b9c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089b9c2: mov dword ptr [ebp + 0xc], 0x7f7fffff */ W32((u32)(r_ebp+0xcu), 0x7f7fffffu);
    /* 0089b9c9: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 0089b9cc: lea edi, [ecx + 0x38] */ r_edi = (u32)(r_ecx+0x38u);
L_0089b9cf:; BB(0x0089b9cf);
    /* 0089b9cf: fld dword ptr [esi - 8] */ FPUSH(R_F32((u32)(r_esi+0xfffffff8u)));
    /* 0089b9d2: fsub dword ptr [edi - 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0xfffffff8u));
    /* 0089b9d5: fld dword ptr [esi - 4] */ FPUSH(R_F32((u32)(r_esi+0xfffffffcu)));
    /* 0089b9d8: fsub dword ptr [edi - 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0xfffffffcu));
    /* 0089b9db: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0089b9dd: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 0089b9df: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0089b9e2: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 0089b9e5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089b9e7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089b9e9: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0089b9eb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0089b9ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089b9ef: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0089b9f1: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0089b9f3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089b9f5: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0089b9f7: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0089b9f9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089b9fb: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0089b9fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089b9ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089ba01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089ba03: fcom dword ptr [ebp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xcu))); 
    /* 0089ba06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089ba08: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0089ba0b: jp 0x89ba15 */ if (fP) goto L_0089ba15;
L_0089ba0d:; BB(0x0089ba0d);
    /* 0089ba0d: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089ba10: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0089ba13: jmp 0x89ba17 */ goto L_0089ba17;
L_0089ba15:; BB(0x0089ba15);
    /* 0089ba15: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089ba17:; BB(0x0089ba17);
    /* 0089ba17: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089ba1a: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089ba1d: cmp dword ptr [ebp + 0x10], 0x100 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089ba24: jb 0x89b9cf */ if (fC) goto L_0089b9cf;
L_0089ba26:; BB(0x0089ba26);
    /* 0089ba26: mov byte ptr [edx], bl */ W8((u32)(r_edx), (u8)r_ebx);
    /* 0089ba28: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ba29: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089ba2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089ba2f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089ba32: cmp eax, dword ptr [ecx + 0x1058] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ba38: jb 0x89b9c0 */ if (fC) goto L_0089b9c0;
L_0089ba3a:; BB(0x0089ba3a);
    /* 0089ba3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089ba3b:; BB(0x0089ba3b);
    /* 0089ba3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089ba3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ba3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0089ba3e: ret 0xc */ FN_RET(0x0089b97c); r_esp += 16; return;
}

void f_0089ba41(void) /* sub_89BA41 */
{
    FN_ENTER(0x0089ba41);
    /* 0089ba41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089ba42: mov ebp, esp */ r_ebp = r_esp;
    /* 0089ba44: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089ba47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089ba48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ba49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ba4a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089ba4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089ba4f: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ba55: je 0x89ba65 */ if (fZ) goto L_0089ba65;
L_0089ba57:; BB(0x0089ba57);
    /* 0089ba57: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089ba5a: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89ba5fu); f_00899f81();
    /* 0089ba5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ba62: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089ba65:; BB(0x0089ba65);
    /* 0089ba65: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089ba6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089ba6e: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089ba74: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ba77: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089ba7a: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089ba7d: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ba7f: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089ba82: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089ba85: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089ba88: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089ba8b: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089ba8e: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 0089ba91: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89ba96u); f_0089a712();
    /* 0089ba96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089ba99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089ba9b: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089baa1: jbe 0x89baf4 */ if ((fC||fZ)) goto L_0089baf4;
L_0089baa3:; BB(0x0089baa3);
    /* 0089baa3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089baa6: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089baa8: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089baab: fmul dword ptr [0x99b9c8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c8u));
    /* 0089bab1: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089bab4: fmul dword ptr [0x99b9c4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c4u));
    /* 0089baba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089babc: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089babe: mov eax, ecx */ r_eax = r_ecx;
    /* 0089bac0: fmul dword ptr [0x99b9c0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c0u));
    /* 0089bac6: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089bac9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089bacb: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089bad1: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 0089bad4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089bad6: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089bad9: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089badc: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089badf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089bae2: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0089bae4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bae7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bae8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089bae9: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089baec: cmp ecx, dword ptr [eax + 0x1058] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089baf2: jb 0x89baa3 */ if (fC) goto L_0089baa3;
L_0089baf4:; BB(0x0089baf4);
    /* 0089baf4: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089baf9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089bafc: fldcw word ptr [ebp - 0xc] */ fcw = R16((u32)(r_ebp+0xfffffff4u));
    /* 0089baff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089bb00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089bb01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089bb02: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089bb03: ret 0xc */ FN_RET(0x0089ba41); r_esp += 16; return;
}

void f_0089bb06(void) /* sub_89BB06 */
{
    FN_ENTER(0x0089bb06);
    /* 0089bb06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089bb07: mov ebp, esp */ r_ebp = r_esp;
    /* 0089bb09: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089bb0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089bb0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bb0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bb0f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089bb11: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089bb14: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089bb1a: je 0x89bb2a */ if (fZ) goto L_0089bb2a;
L_0089bb1c:; BB(0x0089bb1c);
    /* 0089bb1c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089bb1f: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89bb24u); f_00899f81();
    /* 0089bb24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bb27: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089bb2a:; BB(0x0089bb2a);
    /* 0089bb2a: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089bb30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089bb33: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089bb39: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bb3c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089bb3f: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bb42: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bb44: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bb47: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089bb4a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089bb4d: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089bb50: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089bb53: lea ebx, [ecx + eax*4] */ r_ebx = (u32)(r_ecx+r_eax*4);
    /* 0089bb56: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89bb5bu); f_0089a712();
    /* 0089bb5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bb5e: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bb64: jbe 0x89bbea */ if ((fC||fZ)) goto L_0089bbea;
L_0089bb6a:; BB(0x0089bb6a);
    /* 0089bb6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0089bb6c:; BB(0x0089bb6c);
    /* 0089bb6c: mov eax, edi */ r_eax = r_edi;
    /* 0089bb6e: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089bb71: fld dword ptr [ebx + eax*4] */ FPUSH(R_F32((u32)(r_ebx+r_eax*4)));
    /* 0089bb74: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089bb77: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0089bb7a: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089bb7c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089bb7f: fmul dword ptr [0x99b9c8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c8u));
    /* 0089bb85: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089bb88: fmul dword ptr [0x99b9c4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c4u));
    /* 0089bb8e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089bb90: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089bb92: fmul dword ptr [0x99b9c0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c0u));
    /* 0089bb98: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089bb9a: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089bba0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089bba2: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089bba5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089bba7: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089bbaa: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bbad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089bbb0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0089bbb3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089bbb6: fld dword ptr [esi + eax + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_eax+0xcu)));
    /* 0089bbba: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089bbc0: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0089bbc3: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089bbc6: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089bbc9: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bbcc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089bbcf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089bbd1: mov ch, al */ r_ecx = (r_ecx & 0xffff00ffu) | ((((u8)r_eax) & 0xffu) << 8);
    /* 0089bbd3: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089bbd6: or ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0089bbd9: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0089bbdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bbdf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bbe0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bbe1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089bbe2: cmp edi, dword ptr [eax + 0x1058] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bbe8: jb 0x89bb6c */ if (fC) goto L_0089bb6c;
L_0089bbea:; BB(0x0089bbea);
    /* 0089bbea: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089bbef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089bbf2: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 0089bbf5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089bbf6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089bbf7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089bbf8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089bbf9: ret 0xc */ FN_RET(0x0089bb06); r_esp += 16; return;
}

void f_0089bbfc(void) /* sub_89BBFC */
{
    FN_ENTER(0x0089bbfc);
    /* 0089bbfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089bbfd: mov ebp, esp */ r_ebp = r_esp;
    /* 0089bbff: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089bc02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089bc03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bc04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bc05: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089bc07: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089bc0a: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089bc10: je 0x89bc20 */ if (fZ) goto L_0089bc20;
L_0089bc12:; BB(0x0089bc12);
    /* 0089bc12: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089bc15: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89bc1au); f_00899f81();
    /* 0089bc1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bc1d: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089bc20:; BB(0x0089bc20);
    /* 0089bc20: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089bc26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089bc29: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089bc2f: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bc32: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089bc35: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bc38: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bc3a: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bc3d: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089bc40: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089bc43: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089bc46: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089bc49: lea ebx, [ecx + eax*4] */ r_ebx = (u32)(r_ecx+r_eax*4);
    /* 0089bc4c: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89bc51u); f_0089a712();
    /* 0089bc51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bc54: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bc5a: jbe 0x89bcd5 */ if ((fC||fZ)) goto L_0089bcd5;
L_0089bc5c:; BB(0x0089bc5c);
    /* 0089bc5c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0089bc5e:; BB(0x0089bc5e);
    /* 0089bc5e: mov eax, edi */ r_eax = r_edi;
    /* 0089bc60: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089bc63: fld dword ptr [ebx + eax*4] */ FPUSH(R_F32((u32)(r_ebx+r_eax*4)));
    /* 0089bc66: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089bc69: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0089bc6c: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089bc6e: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0089bc71: fmul dword ptr [0x99b9c8] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c8u));
    /* 0089bc77: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089bc7a: fmul dword ptr [0x99b9c4] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c4u));
    /* 0089bc80: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089bc82: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0089bc84: fmul dword ptr [0x99b9c0] */ ST(0) = ST(0) * R_F32((u32)(0x99b9c0u));
    /* 0089bc8a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0089bc8c: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089bc92: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089bc94: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089bc97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089bc99: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089bc9c: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bc9f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089bca2: fld dword ptr [esi + eax + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_eax+0xcu)));
    /* 0089bca6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089bca9: fmul dword ptr [0x99ba9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ba9cu));
    /* 0089bcaf: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0089bcb2: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089bcb5: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089bcb8: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bcbb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089bcbe: shl al, 4 */ { u32 c = (4u) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (a << c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0089bcc1: or al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089bcc3: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0089bcc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bcc8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bcc9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089bcca: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089bccd: cmp edi, dword ptr [eax + 0x1058] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bcd3: jb 0x89bc5e */ if (fC) goto L_0089bc5e;
L_0089bcd5:; BB(0x0089bcd5);
    /* 0089bcd5: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089bcda: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089bcdd: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 0089bce0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089bce1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089bce2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089bce3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089bce4: ret 0xc */ FN_RET(0x0089bbfc); r_esp += 16; return;
}

void f_0089bce7(void) /* sub_89BCE7 */
{
    FN_ENTER(0x0089bce7);
    /* 0089bce7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089bce8: mov ebp, esp */ r_ebp = r_esp;
    /* 0089bcea: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089bced: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089bcf0: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089bcf7: je 0x89bd07 */ if (fZ) goto L_0089bd07;
L_0089bcf9:; BB(0x0089bcf9);
    /* 0089bcf9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089bcfc: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89bd01u); f_00899f81();
    /* 0089bd01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bd04: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089bd07:; BB(0x0089bd07);
    /* 0089bd07: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089bd0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089bd10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bd11: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bd14: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089bd17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bd18: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089bd1e: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bd21: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bd23: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bd26: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089bd29: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089bd2c: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089bd2f: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089bd32: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 0089bd35: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89bd3au); f_0089a712();
    /* 0089bd3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bd3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089bd3f: cmp dword ptr [ecx + 0x1058], eax */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bd45: jbe 0x89bdab */ if ((fC||fZ)) goto L_0089bdab;
L_0089bd47:; BB(0x0089bd47);
    /* 0089bd47: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089bd49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089bd4a:; BB(0x0089bd4a);
    /* 0089bd4a: mov ecx, eax */ r_ecx = r_eax;
    /* 0089bd4c: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089bd4f: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0089bd52: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089bd55: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0089bd58: fld dword ptr [esi + ecx] */ FPUSH(R_F32((u32)(r_esi+r_ecx)));
    /* 0089bd5b: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089bd61: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089bd63: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0089bd66: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089bd68: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0089bd6b: fistp dword ptr [ebp - 0xc] */ W32((u32)(r_ebp+0xfffffff4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bd6e: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089bd71: fld dword ptr [esi + ebx + 4] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x4u)));
    /* 0089bd75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089bd78: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089bd7e: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0089bd81: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089bd84: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089bd87: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bd8a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089bd8d: movzx cx, cl */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)(u8)r_ecx) & 0xffffu);
    /* 0089bd91: mov ch, bl */ r_ecx = (r_ecx & 0xffff00ffu) | ((((u8)r_ebx) & 0xffu) << 8);
    /* 0089bd93: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089bd96: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0089bd99: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0089bd9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bd9f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bda0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bda1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089bda2: cmp eax, dword ptr [ecx + 0x1058] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bda8: jb 0x89bd4a */ if (fC) goto L_0089bd4a;
L_0089bdaa:; BB(0x0089bdaa);
    /* 0089bdaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089bdab:; BB(0x0089bdab);
    /* 0089bdab: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089bdb0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089bdb3: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 0089bdb6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089bdb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089bdb8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089bdb9: ret 0xc */ FN_RET(0x0089bce7); r_esp += 16; return;
}

void f_0089bdbc(void) /* sub_89BDBC */
{
    FN_ENTER(0x0089bdbc);
    /* 0089bdbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089bdbd: mov ebp, esp */ r_ebp = r_esp;
    /* 0089bdbf: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089bdc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089bdc3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089bdc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bdc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089bdc9: cmp dword ptr [ecx + 0x1048], ebx */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089bdcf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bdd0: je 0x89bde0 */ if (fZ) goto L_0089bde0;
L_0089bdd2:; BB(0x0089bdd2);
    /* 0089bdd2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089bdd5: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89bddau); f_00899f81();
    /* 0089bdda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bddd: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089bde0:; BB(0x0089bde0);
    /* 0089bde0: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089bde6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089bde9: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089bdef: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bdf2: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089bdf5: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089bdf8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089bdfb: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bdfd: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089be00: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089be03: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089be06: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089be09: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 0089be0c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089be0f: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89be14u); f_0089a712();
    /* 0089be14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089be17: cmp dword ptr [eax + 0x1058], ebx */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089be1d: jbe 0x89beaf */ if ((fC||fZ)) goto L_0089beaf;
L_0089be23:; BB(0x0089be23);
    /* 0089be23: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0089be25:; BB(0x0089be25);
    /* 0089be25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089be28: mov eax, ebx */ r_eax = r_ebx;
    /* 0089be2a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089be2d: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 0089be30: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089be33: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089be36: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 0089be39: fmul dword ptr [0x99bab4] */ ST(0) = ST(0) * R_F32((u32)(0x99bab4u));
    /* 0089be3f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089be41: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089be44: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089be46: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089be49: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089be4c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089be4f: fld dword ptr [esi + eax + 4] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x4u)));
    /* 0089be53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089be56: fmul dword ptr [0x99bab4] */ ST(0) = ST(0) * R_F32((u32)(0x99bab4u));
    /* 0089be5c: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089be5f: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089be62: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089be65: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089be68: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0089be6b: fld dword ptr [esi + edi + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_edi+0xcu)));
    /* 0089be6f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089be72: fmul dword ptr [0x99ba94] */ ST(0) = ST(0) * R_F32((u32)(0x99ba94u));
    /* 0089be78: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089be7b: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089be7e: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089be81: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089be84: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089be87: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089be8a: shl edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0089be8d: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089be8f: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089be92: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089be95: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089be97: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0089be9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089be9d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089be9e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089be9f: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089bea0: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089bea3: cmp ebx, dword ptr [eax + 0x1058] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bea9: jb 0x89be25 */ if (fC) goto L_0089be25;
L_0089beaf:; BB(0x0089beaf);
    /* 0089beaf: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089beb4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0089beb7: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0089beba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089bebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089bebc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089bebd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089bebe: ret 0xc */ FN_RET(0x0089bdbc); r_esp += 16; return;
}

void f_0089bec1(void) /* sub_89BEC1 */
{
    FN_ENTER(0x0089bec1);
    /* 0089bec1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089bec2: mov ebp, esp */ r_ebp = r_esp;
    /* 0089bec4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089bec7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089beca: cmp dword ptr [ecx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089bed1: je 0x89bee1 */ if (fZ) goto L_0089bee1;
L_0089bed3:; BB(0x0089bed3);
    /* 0089bed3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089bed6: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89bedbu); f_00899f81();
    /* 0089bedb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bede: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089bee1:; BB(0x0089bee1);
    /* 0089bee1: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089bee7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089beea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089beeb: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089beee: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089bef1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bef2: mov edi, dword ptr [ecx + 0x1054] */ r_edi = R32((u32)(r_ecx+0x1054u));
    /* 0089bef8: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089befb: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089befe: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bf00: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bf03: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089bf06: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089bf09: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089bf0c: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 0089bf0f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0089bf12: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89bf17u); f_0089a712();
    /* 0089bf17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bf1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089bf1c: cmp dword ptr [ecx + 0x1058], eax */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bf22: jbe 0x89bfbb */ if ((fC||fZ)) goto L_0089bfbb;
L_0089bf28:; BB(0x0089bf28);
    /* 0089bf28: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089bf2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_0089bf2b:; BB(0x0089bf2b);
    /* 0089bf2b: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089bf2e: mov ecx, eax */ r_ecx = r_eax;
    /* 0089bf30: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089bf33: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0089bf36: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089bf39: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 0089bf3c: fld dword ptr [esi + ecx] */ FPUSH(R_F32((u32)(r_esi+r_ecx)));
    /* 0089bf3f: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089bf45: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089bf47: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089bf4a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089bf4c: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089bf4f: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bf52: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089bf55: fld dword ptr [esi + ecx + 4] */ FPUSH(R_F32((u32)(r_esi+r_ecx+0x4u)));
    /* 0089bf59: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0089bf5c: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089bf62: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089bf65: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089bf68: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089bf6b: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bf6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089bf71: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0089bf74: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089bf77: fld dword ptr [esi + ecx + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_ecx+0xcu)));
    /* 0089bf7b: fmul dword ptr [0x99ba90] */ ST(0) = ST(0) * R_F32((u32)(0x99ba90u));
    /* 0089bf81: fadd dword ptr [ebp - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff8u));
    /* 0089bf84: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0089bf87: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0089bf8a: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089bf8d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089bf90: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089bf92: mov bh, cl */ r_ebx = (r_ebx & 0xffff00ffu) | ((((u8)r_ecx) & 0xffu) << 8);
    /* 0089bf94: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089bf9a: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089bf9d: mov bl, byte ptr [ebp - 0x20] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 0089bfa0: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0089bfa3: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0089bfa5: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 0089bfa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bfaa: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089bfad: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089bfae: cmp eax, dword ptr [ecx + 0x1058] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089bfb4: jb 0x89bf2b */ if (fC) goto L_0089bf2b;
L_0089bfba:; BB(0x0089bfba);
    /* 0089bfba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089bfbb:; BB(0x0089bfbb);
    /* 0089bfbb: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089bfc0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0089bfc3: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 0089bfc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089bfc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089bfc8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089bfc9: ret 0xc */ FN_RET(0x0089bec1); r_esp += 16; return;
}

void f_0089bfcc(void) /* sub_89BFCC */
{
    FN_ENTER(0x0089bfcc);
    /* 0089bfcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089bfcd: mov ebp, esp */ r_ebp = r_esp;
    /* 0089bfcf: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089bfd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089bfd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bfd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089bfd5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089bfd7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0089bfda: cmp dword ptr [ecx + 0x1048], edi */ {  u32 a = R32((u32)(r_ecx+0x1048u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089bfe0: je 0x89bff0 */ if (fZ) goto L_0089bff0;
L_0089bfe2:; BB(0x0089bfe2);
    /* 0089bfe2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089bfe5: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89bfeau); f_00899f81();
    /* 0089bfea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089bfed: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089bff0:; BB(0x0089bff0);
    /* 0089bff0: mov edx, dword ptr [ecx + 0x1050] */ r_edx = R32((u32)(r_ecx+0x1050u));
    /* 0089bff6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089bff9: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089bfff: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c002: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0089c005: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089c008: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c00b: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c00d: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c010: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0089c013: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089c016: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0089c019: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 0089c01c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089c01f: call 0x89a712 */ r_esp -= 4; W32(r_esp, 0x89c024u); f_0089a712();
    /* 0089c024: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c027: cmp dword ptr [eax + 0x1058], edi */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c02d: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0089c030: jbe 0x89c0f4 */ if ((fC||fZ)) goto L_0089c0f4;
L_0089c036:; BB(0x0089c036);
    /* 0089c036: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c038: mov esi, 0xff */ r_esi = 0xffu;
L_0089c03d:; BB(0x0089c03d);
    /* 0089c03d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089c040: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089c043: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c046: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0089c049: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c04c: fst dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0));
    /* 0089c04f: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 0089c052: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089c058: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089c05a: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c05d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089c05f: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c062: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c065: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c068: fld dword ptr [ecx + eax + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x4u)));
    /* 0089c06c: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089c06f: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089c075: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c078: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c07b: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c07e: fistp dword ptr [ebp - 0x1c] */ W32((u32)(r_ebp+0xffffffe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c081: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089c084: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0089c087: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0089c08a: fld dword ptr [ecx + eax + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax+0x8u)));
    /* 0089c08e: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089c094: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c097: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c09a: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c09d: fistp dword ptr [ebp - 0x20] */ W32((u32)(r_ebp+0xffffffe0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c0a0: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0089c0a3: fld dword ptr [ecx + ebx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_ebx+0xcu)));
    /* 0089c0a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0089c0aa: fmul dword ptr [0x99bab0] */ ST(0) = ST(0) * R_F32((u32)(0x99bab0u));
    /* 0089c0b0: fadd dword ptr [ebp - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0089c0b3: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0089c0b6: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0089c0b9: fistp dword ptr [ebp - 0x24] */ W32((u32)(r_ebp+0xffffffdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0089c0bc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0089c0bf: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089c0c1: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0089c0c4: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c0c6: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089c0c9: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c0cc: and ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089c0ce: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c0d0: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089c0d3: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089c0d5: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089c0d7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0089c0d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089c0dc: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089c0df: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089c0e2: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089c0e5: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089c0e8: cmp edi, dword ptr [eax + 0x1058] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089c0ee: jb 0x89c03d */ if (fC) goto L_0089c03d;
L_0089c0f4:; BB(0x0089c0f4);
    /* 0089c0f4: mov eax, dword ptr [0xae9750] */ r_eax = R32((u32)(0xae9750u));
    /* 0089c0f9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0089c0fc: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 0089c0ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089c100: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089c101: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089c102: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089c103: ret 0xc */ FN_RET(0x0089bfcc); r_esp += 16; return;
}

