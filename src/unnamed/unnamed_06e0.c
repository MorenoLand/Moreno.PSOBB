#include "protos.h"

void f_006e0000(void)
{
    FN_ENTER(0x006e0000);
    goto L_006e0000;
L_006dfffc:; BB(0x006dfffc);
    /* 006dfffc: test eax, 0x7c45e800 */ {  u32 a = r_eax; u32 b = 0x7c45e800u; u32 r = (a & b) & 0xffffffffu;   }
L_006e0000:; BB(0x006e0000);
    /* 006e0000: jl 0x6dfffc */ if ((fS!=fO)) goto L_006dfffc;
    /* 006e0001: cli  */ UNSUP(0x006e0001, "cli ");
L_006e0002:; BB(0x006e0002);
    /* 006e0002: inc dword ptr [ebp + 0xf3f74c0] */ { u32 ad = (u32)(r_ebp+0xf3f74c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e0008: mov edi, 0xa966600d */ r_edi = 0xa966600du;
    /* 006e000d: add byte ptr [ecx - 0x24f3dbb4], cl */ { u32 ad = (u32)(r_ecx+0xdb0c244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e0013: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0014: and al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e0016: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e001d: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e0021: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e0026: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e002b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e002f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0033: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0037: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e003b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e003f: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
    /* 006e0046: mov eax, edi */ r_eax = r_edi;
    /* 006e0048: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e004du); f_006e06d0();
    /* 006e004d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0054: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0056: mov eax, edx */ r_eax = r_edx;
    /* 006e0058: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e005du); f_006e06d0();
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0000); r_esp += 4; return;
}

void f_006e0001(void)
{
    FN_ENTER(0x006e0001);
    /* 006e0001: cli  */ UNSUP(0x006e0001, "cli ");
    /* 006e0002: inc dword ptr [ebp + 0xf3f74c0] */ { u32 ad = (u32)(r_ebp+0xf3f74c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e0008: mov edi, 0xa966600d */ r_edi = 0xa966600du;
    /* 006e000d: add byte ptr [ecx - 0x24f3dbb4], cl */ { u32 ad = (u32)(r_ecx+0xdb0c244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e0013: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0014: and al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e0016: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e001d: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e0021: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e0026: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e002b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e002f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0033: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0037: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e003b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e003f: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
    /* 006e0046: mov eax, edi */ r_eax = r_edi;
    /* 006e0048: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e004du); f_006e06d0();
    /* 006e004d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0054: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0056: mov eax, edx */ r_eax = r_edx;
    /* 006e0058: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e005du); f_006e06d0();
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0001); r_esp += 4; return;
}

void f_006e0020(void)
{
    FN_ENTER(0x006e0020);
    /* 006e0020: adc al, 0xf */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e0022: mov bh, 0x44 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x44u) & 0xffu) << 8);
    /* 006e0024: and al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e0026: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e002b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e002f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0033: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0037: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e003b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e003f: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
    /* 006e0046: mov eax, edi */ r_eax = r_edi;
    /* 006e0048: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e004du); f_006e06d0();
    /* 006e004d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0054: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0056: mov eax, edx */ r_eax = r_edx;
    /* 006e0058: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e005du); f_006e06d0();
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0020); r_esp += 4; return;
}

void f_006e0028(void)
{
    FN_ENTER(0x006e0028);
    /* 006e0028: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e002a: add byte ptr [ecx - 0x26e3dbbc], cl */ { u32 ad = (u32)(r_ecx+0xd91c2444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e0030: insb byte ptr es:[edi], dx */ UNSUP(0x006e0030, "insb byte ptr es:[edi], dx");
    /* 006e0031: and al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e0033: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0037: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e003b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e003f: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
    /* 006e0046: mov eax, edi */ r_eax = r_edi;
    /* 006e0048: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e004du); f_006e06d0();
    /* 006e004d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0054: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0056: mov eax, edx */ r_eax = r_edx;
    /* 006e0058: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e005du); f_006e06d0();
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0028); r_esp += 4; return;
}

void f_006e0032(void)
{
    FN_ENTER(0x006e0032);
    /* 006e0032: sbb al, 0xdb */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xdbu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e0034: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 006e0035: and al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006e0037: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e003b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e003f: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
    /* 006e0046: mov eax, edi */ r_eax = r_edi;
    /* 006e0048: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e004du); f_006e06d0();
    /* 006e004d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0054: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0056: mov eax, edx */ r_eax = r_edx;
    /* 006e0058: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e005du); f_006e06d0();
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0032); r_esp += 4; return;
}

void f_006e0045(void)
{
    FN_ENTER(0x006e0045);
    /* 006e0045: add byte ptr [ebx + 0x683e8c7], cl */ { u32 ad = (u32)(r_ebx+0x683e8c7u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e004b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e004d: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0054: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0056: mov eax, edx */ r_eax = r_edx;
    /* 006e0058: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e005du); f_006e06d0();
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0045); r_esp += 4; return;
}

void f_006e0049(void)
{
    FN_ENTER(0x006e0049);
    /* 006e0049: add dword ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e004c: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e004e: mov edi, 0xa9666215 */ r_edi = 0xa9666215u;
    /* 006e0053: add byte ptr [ebx], ch */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e0055: ror byte ptr [ebx + 0x673e8c2], 1 */ { u32 ad = (u32)(r_ebx+0x673e8c2u); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 006e005b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e005d: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0049); r_esp += 4; return;
}

void f_006e005f(void)
{
    FN_ENTER(0x006e005f);
    /* 006e005f: sub eax, 0xa96678 */ {  u32 a = r_eax; u32 b = 0xa96678u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e0064: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0067: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e005f); r_esp += 4; return;
}

void f_006e0061(void)
{
    FN_ENTER(0x006e0061);
    /* 006e0061: test ax, 0xf00 */ {  u32 a = (u16)r_eax; u32 b = 0xf00u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e0065: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 006e0066: jmp 0x6e0077 */ goto L_006e0077;
L_006e0077:; BB(0x006e0077);
    /* 006e0077: enter 0x67b8, 0x66 */ { u32 f = 0x67b8u; u32 lv = 6u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 006e007b: imul si */ { i32 t = (i32)(i16)r_eax * (i32)(i16)(u16)r_esi; r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); r_edx = (r_edx & 0xffff0000u) | (((u32)t >> 16) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0061); r_esp += 4; return;
}

void f_006e0065(void)
{
    FN_ENTER(0x006e0065);
    /* 006e0065: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 006e0066: jmp 0x6e0077 */ goto L_006e0077;
L_006e0077:; BB(0x006e0077);
    /* 006e0077: enter 0x67b8, 0x66 */ { u32 f = 0x67b8u; u32 lv = 6u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 006e007b: imul si */ { i32 t = (i32)(i16)r_eax * (i32)(i16)(u16)r_esi; r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); r_edx = (r_edx & 0xffff0000u) | (((u32)t >> 16) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0065); r_esp += 4; return;
}

void f_006e0069(void)
{
    FN_ENTER(0x006e0069);
    /* 006e0069: sbb eax, 0xa96670 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa96670u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0069); r_esp += 4; return;
}

void f_006e006e(void)
{
    FN_ENTER(0x006e006e);
    /* 006e006e: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e006e); r_esp += 4; return;
}

void f_006e006f(void)
{
    FN_ENTER(0x006e006f);
    /* 006e006f: add dword ptr [0xa96664], ebp */ { u32 ad = (u32)(0xa96664u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e006f); r_esp += 4; return;
}

void f_006e0072(void)
{
    FN_ENTER(0x006e0072);
    /* 006e0072: test ax, 0xf00 */ {  u32 a = (u16)r_eax; u32 b = 0xf00u; u32 r = (a & b) & 0xffffu;   }
    /* 006e0076: mov edi, 0x6667b8c8 */ r_edi = 0x6667b8c8u;
    /* 006e007b: imul si */ { i32 t = (i32)(i16)r_eax * (i32)(i16)(u16)r_esi; r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); r_edx = (r_edx & 0xffff0000u) | (((u32)t >> 16) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0072); r_esp += 4; return;
}

void f_006e0075(void)
{
    FN_ENTER(0x006e0075);
    /* 006e0075: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e007d: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0075); r_esp += 4; return;
}

void f_006e0077(void)
{
    FN_ENTER(0x006e0077);
    /* 006e0077: enter 0x67b8, 0x66 */ { u32 f = 0x67b8u; u32 lv = 6u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 006e007b: imul si */ { i32 t = (i32)(i16)r_eax * (i32)(i16)(u16)r_esi; r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); r_edx = (r_edx & 0xffff0000u) | (((u32)t >> 16) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 006e007f: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0082: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0085: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0087: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e008a: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e008c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e008e: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0094: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0097: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e009e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0077); r_esp += 4; return;
}

void f_006e00a3(void)
{
    FN_ENTER(0x006e00a3);
    /* 006e00a3: lea edi, [ebx - 4] */ r_edi = (u32)(r_ebx+0xfffffffcu);
    /* 006e00a6: mov eax, edi */ r_eax = r_edi;
    /* 006e00a8: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e00adu); f_006e06d0();
    /* 006e00ad: movsx ecx, word ptr [0xa96676] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006e00b4: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e00b7: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e00bb: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e00bf: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006e00c5: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006e00cb: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e00d0u); f_00687c48();
    /* 006e00d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e00d2: je 0x6e0113 */ if (fZ) goto L_006e0113;
L_006e00d4:; BB(0x006e00d4);
    /* 006e00d4: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e00db: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e00df: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e00e3: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e00ea: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e00ee: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e00f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e00f8: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e00fc: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0100: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0104: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0108: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e010c: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
L_006e0113:; BB(0x006e0113);
    /* 006e0113: mov eax, edi */ r_eax = r_edi;
    /* 006e0115: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e011au); f_006e06d0();
    /* 006e011a: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0121: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0123: mov eax, edx */ r_eax = r_edx;
    /* 006e0125: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e012au); f_006e06d0();
    /* 006e012a: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0131: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0134: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e013b: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0142: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0145: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e014a: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e014c: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e014f: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0151: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0153: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e0156: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e0158: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e015a: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0160: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0163: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e016a: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e00a3); r_esp += 4; return;
}

void f_006e00ad(void)
{
    FN_ENTER(0x006e00ad);
    /* 006e00ad: movsx ecx, word ptr [0xa96676] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006e00b4: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e00b7: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e00bb: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e00bf: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006e00c5: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006e00cb: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e00d0u); f_00687c48();
    /* 006e00d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e00d2: je 0x6e0113 */ if (fZ) goto L_006e0113;
L_006e00d4:; BB(0x006e00d4);
    /* 006e00d4: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e00db: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e00df: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e00e3: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e00ea: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e00ee: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e00f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e00f8: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e00fc: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0100: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0104: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0108: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e010c: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
L_006e0113:; BB(0x006e0113);
    /* 006e0113: mov eax, edi */ r_eax = r_edi;
    /* 006e0115: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e011au); f_006e06d0();
    /* 006e011a: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0121: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0123: mov eax, edx */ r_eax = r_edx;
    /* 006e0125: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e012au); f_006e06d0();
    /* 006e012a: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0131: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0134: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e013b: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0142: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0145: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e014a: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e014c: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e014f: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0151: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0153: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e0156: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e0158: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e015a: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0160: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e0163: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e016a: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e00ad); r_esp += 4; return;
}

void f_006e016f(void)
{
    FN_ENTER(0x006e016f);
    /* 006e016f: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e0174: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0176: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e0178: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006e017b: mov edi, edx */ r_edi = r_edx;
    /* 006e017d: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006e017f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006e0181: movsx ecx, word ptr [0xa96676] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006e0188: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e018b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e018f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e0193: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006e0199: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006e019f: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e01a4u); f_00687c48();
    /* 006e01a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e01a6: je 0x6e01e6 */ if (fZ) goto L_006e01e6;
L_006e01a8:; BB(0x006e01a8);
    /* 006e01a8: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e01af: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e01b3: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e01b7: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e01be: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e01c2: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e01c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e01cc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e01d0: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e01d4: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e01d8: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e01dc: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006e01e0: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006e01e6:; BB(0x006e01e6);
    /* 006e01e6: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006e01e9: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e01eeu); f_006e06d0();
    /* 006e01ee: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e01f5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e01f7: mov eax, edx */ r_eax = r_edx;
    /* 006e01f9: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e01feu); f_006e06d0();
    /* 006e01fe: movzx ebp, word ptr [0xa96670] */ r_ebp = (u32)R16((u32)(0xa96670u));
    /* 006e0205: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0208: movzx eax, word ptr [0xa96678] */ r_eax = (u32)R16((u32)(0xa96678u));
    /* 006e020f: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0212: add word ptr [0xa96664], ax */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0219: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e021e: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0220: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0223: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0225: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0227: movsx esi, word ptr [0xa9667a] */ r_esi = (u32)(i32)(i16)R16((u32)(0xa9667au));
    /* 006e022e: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006e0232: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e0236: fmul dword ptr [0x96ce80] */ ST(0) = ST(0) * R_F32((u32)(0x96ce80u));
    /* 006e023c: fdiv dword ptr [0x96ce7c] */ ST(0) = ST(0) / R_F32((u32)(0x96ce7cu));
    /* 006e0242: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 006e0245: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e0249: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e024e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e0253: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e0257: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e025b: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e025f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0263: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006e0267: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e026a: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e026c: add edx, dword ptr [0xa96668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa96668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0272: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e0274: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006e0277: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e027e: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e016f); r_esp += 4; return;
}

void f_006e0283(void)
{
    FN_ENTER(0x006e0283);
    /* 006e0283: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e0288: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e028a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e028c: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006e028f: mov edi, edx */ r_edi = r_edx;
    /* 006e0291: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006e0293: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006e0295: movsx ecx, word ptr [0xa96676] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006e029c: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e029f: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e02a3: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e02a7: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006e02ad: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006e02b3: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e02b8u); f_00687c48();
    /* 006e02b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e02ba: je 0x6e02fa */ if (fZ) goto L_006e02fa;
L_006e02bc:; BB(0x006e02bc);
    /* 006e02bc: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e02c3: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e02c7: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e02cb: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e02d2: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e02d6: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e02db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e02e0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e02e4: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e02e8: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e02ec: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e02f0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006e02f4: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006e02fa:; BB(0x006e02fa);
    /* 006e02fa: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006e02fd: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e0302u); f_006e06d0();
    /* 006e0302: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0309: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e030b: mov eax, edx */ r_eax = r_edx;
    /* 006e030d: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e0312u); f_006e06d0();
    /* 006e0312: movzx ebp, word ptr [0xa96670] */ r_ebp = (u32)R16((u32)(0xa96670u));
    /* 006e0319: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e031c: movzx eax, word ptr [0xa96678] */ r_eax = (u32)R16((u32)(0xa96678u));
    /* 006e0323: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0326: add word ptr [0xa96664], ax */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e032d: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e0332: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0334: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0337: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e033a: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e033c: movsx esi, word ptr [0xa9667a] */ r_esi = (u32)(i32)(i16)R16((u32)(0xa9667au));
    /* 006e0343: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006e0347: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e034b: fmul dword ptr [0x96ce80] */ ST(0) = ST(0) * R_F32((u32)(0x96ce80u));
    /* 006e0351: fdiv dword ptr [0x96ce7c] */ ST(0) = ST(0) / R_F32((u32)(0x96ce7cu));
    /* 006e0357: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 006e035a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e035e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e0363: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e0368: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e036c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0370: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0374: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0378: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006e037c: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e037f: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0381: add edx, dword ptr [0xa96668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa96668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0387: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e0389: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006e038c: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e0393: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0283); r_esp += 4; return;
}

void f_006e0398(void)
{
    FN_ENTER(0x006e0398);
    /* 006e0398: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e039d: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e039f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e03a1: movsx edi, word ptr [0xa96676] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006e03a8: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e03aa: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006e03ad: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e03af: imul edi, edx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e03b2: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006e03b6: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006e03ba: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e03be: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006e03c4: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006e03ca: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e03cfu); f_00687c48();
    /* 006e03cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e03d1: je 0x6e0411 */ if (fZ) goto L_006e0411;
L_006e03d3:; BB(0x006e03d3);
    /* 006e03d3: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e03da: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e03de: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e03e2: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e03e9: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e03ed: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e03f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e03f7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e03fb: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e03ff: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0403: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0407: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006e040b: mov word ptr [0xa96660], ax */ W16((u32)(0xa96660u), (u16)r_eax);
L_006e0411:; BB(0x006e0411);
    /* 006e0411: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
    /* 006e0414: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e0419u); f_006e06d0();
    /* 006e0419: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e0420: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0422: mov eax, edx */ r_eax = r_edx;
    /* 006e0424: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e0429u); f_006e06d0();
    /* 006e0429: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e0430: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0433: movzx ebx, word ptr [0xa96670] */ r_ebx = (u32)R16((u32)(0xa96670u));
    /* 006e043a: movsx edi, word ptr [0xa9667a] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa9667au));
    /* 006e0441: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0448: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006e044c: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e0450: fmul dword ptr [0x96ce80] */ ST(0) = ST(0) * R_F32((u32)(0x96ce80u));
    /* 006e0456: fdiv dword ptr [0x96ce7c] */ ST(0) = ST(0) / R_F32((u32)(0x96ce7cu));
    /* 006e045c: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e045f: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e0464: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0466: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e046a: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e046f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e0474: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e0478: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e047c: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0480: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0484: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0487: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0489: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e048b: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e048e: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006e0492: imul edx, dword ptr [esp + 0x2c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x2cu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0497: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e0499: add edx, dword ptr [0xa96668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa96668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e049f: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e04a1: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e04a4: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e04ab: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0398); r_esp += 4; return;
}

void f_006e04b0(void)
{
    FN_ENTER(0x006e04b0);
    /* 006e04b0: lea esi, [ebx - 4] */ r_esi = (u32)(r_ebx+0xfffffffcu);
    /* 006e04b3: mov eax, esi */ r_eax = r_esi;
    /* 006e04b5: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e04bau); f_006e06d0();
    /* 006e04ba: movsx ecx, word ptr [0xa96676] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006e04c1: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e04c4: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e04c8: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e04cc: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006e04d2: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006e04d8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e04ddu); f_00687c48();
    /* 006e04dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e04df: je 0x6e0520 */ if (fZ) goto L_006e0520;
L_006e04e1:; BB(0x006e04e1);
    /* 006e04e1: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e04e8: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e04ec: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e04f0: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e04f7: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e04fb: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e0500: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e0505: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e0509: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e050d: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e0511: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0515: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e0519: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
L_006e0520:; BB(0x006e0520);
    /* 006e0520: mov eax, esi */ r_eax = r_esi;
    /* 006e0522: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e0527u); f_006e06d0();
    /* 006e0527: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e052e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0530: mov eax, edx */ r_eax = r_edx;
    /* 006e0532: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e0537u); f_006e06d0();
    /* 006e0537: movzx ebp, word ptr [0xa96678] */ r_ebp = (u32)R16((u32)(0xa96678u));
    /* 006e053e: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0541: add word ptr [0xa96664], bp */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_ebp; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0548: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e054b: mov ebp, 0x28 */ r_ebp = 0x28u;
    /* 006e0550: mov edx, 0x28 */ r_edx = 0x28u;
    /* 006e0555: mov word ptr [0xa96670], dx */ W16((u32)(0xa96670u), (u16)r_edx);
    /* 006e055c: mov edx, dword ptr [0xa96668] */ r_edx = R32((u32)(0xa96668u));
    /* 006e0562: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e04b0); r_esp += 4; return;
}

void f_006e0567(void)
{
    FN_ENTER(0x006e0567);
    /* 006e0567: lea edi, [ebx - 4] */ r_edi = (u32)(r_ebx+0xfffffffcu);
    /* 006e056a: mov eax, edi */ r_eax = r_edi;
    /* 006e056c: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e0571u); f_006e06d0();
    /* 006e0571: movsx ecx, word ptr [0xa96676] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96676u));
    /* 006e0578: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e057b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e057f: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e0583: fadd dword ptr [0xa96658] */ ST(0) = ST(0) + R_F32((u32)(0xa96658u));
    /* 006e0589: fstp dword ptr [0xa96658] */ W_F32((u32)(0xa96658u), ST(0)); FPOP();
    /* 006e058f: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e0594u); f_00687c48();
    /* 006e0594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0596: je 0x6e05d7 */ if (fZ) goto L_006e05d7;
L_006e0598:; BB(0x006e0598);
    /* 006e0598: movsx ecx, word ptr [0xa96660] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa96660u));
    /* 006e059f: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006e05a3: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e05a7: fmul dword ptr [ebp*8 + 0x9cf784] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*8+0x9cf784u));
    /* 006e05ae: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e05b2: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e05b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e05bc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e05c0: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e05c4: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e05c8: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e05cc: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e05d0: mov word ptr [0xa96660], bp */ W16((u32)(0xa96660u), (u16)r_ebp);
L_006e05d7:; BB(0x006e05d7);
    /* 006e05d7: mov eax, edi */ r_eax = r_edi;
    /* 006e05d9: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e05deu); f_006e06d0();
    /* 006e05de: movsx edx, word ptr [0xa96662] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa96662u));
    /* 006e05e5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e05e7: mov eax, edx */ r_eax = r_edx;
    /* 006e05e9: call 0x6e06d0 */ r_esp -= 4; W32(r_esp, 0x6e05eeu); f_006e06d0();
    /* 006e05ee: movzx edi, word ptr [0xa96678] */ r_edi = (u32)R16((u32)(0xa96678u));
    /* 006e05f5: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e05f8: movzx ebp, word ptr [0xa96670] */ r_ebp = (u32)R16((u32)(0xa96670u));
    /* 006e05ff: add word ptr [0xa96664], di */ { u32 ad = (u32)(0xa96664u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006e0606: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0609: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e060e: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0610: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006e0613: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e0618: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e061b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e061d: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 006e0620: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0622: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e0624: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e0626: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006e0629: mov word ptr [0xa96670], bp */ W16((u32)(0xa96670u), (u16)r_ebp);
    /* 006e0630: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e0632: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006e0635: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e0637: movsx ebx, word ptr [0xa9667a] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xa9667au));
    /* 006e063e: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006e0642: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e0646: fmul dword ptr [0x96ce80] */ ST(0) = ST(0) * R_F32((u32)(0x96ce80u));
    /* 006e064c: fdiv dword ptr [0x96ce7c] */ ST(0) = ST(0) / R_F32((u32)(0x96ce7cu));
    /* 006e0652: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 006e0656: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 006e065b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e0660: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006e0664: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 006e0668: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e066c: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006e0670: imul edx, dword ptr [esp + 0x24] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x24u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e0675: add edx, dword ptr [0xa96668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa96668u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e067b: jmp 0x6e0691 */ goto L_006e0691;
L_006e0691:; BB(0x006e0691);
    /* 006e0691: mov eax, edx */ r_eax = r_edx;
    /* 006e0693: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006e0696: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e0698: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e069a: mov dword ptr [0xa96668], edx */ W32((u32)(0xa96668u), r_edx);
    /* 006e06a0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06a2: jg 0x6e06af */ if ((!fZ&&fS==fO)) goto L_006e06af;
L_006e06a4:; BB(0x006e06a4);
    /* 006e06a4: mov eax, 0xa */ r_eax = 0xau;
    /* 006e06a9: mov word ptr [0xa96670], ax */ W16((u32)(0xa96670u), (u16)r_eax);
L_006e06af:; BB(0x006e06af);
    /* 006e06af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e06b3: mov eax, 0xa96650 */ r_eax = 0xa96650u;
    /* 006e06b8: jg 0x6e06bc */ if ((!fZ&&fS==fO)) goto L_006e06bc;
L_006e06ba:; BB(0x006e06ba);
    /* 006e06ba: mov ecx, edx */ r_ecx = r_edx;
L_006e06bc:; BB(0x006e06bc);
    /* 006e06bc: mov word ptr [0xa96662], cx */ W16((u32)(0xa96662u), (u16)r_ecx);
    /* 006e06c3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e06c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e06c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e06c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e06c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e06ca: ret  */ FN_RET(0x006e0567); r_esp += 4; return;
}

void f_006e06cc(void) /* sub_6E06CC */
{
    FN_ENTER(0x006e06cc);
    /* 006e06cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006e06d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e06d4: jg 0x6e06d8 */ if ((!fZ&&fS==fO)) goto L_006e06d8;
L_006e06d6:; BB(0x006e06d6);
    /* 006e06d6: mov eax, edx */ r_eax = r_edx;
L_006e06d8:; BB(0x006e06d8);
    /* 006e06d8: ret  */ FN_RET(0x006e06cc); r_esp += 4; return;
}

void f_006e06d0(void) /* sub_6E06D0 */
{
    FN_ENTER(0x006e06d0);
    /* 006e06d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e06d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e06d4: jg 0x6e06d8 */ if ((!fZ&&fS==fO)) goto L_006e06d8;
L_006e06d6:; BB(0x006e06d6);
    /* 006e06d6: mov eax, edx */ r_eax = r_edx;
L_006e06d8:; BB(0x006e06d8);
    /* 006e06d8: ret  */ FN_RET(0x006e06d0); r_esp += 4; return;
}

void f_006e06dc(void) /* sub_6E06DC */
{
    FN_ENTER(0x006e06dc);
    /* 006e06dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e06dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e06df: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e06e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e06e5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e06eau); f_008193cc();
    /* 006e06ea: mov dword ptr [ebx], 0xb3d008 */ W32((u32)(r_ebx), 0xb3d008u);
    /* 006e06f0: mov edx, dword ptr [0x9cf874] */ r_edx = R32((u32)(0x9cf874u));
    /* 006e06f6: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006e06f9: mov eax, ebx */ r_eax = r_ebx;
    /* 006e06fb: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 006e0702: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0703: ret 4 */ FN_RET(0x006e06dc); r_esp += 8; return;
}

void f_006e0708(void) /* sub_6E0708 */
{
    FN_ENTER(0x006e0708);
    /* 006e0708: call 0x6f37b4 */ r_esp -= 4; W32(r_esp, 0x6e070du); f_006f37b4();
    /* 006e070d: mov eax, dword ptr [0x9cf92c] */ r_eax = R32((u32)(0x9cf92cu));
    /* 006e0712: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e0715: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0717: je 0x6e0723 */ if (fZ) goto L_006e0723;
L_006e0719:; BB(0x006e0719);
    /* 006e0719: mov ecx, 0x9cf92c */ r_ecx = 0x9cf92cu;
    /* 006e071e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6e0723u); f_00829de0();
L_006e0723:; BB(0x006e0723);
    /* 006e0723: mov ecx, dword ptr [0xa96680] */ r_ecx = R32((u32)(0xa96680u));
    /* 006e0729: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e072b: je 0x6e0752 */ if (fZ) goto L_006e0752;
L_006e072d:; BB(0x006e072d);
    /* 006e072d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006e072f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e0732: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0734: je 0x6e0741 */ if (fZ) goto L_006e0741;
L_006e0736:; BB(0x006e0736);
    /* 006e0736: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6e073bu); f_00829de0();
    /* 006e073b: mov ecx, dword ptr [0xa96680] */ r_ecx = R32((u32)(0xa96680u));
L_006e0741:; BB(0x006e0741);
    /* 006e0741: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0742: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6e0747u); f_0082e960();
    /* 006e0747: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e0748: mov dword ptr [0xa96680], 0 */ W32((u32)(0xa96680u), 0x0u);
L_006e0752:; BB(0x006e0752);
    /* 006e0752: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e0758: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e075a: je 0x6e0765 */ if (fZ) goto L_006e0765;
L_006e075c:; BB(0x006e075c);
    /* 006e075c: je 0x6e0765 */ if (fZ) goto L_006e0765;
L_006e075e:; BB(0x006e075e);
    /* 006e075e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0760: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6e0765u); f_004066a8();
L_006e0765:; BB(0x006e0765);
    /* 006e0765: mov dword ptr [0xa96684], 0 */ W32((u32)(0xa96684u), 0x0u);
    /* 006e076f: ret  */ FN_RET(0x006e0708); r_esp += 4; return;
}

void f_006e0770(void) /* sub_6E0770 */
{
    FN_ENTER(0x006e0770);
    /* 006e0770: mov byte ptr [0xa9667c], 0 */ W8((u32)(0xa9667cu), 0x0u);
    /* 006e0777: call 0x6e887c */ r_esp -= 4; W32(r_esp, 0x6e077cu); f_006e887c();
    /* 006e077c: ret  */ FN_RET(0x006e0770); r_esp += 4; return;
}

void f_006e0780(void) /* sub_6E0780 */
{
    FN_ENTER(0x006e0780);
    /* 006e0780: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0781: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0782: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e0783: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0784: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e078a: mov esi, dword ptr [esp + 0x9c] */ r_esi = R32((u32)(r_esp+0x9cu));
    /* 006e0791: mov edx, 0xb */ r_edx = 0xbu;
    /* 006e0796: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0798: lea ebx, [esp + 4] */ r_ebx = (u32)(r_esp+0x4u);
L_006e079c:; BB(0x006e079c);
    /* 006e079c: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 006e07a1: mov word ptr [ebx], bp */ W16((u32)(r_ebx), (u16)r_ebp);
    /* 006e07a4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e07a6: mov word ptr [ebx + 2], di */ W16((u32)(r_ebx+0x2u), (u16)r_edi);
    /* 006e07aa: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006e07ad: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e07b0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006e07b3: jne 0x6e079c */ if (!fZ) goto L_006e079c;
L_006e07b5:; BB(0x006e07b5);
    /* 006e07b5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e07b7: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e07bd:; BB(0x006e07bd);
    /* 006e07bd: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006e07c4: mov eax, 0x42c80000 */ r_eax = 0x42c80000u;
    /* 006e07c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e07cb: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 006e07cf: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 006e07d3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e07d5: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 006e07d9: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6e07deu); f_00807d60();
    /* 006e07de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e07e0: jne 0x6e0809 */ if (!fZ) goto L_006e0809;
L_006e07e2:; BB(0x006e07e2);
    /* 006e07e2: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 006e07e9: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006e07ec: ja 0x6e0809 */ if ((!fC&&!fZ)) goto L_006e0809;
L_006e07ee:; BB(0x006e07ee);
    /* 006e07ee: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 006e07f5: mov edx, dword ptr [eax*4 + 0x96cc20] */ r_edx = R32((u32)(r_eax*4+0x96cc20u));
    /* 006e07fc: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_006e0809:; BB(0x006e0809);
    /* 006e0809: lea ebp, [esi + 0x460] */ r_ebp = (u32)(r_esi+0x460u);
    /* 006e080f: mov ebx, esi */ r_ebx = r_esi;
    /* 006e0811: add ebx, 0x480 */ {  u32 a = r_ebx; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006e0817: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e081d:; BB(0x006e081d);
    /* 006e081d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e081f: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6e0824u); f_006ad204();
    /* 006e0824: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0827: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006e082c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6e0831u); f_0082d990();
    /* 006e0831: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006e0834: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0836: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6e083bu); f_0082d8bc();
    /* 006e083b: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 006e083f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0840: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 006e0844: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0846: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6e084bu); f_00830aa0();
    /* 006e084b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006e0850: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6e0855u); f_0082eb80();
    /* 006e0855: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 006e0859: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 006e085c: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 006e0860: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 006e0863: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 006e0867: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 006e086a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e086c: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 006e0870: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 006e0874: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 006e0878: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 006e087c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e087d: mov ecx, esi */ r_ecx = r_esi;
    /* 006e087f: call 0x68c358 */ r_esp -= 4; W32(r_esp, 0x6e0884u); f_0068c358();
    /* 006e0884: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 006e088b: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006e088e: ja 0x6e1040 */ if ((!fC&&!fZ)) goto L_006e1040;
L_006e0894:; BB(0x006e0894);
    /* 006e0894: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 006e089b: mov edx, dword ptr [eax*4 + 0x96cbc0] */ r_edx = R32((u32)(r_eax*4+0x96cbc0u));
    /* 006e08a2: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0780); r_esp += 4; return;
}

void f_006e07fe(void)
{
    FN_ENTER(0x006e07fe);
    /* 006e07fe: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0804: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0805: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0806: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0807: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0808: ret  */ FN_RET(0x006e07fe); r_esp += 4; return;
}

void f_006e0809(void)
{
    FN_ENTER(0x006e0809);
    /* 006e0809: lea ebp, [esi + 0x460] */ r_ebp = (u32)(r_esi+0x460u);
    /* 006e080f: mov ebx, esi */ r_ebx = r_esi;
    /* 006e0811: add ebx, 0x480 */ {  u32 a = r_ebx; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006e0817: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e081d:; BB(0x006e081d);
    /* 006e081d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e081f: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6e0824u); f_006ad204();
    /* 006e0824: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 006e0827: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006e082c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6e0831u); f_0082d990();
    /* 006e0831: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006e0834: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0836: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6e083bu); f_0082d8bc();
    /* 006e083b: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 006e083f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0840: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 006e0844: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0846: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6e084bu); f_00830aa0();
    /* 006e084b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006e0850: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6e0855u); f_0082eb80();
    /* 006e0855: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 006e0859: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 006e085c: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 006e0860: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 006e0863: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 006e0867: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 006e086a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e086c: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 006e0870: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 006e0874: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 006e0878: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 006e087c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e087d: mov ecx, esi */ r_ecx = r_esi;
    /* 006e087f: call 0x68c358 */ r_esp -= 4; W32(r_esp, 0x6e0884u); f_0068c358();
    /* 006e0884: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 006e088b: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006e088e: ja 0x6e1040 */ if ((!fC&&!fZ)) goto L_006e1040;
L_006e0894:; BB(0x006e0894);
    /* 006e0894: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 006e089b: mov edx, dword ptr [eax*4 + 0x96cbc0] */ r_edx = R32((u32)(r_eax*4+0x96cbc0u));
    /* 006e08a2: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0809); r_esp += 4; return;
}

void f_006e08a4(void)
{
    FN_ENTER(0x006e08a4);
    /* 006e08a4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e08a6: je 0x6e092b */ if (fZ) goto L_006e092b;
L_006e08ac:; BB(0x006e08ac);
    /* 006e08ac: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 006e08af: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e08b4: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e08ba:; BB(0x006e08ba);
    /* 006e08ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e08bb: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e08c0u); f_007b4d18();
    /* 006e08c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e08c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e08c3: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e08c9:; BB(0x006e08c9);
    /* 006e08c9: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006e08cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e08d1: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e08d7:; BB(0x006e08d7);
    /* 006e08d7: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 006e08db: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006e08de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e08e0: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e08e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e08e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e08e6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e08e8: mov ebx, dword ptr [eax + ecx*4 + 0x1c] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x1cu));
    /* 006e08ec: mov edi, dword ptr [eax + ecx*4 + 0x20] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x20u));
    /* 006e08f0: mov eax, dword ptr [eax + ecx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x24u));
    /* 006e08f4: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 006e08f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e08fa: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 006e08fe: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 006e0902: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0904: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0909u); f_006ad17c();
    /* 006e0909: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e090d: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 006e0911: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0915: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0916: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0917: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0918: call 0x6e9e14 */ r_esp -= 4; W32(r_esp, 0x6e091du); f_006e9e14();
    /* 006e091d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0920: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0926: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0928: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0929: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e092a: ret  */ FN_RET(0x006e08a4); r_esp += 4; return;
L_006e092b:; BB(0x006e092b);
    /* 006e092b: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006e092d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e092f: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0934u); f_006ad17c();
    /* 006e0934: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 006e0938: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e093b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e093c: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e093f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0940: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0941: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x6e0946u); f_006e9848();
    /* 006e0946: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0949: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e094f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0951: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0952: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0953: ret  */ FN_RET(0x006e08a4); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e08a4); r_esp += 4; return;
}

void f_006e0954(void)
{
    FN_ENTER(0x006e0954);
    /* 006e0954: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0956: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0958: jle 0x6e0988 */ if ((fZ||fS!=fO)) goto L_006e0988;
L_006e095a:; BB(0x006e095a);
    /* 006e095a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0961:; BB(0x006e0961);
    /* 006e0961: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0963: je 0x6e0988 */ if (fZ) goto L_006e0988;
L_006e0965:; BB(0x006e0965);
    /* 006e0965: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0968: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e096e: je 0x6e0988 */ if (fZ) goto L_006e0988;
L_006e0970:; BB(0x006e0970);
    /* 006e0970: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0975: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0979: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e097c: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0981: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0984: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0986: jl 0x6e0961 */ if ((fS!=fO)) goto L_006e0961;
L_006e0988:; BB(0x006e0988);
    /* 006e0988: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e098a: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0990:; BB(0x006e0990);
    /* 006e0990: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0993: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0995: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0997: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e099cu); f_006ad17c();
    /* 006e099c: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e09a0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e09a3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e09a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e09a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e09a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e09a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e09aa: call 0x6ef8a4 */ r_esp -= 4; W32(r_esp, 0x6e09afu); f_006ef8a4();
    /* 006e09af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e09b2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e09b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e09b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e09ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e09bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e09bc: ret  */ FN_RET(0x006e0954); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0954); r_esp += 4; return;
}

void f_006e09bd(void)
{
    FN_ENTER(0x006e09bd);
    /* 006e09bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e09bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e09c1: jle 0x6e09f1 */ if ((fZ||fS!=fO)) goto L_006e09f1;
L_006e09c3:; BB(0x006e09c3);
    /* 006e09c3: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e09ca:; BB(0x006e09ca);
    /* 006e09ca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e09cc: je 0x6e09f1 */ if (fZ) goto L_006e09f1;
L_006e09ce:; BB(0x006e09ce);
    /* 006e09ce: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e09d1: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e09d7: je 0x6e09f1 */ if (fZ) goto L_006e09f1;
L_006e09d9:; BB(0x006e09d9);
    /* 006e09d9: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e09de: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e09e2: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e09e5: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e09ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e09ed: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e09ef: jl 0x6e09ca */ if ((fS!=fO)) goto L_006e09ca;
L_006e09f1:; BB(0x006e09f1);
    /* 006e09f1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e09f4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006e09f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e09f8: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e09fdu); f_006ad17c();
    /* 006e09fd: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0a01: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0a04: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a0b: call 0x6dd0a0 */ r_esp -= 4; W32(r_esp, 0x6e0a10u); f_006dd0a0();
    /* 006e0a10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0a13: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0a19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0a1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0a1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0a1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0a1d: ret  */ FN_RET(0x006e09bd); r_esp += 4; return;
}

void f_006e0a1e(void)
{
    FN_ENTER(0x006e0a1e);
    /* 006e0a1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0a20: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0a22: jle 0x6e0a52 */ if ((fZ||fS!=fO)) goto L_006e0a52;
L_006e0a24:; BB(0x006e0a24);
    /* 006e0a24: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0a2b:; BB(0x006e0a2b);
    /* 006e0a2b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0a2d: je 0x6e0a52 */ if (fZ) goto L_006e0a52;
L_006e0a2f:; BB(0x006e0a2f);
    /* 006e0a2f: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0a32: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0a38: je 0x6e0a52 */ if (fZ) goto L_006e0a52;
L_006e0a3a:; BB(0x006e0a3a);
    /* 006e0a3a: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0a3f: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0a43: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0a46: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0a4b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0a4e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0a50: jl 0x6e0a2b */ if ((fS!=fO)) goto L_006e0a2b;
L_006e0a52:; BB(0x006e0a52);
    /* 006e0a52: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0a55: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0a59: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0a5eu); f_006ad17c();
    /* 006e0a5e: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0a62: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0a65: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a6c: call 0x6ef15c */ r_esp -= 4; W32(r_esp, 0x6e0a71u); f_006ef15c();
    /* 006e0a71: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0a74: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0a7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0a7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0a7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0a7e: ret  */ FN_RET(0x006e0a1e); r_esp += 4; return;
}

void f_006e0a7f(void)
{
    FN_ENTER(0x006e0a7f);
    /* 006e0a7f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006e0a83: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0a89: jne 0x6e1040 */ if (!fZ) goto L_006e1040;
L_006e0a8f:; BB(0x006e0a8f);
    /* 006e0a8f: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 006e0a93: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 006e0a97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0a9c: call 0x6e8478 */ r_esp -= 4; W32(r_esp, 0x6e0aa1u); f_006e8478();
    /* 006e0aa1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0aa4: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0aaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0aab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0aac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0aad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0aae: ret  */ FN_RET(0x006e0a7f); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0a7f); r_esp += 4; return;
}

void f_006e0aaf(void)
{
    FN_ENTER(0x006e0aaf);
    /* 006e0aaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0ab1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0ab3: jle 0x6e0ae3 */ if ((fZ||fS!=fO)) goto L_006e0ae3;
L_006e0ab5:; BB(0x006e0ab5);
    /* 006e0ab5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0abc:; BB(0x006e0abc);
    /* 006e0abc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0abe: je 0x6e0ae3 */ if (fZ) goto L_006e0ae3;
L_006e0ac0:; BB(0x006e0ac0);
    /* 006e0ac0: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0ac3: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0ac9: je 0x6e0ae3 */ if (fZ) goto L_006e0ae3;
L_006e0acb:; BB(0x006e0acb);
    /* 006e0acb: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0ad0: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0ad4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0ad7: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0adc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0adf: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0ae1: jl 0x6e0abc */ if ((fS!=fO)) goto L_006e0abc;
L_006e0ae3:; BB(0x006e0ae3);
    /* 006e0ae3: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0ae6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e0ae8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0aea: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0aefu); f_006ad17c();
    /* 006e0aef: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0af3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0af6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0af9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0afa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0afb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0afc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0afd: call 0x6f0c04 */ r_esp -= 4; W32(r_esp, 0x6e0b02u); f_006f0c04();
    /* 006e0b02: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0b05: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0b0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0b0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0b0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0b0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0b0f: ret  */ FN_RET(0x006e0aaf); r_esp += 4; return;
}

void f_006e0b10(void)
{
    FN_ENTER(0x006e0b10);
    /* 006e0b10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0b12: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0b14: jle 0x6e0b44 */ if ((fZ||fS!=fO)) goto L_006e0b44;
L_006e0b16:; BB(0x006e0b16);
    /* 006e0b16: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0b1d:; BB(0x006e0b1d);
    /* 006e0b1d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0b1f: je 0x6e0b44 */ if (fZ) goto L_006e0b44;
L_006e0b21:; BB(0x006e0b21);
    /* 006e0b21: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0b24: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0b2a: je 0x6e0b44 */ if (fZ) goto L_006e0b44;
L_006e0b2c:; BB(0x006e0b2c);
    /* 006e0b2c: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0b31: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0b35: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0b38: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0b3d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0b40: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0b42: jl 0x6e0b1d */ if ((fS!=fO)) goto L_006e0b1d;
L_006e0b44:; BB(0x006e0b44);
    /* 006e0b44: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0b47: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006e0b49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0b4b: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0b50u); f_006ad17c();
    /* 006e0b50: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0b54: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0b57: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0b5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0b5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0b5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0b5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0b5e: call 0x6f2164 */ r_esp -= 4; W32(r_esp, 0x6e0b63u); f_006f2164();
    /* 006e0b63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0b66: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0b6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0b6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0b6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0b6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0b70: ret  */ FN_RET(0x006e0b10); r_esp += 4; return;
}

void f_006e0b71(void)
{
    FN_ENTER(0x006e0b71);
    /* 006e0b71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0b73: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0b75: jle 0x6e0ba5 */ if ((fZ||fS!=fO)) goto L_006e0ba5;
L_006e0b77:; BB(0x006e0b77);
    /* 006e0b77: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0b7e:; BB(0x006e0b7e);
    /* 006e0b7e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0b80: je 0x6e0ba5 */ if (fZ) goto L_006e0ba5;
L_006e0b82:; BB(0x006e0b82);
    /* 006e0b82: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0b85: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0b8b: je 0x6e0ba5 */ if (fZ) goto L_006e0ba5;
L_006e0b8d:; BB(0x006e0b8d);
    /* 006e0b8d: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0b92: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0b96: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0b99: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0b9e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0ba1: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0ba3: jl 0x6e0b7e */ if ((fS!=fO)) goto L_006e0b7e;
L_006e0ba5:; BB(0x006e0ba5);
    /* 006e0ba5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0ba8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006e0baa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0bac: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0bb1u); f_006ad17c();
    /* 006e0bb1: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0bb5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0bb8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0bbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0bbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0bbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0bbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0bbf: call 0x6e7c4c */ r_esp -= 4; W32(r_esp, 0x6e0bc4u); f_006e7c4c();
    /* 006e0bc4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0bc7: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0bcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0bce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0bcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0bd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0bd1: ret  */ FN_RET(0x006e0b71); r_esp += 4; return;
}

void f_006e0bd2(void)
{
    FN_ENTER(0x006e0bd2);
    /* 006e0bd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0bd4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0bd6: jle 0x6e0c06 */ if ((fZ||fS!=fO)) goto L_006e0c06;
L_006e0bd8:; BB(0x006e0bd8);
    /* 006e0bd8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0bdf:; BB(0x006e0bdf);
    /* 006e0bdf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0be1: je 0x6e0c06 */ if (fZ) goto L_006e0c06;
L_006e0be3:; BB(0x006e0be3);
    /* 006e0be3: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0be6: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0bec: je 0x6e0c06 */ if (fZ) goto L_006e0c06;
L_006e0bee:; BB(0x006e0bee);
    /* 006e0bee: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0bf3: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0bf7: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0bfa: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0bff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0c02: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0c04: jl 0x6e0bdf */ if ((fS!=fO)) goto L_006e0bdf;
L_006e0c06:; BB(0x006e0c06);
    /* 006e0c06: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0c09: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0c0d: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0c12u); f_006ad17c();
    /* 006e0c12: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0c16: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0c19: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0c1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c20: call 0x6e28b4 */ r_esp -= 4; W32(r_esp, 0x6e0c25u); f_006e28b4();
    /* 006e0c25: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0c28: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0c2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0c2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0c30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0c31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0c32: ret  */ FN_RET(0x006e0bd2); r_esp += 4; return;
}

void f_006e0c33(void)
{
    FN_ENTER(0x006e0c33);
    /* 006e0c33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0c35: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0c37: jle 0x6e0c67 */ if ((fZ||fS!=fO)) goto L_006e0c67;
L_006e0c39:; BB(0x006e0c39);
    /* 006e0c39: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0c40:; BB(0x006e0c40);
    /* 006e0c40: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0c42: je 0x6e0c67 */ if (fZ) goto L_006e0c67;
L_006e0c44:; BB(0x006e0c44);
    /* 006e0c44: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0c47: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0c4d: je 0x6e0c67 */ if (fZ) goto L_006e0c67;
L_006e0c4f:; BB(0x006e0c4f);
    /* 006e0c4f: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0c54: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0c58: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0c5b: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0c60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0c63: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0c65: jl 0x6e0c40 */ if ((fS!=fO)) goto L_006e0c40;
L_006e0c67:; BB(0x006e0c67);
    /* 006e0c67: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0c69: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0c6f:; BB(0x006e0c6f);
    /* 006e0c6f: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0c72: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0c76: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0c7bu); f_006ad17c();
    /* 006e0c7b: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0c7f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0c82: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c89: call 0x6e6bf4 */ r_esp -= 4; W32(r_esp, 0x6e0c8eu); f_006e6bf4();
    /* 006e0c8e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0c91: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0c97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0c98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0c99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0c9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0c9b: ret  */ FN_RET(0x006e0c33); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0c33); r_esp += 4; return;
}

void f_006e0c9c(void)
{
    FN_ENTER(0x006e0c9c);
    /* 006e0c9c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0c9e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0ca0: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0ca5u); f_006ad17c();
    /* 006e0ca5: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 006e0ca9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0cad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0cae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0caf: call 0x6ee600 */ r_esp -= 4; W32(r_esp, 0x6e0cb4u); f_006ee600();
    /* 006e0cb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0cb7: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0cbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0cbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0cbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0cc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0cc1: ret  */ FN_RET(0x006e0c9c); r_esp += 4; return;
}

void f_006e0cc2(void)
{
    FN_ENTER(0x006e0cc2);
    /* 006e0cc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0cc4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0cc6: jle 0x6e0cf6 */ if ((fZ||fS!=fO)) goto L_006e0cf6;
L_006e0cc8:; BB(0x006e0cc8);
    /* 006e0cc8: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0ccf:; BB(0x006e0ccf);
    /* 006e0ccf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0cd1: je 0x6e0cf6 */ if (fZ) goto L_006e0cf6;
L_006e0cd3:; BB(0x006e0cd3);
    /* 006e0cd3: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0cd6: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0cdc: je 0x6e0cf6 */ if (fZ) goto L_006e0cf6;
L_006e0cde:; BB(0x006e0cde);
    /* 006e0cde: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0ce3: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0ce7: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0cea: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0cef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0cf2: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0cf4: jl 0x6e0ccf */ if ((fS!=fO)) goto L_006e0ccf;
L_006e0cf6:; BB(0x006e0cf6);
    /* 006e0cf6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0cf8: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0cfe:; BB(0x006e0cfe);
    /* 006e0cfe: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0d01: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d03: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0d05: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0d0au); f_006ad17c();
    /* 006e0d0a: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0d0e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0d11: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0d14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d18: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x6e0d1du); f_006e54a8();
    /* 006e0d1d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0d20: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0d26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0d27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0d28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0d29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0d2a: ret  */ FN_RET(0x006e0cc2); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0cc2); r_esp += 4; return;
}

void f_006e0d2b(void)
{
    FN_ENTER(0x006e0d2b);
    /* 006e0d2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0d2d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0d2f: jle 0x6e0d5f */ if ((fZ||fS!=fO)) goto L_006e0d5f;
L_006e0d31:; BB(0x006e0d31);
    /* 006e0d31: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0d38:; BB(0x006e0d38);
    /* 006e0d38: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0d3a: je 0x6e0d5f */ if (fZ) goto L_006e0d5f;
L_006e0d3c:; BB(0x006e0d3c);
    /* 006e0d3c: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0d3f: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0d45: je 0x6e0d5f */ if (fZ) goto L_006e0d5f;
L_006e0d47:; BB(0x006e0d47);
    /* 006e0d47: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0d4c: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0d50: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0d53: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0d58: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0d5b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0d5d: jl 0x6e0d38 */ if ((fS!=fO)) goto L_006e0d38;
L_006e0d5f:; BB(0x006e0d5f);
    /* 006e0d5f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0d61: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0d67:; BB(0x006e0d67);
    /* 006e0d67: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0d6a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0d6e: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0d73u); f_006ad17c();
    /* 006e0d73: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0d77: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0d7a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d81: call 0x6f2570 */ r_esp -= 4; W32(r_esp, 0x6e0d86u); f_006f2570();
    /* 006e0d86: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0d89: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0d8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0d90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0d91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0d92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0d93: ret  */ FN_RET(0x006e0d2b); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0d2b); r_esp += 4; return;
}

void f_006e0d94(void)
{
    FN_ENTER(0x006e0d94);
    /* 006e0d94: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0d96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0d98: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0d9du); f_006ad17c();
    /* 006e0d9d: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 006e0da1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0da5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0da6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0da7: call 0x6ec2d0 */ r_esp -= 4; W32(r_esp, 0x6e0dacu); f_006ec2d0();
    /* 006e0dac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0daf: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0db5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0db7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0db8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0db9: ret  */ FN_RET(0x006e0d94); r_esp += 4; return;
}

void f_006e0dba(void)
{
    FN_ENTER(0x006e0dba);
    /* 006e0dba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0dbc: je 0x6e0e41 */ if (fZ) goto L_006e0e41;
L_006e0dc2:; BB(0x006e0dc2);
    /* 006e0dc2: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 006e0dc5: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0dca: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0dd0:; BB(0x006e0dd0);
    /* 006e0dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0dd1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e0dd6u); f_007b4d18();
    /* 006e0dd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e0dd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0dd9: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0ddf:; BB(0x006e0ddf);
    /* 006e0ddf: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006e0de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0de7: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0ded:; BB(0x006e0ded);
    /* 006e0ded: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 006e0df1: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006e0df4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0df6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0df8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0dfa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0dfc: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0dfe: mov ebx, dword ptr [eax + ecx*4 + 0x1c] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x1cu));
    /* 006e0e02: mov edi, dword ptr [eax + ecx*4 + 0x20] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x20u));
    /* 006e0e06: mov eax, dword ptr [eax + ecx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x24u));
    /* 006e0e0a: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 006e0e0e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0e10: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 006e0e14: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 006e0e18: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e1a: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0e1fu); f_006ad17c();
    /* 006e0e1f: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0e23: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 006e0e27: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0e2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e2e: call 0x6e4058 */ r_esp -= 4; W32(r_esp, 0x6e0e33u); f_006e4058();
    /* 006e0e33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0e36: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0e3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0e3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0e3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0e3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0e40: ret  */ FN_RET(0x006e0dba); r_esp += 4; return;
L_006e0e41:; BB(0x006e0e41);
    /* 006e0e41: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0e45: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0e4au); f_006ad17c();
    /* 006e0e4a: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 006e0e4e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e52: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e0e55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e57: call 0x6e38e0 */ r_esp -= 4; W32(r_esp, 0x6e0e5cu); f_006e38e0();
    /* 006e0e5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0e5f: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0e65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0e66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0e67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0e68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0e69: ret  */ FN_RET(0x006e0dba); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0dba); r_esp += 4; return;
}

void f_006e0e6a(void)
{
    FN_ENTER(0x006e0e6a);
    /* 006e0e6a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0e6c: je 0x6e0ef0 */ if (fZ) goto L_006e0ef0;
L_006e0e72:; BB(0x006e0e72);
    /* 006e0e72: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 006e0e75: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0e7a: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0e80:; BB(0x006e0e80);
    /* 006e0e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0e81: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e0e86u); f_007b4d18();
    /* 006e0e86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e0e87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0e89: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0e8f:; BB(0x006e0e8f);
    /* 006e0e8f: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006e0e95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0e97: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0e9d:; BB(0x006e0e9d);
    /* 006e0e9d: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 006e0ea1: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006e0ea4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0ea6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0ea8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0eaa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0eac: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0eae: mov ebx, dword ptr [eax + ecx*4 + 0x1c] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x1cu));
    /* 006e0eb2: mov edi, dword ptr [eax + ecx*4 + 0x20] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x20u));
    /* 006e0eb6: mov eax, dword ptr [eax + ecx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x24u));
    /* 006e0eba: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 006e0ebe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0ec0: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 006e0ec4: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 006e0ec8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0eca: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0ecfu); f_006ad17c();
    /* 006e0ecf: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 006e0ed3: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 006e0ed6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0ed9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0eda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0edb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0edc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0edd: call 0x6dddac */ r_esp -= 4; W32(r_esp, 0x6e0ee2u); f_006dddac();
    /* 006e0ee2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0ee5: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0eeb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0eec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0eed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0eee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0eef: ret  */ FN_RET(0x006e0e6a); r_esp += 4; return;
L_006e0ef0:; BB(0x006e0ef0);
    /* 006e0ef0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0ef4: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0ef9u); f_006ad17c();
    /* 006e0ef9: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006e0efc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0eff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f00: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e0f03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f05: call 0x6dd7e4 */ r_esp -= 4; W32(r_esp, 0x6e0f0au); f_006dd7e4();
    /* 006e0f0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0f0d: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0f13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0f14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0f15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0f16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0f17: ret  */ FN_RET(0x006e0e6a); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0e6a); r_esp += 4; return;
}

void f_006e0f18(void)
{
    FN_ENTER(0x006e0f18);
    /* 006e0f18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e0f1a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e0f1c: jle 0x6e0f4c */ if ((fZ||fS!=fO)) goto L_006e0f4c;
L_006e0f1e:; BB(0x006e0f1e);
    /* 006e0f1e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_006e0f25:; BB(0x006e0f25);
    /* 006e0f25: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0f27: je 0x6e0f4c */ if (fZ) goto L_006e0f4c;
L_006e0f29:; BB(0x006e0f29);
    /* 006e0f29: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 006e0f2c: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0f32: je 0x6e0f4c */ if (fZ) goto L_006e0f4c;
L_006e0f34:; BB(0x006e0f34);
    /* 006e0f34: mov word ptr [esp + eax*8 + 4], dx */ W16((u32)(r_esp+r_eax*8+0x4u), (u16)r_edx);
    /* 006e0f39: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 006e0f3d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e0f40: mov word ptr [esp + eax*8 + 6], dx */ W16((u32)(r_esp+r_eax*8+0x6u), (u16)r_edx);
    /* 006e0f45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e0f48: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e0f4a: jl 0x6e0f25 */ if ((fS!=fO)) goto L_006e0f25;
L_006e0f4c:; BB(0x006e0f4c);
    /* 006e0f4c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0f4e: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0f54:; BB(0x006e0f54);
    /* 006e0f54: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e0f57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0f5b: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0f60u); f_006ad17c();
    /* 006e0f60: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e0f64: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006e0f67: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0f6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f6e: call 0x6ed368 */ r_esp -= 4; W32(r_esp, 0x6e0f73u); f_006ed368();
    /* 006e0f73: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0f76: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0f7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0f7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0f7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0f7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0f80: ret  */ FN_RET(0x006e0f18); r_esp += 4; return;
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0f18); r_esp += 4; return;
}

void f_006e0f81(void)
{
    FN_ENTER(0x006e0f81);
    /* 006e0f81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f83: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0f85: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e0f8au); f_006ad17c();
    /* 006e0f8a: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 006e0f8e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e0f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e0f94: call 0x6e46ac */ r_esp -= 4; W32(r_esp, 0x6e0f99u); f_006e46ac();
    /* 006e0f99: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e0f9c: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e0fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e0fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e0fa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e0fa5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e0fa6: ret  */ FN_RET(0x006e0f81); r_esp += 4; return;
}

void f_006e0fa7(void)
{
    FN_ENTER(0x006e0fa7);
    /* 006e0fa7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0fa9: je 0x6e1022 */ if (fZ) goto L_006e1022;
L_006e0fab:; BB(0x006e0fab);
    /* 006e0fab: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 006e0fae: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0fb3: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0fb9:; BB(0x006e0fb9);
    /* 006e0fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e0fba: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e0fbfu); f_007b4d18();
    /* 006e0fbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e0fc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0fc2: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0fc4:; BB(0x006e0fc4);
    /* 006e0fc4: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006e0fca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e0fcc: je 0x6e1040 */ if (fZ) goto L_006e1040;
L_006e0fce:; BB(0x006e0fce);
    /* 006e0fce: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 006e0fd2: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006e0fd5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0fd7: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0fd9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0fdb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0fdd: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e0fdf: mov ebx, dword ptr [eax + ecx*4 + 0x1c] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x1cu));
    /* 006e0fe3: mov edi, dword ptr [eax + ecx*4 + 0x20] */ r_edi = R32((u32)(r_eax+r_ecx*4+0x20u));
    /* 006e0fe7: mov eax, dword ptr [eax + ecx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x24u));
    /* 006e0feb: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 006e0fef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e0ff1: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 006e0ff5: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 006e0ff9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e0ffb: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e1000u); f_006ad17c();
    /* 006e1000: lea ebx, [esp + 0x68] */ r_ebx = (u32)(r_esp+0x68u);
    /* 006e1004: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 006e1008: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e100b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e100c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e100d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e100e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e100f: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x6e1014u); f_006e3408();
    /* 006e1014: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e1017: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e101d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e101e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e101f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1020: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1021: ret  */ FN_RET(0x006e0fa7); r_esp += 4; return;
L_006e1022:; BB(0x006e1022);
    /* 006e1022: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1024: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e1026: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6e102bu); f_006ad17c();
    /* 006e102b: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 006e102f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006e1032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1033: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1036: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1037: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1038: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x6e103du); f_006e2f20();
    /* 006e103d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e1040:; BB(0x006e1040);
    /* 006e1040: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e104a: ret  */ FN_RET(0x006e0fa7); r_esp += 4; return;
}

