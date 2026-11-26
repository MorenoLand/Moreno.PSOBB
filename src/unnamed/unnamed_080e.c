#include "protos.h"

void f_0080e008(void) /* sub_80E008 */
{
    FN_ENTER(0x0080e008);
    /* 0080e008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e009: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e00a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080e00b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e00c: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080e012: mov esi, eax */ r_esi = r_eax;
    /* 0080e014: mov ecx, dword ptr [0xaafeb8] */ r_ecx = R32((u32)(0xaafeb8u));
    /* 0080e01a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0080e01c: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 0080e01f: add ecx, dword ptr [ecx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080e022: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0080e026: mov edx, dword ptr [0xaafe94] */ r_edx = R32((u32)(0xaafe94u));
    /* 0080e02c: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0080e030: imul ecx, edi, -0x18 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0xffffffe8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0080e033: lea ebp, [edx + ecx - 0x10] */ r_ebp = (u32)(r_edx+r_ecx+0xfffffff0u);
    /* 0080e037: push 0x9000 */ { u32 v = 0x9000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080e03c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080e03e: push dword ptr [0xaafeac] */ { u32 v = R32((u32)(0xaafeacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080e044: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x80e049u); f_0086b5cc();
    /* 0080e049: push 0x1400 */ { u32 v = 0x1400u; r_esp -= 4; W32(r_esp, v); }
    /* 0080e04e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080e050: push dword ptr [0xaafea4] */ { u32 v = R32((u32)(0xaafea4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080e056: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x80e05bu); f_0086b688();
    /* 0080e05b: mov dword ptr [0xaafea0], 0 */ W32((u32)(0xaafea0u), 0x0u);
    /* 0080e065: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080e06a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080e06c: push dword ptr [0xaafe9c] */ { u32 v = R32((u32)(0xaafe9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080e072: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x80e077u); f_0086b688();
    /* 0080e077: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080e07a: mov dword ptr [0xaafe98], 0 */ W32((u32)(0xaafe98u), 0x0u);
    /* 0080e084: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e086: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080e088: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e08a: jle 0x80e732 */ if ((fZ||fS!=fO)) goto L_0080e732;
L_0080e090:; BB(0x0080e090);
    /* 0080e090: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0080e094: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0080e098: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 0080e09c: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0080e0a0: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
L_0080e0a4:; BB(0x0080e0a4);
    /* 0080e0a4: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0080e0a8: mov ecx, dword ptr [0xaafec4] */ r_ecx = R32((u32)(0xaafec4u));
    /* 0080e0ae: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0080e0b0: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0080e0b3: mov dword ptr [esp + 0x80], ebp */ W32((u32)(r_esp+0x80u), r_ebp);
    /* 0080e0ba: mov ebp, dword ptr [edi + 8] */ r_ebp = R32((u32)(r_edi+0x8u));
    /* 0080e0bd: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 0080e0c1: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 0080e0c4: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 0080e0c7: mov eax, edi */ r_eax = r_edi;
    /* 0080e0c9: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e0cc: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0080e0cf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e0d2: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80e0d7u); f_00763498();
    /* 0080e0d7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0080e0db: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080e0df: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e0e2: fadd dword ptr [eax*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980828u));
    /* 0080e0e9: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0080e0ed: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e0f1: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080e0f4: fadd dword ptr [ebx*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x980828u));
    /* 0080e0fb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080e0fd: fdiv dword ptr [0x980858] */ ST(0) = ST(0) / R_F32((u32)(0x980858u));
    /* 0080e103: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0080e107: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0080e10c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080e111: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0080e115: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0080e119: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080e11d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080e121: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0080e125: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0080e128: jae 0x80e12f */ if (!fC) goto L_0080e12f;
L_0080e12a:; BB(0x0080e12a);
    /* 0080e12a: mov eax, 1 */ r_eax = 0x1u;
L_0080e12f:; BB(0x0080e12f);
    /* 0080e12f: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 0080e136: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080e138: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080e13b: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0080e13e: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0080e141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e143: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0080e147: jle 0x80e4a7 */ if ((fZ||fS!=fO)) goto L_0080e4a7;
L_0080e14d:; BB(0x0080e14d);
    /* 0080e14d: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 0080e151: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e154: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0080e158: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0080e15b: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0080e15e: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0080e162: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0080e166: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080e169: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 0080e16c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080e16f: mov ebp, edi */ r_ebp = r_edi;
    /* 0080e171: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e177: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 0080e17b: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0080e17e: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080e184: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080e187: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0080e18b: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e18f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0080e193: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e197: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0080e19a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080e19c: fadd dword ptr [edi*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x980828u));
    /* 0080e1a3: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0080e1a7: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080e1aa: fadd dword ptr [esi*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x980828u));
    /* 0080e1b1: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0080e1b5: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0080e1b9: mov ebp, ecx */ r_ebp = r_ecx;
L_0080e1bb:; BB(0x0080e1bb);
    /* 0080e1bb: mov ecx, dword ptr [0xaafec4] */ r_ecx = R32((u32)(0xaafec4u));
    /* 0080e1c1: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80e1c6u); f_00763498();
    /* 0080e1c6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080e1ca: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e1ce: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e1d1: fadd dword ptr [eax*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980828u));
    /* 0080e1d8: fmul dword ptr [esp + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x68u));
    /* 0080e1dc: fdiv dword ptr [0x980858] */ ST(0) = ST(0) / R_F32((u32)(0x980858u));
    /* 0080e1e2: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0080e1e6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0080e1eb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080e1f0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0080e1f4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0080e1f8: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080e1fc: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080e200: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0080e204: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0080e208: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0080e20a: jae 0x80e20e */ if (!fC) goto L_0080e20e;
L_0080e20c:; BB(0x0080e20c);
    /* 0080e20c: mov edi, eax */ r_edi = r_eax;
L_0080e20e:; BB(0x0080e20e);
    /* 0080e20e: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0080e212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080e213: call 0x80e930 */ r_esp -= 4; W32(r_esp, 0x80e218u); f_0080e930();
    /* 0080e218: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080e219: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 0080e21c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e21e: jle 0x80e33f */ if ((fZ||fS!=fO)) goto L_0080e33f;
L_0080e224:; BB(0x0080e224);
    /* 0080e224: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0080e228: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 0080e22c: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0080e230: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
L_0080e234:; BB(0x0080e234);
    /* 0080e234: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0080e238: mov eax, dword ptr [0xaafeac] */ r_eax = R32((u32)(0xaafeacu));
    /* 0080e23d: mov esi, dword ptr [0xaafeb0] */ r_esi = R32((u32)(0xaafeb0u));
    /* 0080e243: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 0080e246: add esi, dword ptr [esi + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080e249: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0080e24d: lea edi, [edi + edi*8] */ r_edi = (u32)(r_edi+r_edi*8);
    /* 0080e250: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0080e253: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e255: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e257: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e259: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0080e25d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e25f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080e261: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e263: jle 0x80e2a5 */ if ((fZ||fS!=fO)) goto L_0080e2a5;
L_0080e265:; BB(0x0080e265);
    /* 0080e265: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e268: jl 0x80e297 */ if ((fS!=fO)) goto L_0080e297;
L_0080e26a:; BB(0x0080e26a);
    /* 0080e26a: lea eax, [ebp - 6] */ r_eax = (u32)(r_ebp+0xfffffffau);
L_0080e26d:; BB(0x0080e26d);
    /* 0080e26d: movzx ecx, byte ptr [esi + edx*4 + 2] */ r_ecx = (u32)R8((u32)(r_esi+r_edx*4+0x2u));
    /* 0080e272: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e274: movzx ecx, byte ptr [esi + edx*4 + 6] */ r_ecx = (u32)R8((u32)(r_esi+r_edx*4+0x6u));
    /* 0080e279: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e27b: movzx ecx, byte ptr [esi + edx*4 + 0xa] */ r_ecx = (u32)R8((u32)(r_esi+r_edx*4+0xau));
    /* 0080e280: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e282: movzx ecx, byte ptr [esi + edx*4 + 0xe] */ r_ecx = (u32)R8((u32)(r_esi+r_edx*4+0xeu));
    /* 0080e287: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e289: movzx ecx, byte ptr [esi + edx*4 + 0x12] */ r_ecx = (u32)R8((u32)(r_esi+r_edx*4+0x12u));
    /* 0080e28e: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e290: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e293: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e295: jle 0x80e26d */ if ((fZ||fS!=fO)) goto L_0080e26d;
L_0080e297:; BB(0x0080e297);
    /* 0080e297: movzx eax, byte ptr [esi + edx*4 + 2] */ r_eax = (u32)R8((u32)(r_esi+r_edx*4+0x2u));
    /* 0080e29c: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e29e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e2a1: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e2a3: jl 0x80e297 */ if ((fS!=fO)) goto L_0080e297;
L_0080e2a5:; BB(0x0080e2a5);
    /* 0080e2a5: mov ecx, dword ptr [0xaafec4] */ r_ecx = R32((u32)(0xaafec4u));
    /* 0080e2ab: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80e2b0u); f_00763498();
    /* 0080e2b0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080e2b4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e2b8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e2bb: fadd dword ptr [eax*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980828u));
    /* 0080e2c2: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0080e2c6: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e2ca: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080e2cd: fadd dword ptr [ebx*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x980828u));
    /* 0080e2d4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080e2d6: fdiv dword ptr [0x980858] */ ST(0) = ST(0) / R_F32((u32)(0x980858u));
    /* 0080e2dc: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0080e2e0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0080e2e5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080e2ea: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0080e2ee: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0080e2f2: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080e2f6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080e2fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080e2fc: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0080e300: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e302: jle 0x80e31e */ if ((fZ||fS!=fO)) goto L_0080e31e;
L_0080e304:; BB(0x0080e304);
    /* 0080e304: movzx ecx, byte ptr [esi + eax*4 + 2] */ r_ecx = (u32)R8((u32)(r_esi+r_eax*4+0x2u));
    /* 0080e309: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e30b: je 0x80e317 */ if (fZ) goto L_0080e317;
L_0080e30d:; BB(0x0080e30d);
    /* 0080e30d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0080e30f: jb 0x80e6d4 */ if (fC) goto L_0080e6d4;
L_0080e315:; BB(0x0080e315);
    /* 0080e315: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_0080e317:; BB(0x0080e317);
    /* 0080e317: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e31a: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e31c: jl 0x80e304 */ if ((fS!=fO)) goto L_0080e304;
L_0080e31e:; BB(0x0080e31e);
    /* 0080e31e: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 0080e322: mov edx, eax */ r_edx = r_eax;
    /* 0080e324: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e327: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0080e32b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e32d: jg 0x80e234 */ if ((!fZ&&fS==fO)) goto L_0080e234;
L_0080e333:; BB(0x0080e333);
    /* 0080e333: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0080e337: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 0080e33b: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
L_0080e33f:; BB(0x0080e33f);
    /* 0080e33f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e341: jle 0x80e498 */ if ((fZ||fS!=fO)) goto L_0080e498;
L_0080e347:; BB(0x0080e347);
    /* 0080e347: mov eax, dword ptr [0xaafea0] */ r_eax = R32((u32)(0xaafea0u));
    /* 0080e34c: mov edx, dword ptr [0xaafea4] */ r_edx = R32((u32)(0xaafea4u));
    /* 0080e352: lea edi, [eax + eax*4] */ r_edi = (u32)(r_eax+r_eax*4);
    /* 0080e355: mov dword ptr [edx + edi*4], ebx */ W32((u32)(r_edx+r_edi*4), r_ebx);
    /* 0080e358: mov ebx, dword ptr [0xaafea4] */ r_ebx = R32((u32)(0xaafea4u));
    /* 0080e35e: mov eax, dword ptr [0xaafea0] */ r_eax = R32((u32)(0xaafea0u));
    /* 0080e363: mov ecx, dword ptr [0xaafec4] */ r_ecx = R32((u32)(0xaafec4u));
    /* 0080e369: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080e36c: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 0080e370: mov word ptr [ebx + edx*4 + 4], ax */ W16((u32)(r_ebx+r_edx*4+0x4u), (u16)r_eax);
    /* 0080e375: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 0080e379: mov word ptr [ebx + edx*4 + 6], ax */ W16((u32)(r_ebx+r_edx*4+0x6u), (u16)r_eax);
    /* 0080e37e: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0080e382: mov word ptr [ebx + edx*4 + 8], ax */ W16((u32)(r_ebx+r_edx*4+0x8u), (u16)r_eax);
    /* 0080e387: mov word ptr [ebx + edx*4 + 0xa], bp */ W16((u32)(r_ebx+r_edx*4+0xau), (u16)r_ebp);
    /* 0080e38c: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80e391u); f_00763498();
    /* 0080e391: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080e395: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e399: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e39c: fadd dword ptr [eax*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980828u));
    /* 0080e3a3: fmul dword ptr [esp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x6cu));
    /* 0080e3a7: fdiv dword ptr [0x980858] */ ST(0) = ST(0) / R_F32((u32)(0x980858u));
    /* 0080e3ad: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0080e3b1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0080e3b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080e3bb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0080e3bf: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0080e3c3: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080e3c7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080e3cb: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0080e3cf: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0080e3d3: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0080e3d5: jae 0x80e3d9 */ if (!fC) goto L_0080e3d9;
L_0080e3d7:; BB(0x0080e3d7);
    /* 0080e3d7: mov ebx, eax */ r_ebx = r_eax;
L_0080e3d9:; BB(0x0080e3d9);
    /* 0080e3d9: mov edx, dword ptr [0xaafea4] */ r_edx = R32((u32)(0xaafea4u));
    /* 0080e3df: mov edi, dword ptr [0xaafea0] */ r_edi = R32((u32)(0xaafea0u));
    /* 0080e3e5: mov byte ptr [esp + 0x84], 0xc */ W8((u32)(r_esp+0x84u), 0xcu);
    /* 0080e3ed: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 0080e3f0: mov edi, dword ptr [0xaafe98] */ r_edi = R32((u32)(0xaafe98u));
    /* 0080e3f6: mov dword ptr [edx + eax*4 + 0xc], ebx */ W32((u32)(r_edx+r_eax*4+0xcu), r_ebx);
    /* 0080e3fa: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0080e3fe: lea ebx, [ebx + edi] */ r_ebx = (u32)(r_ebx+r_edi);
    /* 0080e401: mov dword ptr [edx + eax*4 + 0x10], ebx */ W32((u32)(r_edx+r_eax*4+0x10u), r_ebx);
    /* 0080e405: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 0080e40c: mov edx, dword ptr [0xaafe9c] */ r_edx = R32((u32)(0xaafe9cu));
    /* 0080e412: lea eax, [eax + ebp + 0x2710] */ r_eax = (u32)(r_eax+r_ebp+0x2710u);
    /* 0080e419: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0080e41c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e41e: je 0x80e441 */ if (fZ) goto L_0080e441;
L_0080e420:; BB(0x0080e420);
    /* 0080e420: movzx eax, byte ptr [esp + 0x84] */ r_eax = (u32)R8((u32)(r_esp+0x84u));
    /* 0080e428: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e42a: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0080e42c: mov edi, dword ptr [0xaafe98] */ r_edi = R32((u32)(0xaafe98u));
    /* 0080e432: mov edx, dword ptr [0xaafe9c] */ r_edx = R32((u32)(0xaafe9cu));
    /* 0080e438: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080e43b: mov dword ptr [0xaafe98], edi */ W32((u32)(0xaafe98u), r_edi);
L_0080e441:; BB(0x0080e441);
    /* 0080e441: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0080e444: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e446: je 0x80e46f */ if (fZ) goto L_0080e46f;
L_0080e448:; BB(0x0080e448);
    /* 0080e448: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0080e44f: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 0080e456: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e458: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0080e45a: mov edi, dword ptr [0xaafe98] */ r_edi = R32((u32)(0xaafe98u));
    /* 0080e460: mov edx, dword ptr [0xaafe9c] */ r_edx = R32((u32)(0xaafe9cu));
    /* 0080e466: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080e469: mov dword ptr [0xaafe98], edi */ W32((u32)(0xaafe98u), r_edi);
L_0080e46f:; BB(0x0080e46f);
    /* 0080e46f: mov byte ptr [esp + 0x84], 1 */ W8((u32)(r_esp+0x84u), 0x1u);
    /* 0080e477: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e479: je 0x80e48e */ if (fZ) goto L_0080e48e;
L_0080e47b:; BB(0x0080e47b);
    /* 0080e47b: movzx eax, byte ptr [esp + 0x84] */ r_eax = (u32)R8((u32)(r_esp+0x84u));
    /* 0080e483: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e485: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0080e487: add dword ptr [0xaafe98], 1 */ { u32 ad = (u32)(0xaafe98u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080e48e:; BB(0x0080e48e);
    /* 0080e48e: add dword ptr [0xaafea0], 1 */ { u32 ad = (u32)(0xaafea0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080e495: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0080e498:; BB(0x0080e498);
    /* 0080e498: mov eax, esi */ r_eax = r_esi;
    /* 0080e49a: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080e49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e49f: jg 0x80e1bb */ if ((!fZ&&fS==fO)) goto L_0080e1bb;
L_0080e4a5:; BB(0x0080e4a5);
    /* 0080e4a5: mov ecx, ebp */ r_ecx = r_ebp;
L_0080e4a7:; BB(0x0080e4a7);
    /* 0080e4a7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0080e4ab: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0080e4ae: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0080e4b1: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 0080e4b4: mov edi, dword ptr [edi + 0x14] */ r_edi = R32((u32)(r_edi+0x14u));
    /* 0080e4b7: mov dword ptr [esp + 0x80], edi */ W32((u32)(r_esp+0x80u), r_edi);
    /* 0080e4be: mov edi, dword ptr [0xaafea0] */ r_edi = R32((u32)(0xaafea0u));
    /* 0080e4c4: lea ebp, [edi + edi*4] */ r_ebp = (u32)(r_edi+r_edi*4);
    /* 0080e4c7: mov edi, dword ptr [0xaafea4] */ r_edi = R32((u32)(0xaafea4u));
    /* 0080e4cd: mov dword ptr [edi + ebp*4], ebx */ W32((u32)(r_edi+r_ebp*4), r_ebx);
    /* 0080e4d0: mov edi, dword ptr [0xaafea4] */ r_edi = R32((u32)(0xaafea4u));
    /* 0080e4d6: mov ebx, dword ptr [0xaafea0] */ r_ebx = R32((u32)(0xaafea0u));
    /* 0080e4dc: lea ebx, [ebx + ebx*4] */ r_ebx = (u32)(r_ebx+r_ebx*4);
    /* 0080e4df: mov word ptr [edi + ebx*4 + 4], dx */ W16((u32)(r_edi+r_ebx*4+0x4u), (u16)r_edx);
    /* 0080e4e4: mov word ptr [edi + ebx*4 + 8], ax */ W16((u32)(r_edi+r_ebx*4+0x8u), (u16)r_eax);
    /* 0080e4e9: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080e4ec: mov word ptr [edi + ebx*4 + 6], dx */ W16((u32)(r_edi+r_ebx*4+0x6u), (u16)r_edx);
    /* 0080e4f1: mov word ptr [edi + ebx*4 + 0xa], cx */ W16((u32)(r_edi+r_ebx*4+0xau), (u16)r_ecx);
    /* 0080e4f6: movsx ebx, si */ r_ebx = (u32)(i32)(i16)(u16)r_esi;
    /* 0080e4f9: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080e4fc: mov ecx, dword ptr [0xaafec4] */ r_ecx = R32((u32)(0xaafec4u));
    /* 0080e502: movsx ebp, si */ r_ebp = (u32)(i32)(i16)(u16)r_esi;
    /* 0080e505: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e508: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80e50du); f_00763498();
    /* 0080e50d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080e511: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e515: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e518: fadd dword ptr [eax*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980828u));
    /* 0080e51f: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0080e523: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0080e527: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0080e52a: fadd dword ptr [ebp*4 + 0x980828] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x980828u));
    /* 0080e531: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080e533: fdiv dword ptr [0x980858] */ ST(0) = ST(0) / R_F32((u32)(0x980858u));
    /* 0080e539: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0080e53d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0080e542: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080e547: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0080e54b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0080e54f: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080e553: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080e557: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0080e55b: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0080e55d: jb 0x80e561 */ if (fC) goto L_0080e561;
L_0080e55f:; BB(0x0080e55f);
    /* 0080e55f: mov ebx, eax */ r_ebx = r_eax;
L_0080e561:; BB(0x0080e561);
    /* 0080e561: mov edx, dword ptr [0xaafea4] */ r_edx = R32((u32)(0xaafea4u));
    /* 0080e567: mov eax, dword ptr [0xaafea0] */ r_eax = R32((u32)(0xaafea0u));
    /* 0080e56c: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 0080e570: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 0080e574: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0080e577: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e57a: add dword ptr [esp + 0x30], 0x18 */ { u32 ad = (u32)(r_esp+0x30u);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080e57f: mov dword ptr [edx + ecx*4 + 0xc], ebx */ W32((u32)(r_edx+r_ecx*4+0xcu), r_ebx);
    /* 0080e583: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 0080e58a: mov dword ptr [edx + ecx*4 + 0x10], ebx */ W32((u32)(r_edx+r_ecx*4+0x10u), r_ebx);
    /* 0080e58e: mov dword ptr [0xaafea0], eax */ W32((u32)(0xaafea0u), r_eax);
    /* 0080e593: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e596: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 0080e59a: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e59c: jl 0x80e0a4 */ if ((fS!=fO)) goto L_0080e0a4;
L_0080e5a2:; BB(0x0080e5a2);
    /* 0080e5a2: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0080e5a6: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0080e5aa: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0080e5ae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e5b0: jle 0x80e5e3 */ if ((fZ||fS!=fO)) goto L_0080e5e3;
L_0080e5b2:; BB(0x0080e5b2);
    /* 0080e5b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e5b3: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x80e5b8u); f_0080c2dc();
    /* 0080e5b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080e5b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e5ba: push dword ptr [0xaafeac] */ { u32 v = R32((u32)(0xaafeacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080e5c0: call 0x80ee4c */ r_esp -= 4; W32(r_esp, 0x80e5c5u); f_0080ee4c();
    /* 0080e5c5: lea edx, [ebx + ebx*8] */ r_edx = (u32)(r_ebx+r_ebx*8);
    /* 0080e5c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e5ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e5cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e5ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e5cf: push dword ptr [0xaafeac] */ { u32 v = R32((u32)(0xaafeacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080e5d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e5d6: call 0x810030 */ r_esp -= 4; W32(r_esp, 0x80e5dbu); f_00810030();
    /* 0080e5db: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080e5de: mov eax, dword ptr [0xaafea0] */ r_eax = R32((u32)(0xaafea0u));
L_0080e5e3:; BB(0x0080e5e3);
    /* 0080e5e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e5e5: jle 0x80e6c9 */ if ((fZ||fS!=fO)) goto L_0080e6c9;
L_0080e5eb:; BB(0x0080e5eb);
    /* 0080e5eb: mov ebx, dword ptr [0xaafe98] */ r_ebx = R32((u32)(0xaafe98u));
    /* 0080e5f1: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e5f4: and ebx, 0xfffffffc */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e5f7: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080e5fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e5fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e5fe: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e600: lea ecx, [edx + ebx + 0x10] */ r_ecx = (u32)(r_edx+r_ebx+0x10u);
    /* 0080e604: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e605: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e606: call 0x80d23c */ r_esp -= 4; W32(r_esp, 0x80e60bu); f_0080d23c();
    /* 0080e60b: mov esi, eax */ r_esi = r_eax;
    /* 0080e60d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080e610: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e612: je 0x80e6c9 */ if (fZ) goto L_0080e6c9;
L_0080e618:; BB(0x0080e618);
    /* 0080e618: mov edx, dword ptr [0xaafea0] */ r_edx = R32((u32)(0xaafea0u));
    /* 0080e61e: mov dword ptr [esp + 0x90], 0x10 */ W32((u32)(r_esp+0x90u), 0x10u);
    /* 0080e629: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0080e62c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080e62e: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 0080e635: lea edi, [ecx + ecx + 0x10] */ r_edi = (u32)(r_ecx+r_ecx+0x10u);
    /* 0080e639: mov dword ptr [esp + 0x8c], edi */ W32((u32)(r_esp+0x8cu), r_edi);
    /* 0080e640: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 0080e647: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0080e649: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 0080e650: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0080e653: mov edx, dword ptr [esp + 0x94] */ r_edx = R32((u32)(r_esp+0x94u));
    /* 0080e65a: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0080e65d: mov edx, dword ptr [esp + 0x98] */ r_edx = R32((u32)(r_esp+0x98u));
    /* 0080e664: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 0080e667: mov edx, dword ptr [0xaafea0] */ r_edx = R32((u32)(0xaafea0u));
    /* 0080e66d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e66f: jle 0x80e68b */ if ((fZ||fS!=fO)) goto L_0080e68b;
L_0080e671:; BB(0x0080e671);
    /* 0080e671: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080e674: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0080e677: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e679: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e67b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e67c: push dword ptr [0xaafea4] */ { u32 v = R32((u32)(0xaafea4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080e682: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e683: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x80e688u); f_0086b6b8();
    /* 0080e688: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080e68b:; BB(0x0080e68b);
    /* 0080e68b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e68d: jle 0x80e6b3 */ if ((fZ||fS!=fO)) goto L_0080e6b3;
L_0080e68f:; BB(0x0080e68f);
    /* 0080e68f: mov edx, dword ptr [0xaafea0] */ r_edx = R32((u32)(0xaafea0u));
    /* 0080e695: mov edi, dword ptr [0xaafeb8] */ r_edi = R32((u32)(0xaafeb8u));
    /* 0080e69b: add edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080e69f: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0080e6a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080e6a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e6a4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080e6a6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080e6a8: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080e6aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e6ab: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x80e6b0u); f_0086b6b8();
    /* 0080e6b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080e6b3:; BB(0x0080e6b3);
    /* 0080e6b3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e6b5: jle 0x80e6c9 */ if ((fZ||fS!=fO)) goto L_0080e6c9;
L_0080e6b7:; BB(0x0080e6b7);
    /* 0080e6b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e6b8: push dword ptr [0xaafe9c] */ { u32 v = R32((u32)(0xaafe9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080e6be: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080e6c1: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x80e6c6u); f_0086b6b8();
    /* 0080e6c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080e6c9:; BB(0x0080e6c9);
    /* 0080e6c9: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080e6cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080e6d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080e6d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080e6d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080e6d3: ret  */ FN_RET(0x0080e008); r_esp += 4; return;
L_0080e6d4:; BB(0x0080e6d4);
    /* 0080e6d4: movzx edx, byte ptr [esi + eax*4 + 1] */ r_edx = (u32)R8((u32)(r_esi+r_eax*4+0x1u));
    /* 0080e6d9: movzx eax, byte ptr [esi + eax*4] */ r_eax = (u32)R8((u32)(r_esi+r_eax*4));
    /* 0080e6dd: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e6e0: je 0x80e31e */ if (fZ) goto L_0080e31e;
L_0080e6e6:; BB(0x0080e6e6);
    /* 0080e6e6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e6e9: je 0x80e31e */ if (fZ) goto L_0080e31e;
L_0080e6ef:; BB(0x0080e6ef);
    /* 0080e6ef: mov ecx, dword ptr [eax*4 + 0x980760] */ r_ecx = R32((u32)(r_eax*4+0x980760u));
    /* 0080e6f6: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 0080e6fa: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0080e6fe: mov word ptr [ebx + edi*8], cx */ W16((u32)(r_ebx+r_edi*8), (u16)r_ecx);
    /* 0080e702: call 0x80e744 */ r_esp -= 4; W32(r_esp, 0x80e707u); f_0080e744();
    /* 0080e707: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0080e70b: call 0x80e884 */ r_esp -= 4; W32(r_esp, 0x80e710u); f_0080e884();
    /* 0080e710: mov ecx, dword ptr [0xaafeac] */ r_ecx = R32((u32)(0xaafeacu));
    /* 0080e716: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0080e71a: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0080e71e: mov word ptr [ecx + edi*8 + 0xe], ax */ W16((u32)(r_ecx+r_edi*8+0xeu), (u16)r_eax);
    /* 0080e723: mov word ptr [ecx + edi*8 + 0xc], dx */ W16((u32)(r_ecx+r_edi*8+0xcu), (u16)r_edx);
    /* 0080e728: add dword ptr [esp + 0x44], 1 */ { u32 ad = (u32)(r_esp+0x44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080e72d: jmp 0x80e31e */ goto L_0080e31e;
L_0080e732:; BB(0x0080e732);
    /* 0080e732: mov eax, dword ptr [0xaafea0] */ r_eax = R32((u32)(0xaafea0u));
    /* 0080e737: jmp 0x80e5e3 */ goto L_0080e5e3;
}

void f_0080e744(void) /* sub_80E744 */
{
    FN_ENTER(0x0080e744);
    /* 0080e744: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e745: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e746: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080e747: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e748: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080e74b: mov edi, edx */ r_edi = r_edx;
    /* 0080e74d: mov ebx, eax */ r_ebx = r_eax;
    /* 0080e74f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e751: mov edx, dword ptr [0xaafeb0] */ r_edx = R32((u32)(0xaafeb0u));
    /* 0080e757: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0080e75a: add edx, dword ptr [edx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e75c: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080e75f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e761: jle 0x80e789 */ if ((fZ||fS!=fO)) goto L_0080e789;
L_0080e763:; BB(0x0080e763);
    /* 0080e763: lea esi, [ebp + ecx] */ r_esi = (u32)(r_ebp+r_ecx);
    /* 0080e767: mov eax, esi */ r_eax = r_esi;
    /* 0080e769: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e76c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080e76e: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080e770: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0080e773: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e775: movsx eax, word ptr [edx + eax*8 + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*8+0x18u));
    /* 0080e77a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e77c: jle 0x80e783 */ if ((fZ||fS!=fO)) goto L_0080e783;
L_0080e77e:; BB(0x0080e77e);
    /* 0080e77e: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 0080e781: jmp 0x80e785 */ goto L_0080e785;
L_0080e783:; BB(0x0080e783);
    /* 0080e783: mov ecx, esi */ r_ecx = r_esi;
L_0080e785:; BB(0x0080e785);
    /* 0080e785: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e787: jl 0x80e763 */ if ((fS!=fO)) goto L_0080e763;
L_0080e789:; BB(0x0080e789);
    /* 0080e789: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e78b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e78d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e78f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e791: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e793: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e795: movsx ecx, word ptr [edx + 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x18u));
    /* 0080e799: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e79b: je 0x80e79f */ if (fZ) goto L_0080e79f;
L_0080e79d:; BB(0x0080e79d);
    /* 0080e79d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0080e79f:; BB(0x0080e79f);
    /* 0080e79f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080e7a1: je 0x80e7fc */ if (fZ) goto L_0080e7fc;
L_0080e7a3:; BB(0x0080e7a3);
    /* 0080e7a3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0080e7a5: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 0080e7a8: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 0080e7ab: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 0080e7ae: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0080e7b1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0080e7b5: movzx eax, word ptr [edx + 0x14] */ r_eax = (u32)R16((u32)(r_edx+0x14u));
    /* 0080e7b9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0080e7bd: movzx eax, word ptr [edx + 0x16] */ r_eax = (u32)R16((u32)(r_edx+0x16u));
    /* 0080e7c1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080e7c5: movsx eax, word ptr [edx + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1cu));
    /* 0080e7c9: movsx edx, word ptr [edx + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 0080e7cd: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 0080e7d0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0080e7d4: mov dword ptr [ebx + 0x30], ebp */ W32((u32)(r_ebx+0x30u), r_ebp);
    /* 0080e7d7: mov dword ptr [ebx + 0x34], esi */ W32((u32)(r_ebx+0x34u), r_esi);
    /* 0080e7da: mov dword ptr [ebx + 0x38], edi */ W32((u32)(r_ebx+0x38u), r_edi);
    /* 0080e7dd: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0080e7e0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e7e3: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0080e7e7: mov word ptr [ebx + 0x40], cx */ W16((u32)(r_ebx+0x40u), (u16)r_ecx);
    /* 0080e7eb: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0080e7ef: mov word ptr [ebx + 0x42], cx */ W16((u32)(r_ebx+0x42u), (u16)r_ecx);
    /* 0080e7f3: call 0x80e80c */ r_esp -= 4; W32(r_esp, 0x80e7f8u); f_0080e80c();
    /* 0080e7f8: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
L_0080e7fc:; BB(0x0080e7fc);
    /* 0080e7fc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080e7ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080e800: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080e801: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080e802: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080e803: ret  */ FN_RET(0x0080e744); r_esp += 4; return;
}

void f_0080e80c(void) /* sub_80E80C */
{
    FN_ENTER(0x0080e80c);
    /* 0080e80c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080e80d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e80e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080e811: mov ebx, edx */ r_ebx = r_edx;
    /* 0080e813: mov ebp, eax */ r_ebp = r_eax;
    /* 0080e815: mov ecx, dword ptr [0xaafec4] */ r_ecx = R32((u32)(0xaafec4u));
    /* 0080e81b: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80e820u); f_00763498();
    /* 0080e820: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0080e823: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0080e826: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e829: fadd dword ptr [eax*4 + 0x980820] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980820u));
    /* 0080e830: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080e834: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080e838: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080e83b: fadd dword ptr [ebx*4 + 0x980820] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x980820u));
    /* 0080e842: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080e844: fdiv dword ptr [0x980854] */ ST(0) = ST(0) / R_F32((u32)(0x980854u));
    /* 0080e84a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0080e84e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0080e853: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080e858: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080e85c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080e860: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080e864: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080e868: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0080e86c: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0080e86e: jae 0x80e878 */ if (!fC) goto L_0080e878;
L_0080e870:; BB(0x0080e870);
    /* 0080e870: mov eax, ebp */ r_eax = r_ebp;
    /* 0080e872: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080e875: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080e876: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080e877: ret  */ FN_RET(0x0080e80c); r_esp += 4; return;
L_0080e878:; BB(0x0080e878);
    /* 0080e878: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080e87b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080e87c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080e87d: ret  */ FN_RET(0x0080e80c); r_esp += 4; return;
}

void f_0080e884(void) /* sub_80E884 */
{
    FN_ENTER(0x0080e884);
    /* 0080e884: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e885: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080e888: mov edi, eax */ r_edi = r_eax;
    /* 0080e88a: mov ecx, dword ptr [0xaafebc] */ r_ecx = R32((u32)(0xaafebcu));
    /* 0080e890: call 0x80e918 */ r_esp -= 4; W32(r_esp, 0x80e895u); f_0080e918();
    /* 0080e895: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e897: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e899: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0080e89c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e89e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e8a0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0080e8a2: mov eax, dword ptr [0xaafea8] */ r_eax = R32((u32)(0xaafea8u));
    /* 0080e8a7: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0080e8aa: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0080e8ad: mov ecx, dword ptr [edx + eax + 4] */ r_ecx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0080e8b1: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0080e8b5: mov ecx, dword ptr [edx + eax + 8] */ r_ecx = R32((u32)(r_edx+r_eax+0x8u));
    /* 0080e8b9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0080e8bd: mov ecx, dword ptr [edx + eax + 0xc] */ r_ecx = R32((u32)(r_edx+r_eax+0xcu));
    /* 0080e8c1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0080e8c5: mov ecx, dword ptr [edx + eax + 0x10] */ r_ecx = R32((u32)(r_edx+r_eax+0x10u));
    /* 0080e8c9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0080e8cd: mov ecx, dword ptr [edx + eax + 0x14] */ r_ecx = R32((u32)(r_edx+r_eax+0x14u));
    /* 0080e8d1: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0080e8d5: movzx ecx, word ptr [edx + eax + 0x18] */ r_ecx = (u32)R16((u32)(r_edx+r_eax+0x18u));
    /* 0080e8da: mov word ptr [esp + 0x18], cx */ W16((u32)(r_esp+0x18u), (u16)r_ecx);
    /* 0080e8df: movzx edx, word ptr [edx + eax + 0x1a] */ r_edx = (u32)R16((u32)(r_edx+r_eax+0x1au));
    /* 0080e8e4: mov word ptr [esp + 0x1a], dx */ W16((u32)(r_esp+0x1au), (u16)r_edx);
    /* 0080e8e9: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0080e8ec: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 0080e8ef: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0080e8f3: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 0080e8f6: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0080e8fa: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 0080e8fd: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0080e901: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 0080e904: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0080e908: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0080e90b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0080e90f: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0080e912: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080e915: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080e916: ret  */ FN_RET(0x0080e884); r_esp += 4; return;
}

void f_0080e918(void) /* sub_80E918 */
{
    FN_ENTER(0x0080e918);
    /* 0080e918: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0080e91b: cmp eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080e91e: jle 0x80e923 */ if ((fZ||fS!=fO)) goto L_0080e923;
L_0080e920:; BB(0x0080e920);
    /* 0080e920: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080e922: ret  */ FN_RET(0x0080e918); r_esp += 4; return;
L_0080e923:; BB(0x0080e923);
    /* 0080e923: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0080e926: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0080e929: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0080e92c: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0080e92f: ret  */ FN_RET(0x0080e918); r_esp += 4; return;
}

void f_0080e930(void) /* sub_80E930 */
{
    FN_ENTER(0x0080e930);
    /* 0080e930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e931: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080e932: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080e933: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080e934: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080e937: mov eax, dword ptr [0xaafeb4] */ r_eax = R32((u32)(0xaafeb4u));
    /* 0080e93c: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0080e93e: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0080e941: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0080e944: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080e946: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080e948: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080e94b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e94d: jle 0x80e97a */ if ((fZ||fS!=fO)) goto L_0080e97a;
L_0080e94f:; BB(0x0080e94f);
    /* 0080e94f: movsx edi, word ptr [esp + 0x40] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x40u));
    /* 0080e954: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_0080e958:; BB(0x0080e958);
    /* 0080e958: lea ebx, [ecx + edx] */ r_ebx = (u32)(r_ecx+r_edx);
    /* 0080e95b: mov eax, ebx */ r_eax = r_ebx;
    /* 0080e95d: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e960: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080e962: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0080e964: cmp di, word ptr [ebp + ebx*8] */ {  u32 a = (u16)r_edi; u32 b = R16((u32)(r_ebp+r_ebx*8)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080e969: jle 0x80e970 */ if ((fZ||fS!=fO)) goto L_0080e970;
L_0080e96b:; BB(0x0080e96b);
    /* 0080e96b: lea ecx, [ebx + 1] */ r_ecx = (u32)(r_ebx+0x1u);
    /* 0080e96e: jmp 0x80e972 */ goto L_0080e972;
L_0080e970:; BB(0x0080e970);
    /* 0080e970: mov edx, ebx */ r_edx = r_ebx;
L_0080e972:; BB(0x0080e972);
    /* 0080e972: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e974: jl 0x80e958 */ if ((fS!=fO)) goto L_0080e958;
L_0080e976:; BB(0x0080e976);
    /* 0080e976: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
L_0080e97a:; BB(0x0080e97a);
    /* 0080e97a: movsx edx, word ptr [esp + 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x40u));
    /* 0080e97f: movsx ebx, word ptr [ebp + ecx*8 + 2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx*8+0x2u));
    /* 0080e984: mov edi, dword ptr [ebp + ecx*8 + 4] */ r_edi = R32((u32)(r_ebp+r_ecx*8+0x4u));
    /* 0080e988: cmp dx, word ptr [ebp + ecx*8] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebp+r_ecx*8)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0080e98d: jne 0x80ebb0 */ if (!fZ) goto L_0080ebb0;
L_0080e993:; BB(0x0080e993);
    /* 0080e993: mov ebp, dword ptr [0xaafebc] */ r_ebp = R32((u32)(0xaafebcu));
    /* 0080e999: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0080e9a0: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e9a2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e9a4: mov dword ptr [0xaafea8], eax */ W32((u32)(0xaafea8u), r_eax);
    /* 0080e9a9: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 0080e9ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080e9ae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e9b0: jle 0x80e9c2 */ if ((fZ||fS!=fO)) goto L_0080e9c2;
L_0080e9b2:; BB(0x0080e9b2);
    /* 0080e9b2: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0080e9b5: mov dword ptr [edx + eax*4], eax */ W32((u32)(r_edx+r_eax*4), r_eax);
    /* 0080e9b8: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0080e9bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080e9be: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080e9c0: jl 0x80e9b2 */ if ((fS!=fO)) goto L_0080e9b2;
L_0080e9c2:; BB(0x0080e9c2);
    /* 0080e9c2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080e9c4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080e9c6: jle 0x80ea3c */ if ((fZ||fS!=fO)) goto L_0080ea3c;
L_0080e9c8:; BB(0x0080e9c8);
    /* 0080e9c8: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0080e9cb: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80e9d0u); f_00763498();
    /* 0080e9d0: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0080e9d3: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0080e9d6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0080e9d9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0080e9dc: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080e9e0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080e9e4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080e9e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080e9e9: fadd dword ptr [eax*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980808u));
    /* 0080e9f0: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080e9f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080e9f5: fadd dword ptr [ebx*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x980808u));
    /* 0080e9fc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080e9fe: fdiv dword ptr [0x980848] */ ST(0) = ST(0) / R_F32((u32)(0x980848u));
    /* 0080ea04: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0080ea08: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0080ea0d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080ea12: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080ea16: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080ea1a: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080ea1e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080ea22: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0080ea26: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0080ea29: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 0080ea2c: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 0080ea2f: mov dword ptr [ebx + edi*4], ecx */ W32((u32)(r_ebx+r_edi*4), r_ecx);
    /* 0080ea32: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0080ea35: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ea38: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ea3a: jl 0x80e9c8 */ if ((fS!=fO)) goto L_0080e9c8;
L_0080ea3c:; BB(0x0080ea3c);
    /* 0080ea3c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080ea3e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ea40: jle 0x80eab8 */ if ((fZ||fS!=fO)) goto L_0080eab8;
L_0080ea42:; BB(0x0080ea42);
    /* 0080ea42: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0080ea45: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80ea4au); f_00763498();
    /* 0080ea4a: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0080ea4d: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0080ea50: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0080ea54: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080ea58: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080ea5c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080ea60: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080ea63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080ea65: fadd dword ptr [eax*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980808u));
    /* 0080ea6c: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080ea6f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080ea71: fadd dword ptr [ebx*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x980808u));
    /* 0080ea78: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080ea7a: fdiv dword ptr [0x980848] */ ST(0) = ST(0) / R_F32((u32)(0x980848u));
    /* 0080ea80: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0080ea84: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0080ea89: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080ea8e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080ea92: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080ea96: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080ea9a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080ea9e: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0080eaa2: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0080eaa5: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 0080eaa8: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 0080eaab: mov dword ptr [ebx + edi*4], ecx */ W32((u32)(r_ebx+r_edi*4), r_ecx);
    /* 0080eaae: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0080eab1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080eab4: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080eab6: jl 0x80ea42 */ if ((fS!=fO)) goto L_0080ea42;
L_0080eab8:; BB(0x0080eab8);
    /* 0080eab8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080eaba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080eabc: jle 0x80eb34 */ if ((fZ||fS!=fO)) goto L_0080eb34;
L_0080eabe:; BB(0x0080eabe);
    /* 0080eabe: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0080eac1: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80eac6u); f_00763498();
    /* 0080eac6: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0080eac9: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0080eacc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0080ead0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080ead4: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080ead8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080eadc: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080eadf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080eae1: fadd dword ptr [eax*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980808u));
    /* 0080eae8: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080eaeb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080eaed: fadd dword ptr [ebx*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x980808u));
    /* 0080eaf4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080eaf6: fdiv dword ptr [0x980848] */ ST(0) = ST(0) / R_F32((u32)(0x980848u));
    /* 0080eafc: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0080eb00: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0080eb05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080eb0a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080eb0e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080eb12: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080eb16: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080eb1a: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0080eb1e: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0080eb21: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 0080eb24: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 0080eb27: mov dword ptr [ebx + edi*4], ecx */ W32((u32)(r_ebx+r_edi*4), r_ecx);
    /* 0080eb2a: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0080eb2d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080eb30: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080eb32: jl 0x80eabe */ if ((fS!=fO)) goto L_0080eabe;
L_0080eb34:; BB(0x0080eb34);
    /* 0080eb34: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080eb36: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080eb38: jle 0x80ebb0 */ if ((fZ||fS!=fO)) goto L_0080ebb0;
L_0080eb3a:; BB(0x0080eb3a);
    /* 0080eb3a: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0080eb3d: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x80eb42u); f_00763498();
    /* 0080eb42: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0080eb45: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0080eb48: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0080eb4c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080eb50: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080eb54: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0080eb58: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0080eb5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080eb5d: fadd dword ptr [eax*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x980808u));
    /* 0080eb64: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080eb67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080eb69: fadd dword ptr [ebx*4 + 0x980808] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x980808u));
    /* 0080eb70: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0080eb72: fdiv dword ptr [0x980848] */ ST(0) = ST(0) / R_F32((u32)(0x980848u));
    /* 0080eb78: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0080eb7c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0080eb81: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080eb86: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0080eb8a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0080eb8e: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080eb92: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0080eb96: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0080eb9a: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 0080eb9d: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 0080eba0: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 0080eba3: mov dword ptr [ebx + edi*4], ecx */ W32((u32)(r_ebx+r_edi*4), r_ecx);
    /* 0080eba6: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0080eba9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ebac: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ebae: jl 0x80eb3a */ if ((fS!=fO)) goto L_0080eb3a;
L_0080ebb0:; BB(0x0080ebb0);
    /* 0080ebb0: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ebb3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080ebb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ebb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080ebb6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080ebb7: ret  */ FN_RET(0x0080e930); r_esp += 4; return;
}

void f_0080ebb8(void) /* sub_80EBB8 */
{
    FN_ENTER(0x0080ebb8);
    /* 0080ebb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080ebb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0080ebbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ebbd: push 0x8f740e */ { u32 v = 0x8f740eu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ebc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080ebc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080ebc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080ebd0: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ebd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080ebd6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0080ebd9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0080ebdc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0080ebdf: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x80ebe4u); f_006dc358();
    /* 0080ebe4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ebe7: je 0x80ed08 */ if (fZ) goto L_0080ed08;
L_0080ebed:; BB(0x0080ebed);
    /* 0080ebed: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0080ebf4: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ebf9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80ebfeu); f_008581c5();
    /* 0080ebfe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080ec01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ec04: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0080ec07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ec09: je 0x80ecfe */ if (fZ) goto L_0080ecfe;
L_0080ec0f:; BB(0x0080ec0f);
    /* 0080ec0f: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0080ec16: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080ec1d: push dword ptr [0xaafec0] */ { u32 v = R32((u32)(0xaafec0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080ec23: mov ecx, eax */ r_ecx = r_eax;
    /* 0080ec25: call 0x763040 */ r_esp -= 4; W32(r_esp, 0x80ec2au); f_00763040();
    /* 0080ec2a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0080ec31:; BB(0x0080ec31);
    /* 0080ec31: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ec34: mov dword ptr [0xaafec4], eax */ W32((u32)(0xaafec4u), r_eax);
    /* 0080ec39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080ec40: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0080ec47: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ec49: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80ec4eu); f_008581c5();
    /* 0080ec4e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080ec51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ec54: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0080ec57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ec59: je 0x80ecf7 */ if (fZ) goto L_0080ecf7;
L_0080ec5f:; BB(0x0080ec5f);
    /* 0080ec5f: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0080ec66: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080ec6d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0080ec74: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ec79: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80ec7eu); f_008581c5();
    /* 0080ec7e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080ec81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ec84: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0080ec87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ec89: je 0x80ecf0 */ if (fZ) goto L_0080ecf0;
L_0080ec8b:; BB(0x0080ec8b);
    /* 0080ec8b: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0080ec92: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0080ec99: mov ecx, eax */ r_ecx = r_eax;
    /* 0080ec9b: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x80eca0u); f_00763030();
    /* 0080eca0: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0080eca7:; BB(0x0080eca7);
    /* 0080eca7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ecaa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ecad: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0080ecaf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080ecb6: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ecbb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80ecc0u); f_008581c5();
    /* 0080ecc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080ecc1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ecc4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080ecc7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ecc9: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0080eccc: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0080eccf: mov eax, 0x20 */ r_eax = 0x20u;
    /* 0080ecd4: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0080ecd7: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
L_0080ecda:; BB(0x0080ecda);
    /* 0080ecda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ecdd: mov dword ptr [0xaafebc], eax */ W32((u32)(0xaafebcu), r_eax);
    /* 0080ece2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080ece5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080ecec: mov esp, ebp */ r_esp = r_ebp;
    /* 0080ecee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ecef: ret  */ FN_RET(0x0080ebb8); r_esp += 4; return;
L_0080ecf0:; BB(0x0080ecf0);
    /* 0080ecf0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080ecf2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080ecf5: jmp 0x80eca7 */ goto L_0080eca7;
L_0080ecf7:; BB(0x0080ecf7);
    /* 0080ecf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ecf9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080ecfc: jmp 0x80ecda */ goto L_0080ecda;
L_0080ecfe:; BB(0x0080ecfe);
    /* 0080ecfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080ed00: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080ed03: jmp 0x80ec31 */ goto L_0080ec31;
L_0080ed08:; BB(0x0080ed08);
    /* 0080ed08: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x80ed0du); f_008587a5();
    /* 0080ed0d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0080ed10: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0080ed13: fdiv dword ptr [0x980844] */ ST(0) = ST(0) / R_F32((u32)(0x980844u));
    /* 0080ed19: fmul dword ptr [0x980840] */ ST(0) = ST(0) * R_F32((u32)(0x980840u));
    /* 0080ed1f: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0080ed22: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0080ed26: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080ed2b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0080ed2e: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0080ed31: fistp qword ptr [ebp - 0x2c] */ W64((u32)(r_ebp+0xffffffd4u), (u64)fx_int64(ST(0))); FPOP();
    /* 0080ed34: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0080ed37: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080ed3a: mov dword ptr [0xaafec0], eax */ W32((u32)(0xaafec0u), r_eax);
    /* 0080ed3f: jmp 0x80ebed */ goto L_0080ebed;
}

void f_0080ed44(void) /* sub_80ED44 */
{
    FN_ENTER(0x0080ed44);
    /* 0080ed44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080ed46: mov dword ptr [0xaafee8], eax */ W32((u32)(0xaafee8u), r_eax);
    /* 0080ed4b: mov dword ptr [0xaafee4], eax */ W32((u32)(0xaafee4u), r_eax);
    /* 0080ed50: mov dword ptr [0xaafee0], eax */ W32((u32)(0xaafee0u), r_eax);
    /* 0080ed55: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
    /* 0080ed5a: mov dword ptr [0xaafed4], eax */ W32((u32)(0xaafed4u), r_eax);
    /* 0080ed5f: call 0x5ba25c */ r_esp -= 4; W32(r_esp, 0x80ed64u); f_005ba25c();
    /* 0080ed64: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ed66: push 0x91eaac */ { u32 v = 0x91eaacu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ed6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080ed6c: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x80ed71u); f_008598c0();
    /* 0080ed71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ed74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ed76: jne 0x80ed83 */ if (!fZ) goto L_0080ed83;
L_0080ed78:; BB(0x0080ed78);
    /* 0080ed78: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ed7d: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80ed82u); f_005ba214();
    /* 0080ed82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0080ed83:; BB(0x0080ed83);
    /* 0080ed83: ret  */ FN_RET(0x0080ed44); r_esp += 4; return;
}

void f_0080ed84(void) /* sub_80ED84 */
{
    FN_ENTER(0x0080ed84);
    /* 0080ed84: call 0x80ed90 */ r_esp -= 4; W32(r_esp, 0x80ed89u); f_0080ed90();
    /* 0080ed89: call 0x80ed98 */ r_esp -= 4; W32(r_esp, 0x80ed8eu); f_0080ed98();
    /* 0080ed8e: ret  */ FN_RET(0x0080ed84); r_esp += 4; return;
}

void f_0080ed90(void) /* sub_80ED90 */
{
    FN_ENTER(0x0080ed90);
    /* 0080ed90: call 0x811434 */ r_esp -= 4; W32(r_esp, 0x80ed95u); f_00811434();
    /* 0080ed95: ret  */ FN_RET(0x0080ed90); r_esp += 4; return;
}

void f_0080ed98(void) /* sub_80ED98 */
{
    FN_ENTER(0x0080ed98);
    /* 0080ed98: call 0x811478 */ r_esp -= 4; W32(r_esp, 0x80ed9du); f_00811478();
    /* 0080ed9d: ret  */ FN_RET(0x0080ed98); r_esp += 4; return;
}

void f_0080eda0(void) /* sub_80EDA0 */
{
    FN_ENTER(0x0080eda0);
    /* 0080eda0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080eda1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080eda2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080eda5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080eda7: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0080edab: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0080edaf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080edb1: jle 0x80ee46 */ if ((fZ||fS!=fO)) goto L_0080ee46;
L_0080edb7:; BB(0x0080edb7);
    /* 0080edb7: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0080edbb: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0080edbf: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0080edc2: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0080edc5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080edc7: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0080edca: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080edcc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080edce: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080edd0: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080edd2: lea ebx, [edx + esi + 4] */ r_ebx = (u32)(r_edx+r_esi+0x4u);
    /* 0080edd6: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0080edd9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080eddb: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0080edde: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ede0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ede2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ede4: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ede6: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ede8: mov ebp, eax */ r_ebp = r_eax;
L_0080edea:; BB(0x0080edea);
    /* 0080edea: mov ecx, dword ptr [0xaafee0] */ r_ecx = R32((u32)(0xaafee0u));
    /* 0080edf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080edf1: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080edf4: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080edf8: mov dword ptr [0xaafee0], edx */ W32((u32)(0xaafee0u), r_edx);
    /* 0080edfe: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ee04: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 0080ee08: mov ecx, dword ptr [0xaafee8] */ r_ecx = R32((u32)(0xaafee8u));
    /* 0080ee0e: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080ee11: mov dword ptr [0xaafee8], edx */ W32((u32)(0xaafee8u), r_edx);
    /* 0080ee17: mov word ptr [ebx], cx */ W16((u32)(r_ebx), (u16)r_ecx);
    /* 0080ee1a: call 0x812370 */ r_esp -= 4; W32(r_esp, 0x80ee1fu); f_00812370();
    /* 0080ee1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ee22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ee24: jl 0x80ee32 */ if ((fS!=fO)) goto L_0080ee32;
L_0080ee26:; BB(0x0080ee26);
    /* 0080ee26: add dword ptr [0xaafee8], eax */ { u32 ad = (u32)(0xaafee8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ee2c: add dword ptr [0xaafee0], eax */ { u32 ad = (u32)(0xaafee0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080ee32:; BB(0x0080ee32);
    /* 0080ee32: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ee35: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ee38: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080ee3b: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ee3d: jl 0x80edea */ if ((fS!=fO)) goto L_0080edea;
L_0080ee3f:; BB(0x0080ee3f);
    /* 0080ee3f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0080ee43: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0080ee46:; BB(0x0080ee46);
    /* 0080ee46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ee49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080ee4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080ee4b: ret  */ FN_RET(0x0080eda0); r_esp += 4; return;
}

void f_0080ee4c(void) /* sub_80EE4C */
{
    FN_ENTER(0x0080ee4c);
    /* 0080ee4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ee4d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ee50: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0080ee54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080ee56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ee58: jle 0x80eeea */ if ((fZ||fS!=fO)) goto L_0080eeea;
L_0080ee5e:; BB(0x0080ee5e);
    /* 0080ee5e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0080ee62: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0080ee66: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0080ee6a: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 0080ee6d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0080ee71: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ee73: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0080ee76: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ee78: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ee7a: lea ecx, [eax + ecx + 4] */ r_ecx = (u32)(r_eax+r_ecx+0x4u);
    /* 0080ee7e: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 0080ee81: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ee83: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ee85: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ee87: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ee89: mov ebp, ecx */ r_ebp = r_ecx;
L_0080ee8b:; BB(0x0080ee8b);
    /* 0080ee8b: mov ecx, dword ptr [0xaafedc] */ r_ecx = R32((u32)(0xaafedcu));
    /* 0080ee91: mov edi, dword ptr [0xaafee4] */ r_edi = R32((u32)(0xaafee4u));
    /* 0080ee97: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080ee9a: lea eax, [ecx + 0x1000] */ r_eax = (u32)(r_ecx+0x1000u);
    /* 0080eea0: mov word ptr [ebp + 6], ax */ W16((u32)(r_ebp+0x6u), (u16)r_eax);
    /* 0080eea4: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0080eea8: lea esi, [edi + 1] */ r_esi = (u32)(r_edi+0x1u);
    /* 0080eeab: mov word ptr [ebp], di */ W16((u32)(r_ebp), (u16)r_edi);
    /* 0080eeaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080eeb1: jle 0x80eeef */ if ((fZ||fS!=fO)) goto L_0080eeef;
L_0080eeb3:; BB(0x0080eeb3);
    /* 0080eeb3: lea edx, [eax + edi + 1] */ r_edx = (u32)(r_eax+r_edi+0x1u);
    /* 0080eeb7: mov dword ptr [0xaafee4], edx */ W32((u32)(0xaafee4u), r_edx);
    /* 0080eebd: lea eax, [eax + ecx + 1] */ r_eax = (u32)(r_eax+r_ecx+0x1u);
    /* 0080eec1: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
L_0080eec6:; BB(0x0080eec6);
    /* 0080eec6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0080eeca: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0080eece: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080eed1: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080eed4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080eed7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080eed9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0080eedd: jl 0x80ee8b */ if ((fS!=fO)) goto L_0080ee8b;
L_0080eedf:; BB(0x0080eedf);
    /* 0080eedf: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0080eee3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0080eee7: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0080eeea:; BB(0x0080eeea);
    /* 0080eeea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080eeed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080eeee: ret  */ FN_RET(0x0080ee4c); r_esp += 4; return;
L_0080eeef:; BB(0x0080eeef);
    /* 0080eeef: mov dword ptr [0xaafee4], esi */ W32((u32)(0xaafee4u), r_esi);
    /* 0080eef5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080eef6: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080eefa: mov dword ptr [0xaafedc], edx */ W32((u32)(0xaafedcu), r_edx);
    /* 0080ef00: call 0x8123a4 */ r_esp -= 4; W32(r_esp, 0x80ef05u); f_008123a4();
    /* 0080ef05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ef08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ef0a: jle 0x80eec6 */ if ((fZ||fS!=fO)) goto L_0080eec6;
L_0080ef0c:; BB(0x0080ef0c);
    /* 0080ef0c: add dword ptr [0xaafee4], eax */ { u32 ad = (u32)(0xaafee4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ef12: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 0080ef16: add dword ptr [0xaafedc], eax */ { u32 ad = (u32)(0xaafedcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ef1c: jmp 0x80eec6 */ goto L_0080eec6;
}

void f_0080ef20(void) /* sub_80EF20 */
{
    FN_ENTER(0x0080ef20);
    /* 0080ef20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef22: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ef25: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0080ef29: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef2a: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x80ef2fu); f_0080c2dc();
    /* 0080ef2f: mov ebp, eax */ r_ebp = r_eax;
    /* 0080ef31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef32: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x80ef37u); f_0080c2a4();
    /* 0080ef37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ef3a: mov edx, dword ptr [0xaafdd0] */ r_edx = R32((u32)(0xaafdd0u));
    /* 0080ef40: mov ecx, dword ptr [edx + ebp*8] */ r_ecx = R32((u32)(r_edx+r_ebp*8));
    /* 0080ef43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ef45: je 0x80ef73 */ if (fZ) goto L_0080ef73;
L_0080ef47:; BB(0x0080ef47);
    /* 0080ef47: mov edx, dword ptr [edx + ebp*8 + 4] */ r_edx = R32((u32)(r_edx+r_ebp*8+0x4u));
    /* 0080ef4b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ef4e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ef50: jl 0x80ef73 */ if ((fS!=fO)) goto L_0080ef73;
L_0080ef52:; BB(0x0080ef52);
    /* 0080ef52: mov edx, dword ptr [ecx + eax*8] */ r_edx = R32((u32)(r_ecx+r_eax*8));
    /* 0080ef55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ef57: je 0x80ef64 */ if (fZ) goto L_0080ef64;
L_0080ef59:; BB(0x0080ef59);
    /* 0080ef59: mov ecx, dword ptr [ecx + eax*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 0080ef5d: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ef60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ef62: jge 0x80ef6a */ if ((fS==fO)) goto L_0080ef6a;
L_0080ef64:; BB(0x0080ef64);
    /* 0080ef64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ef67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ef68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080ef69: ret  */ FN_RET(0x0080ef20); r_esp += 4; return;
L_0080ef6a:; BB(0x0080ef6a);
    /* 0080ef6a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0080ef6c: mov eax, edi */ r_eax = r_edi;
    /* 0080ef6e: call 0x80ef84 */ r_esp -= 4; W32(r_esp, 0x80ef73u); f_0080ef84();
L_0080ef73:; BB(0x0080ef73);
    /* 0080ef73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ef76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ef77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080ef78: ret  */ FN_RET(0x0080ef20); r_esp += 4; return;
}

void f_0080ef84(void) /* sub_80EF84 */
{
    FN_ENTER(0x0080ef84);
    /* 0080ef84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef88: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ef8b: mov esi, edx */ r_esi = r_edx;
    /* 0080ef8d: mov ebx, eax */ r_ebx = r_eax;
    /* 0080ef8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ef91: push 0x91eaac */ { u32 v = 0x91eaacu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ef96: mov dword ptr [0xaafef0], ecx */ W32((u32)(0xaafef0u), r_ecx);
    /* 0080ef9c: mov dword ptr [0xaafeec], ecx */ W32((u32)(0xaafeecu), r_ecx);
    /* 0080efa2: mov dword ptr [0xaafee8], ecx */ W32((u32)(0xaafee8u), r_ecx);
    /* 0080efa8: mov dword ptr [0xaafee4], ecx */ W32((u32)(0xaafee4u), r_ecx);
    /* 0080efae: mov dword ptr [0xaafee0], ecx */ W32((u32)(0xaafee0u), r_ecx);
    /* 0080efb4: mov dword ptr [0xaafedc], ecx */ W32((u32)(0xaafedcu), r_ecx);
    /* 0080efba: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80efbfu); f_005ba214();
    /* 0080efbf: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080efc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080efc6: mov word ptr [0xab02c0], cx */ W16((u32)(0xab02c0u), (u16)r_ecx);
    /* 0080efcd: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80efd2u); f_0082e940();
    /* 0080efd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080efd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080efd7: je 0x80f2f8 */ if (fZ) goto L_0080f2f8;
L_0080efdd:; BB(0x0080efdd);
    /* 0080efdd: mov dword ptr [0xaafed4], 0x10000 */ W32((u32)(0xaafed4u), 0x10000u);
    /* 0080efe7: mov dword ptr [0xaafed8], eax */ W32((u32)(0xaafed8u), r_eax);
    /* 0080efec: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0080eff0: push 0x98089c */ { u32 v = 0x98089cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080eff5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080eff6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080eff7: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80effcu); f_0078e574();
    /* 0080effc: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0080f000: push dword ptr [0xaafed8] */ { u32 v = R32((u32)(0xaafed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080f006: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f007: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80f00cu); f_005b9910();
    /* 0080f00c: mov ebp, eax */ r_ebp = r_eax;
    /* 0080f00e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f011: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f013: jl 0x80f139 */ if ((fS!=fO)) goto L_0080f139;
L_0080f019:; BB(0x0080f019);
    /* 0080f019: cmp ebp, dword ptr [0xaafed4] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaafed4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f01f: jg 0x80f139 */ if ((!fZ&&fS==fO)) goto L_0080f139;
L_0080f025:; BB(0x0080f025);
    /* 0080f025: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
    /* 0080f02b: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 0080f030: mul ebp */ { u64 t = (u64)r_eax * r_ebp; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0080f032: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0080f034: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080f037: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0080f03b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f03d: jle 0x80f068 */ if ((fZ||fS!=fO)) goto L_0080f068;
L_0080f03f:; BB(0x0080f03f);
    /* 0080f03f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080f043: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080f045: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0080f048: mov esi, edx */ r_esi = r_edx;
L_0080f04a:; BB(0x0080f04a);
    /* 0080f04a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080f04c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f051u); f_0061cdb0();
    /* 0080f051: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080f053: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 0080f057: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f05a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f05d: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f05f: jl 0x80f04a */ if ((fS!=fO)) goto L_0080f04a;
L_0080f061:; BB(0x0080f061);
    /* 0080f061: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080f065: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0080f068:; BB(0x0080f068);
    /* 0080f068: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f069: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x80f06eu); f_0080c2dc();
    /* 0080f06e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0080f072: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f075: mov edx, dword ptr [0xaafed8] */ r_edx = R32((u32)(0xaafed8u));
    /* 0080f07b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0080f07f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f081: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f083: jle 0x80f12e */ if ((fZ||fS!=fO)) goto L_0080f12e;
L_0080f089:; BB(0x0080f089);
    /* 0080f089: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0080f08d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080f091: mov ebx, eax */ r_ebx = r_eax;
    /* 0080f093: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0080f096: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f098: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0080f09b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0080f09f: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0080f0a2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f0a4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f0a6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f0a8: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f0aa: lea ecx, [edx + ecx + 4] */ r_ecx = (u32)(r_edx+r_ecx+0x4u);
    /* 0080f0ae: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0080f0b2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080f0b4: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0080f0b7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f0b9: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0080f0bc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f0be: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f0c0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f0c2: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f0c4: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0080f0c6:; BB(0x0080f0c6);
    /* 0080f0c6: mov ecx, dword ptr [0xaafee0] */ r_ecx = R32((u32)(0xaafee0u));
    /* 0080f0cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f0cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f0ce: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080f0d1: mov dword ptr [0xaafee0], edx */ W32((u32)(0xaafee0u), r_edx);
    /* 0080f0d7: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f0dd: mov word ptr [ebp + 4], cx */ W16((u32)(r_ebp+0x4u), (u16)r_ecx);
    /* 0080f0e1: mov ecx, dword ptr [0xaafee8] */ r_ecx = R32((u32)(0xaafee8u));
    /* 0080f0e7: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080f0ea: mov dword ptr [0xaafee8], edx */ W32((u32)(0xaafee8u), r_edx);
    /* 0080f0f0: mov word ptr [ebp], cx */ W16((u32)(r_ebp), (u16)r_ecx);
    /* 0080f0f4: call 0x812370 */ r_esp -= 4; W32(r_esp, 0x80f0f9u); f_00812370();
    /* 0080f0f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f0fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f0fe: jl 0x80f10c */ if ((fS!=fO)) goto L_0080f10c;
L_0080f100:; BB(0x0080f100);
    /* 0080f100: add dword ptr [0xaafee8], eax */ { u32 ad = (u32)(0xaafee8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080f106: add dword ptr [0xaafee0], eax */ { u32 ad = (u32)(0xaafee0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080f10c:; BB(0x0080f10c);
    /* 0080f10c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0080f110: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f113: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f116: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f119: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f11b: jl 0x80f0c6 */ if ((fS!=fO)) goto L_0080f0c6;
L_0080f11d:; BB(0x0080f11d);
    /* 0080f11d: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0080f121: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080f125: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0080f128: mov edx, dword ptr [0xaafed8] */ r_edx = R32((u32)(0xaafed8u));
L_0080f12e:; BB(0x0080f12e);
    /* 0080f12e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f12f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f130: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f131: call 0x80fef8 */ r_esp -= 4; W32(r_esp, 0x80f136u); f_0080fef8();
    /* 0080f136: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080f139:; BB(0x0080f139);
    /* 0080f139: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0080f13d: push 0x9808c0 */ { u32 v = 0x9808c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f142: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f144: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f149u); f_0078e574();
    /* 0080f149: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0080f14d: push dword ptr [0xaafed8] */ { u32 v = R32((u32)(0xaafed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080f153: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f154: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80f159u); f_005b9910();
    /* 0080f159: mov esi, eax */ r_esi = r_eax;
    /* 0080f15b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f15e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f160: jl 0x80f267 */ if ((fS!=fO)) goto L_0080f267;
L_0080f166:; BB(0x0080f166);
    /* 0080f166: cmp esi, dword ptr [0xaafed4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaafed4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f16c: jg 0x80f267 */ if ((!fZ&&fS==fO)) goto L_0080f267;
L_0080f172:; BB(0x0080f172);
    /* 0080f172: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
    /* 0080f178: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 0080f17d: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0080f17f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0080f181: mov ebp, edx */ r_ebp = r_edx;
    /* 0080f183: shr ebp, 4 */ { u32 c = (4u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0080f186: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f188: jle 0x80f1ab */ if ((fZ||fS!=fO)) goto L_0080f1ab;
L_0080f18a:; BB(0x0080f18a);
    /* 0080f18a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080f18e: mov ebx, ecx */ r_ebx = r_ecx;
L_0080f190:; BB(0x0080f190);
    /* 0080f190: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080f192: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f197u); f_0061cdb0();
    /* 0080f197: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f199: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 0080f19d: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f1a0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f1a3: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f1a5: jl 0x80f190 */ if ((fS!=fO)) goto L_0080f190;
L_0080f1a7:; BB(0x0080f1a7);
    /* 0080f1a7: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_0080f1ab:; BB(0x0080f1ab);
    /* 0080f1ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f1ac: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x80f1b1u); f_0080c2dc();
    /* 0080f1b1: mov edx, eax */ r_edx = r_eax;
    /* 0080f1b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f1b6: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
    /* 0080f1bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f1be: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f1c0: jle 0x80f25c */ if ((fZ||fS!=fO)) goto L_0080f25c;
L_0080f1c6:; BB(0x0080f1c6);
    /* 0080f1c6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080f1ca: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080f1cd: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0080f1d1: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0080f1d5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080f1d9: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0080f1dc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f1de: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f1e0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f1e2: lea edi, [ecx + edi + 4] */ r_edi = (u32)(r_ecx+r_edi+0x4u);
    /* 0080f1e6: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0080f1ea: mov ebx, edi */ r_ebx = r_edi;
    /* 0080f1ec: lea edi, [eax + eax*8] */ r_edi = (u32)(r_eax+r_eax*8);
    /* 0080f1ef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f1f1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f1f3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f1f5: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0080f1f7:; BB(0x0080f1f7);
    /* 0080f1f7: mov ecx, dword ptr [0xaafedc] */ r_ecx = R32((u32)(0xaafedcu));
    /* 0080f1fd: mov esi, dword ptr [0xaafee4] */ r_esi = R32((u32)(0xaafee4u));
    /* 0080f203: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080f206: lea eax, [ecx + 0x1000] */ r_eax = (u32)(r_ecx+0x1000u);
    /* 0080f20c: mov word ptr [ebx + 6], ax */ W16((u32)(r_ebx+0x6u), (u16)r_eax);
    /* 0080f210: movsx eax, word ptr [ebx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 0080f214: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 0080f217: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 0080f21a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f21c: jle 0x80f2c1 */ if ((fZ||fS!=fO)) goto L_0080f2c1;
L_0080f222:; BB(0x0080f222);
    /* 0080f222: lea edx, [eax + esi + 1] */ r_edx = (u32)(r_eax+r_esi+0x1u);
    /* 0080f226: mov dword ptr [0xaafee4], edx */ W32((u32)(0xaafee4u), r_edx);
    /* 0080f22c: lea eax, [eax + ecx + 1] */ r_eax = (u32)(r_eax+r_ecx+0x1u);
    /* 0080f230: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
L_0080f235:; BB(0x0080f235);
    /* 0080f235: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0080f239: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0080f23d: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f240: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f243: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080f246: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f248: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0080f24c: jl 0x80f1f7 */ if ((fS!=fO)) goto L_0080f1f7;
L_0080f24e:; BB(0x0080f24e);
    /* 0080f24e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0080f252: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080f256: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
L_0080f25c:; BB(0x0080f25c);
    /* 0080f25c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f25d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f25e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f25f: call 0x810030 */ r_esp -= 4; W32(r_esp, 0x80f264u); f_00810030();
    /* 0080f264: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080f267:; BB(0x0080f267);
    /* 0080f267: movzx eax, word ptr [0xaafee0] */ r_eax = (u32)R16((u32)(0xaafee0u));
    /* 0080f26e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f26f: call 0x7ba3cc */ r_esp -= 4; W32(r_esp, 0x80f274u); f_007ba3cc();
    /* 0080f274: mov eax, dword ptr [0xaafee8] */ r_eax = R32((u32)(0xaafee8u));
    /* 0080f279: movzx edx, word ptr [0xaafedc] */ r_edx = (u32)R16((u32)(0xaafedcu));
    /* 0080f280: mov dword ptr [0xab02b4], eax */ W32((u32)(0xab02b4u), r_eax);
    /* 0080f285: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f286: call 0x7ba3ec */ r_esp -= 4; W32(r_esp, 0x80f28bu); f_007ba3ec();
    /* 0080f28b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f28e: mov eax, dword ptr [0xaafee4] */ r_eax = R32((u32)(0xaafee4u));
    /* 0080f293: mov dword ptr [0xab02b0], eax */ W32((u32)(0xab02b0u), r_eax);
    /* 0080f298: call 0x80fa98 */ r_esp -= 4; W32(r_esp, 0x80f29du); f_0080fa98();
    /* 0080f29d: movzx eax, word ptr [0xab02c0] */ r_eax = (u32)R16((u32)(0xab02c0u));
    /* 0080f2a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080f2a9: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
L_0080f2af:; BB(0x0080f2af);
    /* 0080f2af: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f2b4: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x80f2b9u); f_005ba214();
    /* 0080f2b9: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f2bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f2bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f2be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f2bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f2c0: ret  */ FN_RET(0x0080ef84); r_esp += 4; return;
L_0080f2c1:; BB(0x0080f2c1);
    /* 0080f2c1: mov dword ptr [0xaafedc], edx */ W32((u32)(0xaafedcu), r_edx);
    /* 0080f2c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f2c8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080f2cc: mov dword ptr [0xaafee4], ebp */ W32((u32)(0xaafee4u), r_ebp);
    /* 0080f2d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f2d3: call 0x8123a4 */ r_esp -= 4; W32(r_esp, 0x80f2d8u); f_008123a4();
    /* 0080f2d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f2db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f2dd: jle 0x80f235 */ if ((fZ||fS!=fO)) goto L_0080f235;
L_0080f2e3:; BB(0x0080f2e3);
    /* 0080f2e3: add dword ptr [0xaafee4], eax */ { u32 ad = (u32)(0xaafee4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080f2e9: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 0080f2ed: add dword ptr [0xaafedc], eax */ { u32 ad = (u32)(0xaafedcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080f2f3: jmp 0x80f235 */ goto L_0080f235;
L_0080f2f8:; BB(0x0080f2f8);
    /* 0080f2f8: mov dword ptr [0xaafed8], 0 */ W32((u32)(0xaafed8u), 0x0u);
    /* 0080f302: jmp 0x80f2af */ goto L_0080f2af;
}

