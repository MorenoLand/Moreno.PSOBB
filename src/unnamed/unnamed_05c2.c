#include "protos.h"

void f_005c2014(void) /* sub_5C2014 */
{
    FN_ENTER(0x005c2014);
    /* 005c2014: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2015: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2017: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2019: push 0x8d96e0 */ { u32 v = 0x8d96e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c201e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2025: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c202c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c202f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c2032: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c2035: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c2038: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c203b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c203e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2041: mov dword ptr [ecx], 0xb0bf34 */ W32((u32)(r_ecx), 0xb0bf34u);
    /* 005c2047: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c204e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5c2053u); f_008171e8();
    /* 005c2053: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2056: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c205d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c205f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2060: ret  */ FN_RET(0x005c2014); r_esp += 4; return;
}

void f_005c2064(void) /* sub_5C2064 */
{
    FN_ENTER(0x005c2064);
    /* 005c2064: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2065: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c2067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2069: call 0x5c2088 */ r_esp -= 4; W32(r_esp, 0x5c206eu); f_005c2088();
    /* 005c206e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c2072: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2074: jne 0x5c207a */ if (!fZ) goto L_005c207a;
L_005c2076:; BB(0x005c2076);
    /* 005c2076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2077: ret 4 */ FN_RET(0x005c2064); r_esp += 8; return;
L_005c207a:; BB(0x005c207a);
    /* 005c207a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c207b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c2080u); f_005c2f74();
    /* 005c2080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2082: ret 4 */ FN_RET(0x005c2064); r_esp += 8; return;
}

void f_005c2088(void) /* sub_5C2088 */
{
    FN_ENTER(0x005c2088);
    /* 005c2088: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2089: mov ebp, esp */ r_ebp = r_esp;
    /* 005c208b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c208d: push 0x8d96fc */ { u32 v = 0x8d96fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2092: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2099: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c20a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c20a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c20a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c20a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c20ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c20af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c20b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20b5: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 005c20b8: mov dword ptr [ecx], 0xb0bf80 */ W32((u32)(r_ecx), 0xb0bf80u);
    /* 005c20be: mov dword ptr [eax*4 + 0xa8d7cc], 0 */ W32((u32)(r_eax*4+0xa8d7ccu), 0x0u);
    /* 005c20c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c20d0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5c20d5u); f_008171e8();
    /* 005c20d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c20d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c20df: mov esp, ebp */ r_esp = r_ebp;
    /* 005c20e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c20e2: ret  */ FN_RET(0x005c2088); r_esp += 4; return;
}

void f_005c20e4(void)
{
    FN_ENTER(0x005c20e4);
    /* 005c20e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c20e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005c20e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c20e9: push 0x8d9724 */ { u32 v = 0x8d9724u; r_esp -= 4; W32(r_esp, v); }
    /* 005c20ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c20f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c20f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c20fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c20ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c2102: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c2105: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c2108: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c210b: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2110: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c2117: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c211cu); f_005caba4();
    /* 005c211c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c211d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c2120: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2122: je 0x5c215b */ if (fZ) goto L_005c215b;
L_005c2124:; BB(0x005c2124);
    /* 005c2124: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c212b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2132: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2135: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c213b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c213e: call 0x5c2160 */ r_esp -= 4; W32(r_esp, 0x5c2143u); f_005c2160();
    /* 005c2143: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2146: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c214d:; BB(0x005c214d);
    /* 005c214d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2150: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2157: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c215a: ret  */ FN_RET(0x005c20e4); r_esp += 4; return;
L_005c215b:; BB(0x005c215b);
    /* 005c215b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c215d: jmp 0x5c214d */ goto L_005c214d;
}

void f_005c2160(void) /* sub_5C2160 */
{
    FN_ENTER(0x005c2160);
    /* 005c2160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2161: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2165: push 0x8d9740 */ { u32 v = 0x8d9740u; r_esp -= 4; W32(r_esp, v); }
    /* 005c216a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2171: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c2178: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c217b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c217e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c2181: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c2184: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c2187: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c218a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c218d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c2190: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c2193: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x5c2198u); f_007ba278();
    /* 005c2198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c219f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c21a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c21a5: mov dword ptr [ecx], 0xb0be80 */ W32((u32)(r_ecx), 0xb0be80u);
    /* 005c21ab: mov eax, dword ptr [0x9c1fd4] */ r_eax = R32((u32)(0x9c1fd4u));
    /* 005c21b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c21b1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c21b4: call dword ptr [0xb0be94] */ { u32 t = R32((u32)(0xb0be94u)); r_esp -= 4; W32(r_esp, 0x5c21bau); call_ind(t); }
    /* 005c21ba: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c21bd: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 005c21c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c21c3: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 005c21c9: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 005c21cf: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c21d5: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 005c21d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c21dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c21e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005c21e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c21e6: ret 8 */ FN_RET(0x005c2160); r_esp += 12; return;
}

void f_005c21ec(void) /* sub_5C21EC */
{
    FN_ENTER(0x005c21ec);
    /* 005c21ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c21ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c21ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c21f0: mov ebx, eax */ r_ebx = r_eax;
    /* 005c21f2: mov esi, ecx */ r_esi = r_ecx;
L_005c21f4:; BB(0x005c21f4);
    /* 005c21f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c21f5: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005c21f7: mov ecx, esi */ r_ecx = r_esi;
    /* 005c21f9: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5c21fcu); call_ind(t); }
    /* 005c21fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c21fe: je 0x5c2234 */ if (fZ) goto L_005c2234;
L_005c2200:; BB(0x005c2200);
    /* 005c2200: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 005c2206: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 005c220c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c220e: jne 0x5c2217 */ if (!fZ) goto L_005c2217;
L_005c2210:; BB(0x005c2210);
    /* 005c2210: mov edx, 1 */ r_edx = 0x1u;
    /* 005c2215: jmp 0x5c2219 */ goto L_005c2219;
L_005c2217:; BB(0x005c2217);
    /* 005c2217: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c2219:; BB(0x005c2219);
    /* 005c2219: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c221b: jl 0x5c2234 */ if ((fS!=fO)) goto L_005c2234;
L_005c221d:; BB(0x005c221d);
    /* 005c221d: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2220: jge 0x5c2234 */ if ((fS==fO)) goto L_005c2234;
L_005c2222:; BB(0x005c2222);
    /* 005c2222: mov ecx, dword ptr [ebx*4 + 0xa8d7cc] */ r_ecx = R32((u32)(r_ebx*4+0xa8d7ccu));
    /* 005c2229: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c222b: je 0x5c2234 */ if (fZ) goto L_005c2234;
L_005c222d:; BB(0x005c222d);
    /* 005c222d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c222e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c222f: call 0x5c2240 */ r_esp -= 4; W32(r_esp, 0x5c2234u); f_005c2240();
L_005c2234:; BB(0x005c2234);
    /* 005c2234: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c2237: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c223a: jl 0x5c21f4 */ if ((fS!=fO)) goto L_005c21f4;
L_005c223c:; BB(0x005c223c);
    /* 005c223c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c223d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c223e: ret  */ FN_RET(0x005c21ec); r_esp += 4; return;
}

void f_005c2240(void) /* sub_5C2240 */
{
    FN_ENTER(0x005c2240);
    /* 005c2240: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c2244: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c2247: jl 0x5c2257 */ if ((fS!=fO)) goto L_005c2257;
L_005c2249:; BB(0x005c2249);
    /* 005c2249: add dword ptr [ecx + 0x1c], 1 */ { u32 ad = (u32)(r_ecx+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c224d: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005c2250: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c2254: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
L_005c2257:; BB(0x005c2257);
    /* 005c2257: ret 8 */ FN_RET(0x005c2240); r_esp += 12; return;
}

void f_005c225c(void) /* sub_5C225C */
{
    FN_ENTER(0x005c225c);
    /* 005c225c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c225d: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2260: mov edi, ecx */ r_edi = r_ecx;
    /* 005c2262: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005c2264: mov ecx, edi */ r_ecx = r_edi;
    /* 005c2266: push dword ptr [edi + 0x68] */ { u32 v = R32((u32)(r_edi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2269: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c226e: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5c2271u); call_ind(t); }
    /* 005c2271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2273: je 0x5c2418 */ if (fZ) goto L_005c2418;
L_005c2279:; BB(0x005c2279);
    /* 005c2279: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005c227e: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005c2284: mov dword ptr [esp], 0x3f333333 */ W32((u32)(r_esp), 0x3f333333u);
    /* 005c228b: mov dword ptr [esp + 4], 0x3f000000 */ W32((u32)(r_esp+0x4u), 0x3f000000u);
    /* 005c2293: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005c2298: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c229d: mov dword ptr [esp + 8], 0x3f000000 */ W32((u32)(r_esp+0x8u), 0x3f000000u);
    /* 005c22a5: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 005c22ab: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 005c22b1: mov dword ptr [esp + 0xc], 0x3f000000 */ W32((u32)(r_esp+0xcu), 0x3f000000u);
    /* 005c22b9: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 005c22bf: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 005c22c5: mov dword ptr [esp + 0x10], 0x3e4ccccd */ W32((u32)(r_esp+0x10u), 0x3e4ccccdu);
    /* 005c22cd: mov dword ptr [esp + 0x14], 0x3f000000 */ W32((u32)(r_esp+0x14u), 0x3f000000u);
    /* 005c22d5: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 005c22db: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 005c22e1: mov dword ptr [esp + 0x18], 0x3f000000 */ W32((u32)(r_esp+0x18u), 0x3f000000u);
    /* 005c22e9: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 005c22ef: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005c22f5: mov dword ptr [esp + 0x1c], 0x3f000000 */ W32((u32)(r_esp+0x1cu), 0x3f000000u);
    /* 005c22fd: mov dword ptr [esp + 0x20], 0x3f000000 */ W32((u32)(r_esp+0x20u), 0x3f000000u);
    /* 005c2305: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 005c230b: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 005c2311: mov dword ptr [esp + 0x24], 0x3f000000 */ W32((u32)(r_esp+0x24u), 0x3f000000u);
    /* 005c2319: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 005c231f: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 005c2327: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005c232c: mov dword ptr [esp + 0x2c], 0x3f800000 */ W32((u32)(r_esp+0x2cu), 0x3f800000u);
    /* 005c2334: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2339: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005c233e: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x5c2343u); f_0082d6fc();
    /* 005c2343: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2346: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 005c234c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c234e: je 0x5c241d */ if (fZ) goto L_005c241d;
L_005c2354:; BB(0x005c2354);
    /* 005c2354: jle 0x5c2382 */ if ((fZ||fS!=fO)) goto L_005c2382;
L_005c2356:; BB(0x005c2356);
    /* 005c2356: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2359: jle 0x5c2365 */ if ((fZ||fS!=fO)) goto L_005c2365;
L_005c235b:; BB(0x005c235b);
    /* 005c235b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c235e: jl 0x5c2372 */ if ((fS!=fO)) goto L_005c2372;
L_005c2360:; BB(0x005c2360);
    /* 005c2360: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2363: jg 0x5c2382 */ if ((!fZ&&fS==fO)) goto L_005c2382;
L_005c2365:; BB(0x005c2365);
    /* 005c2365: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005c2369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c236a: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5c236fu); f_0082d710();
    /* 005c236f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2370: jmp 0x5c2382 */ goto L_005c2382;
L_005c2372:; BB(0x005c2372);
    /* 005c2372: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2375: jne 0x5c2382 */ if (!fZ) goto L_005c2382;
L_005c2377:; BB(0x005c2377);
    /* 005c2377: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005c237b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c237c: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5c2381u); f_0082d710();
    /* 005c2381: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c2382:; BB(0x005c2382);
    /* 005c2382: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c2387u); f_0082d7b0();
    /* 005c2387: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 005c238a: fmul dword ptr [0x92ba1c] */ ST(0) = ST(0) * R_F32((u32)(0x92ba1cu));
    /* 005c2390: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005c2394: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c2397: mov ecx, edi */ r_ecx = r_edi;
    /* 005c2399: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c239eu); f_0082d838();
    /* 005c239e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c23a1: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005c23a5: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005c23a8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005c23ac: mov dword ptr [esp + 4], 0x40400000 */ W32((u32)(r_esp+0x4u), 0x40400000u);
    /* 005c23b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c23b6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5c23bbu); f_0082fa0c();
    /* 005c23bb: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c23c1: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5c23c6u); f_0082e1e8();
    /* 005c23c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c23c7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c23ccu); f_0082da80();
    /* 005c23cc: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005c23d1: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 005c23d7: mov ecx, dword ptr [0xaab508] */ r_ecx = R32((u32)(0xaab508u));
    /* 005c23dd: mov edi, dword ptr [0xaab50c] */ r_edi = R32((u32)(0xaab50cu));
    /* 005c23e3: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005c23e8: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 005c23ed: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 005c23f3: mov dword ptr [0xaf0370], ecx */ W32((u32)(0xaf0370u), r_ecx);
    /* 005c23f9: mov dword ptr [0xaf0374], edi */ W32((u32)(0xaf0374u), r_edi);
    /* 005c23ff: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 005c2404: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 005c2409: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 005c240e: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005c2413: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_005c2418:; BB(0x005c2418);
    /* 005c2418: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c241b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c241c: ret  */ FN_RET(0x005c225c); r_esp += 4; return;
L_005c241d:; BB(0x005c241d);
    /* 005c241d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c2420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2421: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5c2426u); f_0082d710();
    /* 005c2426: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2427: jmp 0x5c2382 */ goto L_005c2382;
}

void f_005c242c(void) /* sub_5C242C */
{
    FN_ENTER(0x005c242c);
    /* 005c242c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c242d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c242f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c2431: call 0x5c2460 */ r_esp -= 4; W32(r_esp, 0x5c2436u); f_005c2460();
    /* 005c2436: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 005c243c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c243e: jl 0x5c2453 */ if ((fS!=fO)) goto L_005c2453;
L_005c2440:; BB(0x005c2440);
    /* 005c2440: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c2445: jle 0x5c2451 */ if ((fZ||fS!=fO)) goto L_005c2451;
L_005c2447:; BB(0x005c2447);
    /* 005c2447: mov dword ptr [ebp + 0x8c], 0xff */ W32((u32)(r_ebp+0x8cu), 0xffu);
L_005c2451:; BB(0x005c2451);
    /* 005c2451: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2452: ret  */ FN_RET(0x005c242c); r_esp += 4; return;
L_005c2453:; BB(0x005c2453);
    /* 005c2453: mov dword ptr [ebp + 0x8c], 0 */ W32((u32)(r_ebp+0x8cu), 0x0u);
    /* 005c245d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c245e: ret  */ FN_RET(0x005c242c); r_esp += 4; return;
}

void f_005c2460(void) /* sub_5C2460 */
{
    FN_ENTER(0x005c2460);
    /* 005c2460: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 005c2466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2468: jl 0x5c247c */ if ((fS!=fO)) goto L_005c247c;
L_005c246a:; BB(0x005c246a);
    /* 005c246a: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c246f: jl 0x5c247b */ if ((fS!=fO)) goto L_005c247b;
L_005c2471:; BB(0x005c2471);
    /* 005c2471: mov dword ptr [ecx + 0x84], 0xff */ W32((u32)(r_ecx+0x84u), 0xffu);
L_005c247b:; BB(0x005c247b);
    /* 005c247b: ret  */ FN_RET(0x005c2460); r_esp += 4; return;
L_005c247c:; BB(0x005c247c);
    /* 005c247c: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 005c2486: ret  */ FN_RET(0x005c2460); r_esp += 4; return;
}

void f_005c2488(void)
{
    FN_ENTER(0x005c2488);
    /* 005c2488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2489: mov ebp, esp */ r_ebp = r_esp;
    /* 005c248b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c248d: push 0x8d9768 */ { u32 v = 0x8d9768u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2492: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2499: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c24a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c24a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c24a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c24a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c24ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c24af: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005c24b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c24bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c24c0u); f_005caba4();
    /* 005c24c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c24c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c24c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c24c6: je 0x5c24ff */ if (fZ) goto L_005c24ff;
L_005c24c8:; BB(0x005c24c8);
    /* 005c24c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c24cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c24d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c24d9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c24df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c24e2: call 0x5c2504 */ r_esp -= 4; W32(r_esp, 0x5c24e7u); f_005c2504();
    /* 005c24e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c24ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c24f1:; BB(0x005c24f1);
    /* 005c24f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c24f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c24fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005c24fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c24fe: ret  */ FN_RET(0x005c2488); r_esp += 4; return;
L_005c24ff:; BB(0x005c24ff);
    /* 005c24ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2501: jmp 0x5c24f1 */ goto L_005c24f1;
}

void f_005c2504(void) /* sub_5C2504 */
{
    FN_ENTER(0x005c2504);
    /* 005c2504: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2505: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c2507: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c250b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c250f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2511: call 0x5c2160 */ r_esp -= 4; W32(r_esp, 0x5c2516u); f_005c2160();
    /* 005c2516: mov dword ptr [ebx], 0xb0bebc */ W32((u32)(r_ebx), 0xb0bebcu);
    /* 005c251c: mov edx, dword ptr [0x9c1fd8] */ r_edx = R32((u32)(0x9c1fd8u));
    /* 005c2522: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005c2525: mov eax, ebx */ r_eax = r_ebx;
    /* 005c2527: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2528: ret 8 */ FN_RET(0x005c2504); r_esp += 12; return;
}

void f_005c252c(void) /* sub_5C252C */
{
    FN_ENTER(0x005c252c);
    /* 005c252c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c252d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c252e: mov esi, ecx */ r_esi = r_ecx;
    /* 005c2530: fld dword ptr [esi + 0x70] */ FPUSH(R_F32((u32)(r_esi+0x70u)));
    /* 005c2533: fcomp dword ptr [0x92ba10] */ fx_compare(ST(0), R_F32((u32)(0x92ba10u))); FPOP();
    /* 005c2539: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c253b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c253c: jb 0x5c2545 */ if (fC) goto L_005c2545;
L_005c253e:; BB(0x005c253e);
    /* 005c253e: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005c2543: jmp 0x5c2547 */ goto L_005c2547;
L_005c2545:; BB(0x005c2545);
    /* 005c2545: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005c2547:; BB(0x005c2547);
    /* 005c2547: movzx eax, word ptr [esi + 0x8c] */ r_eax = (u32)R16((u32)(r_esi+0x8cu));
    /* 005c254e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c254f: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x5c2554u); f_00816eec();
    /* 005c2554: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2555: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c2558: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c255a: jne 0x5c25a6 */ if (!fZ) goto L_005c25a6;
L_005c255c:; BB(0x005c255c);
    /* 005c255c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005c255e:; BB(0x005c255e);
    /* 005c255e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c255f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005c2561: mov ecx, esi */ r_ecx = r_esi;
    /* 005c2563: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5c2566u); call_ind(t); }
    /* 005c2566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2568: je 0x5c259e */ if (fZ) goto L_005c259e;
L_005c256a:; BB(0x005c256a);
    /* 005c256a: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 005c2570: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 005c2576: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2578: jne 0x5c2581 */ if (!fZ) goto L_005c2581;
L_005c257a:; BB(0x005c257a);
    /* 005c257a: mov edx, 1 */ r_edx = 0x1u;
    /* 005c257f: jmp 0x5c2583 */ goto L_005c2583;
L_005c2581:; BB(0x005c2581);
    /* 005c2581: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c2583:; BB(0x005c2583);
    /* 005c2583: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c2585: jl 0x5c259e */ if ((fS!=fO)) goto L_005c259e;
L_005c2587:; BB(0x005c2587);
    /* 005c2587: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c258a: jge 0x5c259e */ if ((fS==fO)) goto L_005c259e;
L_005c258c:; BB(0x005c258c);
    /* 005c258c: mov ecx, dword ptr [ebx*4 + 0xa8d7cc] */ r_ecx = R32((u32)(r_ebx*4+0xa8d7ccu));
    /* 005c2593: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2595: je 0x5c259e */ if (fZ) goto L_005c259e;
L_005c2597:; BB(0x005c2597);
    /* 005c2597: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2599: call 0x5c2240 */ r_esp -= 4; W32(r_esp, 0x5c259eu); f_005c2240();
L_005c259e:; BB(0x005c259e);
    /* 005c259e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c25a1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c25a4: jl 0x5c255e */ if ((fS!=fO)) goto L_005c255e;
L_005c25a6:; BB(0x005c25a6);
    /* 005c25a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c25a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c25a8: ret  */ FN_RET(0x005c252c); r_esp += 4; return;
}

void f_005c25ac(void) /* sub_5C25AC */
{
    FN_ENTER(0x005c25ac);
    /* 005c25ac: call 0x5c25c4 */ r_esp -= 4; W32(r_esp, 0x5c25b1u); f_005c25c4();
    /* 005c25b1: push 0x92baa0 */ { u32 v = 0x92baa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c25b6: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 005c25bb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c25c0u); f_0061cdb0();
    /* 005c25c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c25c3: ret  */ FN_RET(0x005c25ac); r_esp += 4; return;
}

void f_005c25c4(void) /* sub_5C25C4 */
{
    FN_ENTER(0x005c25c4);
    /* 005c25c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c25c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c25c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c25c9: call 0x5c261c */ r_esp -= 4; W32(r_esp, 0x5c25ceu); f_005c261c();
    /* 005c25ce: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 005c25d1: fcomp dword ptr [0x92ba0c] */ fx_compare(ST(0), R_F32((u32)(0x92ba0cu))); FPOP();
    /* 005c25d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c25d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c25da: jb 0x5c25f0 */ if (fC) goto L_005c25f0;
L_005c25dc:; BB(0x005c25dc);
    /* 005c25dc: push 0x92ba68 */ { u32 v = 0x92ba68u; r_esp -= 4; W32(r_esp, v); }
    /* 005c25e1: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c25e6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c25ebu); f_0061cdb0();
    /* 005c25eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c25ee: jmp 0x5c2602 */ goto L_005c2602;
L_005c25f0:; BB(0x005c25f0);
    /* 005c25f0: push 0x92ba7c */ { u32 v = 0x92ba7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c25f5: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c25fa: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c25ffu); f_0061cdb0();
    /* 005c25ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c2602:; BB(0x005c2602);
    /* 005c2602: push dword ptr [ebx + 0x8c] */ { u32 v = R32((u32)(r_ebx+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2608: push 0x92ba90 */ { u32 v = 0x92ba90u; r_esp -= 4; W32(r_esp, v); }
    /* 005c260d: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2612: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c2617u); f_0061cdb0();
    /* 005c2617: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c261a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c261b: ret  */ FN_RET(0x005c25c4); r_esp += 4; return;
}

void f_005c261c(void) /* sub_5C261C */
{
    FN_ENTER(0x005c261c);
    /* 005c261c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c261d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c261f: push 0x92ba40 */ { u32 v = 0x92ba40u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2624: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2629: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c262eu); f_0061cdb0();
    /* 005c262e: push dword ptr [ebp + 0x84] */ { u32 v = R32((u32)(r_ebp+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2634: push 0x92ba44 */ { u32 v = 0x92ba44u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2639: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 005c263e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c2643u); f_0061cdb0();
    /* 005c2643: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2646: mov eax, dword ptr [ebp + 0x88] */ r_eax = R32((u32)(r_ebp+0x88u));
    /* 005c264c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c264e: jne 0x5c2664 */ if (!fZ) goto L_005c2664;
L_005c2650:; BB(0x005c2650);
    /* 005c2650: push 0x92ba50 */ { u32 v = 0x92ba50u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2655: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 005c265a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c265fu); f_0061cdb0();
    /* 005c265f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2663: ret  */ FN_RET(0x005c261c); r_esp += 4; return;
L_005c2664:; BB(0x005c2664);
    /* 005c2664: push 0x92ba5c */ { u32 v = 0x92ba5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2669: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 005c266e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c2673u); f_0061cdb0();
    /* 005c2673: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2676: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2677: ret  */ FN_RET(0x005c261c); r_esp += 4; return;
}

void f_005c2678(void)
{
    FN_ENTER(0x005c2678);
    /* 005c2678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2679: mov ebp, esp */ r_ebp = r_esp;
    /* 005c267b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c267d: push 0x8d97ba */ { u32 v = 0x8d97bau; r_esp -= 4; W32(r_esp, v); }
    /* 005c2682: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2689: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c2690: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2693: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c2696: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c2699: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c269c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c269f: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c26a4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c26ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c26b0u); f_005caba4();
    /* 005c26b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c26b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c26b6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c26b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c26bb: je 0x5c275b */ if (fZ) goto L_005c275b;
L_005c26c1:; BB(0x005c26c1);
    /* 005c26c1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005c26c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c26cf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c26d2: mov ecx, eax */ r_ecx = r_eax;
    /* 005c26d4: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 005c26d9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c26dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c26dd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c26e0: call 0x5c2504 */ r_esp -= 4; W32(r_esp, 0x5c26e5u); f_005c2504();
    /* 005c26e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c26ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c26ef: mov dword ptr [ecx], 0xb0bef8 */ W32((u32)(r_ecx), 0xb0bef8u);
    /* 005c26f5: mov eax, dword ptr [0x9c1fdc] */ r_eax = R32((u32)(0x9c1fdcu));
    /* 005c26fa: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c26fd: call 0x5c2764 */ r_esp -= 4; W32(r_esp, 0x5c2702u); f_005c2764();
    /* 005c2702: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005c2709: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c270b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c2710u); f_005caba4();
    /* 005c2710: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2711: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c2714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2716: je 0x5c2740 */ if (fZ) goto L_005c2740;
L_005c2718:; BB(0x005c2718);
    /* 005c2718: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005c271f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c2726: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 005c272d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2731: mov ecx, eax */ r_ecx = r_eax;
    /* 005c2733: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2734: call 0x5c27ec */ r_esp -= 4; W32(r_esp, 0x5c2739u); f_005c27ec();
    /* 005c2739: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c2740:; BB(0x005c2740);
    /* 005c2740: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005c2747:; BB(0x005c2747);
    /* 005c2747: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c274a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c274d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2750: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2757: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2759: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c275a: ret  */ FN_RET(0x005c2678); r_esp += 4; return;
L_005c275b:; BB(0x005c275b);
    /* 005c275b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c275d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c2760: jmp 0x5c2747 */ goto L_005c2747;
}

void f_005c2764(void) /* sub_5C2764 */
{
    FN_ENTER(0x005c2764);
    /* 005c2764: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2767: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 005c276a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005c276d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005c2771: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c2776: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c277b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005c277f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005c2783: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c2787: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005c278a: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 005c278f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005c2793: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2796: je 0x5c27ba */ if (fZ) goto L_005c27ba;
L_005c2798:; BB(0x005c2798);
    /* 005c2798: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c279b: jne 0x5c27a5 */ if (!fZ) goto L_005c27a5;
L_005c279d:; BB(0x005c279d);
    /* 005c279d: fld dword ptr [0x92ba00] */ FPUSH(R_F32((u32)(0x92ba00u)));
    /* 005c27a3: jmp 0x5c27c0 */ goto L_005c27c0;
L_005c27a5:; BB(0x005c27a5);
    /* 005c27a5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c27a8: jne 0x5c27b2 */ if (!fZ) goto L_005c27b2;
L_005c27aa:; BB(0x005c27aa);
    /* 005c27aa: fld dword ptr [0x92ba04] */ FPUSH(R_F32((u32)(0x92ba04u)));
    /* 005c27b0: jmp 0x5c27c0 */ goto L_005c27c0;
L_005c27b2:; BB(0x005c27b2);
    /* 005c27b2: fld dword ptr [0x92ba08] */ FPUSH(R_F32((u32)(0x92ba08u)));
    /* 005c27b8: jmp 0x5c27c0 */ goto L_005c27c0;
L_005c27ba:; BB(0x005c27ba);
    /* 005c27ba: fld dword ptr [0x92b9fc] */ FPUSH(R_F32((u32)(0x92b9fcu)));
L_005c27c0:; BB(0x005c27c0);
    /* 005c27c0: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005c27c4: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005c27c8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005c27ca: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005c27cd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005c27d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c27d6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005c27da: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005c27de: fistp dword ptr [ecx + 0x98] */ W32((u32)(r_ecx+0x98u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c27e4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005c27e7: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c27ea: ret  */ FN_RET(0x005c2764); r_esp += 4; return;
}

void f_005c27ec(void) /* sub_5C27EC */
{
    FN_ENTER(0x005c27ec);
    /* 005c27ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c27ed: mov edi, ecx */ r_edi = r_ecx;
    /* 005c27ef: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c27f3: mov ecx, edi */ r_ecx = r_edi;
    /* 005c27f5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5c27fau); f_008193cc();
    /* 005c27fa: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 005c27ff: mov dword ptr [edi], 0xb0bf34 */ W32((u32)(r_edi), 0xb0bf34u);
    /* 005c2805: mov word ptr [edi + 0x28], dx */ W16((u32)(r_edi+0x28u), (u16)r_edx);
    /* 005c2809: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c280b: mov dword ptr [edi + 0x1c], 0x96 */ W32((u32)(r_edi+0x1cu), 0x96u);
    /* 005c2812: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005c2815: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005c2818: mov eax, edi */ r_eax = r_edi;
    /* 005c281a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c281b: ret 8 */ FN_RET(0x005c27ec); r_esp += 12; return;
}

void f_005c2820(void)
{
    FN_ENTER(0x005c2820);
    /* 005c2820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2821: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2825: push 0x8d97e0 */ { u32 v = 0x8d97e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c282a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2831: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c2838: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c283b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c283e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c2841: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c2844: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c2847: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c284c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c2853: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c2858u); f_005caba4();
    /* 005c2858: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2859: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c285c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c285e: je 0x5c2897 */ if (fZ) goto L_005c2897;
L_005c2860:; BB(0x005c2860);
    /* 005c2860: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c2867: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c286e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2871: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2877: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c287a: call 0x5c289c */ r_esp -= 4; W32(r_esp, 0x5c287fu); f_005c289c();
    /* 005c287f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2882: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c2889:; BB(0x005c2889);
    /* 005c2889: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c288c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2893: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2896: ret  */ FN_RET(0x005c2820); r_esp += 4; return;
L_005c2897:; BB(0x005c2897);
    /* 005c2897: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2899: jmp 0x5c2889 */ goto L_005c2889;
}

void f_005c289c(void) /* sub_5C289C */
{
    FN_ENTER(0x005c289c);
    /* 005c289c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c289d: mov ebp, esp */ r_ebp = r_esp;
    /* 005c289f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c28a1: push 0x8d9816 */ { u32 v = 0x8d9816u; r_esp -= 4; W32(r_esp, v); }
    /* 005c28a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c28ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c28ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c28b4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c28b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c28ba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c28bd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c28c0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c28c3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c28c6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c28c9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c28cc: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c28cf: call 0x5c2504 */ r_esp -= 4; W32(r_esp, 0x5c28d4u); f_005c2504();
    /* 005c28d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c28db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c28de: mov dword ptr [ecx], 0xb0bef8 */ W32((u32)(r_ecx), 0xb0bef8u);
    /* 005c28e4: mov eax, dword ptr [0x9c1fdc] */ r_eax = R32((u32)(0x9c1fdcu));
    /* 005c28e9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c28ec: call 0x5c2764 */ r_esp -= 4; W32(r_esp, 0x5c28f1u); f_005c2764();
    /* 005c28f1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005c28f8: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c28fa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c28ffu); f_005caba4();
    /* 005c28ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2900: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c2903: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2905: je 0x5c292f */ if (fZ) goto L_005c292f;
L_005c2907:; BB(0x005c2907);
    /* 005c2907: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005c290e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c2915: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 005c291c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c291f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2920: mov ecx, eax */ r_ecx = r_eax;
    /* 005c2922: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2923: call 0x5c27ec */ r_esp -= 4; W32(r_esp, 0x5c2928u); f_005c27ec();
    /* 005c2928: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c292f:; BB(0x005c292f);
    /* 005c292f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2932: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c2935: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2937: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 005c293d: mov dword ptr [eax], 0xb0bf44 */ W32((u32)(r_eax), 0xb0bf44u);
    /* 005c2943: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 005c2949: mov dword ptr [eax + 0xa4], edx */ W32((u32)(r_eax+0xa4u), r_edx);
    /* 005c294f: mov dword ptr [eax + 0xa8], edx */ W32((u32)(r_eax+0xa8u), r_edx);
    /* 005c2955: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 005c295b: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 005c2961: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 005c2967: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 005c296d: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 005c2973: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 005c2979: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 005c297f: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 005c2985: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 005c298b: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 005c2991: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 005c2997: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 005c299d: mov ecx, dword ptr [0x9c1fe0] */ r_ecx = R32((u32)(0x9c1fe0u));
    /* 005c29a3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c29a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c29a9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c29b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005c29b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c29b3: ret 8 */ FN_RET(0x005c289c); r_esp += 12; return;
}

void f_005c29b8(void) /* sub_5C29B8 */
{
    FN_ENTER(0x005c29b8);
    /* 005c29b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c29b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c29ba: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c29bc: movzx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)R16((u32)(r_esp+0xcu));
    /* 005c29c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c29c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c29c4: call 0x5c2a08 */ r_esp -= 4; W32(r_esp, 0x5c29c9u); f_005c2a08();
    /* 005c29c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c29cb: je 0x5c2a00 */ if (fZ) goto L_005c2a00;
L_005c29cd:; BB(0x005c29cd);
    /* 005c29cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c29ce: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c29d3u); f_0068d5a8();
    /* 005c29d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c29d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c29d6: je 0x5c2a00 */ if (fZ) goto L_005c2a00;
L_005c29d8:; BB(0x005c29d8);
    /* 005c29d8: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 005c29dd: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c29e2: add ebp, 0x9c */ {  u32 a = r_ebp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c29e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c29e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c29ea: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x5c29efu); f_007806dc();
    /* 005c29ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c29f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c29f4: je 0x5c2a00 */ if (fZ) goto L_005c2a00;
L_005c29f6:; BB(0x005c29f6);
    /* 005c29f6: mov eax, 1 */ r_eax = 0x1u;
    /* 005c29fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c29fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c29fd: ret 4 */ FN_RET(0x005c29b8); r_esp += 8; return;
L_005c2a00:; BB(0x005c2a00);
    /* 005c2a00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2a02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2a03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2a04: ret 4 */ FN_RET(0x005c29b8); r_esp += 8; return;
}

void f_005c2a08(void) /* sub_5C2A08 */
{
    FN_ENTER(0x005c2a08);
    /* 005c2a08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a0a: mov esi, ecx */ r_esi = r_ecx;
    /* 005c2a0c: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005c2a11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a12: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c2a17u); f_0068d5a8();
    /* 005c2a17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2a18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2a1a: je 0x5c2a58 */ if (fZ) goto L_005c2a58;
L_005c2a1c:; BB(0x005c2a1c);
    /* 005c2a1c: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 005c2a1f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005c2a21: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c2a24: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005c2a27: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2a2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a2c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5c2a31u); f_007a9180();
    /* 005c2a31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005c2a34: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005c2a37: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005c2a39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c2a3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c2a3c: ja 0x5c2a5f */ if ((!fC&&!fZ)) goto L_005c2a5f;
L_005c2a3e:; BB(0x005c2a3e);
    /* 005c2a3e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005c2a41: fadd dword ptr [0x92b9f8] */ ST(0) = ST(0) + R_F32((u32)(0x92b9f8u));
    /* 005c2a47: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c2a49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c2a4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c2a4c: jae 0x5c2a58 */ if (!fC) goto L_005c2a58;
L_005c2a4e:; BB(0x005c2a4e);
    /* 005c2a4e: mov dword ptr [esi + 0x94], 0x3c */ W32((u32)(r_esi+0x94u), 0x3cu);
L_005c2a58:; BB(0x005c2a58);
    /* 005c2a58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2a5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2a5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c2a5c: ret 4 */ FN_RET(0x005c2a08); r_esp += 8; return;
L_005c2a5f:; BB(0x005c2a5f);
    /* 005c2a5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005c2a61: mov eax, 1 */ r_eax = 0x1u;
    /* 005c2a66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2a67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c2a68: ret 4 */ FN_RET(0x005c2a08); r_esp += 8; return;
}

void f_005c2a6c(void) /* sub_5C2A6C */
{
    FN_ENTER(0x005c2a6c);
    /* 005c2a6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a6e: mov edi, ecx */ r_edi = r_ecx;
    /* 005c2a70: mov ebx, dword ptr [edi + 0x14] */ r_ebx = R32((u32)(r_edi+0x14u));
    /* 005c2a73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2a75: call 0x5c2afc */ r_esp -= 4; W32(r_esp, 0x5c2a7au); f_005c2afc();
    /* 005c2a7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2a7c: je 0x5c2aee */ if (fZ) goto L_005c2aee;
L_005c2a7e:; BB(0x005c2a7e);
    /* 005c2a7e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005c2a80: movzx eax, word ptr [edi + 0x28] */ r_eax = (u32)R16((u32)(r_edi+0x28u));
    /* 005c2a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2a87: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5c2a8au); call_ind(t); }
    /* 005c2a8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2a8c: jne 0x5c2aa0 */ if (!fZ) goto L_005c2aa0;
L_005c2a8e:; BB(0x005c2a8e);
    /* 005c2a8e: mov dword ptr [edi + 0x1c], 0x96 */ W32((u32)(r_edi+0x1cu), 0x96u);
    /* 005c2a95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c2a97: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 005c2a9e: jmp 0x5c2add */ goto L_005c2add;
L_005c2aa0:; BB(0x005c2aa0);
    /* 005c2aa0: movzx eax, word ptr [edi + 0x28] */ r_eax = (u32)R16((u32)(r_edi+0x28u));
    /* 005c2aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2aa5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2aa7: call 0x5c2b40 */ r_esp -= 4; W32(r_esp, 0x5c2aacu); f_005c2b40();
    /* 005c2aac: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005c2aaf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2ab2: cmp eax, dword ptr [edi + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2ab5: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005c2ab8: jl 0x5c2ad4 */ if ((fS!=fO)) goto L_005c2ad4;
L_005c2aba:; BB(0x005c2aba);
    /* 005c2aba: movzx eax, word ptr [edi + 0x28] */ r_eax = (u32)R16((u32)(r_edi+0x28u));
    /* 005c2abe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2abf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2ac1: call 0x5c2b98 */ r_esp -= 4; W32(r_esp, 0x5c2ac6u); f_005c2b98();
    /* 005c2ac6: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 005c2acd: mov dword ptr [edi + 0x1c], 0x1e */ W32((u32)(r_edi+0x1cu), 0x1eu);
L_005c2ad4:; BB(0x005c2ad4);
    /* 005c2ad4: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005c2ad7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2ada: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
L_005c2add:; BB(0x005c2add);
    /* 005c2add: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2ae0: je 0x5c2af1 */ if (fZ) goto L_005c2af1;
L_005c2ae2:; BB(0x005c2ae2);
    /* 005c2ae2: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c2ae5: jle 0x5c2aee */ if ((fZ||fS!=fO)) goto L_005c2aee;
L_005c2ae7:; BB(0x005c2ae7);
    /* 005c2ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2ae9: call 0x5c2be8 */ r_esp -= 4; W32(r_esp, 0x5c2aeeu); f_005c2be8();
L_005c2aee:; BB(0x005c2aee);
    /* 005c2aee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2aef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c2af0: ret  */ FN_RET(0x005c2a6c); r_esp += 4; return;
L_005c2af1:; BB(0x005c2af1);
    /* 005c2af1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2af3: call 0x5c2c0c */ r_esp -= 4; W32(r_esp, 0x5c2af8u); f_005c2c0c();
    /* 005c2af8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2af9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c2afa: ret  */ FN_RET(0x005c2a6c); r_esp += 4; return;
}

void f_005c2ac8(void)
{
    FN_ENTER(0x005c2ac8);
    /* 005c2ac8: and byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 005c2aca: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c2acc: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 005c2ace: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c2acf: sbb al, 0x1e */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c2ad1: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c2ad3: add byte ptr [ebx - 0x3f7cdbb9], cl */ { u32 ad = (u32)(r_ebx+0xc0832447u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005c2ad9: add dword ptr [ecx - 0x77cdbb9], ecx */ { u32 ad = (u32)(r_ecx+0xf8832447u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c2adf: add dword ptr [edi + ecx - 0x7d], esi */ { u32 ad = (u32)(r_edi+r_ecx+0xffffff83u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c2ae3: clc  */ fC = 0;
    /* 005c2ae4: cmp al, 0x7e */ {  u32 a = (u8)r_eax; u32 b = 0x7eu; u32 r = (a - b) & 0xffu;   }
    /* 005c2ae6: pop es */ UNSUP(0x005c2ae6, "pop es");
    /* 005c2ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2ae9: call 0x5c2be8 */ r_esp -= 4; W32(r_esp, 0x5c2aeeu); f_005c2be8();
    /* 005c2aee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2aef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c2af0: ret  */ FN_RET(0x005c2ac8); r_esp += 4; return;
}

void f_005c2afc(void) /* sub_5C2AFC */
{
    FN_ENTER(0x005c2afc);
    /* 005c2afc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2afd: fld dword ptr [ecx + 0x70] */ FPUSH(R_F32((u32)(r_ecx+0x70u)));
    /* 005c2b00: fcomp dword ptr [0x92b9f4] */ fx_compare(ST(0), R_F32((u32)(0x92b9f4u))); FPOP();
    /* 005c2b06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c2b08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c2b09: jb 0x5c2b12 */ if (fC) goto L_005c2b12;
L_005c2b0b:; BB(0x005c2b0b);
    /* 005c2b0b: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005c2b10: jmp 0x5c2b14 */ goto L_005c2b14;
L_005c2b12:; BB(0x005c2b12);
    /* 005c2b12: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005c2b14:; BB(0x005c2b14);
    /* 005c2b14: movzx edx, word ptr [ecx + 0x8c] */ r_edx = (u32)R16((u32)(r_ecx+0x8cu));
    /* 005c2b1b: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2b21: mov eax, 0 */ r_eax = 0x0u;
    /* 005c2b26: je 0x5c2b32 */ if (fZ) goto L_005c2b32;
L_005c2b28:; BB(0x005c2b28);
    /* 005c2b28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b29: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x5c2b2eu); f_00816eec();
    /* 005c2b2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2b2f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
L_005c2b32:; BB(0x005c2b32);
    /* 005c2b32: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c2b34: mov eax, 0 */ r_eax = 0x0u;
    /* 005c2b39: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c2b3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2b3d: ret  */ FN_RET(0x005c2afc); r_esp += 4; return;
}

void f_005c2b40(void) /* sub_5C2B40 */
{
    FN_ENTER(0x005c2b40);
    /* 005c2b40: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2b43: mov edx, ecx */ r_edx = r_ecx;
    /* 005c2b45: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005c2b4b: mov edx, dword ptr [edx + 0x84] */ r_edx = R32((u32)(r_edx+0x84u));
    /* 005c2b51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2b53: mov ecx, 0 */ r_ecx = 0x0u;
    /* 005c2b58: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c2b5b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005c2b60: call 0x5c2b78 */ r_esp -= 4; W32(r_esp, 0x5c2b65u); f_005c2b78();
    /* 005c2b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2b68: ret 4 */ FN_RET(0x005c2b40); r_esp += 8; return;
}

void f_005c2b78(void) /* sub_5C2B78 */
{
    FN_ENTER(0x005c2b78);
    /* 005c2b78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2b7a: jl 0x5c2b95 */ if ((fS!=fO)) goto L_005c2b95;
L_005c2b7c:; BB(0x005c2b7c);
    /* 005c2b7c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c2b7f: jge 0x5c2b95 */ if ((fS==fO)) goto L_005c2b95;
L_005c2b81:; BB(0x005c2b81);
    /* 005c2b81: mov eax, dword ptr [eax*4 + 0xa8d7cc] */ r_eax = R32((u32)(r_eax*4+0xa8d7ccu));
    /* 005c2b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2b8a: je 0x5c2b95 */ if (fZ) goto L_005c2b95;
L_005c2b8c:; BB(0x005c2b8c);
    /* 005c2b8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b8e: mov ecx, eax */ r_ecx = r_eax;
    /* 005c2b90: call 0x5c2240 */ r_esp -= 4; W32(r_esp, 0x5c2b95u); f_005c2240();
L_005c2b95:; BB(0x005c2b95);
    /* 005c2b95: ret  */ FN_RET(0x005c2b78); r_esp += 4; return;
}

void f_005c2b98(void) /* sub_5C2B98 */
{
    FN_ENTER(0x005c2b98);
    /* 005c2b98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b9a: mov esi, ecx */ r_esi = r_ecx;
    /* 005c2b9c: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005c2ba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ba2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c2ba7u); f_0068d5a8();
    /* 005c2ba7: mov ebp, eax */ r_ebp = r_eax;
    /* 005c2ba9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2baa: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x5c2bafu); f_0052135c();
    /* 005c2baf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2bb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2bb4: je 0x5c2be1 */ if (fZ) goto L_005c2be1;
L_005c2bb6:; BB(0x005c2bb6);
    /* 005c2bb6: movzx edx, word ptr [ebp + 0x334] */ r_edx = (u32)R16((u32)(r_ebp+0x334u));
    /* 005c2bbd: sub edx, dword ptr [esi + 0x98] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x98u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c2bc3: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005c2bc7: movsx esi, dx */ r_esi = (u32)(i32)(i16)(u16)r_edx;
    /* 005c2bca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2bcc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c2bce: jg 0x5c2bd2 */ if ((!fZ&&fS==fO)) goto L_005c2bd2;
L_005c2bd0:; BB(0x005c2bd0);
    /* 005c2bd0: mov esi, ecx */ r_esi = r_ecx;
L_005c2bd2:; BB(0x005c2bd2);
    /* 005c2bd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bd4: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bd9: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x5c2bdeu); f_00693348();
    /* 005c2bde: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005c2be1:; BB(0x005c2be1);
    /* 005c2be1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2be2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c2be3: ret 4 */ FN_RET(0x005c2b98); r_esp += 8; return;
}

void f_005c2be8(void) /* sub_5C2BE8 */
{
    FN_ENTER(0x005c2be8);
    /* 005c2be8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2be9: mov esi, ecx */ r_esi = r_ecx;
    /* 005c2beb: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x5c2bf0u); f_00807e78();
    /* 005c2bf0: mov ecx, eax */ r_ecx = r_eax;
    /* 005c2bf2: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005c2bf5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c2bf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bfa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2bfb: push dword ptr [ecx*8 + 0x92b964] */ { u32 v = R32((u32)(r_ecx*8+0x92b964u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2c02: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x5c2c07u); f_008144b0();
    /* 005c2c07: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2c0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c2c0b: ret  */ FN_RET(0x005c2be8); r_esp += 4; return;
}

void f_005c2c0c(void) /* sub_5C2C0C */
{
    FN_ENTER(0x005c2c0c);
    /* 005c2c0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c2c0f: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x5c2c14u); f_00807e78();
    /* 005c2c14: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c2c17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c2c19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c1c: push dword ptr [eax*8 + 0x92b960] */ { u32 v = R32((u32)(r_eax*8+0x92b960u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2c23: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5c2c28u); f_00814298();
    /* 005c2c28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2c2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2c2c: ret  */ FN_RET(0x005c2c0c); r_esp += 4; return;
}

void f_005c2c30(void) /* sub_5C2C30 */
{
    FN_ENTER(0x005c2c30);
    /* 005c2c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c31: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2c33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c35: push 0x8d983c */ { u32 v = 0x8d983cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c2c48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2c4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c2c4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c2c51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c2c54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c2c57: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2c59: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c2c60: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c2c65u); f_005caba4();
    /* 005c2c65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2c66: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c2c69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2c6b: je 0x5c2c95 */ if (fZ) goto L_005c2c95;
L_005c2c6d:; BB(0x005c2c6d);
    /* 005c2c6d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c2c74: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c2c7b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2c81: mov ecx, eax */ r_ecx = r_eax;
    /* 005c2c83: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2c89: call 0x5c2ca4 */ r_esp -= 4; W32(r_esp, 0x5c2c8eu); f_005c2ca4();
    /* 005c2c8e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c2c95:; BB(0x005c2c95);
    /* 005c2c95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2c98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2c9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2ca1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2ca2: ret  */ FN_RET(0x005c2c30); r_esp += 4; return;
}

void f_005c2ca4(void) /* sub_5C2CA4 */
{
    FN_ENTER(0x005c2ca4);
    /* 005c2ca4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ca5: mov esi, ecx */ r_esi = r_ecx;
    /* 005c2ca7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2cab: mov ecx, esi */ r_ecx = r_esi;
    /* 005c2cad: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5c2cb2u); f_008193cc();
    /* 005c2cb2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005c2cb6: mov dword ptr [esi], 0xb0bf80 */ W32((u32)(r_esi), 0xb0bf80u);
    /* 005c2cbc: mov edx, dword ptr [0x9c1fe4] */ r_edx = R32((u32)(0x9c1fe4u));
    /* 005c2cc2: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 005c2cc5: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 005c2cc8: mov dword ptr [eax*4 + 0xa8d7cc], esi */ W32((u32)(r_eax*4+0xa8d7ccu), r_esi);
    /* 005c2ccf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2cd1: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 005c2cd4: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 005c2cd7: mov eax, 1 */ r_eax = 0x1u;
    /* 005c2cdc: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 005c2cdf: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 005c2ce2: mov eax, esi */ r_eax = r_esi;
    /* 005c2ce4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c2ce5: ret 8 */ FN_RET(0x005c2ca4); r_esp += 12; return;
}

void f_005c2ce8(void) /* sub_5C2CE8 */
{
    FN_ENTER(0x005c2ce8);
    /* 005c2ce8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ce9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c2ceb: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x5c2cf0u); f_0067e408();
    /* 005c2cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2cf2: jne 0x5c2d77 */ if (!fZ) goto L_005c2d77;
L_005c2cf8:; BB(0x005c2cf8);
    /* 005c2cf8: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 005c2cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2cfd: jne 0x5c2d5a */ if (!fZ) goto L_005c2d5a;
L_005c2cff:; BB(0x005c2cff);
    /* 005c2cff: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005c2d02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c2d04: jle 0x5c2d79 */ if ((fZ||fS!=fO)) goto L_005c2d79;
L_005c2d06:; BB(0x005c2d06);
    /* 005c2d06: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005c2d09: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2d0f: jl 0x5c2d17 */ if ((fS!=fO)) goto L_005c2d17;
L_005c2d11:; BB(0x005c2d11);
    /* 005c2d11: add edx, 0xfffff000 */ {  u32 a = r_edx; u32 b = 0xfffff000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005c2d17:; BB(0x005c2d17);
    /* 005c2d17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c2d19: jl 0x5c2d2a */ if ((fS!=fO)) goto L_005c2d2a;
L_005c2d1b:; BB(0x005c2d1b);
    /* 005c2d1b: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2d21: jl 0x5c2d2c */ if ((fS!=fO)) goto L_005c2d2c;
L_005c2d23:; BB(0x005c2d23);
    /* 005c2d23: mov edx, 0xff */ r_edx = 0xffu;
    /* 005c2d28: jmp 0x5c2d2c */ goto L_005c2d2c;
L_005c2d2a:; BB(0x005c2d2a);
    /* 005c2d2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005c2d2c:; BB(0x005c2d2c);
    /* 005c2d2c: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005c2d2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2d31: je 0x5c2d43 */ if (fZ) goto L_005c2d43;
L_005c2d33:; BB(0x005c2d33);
    /* 005c2d33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d36: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2d39: call 0x5bcee4 */ r_esp -= 4; W32(r_esp, 0x5c2d3eu); f_005bcee4();
    /* 005c2d3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2d41: jmp 0x5c2d51 */ goto L_005c2d51;
L_005c2d43:; BB(0x005c2d43);
    /* 005c2d43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d46: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2d49: call 0x5bcee4 */ r_esp -= 4; W32(r_esp, 0x5c2d4eu); f_005bcee4();
    /* 005c2d4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005c2d51:; BB(0x005c2d51);
    /* 005c2d51: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 005c2d58: jmp 0x5c2d6e */ goto L_005c2d6e;
L_005c2d5a:; BB(0x005c2d5a);
    /* 005c2d5a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c2d5d: jne 0x5c2d6e */ if (!fZ) goto L_005c2d6e;
L_005c2d5f:; BB(0x005c2d5f);
    /* 005c2d5f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005c2d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2d64: jle 0x5c2d6e */ if ((fZ||fS!=fO)) goto L_005c2d6e;
L_005c2d66:; BB(0x005c2d66);
    /* 005c2d66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2d68: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 005c2d6b: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_005c2d6e:; BB(0x005c2d6e);
    /* 005c2d6e: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 005c2d75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2d76: ret  */ FN_RET(0x005c2ce8); r_esp += 4; return;
L_005c2d77:; BB(0x005c2d77);
    /* 005c2d77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2d78: ret  */ FN_RET(0x005c2ce8); r_esp += 4; return;
L_005c2d79:; BB(0x005c2d79);
    /* 005c2d79: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005c2d7c: mov dword ptr [ebp + 0x2c], 1 */ W32((u32)(r_ebp+0x2cu), 0x1u);
    /* 005c2d83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2d85: je 0x5c2d96 */ if (fZ) goto L_005c2d96;
L_005c2d87:; BB(0x005c2d87);
    /* 005c2d87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d89: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2d8c: call 0x5bcecc */ r_esp -= 4; W32(r_esp, 0x5c2d91u); f_005bcecc();
    /* 005c2d91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2d94: jmp 0x5c2d6e */ goto L_005c2d6e;
L_005c2d96:; BB(0x005c2d96);
    /* 005c2d96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2d98: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c2d9b: call 0x5bcecc */ r_esp -= 4; W32(r_esp, 0x5c2da0u); f_005bcecc();
    /* 005c2da0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2da3: jmp 0x5c2d6e */ goto L_005c2d6e;
}

void f_005c2da8(void) /* sub_5C2DA8 */
{
    FN_ENTER(0x005c2da8);
    /* 005c2da8: mov dword ptr [0xa8d7fc], 0x3f800000 */ W32((u32)(0xa8d7fcu), 0x3f800000u);
    /* 005c2db2: mov dword ptr [0xa8d800], 0x41000000 */ W32((u32)(0xa8d800u), 0x41000000u);
    /* 005c2dbc: mov dword ptr [0xa8d804], 0x3fc00000 */ W32((u32)(0xa8d804u), 0x3fc00000u);
    /* 005c2dc6: ret  */ FN_RET(0x005c2da8); r_esp += 4; return;
}

void f_005c2dc8(void) /* sub_5C2DC8 */
{
    FN_ENTER(0x005c2dc8);
    /* 005c2dc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2dca: mov dword ptr [0xa8d7cc], eax */ W32((u32)(0xa8d7ccu), r_eax);
    /* 005c2dcf: mov dword ptr [0xa8d7d0], eax */ W32((u32)(0xa8d7d0u), r_eax);
    /* 005c2dd4: mov dword ptr [0xa8d7d4], eax */ W32((u32)(0xa8d7d4u), r_eax);
    /* 005c2dd9: mov dword ptr [0xa8d7d8], eax */ W32((u32)(0xa8d7d8u), r_eax);
    /* 005c2dde: mov dword ptr [0xa8d7dc], eax */ W32((u32)(0xa8d7dcu), r_eax);
    /* 005c2de3: mov dword ptr [0xa8d7e0], eax */ W32((u32)(0xa8d7e0u), r_eax);
    /* 005c2de8: mov dword ptr [0xa8d7e4], eax */ W32((u32)(0xa8d7e4u), r_eax);
    /* 005c2ded: mov dword ptr [0xa8d7e8], eax */ W32((u32)(0xa8d7e8u), r_eax);
    /* 005c2df2: mov dword ptr [0xa8d7ec], eax */ W32((u32)(0xa8d7ecu), r_eax);
    /* 005c2df7: mov dword ptr [0xa8d7f0], eax */ W32((u32)(0xa8d7f0u), r_eax);
    /* 005c2dfc: mov dword ptr [0xa8d7f4], eax */ W32((u32)(0xa8d7f4u), r_eax);
    /* 005c2e01: mov dword ptr [0xa8d7f8], eax */ W32((u32)(0xa8d7f8u), r_eax);
    /* 005c2e06: ret  */ FN_RET(0x005c2dc8); r_esp += 4; return;
}

void f_005c2e08(void) /* sub_5C2E08 */
{
    FN_ENTER(0x005c2e08);
    /* 005c2e08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c2e0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2e0d: call 0x5e3a7c */ r_esp -= 4; W32(r_esp, 0x5c2e12u); f_005e3a7c();
    /* 005c2e12: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c2e16: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2e18: jne 0x5c2e1e */ if (!fZ) goto L_005c2e1e;
L_005c2e1a:; BB(0x005c2e1a);
    /* 005c2e1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2e1b: ret 4 */ FN_RET(0x005c2e08); r_esp += 8; return;
L_005c2e1e:; BB(0x005c2e1e);
    /* 005c2e1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e1f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c2e24u); f_00857e98();
    /* 005c2e24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2e25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2e26: ret 4 */ FN_RET(0x005c2e08); r_esp += 8; return;
}

void f_005c2e2c(void)
{
    FN_ENTER(0x005c2e2c);
    /* 005c2e2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e2e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c2e30: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c2e32: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5c2e37u); f_005c2e50();
    /* 005c2e37: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005c2e3b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2e3d: jne 0x5c2e44 */ if (!fZ) goto L_005c2e44;
L_005c2e3f:; BB(0x005c2e3f);
    /* 005c2e3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2e41: ret 4 */ FN_RET(0x005c2e2c); r_esp += 8; return;
L_005c2e44:; BB(0x005c2e44);
    /* 005c2e44: mov eax, ebp */ r_eax = r_ebp;
    /* 005c2e46: call 0x5c2f78 */ r_esp -= 4; W32(r_esp, 0x5c2e4bu); f_005c2f78();
    /* 005c2e4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2e4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2e4d: ret 4 */ FN_RET(0x005c2e2c); r_esp += 8; return;
}

void f_005c2e3a(void)
{
    FN_ENTER(0x005c2e3a);
    /* 005c2e3a: or al, 0xa8 */ {  u32 a = (u8)r_eax; u32 b = 0xa8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c2e3c: add dword ptr [ebp + 5], esi */ { u32 ad = (u32)(r_ebp+0x5u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c2e3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2e41: ret 4 */ FN_RET(0x005c2e3a); r_esp += 8; return;
}

void f_005c2e50(void) /* sub_5C2E50 */
{
    FN_ENTER(0x005c2e50);
    /* 005c2e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e51: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2e53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e55: push 0x8d9858 */ { u32 v = 0x8d9858u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c2e68: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2e6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c2e6e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005c2e71: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005c2e74: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005c2e77: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c2e7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2e81: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2e84: mov dword ptr [ecx], 0xb0c020 */ W32((u32)(r_ecx), 0xb0c020u);
    /* 005c2e8a: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 005c2e94: call 0x5c3db0 */ r_esp -= 4; W32(r_esp, 0x5c2e99u); f_005c3db0();
    /* 005c2e99: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2e9c: mov byte ptr [ecx + 0xf1], 3 */ W8((u32)(r_ecx+0xf1u), 0x3u);
    /* 005c2ea3: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x5c2ea8u); f_007b9de0();
    /* 005c2ea8: mov eax, dword ptr [0xa8d820] */ r_eax = R32((u32)(0xa8d820u));
    /* 005c2ead: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2eb0: mov edi, dword ptr [edx + 0xd8] */ r_edi = R32((u32)(r_edx+0xd8u));
    /* 005c2eb6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c2eb9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2ebb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c2ebe: lea eax, [eax - 1] */ r_eax = (u32)(r_eax+0xffffffffu);
    /* 005c2ec1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c2ec3: jle 0x5c2f66 */ if ((fZ||fS!=fO)) goto L_005c2f66;
L_005c2ec9:; BB(0x005c2ec9);
    /* 005c2ec9: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
L_005c2ecf:; BB(0x005c2ecf);
    /* 005c2ecf: lea esi, [ecx + eax] */ r_esi = (u32)(r_ecx+r_eax);
    /* 005c2ed2: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005c2ed4: mov ebx, dword ptr [edx + esi*4] */ r_ebx = R32((u32)(r_edx+r_esi*4));
    /* 005c2ed7: cmp edi, dword ptr [ebx + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2edd: jle 0x5c2ee4 */ if ((fZ||fS!=fO)) goto L_005c2ee4;
L_005c2edf:; BB(0x005c2edf);
    /* 005c2edf: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 005c2ee2: jmp 0x5c2ee6 */ goto L_005c2ee6;
L_005c2ee4:; BB(0x005c2ee4);
    /* 005c2ee4: mov eax, esi */ r_eax = r_esi;
L_005c2ee6:; BB(0x005c2ee6);
    /* 005c2ee6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2ee8: jl 0x5c2ecf */ if ((fS!=fO)) goto L_005c2ecf;
L_005c2eea:; BB(0x005c2eea);
    /* 005c2eea: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2eed: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005c2ef0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2ef2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2ef4: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2ef6: je 0x5c2f1d */ if (fZ) goto L_005c2f1d;
L_005c2ef8:; BB(0x005c2ef8);
    /* 005c2ef8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2eff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2f01: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x5c2f06u); f_007b4aec();
    /* 005c2f06: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f09: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2f0c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2f0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2f12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2f19: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2f1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2f1c: ret  */ FN_RET(0x005c2e50); r_esp += 4; return;
L_005c2f1d:; BB(0x005c2f1d);
    /* 005c2f1d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c2f20: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 005c2f23: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 005c2f27: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2f29: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c2f2b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c2f2d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c2f2f: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005c2f31: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c2f33: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c2f35: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c2f37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f3a: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5c2f3fu); f_00858c80();
    /* 005c2f3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2f42: mov ecx, dword ptr [0xa8d820] */ r_ecx = R32((u32)(0xa8d820u));
    /* 005c2f48: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c2f4e: mov dword ptr [edx + ecx*4 - 4], 0 */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), 0x0u);
    /* 005c2f56: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 005c2f59: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2f5c: mov dword ptr [0xa8d820], eax */ W32((u32)(0xa8d820u), r_eax);
    /* 005c2f61: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c2f64: jmp 0x5c2ef8 */ goto L_005c2ef8;
L_005c2f66:; BB(0x005c2f66);
    /* 005c2f66: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c2f6c: jmp 0x5c2eea */ goto L_005c2eea;
}

void f_005c2f2e(void)
{
    FN_ENTER(0x005c2f2e);
    goto L_005c2f2e;
L_005c2ef8:; BB(0x005c2ef8);
    /* 005c2ef8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2eff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c2f01: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x5c2f06u); f_007b4aec();
    /* 005c2f06: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2f09: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2f0c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2f0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2f12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2f19: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2f1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2f1c: ret  */ FN_RET(0x005c2f2e); r_esp += 4; return;
L_005c2f2e:; BB(0x005c2f2e);
    /* 005c2f2e: div bh */ { u32 d = (u8)(r_ebx>>8); if (!d) UNSUP(0x005c2f2e, "divide by zero"); { u32 n = r_eax & 0xffffu; u32 q = n / d; if (q >> 8) UNSUP(0x005c2f2e, "divide overflow"); r_eax = (r_eax & 0xffff0000u) | ((n % d) << 8) | q; } }
    /* 005c2f30: fild dword ptr [ebx] */ FPUSH((long double)(i32)R32((u32)(r_ebx)));
    /* 005c2f32: fild dword ptr [ebx] */ FPUSH((long double)(i32)R32((u32)(r_ebx)));
    /* 005c2f34: fild dword ptr [ebx] */ FPUSH((long double)(i32)R32((u32)(r_ebx)));
    /* 005c2f36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f3a: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5c2f3fu); f_00858c80();
    /* 005c2f3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2f42: mov ecx, dword ptr [0xa8d820] */ r_ecx = R32((u32)(0xa8d820u));
    /* 005c2f48: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c2f4e: mov dword ptr [edx + ecx*4 - 4], 0 */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), 0x0u);
    /* 005c2f56: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 005c2f59: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2f5c: mov dword ptr [0xa8d820], eax */ W32((u32)(0xa8d820u), r_eax);
    /* 005c2f61: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c2f64: jmp 0x5c2ef8 */ goto L_005c2ef8;
}

void f_005c2f74(void) /* sub_5C2F74 */
{
    FN_ENTER(0x005c2f74);
    /* 005c2f74: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c2f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f79: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 005c2f7f: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x5c2f84u); f_007a8b04();
    /* 005c2f84: ret  */ FN_RET(0x005c2f74); r_esp += 4; return;
}

void f_005c2f78(void) /* sub_5C2F78 */
{
    FN_ENTER(0x005c2f78);
    /* 005c2f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f79: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 005c2f7f: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x5c2f84u); f_007a8b04();
    /* 005c2f84: ret  */ FN_RET(0x005c2f78); r_esp += 4; return;
}

void f_005c2f88(void) /* sub_5C2F88 */
{
    FN_ENTER(0x005c2f88);
    /* 005c2f88: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2f8b: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 005c2f91: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 005c2f97: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2f99: je 0x5c30cf */ if (fZ) goto L_005c30cf;
L_005c2f9f:; BB(0x005c2f9f);
    /* 005c2f9f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005c2fa3: mov dword ptr [0xa8d82c], 0x8321d8 */ W32((u32)(0xa8d82cu), 0x8321d8u);
    /* 005c2fad: mov dword ptr [0xa8d828], ecx */ W32((u32)(0xa8d828u), r_ecx);
    /* 005c2fb3: mov dword ptr [0xa8d824], eax */ W32((u32)(0xa8d824u), r_eax);
    /* 005c2fb8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005c2fbc: mov ebx, edx */ r_ebx = r_edx;
    /* 005c2fbe: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_005c2fc2:; BB(0x005c2fc2);
    /* 005c2fc2: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005c2fc4: mov eax, esi */ r_eax = r_esi;
    /* 005c2fc6: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c2fc9: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2fcc: jne 0x5c302d */ if (!fZ) goto L_005c302d;
L_005c2fce:; BB(0x005c2fce);
    /* 005c2fce: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c2fd3u); f_0082d7b0();
    /* 005c2fd3: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c2fd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2fdb: je 0x5c2fef */ if (fZ) goto L_005c2fef;
L_005c2fdd:; BB(0x005c2fdd);
    /* 005c2fdd: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c2fe2u); f_00831650();
    /* 005c2fe2: mov eax, dword ptr [0xa8d828] */ r_eax = R32((u32)(0xa8d828u));
    /* 005c2fe7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2fea: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
L_005c2fef:; BB(0x005c2fef);
    /* 005c2fef: mov eax, dword ptr [0xa8d824] */ r_eax = R32((u32)(0xa8d824u));
    /* 005c2ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2ff6: je 0x5c2ffc */ if (fZ) goto L_005c2ffc;
L_005c2ff8:; BB(0x005c2ff8);
    /* 005c2ff8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ff9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c2ffbu); call_ind(t); }
    /* 005c2ffb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c2ffc:; BB(0x005c2ffc);
    /* 005c2ffc: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3002: jne 0x5c3013 */ if (!fZ) goto L_005c3013;
L_005c3004:; BB(0x005c3004);
    /* 005c3004: mov eax, dword ptr [0xa8d82c] */ r_eax = R32((u32)(0xa8d82cu));
    /* 005c3009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c300b: je 0x5c3013 */ if (fZ) goto L_005c3013;
L_005c300d:; BB(0x005c300d);
    /* 005c300d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3010: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3012u); call_ind(t); }
    /* 005c3012: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c3013:; BB(0x005c3013);
    /* 005c3013: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3019: jne 0x5c3023 */ if (!fZ) goto L_005c3023;
L_005c301b:; BB(0x005c301b);
    /* 005c301b: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c301e: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c3023u); f_005c30f0();
L_005c3023:; BB(0x005c3023);
    /* 005c3023: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c3028u); f_0082da80();
    /* 005c3028: jmp 0x5c30bc */ goto L_005c30bc;
L_005c302d:; BB(0x005c302d);
    /* 005c302d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c3032u); f_0082d7b0();
    /* 005c3032: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3038: jne 0x5c3042 */ if (!fZ) goto L_005c3042;
L_005c303a:; BB(0x005c303a);
    /* 005c303a: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 005c303d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c3042u); f_0082d838();
L_005c3042:; BB(0x005c3042);
    /* 005c3042: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3048: jne 0x5c3057 */ if (!fZ) goto L_005c3057;
L_005c304a:; BB(0x005c304a);
    /* 005c304a: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 005c304d: mov edx, esi */ r_edx = r_esi;
    /* 005c304f: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c3052: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c3057u); f_00830df8();
L_005c3057:; BB(0x005c3057);
    /* 005c3057: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c305d: jne 0x5c3067 */ if (!fZ) goto L_005c3067;
L_005c305f:; BB(0x005c305f);
    /* 005c305f: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 005c3062: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5c3067u); f_00831290();
L_005c3067:; BB(0x005c3067);
    /* 005c3067: mov eax, dword ptr [0xa8d824] */ r_eax = R32((u32)(0xa8d824u));
    /* 005c306c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c306e: je 0x5c3074 */ if (fZ) goto L_005c3074;
L_005c3070:; BB(0x005c3070);
    /* 005c3070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3071: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3073u); call_ind(t); }
    /* 005c3073: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c3074:; BB(0x005c3074);
    /* 005c3074: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c307a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c307c: je 0x5c3090 */ if (fZ) goto L_005c3090;
L_005c307e:; BB(0x005c307e);
    /* 005c307e: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c3083u); f_00831650();
    /* 005c3083: mov eax, dword ptr [0xa8d828] */ r_eax = R32((u32)(0xa8d828u));
    /* 005c3088: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c308b: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
L_005c3090:; BB(0x005c3090);
    /* 005c3090: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3096: jne 0x5c30a7 */ if (!fZ) goto L_005c30a7;
L_005c3098:; BB(0x005c3098);
    /* 005c3098: mov eax, dword ptr [0xa8d82c] */ r_eax = R32((u32)(0xa8d82cu));
    /* 005c309d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c309f: je 0x5c30a7 */ if (fZ) goto L_005c30a7;
L_005c30a1:; BB(0x005c30a1);
    /* 005c30a1: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c30a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c30a6u); call_ind(t); }
    /* 005c30a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c30a7:; BB(0x005c30a7);
    /* 005c30a7: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c30ad: jne 0x5c30b7 */ if (!fZ) goto L_005c30b7;
L_005c30af:; BB(0x005c30af);
    /* 005c30af: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c30b2: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c30b7u); f_005c30f0();
L_005c30b7:; BB(0x005c30b7);
    /* 005c30b7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c30bcu); f_0082da80();
L_005c30bc:; BB(0x005c30bc);
    /* 005c30bc: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 005c30bf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c30c1: jne 0x5c2fc2 */ if (!fZ) goto L_005c2fc2;
L_005c30c7:; BB(0x005c30c7);
    /* 005c30c7: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005c30cb: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_005c30cf:; BB(0x005c30cf);
    /* 005c30cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c30d1: mov dword ptr [0xa8d82c], eax */ W32((u32)(0xa8d82cu), r_eax);
    /* 005c30d6: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
    /* 005c30db: mov dword ptr [0xa8d824], eax */ W32((u32)(0xa8d824u), r_eax);
    /* 005c30e0: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c30e5u); f_007a9044();
    /* 005c30e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c30e8: ret 4 */ FN_RET(0x005c2f88); r_esp += 8; return;
}

