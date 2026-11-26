#include "protos.h"

void f_006f20cc(void) /* sub_6F20CC */
{
    FN_ENTER(0x006f20cc);
    /* 006f20cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f20cd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f20d0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f20d2: movsx eax, word ptr [ebx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x78u));
    /* 006f20d6: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f20db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f20dc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006f20de: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6f20e3u); f_006ded14();
    /* 006f20e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006f20e5: mov dword ptr [ebx + 0x88], edx */ W32((u32)(r_ebx+0x88u), r_edx);
    /* 006f20eb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006f20ee: mov dword ptr [ebx + 0x8c], edx */ W32((u32)(r_ebx+0x8cu), r_edx);
    /* 006f20f4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006f20f7: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 006f20fd: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006f2100: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 006f2106: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006f2109: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 006f210f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006f2112: mov dword ptr [ebx + 0x9c], edx */ W32((u32)(r_ebx+0x9cu), r_edx);
    /* 006f2118: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006f211b: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 006f2121: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006f2124: mov dword ptr [ebx + 0xa4], edx */ W32((u32)(r_ebx+0xa4u), r_edx);
    /* 006f212a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006f212d: mov dword ptr [ebx + 0xa8], edx */ W32((u32)(r_ebx+0xa8u), r_edx);
    /* 006f2133: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006f2136: mov dword ptr [ebx + 0xac], edx */ W32((u32)(r_ebx+0xacu), r_edx);
    /* 006f213c: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006f213f: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006f2142: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 006f2148: movsx eax, word ptr [ebx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x78u));
    /* 006f214c: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006f214f: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006f2153: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006f2157: fstp dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0)); FPOP();
    /* 006f215d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f2160: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f2161: ret  */ FN_RET(0x006f20cc); r_esp += 4; return;
}

void f_006f2164(void) /* sub_6F2164 */
{
    FN_ENTER(0x006f2164);
    /* 006f2164: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f2165: mov ebp, esp */ r_ebp = r_esp;
    /* 006f2167: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2169: push 0x8efc60 */ { u32 v = 0x8efc60u; r_esp -= 4; W32(r_esp, v); }
    /* 006f216e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f2174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2175: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f217c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f217f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f2182: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f2185: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f2188: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f218b: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2190: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006f2197: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f219cu); f_005caba4();
    /* 006f219c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f219d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006f21a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f21a2: je 0x6f21cd */ if (fZ) goto L_006f21cd;
L_006f21a4:; BB(0x006f21a4);
    /* 006f21a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006f21ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f21b2: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f21b5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f21b8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f21bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f21be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f21c1: call 0x6f21dc */ r_esp -= 4; W32(r_esp, 0x6f21c6u); f_006f21dc();
    /* 006f21c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006f21cd:; BB(0x006f21cd);
    /* 006f21cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f21d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f21d7: mov esp, ebp */ r_esp = r_ebp;
    /* 006f21d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f21da: ret  */ FN_RET(0x006f2164); r_esp += 4; return;
}

