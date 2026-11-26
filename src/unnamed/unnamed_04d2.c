#include "protos.h"

void f_004d2020(void)
{
    FN_ENTER(0x004d2020);
    /* 004d2020: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;   }
    /* 004d2022: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d2024: mov edi, dword ptr [ebx + 0x48] */ r_edi = R32((u32)(r_ebx+0x48u));
    /* 004d2027: mov dword ptr [eax + 0x1ac], edi */ W32((u32)(r_eax+0x1acu), r_edi);
    /* 004d202d: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 004d2030: mov dword ptr [eax + 0x1b0], edx */ W32((u32)(r_eax+0x1b0u), r_edx);
    /* 004d2036: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 004d2039: mov dword ptr [eax + 0x1b4], edx */ W32((u32)(r_eax+0x1b4u), r_edx);
    /* 004d203f: jmp 0x4d211d */ goto L_004d211d;
L_004d211d:; BB(0x004d211d);
    /* 004d211d: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 004d2120: mov dword ptr [eax + 0x1b8], edx */ W32((u32)(r_eax+0x1b8u), r_edx);
    /* 004d2126: mov ebp, dword ptr [ebx + 0x5c] */ r_ebp = R32((u32)(r_ebx+0x5cu));
    /* 004d2129: mov dword ptr [eax + 0x1bc], ebp */ W32((u32)(r_eax+0x1bcu), r_ebp);
    /* 004d212f: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 004d2132: cmp ecx, dword ptr [eax + 0x19c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x19cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d2138: je 0x4d214f */ if (fZ) goto L_004d214f;
L_004d213a:; BB(0x004d213a);
    /* 004d213a: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 004d2140: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d2143: mov dword ptr [0xa489fc], edx */ W32((u32)(0xa489fcu), r_edx);
    /* 004d2149: mov dword ptr [eax + 0x19c], ecx */ W32((u32)(r_eax+0x19cu), r_ecx);
L_004d214f:; BB(0x004d214f);
    /* 004d214f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d2150: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d2151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d2153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d2154: ret  */ FN_RET(0x004d2020); r_esp += 4; return;
}

