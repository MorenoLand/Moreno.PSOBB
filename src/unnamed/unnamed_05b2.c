#include "protos.h"

void f_005b205c(void)
{
    FN_ENTER(0x005b205c);
    /* 005b205c: mov dword ptr [0xa74924], 0x3f800000 */ W32((u32)(0xa74924u), 0x3f800000u);
    /* 005b2066: mov ecx, 0xa74980 */ r_ecx = 0xa74980u;
    /* 005b206b: mov dword ptr [0xa74928], 0x41000000 */ W32((u32)(0xa74928u), 0x41000000u);
    /* 005b2075: mov dword ptr [0xa7492c], 0x3fc00000 */ W32((u32)(0xa7492cu), 0x3fc00000u);
    /* 005b207f: mov dword ptr [0xa74930], 0x461c4000 */ W32((u32)(0xa74930u), 0x461c4000u);
    /* 005b2089: mov dword ptr [0xa74918], 0x461c4000 */ W32((u32)(0xa74918u), 0x461c4000u);
    /* 005b2093: mov dword ptr [0xa74934], 0x44610000 */ W32((u32)(0xa74934u), 0x44610000u);
    /* 005b209d: mov dword ptr [0xa7491c], 0x44610000 */ W32((u32)(0xa7491cu), 0x44610000u);
    /* 005b20a7: mov dword ptr [0xa74920], 0x41700000 */ W32((u32)(0xa74920u), 0x41700000u);
    /* 005b20b1: mov dword ptr [0xa74910], 0x41800000 */ W32((u32)(0xa74910u), 0x41800000u);
    /* 005b20bb: mov dword ptr [0xa74914], 0x41e00000 */ W32((u32)(0xa74914u), 0x41e00000u);
    /* 005b20c5: mov dword ptr [0x9c1624], 0 */ W32((u32)(0x9c1624u), 0x0u);
    /* 005b20cf: mov dword ptr [0x9c12d8], 0x40c00000 */ W32((u32)(0x9c12d8u), 0x40c00000u);
    /* 005b20d9: mov dword ptr [0x9c1304], 0x40c00000 */ W32((u32)(0x9c1304u), 0x40c00000u);
    /* 005b20e3: mov dword ptr [0x9c1408], 0x40000000 */ W32((u32)(0x9c1408u), 0x40000000u);
    /* 005b20ed: mov dword ptr [0x9c1458], 0x3f800000 */ W32((u32)(0x9c1458u), 0x3f800000u);
    /* 005b20f7: mov dword ptr [0x9c1468], 0x3f800000 */ W32((u32)(0x9c1468u), 0x3f800000u);
    /* 005b2101: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x5b2106u); f_00568fa8();
    /* 005b2106: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b210b: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x5b2110u); f_0085909d();
    /* 005b2110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2111: mov ecx, 0xa74978 */ r_ecx = 0xa74978u;
    /* 005b2116: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x5b211bu); f_00568fa8();
    /* 005b211b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2120: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x5b2125u); f_0085909d();
    /* 005b2125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2126: ret  */ FN_RET(0x005b205c); r_esp += 4; return;
}

void f_005b2128(void) /* sub_5B2128 */
{
    FN_ENTER(0x005b2128);
    /* 005b2128: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2129: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b212c: mov esi, ecx */ r_esi = r_ecx;
    /* 005b212e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005b2132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2134: je 0x5b21cf */ if (fZ) goto L_005b21cf;
L_005b213a:; BB(0x005b213a);
    /* 005b213a: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 005b2140: movzx edx, byte ptr [edx + 0x92abc0] */ r_edx = (u32)R8((u32)(r_edx+0x92abc0u));
    /* 005b2147: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b214a: je 0x5b21d8 */ if (fZ) goto L_005b21d8;
L_005b2150:; BB(0x005b2150);
    /* 005b2150: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b2153: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005b2156: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b2159: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005b215c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b2160: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005b2163: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b2167: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005b216a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b216fu); f_0082f9c4();
    /* 005b216f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b2172: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b2176: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b2178: fmul qword ptr [0x92a8c0] */ ST(0) = ST(0) * R_F64((u32)(0x92a8c0u));
    /* 005b217e: fdiv qword ptr [0x92a8b8] */ ST(0) = ST(0) / R_F64((u32)(0x92a8b8u));
    /* 005b2184: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005b2188: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005b218d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b2192: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b2196: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005b219a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005b219e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005b21a2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b21a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b21a7: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b21aa: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5b21afu); f_007a9018();
    /* 005b21af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b21b2: mov ecx, dword ptr [esi + 0x3d0] */ r_ecx = R32((u32)(r_esi+0x3d0u));
    /* 005b21b8: mov edx, ecx */ r_edx = r_ecx;
    /* 005b21ba: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b21bd: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b21bf: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b21c1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b21c3: jge 0x5b21d8 */ if ((fS==fO)) goto L_005b21d8;
L_005b21c5:; BB(0x005b21c5);
    /* 005b21c5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005b21c7: mov ecx, esi */ r_ecx = r_esi;
    /* 005b21c9: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x5b21cfu); call_ind(t); }
L_005b21cf:; BB(0x005b21cf);
    /* 005b21cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b21d1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b21d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b21d5: ret 4 */ FN_RET(0x005b2128); r_esp += 8; return;
L_005b21d8:; BB(0x005b21d8);
    /* 005b21d8: mov eax, 1 */ r_eax = 0x1u;
    /* 005b21dd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b21e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b21e1: ret 4 */ FN_RET(0x005b2128); r_esp += 8; return;
}