void f_006f21dc(void) /* sub_6F21DC */
{
    FN_ENTER(0x006f21dc);
    /* 006f21dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f21dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006f21df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f21e1: push 0x8efc7c */ { u32 v = 0x8efc7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f21e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f21ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f21ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f21f4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f21f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f21fa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006f21fd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006f2200: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006f2203: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006f2206: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2209: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006f220c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006f220f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2210: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2213: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006f2216: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f2219: call 0x6de7fc */ r_esp -= 4; W32(r_esp, 0x6f221eu); f_006de7fc();
    /* 006f221e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f2225: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f2228: mov dword ptr [edi], 0xb3e770 */ W32((u32)(r_edi), 0xb3e770u);
    /* 006f222e: lea ebx, [edi + 0xf4] */ r_ebx = (u32)(r_edi+0xf4u);
    /* 006f2234: mov esi, 0xb */ r_esi = 0xbu;
    /* 006f2239: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006f223b:; BB(0x006f223b);
    /* 006f223b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006f2240: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006f2243: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2245: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006f2249: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006f224c: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f224f: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006f2252: jne 0x6f223b */ if (!fZ) goto L_006f223b;
L_006f2254:; BB(0x006f2254);
    /* 006f2254: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f2257: mov dword ptr [edi + 0xf0], 0 */ W32((u32)(r_edi+0xf0u), 0x0u);
    /* 006f2261: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f2264: mov ecx, dword ptr [0x9cfa3c] */ r_ecx = R32((u32)(0x9cfa3cu));
    /* 006f226a: mov dword ptr [edx + 0xec], 1 */ W32((u32)(r_edx+0xecu), 0x1u);
    /* 006f2274: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006f2277: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006f2279: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006f227c: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 006f227f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006f2282: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f2288: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006f228a: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006f228d: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 006f2290: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006f2293: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006f2296: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006f2299: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006f229c: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006f229f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006f22a2: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006f22a5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006f22a8: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006f22ab: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006f22ae: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006f22b1: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006f22b4: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006f22b7: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006f22ba: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006f22bd: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006f22c0: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006f22c3: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006f22c6: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006f22c9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006f22cc: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006f22cf: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006f22d2: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006f22d5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006f22d8: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006f22db: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006f22de: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006f22e1: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006f22e4: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006f22e7: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006f22ea: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006f22ed: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006f22f0: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006f22f3: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006f22f6: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006f22f9: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006f22fc: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006f22ff: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006f2302: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006f2305: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f2308: call 0x6f20cc */ r_esp -= 4; W32(r_esp, 0x6f230du); f_006f20cc();
    /* 006f230d: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f2310: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2313: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006f2315: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006f2318: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006f231b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f231e: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006f2321: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 006f2324: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 006f2327: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006f232d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f232f: je 0x6f2343 */ if (fZ) goto L_006f2343;
L_006f2331:; BB(0x006f2331);
    /* 006f2331: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 006f2337: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 006f233d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006f2340: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_006f2343:; BB(0x006f2343);
    /* 006f2343: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006f2347: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f2349: jl 0x6f23f2 */ if ((fS!=fO)) goto L_006f23f2;
L_006f234f:; BB(0x006f234f);
    /* 006f234f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2352: jle 0x6f23c1 */ if ((fZ||fS!=fO)) goto L_006f23c1;
L_006f2354:; BB(0x006f2354);
    /* 006f2354: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2357: jl 0x6f23f2 */ if ((fS!=fO)) goto L_006f23f2;
L_006f235d:; BB(0x006f235d);
    /* 006f235d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2360: jle 0x6f23a7 */ if ((fZ||fS!=fO)) goto L_006f23a7;
L_006f2362:; BB(0x006f2362);
    /* 006f2362: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2365: jl 0x6f23f2 */ if ((fS!=fO)) goto L_006f23f2;
L_006f236b:; BB(0x006f236b);
    /* 006f236b: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f236e: jg 0x6f23f2 */ if ((!fZ&&fS==fO)) goto L_006f23f2;
L_006f2374:; BB(0x006f2374);
    /* 006f2374: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f2377: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2379: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f237a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f237b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f237c: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2381: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2386u); f_00814298();
    /* 006f2386: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f238b: jl 0x6f23a2 */ if ((fS!=fO)) goto L_006f23a2;
L_006f238d:; BB(0x006f238d);
    /* 006f238d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f238f: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2395: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f239au); f_00814664();
    /* 006f239a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f239d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f23a0: jmp 0x6f23f2 */ goto L_006f23f2;
L_006f23a2:; BB(0x006f23a2);
    /* 006f23a2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f23a5: jmp 0x6f23f2 */ goto L_006f23f2;
L_006f23a7:; BB(0x006f23a7);
    /* 006f23a7: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f23aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f23ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f23ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f23ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f23af: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f23b4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f23b9u); f_00814298();
    /* 006f23b9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f23bc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f23bf: jmp 0x6f23f2 */ goto L_006f23f2;
L_006f23c1:; BB(0x006f23c1);
    /* 006f23c1: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f23c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f23c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f23c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f23c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f23c9: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f23ce: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f23d3u); f_00814298();
    /* 006f23d3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f23d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f23d8: jl 0x6f23ef */ if ((fS!=fO)) goto L_006f23ef;
L_006f23da:; BB(0x006f23da);
    /* 006f23da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f23dc: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006f23e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f23e2: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f23e7u); f_00814664();
    /* 006f23e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f23ea: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f23ed: jmp 0x6f23f2 */ goto L_006f23f2;
L_006f23ef:; BB(0x006f23ef);
    /* 006f23ef: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_006f23f2:; BB(0x006f23f2);
    /* 006f23f2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006f23f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f23f7: je 0x6f2404 */ if (fZ) goto L_006f2404;
L_006f23f9:; BB(0x006f23f9);
    /* 006f23f9: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f23fd: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
L_006f2404:; BB(0x006f2404);
    /* 006f2404: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f2407: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f240a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f240d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f2410: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f2417: mov esp, ebp */ r_esp = r_ebp;
    /* 006f2419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f241a: ret 0x10 */ FN_RET(0x006f21dc); r_esp += 20; return;
}

void f_006f2420(void) /* sub_6F2420 */
{
    FN_ENTER(0x006f2420);
    /* 006f2420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2421: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f2424: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f2426: movzx eax, word ptr [ebx + 0xb4] */ r_eax = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006f242d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f242e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6f2433u); f_007b4d18();
    /* 006f2433: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2434: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006f2437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2439: je 0x6f24ac */ if (fZ) goto L_006f24ac;
L_006f243b:; BB(0x006f243b);
    /* 006f243b: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 006f2441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2443: je 0x6f2493 */ if (fZ) goto L_006f2493;
L_006f2445:; BB(0x006f2445);
    /* 006f2445: mov edx, dword ptr [ebx + 0xf0] */ r_edx = R32((u32)(r_ebx+0xf0u));
    /* 006f244b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f244d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f244f: jle 0x6f249a */ if ((fZ||fS!=fO)) goto L_006f249a;
L_006f2451:; BB(0x006f2451);
    /* 006f2451: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006f2455: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006f2458: mov edi, eax */ r_edi = r_eax;
L_006f245a:; BB(0x006f245a);
    /* 006f245a: movzx edx, word ptr [ebx + edi*8 + 0xf4] */ r_edx = (u32)R16((u32)(r_ebx+r_edi*8+0xf4u));
    /* 006f2462: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2463: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6f2468u); f_007b4d18();
    /* 006f2468: mov esi, eax */ r_esi = r_eax;
    /* 006f246a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f246b: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6f2470u); f_006ea700();
    /* 006f2470: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2475: je 0x6f247f */ if (fZ) goto L_006f247f;
L_006f2477:; BB(0x006f2477);
    /* 006f2477: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f2478: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f247a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f247c: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x6f247fu); call_ind(t); }
L_006f247f:; BB(0x006f247f);
    /* 006f247f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2482: cmp edi, dword ptr [ebx + 0xf0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xf0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2488: jl 0x6f245a */ if ((fS!=fO)) goto L_006f245a;
L_006f248a:; BB(0x006f248a);
    /* 006f248a: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006f248e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006f2491: jmp 0x6f249a */ goto L_006f249a;
L_006f2493:; BB(0x006f2493);
    /* 006f2493: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f2495: call 0x6deadc */ r_esp -= 4; W32(r_esp, 0x6f249au); f_006deadc();
L_006f249a:; BB(0x006f249a);
    /* 006f249a: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006f249e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f24a3: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006f24a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f24aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f24ab: ret  */ FN_RET(0x006f2420); r_esp += 4; return;
L_006f24ac:; BB(0x006f24ac);
    /* 006f24ac: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006f24b0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f24b5: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006f24b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f24bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f24bd: ret  */ FN_RET(0x006f2420); r_esp += 4; return;
}