void f_004d2158(void) /* sub_4D2158 */
{
    FN_ENTER(0x004d2158);
    /* 004d2158: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d215b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d2160: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d2163: fld dword ptr [eax + 0x184] */ FPUSH(R_F32((u32)(r_eax+0x184u)));
    /* 004d2169: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 004d216f: fld dword ptr [eax + 0x188] */ FPUSH(R_F32((u32)(r_eax+0x188u)));
    /* 004d2175: fsub dword ptr [eax + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x17cu));
    /* 004d217b: fld dword ptr [eax + 0x18c] */ FPUSH(R_F32((u32)(r_eax+0x18cu)));
    /* 004d2181: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 004d2187: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d2189: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d218c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d2190: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d2194: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d2199u); f_0083173c();
    /* 004d2199: fld dword ptr [0x908fd8] */ FPUSH(R_F32((u32)(0x908fd8u)));
    /* 004d219f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d21a1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004d21a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d21a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d21a6: je 0x4d231a */ if (fZ) goto L_004d231a;
L_004d21ac:; BB(0x004d21ac);
    /* 004d21ac: fcom dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); 
    /* 004d21af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d21b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d21b2: je 0x4d22e8 */ if (fZ) goto L_004d22e8;
L_004d21b8:; BB(0x004d21b8);
    /* 004d21b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d21ba: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
L_004d21c0:; BB(0x004d21c0);
    /* 004d21c0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d21c3: lea eax, [edx + 0x190] */ r_eax = (u32)(r_edx+0x190u);
    /* 004d21c9: add edx, 0x194 */ {  u32 a = r_edx; u32 b = 0x194u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d21cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d21d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d21d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d21d2: call 0x4d6448 */ r_esp -= 4; W32(r_esp, 0x4d21d7u); f_004d6448();
    /* 004d21d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d21da: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d21e0: call 0x4d433c */ r_esp -= 4; W32(r_esp, 0x4d21e5u); f_004d433c();
    /* 004d21e5: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d21eb: fld dword ptr [ecx + 0x184] */ FPUSH(R_F32((u32)(r_ecx+0x184u)));
    /* 004d21f1: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 004d21f3: fld dword ptr [ecx + 0x188] */ FPUSH(R_F32((u32)(r_ecx+0x188u)));
    /* 004d21f9: fld dword ptr [ecx + 0x18c] */ FPUSH(R_F32((u32)(r_ecx+0x18cu)));
    /* 004d21ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d2201: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d2205: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 004d2208: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004d220c: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 004d220f: add ecx, 0x178 */ {  u32 a = r_ecx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d2215: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004d2219: push 0xa489cc */ { u32 v = 0xa489ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004d221e: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004d2222: call 0x82f108 */ r_esp -= 4; W32(r_esp, 0x4d2227u); f_0082f108();
    /* 004d2227: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d222d: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 004d2233: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 004d2239: mov dword ptr [0xa48780], eax */ W32((u32)(0xa48780u), r_eax);
    /* 004d223e: mov eax, dword ptr [ecx + 0x180] */ r_eax = R32((u32)(r_ecx+0x180u));
    /* 004d2244: mov dword ptr [0xa48784], edx */ W32((u32)(0xa48784u), r_edx);
    /* 004d224a: mov dword ptr [0xa48788], eax */ W32((u32)(0xa48788u), r_eax);
    /* 004d224f: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d2254: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2259: je 0x4d22e4 */ if (fZ) goto L_004d22e4;
L_004d225f:; BB(0x004d225f);
    /* 004d225f: fld dword ptr [0x908fcc] */ FPUSH(R_F32((u32)(0x908fccu)));
    /* 004d2265: fsub dword ptr [0xa48828] */ ST(0) = ST(0) - R_F32((u32)(0xa48828u));
    /* 004d226b: fld dword ptr [0x908fc8] */ FPUSH(R_F32((u32)(0x908fc8u)));
    /* 004d2271: fsub dword ptr [0xa4882c] */ ST(0) = ST(0) - R_F32((u32)(0xa4882cu));
    /* 004d2277: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d2279: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004d227d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004d2282: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d2287: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004d228b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004d228f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d2293: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d2297: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004d229b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004d229f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004d22a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d22a9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004d22ad: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004d22b1: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d22b5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d22b9: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004d22bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d22be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d22bf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d22c4u); f_0061cdb0();
    /* 004d22c4: push dword ptr [0xa4882c] */ { u32 v = R32((u32)(0xa4882cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d22ca: push dword ptr [0xa48828] */ { u32 v = R32((u32)(0xa48828u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d22d0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d22d5u); f_0061cdb0();
    /* 004d22d5: push 0xa48850 */ { u32 v = 0xa48850u; r_esp -= 4; W32(r_esp, v); }
    /* 004d22da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004d22dc: call 0x82ad14 */ r_esp -= 4; W32(r_esp, 0x4d22e1u); f_0082ad14();
    /* 004d22e1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004d22e4:; BB(0x004d22e4);
    /* 004d22e4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d22e7: ret  */ FN_RET(0x004d2158); r_esp += 4; return;
L_004d22e8:; BB(0x004d22e8);
    /* 004d22e8: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 004d22ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d22ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d22ef: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d22f5: jne 0x4d21c0 */ if (!fZ) goto L_004d21c0;
L_004d22fb:; BB(0x004d22fb);
    /* 004d22fb: fld dword ptr [0x908fd4] */ FPUSH(R_F32((u32)(0x908fd4u)));
    /* 004d2301: fadd dword ptr [edx + 0x18c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x18cu));
    /* 004d2307: fstp dword ptr [edx + 0x18c] */ W_F32((u32)(r_edx+0x18cu), ST(0)); FPOP();
    /* 004d230d: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 004d2315: jmp 0x4d21c0 */ goto L_004d21c0;
L_004d231a:; BB(0x004d231a);
    /* 004d231a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d231c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d231f: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d2324u); f_0082df08();
    /* 004d2324: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d2326: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d232c: fld dword ptr [0x908fd0] */ FPUSH(R_F32((u32)(0x908fd0u)));
    /* 004d2332: fadd dword ptr [edx + 0x180] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x180u));
    /* 004d2338: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 004d233e: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 004d2344: fstp dword ptr [edx + 0x18c] */ W_F32((u32)(r_edx+0x18cu), ST(0)); FPOP();
    /* 004d234a: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
    /* 004d2350: mov dword ptr [edx + 0x188], ecx */ W32((u32)(r_edx+0x188u), r_ecx);
    /* 004d2356: jmp 0x4d21c0 */ goto L_004d21c0;
}

void f_004d235c(void) /* sub_4D235C */
{
    FN_ENTER(0x004d235c);
    /* 004d235c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d235d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d235e: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d2361: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d2363: movzx edx, word ptr [0xa48a38] */ r_edx = (u32)R16((u32)(0xa48a38u));
    /* 004d236a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004d236d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d2370: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 004d2373: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d2375: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d2377: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d2379: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004d237b: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004d237d: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004d237f: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 004d2382: lea edx, [ebp + 0x1e] */ r_edx = (u32)(r_ebp+0x1eu);
    /* 004d2385: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2387: jne 0x4d238e */ if (!fZ) goto L_004d238e;
L_004d2389:; BB(0x004d2389);
    /* 004d2389: mov dword ptr [ebx + 0x28], ebp */ W32((u32)(r_ebx+0x28u), r_ebp);
    /* 004d238c: jmp 0x4d2391 */ goto L_004d2391;
L_004d238e:; BB(0x004d238e);
    /* 004d238e: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
L_004d2391:; BB(0x004d2391);
    /* 004d2391: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004d2394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2396: je 0x4d25c1 */ if (fZ) goto L_004d25c1;
L_004d239c:; BB(0x004d239c);
    /* 004d239c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004d23a0: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 004d23a3: fsub dword ptr [eax + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x44u));
    /* 004d23a6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d23aa: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 004d23ad: fsub dword ptr [eax + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x48u));
    /* 004d23b0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d23b4: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 004d23b7: fsub dword ptr [eax + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4cu));
    /* 004d23ba: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d23be: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d23c3u); f_0083173c();
    /* 004d23c3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d23c6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d23c9: fcomp dword ptr [0x908fc4] */ fx_compare(ST(0), R_F32((u32)(0x908fc4u))); FPOP();
    /* 004d23cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d23d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d23d2: jb 0x4d24e2 */ if (fC) goto L_004d24e2;
L_004d23d8:; BB(0x004d23d8);
    /* 004d23d8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d23db: fmul dword ptr [0x908fc0] */ ST(0) = ST(0) * R_F32((u32)(0x908fc0u));
    /* 004d23e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_004d23e4:; BB(0x004d23e4);
    /* 004d23e4: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d23ea: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 004d23ee: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 004d23f4: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004d23f8: fld dword ptr [edx + 0x178] */ FPUSH(R_F32((u32)(r_edx+0x178u)));
    /* 004d23fe: fsub dword ptr [edx + 0x184] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x184u));
    /* 004d2404: lea ebp, [edx + 0x178] */ r_ebp = (u32)(r_edx+0x178u);
    /* 004d240a: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004d240e: fld dword ptr [edx + 0x17c] */ FPUSH(R_F32((u32)(r_edx+0x17cu)));
    /* 004d2414: fsub dword ptr [edx + 0x188] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x188u));
    /* 004d241a: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004d241e: fld dword ptr [edx + 0x180] */ FPUSH(R_F32((u32)(r_edx+0x180u)));
    /* 004d2424: fsub dword ptr [edx + 0x18c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x18cu));
    /* 004d242a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004d242e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d2433u); f_0083173c();
    /* 004d2433: fcomp dword ptr [0x908fbc] */ fx_compare(ST(0), R_F32((u32)(0x908fbcu))); FPOP();
    /* 004d2439: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d243b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d243c: je 0x4d2449 */ if (fZ) goto L_004d2449;
L_004d243e:; BB(0x004d243e);
    /* 004d243e: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 004d2442: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d2447u); f_0082df08();
    /* 004d2447: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d2449:; BB(0x004d2449);
    /* 004d2449: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004d244d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d2450: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004d2452: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004d2456: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004d2459: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d245b: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004d245e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d2460: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004d2463: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d2469: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d246c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d246e: je 0x4d25c9 */ if (fZ) goto L_004d25c9;
L_004d2474:; BB(0x004d2474);
    /* 004d2474: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d2477: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004d247b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004d247f: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 004d2483: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d2489: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d248a: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4d248fu); f_0077fffc();
    /* 004d248f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d2492: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2494: je 0x4d25c1 */ if (fZ) goto L_004d25c1;
L_004d249a:; BB(0x004d249a);
    /* 004d249a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004d249e: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004d24a0: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004d24a4: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004d24a6: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d24a9: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 004d24ac: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004d24ae: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004d24b2: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004d24b4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004d24b7: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 004d24ba: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 004d24bd: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004d24bf: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004d24c2: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 004d24c5: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 004d24c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d24ca: fstp dword ptr [ebx + 0x60] */ W_F32((u32)(r_ebx+0x60u), ST(0)); FPOP();
    /* 004d24cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d24cf: fstp dword ptr [ebx + 0x64] */ W_F32((u32)(r_ebx+0x64u), ST(0)); FPOP();
    /* 004d24d2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004d24d4: fstp dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0)); FPOP();
    /* 004d24d7: mov eax, 1 */ r_eax = 0x1u;
    /* 004d24dc: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d24df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d24e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d24e1: ret  */ FN_RET(0x004d235c); r_esp += 4; return;
L_004d24e2:; BB(0x004d24e2);
    /* 004d24e2: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004d24ea: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d24ef: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004d24f7: mov dword ptr [esp + 0x18], 0xbf800000 */ W32((u32)(r_esp+0x18u), 0xbf800000u);
    /* 004d24ff: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 004d2507: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004d250f: mov dword ptr [esp + 0x24], 0xbf800000 */ W32((u32)(r_esp+0x24u), 0xbf800000u);
    /* 004d2517: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d251cu); f_0082d990();
    /* 004d251c: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d2521: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 004d2527: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d2529: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d252eu); f_0082d8bc();
    /* 004d252e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004d2532: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d2533: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004d2537: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d2539: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d253eu); f_00830aa0();
    /* 004d253e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d2543: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d2548u); f_0082eb80();
    /* 004d2548: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004d2550: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d2555: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d255au); f_0082d990();
    /* 004d255a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004d255d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004d2560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d2562: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d2567u); f_0082d8bc();
    /* 004d2567: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004d256b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d256c: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004d2570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d2572: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d2577u); f_00830aa0();
    /* 004d2577: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d257c: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d2581u); f_0082eb80();
    /* 004d2581: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004d2585: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 004d2589: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4d258eu); f_0082f9e0();
    /* 004d258e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d258f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d2592: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4d2597u); f_0082e900();
    /* 004d2597: fcomp dword ptr [0x908fb8] */ fx_compare(ST(0), R_F32((u32)(0x908fb8u))); FPOP();
    /* 004d259d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d259f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d25a0: jbe 0x4d25b0 */ if ((fC||fZ)) goto L_004d25b0;
L_004d25a2:; BB(0x004d25a2);
    /* 004d25a2: fld dword ptr [0x908fbc] */ FPUSH(R_F32((u32)(0x908fbcu)));
    /* 004d25a8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d25ab: jmp 0x4d23e4 */ goto L_004d23e4;
L_004d25b0:; BB(0x004d25b0);
    /* 004d25b0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d25b3: fmul dword ptr [0x908fc0] */ ST(0) = ST(0) * R_F32((u32)(0x908fc0u));
    /* 004d25b9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d25bc: jmp 0x4d23e4 */ goto L_004d23e4;
L_004d25c1:; BB(0x004d25c1);
    /* 004d25c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d25c3: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d25c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d25c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d25c8: ret  */ FN_RET(0x004d235c); r_esp += 4; return;
L_004d25c9:; BB(0x004d25c9);
    /* 004d25c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d25cb: jmp 0x4d25c1 */ goto L_004d25c1;
}

void f_004d25d0(void) /* sub_4D25D0 */
{
    FN_ENTER(0x004d25d0);
    /* 004d25d0: mov dword ptr [0xa48760], 0x3f800000 */ W32((u32)(0xa48760u), 0x3f800000u);
    /* 004d25da: mov dword ptr [0xa48764], 0x41000000 */ W32((u32)(0xa48764u), 0x41000000u);
    /* 004d25e4: mov dword ptr [0xa48768], 0x3fc00000 */ W32((u32)(0xa48768u), 0x3fc00000u);
    /* 004d25ee: ret  */ FN_RET(0x004d25d0); r_esp += 4; return;
}

void f_004d25f0(void) /* sub_4D25F0 */
{
    FN_ENTER(0x004d25f0);
    /* 004d25f0: mov dword ptr [0xa4876c], 0x3f800000 */ W32((u32)(0xa4876cu), 0x3f800000u);
    /* 004d25fa: mov dword ptr [0xa48770], 0x41000000 */ W32((u32)(0xa48770u), 0x41000000u);
    /* 004d2604: mov dword ptr [0xa48774], 0x3fc00000 */ W32((u32)(0xa48774u), 0x3fc00000u);
    /* 004d260e: ret  */ FN_RET(0x004d25f0); r_esp += 4; return;
}

void f_004d2610(void) /* sub_4D2610 */
{
    FN_ENTER(0x004d2610);
    /* 004d2610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2611: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d2615: push 0x8d1d54 */ { u32 v = 0x8d1d54u; r_esp -= 4; W32(r_esp, v); }
    /* 004d261a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d2620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d2621: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d2628: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d262b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d262e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d2631: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d2634: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d2637: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004d263a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004d263d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d2644: mov eax, ecx */ r_eax = r_ecx;
    /* 004d2646: mov dword ptr [eax], 0xafc590 */ W32((u32)(r_eax), 0xafc590u);
    /* 004d264c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004d264e: mov dword ptr [0xa48a54], 0 */ W32((u32)(0xa48a54u), 0x0u);
L_004d2658:; BB(0x004d2658);
    /* 004d2658: mov ecx, dword ptr [ebx*4 + 0xa48a00] */ r_ecx = R32((u32)(r_ebx*4+0xa48a00u));
    /* 004d265f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2661: je 0x4d2676 */ if (fZ) goto L_004d2676;
L_004d2663:; BB(0x004d2663);
    /* 004d2663: je 0x4d266b */ if (fZ) goto L_004d266b;
L_004d2665:; BB(0x004d2665);
    /* 004d2665: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2667: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004d2669: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4d266bu); call_ind(t); }
L_004d266b:; BB(0x004d266b);
    /* 004d266b: mov dword ptr [ebx*4 + 0xa48a00], 0 */ W32((u32)(r_ebx*4+0xa48a00u), 0x0u);
L_004d2676:; BB(0x004d2676);
    /* 004d2676: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d2679: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d267c: jl 0x4d2658 */ if ((fS!=fO)) goto L_004d2658;
L_004d267e:; BB(0x004d267e);
    /* 004d267e: mov dword ptr [0xa489f8], 0 */ W32((u32)(0xa489f8u), 0x0u);
    /* 004d2688: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d268f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d2692: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d2697u); f_008171e8();
    /* 004d2697: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004d269a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d269c: jne 0x4d26b7 */ if (!fZ) goto L_004d26b7;
L_004d269e:; BB(0x004d269e);
    /* 004d269e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d26a1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d26a4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d26a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d26aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d26b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d26b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d26b4: ret 4 */ FN_RET(0x004d2610); r_esp += 8; return;
L_004d26b7:; BB(0x004d26b7);
    /* 004d26b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d26ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d26bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d26c0u); f_005c2f74();
    /* 004d26c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d26c1: jmp 0x4d269e */ goto L_004d269e;
}

void f_004d26c4(void) /* sub_4D26C4 */
{
    FN_ENTER(0x004d26c4);
    /* 004d26c4: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d26c7: movsx edx, word ptr [0xaf0350] */ r_edx = (u32)(i32)(i16)R16((u32)(0xaf0350u));
    /* 004d26ce: movsx ecx, word ptr [0xaf0354] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xaf0354u));
    /* 004d26d5: mov word ptr [0x9acb68], dx */ W16((u32)(0x9acb68u), (u16)r_edx);
    /* 004d26dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d26de: mov word ptr [0xa48a4c], ax */ W16((u32)(0xa48a4cu), (u16)r_eax);
    /* 004d26e4: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004d26eb: mov word ptr [0xa48a48], ax */ W16((u32)(0xa48a48u), (u16)r_eax);
    /* 004d26f1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d26f9: mov word ptr [0x9acb6c], cx */ W16((u32)(0x9acb6cu), (u16)r_ecx);
    /* 004d2700: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004d2704: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004d2708: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d270c: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 004d2710: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004d2714: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d2718: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d271b: call 0x82f2e4 */ r_esp -= 4; W32(r_esp, 0x4d2720u); f_0082f2e4();
    /* 004d2720: movsx eax, word ptr [0xa48a4c] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 004d2727: movsx edx, word ptr [0xa48a48] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa48a48u));
    /* 004d272e: movsx ecx, word ptr [0x9acb68] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 004d2735: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d2739: movsx eax, word ptr [0x9acb6c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x9acb6cu));
    /* 004d2740: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004d2744: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004d2748: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004d274c: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004d2750: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d2752: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004d2756: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004d275a: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x4d275fu); f_0082f308();
    /* 004d275f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d2762: ret  */ FN_RET(0x004d26c4); r_esp += 4; return;
}

void f_004d2764(void) /* sub_4D2764 */
{
    FN_ENTER(0x004d2764);
    /* 004d2764: fld dword ptr [0x90915c] */ FPUSH(R_F32((u32)(0x90915cu)));
    /* 004d276a: ret  */ FN_RET(0x004d2764); r_esp += 4; return;
}

void f_004d276c(void) /* sub_4D276C */
{
    FN_ENTER(0x004d276c);
    /* 004d276c: fld dword ptr [0x909158] */ FPUSH(R_F32((u32)(0x909158u)));
    /* 004d2772: ret  */ FN_RET(0x004d276c); r_esp += 4; return;
}

void f_004d2774(void) /* sub_4D2774 */
{
    FN_ENTER(0x004d2774);
    /* 004d2774: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d2777: mov edx, dword ptr [0xaf0350] */ r_edx = R32((u32)(0xaf0350u));
    /* 004d277d: mov ecx, dword ptr [0xaf0354] */ r_ecx = R32((u32)(0xaf0354u));
    /* 004d2783: mov word ptr [0x9acb68], dx */ W16((u32)(0x9acb68u), (u16)r_edx);
    /* 004d278a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d278c: mov word ptr [0xa48a38], ax */ W16((u32)(0xa48a38u), (u16)r_eax);
    /* 004d2792: mov word ptr [0xa48a4c], ax */ W16((u32)(0xa48a4cu), (u16)r_eax);
    /* 004d2798: mov word ptr [0xa48a48], ax */ W16((u32)(0xa48a48u), (u16)r_eax);
    /* 004d279e: mov word ptr [0x9acb6c], cx */ W16((u32)(0x9acb6cu), (u16)r_ecx);
    /* 004d27a5: call 0x4d26c4 */ r_esp -= 4; W32(r_esp, 0x4d27aau); f_004d26c4();
    /* 004d27aa: call 0x4d285c */ r_esp -= 4; W32(r_esp, 0x4d27afu); f_004d285c();
    /* 004d27af: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 004d27b4: call 0x83a57c */ r_esp -= 4; W32(r_esp, 0x4d27b9u); f_0083a57c();
    /* 004d27b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d27ba: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d27bf: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d27c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d27c6: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d27cb: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4d27d0u); f_00830b74();
    /* 004d27d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d27d2: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4d27d7u); f_00830cd8();
    /* 004d27d7: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 004d27dd: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 004d27e3: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 004d27e8: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 004d27ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d27f0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004d27f4: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004d27f8: mov dword ptr [esp + 0x28], 0x437a0000 */ W32((u32)(r_esp+0x28u), 0x437a0000u);
    /* 004d2800: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 004d2808: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004d280c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004d280e: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d2810: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 004d2818: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d281b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d281e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004d2822: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004d2826: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d282a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004d282e: mov dword ptr [esp + 0x48], 0x41a00000 */ W32((u32)(r_esp+0x48u), 0x41a00000u);
    /* 004d2836: mov dword ptr [esp + 0x4c], 0x41700000 */ W32((u32)(r_esp+0x4cu), 0x41700000u);
    /* 004d283e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d283f: mov dword ptr [0xa48a5c], 0x3f800000 */ W32((u32)(0xa48a5cu), 0x3f800000u);
    /* 004d2849: mov dword ptr [0xa48a58], 0x3f59999a */ W32((u32)(0xa48a58u), 0x3f59999au);
    /* 004d2853: call 0x83a5f0 */ r_esp -= 4; W32(r_esp, 0x4d2858u); f_0083a5f0();
    /* 004d2858: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d285b: ret  */ FN_RET(0x004d2774); r_esp += 4; return;
}

void f_004d285c(void) /* sub_4D285C */
{
    FN_ENTER(0x004d285c);
    /* 004d285c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d285f: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d2864: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004d286b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2870: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d2878: mov dword ptr [esp + 8], 0x41a00000 */ W32((u32)(r_esp+0x8u), 0x41a00000u);
    /* 004d2880: mov dword ptr [esp + 0xc], 0x41700000 */ W32((u32)(r_esp+0xcu), 0x41700000u);
    /* 004d2888: je 0x4d2894 */ if (fZ) goto L_004d2894;
L_004d288a:; BB(0x004d288a);
    /* 004d288a: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d288f: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
L_004d2894:; BB(0x004d2894);
    /* 004d2894: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d2897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d2898: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d289a: call 0x82ad14 */ r_esp -= 4; W32(r_esp, 0x4d289fu); f_0082ad14();
    /* 004d289f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d28a2: ret  */ FN_RET(0x004d285c); r_esp += 4; return;
}

void f_004d28a4(void) /* sub_4D28A4 */
{
    FN_ENTER(0x004d28a4);
    /* 004d28a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d28a7: mov edx, 0xa487c0 */ r_edx = 0xa487c0u;
    /* 004d28ac: mov eax, 0xa48820 */ r_eax = 0xa48820u;
    /* 004d28b1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004d28b3: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004d28b5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004d28b8: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004d28bb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004d28be: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 004d28c1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004d28c4: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004d28c7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004d28ca: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 004d28cd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004d28d0: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 004d28d3: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004d28d6: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 004d28d9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004d28dc: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004d28df: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004d28e2: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004d28e5: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004d28e8: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004d28eb: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004d28ee: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 004d28f1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004d28f4: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 004d28f7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004d28fa: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 004d28fd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004d2900: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 004d2903: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004d2906: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 004d2909: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004d290c: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 004d290f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004d2912: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004d2915: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 004d2918: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004d291b: push 0x43700000 */ { u32 v = 0x43700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2920: push 0x43a00000 */ { u32 v = 0x43a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2925: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d292au); f_0061cdb0();
    /* 004d292a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d292d: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 004d2932: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 004d2938: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d293c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004d2940: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d2942: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004d2945: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004d2949: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004d294d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004d2951: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d2954: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x4d2959u); f_0082f308();
    /* 004d2959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d295b: mov word ptr [0xa48a34], ax */ W16((u32)(0xa48a34u), (u16)r_eax);
    /* 004d2961: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d2964: ret  */ FN_RET(0x004d28a4); r_esp += 4; return;
}

void f_004d2968(void) /* sub_4D2968 */
{
    FN_ENTER(0x004d2968);
    /* 004d2968: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d296b: mov edx, 0xa48820 */ r_edx = 0xa48820u;
    /* 004d2970: mov eax, 0xa487c0 */ r_eax = 0xa487c0u;
    /* 004d2975: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004d2977: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004d2979: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004d297c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004d297f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004d2982: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 004d2985: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004d2988: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004d298b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004d298e: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 004d2991: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004d2994: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 004d2997: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004d299a: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 004d299d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004d29a0: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004d29a3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004d29a6: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004d29a9: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004d29ac: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004d29af: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004d29b2: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 004d29b5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004d29b8: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 004d29bb: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004d29be: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 004d29c1: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004d29c4: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 004d29c7: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004d29ca: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 004d29cd: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004d29d0: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 004d29d3: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004d29d6: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004d29d9: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 004d29dc: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004d29df: movzx edx, word ptr [0x9acb68] */ r_edx = (u32)R16((u32)(0x9acb68u));
    /* 004d29e6: movzx ecx, word ptr [0x9acb6c] */ r_ecx = (u32)R16((u32)(0x9acb6cu));
    /* 004d29ed: fld dword ptr [0x90911c] */ FPUSH(R_F32((u32)(0x90911cu)));
    /* 004d29f3: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004d29f6: sar edx, 0x11 */ { u32 c = (17u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004d29f9: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004d29fc: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004d2a00: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004d2a04: fsubr dword ptr [0xa48828] */ ST(0) = R_F32((u32)(0xa48828u)) - ST(0);
    /* 004d2a0a: sar ecx, 0x11 */ { u32 c = (17u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004d2a0d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004d2a11: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d2a15: fsubr dword ptr [0xa4882c] */ ST(0) = R_F32((u32)(0xa4882cu)) - ST(0);
    /* 004d2a1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d2a1d: fchs  */ ST(0) = -ST(0);
    /* 004d2a1f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004d2a21: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d2a23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d2a25: fchs  */ ST(0) = -ST(0);
    /* 004d2a27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d2a28: je 0x4d2ad6 */ if (fZ) goto L_004d2ad6;
L_004d2a2e:; BB(0x004d2a2e);
    /* 004d2a2e: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004d2a30: mov eax, 1 */ r_eax = 0x1u;
    /* 004d2a35: mov word ptr [0xa48a34], ax */ W16((u32)(0xa48a34u), (u16)r_eax);
L_004d2a3b:; BB(0x004d2a3b);
    /* 004d2a3b: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 004d2a40: mov ecx, dword ptr [0xaf0354] */ r_ecx = R32((u32)(0xaf0354u));
    /* 004d2a46: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d2a4a: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004d2a4e: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004d2a53: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d2a58: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004d2a5c: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004d2a60: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d2a64: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004d2a68: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004d2a6c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004d2a71: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d2a76: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004d2a7a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004d2a7e: fistp dword ptr [esp + 0x14] */ W32((u32)(r_esp+0x14u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d2a82: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004d2a86: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004d2a8a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d2a8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004d2a8f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004d2a92: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004d2a96: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x4d2a9bu); f_0082f308();
    /* 004d2a9b: push dword ptr [0xa4882c] */ { u32 v = R32((u32)(0xa4882cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d2aa1: push dword ptr [0xa48828] */ { u32 v = R32((u32)(0xa48828u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d2aa7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d2aacu); f_0061cdb0();
    /* 004d2aac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d2aaf: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d2ab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2ab6: je 0x4d2ad2 */ if (fZ) goto L_004d2ad2;
L_004d2ab8:; BB(0x004d2ab8);
    /* 004d2ab8: push 0x46a41000 */ { u32 v = 0x46a41000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2abd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ac2: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2ac7: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 004d2acd: call 0x82ebc8 */ r_esp -= 4; W32(r_esp, 0x4d2ad2u); f_0082ebc8();
L_004d2ad2:; BB(0x004d2ad2);
    /* 004d2ad2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d2ad5: ret  */ FN_RET(0x004d2968); r_esp += 4; return;
L_004d2ad6:; BB(0x004d2ad6);
    /* 004d2ad6: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004d2ad8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d2ada: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d2adb: jne 0x4d2a2e */ if (!fZ) goto L_004d2a2e;
L_004d2ae1:; BB(0x004d2ae1);
    /* 004d2ae1: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004d2ae3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d2ae5: mov word ptr [0xa48a34], ax */ W16((u32)(0xa48a34u), (u16)r_eax);
    /* 004d2aeb: jmp 0x4d2a3b */ goto L_004d2a3b;
}

void f_004d2af0(void) /* sub_4D2AF0 */
{
    FN_ENTER(0x004d2af0);
    /* 004d2af0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d2af2: mov word ptr [0xa48a34], ax */ W16((u32)(0xa48a34u), (u16)r_eax);
    /* 004d2af8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d2afdu); f_0061cdb0();
    /* 004d2afd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d2aff: mov byte ptr [0xa489f4], al */ W8((u32)(0xa489f4u), (u8)r_eax);
    /* 004d2b04: mov word ptr [0xa489f6], ax */ W16((u32)(0xa489f6u), (u16)r_eax);
    /* 004d2b0a: mov dword ptr [0xa489f8], eax */ W32((u32)(0xa489f8u), r_eax);
    /* 004d2b0f: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
    /* 004d2b14: ret  */ FN_RET(0x004d2af0); r_esp += 4; return;
}

void f_004d2b18(void) /* sub_4D2B18 */
{
    FN_ENTER(0x004d2b18);
    /* 004d2b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2b19: mov ebp, esp */ r_ebp = r_esp;
    /* 004d2b1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d2b1d: push 0x8d1d8a */ { u32 v = 0x8d1d8au; r_esp -= 4; W32(r_esp, v); }
    /* 004d2b22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d2b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d2b29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d2b30: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d2b33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d2b36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d2b39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d2b3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d2b3f: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004d2b44: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004d2b4b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d2b50u); f_005caba4();
    /* 004d2b50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d2b53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d2b56: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004d2b59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d2b5b: je 0x4d2f9c */ if (fZ) goto L_004d2f9c;
L_004d2b61:; BB(0x004d2b61);
    /* 004d2b61: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004d2b68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d2b6f: mov ecx, eax */ r_ecx = r_eax;
    /* 004d2b71: mov eax, dword ptr [0xaca380] */ r_eax = R32((u32)(0xaca380u));
    /* 004d2b76: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004d2b79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d2b7a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004d2b7d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d2b82u); f_008193cc();
    /* 004d2b82: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004d2b89: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d2b8c: mov dword ptr [edx], 0xafc590 */ W32((u32)(r_edx), 0xafc590u);
    /* 004d2b92: mov esi, dword ptr [0x9acb64] */ r_esi = R32((u32)(0x9acb64u));
    /* 004d2b98: mov dword ptr [edx + 0x19c], 0x3555 */ W32((u32)(r_edx+0x19cu), 0x3555u);
    /* 004d2ba2: mov dword ptr [0xa48a54], edx */ W32((u32)(0xa48a54u), r_edx);
    /* 004d2ba8: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 004d2bab: mov dword ptr [edx + 0x1c8], 0 */ W32((u32)(r_edx+0x1c8u), 0x0u);
    /* 004d2bb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d2bb7: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 004d2bba: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 004d2bc0: mov dword ptr [edx + 0x1cc], 0 */ W32((u32)(r_edx+0x1ccu), 0x0u);
    /* 004d2bca: mov dword ptr [edx + 0x174], eax */ W32((u32)(r_edx+0x174u), r_eax);
    /* 004d2bd0: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 004d2bd6: mov dword ptr [edx + 0x164], eax */ W32((u32)(r_edx+0x164u), r_eax);
    /* 004d2bdc: mov dword ptr [edx + 0x1d0], 0 */ W32((u32)(r_edx+0x1d0u), 0x0u);
    /* 004d2be6: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 004d2bec: mov dword ptr [edx + 0x168], eax */ W32((u32)(r_edx+0x168u), r_eax);
    /* 004d2bf2: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 004d2bf8: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
    /* 004d2c02: mov dword ptr [edx + 0x16c], eax */ W32((u32)(r_edx+0x16cu), r_eax);
    /* 004d2c08: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 004d2c0e: mov dword ptr [edx + 0x170], eax */ W32((u32)(r_edx+0x170u), r_eax);
    /* 004d2c14: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 004d2c1e: mov dword ptr [edx + 0x190], eax */ W32((u32)(r_edx+0x190u), r_eax);
    /* 004d2c24: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
    /* 004d2c2a: mov dword ptr [edx + 0x198], eax */ W32((u32)(r_edx+0x198u), r_eax);
    /* 004d2c30: mov dword ptr [edx + 0xac], 0 */ W32((u32)(r_edx+0xacu), 0x0u);
    /* 004d2c3a: mov dword ptr [edx + 0x1c0], eax */ W32((u32)(r_edx+0x1c0u), r_eax);
    /* 004d2c40: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 004d2c46: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004d2c49: mov dword ptr [edx + 0x134], 0 */ W32((u32)(r_edx+0x134u), 0x0u);
    /* 004d2c53: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004d2c56: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004d2c59: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004d2c5c: mov dword ptr [edx + 0x138], 0 */ W32((u32)(r_edx+0x138u), 0x0u);
    /* 004d2c66: mov word ptr [edx + 0x64], ax */ W16((u32)(r_edx+0x64u), (u16)r_eax);
    /* 004d2c6a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004d2c6c: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004d2c76: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 004d2c80: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 004d2c8a: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 004d2c94: mov dword ptr [edx + 0x140], 0 */ W32((u32)(r_edx+0x140u), 0x0u);
    /* 004d2c9e: mov dword ptr [edx + 0x144], 0 */ W32((u32)(r_edx+0x144u), 0x0u);
    /* 004d2ca8: mov dword ptr [edx + 0x148], 0 */ W32((u32)(r_edx+0x148u), 0x0u);
    /* 004d2cb2: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 004d2cbc: mov dword ptr [edx + 0xc0], 0 */ W32((u32)(r_edx+0xc0u), 0x0u);
    /* 004d2cc6: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 004d2cd0: mov dword ptr [edx + 0x14c], 0 */ W32((u32)(r_edx+0x14cu), 0x0u);
    /* 004d2cda: mov dword ptr [edx + 0x150], 0 */ W32((u32)(r_edx+0x150u), 0x0u);
    /* 004d2ce4: mov dword ptr [edx + 0x154], 0 */ W32((u32)(r_edx+0x154u), 0x0u);
    /* 004d2cee: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 004d2cf8: mov dword ptr [edx + 0xcc], 0 */ W32((u32)(r_edx+0xccu), 0x0u);
    /* 004d2d02: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
    /* 004d2d0c: mov dword ptr [edx + 0x158], 0 */ W32((u32)(r_edx+0x158u), 0x0u);
    /* 004d2d16: mov dword ptr [edx + 0x15c], 0 */ W32((u32)(r_edx+0x15cu), 0x0u);
    /* 004d2d20: mov dword ptr [edx + 0x160], 0 */ W32((u32)(r_edx+0x160u), 0x0u);
    /* 004d2d2a: mov dword ptr [edx + 0x178], 0 */ W32((u32)(r_edx+0x178u), 0x0u);
    /* 004d2d34: mov dword ptr [edx + 0x17c], 0 */ W32((u32)(r_edx+0x17cu), 0x0u);
    /* 004d2d3e: mov dword ptr [edx + 0x180], 0 */ W32((u32)(r_edx+0x180u), 0x0u);
    /* 004d2d48: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 004d2d52: mov dword ptr [edx + 0x1a4], 0 */ W32((u32)(r_edx+0x1a4u), 0x0u);
    /* 004d2d5c: mov dword ptr [edx + 0x1a8], 0 */ W32((u32)(r_edx+0x1a8u), 0x0u);
    /* 004d2d66: mov dword ptr [edx + 0x184], 0 */ W32((u32)(r_edx+0x184u), 0x0u);
    /* 004d2d70: mov dword ptr [edx + 0x188], 0 */ W32((u32)(r_edx+0x188u), 0x0u);
    /* 004d2d7a: mov dword ptr [edx + 0x18c], 0 */ W32((u32)(r_edx+0x18cu), 0x0u);
    /* 004d2d84: mov dword ptr [edx + 0x1ac], 0 */ W32((u32)(r_edx+0x1acu), 0x0u);
    /* 004d2d8e: mov dword ptr [edx + 0x1b0], 0 */ W32((u32)(r_edx+0x1b0u), 0x0u);
    /* 004d2d98: mov dword ptr [edx + 0x1b4], 0 */ W32((u32)(r_edx+0x1b4u), 0x0u);
    /* 004d2da2: mov dword ptr [edx + 0x1b8], 0 */ W32((u32)(r_edx+0x1b8u), 0x0u);
    /* 004d2dac: mov dword ptr [edx + 0x1bc], 0 */ W32((u32)(r_edx+0x1bcu), 0x0u);
    /* 004d2db6: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 004d2dbd: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 004d2dc4: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 004d2dcb: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 004d2dd2: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 004d2dd9: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 004d2de0: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 004d2de7: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 004d2dee: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 004d2df5: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 004d2dfc: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 004d2e03: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 004d2e0a: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 004d2e11: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 004d2e18: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 004d2e1f: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 004d2e26: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
    /* 004d2e2d: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
    /* 004d2e34: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
L_004d2e3e:; BB(0x004d2e3e);
    /* 004d2e3e: call dword ptr [ebx*4 + 0x9acb70] */ { u32 t = R32((u32)(r_ebx*4+0x9acb70u)); r_esp -= 4; W32(r_esp, 0x4d2e45u); call_ind(t); }
    /* 004d2e45: mov ecx, dword ptr [0xa489f8] */ r_ecx = R32((u32)(0xa489f8u));
    /* 004d2e4b: mov dword ptr [ecx*4 + 0xa48a00], eax */ W32((u32)(r_ecx*4+0xa48a00u), r_eax);
    /* 004d2e52: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 004d2e55: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d2e58: mov dword ptr [0xa489f8], edx */ W32((u32)(0xa489f8u), r_edx);
    /* 004d2e5e: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d2e61: jl 0x4d2e3e */ if ((fS!=fO)) goto L_004d2e3e;
L_004d2e63:; BB(0x004d2e63);
    /* 004d2e63: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004d2e66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d2e68: mov byte ptr [0xa489f4], al */ W8((u32)(0xa489f4u), (u8)r_eax);
    /* 004d2e6d: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 004d2e77: mov dword ptr [esi + 0xd8], 0 */ W32((u32)(r_esi+0xd8u), 0x0u);
    /* 004d2e81: mov dword ptr [esi + 0xdc], 0 */ W32((u32)(r_esi+0xdcu), 0x0u);
    /* 004d2e8b: mov dword ptr [esi + 0x104], 0 */ W32((u32)(r_esi+0x104u), 0x0u);
    /* 004d2e95: mov dword ptr [esi + 0x108], 0 */ W32((u32)(r_esi+0x108u), 0x0u);
    /* 004d2e9f: mov dword ptr [esi + 0x10c], 0 */ W32((u32)(r_esi+0x10cu), 0x0u);
    /* 004d2ea9: mov dword ptr [esi + 0xe0], 0 */ W32((u32)(r_esi+0xe0u), 0x0u);
    /* 004d2eb3: mov dword ptr [esi + 0xe4], 0 */ W32((u32)(r_esi+0xe4u), 0x0u);
    /* 004d2ebd: mov dword ptr [esi + 0xe8], 0 */ W32((u32)(r_esi+0xe8u), 0x0u);
    /* 004d2ec7: mov dword ptr [esi + 0x110], 0 */ W32((u32)(r_esi+0x110u), 0x0u);
    /* 004d2ed1: mov dword ptr [esi + 0x114], 0 */ W32((u32)(r_esi+0x114u), 0x0u);
    /* 004d2edb: mov dword ptr [esi + 0x118], 0 */ W32((u32)(r_esi+0x118u), 0x0u);
    /* 004d2ee5: mov dword ptr [esi + 0xec], 0 */ W32((u32)(r_esi+0xecu), 0x0u);
    /* 004d2eef: mov dword ptr [esi + 0xf0], 0 */ W32((u32)(r_esi+0xf0u), 0x0u);
    /* 004d2ef9: mov dword ptr [esi + 0xf4], 0 */ W32((u32)(r_esi+0xf4u), 0x0u);
    /* 004d2f03: mov dword ptr [esi + 0x11c], 0 */ W32((u32)(r_esi+0x11cu), 0x0u);
    /* 004d2f0d: mov dword ptr [esi + 0x120], 0 */ W32((u32)(r_esi+0x120u), 0x0u);
    /* 004d2f17: mov dword ptr [esi + 0x124], 0 */ W32((u32)(r_esi+0x124u), 0x0u);
    /* 004d2f21: mov dword ptr [esi + 0xf8], 0 */ W32((u32)(r_esi+0xf8u), 0x0u);
    /* 004d2f2b: mov dword ptr [esi + 0xfc], 0 */ W32((u32)(r_esi+0xfcu), 0x0u);
    /* 004d2f35: mov dword ptr [esi + 0x100], 0 */ W32((u32)(r_esi+0x100u), 0x0u);
    /* 004d2f3f: mov dword ptr [esi + 0x128], 0 */ W32((u32)(r_esi+0x128u), 0x0u);
    /* 004d2f49: mov dword ptr [esi + 0x12c], 0 */ W32((u32)(r_esi+0x12cu), 0x0u);
    /* 004d2f53: mov dword ptr [esi + 0x130], 0 */ W32((u32)(r_esi+0x130u), 0x0u);
    /* 004d2f5d: mov dword ptr [0xa48780], 0 */ W32((u32)(0xa48780u), 0x0u);
    /* 004d2f67: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004d2f6a: mov dword ptr [0xa48784], 0 */ W32((u32)(0xa48784u), 0x0u);
    /* 004d2f74: mov dword ptr [0xa48788], 0 */ W32((u32)(0xa48788u), 0x0u);
    /* 004d2f7e: mov dword ptr [0xa4878c], 0 */ W32((u32)(0xa4878cu), 0x0u);
    /* 004d2f88: mov dword ptr [0xa48790], 0 */ W32((u32)(0xa48790u), 0x0u);
    /* 004d2f92: mov dword ptr [0xa48794], 0xbf800000 */ W32((u32)(0xa48794u), 0xbf800000u);
L_004d2f9c:; BB(0x004d2f9c);
    /* 004d2f9c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d2f9f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d2fa2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d2fa5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d2fa8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d2faf: mov esp, ebp */ r_esp = r_ebp;
    /* 004d2fb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2fb2: ret  */ FN_RET(0x004d2b18); r_esp += 4; return;
}

void f_004d2fb4(void) /* sub_4D2FB4 */
{
    FN_ENTER(0x004d2fb4);
    /* 004d2fb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2fb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d2fb6: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 004d2fba: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d2fbc: je 0x4d3079 */ if (fZ) goto L_004d3079;
L_004d2fc2:; BB(0x004d2fc2);
    /* 004d2fc2: movzx eax, byte ptr [0xa489f4] */ r_eax = (u32)R8((u32)(0xa489f4u));
    /* 004d2fc9: mov ecx, dword ptr [eax*4 + 0xa48a00] */ r_ecx = R32((u32)(r_eax*4+0xa48a00u));
    /* 004d2fd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d2fd2: je 0x4d2fff */ if (fZ) goto L_004d2fff;
L_004d2fd4:; BB(0x004d2fd4);
    /* 004d2fd4: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d2fd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d2fda: mov dword ptr [eax + 0x90], ebp */ W32((u32)(r_eax+0x90u), r_ebp);
    /* 004d2fe0: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 004d2fe2: mov dword ptr [ecx + 0x1c], ebp */ W32((u32)(r_ecx+0x1cu), r_ebp);
    /* 004d2fe5: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004d2fe9: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 004d2fed: call dword ptr [ebx + 0x1c] */ { u32 t = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, 0x4d2ff0u); call_ind(t); }
    /* 004d2ff0: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d2ff5: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d2ffa: mov dword ptr [0xa489fc], eax */ W32((u32)(0xa489fcu), r_eax);
L_004d2fff:; BB(0x004d2fff);
    /* 004d2fff: mov ebx, dword ptr [0xa48a00] */ r_ebx = R32((u32)(0xa48a00u));
    /* 004d3005: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d3007: je 0x4d301c */ if (fZ) goto L_004d301c;
L_004d3009:; BB(0x004d3009);
    /* 004d3009: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004d300b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d300c: mov dword ptr [ebx + 0x1c], ebp */ W32((u32)(r_ebx+0x1cu), r_ebp);
    /* 004d300f: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004d3013: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
    /* 004d3017: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d3019: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x4d301cu); call_ind(t); }
L_004d301c:; BB(0x004d301c);
    /* 004d301c: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3022: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d3024: je 0x4d3079 */ if (fZ) goto L_004d3079;
L_004d3026:; BB(0x004d3026);
    /* 004d3026: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004d3029: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 004d302f: mov ebp, dword ptr [0xa48a54] */ r_ebp = R32((u32)(0xa48a54u));
    /* 004d3035: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004d3038: mov dword ptr [ebp + 0xd8], edx */ W32((u32)(r_ebp+0xd8u), r_edx);
    /* 004d303e: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 004d3041: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3047: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 004d304d: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3053: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 004d3056: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 004d305c: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 004d305f: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d3065: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 004d306b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d3070: mov ebx, dword ptr [ebx + 0x50] */ r_ebx = R32((u32)(r_ebx+0x50u));
    /* 004d3073: mov dword ptr [eax + 0x10c], ebx */ W32((u32)(r_eax+0x10cu), r_ebx);
L_004d3079:; BB(0x004d3079);
    /* 004d3079: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d307a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d307b: ret  */ FN_RET(0x004d2fb4); r_esp += 4; return;
}