void f_005b21e4(void) /* sub_5B21E4 */
{
    FN_ENTER(0x005b21e4);
    /* 005b21e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b21e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b21e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b21e7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b21ea: push 0x9c160c */ { u32 v = 0x9c160cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b21ef: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x5b21f4u); f_0051f6b0();
    /* 005b21f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b21f5: mov dword ptr [0xa7493c], eax */ W32((u32)(0xa7493cu), r_eax);
    /* 005b21fa: mov ecx, 0xa74980 */ r_ecx = 0xa74980u;
    /* 005b21ff: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x5b2204u); f_00568fa8();
    /* 005b2204: mov ecx, 0xa74978 */ r_ecx = 0xa74978u;
    /* 005b2209: call 0x568fa8 */ r_esp -= 4; W32(r_esp, 0x5b220eu); f_00568fa8();
    /* 005b220e: mov dword ptr [0xa74964], 0 */ W32((u32)(0xa74964u), 0x0u);
    /* 005b2218: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b221a: mov dword ptr [0xa74974], eax */ W32((u32)(0xa74974u), r_eax);
    /* 005b221f: mov dword ptr [0xa74968], 0 */ W32((u32)(0xa74968u), 0x0u);
    /* 005b2229: mov dword ptr [0xa74970], eax */ W32((u32)(0xa74970u), r_eax);
    /* 005b222e: mov dword ptr [0xa7496c], 0 */ W32((u32)(0xa7496cu), 0x0u);
    /* 005b2238: call 0x807e68 */ r_esp -= 4; W32(r_esp, 0x5b223du); f_00807e68();
    /* 005b223d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2240: je 0x5b2321 */ if (fZ) goto L_005b2321;
L_005b2246:; BB(0x005b2246);
    /* 005b2246: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b2248:; BB(0x005b2248);
    /* 005b2248: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b224a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b224c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b224e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b2250: mov ebx, eax */ r_ebx = r_eax;
    /* 005b2252: mov esi, edx */ r_esi = r_edx;
L_005b2254:; BB(0x005b2254);
    /* 005b2254: mov edi, dword ptr [ebx + esi*4 + 0x92a968] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x92a968u));
    /* 005b225b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b225c: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5b2261u); f_0077a684();
    /* 005b2261: mov dword ptr [esi*4 + 0xa74958], eax */ W32((u32)(r_esi*4+0xa74958u), r_eax);
    /* 005b2268: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2269: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5b226eu); f_0077a698();
    /* 005b226e: mov dword ptr [esi*4 + 0xa74950], eax */ W32((u32)(r_esi*4+0xa74950u), r_eax);
    /* 005b2275: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2276: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5b227bu); f_0077a6b4();
    /* 005b227b: mov dword ptr [esi*4 + 0xa74948], eax */ W32((u32)(r_esi*4+0xa74948u), r_eax);
    /* 005b2282: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2283: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5b2288u); f_0077a6cc();
    /* 005b2288: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b228b: mov dword ptr [esi*4 + 0xa74940], eax */ W32((u32)(r_esi*4+0xa74940u), r_eax);
    /* 005b2292: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b2295: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b2298: jl 0x5b2254 */ if ((fS!=fO)) goto L_005b2254;
L_005b229a:; BB(0x005b229a);
    /* 005b229a: mov eax, dword ptr [0x92a8ac] */ r_eax = R32((u32)(0x92a8acu));
    /* 005b229f: movzx edx, word ptr [0x92a8b0] */ r_edx = (u32)R16((u32)(0x92a8b0u));
    /* 005b22a6: movzx ecx, word ptr [0x92a8b2] */ r_ecx = (u32)R16((u32)(0x92a8b2u));
    /* 005b22ad: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005b22b1: movzx eax, word ptr [0x92a8b4] */ r_eax = (u32)R16((u32)(0x92a8b4u));
    /* 005b22b8: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 005b22bd: mov edx, dword ptr [0xa7493c] */ r_edx = R32((u32)(0xa7493cu));
    /* 005b22c3: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 005b22c8: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 005b22cd: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005b22d3: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005b22d9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b22dc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b22df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b22e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b22e2: push dword ptr [0x9c12ac] */ { u32 v = R32((u32)(0x9c12acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b22e8: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b22eb: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b22ee: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b22f0: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5b22f5u); f_00608470();
    /* 005b22f5: mov eax, dword ptr [0xa7493c] */ r_eax = R32((u32)(0xa7493cu));
    /* 005b22fa: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005b22fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b22ff: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005b2305: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2307: push dword ptr [0x9c12ac] */ { u32 v = R32((u32)(0x9c12acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b230d: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b2310: push dword ptr [ecx + 0x18] */ { u32 v = R32((u32)(r_ecx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b2313: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2315: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5b231au); f_00608470();
    /* 005b231a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b231d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b231e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b231f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2320: ret  */ FN_RET(0x005b21e4); r_esp += 4; return;
L_005b2321:; BB(0x005b2321);
    /* 005b2321: mov eax, 1 */ r_eax = 0x1u;
    /* 005b2326: jmp 0x5b2248 */ goto L_005b2248;
}

void f_005b232c(void) /* sub_5B232C */
{
    FN_ENTER(0x005b232c);
    /* 005b232c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b232d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2330: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b2332: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b2336: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2339: je 0x5b242b */ if (fZ) goto L_005b242b;
L_005b233f:; BB(0x005b233f);
    /* 005b233f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2342: je 0x5b2405 */ if (fZ) goto L_005b2405;
L_005b2348:; BB(0x005b2348);
    /* 005b2348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b234a: jne 0x5b2418 */ if (!fZ) goto L_005b2418;
L_005b2350:; BB(0x005b2350);
    /* 005b2350: mov eax, dword ptr [0xa74978] */ r_eax = R32((u32)(0xa74978u));
    /* 005b2355: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 005b235b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b235d: je 0x5b2393 */ if (fZ) goto L_005b2393;
L_005b235f:; BB(0x005b235f);
    /* 005b235f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005b2362: mov esi, eax */ r_esi = r_eax;
    /* 005b2364: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005b2368: mov edi, edx */ r_edi = r_edx;
L_005b236a:; BB(0x005b236a);
    /* 005b236a: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005b236e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b236f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5b2374u); f_007b4d18();
    /* 005b2374: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2375: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2377: je 0x5b2385 */ if (fZ) goto L_005b2385;
L_005b2379:; BB(0x005b2379);
    /* 005b2379: cmp edi, dword ptr [eax + 0x3f0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b237f: je 0x5b241f */ if (fZ) goto L_005b241f;
L_005b2385:; BB(0x005b2385);
    /* 005b2385: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 005b2388: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b238a: jne 0x5b236a */ if (!fZ) goto L_005b236a;
L_005b238c:; BB(0x005b238c);
    /* 005b238c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005b238f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_005b2393:; BB(0x005b2393);
    /* 005b2393: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b2395:; BB(0x005b2395);
    /* 005b2395: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2397: je 0x5b23a4 */ if (fZ) goto L_005b23a4;
L_005b2399:; BB(0x005b2399);
    /* 005b2399: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005b239d: mov word ptr [ebp + 0x3f4], dx */ W16((u32)(r_ebp+0x3f4u), (u16)r_edx);
L_005b23a4:; BB(0x005b23a4);
    /* 005b23a4: mov edx, dword ptr [ebp + 0x3ec] */ r_edx = R32((u32)(r_ebp+0x3ecu));
    /* 005b23aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b23ac: jne 0x5b23d8 */ if (!fZ) goto L_005b23d8;
L_005b23ae:; BB(0x005b23ae);
    /* 005b23ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b23b0: je 0x5b23d8 */ if (fZ) goto L_005b23d8;
L_005b23b2:; BB(0x005b23b2);
    /* 005b23b2: mov edx, dword ptr [eax + 0x3fc] */ r_edx = R32((u32)(r_eax+0x3fcu));
    /* 005b23b8: mov dword ptr [ebp + 0x408], edx */ W32((u32)(r_ebp+0x408u), r_edx);
    /* 005b23be: mov edx, dword ptr [eax + 0x400] */ r_edx = R32((u32)(r_eax+0x400u));
    /* 005b23c4: mov dword ptr [ebp + 0x40c], edx */ W32((u32)(r_ebp+0x40cu), r_edx);
    /* 005b23ca: mov eax, dword ptr [eax + 0x404] */ r_eax = R32((u32)(r_eax+0x404u));
    /* 005b23d0: mov dword ptr [ebp + 0x410], eax */ W32((u32)(r_ebp+0x410u), r_eax);
    /* 005b23d6: jmp 0x5b23fc */ goto L_005b23fc;
L_005b23d8:; BB(0x005b23d8);
    /* 005b23d8: mov eax, dword ptr [ebp + 0x3fc] */ r_eax = R32((u32)(r_ebp+0x3fcu));
    /* 005b23de: mov edx, dword ptr [ebp + 0x400] */ r_edx = R32((u32)(r_ebp+0x400u));
    /* 005b23e4: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 005b23ea: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 005b23f0: mov dword ptr [ebp + 0x40c], edx */ W32((u32)(r_ebp+0x40cu), r_edx);
    /* 005b23f6: mov dword ptr [ebp + 0x410], eax */ W32((u32)(r_ebp+0x410u), r_eax);
L_005b23fc:; BB(0x005b23fc);
    /* 005b23fc: add dword ptr [ebp + 0x434], 1 */ { u32 ad = (u32)(r_ebp+0x434u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b2403: jmp 0x5b2418 */ goto L_005b2418;
L_005b2405:; BB(0x005b2405);
    /* 005b2405: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 005b240b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b240d: jle 0x5b2418 */ if ((fZ||fS!=fO)) goto L_005b2418;
L_005b240f:; BB(0x005b240f);
    /* 005b240f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2411: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b2413: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b2418u); f_0051f62c();
L_005b2418:; BB(0x005b2418);
    /* 005b2418: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b241b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b241c: ret 4 */ FN_RET(0x005b232c); r_esp += 8; return;
L_005b241f:; BB(0x005b241f);
    /* 005b241f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005b2422: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005b2426: jmp 0x5b2395 */ goto L_005b2395;
L_005b242b:; BB(0x005b242b);
    /* 005b242b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b242d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b242e: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 005b2434: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b2436: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b243bu); f_0051f664();
    /* 005b243b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b243e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b2440: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5b2446u); call_ind(t); }
    /* 005b2446: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 005b244c: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b244f: mov dword ptr [ebp + 0x41c], eax */ W32((u32)(r_ebp+0x41cu), r_eax);
    /* 005b2455: jmp 0x5b2418 */ goto L_005b2418;
}

void f_005b2458(void) /* sub_5B2458 */
{
    FN_ENTER(0x005b2458);
    /* 005b2458: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2459: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b245b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b245d: call 0x5b247c */ r_esp -= 4; W32(r_esp, 0x5b2462u); f_005b247c();
    /* 005b2462: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b2466: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2468: jne 0x5b246e */ if (!fZ) goto L_005b246e;
L_005b246a:; BB(0x005b246a);
    /* 005b246a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b246b: ret 4 */ FN_RET(0x005b2458); r_esp += 8; return;
L_005b246e:; BB(0x005b246e);
    /* 005b246e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b246f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5b2474u); f_005c2f74();
    /* 005b2474: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2475: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b2476: ret 4 */ FN_RET(0x005b2458); r_esp += 8; return;
}

void f_005b247c(void) /* sub_5B247C */
{
    FN_ENTER(0x005b247c);
    /* 005b247c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b247d: mov ebp, esp */ r_ebp = r_esp;
    /* 005b247f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2481: push 0x8d9038 */ { u32 v = 0x8d9038u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2486: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b248c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b248d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b2494: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2497: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b249a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005b249d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005b24a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005b24a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b24a6: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b24ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b24b0: mov dword ptr [ecx], 0xb0b480 */ W32((u32)(r_ecx), 0xb0b480u);
    /* 005b24b6: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5b24bbu); f_007b9c8c();
    /* 005b24bb: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b24c2: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005b24c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b24ca: add eax, 0x494 */ {  u32 a = r_eax; u32 b = 0x494u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b24cf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b24d1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b24d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b24d4: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5b24d9u); f_008586d6();
    /* 005b24d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b24e0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b24e3: add ecx, 0x474 */ {  u32 a = r_ecx; u32 b = 0x474u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b24e9: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5b24eeu); f_005769f8();
    /* 005b24ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b24f1: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x5b24f6u); f_0052bf84();
    /* 005b24f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b24f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b2500: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2502: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2503: ret  */ FN_RET(0x005b247c); r_esp += 4; return;
}

void f_005b2504(void) /* sub_5B2504 */
{
    FN_ENTER(0x005b2504);
    /* 005b2504: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b2508: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005b250c: fld dword ptr [ecx + 0x3a4] */ FPUSH(R_F32((u32)(r_ecx+0x3a4u)));
    /* 005b2512: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005b2514: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2516: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
    /* 005b251c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b251d: jae 0x5b2530 */ if (!fC) goto L_005b2530;
L_005b251f:; BB(0x005b251f);
    /* 005b251f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b2521: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b2523: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b2527: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 005b252d: ret 8 */ FN_RET(0x005b2504); r_esp += 12; return;
L_005b2530:; BB(0x005b2530);
    /* 005b2530: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005b2532: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2534: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b2535: jbe 0x5b2546 */ if ((fC||fZ)) goto L_005b2546;
L_005b2537:; BB(0x005b2537);
    /* 005b2537: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b253b: fchs  */ ST(0) = -ST(0);
    /* 005b253d: fstp dword ptr [ecx + 0x3ac] */ W_F32((u32)(r_ecx+0x3acu), ST(0)); FPOP();
    /* 005b2543: ret 8 */ FN_RET(0x005b2504); r_esp += 12; return;
L_005b2546:; BB(0x005b2546);
    /* 005b2546: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 005b2550: ret 8 */ FN_RET(0x005b2504); r_esp += 12; return;
}

void f_005b2554(void) /* sub_5B2554 */
{
    FN_ENTER(0x005b2554);
    /* 005b2554: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b2558: cmp eax, dword ptr [ecx + 0x3b4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3b4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b255e: jne 0x5b2565 */ if (!fZ) goto L_005b2565;
L_005b2560:; BB(0x005b2560);
    /* 005b2560: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2562: ret 4 */ FN_RET(0x005b2554); r_esp += 8; return;
L_005b2565:; BB(0x005b2565);
    /* 005b2565: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 005b256b: mov eax, 1 */ r_eax = 0x1u;
    /* 005b2570: ret 4 */ FN_RET(0x005b2554); r_esp += 8; return;
}

void f_005b2574(void) /* sub_5B2574 */
{
    FN_ENTER(0x005b2574);
    /* 005b2574: mov eax, dword ptr [ecx + 0x3b4] */ r_eax = R32((u32)(r_ecx+0x3b4u));
    /* 005b257a: mov edx, dword ptr [eax*4 + 0x92aea4] */ r_edx = R32((u32)(r_eax*4+0x92aea4u));
    /* 005b2581: mov dword ptr [ecx + 0x3b8], edx */ W32((u32)(r_ecx+0x3b8u), r_edx);
    /* 005b2587: ret  */ FN_RET(0x005b2574); r_esp += 4; return;
}

void f_005b2588(void) /* sub_5B2588 */
{
    FN_ENTER(0x005b2588);
    /* 005b2588: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005b258f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2592: je 0x5b259e */ if (fZ) goto L_005b259e;
L_005b2594:; BB(0x005b2594);
    /* 005b2594: mov dword ptr [ecx + 0x37c], 4 */ W32((u32)(r_ecx+0x37cu), 0x4u);
L_005b259e:; BB(0x005b259e);
    /* 005b259e: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 005b25a4: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 005b25aa: mov dword ptr [ecx + 0x380], 4 */ W32((u32)(r_ecx+0x380u), 0x4u);
    /* 005b25b4: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 005b25ba: or edx, 0x10001 */ {  u32 a = r_edx; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b25c0: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 005b25c6: ret  */ FN_RET(0x005b2588); r_esp += 4; return;
}

void f_005b25c8(void) /* sub_5B25C8 */
{
    FN_ENTER(0x005b25c8);
    /* 005b25c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b25c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b25ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b25cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b25cc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b25cf: mov edi, ecx */ r_edi = r_ecx;
    /* 005b25d1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b25d4: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b25d9: je 0x5b25e3 */ if (fZ) goto L_005b25e3;
L_005b25db:; BB(0x005b25db);
    /* 005b25db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b25de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b25df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b25e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b25e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b25e2: ret  */ FN_RET(0x005b25c8); r_esp += 4; return;
L_005b25e3:; BB(0x005b25e3);
    /* 005b25e3: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b25e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b25ea: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b25ec: push 0x44c80000 */ { u32 v = 0x44c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b25f1: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b25f6: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5b25f9u); call_ind(t); }
    /* 005b25f9: mov esi, eax */ r_esi = r_eax;
    /* 005b25fb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b25fd: je 0x5b2779 */ if (fZ) goto L_005b2779;
L_005b2603:; BB(0x005b2603);
    /* 005b2603: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5b2608u); f_004f7c84();
    /* 005b2608: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b260b: je 0x5b2623 */ if (fZ) goto L_005b2623;
L_005b260d:; BB(0x005b260d);
    /* 005b260d: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005b2613: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2619: je 0x5b2623 */ if (fZ) goto L_005b2623;
L_005b261b:; BB(0x005b261b);
    /* 005b261b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b261e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b261f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2620: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2621: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2622: ret  */ FN_RET(0x005b25c8); r_esp += 4; return;
L_005b2623:; BB(0x005b2623);
    /* 005b2623: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005b2629: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005b262f: lea ebp, [edi + 0x494] */ r_ebp = (u32)(r_edi+0x494u);
    /* 005b2635: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b2637: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5b263cu); f_005771a4();
    /* 005b263c: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005b2642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2643: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b2645: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5b264au); f_0057725c();
    /* 005b264a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b264c: je 0x5b2676 */ if (fZ) goto L_005b2676;
L_005b264e:; BB(0x005b264e);
    /* 005b264e: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 005b2654: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b2656: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5b2659u); call_ind(t); }
    /* 005b2659: mov ecx, edi */ r_ecx = r_edi;
    /* 005b265b: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5b2660u); f_008173d0();
    /* 005b2660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2662: je 0x5b2676 */ if (fZ) goto L_005b2676;
L_005b2664:; BB(0x005b2664);
    /* 005b2664: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005b2669: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005b266e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b2671: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b2672: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2673: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2674: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2675: ret  */ FN_RET(0x005b25c8); r_esp += 4; return;
L_005b2676:; BB(0x005b2676);
    /* 005b2676: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005b2679: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5b267eu); f_00829cc8();
    /* 005b267e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b267f: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x5b2684u); f_00794548();
    /* 005b2684: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2685: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5b268au); f_00578b38();
    /* 005b268a: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005b268f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5b2694u); f_0082d7b0();
    /* 005b2694: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005b2697: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005b269a: fadd dword ptr [edi + 0x470] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x470u));
    /* 005b26a0: fadd dword ptr [edi + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x418u));
    /* 005b26a6: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b26a9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b26ad: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b26b0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 005b26b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b26b5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005b26b9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b26beu); f_00830b74();
    /* 005b26be: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005b26c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b26c3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b26c8u); f_0082d8bc();
    /* 005b26c8: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
    /* 005b26cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b26cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b26cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b26cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b26d0: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5b26d5u); f_0082fa0c();
    /* 005b26d5: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005b26db: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b26e1: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005b26e7: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5b26ecu); f_004f7c84();
    /* 005b26ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b26ef: je 0x5b27d9 */ if (fZ) goto L_005b27d9;
L_005b26f5:; BB(0x005b26f5);
    /* 005b26f5: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005b26fb: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b26fe: jne 0x5b278a */ if (!fZ) goto L_005b278a;
L_005b2704:; BB(0x005b2704);
    /* 005b2704: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2707: je 0x5b2781 */ if (fZ) goto L_005b2781;
L_005b2709:; BB(0x005b2709);
    /* 005b2709: mov ecx, edi */ r_ecx = r_edi;
    /* 005b270b: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5b2710u); f_007aa7b8();
L_005b2710:; BB(0x005b2710);
    /* 005b2710: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b2715u); f_0082da80();
    /* 005b2715: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5b271au); f_00794750();
    /* 005b271a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5b271fu); f_0082dab0();
    /* 005b271f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005b2722: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2727: jne 0x5b2764 */ if (!fZ) goto L_005b2764;
L_005b2729:; BB(0x005b2729);
    /* 005b2729: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b272b: je 0x5b2764 */ if (fZ) goto L_005b2764;
L_005b272d:; BB(0x005b272d);
    /* 005b272d: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005b2731: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 005b2734: fmul dword ptr [0x92ae6c] */ ST(0) = ST(0) * R_F32((u32)(0x92ae6cu));
    /* 005b273a: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2740: fmul dword ptr [0x92ae70] */ ST(0) = ST(0) * R_F32((u32)(0x92ae70u));
    /* 005b2746: fadd dword ptr [0x92ae74] */ ST(0) = ST(0) + R_F32((u32)(0x92ae74u));
    /* 005b274c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b274e: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2750: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 005b2754: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 005b2758: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b275c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b275e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b275f: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x5b2764u); f_00779d4c();
L_005b2764:; BB(0x005b2764);
    /* 005b2764: mov eax, dword ptr [edi + 0x494] */ r_eax = R32((u32)(r_edi+0x494u));
    /* 005b276a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b276c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5b276fu); call_ind(t); }
    /* 005b276f: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005b2774: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_005b2779:; BB(0x005b2779);
    /* 005b2779: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b277c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b277d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b277e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b277f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2780: ret  */ FN_RET(0x005b25c8); r_esp += 4; return;
L_005b2781:; BB(0x005b2781);
    /* 005b2781: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2783: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5b2788u); f_007aa668();
    /* 005b2788: jmp 0x5b2710 */ goto L_005b2710;
L_005b278a:; BB(0x005b278a);
    /* 005b278a: mov edx, dword ptr [edi + 0x474] */ r_edx = R32((u32)(r_edi+0x474u));
    /* 005b2790: lea ecx, [edi + 0x474] */ r_ecx = (u32)(r_edi+0x474u);
    /* 005b2796: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005b2799: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x5b279cu); call_ind(t); }
    /* 005b279c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b279e: jne 0x5b27a7 */ if (!fZ) goto L_005b27a7;
L_005b27a0:; BB(0x005b27a0);
    /* 005b27a0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b27a2: jmp 0x5b2710 */ goto L_005b2710;
L_005b27a7:; BB(0x005b27a7);
    /* 005b27a7: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 005b27aa: mov edx, dword ptr [edi + 0x474] */ r_edx = R32((u32)(r_edi+0x474u));
    /* 005b27b0: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5b27b3u); call_ind(t); }
    /* 005b27b3: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b27b6: je 0x5b27d0 */ if (fZ) goto L_005b27d0;
L_005b27b8:; BB(0x005b27b8);
    /* 005b27b8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b27ba: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5b27bfu); f_007aa7b8();
L_005b27bf:; BB(0x005b27bf);
    /* 005b27bf: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 005b27c2: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 005b27c8: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5b27cbu); call_ind(t); }
    /* 005b27cb: jmp 0x5b2710 */ goto L_005b2710;
L_005b27d0:; BB(0x005b27d0);
    /* 005b27d0: mov ecx, edi */ r_ecx = r_edi;
    /* 005b27d2: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5b27d7u); f_007aa668();
    /* 005b27d7: jmp 0x5b27bf */ goto L_005b27bf;
L_005b27d9:; BB(0x005b27d9);
    /* 005b27d9: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b27dc: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5b27e1u); f_0082e1e8();
    /* 005b27e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b27e2: jmp 0x5b2710 */ goto L_005b2710;
}

void f_005b27e8(void) /* sub_5B27E8 */
{
    FN_ENTER(0x005b27e8);
    /* 005b27e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b27e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b27ea: mov edi, ecx */ r_edi = r_ecx;
    /* 005b27ec: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5b27f1u); f_004f7c84();
    /* 005b27f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b27f4: je 0x5b2973 */ if (fZ) goto L_005b2973;
L_005b27fa:; BB(0x005b27fa);
    /* 005b27fa: mov ecx, edi */ r_ecx = r_edi;
    /* 005b27fc: call 0x5b4580 */ r_esp -= 4; W32(r_esp, 0x5b2801u); f_005b4580();
    /* 005b2801: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2803: call 0x5b4610 */ r_esp -= 4; W32(r_esp, 0x5b2808u); f_005b4610();
    /* 005b2808: mov ecx, edi */ r_ecx = r_edi;
    /* 005b280a: call 0x5b46a0 */ r_esp -= 4; W32(r_esp, 0x5b280fu); f_005b46a0();
    /* 005b280f: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005b2816: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005b281c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b281e: je 0x5b2853 */ if (fZ) goto L_005b2853;
L_005b2820:; BB(0x005b2820);
    /* 005b2820: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 005b2826: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2829: je 0x5b2842 */ if (fZ) goto L_005b2842;
L_005b282b:; BB(0x005b282b);
    /* 005b282b: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 005b2835: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2837: call 0x5b2980 */ r_esp -= 4; W32(r_esp, 0x5b283cu); f_005b2980();
    /* 005b283c: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
L_005b2842:; BB(0x005b2842);
    /* 005b2842: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 005b284c: mov word ptr [edi + 0x32e], dx */ W16((u32)(r_edi+0x32eu), (u16)r_edx);
L_005b2853:; BB(0x005b2853);
    /* 005b2853: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2855: call 0x5b2980 */ r_esp -= 4; W32(r_esp, 0x5b285au); f_005b2980();
    /* 005b285a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b285c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b2861u); f_007aa094();
    /* 005b2861: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b2867: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b286c: je 0x5b2877 */ if (fZ) goto L_005b2877;
L_005b286e:; BB(0x005b286e);
    /* 005b286e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b286f: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5b2874u); f_007b999c();
    /* 005b2874: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2875: jmp 0x5b287e */ goto L_005b287e;
L_005b2877:; BB(0x005b2877);
    /* 005b2877: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2879: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5b287eu); f_007b6894();
L_005b287e:; BB(0x005b287e);
    /* 005b287e: fld dword ptr [0x92ae68] */ FPUSH(R_F32((u32)(0x92ae68u)));
    /* 005b2884: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005b2887: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005b288a: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 005b288d: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2893: mov esi, dword ptr [edi + 0xa4] */ r_esi = R32((u32)(r_edi+0xa4u));
    /* 005b2899: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b289b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005b289d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005b289f: fstp dword ptr [edi + 0x304] */ W_F32((u32)(r_edi+0x304u), ST(0)); FPOP();
    /* 005b28a5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b28a7: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 005b28ad: mov dword ptr [edi + 0x308], edx */ W32((u32)(r_edi+0x308u), r_edx);
    /* 005b28b3: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 005b28b6: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b28bc: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b28c1: je 0x5b28c8 */ if (fZ) goto L_005b28c8;
L_005b28c3:; BB(0x005b28c3);
    /* 005b28c3: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005b28c6: jmp 0x5b28e5 */ goto L_005b28e5;
L_005b28c8:; BB(0x005b28c8);
    /* 005b28c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b28ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b28cb: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5b28d0u); f_006946a8();
    /* 005b28d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b28d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b28d4: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005b28d7: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b28dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b28dd: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5b28e2u); f_00805608();
    /* 005b28e2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b28e5:; BB(0x005b28e5);
    /* 005b28e5: mov eax, dword ptr [edi + 0x468] */ r_eax = R32((u32)(r_edi+0x468u));
    /* 005b28eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b28ed: jle 0x5b28f8 */ if ((fZ||fS!=fO)) goto L_005b28f8;
L_005b28ef:; BB(0x005b28ef);
    /* 005b28ef: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b28f2: mov dword ptr [edi + 0x468], eax */ W32((u32)(r_edi+0x468u), r_eax);
L_005b28f8:; BB(0x005b28f8);
    /* 005b28f8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005b28fe: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005b2901: and edx, 0xfffffff9 */ {  u32 a = r_edx; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b2904: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005b2907: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 005b290d: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2913: fcomp dword ptr [0x92ae64] */ fx_compare(ST(0), R_F32((u32)(0x92ae64u))); FPOP();
    /* 005b2919: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b291b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b291c: jbe 0x5b2929 */ if ((fC||fZ)) goto L_005b2929;
L_005b291e:; BB(0x005b291e);
    /* 005b291e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005b2921: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b2924: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005b2927: jmp 0x5b2932 */ goto L_005b2932;
L_005b2929:; BB(0x005b2929);
    /* 005b2929: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005b292c: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b292f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_005b2932:; BB(0x005b2932);
    /* 005b2932: lea eax, [edi + 0x44] */ r_eax = (u32)(r_edi+0x44u);
    /* 005b2935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2936: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2937: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5b293cu); f_0078ea50();
    /* 005b293c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005b293f: fcomp dword ptr [0x92ae60] */ fx_compare(ST(0), R_F32((u32)(0x92ae60u))); FPOP();
    /* 005b2945: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2947: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b2948: jbe 0x5b295e */ if ((fC||fZ)) goto L_005b295e;
L_005b294a:; BB(0x005b294a);
    /* 005b294a: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 005b294d: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 005b2950: mov esi, dword ptr [edi + 0x4c] */ r_esi = R32((u32)(r_edi+0x4cu));
    /* 005b2953: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005b2956: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005b2959: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 005b295c: jmp 0x5b2967 */ goto L_005b2967;
L_005b295e:; BB(0x005b295e);
    /* 005b295e: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005b2961: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005b2964: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
L_005b2967:; BB(0x005b2967);
    /* 005b2967: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 005b296a: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 005b296d: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 005b2970: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2971: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2972: ret  */ FN_RET(0x005b27e8); r_esp += 4; return;
L_005b2973:; BB(0x005b2973);
    /* 005b2973: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2975: call 0x5b4758 */ r_esp -= 4; W32(r_esp, 0x5b297au); f_005b4758();
    /* 005b297a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b297b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b297c: ret  */ FN_RET(0x005b27e8); r_esp += 4; return;
}

void f_005b2928(void)
{
    FN_ENTER(0x005b2928);
    /* 005b2928: or dword ptr [ebx - 0x377ce7be], ecx */ { u32 ad = (u32)(r_ebx+0xc8831842u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b292e: add cl, byte ptr [ecx + 0x478d1842] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_ecx+0x478d1842u)); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b2934: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2936: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2937: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5b293cu); f_0078ea50();
    /* 005b293c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005b293f: fcomp dword ptr [0x92ae60] */ fx_compare(ST(0), R_F32((u32)(0x92ae60u))); FPOP();
    /* 005b2945: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2947: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b2948: jbe 0x5b295e */ if ((fC||fZ)) goto L_005b295e;
L_005b294a:; BB(0x005b294a);
    /* 005b294a: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 005b294d: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 005b2950: mov esi, dword ptr [edi + 0x4c] */ r_esi = R32((u32)(r_edi+0x4cu));
    /* 005b2953: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005b2956: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005b2959: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 005b295c: jmp 0x5b2967 */ goto L_005b2967;
L_005b295e:; BB(0x005b295e);
    /* 005b295e: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005b2961: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005b2964: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
L_005b2967:; BB(0x005b2967);
    /* 005b2967: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 005b296a: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 005b296d: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 005b2970: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2971: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2972: ret  */ FN_RET(0x005b2928); r_esp += 4; return;
}

void f_005b2980(void) /* sub_5B2980 */
{
    FN_ENTER(0x005b2980);
    /* 005b2980: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005b2987: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b298a: ja 0x5b29e0 */ if ((!fC&&!fZ)) goto L_005b29e0;
L_005b298c:; BB(0x005b298c);
    /* 005b298c: mov eax, dword ptr [eax*4 + 0x92ac40] */ r_eax = R32((u32)(r_eax*4+0x92ac40u));
    /* 005b2993: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b2980); r_esp += 4; return;
}

void f_005b2995(void)
{
    FN_ENTER(0x005b2995);
    /* 005b2995: call 0x5b29e4 */ r_esp -= 4; W32(r_esp, 0x5b299au); f_005b29e4();
    /* 005b299a: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b2995); r_esp += 4; return;
}

void f_005b299c(void)
{
    FN_ENTER(0x005b299c);
    /* 005b299c: call 0x5b3234 */ r_esp -= 4; W32(r_esp, 0x5b29a1u); f_005b3234();
    /* 005b29a1: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b299c); r_esp += 4; return;
}

void f_005b29a3(void)
{
    FN_ENTER(0x005b29a3);
    /* 005b29a3: call 0x5b3544 */ r_esp -= 4; W32(r_esp, 0x5b29a8u); f_005b3544();
    /* 005b29a8: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29a3); r_esp += 4; return;
}

void f_005b29aa(void)
{
    FN_ENTER(0x005b29aa);
    /* 005b29aa: call 0x5b3808 */ r_esp -= 4; W32(r_esp, 0x5b29afu); f_005b3808();
    /* 005b29af: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29aa); r_esp += 4; return;
}

void f_005b29b1(void)
{
    FN_ENTER(0x005b29b1);
    /* 005b29b1: call 0x5b38b4 */ r_esp -= 4; W32(r_esp, 0x5b29b6u); f_005b38b4();
    /* 005b29b6: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29b1); r_esp += 4; return;
}

void f_005b29b8(void)
{
    FN_ENTER(0x005b29b8);
    /* 005b29b8: call 0x5b3dd4 */ r_esp -= 4; W32(r_esp, 0x5b29bdu); f_005b3dd4();
    /* 005b29bd: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29b8); r_esp += 4; return;
}

void f_005b29bf(void)
{
    FN_ENTER(0x005b29bf);
    /* 005b29bf: call 0x5b3e94 */ r_esp -= 4; W32(r_esp, 0x5b29c4u); f_005b3e94();
    /* 005b29c4: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29bf); r_esp += 4; return;
}

void f_005b29c6(void)
{
    FN_ENTER(0x005b29c6);
    /* 005b29c6: call 0x5b3fa8 */ r_esp -= 4; W32(r_esp, 0x5b29cbu); f_005b3fa8();
    /* 005b29cb: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29c6); r_esp += 4; return;
}

void f_005b29cd(void)
{
    FN_ENTER(0x005b29cd);
    /* 005b29cd: call 0x5b41a0 */ r_esp -= 4; W32(r_esp, 0x5b29d2u); f_005b41a0();
    /* 005b29d2: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29cd); r_esp += 4; return;
}

void f_005b29d4(void)
{
    FN_ENTER(0x005b29d4);
    /* 005b29d4: call 0x52c6ac */ r_esp -= 4; W32(r_esp, 0x5b29d9u); f_0052c6ac();
    /* 005b29d9: jmp 0x5b29e0 */ goto L_005b29e0;
L_005b29e0:; BB(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29d4); r_esp += 4; return;
}

void f_005b29db(void)
{
    FN_ENTER(0x005b29db);
    /* 005b29db: call 0x5b44f8 */ r_esp -= 4; W32(r_esp, 0x5b29e0u); f_005b44f8();
    /* 005b29e0: ret  */ FN_RET(0x005b29db); r_esp += 4; return;
}

void f_005b29e0(void)
{
    FN_ENTER(0x005b29e0);
    /* 005b29e0: ret  */ FN_RET(0x005b29e0); r_esp += 4; return;
}

void f_005b29e4(void) /* sub_5B29E4 */
{
    FN_ENTER(0x005b29e4);
    /* 005b29e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b29e5: mov edi, ecx */ r_edi = r_ecx;
    /* 005b29e7: mov ecx, edi */ r_ecx = r_edi;
    /* 005b29e9: call 0x5b2ccc */ r_esp -= 4; W32(r_esp, 0x5b29eeu); f_005b2ccc();
    /* 005b29ee: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 005b29f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b29f6: je 0x5b2cbf */ if (fZ) goto L_005b2cbf;
L_005b29fc:; BB(0x005b29fc);
    /* 005b29fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b29ff: je 0x5b2cb0 */ if (fZ) goto L_005b2cb0;
L_005b2a05:; BB(0x005b2a05);
    /* 005b2a05: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2a08: je 0x5b2b9b */ if (fZ) goto L_005b2b9b;
L_005b2a0e:; BB(0x005b2a0e);
    /* 005b2a0e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2a11: je 0x5b2a51 */ if (fZ) goto L_005b2a51;
L_005b2a13:; BB(0x005b2a13);
    /* 005b2a13: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2a16: jne 0x5b2a3c */ if (!fZ) goto L_005b2a3c;
L_005b2a18:; BB(0x005b2a18);
    /* 005b2a18: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b2a1e: and eax, 0xffefffff */ {  u32 a = r_eax; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b2a23: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005b2a29: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2a2b: call 0x5b2f5c */ r_esp -= 4; W32(r_esp, 0x5b2a30u); f_005b2f5c();
    /* 005b2a30: mov dword ptr [edi + 0x404], 2 */ W32((u32)(r_edi+0x404u), 0x2u);
    /* 005b2a3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2a3b: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
L_005b2a3c:; BB(0x005b2a3c);
    /* 005b2a3c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b2a3f: jne 0x5b2b7e */ if (!fZ) goto L_005b2b7e;
L_005b2a45:; BB(0x005b2a45);
    /* 005b2a45: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 005b2a4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2a50: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
L_005b2a51:; BB(0x005b2a51);
    /* 005b2a51: push dword ptr [edi + 0x3a0] */ { u32 v = R32((u32)(r_edi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b2a57: push dword ptr [edi + 0x39c] */ { u32 v = R32((u32)(r_edi+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b2a5d: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2a5f: call 0x77a0d0 */ r_esp -= 4; W32(r_esp, 0x5b2a64u); f_0077a0d0();
    /* 005b2a64: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2a66: call 0x5b2fbc */ r_esp -= 4; W32(r_esp, 0x5b2a6bu); f_005b2fbc();
    /* 005b2a6b: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2a71: fcom dword ptr [0x92ae5c] */ fx_compare(ST(0), R_F32((u32)(0x92ae5cu))); 
    /* 005b2a77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2a79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b2a7a: ja 0x5b2ac3 */ if ((!fC&&!fZ)) goto L_005b2ac3;
L_005b2a7c:; BB(0x005b2a7c);
    /* 005b2a7c: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 005b2a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2a84: jne 0x5b2ade */ if (!fZ) goto L_005b2ade;
L_005b2a86:; BB(0x005b2a86);
    /* 005b2a86: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b2a88: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2a8d: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b2a93: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b2a95: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2a97: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b2a9c: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005b2aa2: call dword ptr [edx + 0x114] */ { u32 t = R32((u32)(r_edx+0x114u)); r_esp -= 4; W32(r_esp, 0x5b2aa8u); call_ind(t); }
    /* 005b2aa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2aaa: je 0x5b2abb */ if (fZ) goto L_005b2abb;
L_005b2aac:; BB(0x005b2aac);
    /* 005b2aac: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2ab2: add dword ptr [edi + 0x40c], 1 */ { u32 ad = (u32)(r_edi+0x40cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b2ab9: jmp 0x5b2ade */ goto L_005b2ade;
L_005b2abb:; BB(0x005b2abb);
    /* 005b2abb: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2ac1: jmp 0x5b2ade */ goto L_005b2ade;
L_005b2ac3:; BB(0x005b2ac3);
    /* 005b2ac3: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b2ac9: mov dword ptr [edi + 0x40c], 0 */ W32((u32)(r_edi+0x40cu), 0x0u);
    /* 005b2ad3: and eax, 0xffefffff */ {  u32 a = r_eax; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b2ad8: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
L_005b2ade:; BB(0x005b2ade);
    /* 005b2ade: fcom dword ptr [edi + 0x410] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x410u))); 
    /* 005b2ae4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2ae6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b2ae7: jb 0x5b2af7 */ if (fC) goto L_005b2af7;
L_005b2ae9:; BB(0x005b2ae9);
    /* 005b2ae9: mov eax, 6 */ r_eax = 0x6u;
    /* 005b2aee: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b2af5: jmp 0x5b2b5f */ goto L_005b2b5f;
L_005b2af7:; BB(0x005b2af7);
    /* 005b2af7: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005b2afe: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2b01: jne 0x5b2b5f */ if (!fZ) goto L_005b2b5f;
L_005b2b03:; BB(0x005b2b03);
    /* 005b2b03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b2b05: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b0a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2b0c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b2b11u); f_007aaa30();
    /* 005b2b11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2b13: jne 0x5b2b1d */ if (!fZ) goto L_005b2b1d;
L_005b2b15:; BB(0x005b2b15);
    /* 005b2b15: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2b1b: jmp 0x5b2b5f */ goto L_005b2b5f;
L_005b2b1d:; BB(0x005b2b1d);
    /* 005b2b1d: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005b2b23: mov edx, 7 */ r_edx = 0x7u;
    /* 005b2b28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b29: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005b2b30: mov word ptr [edi + 0xba], dx */ W16((u32)(r_edi+0xbau), (u16)r_edx);
    /* 005b2b37: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b2b3a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b2b3d: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 005b2b43: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2b45: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x5b2b4au); f_007a9a6c();
    /* 005b2b4a: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005b2b50: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 005b2b56: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b2b59: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_005b2b5f:; BB(0x005b2b5f);
    /* 005b2b5f: mov edx, dword ptr [edi + 0x3fc] */ r_edx = R32((u32)(r_edi+0x3fcu));
    /* 005b2b65: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005b2b6b: fstp dword ptr [edi + 0x410] */ W_F32((u32)(r_edi+0x410u), ST(0)); FPOP();
    /* 005b2b71: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b2b74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2b76: jl 0x5b2b80 */ if ((fS!=fO)) goto L_005b2b80;
L_005b2b78:; BB(0x005b2b78);
    /* 005b2b78: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
L_005b2b7e:; BB(0x005b2b7e);
    /* 005b2b7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2b7f: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
L_005b2b80:; BB(0x005b2b80);
    /* 005b2b80: add dword ptr [edi + 0x384], 1 */ { u32 ad = (u32)(r_edi+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b2b87: mov eax, 1 */ r_eax = 0x1u;
    /* 005b2b8c: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b2b93: mov dword ptr [edi + 0x38c], edx */ W32((u32)(r_edi+0x38cu), r_edx);
    /* 005b2b99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2b9a: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
L_005b2b9b:; BB(0x005b2b9b);
    /* 005b2b9b: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005b2ba1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b2ba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2ba6: jl 0x5b2bb0 */ if ((fS!=fO)) goto L_005b2bb0;
L_005b2ba8:; BB(0x005b2ba8);
    /* 005b2ba8: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 005b2bae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2baf: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
L_005b2bb0:; BB(0x005b2bb0);
    /* 005b2bb0: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005b2bb7: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b2bba: je 0x5b2c4f */ if (fZ) goto L_005b2c4f;
L_005b2bc0:; BB(0x005b2bc0);
    /* 005b2bc0: mov eax, 7 */ r_eax = 0x7u;
    /* 005b2bc5: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_005b2bcc:; BB(0x005b2bcc);
    /* 005b2bcc: mov eax, dword ptr [edi + 0x400] */ r_eax = R32((u32)(r_edi+0x400u));
    /* 005b2bd2: mov dword ptr [edi + 0x40c], 0 */ W32((u32)(r_edi+0x40cu), 0x0u);
    /* 005b2bdc: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 005b2be2: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2be4: call 0x5b302c */ r_esp -= 4; W32(r_esp, 0x5b2be9u); f_005b302c();
    /* 005b2be9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2beb: jne 0x5b2c13 */ if (!fZ) goto L_005b2c13;
L_005b2bed:; BB(0x005b2bed);
    /* 005b2bed: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b2bf3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b2bf5: jne 0x5b2c13 */ if (!fZ) goto L_005b2c13;
L_005b2bf7:; BB(0x005b2bf7);
    /* 005b2bf7: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005b2bfe: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2c01: je 0x5b2c13 */ if (fZ) goto L_005b2c13;
L_005b2c03:; BB(0x005b2c03);
    /* 005b2c03: mov dword ptr [edi + 0x37c], 0xc */ W32((u32)(r_edi+0x37cu), 0xcu);
    /* 005b2c0d: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_005b2c13:; BB(0x005b2c13);
    /* 005b2c13: fld dword ptr [0x92ae50] */ FPUSH(R_F32((u32)(0x92ae50u)));
    /* 005b2c19: fadd dword ptr [edi + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x418u));
    /* 005b2c1f: fstp dword ptr [edi + 0x410] */ W_F32((u32)(r_edi+0x410u), ST(0)); FPOP();
    /* 005b2c25: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b2c2au); f_00807ac0();
    /* 005b2c2a: mov ecx, eax */ r_ecx = r_eax;
    /* 005b2c2c: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b2c2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b2c31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c34: push dword ptr [ecx*4 + 0x9c1780] */ { u32 v = R32((u32)(r_ecx*4+0x9c1780u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b2c3b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b2c40u); f_00814298();
    /* 005b2c40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b2c43: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 005b2c4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2c4e: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
L_005b2c4f:; BB(0x005b2c4f);
    /* 005b2c4f: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 005b2c55: jne 0x5b2b7e */ if (!fZ) goto L_005b2b7e;
L_005b2c5b:; BB(0x005b2c5b);
    /* 005b2c5b: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c60: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2c62: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b2c67u); f_007aaa30();
    /* 005b2c67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2c69: je 0x5b2b7e */ if (fZ) goto L_005b2b7e;
L_005b2c6f:; BB(0x005b2c6f);
    /* 005b2c6f: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005b2c75: mov edx, 7 */ r_edx = 0x7u;
    /* 005b2c7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c7b: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005b2c82: mov word ptr [edi + 0xba], dx */ W16((u32)(r_edi+0xbau), (u16)r_edx);
    /* 005b2c89: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b2c8c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b2c8f: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 005b2c95: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2c97: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x5b2c9cu); f_007a9a6c();
    /* 005b2c9c: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005b2ca2: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b2ca5: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 005b2cab: jmp 0x5b2bcc */ goto L_005b2bcc;
L_005b2cb0:; BB(0x005b2cb0);
    /* 005b2cb0: push dword ptr [edi + 0x3f8] */ { u32 v = R32((u32)(r_edi+0x3f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b2cb6: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2cb8: call 0x5b3064 */ r_esp -= 4; W32(r_esp, 0x5b2cbdu); f_005b3064();
    /* 005b2cbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2cbe: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
L_005b2cbf:; BB(0x005b2cbf);
    /* 005b2cbf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2cc1: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2cc3: call 0x5b50c8 */ r_esp -= 4; W32(r_esp, 0x5b2cc8u); f_005b50c8();
    /* 005b2cc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2cc9: ret  */ FN_RET(0x005b29e4); r_esp += 4; return;
}

void f_005b2ccc(void) /* sub_5B2CCC */
{
    FN_ENTER(0x005b2ccc);
    /* 005b2ccc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ccd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2cce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ccf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2cd0: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2cd3: mov edi, ecx */ r_edi = r_ecx;
    /* 005b2cd5: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2cd7: call 0x5b2f3c */ r_esp -= 4; W32(r_esp, 0x5b2cdcu); f_005b2f3c();
    /* 005b2cdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2cde: je 0x5b2d04 */ if (fZ) goto L_005b2d04;
L_005b2ce0:; BB(0x005b2ce0);
    /* 005b2ce0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ce2: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2ce4: call 0x5b2ed4 */ r_esp -= 4; W32(r_esp, 0x5b2ce9u); f_005b2ed4();
    /* 005b2ce9: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 005b2cec: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 005b2cef: mov ebx, dword ptr [edi + 0x58] */ r_ebx = R32((u32)(r_edi+0x58u));
    /* 005b2cf2: mov dword ptr [edi + 0x2a4], eax */ W32((u32)(r_edi+0x2a4u), r_eax);
    /* 005b2cf8: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 005b2cfe: mov dword ptr [edi + 0x2ac], ebx */ W32((u32)(r_edi+0x2acu), r_ebx);
L_005b2d04:; BB(0x005b2d04);
    /* 005b2d04: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2d06: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b2d0bu); f_00770738();
    /* 005b2d0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2d0d: je 0x5b2d17 */ if (fZ) goto L_005b2d17;
L_005b2d0f:; BB(0x005b2d0f);
    /* 005b2d0f: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b2d12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b2d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2d14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2d15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2d16: ret  */ FN_RET(0x005b2ccc); r_esp += 4; return;
L_005b2d17:; BB(0x005b2d17);
    /* 005b2d17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2d19: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2d1b: call 0x5b2ed4 */ r_esp -= 4; W32(r_esp, 0x5b2d20u); f_005b2ed4();
    /* 005b2d20: fld dword ptr [0x92ae4c] */ FPUSH(R_F32((u32)(0x92ae4cu)));
    /* 005b2d26: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 005b2d2c: mov ebx, dword ptr [edi + 0x304] */ r_ebx = R32((u32)(r_edi+0x304u));
    /* 005b2d32: mov ebp, dword ptr [edi + 0x308] */ r_ebp = R32((u32)(r_edi+0x308u));
    /* 005b2d38: mov esi, dword ptr [edi + 0x2a4] */ r_esi = R32((u32)(r_edi+0x2a4u));
    /* 005b2d3e: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 005b2d42: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005b2d4a: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005b2d52: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b2d56: mov eax, dword ptr [edi + 0x2a8] */ r_eax = R32((u32)(r_edi+0x2a8u));
    /* 005b2d5c: mov dword ptr [esp], 0xc3160000 */ W32((u32)(r_esp), 0xc3160000u);
    /* 005b2d63: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 005b2d67: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 005b2d6b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 005b2d6f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005b2d73: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005b2d77: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b2d7b: mov eax, dword ptr [edi + 0x2ac] */ r_eax = R32((u32)(r_edi+0x2acu));
    /* 005b2d81: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b2d85: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b2d8au); f_0082f9c4();
    /* 005b2d8a: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005b2d8e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005b2d92: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b2d94: fmul qword ptr [0x92ad08] */ ST(0) = ST(0) * R_F64((u32)(0x92ad08u));
    /* 005b2d9a: fdiv qword ptr [0x92ad00] */ ST(0) = ST(0) / R_F64((u32)(0x92ad00u));
    /* 005b2da0: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 005b2da4: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 005b2da9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b2dae: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005b2db2: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 005b2db6: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b2dba: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005b2dbe: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b2dc3: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 005b2dc7: mov ebp, esi */ r_ebp = r_esi;
    /* 005b2dc9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b2dceu); f_0082d990();
    /* 005b2dce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2dd0: mov edx, esi */ r_edx = r_esi;
    /* 005b2dd2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b2dd7u); f_0082d8bc();
    /* 005b2dd7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005b2dd9:; BB(0x005b2dd9);
    /* 005b2dd9: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b2ddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2dde: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b2de2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2de4: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b2de9u); f_00830aa0();
    /* 005b2de9: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005b2ded: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b2df1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b2df6u); f_0082ebac();
    /* 005b2df6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b2dfa: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b2dfe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e02: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5b2e07u); f_0077fffc();
    /* 005b2e07: mov edx, eax */ r_edx = r_eax;
    /* 005b2e09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2e0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2e0e: je 0x5b2e52 */ if (fZ) goto L_005b2e52;
L_005b2e10:; BB(0x005b2e10);
    /* 005b2e10: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b2e13: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b2e16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e17: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5b2e1cu); f_0078ea6c();
    /* 005b2e1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2e1f: fadd dword ptr [0x92ae44] */ ST(0) = ST(0) + R_F32((u32)(0x92ae44u));
    /* 005b2e25: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 005b2e29: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b2e2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2e2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b2e2e: jae 0x5b2e36 */ if (!fC) goto L_005b2e36;
L_005b2e30:; BB(0x005b2e30);
    /* 005b2e30: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 005b2e34: mov ebp, esi */ r_ebp = r_esi;
L_005b2e36:; BB(0x005b2e36);
    /* 005b2e36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b2e38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2e3a: mov edx, 0x5555 */ r_edx = 0x5555u;
    /* 005b2e3f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b2e44u); f_0082d8bc();
    /* 005b2e44: add esi, 0x5555 */ {  u32 a = r_esi; u32 b = 0x5555u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b2e4a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b2e4d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b2e50: jl 0x5b2dd9 */ if ((fS!=fO)) goto L_005b2dd9;
L_005b2e52:; BB(0x005b2e52);
    /* 005b2e52: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b2e57u); f_0082da80();
    /* 005b2e57: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2e5a: jne 0x5b2ead */ if (!fZ) goto L_005b2ead;
L_005b2e5c:; BB(0x005b2e5c);
    /* 005b2e5c: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 005b2e60: fcomp dword ptr [0x92ae40] */ fx_compare(ST(0), R_F32((u32)(0x92ae40u))); FPOP();
    /* 005b2e66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b2e68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b2e69: jb 0x5b2d0f */ if (fC) goto L_005b2d0f;
L_005b2e6f:; BB(0x005b2e6f);
    /* 005b2e6f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b2e74: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b2e79u); f_0082d990();
    /* 005b2e79: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 005b2e7d: fchs  */ ST(0) = -ST(0);
    /* 005b2e7f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b2e82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2e84: mov edx, ebp */ r_edx = r_ebp;
    /* 005b2e86: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b2e8bu); f_0082d8bc();
    /* 005b2e8b: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b2e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2e90: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b2e94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b2e96: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b2e9bu); f_00830aa0();
    /* 005b2e9b: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005b2e9f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b2ea3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b2ea8u); f_0082ebac();
    /* 005b2ea8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b2eadu); f_0082da80();
L_005b2ead:; BB(0x005b2ead);
    /* 005b2ead: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005b2eb1: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005b2eb5: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 005b2eb9: mov dword ptr [edi + 0x2a4], eax */ W32((u32)(r_edi+0x2a4u), r_eax);
    /* 005b2ebf: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 005b2ec5: mov dword ptr [edi + 0x2ac], ebx */ W32((u32)(r_edi+0x2acu), r_ebx);
    /* 005b2ecb: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b2ece: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b2ecf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2ed0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2ed1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2ed2: ret  */ FN_RET(0x005b2ccc); r_esp += 4; return;
}

void f_005b2ed4(void) /* sub_5B2ED4 */
{
    FN_ENTER(0x005b2ed4);
    /* 005b2ed4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ed5: mov esi, ecx */ r_esi = r_ecx;
    /* 005b2ed7: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 005b2edd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005b2ee2: mov dword ptr [esi + 0x3b4], 1 */ W32((u32)(r_esi+0x3b4u), 0x1u);
    /* 005b2eec: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005b2ef3: mov ecx, esi */ r_ecx = r_esi;
    /* 005b2ef5: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b2efb: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 005b2f01: call 0x5b2574 */ r_esp -= 4; W32(r_esp, 0x5b2f06u); f_005b2574();
    /* 005b2f06: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 005b2f0c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2f0e: jne 0x5b2f2c */ if (!fZ) goto L_005b2f2c;
L_005b2f10:; BB(0x005b2f10);
    /* 005b2f10: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005b2f17: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b2f1a: je 0x5b2f2c */ if (fZ) goto L_005b2f2c;
L_005b2f1c:; BB(0x005b2f1c);
    /* 005b2f1c: mov dword ptr [esi + 0x37c], 0xb */ W32((u32)(r_esi+0x37cu), 0xbu);
    /* 005b2f26: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_005b2f2c:; BB(0x005b2f2c);
    /* 005b2f2c: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 005b2f36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2f37: ret 4 */ FN_RET(0x005b2ed4); r_esp += 8; return;
}

void f_005b2f3c(void) /* sub_5B2F3C */
{
    FN_ENTER(0x005b2f3c);
    /* 005b2f3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f3d: mov esi, ecx */ r_esi = r_ecx;
    /* 005b2f3f: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005b2f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2f43: call 0x807cac */ r_esp -= 4; W32(r_esp, 0x5b2f48u); f_00807cac();
    /* 005b2f48: movsx edx, word ptr [esi + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x28u));
    /* 005b2f4c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b2f4e: mov eax, 0 */ r_eax = 0x0u;
    /* 005b2f53: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005b2f56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b2f57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b2f58: ret  */ FN_RET(0x005b2f3c); r_esp += 4; return;
}

void f_005b2f5c(void) /* sub_5B2F5C */
{
    FN_ENTER(0x005b2f5c);
    /* 005b2f5c: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 005b2f62: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b2f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2f67: jl 0x5b2f70 */ if ((fS!=fO)) goto L_005b2f70;
L_005b2f69:; BB(0x005b2f69);
    /* 005b2f69: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 005b2f6f: ret  */ FN_RET(0x005b2f5c); r_esp += 4; return;
L_005b2f70:; BB(0x005b2f70);
    /* 005b2f70: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 005b2f76: mov dword ptr [ecx + 0x38c], 0 */ W32((u32)(r_ecx+0x38cu), 0x0u);
    /* 005b2f80: mov eax, 1 */ r_eax = 0x1u;
    /* 005b2f85: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005b2f8c: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b2f8f: jne 0x5b2fad */ if (!fZ) goto L_005b2fad;
L_005b2f91:; BB(0x005b2f91);
    /* 005b2f91: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005b2f98: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2f9b: je 0x5b2fad */ if (fZ) goto L_005b2fad;
L_005b2f9d:; BB(0x005b2f9d);
    /* 005b2f9d: mov dword ptr [ecx + 0x37c], 0xc */ W32((u32)(r_ecx+0x37cu), 0xcu);
    /* 005b2fa7: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_005b2fad:; BB(0x005b2fad);
    /* 005b2fad: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b2fb3: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 005b2fb9: ret  */ FN_RET(0x005b2f5c); r_esp += 4; return;
}

void f_005b2fbc(void) /* sub_5B2FBC */
{
    FN_ENTER(0x005b2fbc);
    /* 005b2fbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b2fbd: mov edi, ecx */ r_edi = r_ecx;
    /* 005b2fbf: mov ecx, edi */ r_ecx = r_edi;
    /* 005b2fc1: call 0x5b2fdc */ r_esp -= 4; W32(r_esp, 0x5b2fc6u); f_005b2fdc();
    /* 005b2fc6: fmul dword ptr [edi + 0x408] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x408u));
    /* 005b2fcc: fadd dword ptr [0x92ae3c] */ ST(0) = ST(0) + R_F32((u32)(0x92ae3cu));
    /* 005b2fd2: fstp dword ptr [edi + 0x418] */ W_F32((u32)(r_edi+0x418u), ST(0)); FPOP();
    /* 005b2fd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b2fd9: ret  */ FN_RET(0x005b2fbc); r_esp += 4; return;
}

void f_005b2fdc(void) /* sub_5B2FDC */
{
    FN_ENTER(0x005b2fdc);
    /* 005b2fdc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b2fdf: mov eax, dword ptr [ecx + 0x2a4] */ r_eax = R32((u32)(r_ecx+0x2a4u));
    /* 005b2fe5: mov edx, dword ptr [ecx + 0x2a8] */ r_edx = R32((u32)(r_ecx+0x2a8u));
    /* 005b2feb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b2fee: mov eax, dword ptr [ecx + 0x2ac] */ r_eax = R32((u32)(r_ecx+0x2acu));
    /* 005b2ff4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b2ff8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b2ffc: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b3000: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 005b3006: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b300a: mov eax, dword ptr [ecx + 0x304] */ r_eax = R32((u32)(r_ecx+0x304u));
    /* 005b3010: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005b3014: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 005b301a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b301e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b3021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3023: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5b3028u); f_0078ea6c();
    /* 005b3028: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b302b: ret  */ FN_RET(0x005b2fdc); r_esp += 4; return;
}