void f_006f24c0(void) /* sub_6F24C0 */
{
    FN_ENTER(0x006f24c0);
    /* 006f24c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f24c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f24c2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f24c5: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 006f24c9: mov ebx, dword ptr [ecx + 0x88] */ r_ebx = R32((u32)(r_ecx+0x88u));
    /* 006f24cf: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006f24d2: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006f24d6: mov eax, 0xc */ r_eax = 0xcu;
    /* 006f24db: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006f24de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f24e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f24e1: push dword ptr [ecx + 0xb8] */ { u32 v = R32((u32)(r_ecx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f24e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f24e8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006f24ea: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f24ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006f24ef: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6f24f2u); call_ind(t); }
    /* 006f24f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f24f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f24f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f24f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f24f9: ret 4 */ FN_RET(0x006f24c0); r_esp += 8; return;
}

void f_006f24fc(void) /* sub_6F24FC */
{
    FN_ENTER(0x006f24fc);
    /* 006f24fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f24fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f24ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f2501: call 0x6f2520 */ r_esp -= 4; W32(r_esp, 0x6f2506u); f_006f2520();
    /* 006f2506: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f250a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f250c: jne 0x6f2512 */ if (!fZ) goto L_006f2512;
L_006f250e:; BB(0x006f250e);
    /* 006f250e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f250f: ret 4 */ FN_RET(0x006f24fc); r_esp += 8; return;
L_006f2512:; BB(0x006f2512);
    /* 006f2512: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2513: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f2518u); f_005c2f74();
    /* 006f2518: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2519: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f251a: ret 4 */ FN_RET(0x006f24fc); r_esp += 8; return;
}

void f_006f2520(void) /* sub_6F2520 */
{
    FN_ENTER(0x006f2520);
    /* 006f2520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f2521: mov ebp, esp */ r_ebp = r_esp;
    /* 006f2523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2525: push 0x8efc98 */ { u32 v = 0x8efc98u; r_esp -= 4; W32(r_esp, v); }
    /* 006f252a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f2530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f2538: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f253b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f253e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f2541: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f2544: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f2547: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f254a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f254d: mov dword ptr [ecx], 0xb3e880 */ W32((u32)(r_ecx), 0xb3e880u);
    /* 006f2553: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f255a: call 0x6efddc */ r_esp -= 4; W32(r_esp, 0x6f255fu); f_006efddc();
    /* 006f255f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f2562: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f2569: mov esp, ebp */ r_esp = r_ebp;
    /* 006f256b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f256c: ret  */ FN_RET(0x006f2520); r_esp += 4; return;
}

void f_006f2570(void) /* sub_6F2570 */
{
    FN_ENTER(0x006f2570);
    /* 006f2570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f2571: mov ebp, esp */ r_ebp = r_esp;
    /* 006f2573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2575: push 0x8efcc0 */ { u32 v = 0x8efcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f257a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f2580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2581: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f2588: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f258b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f258e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f2591: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f2594: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f2597: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f259c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006f25a3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f25a8u); f_005caba4();
    /* 006f25a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f25a9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006f25ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f25ae: je 0x6f25d9 */ if (fZ) goto L_006f25d9;
L_006f25b0:; BB(0x006f25b0);
    /* 006f25b0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006f25b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f25be: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f25c1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f25c4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f25c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f25ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f25cd: call 0x6f25e8 */ r_esp -= 4; W32(r_esp, 0x6f25d2u); f_006f25e8();
    /* 006f25d2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006f25d9:; BB(0x006f25d9);
    /* 006f25d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f25dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f25e3: mov esp, ebp */ r_esp = r_ebp;
    /* 006f25e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f25e6: ret  */ FN_RET(0x006f2570); r_esp += 4; return;
}

void f_006f25e8(void) /* sub_6F25E8 */
{
    FN_ENTER(0x006f25e8);
    /* 006f25e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f25e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006f25eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f25ed: push 0x8efcdc */ { u32 v = 0x8efcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006f25f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f25f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f25f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f2600: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f2603: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f2606: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006f2609: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006f260c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006f260f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006f2612: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2615: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006f2618: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f261b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f261d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2620: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2623: call 0x6efe50 */ r_esp -= 4; W32(r_esp, 0x6f2628u); f_006efe50();
    /* 006f2628: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f262f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f2632: mov dword ptr [edi], 0xb3e880 */ W32((u32)(r_edi), 0xb3e880u);
    /* 006f2638: lea ebx, [edi + 0x134] */ r_ebx = (u32)(r_edi+0x134u);
    /* 006f263e: mov esi, 0xb */ r_esi = 0xbu;
    /* 006f2643: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006f2645:; BB(0x006f2645);
    /* 006f2645: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006f264a: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006f264d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f264f: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006f2653: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006f2656: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f2659: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006f265c: jne 0x6f2645 */ if (!fZ) goto L_006f2645;
L_006f265e:; BB(0x006f265e);
    /* 006f265e: mov dword ptr [edi + 0x130], 0 */ W32((u32)(r_edi+0x130u), 0x0u);
    /* 006f2668: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f266b: mov eax, dword ptr [0x9cfa40] */ r_eax = R32((u32)(0x9cfa40u));
    /* 006f2670: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006f2673: call 0x6f273c */ r_esp -= 4; W32(r_esp, 0x6f2678u); f_006f273c();
    /* 006f2678: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f267b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f267e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006f2680: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006f2683: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006f2686: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006f2689: add edx, 0x130 */ {  u32 a = r_edx; u32 b = 0x130u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f268f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006f2691: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006f2694: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 006f2697: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 006f269a: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 006f269d: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006f26a0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006f26a3: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006f26a6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006f26a9: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006f26ac: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006f26af: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006f26b2: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006f26b5: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006f26b8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006f26bb: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006f26be: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006f26c1: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006f26c4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006f26c7: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006f26ca: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006f26cd: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006f26d0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006f26d3: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006f26d6: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006f26d9: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006f26dc: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006f26df: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006f26e2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006f26e5: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006f26e8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006f26eb: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006f26ee: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006f26f1: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006f26f4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006f26f7: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006f26fa: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006f26fd: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006f2700: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006f2703: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006f2706: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006f2709: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006f270c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f270f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006f2712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f2714: je 0x6f2721 */ if (fZ) goto L_006f2721;
L_006f2716:; BB(0x006f2716);
    /* 006f2716: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006f271a: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006f2721:; BB(0x006f2721);
    /* 006f2721: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f2724: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2727: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f272a: mov eax, edx */ r_eax = r_edx;
    /* 006f272c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f272f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f2736: mov esp, ebp */ r_esp = r_ebp;
    /* 006f2738: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f2739: ret 0x10 */ FN_RET(0x006f25e8); r_esp += 20; return;
}

void f_006f273c(void) /* sub_6F273C */
{
    FN_ENTER(0x006f273c);
    /* 006f273c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f273d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f2740: mov edi, ecx */ r_edi = r_ecx;
    /* 006f2742: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006f2749: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f274e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f274f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2751: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6f2756u); f_006ded14();
    /* 006f2756: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2759: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006f275b: mov dword ptr [edi + 0xcc], edx */ W32((u32)(r_edi+0xccu), r_edx);
    /* 006f2761: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006f2764: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 006f276a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006f276d: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 006f2773: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006f2776: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 006f277c: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006f277f: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 006f2785: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006f2788: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 006f278e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006f2791: mov dword ptr [edi + 0xe4], edx */ W32((u32)(r_edi+0xe4u), r_edx);
    /* 006f2797: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006f279a: mov dword ptr [edi + 0xe8], edx */ W32((u32)(r_edi+0xe8u), r_edx);
    /* 006f27a0: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006f27a3: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 006f27a9: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006f27ac: mov dword ptr [edi + 0xf0], edx */ W32((u32)(r_edi+0xf0u), r_edx);
    /* 006f27b2: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006f27b5: mov dword ptr [edi + 0xf4], eax */ W32((u32)(r_edi+0xf4u), r_eax);
    /* 006f27bb: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006f27c2: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f27c5: jl 0x6f2802 */ if ((fS!=fO)) goto L_006f2802;
L_006f27c7:; BB(0x006f27c7);
    /* 006f27c7: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6f27ccu); f_00687c48();
    /* 006f27cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f27ce: jne 0x6f27fb */ if (!fZ) goto L_006f27fb;
L_006f27d0:; BB(0x006f27d0);
    /* 006f27d0: movsx ecx, word ptr [0x9cf738] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf738u));
    /* 006f27d7: movsx edx, word ptr [0x9cf73a] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf73au));
    /* 006f27de: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006f27e5: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006f27e8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f27ea: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006f27ed: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006f27f0: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006f27f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f27f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f27fa: ret  */ FN_RET(0x006f273c); r_esp += 4; return;
L_006f27fb:; BB(0x006f27fb);
    /* 006f27fb: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
L_006f2802:; BB(0x006f2802);
    /* 006f2802: movsx edx, word ptr [edi + 0xf0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xf0u));
    /* 006f2809: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006f280c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006f2810: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006f2814: fadd dword ptr [edi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xccu));
    /* 006f281a: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006f2820: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6f2825u); f_00687c48();
    /* 006f2825: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2827: je 0x6f283b */ if (fZ) goto L_006f283b;
L_006f2829:; BB(0x006f2829);
    /* 006f2829: fld dword ptr [edi + 0xcc] */ FPUSH(R_F32((u32)(r_edi+0xccu)));
    /* 006f282f: fmul dword ptr [0x9cf7b0] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7b0u));
    /* 006f2835: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
L_006f283b:; BB(0x006f283b);
    /* 006f283b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f283e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f283f: ret  */ FN_RET(0x006f273c); r_esp += 4; return;
}

void f_006f2840(void) /* sub_6F2840 */
{
    FN_ENTER(0x006f2840);
    /* 006f2840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f2841: mov ebp, esp */ r_ebp = r_esp;
    /* 006f2843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2845: push 0x8efdc0 */ { u32 v = 0x8efdc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f284a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f2850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f2858: sub esp, 0x1f8 */ {  u32 a = r_esp; u32 b = 0x1f8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f285e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f2861: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 006f2864: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 006f2867: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 006f286a: movzx eax, word ptr [ecx + 0xc8] */ r_eax = (u32)R16((u32)(r_ecx+0xc8u));
    /* 006f2871: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006f2874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2875: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6f287au); f_007b4d18();
    /* 006f287a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f287b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f287e: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006f2881: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2883: je 0x6f2ff7 */ if (fZ) goto L_006f2ff7;
L_006f2889:; BB(0x006f2889);
    /* 006f2889: mov eax, edx */ r_eax = r_edx;
    /* 006f288b: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006f2891: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2893: jne 0x6f28b2 */ if (!fZ) goto L_006f28b2;
L_006f2895:; BB(0x006f2895);
    /* 006f2895: mov edx, eax */ r_edx = r_eax;
    /* 006f2897: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f289b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f28a0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f28a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f28a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f28ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006f28b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f28b1: ret  */ FN_RET(0x006f2840); r_esp += 4; return;
L_006f28b2:; BB(0x006f28b2);
    /* 006f28b2: movzx edx, word ptr [eax + 0x134] */ r_edx = (u32)R16((u32)(r_eax+0x134u));
    /* 006f28b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f28ba: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6f28bfu); f_007b4d18();
    /* 006f28bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006f28c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f28c3: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6f28c8u); f_006ea700();
    /* 006f28c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f28cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f28cd: je 0x6f2a01 */ if (fZ) goto L_006f2a01;
L_006f28d3:; BB(0x006f28d3);
    /* 006f28d3: fld dword ptr [0x96e060] */ FPUSH(R_F32((u32)(0x96e060u)));
    /* 006f28d9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f28dc: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 006f28df: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f28e2: movsx ecx, word ptr [edx + 0xc6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0xc6u));
    /* 006f28e9: fstp dword ptr [ebp - 0x200] */ W_F32((u32)(r_ebp+0xfffffe00u), ST(0)); FPOP();
    /* 006f28ef: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006f28f1: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f28f4: jne 0x6f2ff0 */ if (!fZ) goto L_006f2ff0;
L_006f28fa:; BB(0x006f28fa);
    /* 006f28fa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006f28fc:; BB(0x006f28fc);
    /* 006f28fc: fld dword ptr [0x96e05c] */ FPUSH(R_F32((u32)(0x96e05cu)));
    /* 006f2902: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2905: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 006f2908: fstp dword ptr [ebp + ebx - 0x200] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe00u), ST(0)); FPOP();
L_006f290f:; BB(0x006f290f);
    /* 006f290f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f2914u); f_008587a5();
    /* 006f2914: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 006f2917: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 006f291a: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 006f291d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006f2920: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 006f2923: fdiv dword ptr [0x96e058] */ ST(0) = ST(0) / R_F32((u32)(0x96e058u));
    /* 006f2929: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006f292b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f292e: fmul dword ptr [0x96e054] */ ST(0) = ST(0) * R_F32((u32)(0x96e054u));
    /* 006f2934: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 006f2937: fstp dword ptr [ebp + ebx - 0x204] */ W_F32((u32)(r_ebp+r_ebx+0xfffffdfcu), ST(0)); FPOP();
    /* 006f293e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6f2943u); f_008587a5();
    /* 006f2943: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 006f2946: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006f2949: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 006f294c: fdiv dword ptr [0x96e058] */ ST(0) = ST(0) / R_F32((u32)(0x96e058u));
    /* 006f2952: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006f2954: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2957: fmul dword ptr [0x96e054] */ ST(0) = ST(0) * R_F32((u32)(0x96e054u));
    /* 006f295d: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 006f2960: fst dword ptr [ebp + ebx - 0x1fc] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe04u), ST(0));
    /* 006f2967: lea edx, [ebp - 0x1f8] */ r_edx = (u32)(r_ebp+0xfffffe08u);
    /* 006f296d: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 006f2970: fsub dword ptr [ebp + ebx - 0x204] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ebx+0xfffffdfcu));
    /* 006f2977: fstp dword ptr [ebp + ebx - 0x1f8] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe08u), ST(0)); FPOP();
    /* 006f297e: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 006f2981: fsub dword ptr [ebp + ebx - 0x200] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ebx+0xfffffe00u));
    /* 006f2988: lea edi, [edx + ebx] */ r_edi = (u32)(r_edx+r_ebx);
    /* 006f298b: fstp dword ptr [ebp + ebx - 0x1f4] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe0cu), ST(0)); FPOP();
    /* 006f2992: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 006f2995: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006f2997: fstp dword ptr [ebp + ebx - 0x1f0] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe10u), ST(0)); FPOP();
    /* 006f299e: mov ecx, edi */ r_ecx = r_edi;
    /* 006f29a0: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6f29a5u); f_0083173c();
    /* 006f29a5: fcom dword ptr [0x96e050] */ fx_compare(ST(0), R_F32((u32)(0x96e050u))); 
    /* 006f29ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f29ad: fstp dword ptr [ebp + ebx - 0x1ec] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe14u), ST(0)); FPOP();
    /* 006f29b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f29b5: je 0x6f29c0 */ if (fZ) goto L_006f29c0;
L_006f29b7:; BB(0x006f29b7);
    /* 006f29b7: mov ecx, edi */ r_ecx = r_edi;
    /* 006f29b9: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6f29beu); f_0082df08();
    /* 006f29be: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006f29c0:; BB(0x006f29c0);
    /* 006f29c0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f29c3: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f29c6: jge 0x6f2a61 */ if ((fS==fO)) goto L_006f2a61;
L_006f29cc:; BB(0x006f29cc);
    /* 006f29cc: fld dword ptr [0x96e060] */ FPUSH(R_F32((u32)(0x96e060u)));
    /* 006f29d2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f29d5: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 006f29d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f29db: movsx edi, word ptr [ecx + 0xc6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006f29e2: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006f29e5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f29e7: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006f29ea: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f29ec: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f29ee: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006f29f0: fstp dword ptr [ebp + ebx - 0x200] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe00u), ST(0)); FPOP();
    /* 006f29f7: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f29fa: je 0x6f2a54 */ if (fZ) goto L_006f2a54;
L_006f29fc:; BB(0x006f29fc);
    /* 006f29fc: jmp 0x6f290f */ goto L_006f290f;
L_006f2a01:; BB(0x006f2a01);
    /* 006f2a01: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2a04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a06: je 0x6f2a2d */ if (fZ) goto L_006f2a2d;
L_006f2a08:; BB(0x006f2a08);
    /* 006f2a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2a09: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6f2a0eu); f_006ea700();
    /* 006f2a0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2a0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a11: je 0x6f2a2d */ if (fZ) goto L_006f2a2d;
L_006f2a13:; BB(0x006f2a13);
    /* 006f2a13: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2a17: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6f2a1cu); f_006ea71c();
    /* 006f2a1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2a1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a1f: je 0x6f2a2d */ if (fZ) goto L_006f2a2d;
L_006f2a21:; BB(0x006f2a21);
    /* 006f2a21: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2a24: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2a27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2a28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006f2a2a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6f2a2du); call_ind(t); }
L_006f2a2d:; BB(0x006f2a2d);
    /* 006f2a2d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2a30: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006f2a33: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f2a36: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f2a39: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f2a3d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f2a42: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f2a46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f2a49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f2a50: mov esp, ebp */ r_esp = r_ebp;
    /* 006f2a52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f2a53: ret  */ FN_RET(0x006f2840); r_esp += 4; return;
L_006f2a54:; BB(0x006f2a54);
    /* 006f2a54: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a56: je 0x6f28fc */ if (fZ) goto L_006f28fc;
L_006f2a5c:; BB(0x006f2a5c);
    /* 006f2a5c: jmp 0x6f290f */ goto L_006f290f;
L_006f2a61:; BB(0x006f2a61);
    /* 006f2a61: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2a64: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006f2a6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a6d: je 0x6f2f7e */ if (fZ) goto L_006f2f7e;
L_006f2a73:; BB(0x006f2a73);
    /* 006f2a73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a76: je 0x6f2f0c */ if (fZ) goto L_006f2f0c;
L_006f2a7c:; BB(0x006f2a7c);
    /* 006f2a7c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a7f: je 0x6f2e9a */ if (fZ) goto L_006f2e9a;
L_006f2a85:; BB(0x006f2a85);
    /* 006f2a85: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a88: je 0x6f2c6b */ if (fZ) goto L_006f2c6b;
L_006f2a8e:; BB(0x006f2a8e);
    /* 006f2a8e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2a91: jne 0x6f2b3d */ if (!fZ) goto L_006f2b3d;
L_006f2a97:; BB(0x006f2a97);
    /* 006f2a97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f2a99: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_006f2a9c:; BB(0x006f2a9c);
    /* 006f2a9c: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006f2aa3: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2aa8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2aadu); f_005caba4();
    /* 006f2aad: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006f2ab0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2ab3: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006f2ab6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2ab8: je 0x6f2b15 */ if (fZ) goto L_006f2b15;
L_006f2aba:; BB(0x006f2aba);
    /* 006f2aba: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 006f2ac1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006f2ac8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f2acb: lea ebx, [ebp - 0x204] */ r_ebx = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2ad1: lea esi, [ebp - 0x1f8] */ r_esi = (u32)(r_ebp+0xfffffe08u);
    /* 006f2ad7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ad9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f2adc: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ae1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f2ae3: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006f2ae6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2ae8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2aea: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2aef: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f2af1: lea eax, [ebx + edi] */ r_eax = (u32)(r_ebx+r_edi);
    /* 006f2af4: lea ecx, [esi + edi] */ r_ecx = (u32)(r_esi+r_edi);
    /* 006f2af7: push dword ptr [ebp + edi - 0x1ec] */ { u32 v = R32((u32)(r_ebp+r_edi+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2afe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2aff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f2b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2b03: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2b09: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6f2b0eu); f_006f3ba4();
    /* 006f2b0e: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_006f2b15:; BB(0x006f2b15);
    /* 006f2b15: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f2b1c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f2b1f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f2b22: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006f2b25: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2b28: jl 0x6f2a9c */ if ((fS!=fO)) goto L_006f2a9c;
L_006f2b2e:; BB(0x006f2b2e);
    /* 006f2b2e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2b31: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006f2b38: jmp 0x6f2d0c */ goto L_006f2d0c;
L_006f2b3d:; BB(0x006f2b3d);
    /* 006f2b3d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2b40: jne 0x6f2d0c */ if (!fZ) goto L_006f2d0c;
L_006f2b46:; BB(0x006f2b46);
    /* 006f2b46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f2b48: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_006f2b4b:; BB(0x006f2b4b);
    /* 006f2b4b: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 006f2b52: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2b57: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2b5cu); f_005caba4();
    /* 006f2b5c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006f2b5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2b62: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006f2b65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2b67: je 0x6f2bc4 */ if (fZ) goto L_006f2bc4;
L_006f2b69:; BB(0x006f2b69);
    /* 006f2b69: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 006f2b70: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f2b77: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f2b7a: lea ebx, [ebp - 0x204] */ r_ebx = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2b80: lea esi, [ebp - 0x1f8] */ r_esi = (u32)(r_ebp+0xfffffe08u);
    /* 006f2b86: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2b88: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f2b8b: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2b90: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f2b92: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006f2b95: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2b97: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2b99: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2b9e: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f2ba0: lea eax, [ebx + edi] */ r_eax = (u32)(r_ebx+r_edi);
    /* 006f2ba3: lea ecx, [esi + edi] */ r_ecx = (u32)(r_esi+r_edi);
    /* 006f2ba6: push dword ptr [ebp + edi - 0x1ec] */ { u32 v = R32((u32)(r_ebp+r_edi+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2bad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2bae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f2bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2bb2: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2bb8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6f2bbdu); f_006f3ba4();
    /* 006f2bbd: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_006f2bc4:; BB(0x006f2bc4);
    /* 006f2bc4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006f2bcb:; BB(0x006f2bcb);
    /* 006f2bcb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f2bce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f2bd1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006f2bd4: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2bd7: jge 0x6f2dfb */ if ((fS==fO)) goto L_006f2dfb;
L_006f2bdd:; BB(0x006f2bdd);
    /* 006f2bdd: mov ebx, eax */ r_ebx = r_eax;
    /* 006f2bdf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2be1: je 0x6f2b4b */ if (fZ) goto L_006f2b4b;
L_006f2be7:; BB(0x006f2be7);
    /* 006f2be7: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 006f2bee: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2bf3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2bf8u); f_005caba4();
    /* 006f2bf8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006f2bfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2bfe: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 006f2c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2c03: je 0x6f2c5f */ if (fZ) goto L_006f2c5f;
L_006f2c05:; BB(0x006f2c05);
    /* 006f2c05: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 006f2c0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f2c13: mov eax, ebx */ r_eax = r_ebx;
    /* 006f2c15: lea ebx, [ebp - 0x204] */ r_ebx = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2c1b: lea esi, [ebp - 0x1f8] */ r_esi = (u32)(r_ebp+0xfffffe08u);
    /* 006f2c21: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2c23: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f2c26: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2c2b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f2c2d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006f2c30: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2c32: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2c34: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2c39: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f2c3b: lea eax, [ebx + edi] */ r_eax = (u32)(r_ebx+r_edi);
    /* 006f2c3e: lea ecx, [esi + edi] */ r_ecx = (u32)(r_esi+r_edi);
    /* 006f2c41: push dword ptr [ebp + edi - 0x1ec] */ { u32 v = R32((u32)(r_ebp+r_edi+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2c48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2c49: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f2c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2c4d: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2c53: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6f2c58u); f_006f3ba4();
    /* 006f2c58: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_006f2c5f:; BB(0x006f2c5f);
    /* 006f2c5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f2c66: jmp 0x6f2bcb */ goto L_006f2bcb;
L_006f2c6b:; BB(0x006f2c6b);
    /* 006f2c6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f2c6d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_006f2c70:; BB(0x006f2c70);
    /* 006f2c70: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006f2c77: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2c7c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2c81u); f_005caba4();
    /* 006f2c81: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006f2c84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2c87: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006f2c8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2c8c: je 0x6f2ce9 */ if (fZ) goto L_006f2ce9;
L_006f2c8e:; BB(0x006f2c8e);
    /* 006f2c8e: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 006f2c95: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006f2c9c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f2c9f: lea ebx, [ebp - 0x204] */ r_ebx = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2ca5: lea esi, [ebp - 0x1f8] */ r_esi = (u32)(r_ebp+0xfffffe08u);
    /* 006f2cab: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2cad: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f2cb0: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2cb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f2cb7: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006f2cba: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2cbc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f2cbe: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2cc3: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f2cc5: lea eax, [ebx + edi] */ r_eax = (u32)(r_ebx+r_edi);
    /* 006f2cc8: lea ecx, [esi + edi] */ r_ecx = (u32)(r_esi+r_edi);
    /* 006f2ccb: push dword ptr [ebp + edi - 0x1ec] */ { u32 v = R32((u32)(r_ebp+r_edi+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2cd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2cd3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f2cd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2cd7: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2cdd: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6f2ce2u); f_006f3ba4();
    /* 006f2ce2: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_006f2ce9:; BB(0x006f2ce9);
    /* 006f2ce9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f2cf0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f2cf3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f2cf6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006f2cf9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2cfc: jl 0x6f2c70 */ if ((fS!=fO)) goto L_006f2c70;
L_006f2d02:; BB(0x006f2d02);
    /* 006f2d02: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2d05: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
L_006f2d0c:; BB(0x006f2d0c);
    /* 006f2d0c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2d0f: je 0x6f2d6d */ if (fZ) goto L_006f2d6d;
L_006f2d11:; BB(0x006f2d11);
    /* 006f2d11: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006f2d18: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2d1a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2d1fu); f_005caba4();
    /* 006f2d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2d20: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006f2d23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2d25: je 0x6f2d5c */ if (fZ) goto L_006f2d5c;
L_006f2d27:; BB(0x006f2d27);
    /* 006f2d27: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006f2d2e: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 006f2d35: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2d38: lea esi, [ebp - 0x204] */ r_esi = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2d3e: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2d43: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 006f2d46: mov ecx, eax */ r_ecx = r_eax;
    /* 006f2d48: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2d4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2d4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f2d50: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6f2d55u); f_006f4554();
    /* 006f2d55: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006f2d5c:; BB(0x006f2d5c);
    /* 006f2d5c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f2d63: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2d66: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
L_006f2d6d:; BB(0x006f2d6d);
    /* 006f2d6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2d6f: je 0x6f2e65 */ if (fZ) goto L_006f2e65;
L_006f2d75:; BB(0x006f2d75);
    /* 006f2d75: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2d78: je 0x6f2e48 */ if (fZ) goto L_006f2e48;
L_006f2d7e:; BB(0x006f2d7e);
    /* 006f2d7e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2d81: jl 0x6f2a01 */ if ((fS!=fO)) goto L_006f2a01;
L_006f2d87:; BB(0x006f2d87);
    /* 006f2d87: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2d8a: jle 0x6f2dc6 */ if ((fZ||fS!=fO)) goto L_006f2dc6;
L_006f2d8c:; BB(0x006f2d8c);
    /* 006f2d8c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2d8f: jne 0x6f2e0a */ if (!fZ) goto L_006f2e0a;
L_006f2d91:; BB(0x006f2d91);
    /* 006f2d91: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2d94: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006f2d97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2d99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2d9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2d9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2d9c: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2da1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2da6u); f_00814298();
    /* 006f2da6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2da9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f2dab: jl 0x6f2a01 */ if ((fS!=fO)) goto L_006f2a01;
L_006f2db1:; BB(0x006f2db1);
    /* 006f2db1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2db3: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2db8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2db9: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f2dbeu); f_00814664();
    /* 006f2dbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2dc1: jmp 0x6f2a01 */ goto L_006f2a01;
L_006f2dc6:; BB(0x006f2dc6);
    /* 006f2dc6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2dc9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006f2dcc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2dce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2dcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2dd1: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2dd6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2ddbu); f_00814298();
    /* 006f2ddb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2dde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f2de0: jl 0x6f2a01 */ if ((fS!=fO)) goto L_006f2a01;
L_006f2de6:; BB(0x006f2de6);
    /* 006f2de6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2de8: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2dee: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f2df3u); f_00814664();
    /* 006f2df3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2df6: jmp 0x6f2a01 */ goto L_006f2a01;
L_006f2dfb:; BB(0x006f2dfb);
    /* 006f2dfb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2dfe: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006f2e05: jmp 0x6f2d0c */ goto L_006f2d0c;
L_006f2e0a:; BB(0x006f2e0a);
    /* 006f2e0a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2e0d: jne 0x6f2a01 */ if (!fZ) goto L_006f2a01;
L_006f2e13:; BB(0x006f2e13);
    /* 006f2e13: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2e16: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006f2e19: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2e1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e1e: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e23: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2e28u); f_00814298();
    /* 006f2e28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2e2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f2e2d: jl 0x6f2a01 */ if ((fS!=fO)) goto L_006f2a01;
L_006f2e33:; BB(0x006f2e33);
    /* 006f2e33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e35: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e3b: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f2e40u); f_00814664();
    /* 006f2e40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2e43: jmp 0x6f2a01 */ goto L_006f2a01;
L_006f2e48:; BB(0x006f2e48);
    /* 006f2e48: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2e4b: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006f2e4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2e50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e53: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e58: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2e5du); f_00814298();
    /* 006f2e5d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2e60: jmp 0x6f2a01 */ goto L_006f2a01;
L_006f2e65:; BB(0x006f2e65);
    /* 006f2e65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f2e68: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006f2e6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2e6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e70: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e75: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2e7au); f_00814298();
    /* 006f2e7a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2e7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f2e7f: jl 0x6f2a01 */ if ((fS!=fO)) goto L_006f2a01;
L_006f2e85:; BB(0x006f2e85);
    /* 006f2e85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e87: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2e8d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f2e92u); f_00814664();
    /* 006f2e92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2e95: jmp 0x6f2a01 */ goto L_006f2a01;
L_006f2e9a:; BB(0x006f2e9a);
    /* 006f2e9a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006f2ea1: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ea6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2eabu); f_005caba4();
    /* 006f2eab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2eac: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f2eaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2eb1: je 0x6f2ef6 */ if (fZ) goto L_006f2ef6;
L_006f2eb3:; BB(0x006f2eb3);
    /* 006f2eb3: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 006f2eba: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006f2ec1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f2ec4: lea edx, [ebp - 0x204] */ r_edx = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2eca: lea eax, [ebp - 0x1f8] */ r_eax = (u32)(r_ebp+0xfffffe08u);
    /* 006f2ed0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ed2: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ed7: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2edc: push dword ptr [ebp - 0x1ec] */ { u32 v = R32((u32)(r_ebp+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2ee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ee3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2ee4: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2eea: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6f2eefu); f_006f3ba4();
    /* 006f2eef: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_006f2ef6:; BB(0x006f2ef6);
    /* 006f2ef6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f2efd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2f00: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006f2f07: jmp 0x6f2d0c */ goto L_006f2d0c;
L_006f2f0c:; BB(0x006f2f0c);
    /* 006f2f0c: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006f2f13: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2f18: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2f1du); f_005caba4();
    /* 006f2f1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2f1e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f2f21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2f23: je 0x6f2f68 */ if (fZ) goto L_006f2f68;
L_006f2f25:; BB(0x006f2f25);
    /* 006f2f25: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006f2f2c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006f2f33: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f2f36: lea edx, [ebp - 0x204] */ r_edx = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2f3c: lea eax, [ebp - 0x1f8] */ r_eax = (u32)(r_ebp+0xfffffe08u);
    /* 006f2f42: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2f44: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2f49: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 006f2f4e: push dword ptr [ebp - 0x1ec] */ { u32 v = R32((u32)(r_ebp+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2f55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2f56: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2f5c: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6f2f61u); f_006f3ba4();
    /* 006f2f61: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006f2f68:; BB(0x006f2f68);
    /* 006f2f68: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f2f6f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2f72: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006f2f79: jmp 0x6f2d0c */ goto L_006f2d0c;
L_006f2f7e:; BB(0x006f2f7e);
    /* 006f2f7e: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 006f2f85: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2f8a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f2f8fu); f_005caba4();
    /* 006f2f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f2f90: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f2f93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f2f95: je 0x6f2fda */ if (fZ) goto L_006f2fda;
L_006f2f97:; BB(0x006f2f97);
    /* 006f2f97: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 006f2f9e: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006f2fa5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006f2fa8: lea edx, [ebp - 0x204] */ r_edx = (u32)(r_ebp+0xfffffdfcu);
    /* 006f2fae: lea eax, [ebp - 0x1f8] */ r_eax = (u32)(r_ebp+0xfffffe08u);
    /* 006f2fb4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2fb6: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2fbb: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2fc0: push dword ptr [ebp - 0x1ec] */ { u32 v = R32((u32)(r_ebp+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2fc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2fc8: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f2fce: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6f2fd3u); f_006f3ba4();
    /* 006f2fd3: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_006f2fda:; BB(0x006f2fda);
    /* 006f2fda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f2fe1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f2fe4: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006f2feb: jmp 0x6f2d0c */ goto L_006f2d0c;
L_006f2ff0:; BB(0x006f2ff0);
    /* 006f2ff0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006f2ff2: jmp 0x6f290f */ goto L_006f290f;
L_006f2ff7:; BB(0x006f2ff7);
    /* 006f2ff7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f2ffb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f3000: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f3004: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f3007: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f300e: mov esp, ebp */ r_esp = r_ebp;
    /* 006f3010: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f3011: ret  */ FN_RET(0x006f2840); r_esp += 4; return;
}

