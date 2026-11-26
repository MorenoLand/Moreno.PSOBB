#include "protos.h"

void f_004a2008(void) /* sub_4A2008 */
{
    FN_ENTER(0x004a2008);
    /* 004a2008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2009: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a200a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a200b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a200c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a200f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a2011: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004a2015: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a2018: ja 0x4a22a3 */ if ((!fC&&!fZ)) goto L_004a22a3;
L_004a201e:; BB(0x004a201e);
    /* 004a201e: mov eax, dword ptr [eax*4 + 0x903870] */ r_eax = R32((u32)(r_eax*4+0x903870u));
    /* 004a2025: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004a22a3:; BB(0x004a22a3);
    /* 004a22a3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a22a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a22a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a22a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a22a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a22aa: ret 4 */ FN_RET(0x004a2008); r_esp += 8; return;
}

void f_004a2027(void)
{
    FN_ENTER(0x004a2027);
    /* 004a2027: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a202d: mov ebp, dword ptr [ebx + 0x38] */ r_ebp = R32((u32)(r_ebx+0x38u));
    /* 004a2030: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 004a2033: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 004a2036: and eax, 0xffffff7b */ {  u32 a = r_eax; u32 b = 0xffffff7bu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a203b: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a2041: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 004a2048: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a204a: mov dword ptr [ebx + 0x3c], 0x40000000 */ W32((u32)(r_ebx+0x3cu), 0x40000000u);
    /* 004a2051: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 004a2058: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x4a205du); f_0078730c();
    /* 004a205d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a205f: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x4a2064u); f_0051f894();
    /* 004a2064: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2066: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x4a206bu); f_006bb100();
    /* 004a206b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a206c: mov dword ptr [ebx + 0x38], ebp */ W32((u32)(r_ebx+0x38u), r_ebp);
    /* 004a206f: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 004a2072: mov dword ptr [ebx + 0x40], edi */ W32((u32)(r_ebx+0x40u), r_edi);
    /* 004a2075: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2077: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x4a207cu); f_0078730c();
    /* 004a207c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004a207e: mov dword ptr [ebx + 0x30], 0x12008 */ W32((u32)(r_ebx+0x30u), 0x12008u);
    /* 004a2085: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2087: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2089: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x4a208fu); call_ind(t); }
    /* 004a208f: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4a2094u); f_00717f38();
    /* 004a2094: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4a2099u); f_004d3250();
    /* 004a2099: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a209c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a209d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a209e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a209f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a20a0: ret 4 */ FN_RET(0x004a2027); r_esp += 8; return;
}

void f_004a20a3(void)
{
    FN_ENTER(0x004a20a3);
    /* 004a20a3: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a20a5: mov eax, 0x1a */ r_eax = 0x1au;
    /* 004a20aa: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a20b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a20b3: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4a20b9u); call_ind(t); }
    /* 004a20b9: fld dword ptr [0x903f9c] */ FPUSH(R_F32((u32)(0x903f9cu)));
    /* 004a20bf: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 004a20c2: fld dword ptr [0x903fa4] */ FPUSH(R_F32((u32)(0x903fa4u)));
    /* 004a20c8: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004a20cb: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a20d1: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 004a20db: or eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a20e0: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a20e6: mov dword ptr [ebx + 0x3c], 0x43340000 */ W32((u32)(r_ebx+0x3cu), 0x43340000u);
    /* 004a20ed: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004a20ef: mov dword ptr [ebx + 0x6e4], ebp */ W32((u32)(r_ebx+0x6e4u), r_ebp);
    /* 004a20f5: mov dword ptr [ebx + 0x6e8], ebp */ W32((u32)(r_ebx+0x6e8u), r_ebp);
    /* 004a20fb: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 004a2105: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a2107: fmul qword ptr [0x903aa8] */ ST(0) = ST(0) * R_F64((u32)(0x903aa8u));
    /* 004a210d: fdiv qword ptr [0x903aa0] */ ST(0) = ST(0) / R_F64((u32)(0x903aa0u));
    /* 004a2113: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004a2117: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004a211c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a2121: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004a2125: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004a2129: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a212d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004a2131: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 004a2135: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 004a2138: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a213du); f_0082dcbc();
    /* 004a213d: fld dword ptr [0x903f08] */ FPUSH(R_F32((u32)(0x903f08u)));
    /* 004a2143: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004a2146: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a2148: fadd dword ptr [0x903f9c] */ ST(0) = ST(0) + R_F32((u32)(0x903f9cu));
    /* 004a214e: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004a2151: mov dword ptr [ebx + 0x3c], 0x43b40000 */ W32((u32)(r_ebx+0x3cu), 0x43b40000u);
    /* 004a2158: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a215du); f_0082ddd8();
    /* 004a215d: push 0x8fc30c */ { u32 v = 0x8fc30cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2162: fld dword ptr [0x903f08] */ FPUSH(R_F32((u32)(0x903f08u)));
    /* 004a2168: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a216a: fadd dword ptr [0x903fa4] */ ST(0) = ST(0) + R_F32((u32)(0x903fa4u));
    /* 004a2170: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004a2173: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x4a2178u); f_00814f0c();
    /* 004a2178: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a2179: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4a217eu); f_00717f74();
    /* 004a217e: mov byte ptr [esp], 2 */ W8((u32)(r_esp), 0x2u);
    /* 004a2182: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2184: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 004a2188: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004a2190: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004a2195: mov dword ptr [esp + 8], 0x3f000000 */ W32((u32)(r_esp+0x8u), 0x3f000000u);
    /* 004a219d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004a219f: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4a21a4u); f_004d31f4();
    /* 004a21a4: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004a21a8: push 0x31c7 */ { u32 v = 0x31c7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a21ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a21ae: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4a21b3u); f_004d6770();
    /* 004a21b3: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 004a21b6: add ebx, 0x5c */ {  u32 a = r_ebx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004a21b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a21ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a21bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a21bc: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x4a21c1u); f_004d681c();
    /* 004a21c1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a21c4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a21c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a21c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a21c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a21ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a21cb: ret 4 */ FN_RET(0x004a20a3); r_esp += 8; return;
}

void f_004a21ce(void)
{
    FN_ENTER(0x004a21ce);
    /* 004a21ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a21d0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a21d5u); f_007aa094();
    /* 004a21d5: push 0x42dc0000 */ { u32 v = 0x42dc0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a21da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a21dc: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a21e1u); f_007aaa30();
    /* 004a21e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a21e3: je 0x4a2251 */ if (fZ) goto L_004a2251;
L_004a21e5:; BB(0x004a21e5);
    /* 004a21e5: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004a21e8: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004a21eb: mov dword ptr [esp + 0x10], 0xc1f00000 */ W32((u32)(r_esp+0x10u), 0xc1f00000u);
    /* 004a21f3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004a21f7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a21fb: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 004a21ff: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2201: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2206: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2207: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a220cu); f_0050b7a4();
    /* 004a220c: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004a2210: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2212: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 004a2217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2218: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a221du); f_0050b7a4();
    /* 004a221d: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004a2221: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2223: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 004a2228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2229: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a222eu); f_0050b7a4();
    /* 004a222e: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 004a2232: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2234: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 004a2239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a223a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a223fu); f_0050b7a4();
    /* 004a223f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2243: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2244: push 0x3a6 */ { u32 v = 0x3a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2249: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a224eu); f_00814298();
    /* 004a224e: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2251:; BB(0x004a2251);
    /* 004a2251: mov eax, dword ptr [ebx + 0x6e4] */ r_eax = R32((u32)(r_ebx+0x6e4u));
    /* 004a2257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2259: jne 0x4a2283 */ if (!fZ) goto L_004a2283;
L_004a225b:; BB(0x004a225b);
    /* 004a225b: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004a2261: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a2263: je 0x4a22a3 */ if (fZ) goto L_004a22a3;
L_004a2265:; BB(0x004a2265);
    /* 004a2265: mov dword ptr [ebx + 0x6e4], 1 */ W32((u32)(r_ebx+0x6e4u), 0x1u);
    /* 004a226f: mov dword ptr [ebx + 0x6e8], 0 */ W32((u32)(r_ebx+0x6e8u), 0x0u);
    /* 004a2279: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a227c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a227d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a227e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a227f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a2280: ret 4 */ FN_RET(0x004a21ce); r_esp += 8; return;
L_004a2283:; BB(0x004a2283);
    /* 004a2283: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2286: jne 0x4a22a3 */ if (!fZ) goto L_004a22a3;
L_004a2288:; BB(0x004a2288);
    /* 004a2288: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 004a228e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a2291: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 004a2297: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a229a: jl 0x4a22a3 */ if ((fS!=fO)) goto L_004a22a3;
L_004a229c:; BB(0x004a229c);
    /* 004a229c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a229e: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a22a3u); f_004a7e20();
L_004a22a3:; BB(0x004a22a3);
    /* 004a22a3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a22a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a22a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a22a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a22a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a22aa: ret 4 */ FN_RET(0x004a21ce); r_esp += 8; return;
}

void f_004a22a3(void)
{
    FN_ENTER(0x004a22a3);
    /* 004a22a3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a22a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a22a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a22a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a22a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a22aa: ret 4 */ FN_RET(0x004a22a3); r_esp += 8; return;
}

void f_004a22b0(void) /* sub_4A22B0 */
{
    FN_ENTER(0x004a22b0);
    /* 004a22b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a22b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a22b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a22b5: push 0x8d046c */ { u32 v = 0x8d046cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a22ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a22c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a22c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a22c8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a22cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a22ce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004a22d1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004a22d4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004a22d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a22da: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004a22dd: lea eax, [ecx + 0x6f0] */ r_eax = (u32)(r_ecx+0x6f0u);
    /* 004a22e3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004a22e6: movzx eax, byte ptr [0xa474c0] */ r_eax = (u32)R8((u32)(0xa474c0u));
    /* 004a22ed: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a22ef: jne 0x4a2305 */ if (!fZ) goto L_004a2305;
L_004a22f1:; BB(0x004a22f1);
    /* 004a22f1: mov dword ptr [0x9a8134], 0x43340000 */ W32((u32)(0x9a8134u), 0x43340000u);
    /* 004a22fb: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a2300: mov byte ptr [0xa474c0], al */ W8((u32)(0xa474c0u), (u8)r_eax);
L_004a2305:; BB(0x004a2305);
    /* 004a2305: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2308: je 0x4a266d */ if (fZ) goto L_004a266d;
L_004a230e:; BB(0x004a230e);
    /* 004a230e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2311: je 0x4a2659 */ if (fZ) goto L_004a2659;
L_004a2317:; BB(0x004a2317);
    /* 004a2317: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a231a: je 0x4a2659 */ if (fZ) goto L_004a2659;
L_004a2320:; BB(0x004a2320);
    /* 004a2320: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2323: je 0x4a2640 */ if (fZ) goto L_004a2640;
L_004a2329:; BB(0x004a2329);
    /* 004a2329: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a232b: jne 0x4a25b8 */ if (!fZ) goto L_004a25b8;
L_004a2331:; BB(0x004a2331);
    /* 004a2331: mov eax, ecx */ r_eax = r_ecx;
    /* 004a2333: mov eax, dword ptr [eax + 0x6e4] */ r_eax = R32((u32)(r_eax+0x6e4u));
    /* 004a2339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a233b: jne 0x4a2571 */ if (!fZ) goto L_004a2571;
L_004a2341:; BB(0x004a2341);
    /* 004a2341: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a2346u); f_007aa094();
    /* 004a2346: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2349: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004a234f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a2352: je 0x4a2372 */ if (fZ) goto L_004a2372;
L_004a2354:; BB(0x004a2354);
    /* 004a2354: mov dword ptr [eax + 0x6e4], 1 */ W32((u32)(r_eax+0x6e4u), 0x1u);
    /* 004a235e: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4a2363u); f_00717f38();
    /* 004a2363: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2366: mov eax, 4 */ r_eax = 0x4u;
    /* 004a236b: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_004a2372:; BB(0x004a2372);
    /* 004a2372: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2375: mov edx, dword ptr [eax + 0x6ec] */ r_edx = R32((u32)(r_eax+0x6ecu));
    /* 004a237b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a237d: jne 0x4a2640 */ if (!fZ) goto L_004a2640;
L_004a2383:; BB(0x004a2383);
    /* 004a2383: movzx eax, byte ptr [0xa474c0] */ r_eax = (u32)R8((u32)(0xa474c0u));
    /* 004a238a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a238c: jne 0x4a23a2 */ if (!fZ) goto L_004a23a2;
L_004a238e:; BB(0x004a238e);
    /* 004a238e: mov dword ptr [0x9a811c], 0 */ W32((u32)(0x9a811cu), 0x0u);
    /* 004a2398: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a239d: mov byte ptr [0xa474c0], al */ W8((u32)(0xa474c0u), (u8)r_eax);
L_004a23a2:; BB(0x004a23a2);
    /* 004a23a2: push 0x42880000 */ { u32 v = 0x42880000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a23a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a23aa: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a23afu); f_007aaa30();
    /* 004a23af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a23b1: je 0x4a23f5 */ if (fZ) goto L_004a23f5;
L_004a23b3:; BB(0x004a23b3);
    /* 004a23b3: mov eax, dword ptr [0x9a8118] */ r_eax = R32((u32)(0x9a8118u));
    /* 004a23b8: mov edx, dword ptr [0x9a811c] */ r_edx = R32((u32)(0x9a811cu));
    /* 004a23be: mov ecx, dword ptr [0x9a8120] */ r_ecx = R32((u32)(0x9a8120u));
    /* 004a23c4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a23c7: mov esi, dword ptr [ebx + 0x5f8] */ r_esi = R32((u32)(r_ebx+0x5f8u));
    /* 004a23cd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004a23d0: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004a23d3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004a23d6: lea edi, [ebp - 0x38] */ r_edi = (u32)(r_ebp+0xffffffc8u);
    /* 004a23d9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a23db: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a23de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a23df: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a23e4u); f_0050b7a4();
    /* 004a23e4: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a23e6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a23e8: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4a23edu); f_006ff5f8();
    /* 004a23ed: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a23f0: jmp 0x4a249d */ goto L_004a249d;
L_004a23f5:; BB(0x004a23f5);
    /* 004a23f5: push 0x43520000 */ { u32 v = 0x43520000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a23fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a23fd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a2402u); f_007aaa30();
    /* 004a2402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2404: je 0x4a2448 */ if (fZ) goto L_004a2448;
L_004a2406:; BB(0x004a2406);
    /* 004a2406: mov eax, dword ptr [0x9a8124] */ r_eax = R32((u32)(0x9a8124u));
    /* 004a240b: mov edx, dword ptr [0x9a8128] */ r_edx = R32((u32)(0x9a8128u));
    /* 004a2411: mov ecx, dword ptr [0x9a812c] */ r_ecx = R32((u32)(0x9a812cu));
    /* 004a2417: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a241a: mov esi, dword ptr [ebx + 0x5f8] */ r_esi = R32((u32)(r_ebx+0x5f8u));
    /* 004a2420: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004a2423: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004a2426: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004a2429: lea edi, [ebp - 0x38] */ r_edi = (u32)(r_ebp+0xffffffc8u);
    /* 004a242c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a242e: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a2431: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2432: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a2437u); f_0050b7a4();
    /* 004a2437: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2439: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a243e: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4a2443u); f_006ff5f8();
    /* 004a2443: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2446: jmp 0x4a249d */ goto L_004a249d;
L_004a2448:; BB(0x004a2448);
    /* 004a2448: push 0x43d20000 */ { u32 v = 0x43d20000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a244d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2450: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a2455u); f_007aaa30();
    /* 004a2455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2457: jne 0x4a246a */ if (!fZ) goto L_004a246a;
L_004a2459:; BB(0x004a2459);
    /* 004a2459: push 0x43e78000 */ { u32 v = 0x43e78000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a245e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2461: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a2466u); f_007aaa30();
    /* 004a2466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2468: je 0x4a249d */ if (fZ) goto L_004a249d;
L_004a246a:; BB(0x004a246a);
    /* 004a246a: mov eax, dword ptr [0x9a8124] */ r_eax = R32((u32)(0x9a8124u));
    /* 004a246f: mov edx, dword ptr [0x9a8128] */ r_edx = R32((u32)(0x9a8128u));
    /* 004a2475: mov ecx, dword ptr [0x9a812c] */ r_ecx = R32((u32)(0x9a812cu));
    /* 004a247b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a247e: mov esi, dword ptr [ebx + 0x5f8] */ r_esi = R32((u32)(r_ebx+0x5f8u));
    /* 004a2484: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004a2487: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004a248a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004a248d: lea edi, [ebp - 0x38] */ r_edi = (u32)(r_ebp+0xffffffc8u);
    /* 004a2490: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2492: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 004a2494: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2495: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a249au); f_0050b7a4();
    /* 004a249a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a249d:; BB(0x004a249d);
    /* 004a249d: push 0x43910000 */ { u32 v = 0x43910000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a24a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a24a5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a24aau); f_007aaa30();
    /* 004a24aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a24ac: je 0x4a24cc */ if (fZ) goto L_004a24cc;
L_004a24ae:; BB(0x004a24ae);
    /* 004a24ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a24b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a24b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a24b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a24b3: push 0x39a */ { u32 v = 0x39au; r_esp -= 4; W32(r_esp, v); }
    /* 004a24b8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a24bdu); f_00814298();
    /* 004a24bd: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a24bf: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a24c4: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4a24c9u); f_006ff5f8();
    /* 004a24c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a24cc:; BB(0x004a24cc);
    /* 004a24cc: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a24d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a24d4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a24d9u); f_007aaa30();
    /* 004a24d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a24db: jne 0x4a24ee */ if (!fZ) goto L_004a24ee;
L_004a24dd:; BB(0x004a24dd);
    /* 004a24dd: push 0x43ca8000 */ { u32 v = 0x43ca8000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a24e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a24e5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a24eau); f_007aaa30();
    /* 004a24ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a24ec: je 0x4a2500 */ if (fZ) goto L_004a2500;
L_004a24ee:; BB(0x004a24ee);
    /* 004a24ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a24f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a24f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a24f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a24f3: push 0x3a3 */ { u32 v = 0x3a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a24f8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a24fdu); f_00814298();
    /* 004a24fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2500:; BB(0x004a2500);
    /* 004a2500: push 0x43520000 */ { u32 v = 0x43520000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2505: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2508: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a250du); f_007aaa30();
    /* 004a250d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a250f: je 0x4a2523 */ if (fZ) goto L_004a2523;
L_004a2511:; BB(0x004a2511);
    /* 004a2511: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2515: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2516: push 0x3a7 */ { u32 v = 0x3a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a251b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a2520u); f_00814298();
    /* 004a2520: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2523:; BB(0x004a2523);
    /* 004a2523: push 0x43e38000 */ { u32 v = 0x43e38000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2528: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a252b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a2530u); f_007aaa30();
    /* 004a2530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2532: je 0x4a2552 */ if (fZ) goto L_004a2552;
L_004a2534:; BB(0x004a2534);
    /* 004a2534: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2539: push 0x3a3 */ { u32 v = 0x3a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a253e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a2543u); f_00814298();
    /* 004a2543: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2545: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004a254a: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x4a254fu); f_006ff5f8();
    /* 004a254f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2552:; BB(0x004a2552);
    /* 004a2552: push 0x43848000 */ { u32 v = 0x43848000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2557: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a255a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a255fu); f_007aaa30();
    /* 004a255f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a2561: je 0x4a2640 */ if (fZ) goto L_004a2640;
L_004a2567:; BB(0x004a2567);
    /* 004a2567: call 0x4ab934 */ r_esp -= 4; W32(r_esp, 0x4a256cu); f_004ab934();
    /* 004a256c: jmp 0x4a2640 */ goto L_004a2640;
L_004a2571:; BB(0x004a2571);
    /* 004a2571: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2574: jne 0x4a2640 */ if (!fZ) goto L_004a2640;
L_004a257a:; BB(0x004a257a);
    /* 004a257a: mov eax, dword ptr [0x9a8130] */ r_eax = R32((u32)(0x9a8130u));
    /* 004a257f: mov edx, dword ptr [0x9a8134] */ r_edx = R32((u32)(0x9a8134u));
    /* 004a2585: mov ebx, dword ptr [0x9a8138] */ r_ebx = R32((u32)(0x9a8138u));
    /* 004a258b: mov esi, dword ptr [0x903ec0] */ r_esi = R32((u32)(0x903ec0u));
    /* 004a2591: mov edi, dword ptr [0x903ec4] */ r_edi = R32((u32)(0x903ec4u));
    /* 004a2597: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 004a259a: mov eax, dword ptr [0x903ec8] */ r_eax = R32((u32)(0x903ec8u));
    /* 004a259f: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 004a25a2: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 004a25a5: mov dword ptr [ecx + 0x5c], esi */ W32((u32)(r_ecx+0x5cu), r_esi);
    /* 004a25a8: mov dword ptr [ecx + 0x60], edi */ W32((u32)(r_ecx+0x60u), r_edi);
    /* 004a25ab: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 004a25ae: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a25b3u); f_007aa094();
    /* 004a25b3: jmp 0x4a2640 */ goto L_004a2640;
L_004a25b8:; BB(0x004a25b8);
    /* 004a25b8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a25bb: jne 0x4a2640 */ if (!fZ) goto L_004a2640;
L_004a25c1:; BB(0x004a25c1);
    /* 004a25c1: mov edx, dword ptr [0x9a8130] */ r_edx = R32((u32)(0x9a8130u));
    /* 004a25c7: mov eax, ecx */ r_eax = r_ecx;
    /* 004a25c9: mov ecx, dword ptr [0x9a8134] */ r_ecx = R32((u32)(0x9a8134u));
    /* 004a25cf: mov ebx, dword ptr [0x9a8138] */ r_ebx = R32((u32)(0x9a8138u));
    /* 004a25d5: mov esi, dword ptr [0x903ec0] */ r_esi = R32((u32)(0x903ec0u));
    /* 004a25db: mov edi, dword ptr [0x903ec4] */ r_edi = R32((u32)(0x903ec4u));
    /* 004a25e1: mov dword ptr [eax + 0x48c], 0 */ W32((u32)(r_eax+0x48cu), 0x0u);
    /* 004a25eb: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004a25ee: mov edx, dword ptr [0x903ec8] */ r_edx = R32((u32)(0x903ec8u));
    /* 004a25f4: mov dword ptr [eax + 0x490], 0 */ W32((u32)(r_eax+0x490u), 0x0u);
    /* 004a25fe: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 004a2601: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 004a2604: mov dword ptr [eax + 0x494], 0 */ W32((u32)(r_eax+0x494u), 0x0u);
    /* 004a260e: mov dword ptr [eax + 0x5c], esi */ W32((u32)(r_eax+0x5cu), r_esi);
    /* 004a2611: mov dword ptr [eax + 0x60], edi */ W32((u32)(r_eax+0x60u), r_edi);
    /* 004a2614: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 004a2617: mov edx, dword ptr [eax + 0x4c8] */ r_edx = R32((u32)(r_eax+0x4c8u));
    /* 004a261d: mov dword ptr [eax + 0x6f0], 0 */ W32((u32)(r_eax+0x6f0u), 0x0u);
    /* 004a2627: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a262d: mov dword ptr [eax + 0x4c8], edx */ W32((u32)(r_eax+0x4c8u), r_edx);
    /* 004a2633: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4a2638u); f_00717f38();
    /* 004a2638: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a263b: call 0x520e34 */ r_esp -= 4; W32(r_esp, 0x4a2640u); f_00520e34();
L_004a2640:; BB(0x004a2640);
    /* 004a2640: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004a2643: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004a2646: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a2649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a264c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a2653: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2655: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2656: ret 4 */ FN_RET(0x004a22b0); r_esp += 8; return;
L_004a2659:; BB(0x004a2659);
    /* 004a2659: mov eax, ecx */ r_eax = r_ecx;
    /* 004a265b: mov edx, dword ptr [eax + 0x6e4] */ r_edx = R32((u32)(r_eax+0x6e4u));
    /* 004a2661: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2664: jne 0x4a2640 */ if (!fZ) goto L_004a2640;
L_004a2666:; BB(0x004a2666);
    /* 004a2666: call 0x4a8d5c */ r_esp -= 4; W32(r_esp, 0x4a266bu); f_004a8d5c();
    /* 004a266b: jmp 0x4a2640 */ goto L_004a2640;
L_004a266d:; BB(0x004a266d);
    /* 004a266d: mov dword ptr [ecx + 0x4ec], 1 */ W32((u32)(r_ecx+0x4ecu), 0x1u);
    /* 004a2677: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2679: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004a2680: mov dword ptr [ecx + 0x3c], 0x43340000 */ W32((u32)(r_ecx+0x3cu), 0x43340000u);
    /* 004a2687: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a268cu); f_007aa094();
    /* 004a268c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a268f: mov eax, dword ptr [edx + 0x4c8] */ r_eax = R32((u32)(r_edx+0x4c8u));
    /* 004a2695: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 004a269c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004a269e: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 004a26a5: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004a26a7: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 004a26aa: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 004a26b1: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 004a26b4: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 004a26b7: mov dword ptr [edx + 0x6e4], ecx */ W32((u32)(r_edx+0x6e4u), r_ecx);
    /* 004a26bd: mov dword ptr [edx + 0x6f0], 1 */ W32((u32)(r_edx+0x6f0u), 0x1u);
    /* 004a26c7: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a26cc: mov dword ptr [edx + 0x4c8], eax */ W32((u32)(r_edx+0x4c8u), r_eax);
    /* 004a26d2: mov dword ptr [edx + 0x6ec], ecx */ W32((u32)(r_edx+0x6ecu), r_ecx);
    /* 004a26d8: mov dword ptr [edx + 0x6e8], ecx */ W32((u32)(r_edx+0x6e8u), r_ecx);
    /* 004a26de: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004a26e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4a26e6u); f_005caba4();
    /* 004a26e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a26e7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004a26ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a26ec: je 0x4a2719 */ if (fZ) goto L_004a2719;
L_004a26ee:; BB(0x004a26ee);
    /* 004a26ee: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004a26f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a26fc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a26ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2700: mov ecx, eax */ r_ecx = r_eax;
    /* 004a2702: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2707: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a270d: call 0x4a92b4 */ r_esp -= 4; W32(r_esp, 0x4a2712u); f_004a92b4();
    /* 004a2712: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004a2719:; BB(0x004a2719);
    /* 004a2719: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a2720: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2723: mov eax, 0x19 */ r_eax = 0x19u;
    /* 004a2728: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004a272f: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4a2734u); f_00717f74();
    /* 004a2734: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a2737: call 0x520e2c */ r_esp -= 4; W32(r_esp, 0x4a273cu); f_00520e2c();
    /* 004a273c: jmp 0x4a2640 */ goto L_004a2640;
}

void f_004a2744(void) /* sub_4A2744 */
{
    FN_ENTER(0x004a2744);
    /* 004a2744: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2745: mov edi, ecx */ r_edi = r_ecx;
    /* 004a2747: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a274b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a274e: je 0x4a27b5 */ if (fZ) goto L_004a27b5;
L_004a2750:; BB(0x004a2750);
    /* 004a2750: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2753: je 0x4a278b */ if (fZ) goto L_004a278b;
L_004a2755:; BB(0x004a2755);
    /* 004a2755: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2758: je 0x4a2775 */ if (fZ) goto L_004a2775;
L_004a275a:; BB(0x004a275a);
    /* 004a275a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a275c: jne 0x4a278b */ if (!fZ) goto L_004a278b;
L_004a275e:; BB(0x004a275e);
    /* 004a275e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2760: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4a2765u); f_0068d5a8();
    /* 004a2765: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a2766: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2768: je 0x4a278f */ if (fZ) goto L_004a278f;
L_004a276a:; BB(0x004a276a);
    /* 004a276a: add dword ptr [edi + 0x6e4], 1 */ { u32 ad = (u32)(r_edi+0x6e4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a2771: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a2772: ret 4 */ FN_RET(0x004a2744); r_esp += 8; return;
L_004a2775:; BB(0x004a2775);
    /* 004a2775: mov eax, dword ptr [edi + 0x6e4] */ r_eax = R32((u32)(r_edi+0x6e4u));
    /* 004a277b: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2780: jle 0x4a278b */ if ((fZ||fS!=fO)) goto L_004a278b;
L_004a2782:; BB(0x004a2782);
    /* 004a2782: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2784: mov ecx, edi */ r_ecx = r_edi;
    /* 004a2786: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4a278bu); f_0051f62c();
L_004a278b:; BB(0x004a278b);
    /* 004a278b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a278c: ret 4 */ FN_RET(0x004a2744); r_esp += 8; return;
L_004a278f:; BB(0x004a278f);
    /* 004a278f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2791: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4a2796u); f_0068d5a8();
    /* 004a2796: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a2797: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2799: jne 0x4a276a */ if (!fZ) goto L_004a276a;
L_004a279b:; BB(0x004a279b);
    /* 004a279b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a279d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4a27a2u); f_0068d5a8();
    /* 004a27a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a27a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a27a5: jne 0x4a276a */ if (!fZ) goto L_004a276a;
L_004a27a7:; BB(0x004a27a7);
    /* 004a27a7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a27a9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4a27aeu); f_0068d5a8();
    /* 004a27ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a27af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a27b1: jne 0x4a276a */ if (!fZ) goto L_004a276a;
L_004a27b3:; BB(0x004a27b3);
    /* 004a27b3: jmp 0x4a278b */ goto L_004a278b;
L_004a27b5:; BB(0x004a27b5);
    /* 004a27b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a27b7: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004a27be: mov dword ptr [edi + 0x6e4], eax */ W32((u32)(r_edi+0x6e4u), r_eax);
    /* 004a27c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a27c5: ret 4 */ FN_RET(0x004a2744); r_esp += 8; return;
}

void f_004a27c8(void) /* sub_4A27C8 */
{
    FN_ENTER(0x004a27c8);
    /* 004a27c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a27c9: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a27cc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a27ce: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004a27d2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a27d5: je 0x4a2a96 */ if (fZ) goto L_004a2a96;
L_004a27db:; BB(0x004a27db);
    /* 004a27db: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a27de: je 0x4a2a8f */ if (fZ) goto L_004a2a8f;
L_004a27e4:; BB(0x004a27e4);
    /* 004a27e4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a27e7: je 0x4a2a8f */ if (fZ) goto L_004a2a8f;
L_004a27ed:; BB(0x004a27ed);
    /* 004a27ed: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a27f0: je 0x4a2a8f */ if (fZ) goto L_004a2a8f;
L_004a27f6:; BB(0x004a27f6);
    /* 004a27f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a27f8: jne 0x4a2a63 */ if (!fZ) goto L_004a2a63;
L_004a27fe:; BB(0x004a27fe);
    /* 004a27fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2800: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a2805u); f_007aa094();
    /* 004a2805: mov eax, dword ptr [ebx + 0x6e4] */ r_eax = R32((u32)(r_ebx+0x6e4u));
    /* 004a280b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a280d: je 0x4a29a7 */ if (fZ) goto L_004a29a7;
L_004a2813:; BB(0x004a2813);
    /* 004a2813: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2816: jne 0x4a2973 */ if (!fZ) goto L_004a2973;
L_004a281c:; BB(0x004a281c);
    /* 004a281c: fild dword ptr [ebx + 0x6e8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x6e8u)));
    /* 004a2822: fld dword ptr [0x903eb8] */ FPUSH(R_F32((u32)(0x903eb8u)));
    /* 004a2828: fld dword ptr [0xa47590] */ FPUSH(R_F32((u32)(0xa47590u)));
    /* 004a282e: fsub dword ptr [0x903fd4] */ ST(0) = ST(0) - R_F32((u32)(0x903fd4u));
    /* 004a2834: fmul dword ptr [0x903eb4] */ ST(0) = ST(0) * R_F32((u32)(0x903eb4u));
    /* 004a283a: fld dword ptr [0x903eb0] */ FPUSH(R_F32((u32)(0x903eb0u)));
    /* 004a2840: mov edx, dword ptr [ebx + 0x6e8] */ r_edx = R32((u32)(r_ebx+0x6e8u));
    /* 004a2846: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004a2848: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a284a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a284c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a2850: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a2854: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a2856: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a285a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a285b: jbe 0x4a28ae */ if ((fC||fZ)) goto L_004a28ae;
L_004a285d:; BB(0x004a285d);
    /* 004a285d: fld dword ptr [0x903eac] */ FPUSH(R_F32((u32)(0x903eacu)));
    /* 004a2863: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004a2867: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004a2869: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a286c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a2870: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a2875: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a2879: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a287d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a2881: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a2884: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a2888: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a288du); f_0082ddd8();
    /* 004a288d: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a2893: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a2897: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a289b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a289d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a289f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a28a1: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004a28a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a28a5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a28a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a28a9: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a28ac: jmp 0x4a290e */ goto L_004a290e;
L_004a28ae:; BB(0x004a28ae);
    /* 004a28ae: fld dword ptr [0x903eac] */ FPUSH(R_F32((u32)(0x903eacu)));
    /* 004a28b4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a28b6: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a28b9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a28bd: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a28c1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004a28c3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a28c5: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004a28c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a28c9: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a28cd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a28d0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a28d4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a28d9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a28dd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a28e1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a28e5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a28e8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a28ec: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a28f1u); f_0082ddd8();
    /* 004a28f1: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a28f7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a28fb: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a28ff: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004a2901: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a2903: fchs  */ ST(0) = -ST(0);
    /* 004a2905: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004a2907: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a2909: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a290b: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
L_004a290e:; BB(0x004a290e);
    /* 004a290e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004a2912: fmul dword ptr [0x903ea8] */ ST(0) = ST(0) * R_F32((u32)(0x903ea8u));
    /* 004a2918: fdiv dword ptr [0x903eb0] */ ST(0) = ST(0) / R_F32((u32)(0x903eb0u));
    /* 004a291e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a2921: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a2925: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a292a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a292e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a2932: fistp dword ptr [ebx + 0x5c] */ W32((u32)(r_ebx+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004a2935: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a2938: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 004a293e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a2941: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 004a2947: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a294a: jg 0x4a2953 */ if ((!fZ&&fS==fO)) goto L_004a2953;
L_004a294c:; BB(0x004a294c);
    /* 004a294c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a294e: jmp 0x4a2a2d */ goto L_004a2a2d;
L_004a2953:; BB(0x004a2953);
    /* 004a2953: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a2956: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
    /* 004a295d: mov eax, 2 */ r_eax = 0x2u;
    /* 004a2962: mov dword ptr [ebx + 0x4ec], eax */ W32((u32)(r_ebx+0x4ecu), r_eax);
    /* 004a2968: mov dword ptr [ebx + 0x6e4], eax */ W32((u32)(r_ebx+0x6e4u), r_eax);
    /* 004a296e: jmp 0x4a2a2d */ goto L_004a2a2d;
L_004a2973:; BB(0x004a2973);
    /* 004a2973: fldz  */ FPUSH(0.0);
    /* 004a2975: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a2979: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a297c: jne 0x4a2a2d */ if (!fZ) goto L_004a2a2d;
L_004a2982:; BB(0x004a2982);
    /* 004a2982: fld dword ptr [0x903eb8] */ FPUSH(R_F32((u32)(0x903eb8u)));
    /* 004a2988: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 004a298e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a2992: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2995: jne 0x4a2a2d */ if (!fZ) goto L_004a2a2d;
L_004a299b:; BB(0x004a299b);
    /* 004a299b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a299d: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a29a2u); f_004a7e20();
    /* 004a29a2: jmp 0x4a2a2d */ goto L_004a2a2d;
L_004a29a7:; BB(0x004a29a7);
    /* 004a29a7: fld dword ptr [0x903ea4] */ FPUSH(R_F32((u32)(0x903ea4u)));
    /* 004a29ad: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a29b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a29b3: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a29b8u); f_007aabd8();
    /* 004a29b8: fmul dword ptr [0x903eac] */ ST(0) = ST(0) * R_F32((u32)(0x903eacu));
    /* 004a29be: fdiv dword ptr [0x903e98] */ ST(0) = ST(0) / R_F32((u32)(0x903e98u));
    /* 004a29c4: fld dword ptr [0xa47590] */ FPUSH(R_F32((u32)(0xa47590u)));
    /* 004a29ca: fsub dword ptr [0x903fd8] */ ST(0) = ST(0) - R_F32((u32)(0x903fd8u));
    /* 004a29d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a29d2: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a29d5: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a29d9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a29de: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a29e2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a29e6: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a29ea: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a29ed: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a29f1: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a29f5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a29fau); f_0082dcbc();
    /* 004a29fa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a29fe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a2a00: fadd dword ptr [0x903fd8] */ ST(0) = ST(0) + R_F32((u32)(0x903fd8u));
    /* 004a2a06: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a2a09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2a0b: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2a10: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a2a15u); f_007aaa30();
    /* 004a2a15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2a17: je 0x4a2a2d */ if (fZ) goto L_004a2a2d;
L_004a2a19:; BB(0x004a2a19);
    /* 004a2a19: mov dword ptr [ebx + 0x6e4], 1 */ W32((u32)(r_ebx+0x6e4u), 0x1u);
    /* 004a2a23: mov dword ptr [ebx + 0x6e8], 0 */ W32((u32)(r_ebx+0x6e8u), 0x0u);
L_004a2a2d:; BB(0x004a2a2d);
    /* 004a2a2d: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 004a2a30: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2a33: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004a2a37: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a2a3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2a3c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a2a40: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a2a45u); f_004a15ac();
    /* 004a2a45: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2a4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2a4c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a2a51u); f_007aaa30();
    /* 004a2a51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2a53: je 0x4a2a8f */ if (fZ) goto L_004a2a8f;
L_004a2a55:; BB(0x004a2a55);
    /* 004a2a55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2a57: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a2a5cu); f_004a15fc();
    /* 004a2a5c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a2a5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2a60: ret 4 */ FN_RET(0x004a27c8); r_esp += 8; return;
L_004a2a63:; BB(0x004a2a63);
    /* 004a2a63: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2a66: jne 0x4a2a8f */ if (!fZ) goto L_004a2a8f;
L_004a2a68:; BB(0x004a2a68);
    /* 004a2a68: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a2a6e: mov dword ptr [ebx + 0x4ec], 2 */ W32((u32)(r_ebx+0x4ecu), 0x2u);
    /* 004a2a78: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a2a7b: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a2a81: mov dword ptr [ebx + 0x3c], 0x42860000 */ W32((u32)(r_ebx+0x3cu), 0x42860000u);
    /* 004a2a88: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
L_004a2a8f:; BB(0x004a2a8f);
    /* 004a2a8f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a2a92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2a93: ret 4 */ FN_RET(0x004a27c8); r_esp += 8; return;
L_004a2a96:; BB(0x004a2a96);
    /* 004a2a96: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a2a98: mov eax, 6 */ r_eax = 0x6u;
    /* 004a2a9d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a2aa4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2aa6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a2aacu); call_ind(t); }
    /* 004a2aac: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a2ab2: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 004a2abc: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a2abf: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a2ac5: mov dword ptr [ebx + 0x3c], 0x43340000 */ W32((u32)(r_ebx+0x3cu), 0x43340000u);
    /* 004a2acc: mov dword ptr [ebx + 0x6e4], 0 */ W32((u32)(r_ebx+0x6e4u), 0x0u);
    /* 004a2ad6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a2ad9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2ada: ret 4 */ FN_RET(0x004a27c8); r_esp += 8; return;
}

void f_004a2ae0(void) /* sub_4A2AE0 */
{
    FN_ENTER(0x004a2ae0);
    /* 004a2ae0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2ae1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a2ae3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004a2ae7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2aea: je 0x4a2b5f */ if (fZ) goto L_004a2b5f;
L_004a2aec:; BB(0x004a2aec);
    /* 004a2aec: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2aef: je 0x4a2b5b */ if (fZ) goto L_004a2b5b;
L_004a2af1:; BB(0x004a2af1);
    /* 004a2af1: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2af4: je 0x4a2b5b */ if (fZ) goto L_004a2b5b;
L_004a2af6:; BB(0x004a2af6);
    /* 004a2af6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a2af9: je 0x4a2b5b */ if (fZ) goto L_004a2b5b;
L_004a2afb:; BB(0x004a2afb);
    /* 004a2afb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a2afd: jne 0x4a2b5b */ if (!fZ) goto L_004a2b5b;
L_004a2aff:; BB(0x004a2aff);
    /* 004a2aff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2b01: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a2b06u); f_007aa094();
    /* 004a2b06: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a2b09: push 0x40600000 */ { u32 v = 0x40600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2b10: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a2b15u); f_004a15ac();
    /* 004a2b15: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a2b1b: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2b20: je 0x4a2b34 */ if (fZ) goto L_004a2b34;
L_004a2b22:; BB(0x004a2b22);
    /* 004a2b22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2b24: call 0x4a323c */ r_esp -= 4; W32(r_esp, 0x4a2b29u); f_004a323c();
    /* 004a2b29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2b2b: call 0x4a3314 */ r_esp -= 4; W32(r_esp, 0x4a2b30u); f_004a3314();
    /* 004a2b30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2b31: ret 4 */ FN_RET(0x004a2ae0); r_esp += 8; return;
L_004a2b34:; BB(0x004a2b34);
    /* 004a2b34: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2b36: call 0x4a2bb0 */ r_esp -= 4; W32(r_esp, 0x4a2b3bu); f_004a2bb0();
    /* 004a2b3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2b3d: call 0x4a2ea8 */ r_esp -= 4; W32(r_esp, 0x4a2b42u); f_004a2ea8();
    /* 004a2b42: lea edx, [ebx + 0x568] */ r_edx = (u32)(r_ebx+0x568u);
    /* 004a2b48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2b4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b4e: push 0x39c */ { u32 v = 0x39cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2b53: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4a2b58u); f_008144b0();
    /* 004a2b58: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004a2b5b:; BB(0x004a2b5b);
    /* 004a2b5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2b5c: ret 4 */ FN_RET(0x004a2ae0); r_esp += 8; return;
L_004a2b5f:; BB(0x004a2b5f);
    /* 004a2b5f: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a2b65: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2b6a: je 0x4a2b7a */ if (fZ) goto L_004a2b7a;
L_004a2b6c:; BB(0x004a2b6c);
    /* 004a2b6c: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004a2b71: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a2b78: jmp 0x4a2b86 */ goto L_004a2b86;
L_004a2b7a:; BB(0x004a2b7a);
    /* 004a2b7a: mov eax, 7 */ r_eax = 0x7u;
    /* 004a2b7f: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_004a2b86:; BB(0x004a2b86);
    /* 004a2b86: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004a2b88: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2b8a: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4a2b90u); call_ind(t); }
    /* 004a2b90: mov dword ptr [ebx + 0x4ec], 2 */ W32((u32)(r_ebx+0x4ecu), 0x2u);
    /* 004a2b9a: mov dword ptr [ebx + 0x3c], 0x42860000 */ W32((u32)(r_ebx+0x3cu), 0x42860000u);
    /* 004a2ba1: mov dword ptr [ebx + 0x6e8], 0 */ W32((u32)(r_ebx+0x6e8u), 0x0u);
    /* 004a2bab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2bac: ret 4 */ FN_RET(0x004a2ae0); r_esp += 8; return;
}

void f_004a2bb0(void) /* sub_4A2BB0 */
{
    FN_ENTER(0x004a2bb0);
    /* 004a2bb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2bb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2bb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2bb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2bb4: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2bba: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a2bbc: movzx eax, byte ptr [0xa474c4] */ r_eax = (u32)R8((u32)(0xa474c4u));
    /* 004a2bc3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a2bc5: jne 0x4a2c03 */ if (!fZ) goto L_004a2c03;
L_004a2bc7:; BB(0x004a2bc7);
    /* 004a2bc7: mov dword ptr [0xa47594], 0x41a00000 */ W32((u32)(0xa47594u), 0x41a00000u);
    /* 004a2bd1: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a2bd6: mov byte ptr [0xa474c4], al */ W8((u32)(0xa474c4u), (u8)r_eax);
    /* 004a2bdb: mov dword ptr [0xa47598], 0x41f00000 */ W32((u32)(0xa47598u), 0x41f00000u);
    /* 004a2be5: mov dword ptr [0xa4759c], 0x42480000 */ W32((u32)(0xa4759cu), 0x42480000u);
    /* 004a2bef: mov dword ptr [0xa475a0], 0x41f00000 */ W32((u32)(0xa475a0u), 0x41f00000u);
    /* 004a2bf9: mov dword ptr [0xa475a4], 0x41a00000 */ W32((u32)(0xa475a4u), 0x41a00000u);
L_004a2c03:; BB(0x004a2c03);
    /* 004a2c03: mov eax, dword ptr [0x903e68] */ r_eax = R32((u32)(0x903e68u));
    /* 004a2c08: mov edx, dword ptr [0x903e78] */ r_edx = R32((u32)(0x903e78u));
    /* 004a2c0e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004a2c16: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a2c19: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004a2c21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2c23: mov dword ptr [esp + 0xc], 0x40e00000 */ W32((u32)(r_esp+0xcu), 0x40e00000u);
    /* 004a2c2b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a2c2f: mov edx, dword ptr [ebx + 0x580] */ r_edx = R32((u32)(r_ebx+0x580u));
    /* 004a2c35: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004a2c38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a2c3a: jle 0x4a2c4c */ if ((fZ||fS!=fO)) goto L_004a2c4c;
L_004a2c3c:; BB(0x004a2c3c);
    /* 004a2c3c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004a2c3e: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 004a2c41: mov dword ptr [ecx + eax*4], esi */ W32((u32)(r_ecx+r_eax*4), r_esi);
    /* 004a2c44: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a2c47: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2c4a: jl 0x4a2c3c */ if ((fS!=fO)) goto L_004a2c3c;
L_004a2c4c:; BB(0x004a2c4c);
    /* 004a2c4c: fld dword ptr [0x903e90] */ FPUSH(R_F32((u32)(0x903e90u)));
    /* 004a2c52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2c54: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a2c57: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004a2c5d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a2c61: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 004a2c67: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a2c6b: mov edx, dword ptr [ebx + 0x3f4] */ r_edx = R32((u32)(r_ebx+0x3f4u));
    /* 004a2c71: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2c73: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004a2c77: mov edx, dword ptr [ebx + 0x41c] */ r_edx = R32((u32)(r_ebx+0x41cu));
    /* 004a2c7d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004a2c81: mov edx, dword ptr [ebx + 0x420] */ r_edx = R32((u32)(r_ebx+0x420u));
    /* 004a2c87: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004a2c8b: mov edx, dword ptr [ebx + 0x424] */ r_edx = R32((u32)(r_ebx+0x424u));
    /* 004a2c91: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004a2c95: fld dword ptr [ebx + 0x3ec] */ FPUSH(R_F32((u32)(r_ebx+0x3ecu)));
    /* 004a2c9b: fadd dword ptr [ebx + 0x3f8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3f8u));
    /* 004a2ca1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2ca3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a2ca7: fld dword ptr [ebx + 0x3f0] */ FPUSH(R_F32((u32)(r_ebx+0x3f0u)));
    /* 004a2cad: fadd dword ptr [ebx + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3fcu));
    /* 004a2cb3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2cb5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004a2cb9: fld dword ptr [ebx + 0x3f4] */ FPUSH(R_F32((u32)(r_ebx+0x3f4u)));
    /* 004a2cbf: fadd dword ptr [ebx + 0x400] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x400u));
    /* 004a2cc5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2cc7: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004a2ccb: fld dword ptr [ebx + 0x41c] */ FPUSH(R_F32((u32)(r_ebx+0x41cu)));
    /* 004a2cd1: fadd dword ptr [ebx + 0x428] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x428u));
    /* 004a2cd7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2cd9: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004a2cdd: fld dword ptr [ebx + 0x420] */ FPUSH(R_F32((u32)(r_ebx+0x420u)));
    /* 004a2ce3: fadd dword ptr [ebx + 0x42c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x42cu));
    /* 004a2ce9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2ceb: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004a2cef: fld dword ptr [ebx + 0x424] */ FPUSH(R_F32((u32)(r_ebx+0x424u)));
    /* 004a2cf5: fadd dword ptr [ebx + 0x430] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x430u));
    /* 004a2cfb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2cfd: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004a2d01: fld dword ptr [ebx + 0x3f8] */ FPUSH(R_F32((u32)(r_ebx+0x3f8u)));
    /* 004a2d07: fadd dword ptr [ebx + 0x404] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x404u));
    /* 004a2d0d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d0f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004a2d13: fld dword ptr [ebx + 0x3fc] */ FPUSH(R_F32((u32)(r_ebx+0x3fcu)));
    /* 004a2d19: fadd dword ptr [ebx + 0x408] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x408u));
    /* 004a2d1f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d21: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004a2d25: fld dword ptr [ebx + 0x400] */ FPUSH(R_F32((u32)(r_ebx+0x400u)));
    /* 004a2d2b: fadd dword ptr [ebx + 0x40c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40cu));
    /* 004a2d31: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d33: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004a2d37: fld dword ptr [ebx + 0x428] */ FPUSH(R_F32((u32)(r_ebx+0x428u)));
    /* 004a2d3d: fadd dword ptr [ebx + 0x434] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x434u));
    /* 004a2d43: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d45: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004a2d49: fld dword ptr [ebx + 0x42c] */ FPUSH(R_F32((u32)(r_ebx+0x42cu)));
    /* 004a2d4f: fadd dword ptr [ebx + 0x438] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x438u));
    /* 004a2d55: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d57: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004a2d5b: fld dword ptr [ebx + 0x430] */ FPUSH(R_F32((u32)(r_ebx+0x430u)));
    /* 004a2d61: fadd dword ptr [ebx + 0x43c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x43cu));
    /* 004a2d67: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d69: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004a2d6d: fld dword ptr [ebx + 0x404] */ FPUSH(R_F32((u32)(r_ebx+0x404u)));
    /* 004a2d73: fadd dword ptr [ebx + 0x410] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x410u));
    /* 004a2d79: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d7b: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004a2d7f: fld dword ptr [ebx + 0x408] */ FPUSH(R_F32((u32)(r_ebx+0x408u)));
    /* 004a2d85: fadd dword ptr [ebx + 0x414] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x414u));
    /* 004a2d8b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d8d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004a2d91: fld dword ptr [ebx + 0x40c] */ FPUSH(R_F32((u32)(r_ebx+0x40cu)));
    /* 004a2d97: fadd dword ptr [ebx + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x418u));
    /* 004a2d9d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2d9f: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004a2da3: fld dword ptr [ebx + 0x434] */ FPUSH(R_F32((u32)(r_ebx+0x434u)));
    /* 004a2da9: fadd dword ptr [ebx + 0x440] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x440u));
    /* 004a2daf: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2db1: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 004a2db5: fld dword ptr [ebx + 0x438] */ FPUSH(R_F32((u32)(r_ebx+0x438u)));
    /* 004a2dbb: fadd dword ptr [ebx + 0x444] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x444u));
    /* 004a2dc1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2dc3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004a2dc7: fld dword ptr [ebx + 0x43c] */ FPUSH(R_F32((u32)(r_ebx+0x43cu)));
    /* 004a2dcd: fadd dword ptr [ebx + 0x448] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x448u));
    /* 004a2dd3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a2dd5: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 004a2dd9: mov edx, dword ptr [ebx + 0x410] */ r_edx = R32((u32)(r_ebx+0x410u));
    /* 004a2ddf: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 004a2de3: mov edx, dword ptr [ebx + 0x414] */ r_edx = R32((u32)(r_ebx+0x414u));
    /* 004a2de9: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004a2ded: mov edx, dword ptr [ebx + 0x418] */ r_edx = R32((u32)(r_ebx+0x418u));
    /* 004a2df3: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 004a2df7: mov edx, dword ptr [ebx + 0x440] */ r_edx = R32((u32)(r_ebx+0x440u));
    /* 004a2dfd: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 004a2e04: mov edx, dword ptr [ebx + 0x444] */ r_edx = R32((u32)(r_ebx+0x444u));
    /* 004a2e0a: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 004a2e11: mov edx, dword ptr [ebx + 0x448] */ r_edx = R32((u32)(r_ebx+0x448u));
    /* 004a2e17: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 004a2e1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e1f: push dword ptr [0xa47654] */ { u32 v = R32((u32)(0xa47654u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a2e25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e26: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a2e2bu); f_00520c70();
    /* 004a2e2b: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004a2e2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2e31: mov esi, eax */ r_esi = r_eax;
    /* 004a2e33: mov edi, edx */ r_edi = r_edx;
L_004a2e35:; BB(0x004a2e35);
    /* 004a2e35: mov ebp, dword ptr [esi + 0xa47594] */ r_ebp = R32((u32)(r_esi+0xa47594u));
    /* 004a2e3b: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004a2e3f: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 004a2e42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e44: call 0x4ab94c */ r_esp -= 4; W32(r_esp, 0x4a2e49u); f_004ab94c();
    /* 004a2e49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2e4c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a2e4f: push dword ptr [ebx + 0x580] */ { u32 v = R32((u32)(r_ebx+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a2e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e56: lea ebp, [edi + 0xc] */ r_ebp = (u32)(r_edi+0xcu);
    /* 004a2e59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e5a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2e5c: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a2e61u); f_0051fdf8();
    /* 004a2e61: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004a2e64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e66: call 0x4ab94c */ r_esp -= 4; W32(r_esp, 0x4a2e6bu); f_004ab94c();
    /* 004a2e6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a2e6e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a2e71: push dword ptr [ebx + 0x580] */ { u32 v = R32((u32)(r_ebx+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a2e77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e78: lea edi, [ebp + 0xc] */ r_edi = (u32)(r_ebp+0xcu);
    /* 004a2e7b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2e7e: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a2e83u); f_0051fdf8();
    /* 004a2e83: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a2e86: cmp esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2e89: jl 0x4a2e35 */ if ((fS!=fO)) goto L_004a2e35;
L_004a2e8b:; BB(0x004a2e8b);
    /* 004a2e8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a2e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e8e: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a2e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a2e95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a2e97: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a2e9cu); f_00520c70();
    /* 004a2e9c: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a2ea2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2ea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2ea4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a2ea5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a2ea6: ret  */ FN_RET(0x004a2bb0); r_esp += 4; return;
}

void f_004a2ea0(void)
{
    FN_ENTER(0x004a2ea0);
    /* 004a2ea0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004a2ea2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a2ea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2ea4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a2ea5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a2ea6: ret  */ FN_RET(0x004a2ea0); r_esp += 4; return;
}

void f_004a2ea8(void) /* sub_4A2EA8 */
{
    FN_ENTER(0x004a2ea8);
    /* 004a2ea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2ea9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a2eaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2eab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2eac: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2eb2: mov eax, ecx */ r_eax = r_ecx;
    /* 004a2eb4: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 004a2eba: fld dword ptr [0x903e64] */ FPUSH(R_F32((u32)(0x903e64u)));
    /* 004a2ec0: fld dword ptr [0x903e60] */ FPUSH(R_F32((u32)(0x903e60u)));
    /* 004a2ec6: fld dword ptr [0x903e5c] */ FPUSH(R_F32((u32)(0x903e5cu)));
    /* 004a2ecc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004a2ecf: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 004a2ed5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a2ed9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004a2edc: mov edx, dword ptr [eax + 0x3f4] */ r_edx = R32((u32)(r_eax+0x3f4u));
    /* 004a2ee2: mov edi, eax */ r_edi = r_eax;
    /* 004a2ee4: mov esi, ecx */ r_esi = r_ecx;
    /* 004a2ee6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004a2eea: mov edx, dword ptr [eax + 0x3f8] */ r_edx = R32((u32)(r_eax+0x3f8u));
    /* 004a2ef0: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004a2ef4: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 004a2efa: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a2efe: mov edx, dword ptr [eax + 0x400] */ r_edx = R32((u32)(r_eax+0x400u));
    /* 004a2f04: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004a2f08: mov edx, dword ptr [eax + 0x404] */ r_edx = R32((u32)(r_eax+0x404u));
    /* 004a2f0e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a2f12: mov edx, dword ptr [eax + 0x408] */ r_edx = R32((u32)(r_eax+0x408u));
    /* 004a2f18: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004a2f1c: mov edx, dword ptr [eax + 0x40c] */ r_edx = R32((u32)(r_eax+0x40cu));
    /* 004a2f22: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004a2f26: mov edx, dword ptr [eax + 0x410] */ r_edx = R32((u32)(r_eax+0x410u));
    /* 004a2f2c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004a2f30: mov edx, dword ptr [eax + 0x414] */ r_edx = R32((u32)(r_eax+0x414u));
    /* 004a2f36: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004a2f3a: mov edx, dword ptr [eax + 0x418] */ r_edx = R32((u32)(r_eax+0x418u));
    /* 004a2f40: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004a2f44: fld dword ptr [eax + 0x3ec] */ FPUSH(R_F32((u32)(r_eax+0x3ecu)));
    /* 004a2f4a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a2f4c: fadd dword ptr [eax + 0x3f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3f8u));
    /* 004a2f52: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a2f54: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004a2f58: fld dword ptr [eax + 0x3f0] */ FPUSH(R_F32((u32)(r_eax+0x3f0u)));
    /* 004a2f5e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a2f60: fadd dword ptr [eax + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3fcu));
    /* 004a2f66: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a2f68: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004a2f6c: fld dword ptr [eax + 0x3f4] */ FPUSH(R_F32((u32)(r_eax+0x3f4u)));
    /* 004a2f72: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a2f74: fadd dword ptr [eax + 0x400] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x400u));
    /* 004a2f7a: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a2f7c: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004a2f80: fld dword ptr [eax + 0x3f8] */ FPUSH(R_F32((u32)(r_eax+0x3f8u)));
    /* 004a2f86: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a2f88: fadd dword ptr [eax + 0x3ec] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3ecu));
    /* 004a2f8e: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a2f90: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004a2f94: fld dword ptr [eax + 0x3fc] */ FPUSH(R_F32((u32)(r_eax+0x3fcu)));
    /* 004a2f9a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a2f9c: fadd dword ptr [eax + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3f0u));
    /* 004a2fa2: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a2fa4: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004a2fa8: fld dword ptr [eax + 0x400] */ FPUSH(R_F32((u32)(r_eax+0x400u)));
    /* 004a2fae: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a2fb0: fadd dword ptr [eax + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3f4u));
    /* 004a2fb6: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a2fb8: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004a2fbc: fld dword ptr [eax + 0x3f8] */ FPUSH(R_F32((u32)(r_eax+0x3f8u)));
    /* 004a2fc2: fadd dword ptr [eax + 0x404] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x404u));
    /* 004a2fc8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2fca: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004a2fce: fld dword ptr [eax + 0x3fc] */ FPUSH(R_F32((u32)(r_eax+0x3fcu)));
    /* 004a2fd4: fadd dword ptr [eax + 0x408] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x408u));
    /* 004a2fda: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2fdc: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004a2fe0: fld dword ptr [eax + 0x400] */ FPUSH(R_F32((u32)(r_eax+0x400u)));
    /* 004a2fe6: fadd dword ptr [eax + 0x40c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40cu));
    /* 004a2fec: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a2fee: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004a2ff2: fld dword ptr [eax + 0x404] */ FPUSH(R_F32((u32)(r_eax+0x404u)));
    /* 004a2ff8: fadd dword ptr [eax + 0x410] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x410u));
    /* 004a2ffe: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a3000: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004a3004: fld dword ptr [eax + 0x408] */ FPUSH(R_F32((u32)(r_eax+0x408u)));
    /* 004a300a: fadd dword ptr [eax + 0x414] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x414u));
    /* 004a3010: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a3012: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004a3016: fld dword ptr [eax + 0x40c] */ FPUSH(R_F32((u32)(r_eax+0x40cu)));
    /* 004a301c: fadd dword ptr [eax + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x418u));
    /* 004a3022: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a3024: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004a3028: mov edx, dword ptr [eax + 0x41c] */ r_edx = R32((u32)(r_eax+0x41cu));
    /* 004a302e: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 004a3032: mov edx, dword ptr [eax + 0x420] */ r_edx = R32((u32)(r_eax+0x420u));
    /* 004a3038: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 004a303c: mov edx, dword ptr [eax + 0x424] */ r_edx = R32((u32)(r_eax+0x424u));
    /* 004a3042: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 004a3046: mov edx, dword ptr [eax + 0x428] */ r_edx = R32((u32)(r_eax+0x428u));
    /* 004a304c: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004a3050: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004a3056: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004a305a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 004a3060: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 004a3064: mov edx, dword ptr [eax + 0x434] */ r_edx = R32((u32)(r_eax+0x434u));
    /* 004a306a: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004a306e: mov edx, dword ptr [eax + 0x438] */ r_edx = R32((u32)(r_eax+0x438u));
    /* 004a3074: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 004a3078: mov edx, dword ptr [eax + 0x43c] */ r_edx = R32((u32)(r_eax+0x43cu));
    /* 004a307e: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 004a3085: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 004a308b: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 004a3092: mov edx, dword ptr [eax + 0x444] */ r_edx = R32((u32)(r_eax+0x444u));
    /* 004a3098: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 004a309f: mov edx, dword ptr [eax + 0x448] */ r_edx = R32((u32)(r_eax+0x448u));
    /* 004a30a5: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 004a30ac: fld dword ptr [eax + 0x41c] */ FPUSH(R_F32((u32)(r_eax+0x41cu)));
    /* 004a30b2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a30b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a30b6: fadd dword ptr [eax + 0x428] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x428u));
    /* 004a30bc: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a30be: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 004a30c5: fld dword ptr [eax + 0x420] */ FPUSH(R_F32((u32)(r_eax+0x420u)));
    /* 004a30cb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a30cd: mov ebp, edx */ r_ebp = r_edx;
    /* 004a30cf: fadd dword ptr [eax + 0x42c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x42cu));
    /* 004a30d5: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a30d7: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 004a30de: fld dword ptr [eax + 0x424] */ FPUSH(R_F32((u32)(r_eax+0x424u)));
    /* 004a30e4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a30e6: fadd dword ptr [eax + 0x430] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x430u));
    /* 004a30ec: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a30ee: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 004a30f5: fld dword ptr [eax + 0x428] */ FPUSH(R_F32((u32)(r_eax+0x428u)));
    /* 004a30fb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a30fd: fadd dword ptr [eax + 0x41c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x41cu));
    /* 004a3103: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a3105: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 004a310c: fld dword ptr [eax + 0x42c] */ FPUSH(R_F32((u32)(r_eax+0x42cu)));
    /* 004a3112: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004a3114: fadd dword ptr [eax + 0x420] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x420u));
    /* 004a311a: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004a311c: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 004a3123: fld dword ptr [eax + 0x430] */ FPUSH(R_F32((u32)(r_eax+0x430u)));
    /* 004a3129: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004a312b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a312d: fadd dword ptr [eax + 0x424] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x424u));
    /* 004a3133: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004a3135: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 004a313c: fld dword ptr [eax + 0x428] */ FPUSH(R_F32((u32)(r_eax+0x428u)));
    /* 004a3142: fadd dword ptr [eax + 0x434] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x434u));
    /* 004a3148: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a314a: fstp dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0)); FPOP();
    /* 004a3151: fld dword ptr [eax + 0x42c] */ FPUSH(R_F32((u32)(r_eax+0x42cu)));
    /* 004a3157: fadd dword ptr [eax + 0x438] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x438u));
    /* 004a315d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a315f: fstp dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0)); FPOP();
    /* 004a3166: fld dword ptr [eax + 0x430] */ FPUSH(R_F32((u32)(r_eax+0x430u)));
    /* 004a316c: fadd dword ptr [eax + 0x43c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x43cu));
    /* 004a3172: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a3174: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 004a317b: fld dword ptr [eax + 0x434] */ FPUSH(R_F32((u32)(r_eax+0x434u)));
    /* 004a3181: fadd dword ptr [eax + 0x440] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x440u));
    /* 004a3187: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a3189: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 004a3190: fld dword ptr [eax + 0x438] */ FPUSH(R_F32((u32)(r_eax+0x438u)));
    /* 004a3196: fadd dword ptr [eax + 0x444] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x444u));
    /* 004a319c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004a319e: fstp dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0)); FPOP();
    /* 004a31a5: fld dword ptr [eax + 0x43c] */ FPUSH(R_F32((u32)(r_eax+0x43cu)));
    /* 004a31ab: fadd dword ptr [eax + 0x448] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x448u));
    /* 004a31b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a31b3: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
L_004a31ba:; BB(0x004a31ba);
    /* 004a31ba: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004a31bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a31c0: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4a31c5u); f_00780630();
    /* 004a31c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a31c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a31ca: je 0x4a3230 */ if (fZ) goto L_004a3230;
L_004a31cc:; BB(0x004a31cc);
    /* 004a31cc: fld dword ptr [0x903ae0] */ FPUSH(R_F32((u32)(0x903ae0u)));
    /* 004a31d2: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 004a31d5: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 004a31d8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004a31da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a31dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a31dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a31df: jb 0x4a31e3 */ if (fC) goto L_004a31e3;
L_004a31e1:; BB(0x004a31e1);
    /* 004a31e1: fst st(1) */ ST(1) = ST(0);
L_004a31e3:; BB(0x004a31e3);
    /* 004a31e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a31e5: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
L_004a31e8:; BB(0x004a31e8);
    /* 004a31e8: mov ecx, dword ptr [edi + ebp*4 + 0x73c] */ r_ecx = R32((u32)(r_edi+r_ebp*4+0x73cu));
    /* 004a31ef: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 004a31f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a31f5: je 0x4a3213 */ if (fZ) goto L_004a3213;
L_004a31f7:; BB(0x004a31f7);
    /* 004a31f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a31f8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a31fdu); f_00508db8();
L_004a31fd:; BB(0x004a31fd);
    /* 004a31fd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004a3200: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a3203: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3206: jl 0x4a31ba */ if ((fS!=fO)) goto L_004a31ba;
L_004a3208:; BB(0x004a3208);
    /* 004a3208: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a320e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a320f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a3210: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a3211: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a3212: ret  */ FN_RET(0x004a2ea8); r_esp += 4; return;
L_004a3213:; BB(0x004a3213);
    /* 004a3213: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3215: mov eax, dword ptr [edi + 0x5f8] */ r_eax = R32((u32)(r_edi+0x5f8u));
    /* 004a321b: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a321e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a321f: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a3224u); f_0050981c();
    /* 004a3224: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3227: mov dword ptr [edi + ebx*2 + 0x73c], eax */ W32((u32)(r_edi+r_ebx*2+0x73cu), r_eax);
    /* 004a322e: jmp 0x4a31fd */ goto L_004a31fd;
L_004a3230:; BB(0x004a3230);
    /* 004a3230: mov dword ptr [esi + 4], 0xc47a0000 */ W32((u32)(r_esi+0x4u), 0xc47a0000u);
    /* 004a3237: jmp 0x4a31e8 */ goto L_004a31e8;
}

