#include "protos.h"

void f_0054615c(void) /* sub_54615C */
{
    FN_ENTER(0x0054615c);
    /* 0054615c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054615d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054615f: movsx edx, word ptr [ebp + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00546166: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00546169: je 0x5461ad */ if (fZ) goto L_005461ad;
L_0054616b:; BB(0x0054616b);
    /* 0054616b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054616e: je 0x546187 */ if (fZ) goto L_00546187;
L_00546170:; BB(0x00546170);
    /* 00546170: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00546173: je 0x546185 */ if (fZ) goto L_00546185;
L_00546175:; BB(0x00546175);
    /* 00546175: mov dword ptr [ebp + 0x37c], 4 */ W32((u32)(r_ebp+0x37cu), 0x4u);
    /* 0054617f: mov dword ptr [ebp + 0x388], edx */ W32((u32)(r_ebp+0x388u), r_edx);
L_00546185:; BB(0x00546185);
    /* 00546185: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546186: ret  */ FN_RET(0x0054615c); r_esp += 4; return;
L_00546187:; BB(0x00546187);
    /* 00546187: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0054618d: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546192: je 0x546170 */ if (fZ) goto L_00546170;
L_00546194:; BB(0x00546194);
    /* 00546194: movzx eax, word ptr [ebp + 0x430] */ r_eax = (u32)R16((u32)(r_ebp+0x430u));
    /* 0054619b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054619c: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5461a1u); f_00786b3c();
    /* 005461a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005461a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005461a4: je 0x5461af */ if (fZ) goto L_005461af;
L_005461a6:; BB(0x005461a6);
    /* 005461a6: mov ecx, eax */ r_ecx = r_eax;
    /* 005461a8: call 0x543c88 */ r_esp -= 4; W32(r_esp, 0x5461adu); f_00543c88();
L_005461ad:; BB(0x005461ad);
    /* 005461ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005461ae: ret  */ FN_RET(0x0054615c); r_esp += 4; return;
L_005461af:; BB(0x005461af);
    /* 005461af: movsx edx, word ptr [ebp + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005461b6: jmp 0x546170 */ goto L_00546170;
}

void f_005461b8(void) /* sub_5461B8 */
{
    FN_ENTER(0x005461b8);
    /* 005461b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005461b9: mov edi, ecx */ r_edi = r_ecx;
    /* 005461bb: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005461be: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005461c3: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 005461c8: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005461cb: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005461d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005461d2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5461d7u); f_0050b510();
    /* 005461d7: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005461da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005461dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005461dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005461de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005461df: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005461e4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5461e9u); f_00814298();
    /* 005461e9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005461ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005461ed: ret  */ FN_RET(0x005461b8); r_esp += 4; return;
}

void f_005461f0(void) /* sub_5461F0 */
{
    FN_ENTER(0x005461f0);
    /* 005461f0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005461f3: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005461f8: jne 0x546228 */ if (!fZ) goto L_00546228;
L_005461fa:; BB(0x005461fa);
    /* 005461fa: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00546200: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546205: je 0x546208 */ if (fZ) goto L_00546208;
L_00546207:; BB(0x00546207);
    /* 00546207: ret  */ FN_RET(0x005461f0); r_esp += 4; return;
L_00546208:; BB(0x00546208);
    /* 00546208: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054620a: jne 0x546228 */ if (!fZ) goto L_00546228;
L_0054620c:; BB(0x0054620c);
    /* 0054620c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00546213: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00546216: je 0x546228 */ if (fZ) goto L_00546228;
L_00546218:; BB(0x00546218);
    /* 00546218: mov dword ptr [ecx + 0x37c], 6 */ W32((u32)(r_ecx+0x37cu), 0x6u);
    /* 00546222: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_00546228:; BB(0x00546228);
    /* 00546228: ret  */ FN_RET(0x005461f0); r_esp += 4; return;
}

void f_0054622c(void) /* sub_54622C */
{
    FN_ENTER(0x0054622c);
    /* 0054622c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0054622f: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546235: mov eax, 0 */ r_eax = 0x0u;
    /* 0054623a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0054623d: ret  */ FN_RET(0x0054622c); r_esp += 4; return;
}

void f_00546240(void) /* sub_546240 */
{
    FN_ENTER(0x00546240);
    /* 00546240: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x546245u); f_00777d10();
    /* 00546245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546247: je 0x54624f */ if (fZ) goto L_0054624f;
L_00546249:; BB(0x00546249);
    /* 00546249: mov eax, 1 */ r_eax = 0x1u;
    /* 0054624e: ret  */ FN_RET(0x00546240); r_esp += 4; return;
L_0054624f:; BB(0x0054624f);
    /* 0054624f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546251: ret  */ FN_RET(0x00546240); r_esp += 4; return;
}

void f_00546254(void) /* sub_546254 */
{
    FN_ENTER(0x00546254);
    /* 00546254: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x546259u); f_007780a8();
    /* 00546259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054625b: je 0x546263 */ if (fZ) goto L_00546263;
L_0054625d:; BB(0x0054625d);
    /* 0054625d: mov eax, 1 */ r_eax = 0x1u;
    /* 00546262: ret  */ FN_RET(0x00546254); r_esp += 4; return;
L_00546263:; BB(0x00546263);
    /* 00546263: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546265: ret  */ FN_RET(0x00546254); r_esp += 4; return;
}

void f_005462b0(void)
{
    FN_ENTER(0x005462b0);
    /* 005462b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005462b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005462b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005462b5: push 0x8d5974 */ { u32 v = 0x8d5974u; r_esp -= 4; W32(r_esp, v); }
    /* 005462ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005462c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005462c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005462c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005462cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005462ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005462d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005462d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005462d7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005462dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005462e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5462e8u); f_008581c5();
    /* 005462e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005462e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005462ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005462ee: je 0x5463ef */ if (fZ) goto L_005463ef;
L_005462f4:; BB(0x005462f4);
    /* 005462f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005462fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546302: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546305: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054630a: push 0x9bd090 */ { u32 v = 0x9bd090u; r_esp -= 4; W32(r_esp, v); }
    /* 0054630f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546311: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x546316u); f_005b7a84();
    /* 00546316: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546319: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00546320: mov dword ptr [0xa73838], ecx */ W32((u32)(0xa73838u), r_ecx);
    /* 00546326: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054632d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054632f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x546334u); f_005b8610();
    /* 00546334: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 0054633a: mov dword ptr [0xa7380c], eax */ W32((u32)(0xa7380cu), r_eax);
    /* 0054633f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546341: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x546346u); f_005b8624();
    /* 00546346: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 0054634c: mov dword ptr [0xa73804], eax */ W32((u32)(0xa73804u), r_eax);
    /* 00546351: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546353: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x546358u); f_005b8624();
    /* 00546358: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 0054635e: mov dword ptr [0xa73808], eax */ W32((u32)(0xa73808u), r_eax);
    /* 00546363: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546365: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x54636au); f_005b8610();
    /* 0054636a: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 00546370: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546372: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00546375: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00546378: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0054637b: mov dword ptr [0xa737fc], ebx */ W32((u32)(0xa737fcu), r_ebx);
    /* 00546381: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x546386u); f_005b8610();
    /* 00546386: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00546389: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054638c: mov dword ptr [0xa73800], edx */ W32((u32)(0xa73800u), r_edx);
    /* 00546392: call 0x54752c */ r_esp -= 4; W32(r_esp, 0x546397u); f_0054752c();
    /* 00546397: call 0x546b14 */ r_esp -= 4; W32(r_esp, 0x54639cu); f_00546b14();
    /* 0054639c: push 0x923c6c */ { u32 v = 0x923c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005463a1: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x5463a6u); f_008009dc();
    /* 005463a6: mov dword ptr [0xa73834], eax */ W32((u32)(0xa73834u), r_eax);
    /* 005463ab: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463ad: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5463b2u); f_0077a684();
    /* 005463b2: mov dword ptr [0xa73830], eax */ W32((u32)(0xa73830u), r_eax);
    /* 005463b7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463b9: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5463beu); f_0077a698();
    /* 005463be: mov dword ptr [0xa7382c], eax */ W32((u32)(0xa7382cu), r_eax);
    /* 005463c3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463c5: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5463cau); f_0077a6b4();
    /* 005463ca: mov dword ptr [0xa73828], eax */ W32((u32)(0xa73828u), r_eax);
    /* 005463cf: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463d1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5463d6u); f_0077a6cc();
    /* 005463d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005463d9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005463dc: mov dword ptr [0xa73824], eax */ W32((u32)(0xa73824u), r_eax);
    /* 005463e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005463e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005463eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005463ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005463ee: ret  */ FN_RET(0x005462b0); r_esp += 4; return;
L_005463ef:; BB(0x005463ef);
    /* 005463ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005463f1: jmp 0x546320 */ f_00546320(); return;
}

void f_005463f8(void) /* sub_5463F8 */
{
    FN_ENTER(0x005463f8);
    /* 005463f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005463f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005463fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005463fd: call 0x54641c */ r_esp -= 4; W32(r_esp, 0x546402u); f_0054641c();
    /* 00546402: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00546406: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546408: jne 0x54640e */ if (!fZ) goto L_0054640e;
L_0054640a:; BB(0x0054640a);
    /* 0054640a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054640b: ret 4 */ FN_RET(0x005463f8); r_esp += 8; return;
L_0054640e:; BB(0x0054640e);
    /* 0054640e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054640f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x546414u); f_005c2f74();
    /* 00546414: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546415: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00546416: ret 4 */ FN_RET(0x005463f8); r_esp += 8; return;
}

void f_0054641c(void) /* sub_54641C */
{
    FN_ENTER(0x0054641c);
    /* 0054641c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054641d: mov ebp, esp */ r_ebp = r_esp;
    /* 0054641f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546421: push 0x8d5990 */ { u32 v = 0x8d5990u; r_esp -= 4; W32(r_esp, v); }
    /* 00546426: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054642c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054642d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00546434: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546437: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054643a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0054643d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00546440: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00546443: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00546446: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054644d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546450: mov dword ptr [ecx], 0xb035b0 */ W32((u32)(r_ecx), 0xb035b0u);
    /* 00546456: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x54645bu); f_007b9c8c();
    /* 0054645b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054645e: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00546464: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546466: je 0x546482 */ if (fZ) goto L_00546482;
L_00546468:; BB(0x00546468);
    /* 00546468: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054646b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054646f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00546474: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00546478: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
L_00546482:; BB(0x00546482);
    /* 00546482: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546489: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x54648eu); f_007b4aec();
    /* 0054648e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546491: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546498: mov esp, ebp */ r_esp = r_ebp;
    /* 0054649a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054649b: ret  */ FN_RET(0x0054641c); r_esp += 4; return;
}

void f_0054649c(void) /* sub_54649C */
{
    FN_ENTER(0x0054649c);
    /* 0054649c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054649d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054649e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054649f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005464a2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005464a4: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005464a7: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 005464aa: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 005464ad: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 005464b0: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005464b3: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 005464b6: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005464b9: lea edx, [ebp + 0xac] */ r_edx = (u32)(r_ebp+0xacu);
    /* 005464bf: mov ecx, esi */ r_ecx = r_esi;
    /* 005464c1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5464c6u); f_0082ebac();
    /* 005464c6: mov ecx, dword ptr [ebp + 0xd0] */ r_ecx = R32((u32)(r_ebp+0xd0u));
    /* 005464cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005464ce: je 0x5464d6 */ if (fZ) goto L_005464d6;
L_005464d0:; BB(0x005464d0);
    /* 005464d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005464d1: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5464d6u); f_00508db8();
L_005464d6:; BB(0x005464d6);
    /* 005464d6: movzx edx, word ptr [ebp + 0xc8] */ r_edx = (u32)R16((u32)(r_ebp+0xc8u));
    /* 005464dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005464de: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005464e0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5464e5u); f_007b4d18();
    /* 005464e5: mov edi, eax */ r_edi = r_eax;
    /* 005464e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005464ea: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005464ec: je 0x5465c5 */ if (fZ) goto L_005465c5;
L_005464f2:; BB(0x005464f2);
    /* 005464f2: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005464f8: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005464fb: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005464fe: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00546501: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x546506u); f_007b51c4();
    /* 00546506: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00546508: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54650du); f_007b6894();
    /* 0054650d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054650f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x546514u); f_007b798c();
    /* 00546514: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0054651a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0054651d: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00546520: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00546523: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00546529: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0054652c: test edx, 0x180000 */ {  u32 a = r_edx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546532: je 0x5465c1 */ if (fZ) goto L_005465c1;
L_00546538:; BB(0x00546538);
    /* 00546538: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0054653b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054653d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00546541: mov eax, esi */ r_eax = r_esi;
    /* 00546543: mov ebx, edi */ r_ebx = r_edi;
    /* 00546545: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00546549:; BB(0x00546549);
    /* 00546549: mov edi, dword ptr [esi + 0xaad6e0] */ r_edi = R32((u32)(r_esi+0xaad6e0u));
    /* 0054654f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00546552: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546554: je 0x5465f3 */ if (fZ) goto L_005465f3;
L_0054655a:; BB(0x0054655a);
    /* 0054655a: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 00546561: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546564: jne 0x54656d */ if (!fZ) goto L_0054656d;
L_00546566:; BB(0x00546566);
    /* 00546566: mov edx, 1 */ r_edx = 0x1u;
    /* 0054656b: jmp 0x54656f */ goto L_0054656f;
L_0054656d:; BB(0x0054656d);
    /* 0054656d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0054656f:; BB(0x0054656f);
    /* 0054656f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546571: je 0x5465b7 */ if (fZ) goto L_005465b7;
L_00546573:; BB(0x00546573);
    /* 00546573: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546575: je 0x5465b7 */ if (fZ) goto L_005465b7;
L_00546577:; BB(0x00546577);
    /* 00546577: mov edx, dword ptr [0x923c88] */ r_edx = R32((u32)(0x923c88u));
    /* 0054657d: mov eax, dword ptr [0xa73824] */ r_eax = R32((u32)(0xa73824u));
    /* 00546582: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 00546585: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00546587: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0054658b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0054658f: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00546594: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546595: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546596: mov ecx, edi */ r_ecx = r_edi;
    /* 00546598: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054659a: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054659e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054659f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005465a0: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5465a3u); call_ind(t); }
    /* 005465a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005465a5: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005465aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005465ab: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005465ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005465af: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5465b2u); call_ind(t); }
    /* 005465b2: mov eax, 1 */ r_eax = 0x1u;
L_005465b7:; BB(0x005465b7);
    /* 005465b7: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005465ba: jl 0x546549 */ if ((fS!=fO)) goto L_00546549;
L_005465bc:; BB(0x005465bc);
    /* 005465bc: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005465bf: mov esi, eax */ r_esi = r_eax;
L_005465c1:; BB(0x005465c1);
    /* 005465c1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005465c3: jne 0x5465df */ if (!fZ) goto L_005465df;
L_005465c5:; BB(0x005465c5);
    /* 005465c5: mov eax, dword ptr [ebp + 0xc4] */ r_eax = R32((u32)(r_ebp+0xc4u));
    /* 005465cb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005465ce: mov dword ptr [ebp + 0xc4], eax */ W32((u32)(r_ebp+0xc4u), r_eax);
    /* 005465d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005465d6: jle 0x5465fa */ if ((fZ||fS!=fO)) goto L_005465fa;
L_005465d8:; BB(0x005465d8);
    /* 005465d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005465db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005465dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005465dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005465de: ret  */ FN_RET(0x0054649c); r_esp += 4; return;
L_005465df:; BB(0x005465df);
    /* 005465df: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005465e3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005465e8: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005465ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005465ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005465f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005465f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005465f2: ret  */ FN_RET(0x0054649c); r_esp += 4; return;
L_005465f3:; BB(0x005465f3);
    /* 005465f3: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005465f6: mov esi, eax */ r_esi = r_eax;
    /* 005465f8: jmp 0x5465c1 */ goto L_005465c1;
L_005465fa:; BB(0x005465fa);
    /* 005465fa: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005465fe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00546603: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00546607: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054660a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054660b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054660c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054660d: ret  */ FN_RET(0x0054649c); r_esp += 4; return;
}

void f_00546610(void) /* sub_546610 */
{
    FN_ENTER(0x00546610);
    /* 00546610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546611: mov ebp, esp */ r_ebp = r_esp;
    /* 00546613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546615: push 0x8d59ac */ { u32 v = 0x8d59acu; r_esp -= 4; W32(r_esp, v); }
    /* 0054661a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546621: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00546628: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054662b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054662e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00546631: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00546634: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00546637: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054663a: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546640: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00546643: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00546646: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00546649: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0054664c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0054664f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00546652: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x546657u); f_007b4b48();
    /* 00546657: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054665e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00546661: mov dword ptr [ecx], 0xb035b0 */ W32((u32)(r_ecx), 0xb035b0u);
    /* 00546667: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546669: push 0x9bd124 */ { u32 v = 0x9bd124u; r_esp -= 4; W32(r_esp, v); }
    /* 0054666e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x546673u); f_007b9a88();
    /* 00546673: fld dword ptr [0xa73820] */ FPUSH(R_F32((u32)(0xa73820u)));
    /* 00546679: fmul dword ptr [0x923cc0] */ ST(0) = ST(0) * R_F32((u32)(0x923cc0u));
    /* 0054667f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00546682: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00546688: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054668b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054668e: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00546691: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00546695: mov word ptr [ecx + 0xc8], dx */ W16((u32)(r_ecx+0xc8u), (u16)r_edx);
    /* 0054669c: mov esi, dword ptr [ebx + 0x390] */ r_esi = R32((u32)(r_ebx+0x390u));
    /* 005466a2: test esi, 0x4000000 */ {  u32 a = r_esi; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005466a8: je 0x5466b1 */ if (fZ) goto L_005466b1;
L_005466aa:; BB(0x005466aa);
    /* 005466aa: mov eax, 0xda */ r_eax = 0xdau;
    /* 005466af: jmp 0x5466b6 */ goto L_005466b6;
L_005466b1:; BB(0x005466b1);
    /* 005466b1: mov eax, 0xd5 */ r_eax = 0xd5u;
L_005466b6:; BB(0x005466b6);
    /* 005466b6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005466b9: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 005466bf: mov eax, ebx */ r_eax = r_ebx;
    /* 005466c1: movzx ebx, word ptr [eax + 0x28] */ r_ebx = (u32)R16((u32)(r_eax+0x28u));
    /* 005466c5: mov word ptr [ecx + 0x28], bx */ W16((u32)(r_ecx+0x28u), (u16)r_ebx);
    /* 005466c9: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 005466cb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005466ce: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 005466d1: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 005466d4: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 005466d7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005466da: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005466dd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005466df: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 005466e5: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005466e8: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 005466ee: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005466f1: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 005466f7: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005466fd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x546702u); f_0082f9c4();
    /* 00546702: push dword ptr [0xa73820] */ { u32 v = R32((u32)(0xa73820u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546708: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054670b: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 00546715: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054671b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054671c: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x546721u); f_0078ea90();
    /* 00546721: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00546723: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546726: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00546729: fld dword ptr [edx + 0xac] */ FPUSH(R_F32((u32)(r_edx+0xacu)));
    /* 0054672f: fld dword ptr [edx + 0xb4] */ FPUSH(R_F32((u32)(r_edx+0xb4u)));
    /* 00546735: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 0054673f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00546741: fmul qword ptr [0x923ca0] */ ST(0) = ST(0) * R_F64((u32)(0x923ca0u));
    /* 00546747: fdiv qword ptr [0x923c98] */ ST(0) = ST(0) / R_F64((u32)(0x923c98u));
    /* 0054674d: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00546750: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00546754: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00546759: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0054675c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0054675f: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00546762: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00546765: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00546768: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054676d: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 00546773: mov dword ptr [edx + 0xc0], 0x4000 */ W32((u32)(r_edx+0xc0u), 0x4000u);
    /* 0054677d: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0054677f: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 00546782: push dword ptr [edx + 0xcc] */ { u32 v = R32((u32)(r_edx+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00546788: lea ecx, [edx + 0xb8] */ r_ecx = (u32)(r_edx+0xb8u);
    /* 0054678e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054678f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00546790: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x546795u); f_00509dc4();
    /* 00546795: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054679a: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054679d: mov edx, dword ptr [ebx + 0xac] */ r_edx = R32((u32)(r_ebx+0xacu));
    /* 005467a3: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 005467a9: mov esi, dword ptr [ebx + 0xb4] */ r_esi = R32((u32)(r_ebx+0xb4u));
    /* 005467af: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005467b2: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005467b5: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 005467bb: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 005467be: lea edi, [ebp - 0x50] */ r_edi = (u32)(r_ebp+0xffffffb0u);
    /* 005467c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005467c2: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x5467c7u); f_0078ea90();
    /* 005467c7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005467c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005467cc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005467cf: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005467d2: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005467d5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5467dau); f_0082ebac();
    /* 005467da: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005467dd: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005467e0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005467e2: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005467e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005467e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005467e7: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5467ecu); f_0077fffc();
    /* 005467ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005467ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005467f1: je 0x54682d */ if (fZ) goto L_0054682d;
L_005467f3:; BB(0x005467f3);
    /* 005467f3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005467f6: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005467f9: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005467fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005467fd: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x546802u); f_0078ea6c();
    /* 00546802: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546805: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00546808: fld dword ptr [0xa73820] */ FPUSH(R_F32((u32)(0xa73820u)));
    /* 0054680e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00546810: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00546813: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00546817: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054681c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0054681f: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00546822: fistp dword ptr [edx + 0xc4] */ W32((u32)(r_edx+0xc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00546828: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0054682b: jmp 0x546857 */ goto L_00546857;
L_0054682d:; BB(0x0054682d);
    /* 0054682d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00546830: fld dword ptr [0x923cb4] */ FPUSH(R_F32((u32)(0x923cb4u)));
    /* 00546836: fdiv dword ptr [0xa73820] */ ST(0) = ST(0) / R_F32((u32)(0xa73820u));
    /* 0054683c: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0054683f: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00546843: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546848: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0054684b: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0054684e: fistp dword ptr [edx + 0xc4] */ W32((u32)(r_edx+0xc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00546854: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
L_00546857:; BB(0x00546857);
    /* 00546857: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054685a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054685d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546860: mov eax, edx */ r_eax = r_edx;
    /* 00546862: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546865: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054686c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054686e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054686f: ret 0xc */ FN_RET(0x00546610); r_esp += 16; return;
}

void f_00546874(void) /* sub_546874 */
{
    FN_ENTER(0x00546874);
    /* 00546874: mov dword ptr [0xa73840], 0x3f800000 */ W32((u32)(0xa73840u), 0x3f800000u);
    /* 0054687e: mov dword ptr [0xa73844], 0x41000000 */ W32((u32)(0xa73844u), 0x41000000u);
    /* 00546888: mov dword ptr [0xa73848], 0x3fc00000 */ W32((u32)(0xa73848u), 0x3fc00000u);
    /* 00546892: ret  */ FN_RET(0x00546874); r_esp += 4; return;
}

void f_00546894(void) /* sub_546894 */
{
    FN_ENTER(0x00546894);
    /* 00546894: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00546895: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00546897: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00546899: call 0x5468b8 */ r_esp -= 4; W32(r_esp, 0x54689eu); f_005468b8();
    /* 0054689e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005468a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005468a4: jne 0x5468aa */ if (!fZ) goto L_005468aa;
L_005468a6:; BB(0x005468a6);
    /* 005468a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005468a7: ret 4 */ FN_RET(0x00546894); r_esp += 8; return;
L_005468aa:; BB(0x005468aa);
    /* 005468aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005468ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5468b0u); f_005c2f74();
    /* 005468b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005468b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005468b2: ret 4 */ FN_RET(0x00546894); r_esp += 8; return;
}

void f_005468b8(void) /* sub_5468B8 */
{
    FN_ENTER(0x005468b8);
    /* 005468b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005468b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005468bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005468bd: push 0x8d59c8 */ { u32 v = 0x8d59c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005468c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005468c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005468c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005468d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005468d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005468d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005468d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005468dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005468df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005468e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005468e5: mov dword ptr [ecx], 0xb03608 */ W32((u32)(r_ecx), 0xb03608u);
    /* 005468eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005468f2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5468f7u); f_008171e8();
    /* 005468f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005468fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546901: mov esp, ebp */ r_esp = r_ebp;
    /* 00546903: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546904: ret  */ FN_RET(0x005468b8); r_esp += 4; return;
}

void f_00546908(void) /* sub_546908 */
{
    FN_ENTER(0x00546908);
    /* 00546908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00546909: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054690a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054690b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054690e: mov edi, ecx */ r_edi = r_ecx;
    /* 00546910: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00546914: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00546918: mov ecx, edi */ r_ecx = r_edi;
    /* 0054691a: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546920: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x546925u); f_008193cc();
    /* 00546925: mov dword ptr [edi], 0xb03608 */ W32((u32)(r_edi), 0xb03608u);
    /* 0054692b: mov eax, dword ptr [0x9bd150] */ r_eax = R32((u32)(0x9bd150u));
    /* 00546930: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00546933: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00546935: mov dword ptr [edi + 0x34], 0x3f800000 */ W32((u32)(r_edi+0x34u), 0x3f800000u);
    /* 0054693c: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0054693f: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00546942: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 00546945: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00546948: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0054694b: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0054694e: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00546951: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00546954: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00546958: mov dword ptr [edi + 0x50], 0x3f666666 */ W32((u32)(r_edi+0x50u), 0x3f666666u);
    /* 0054695f: mov dword ptr [edi + 0x24], ebp */ W32((u32)(r_edi+0x24u), r_ebp);
    /* 00546962: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00546965: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00546969: mov dword ptr [edi + 0x54], 0x3f800000 */ W32((u32)(r_edi+0x54u), 0x3f800000u);
    /* 00546970: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 00546973: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00546975: mov dword ptr [edi + 0x58], 0x3f800000 */ W32((u32)(r_edi+0x58u), 0x3f800000u);
    /* 0054697c: mov dword ptr [edi + 0x5c], 0x3f800000 */ W32((u32)(r_edi+0x5cu), 0x3f800000u);
    /* 00546983: jg 0x54698a */ if ((!fZ&&fS==fO)) goto L_0054698a;
L_00546985:; BB(0x00546985);
    /* 00546985: mov esi, 1 */ r_esi = 0x1u;
L_0054698a:; BB(0x0054698a);
    /* 0054698a: fld dword ptr [0x923cdc] */ FPUSH(R_F32((u32)(0x923cdcu)));
    /* 00546990: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00546993: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00546996: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00546998: fdivr dword ptr [0x923cd8] */ ST(0) = R_F32((u32)(0x923cd8u)) / ST(0);
    /* 0054699e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005469a0: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 005469a3: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 005469a6: mov eax, edi */ r_eax = r_edi;
    /* 005469a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005469ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005469ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005469ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005469ae: ret 0x10 */ FN_RET(0x00546908); r_esp += 20; return;
}

void f_005469b4(void) /* sub_5469B4 */
{
    FN_ENTER(0x005469b4);
    /* 005469b4: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 005469b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005469b9: jle 0x5469c2 */ if ((fZ||fS!=fO)) goto L_005469c2;
L_005469bb:; BB(0x005469bb);
    /* 005469bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005469be: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 005469c1: ret  */ FN_RET(0x005469b4); r_esp += 4; return;
L_005469c2:; BB(0x005469c2);
    /* 005469c2: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 005469c5: fadd dword ptr [ecx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x44u));
    /* 005469c8: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 005469cb: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 005469ce: fcom dword ptr [0x923cd0] */ fx_compare(ST(0), R_F32((u32)(0x923cd0u))); 
    /* 005469d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005469d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005469d8: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 005469db: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 005469de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005469df: ja 0x5469ee */ if ((!fC&&!fZ)) goto L_005469ee;
L_005469e1:; BB(0x005469e1);
    /* 005469e1: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005469e5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005469ea: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_005469ee:; BB(0x005469ee);
    /* 005469ee: ret  */ FN_RET(0x005469b4); r_esp += 4; return;
}

void f_005469f0(void) /* sub_5469F0 */
{
    FN_ENTER(0x005469f0);
    /* 005469f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005469f1: mov edi, ecx */ r_edi = r_ecx;
    /* 005469f3: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 005469f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005469f8: jle 0x5469fc */ if ((fZ||fS!=fO)) goto L_005469fc;
L_005469fa:; BB(0x005469fa);
    /* 005469fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005469fb: ret  */ FN_RET(0x005469f0); r_esp += 4; return;
L_005469fc:; BB(0x005469fc);
    /* 005469fc: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00546a01: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00546a07: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00546a0c: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00546a12: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00546a18: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00546a1e: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00546a24: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00546a2a: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00546a30: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00546a36: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00546a3b: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00546a41: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00546a47: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00546a4d: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00546a53: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00546a58: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00546a5d: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546a62: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x546a67u); f_0082d6fc();
    /* 00546a67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546a6a: mov ecx, dword ptr [0xa73850] */ r_ecx = R32((u32)(0xa73850u));
    /* 00546a70: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x546a75u); f_00829cc8();
    /* 00546a75: lea eax, [edi + 0x50] */ r_eax = (u32)(r_edi+0x50u);
    /* 00546a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546a79: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x546a7eu); f_0082d710();
    /* 00546a7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546a7f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x546a84u); f_0082d7b0();
    /* 00546a84: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 00546a87: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x546a8cu); f_0082d838();
    /* 00546a8c: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 00546a8f: fmul dword ptr [edi + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x34u));
    /* 00546a92: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546a95: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00546a98: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00546a9c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00546aa0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00546aa2: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x546aa7u); f_0082fa0c();
    /* 00546aa7: push dword ptr [0xa73854] */ { u32 v = R32((u32)(0xa73854u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546aad: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x546ab2u); f_0082e1e8();
    /* 00546ab2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546ab3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x546ab8u); f_0082da80();
    /* 00546ab8: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546abd: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x546ac2u); f_0082d710();
    /* 00546ac2: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00546ac7: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00546acd: mov ecx, dword ptr [0xaab508] */ r_ecx = R32((u32)(0xaab508u));
    /* 00546ad3: mov edi, dword ptr [0xaab50c] */ r_edi = R32((u32)(0xaab50cu));
    /* 00546ad9: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00546ade: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 00546ae3: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00546ae9: mov dword ptr [0xaf0370], ecx */ W32((u32)(0xaf0370u), r_ecx);
    /* 00546aef: mov dword ptr [0xaf0374], edi */ W32((u32)(0xaf0374u), r_edi);
    /* 00546af5: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00546afa: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00546aff: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 00546b04: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00546b09: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00546b0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546b0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00546b10: ret  */ FN_RET(0x005469f0); r_esp += 4; return;
}

void f_00546b14(void) /* sub_546B14 */
{
    FN_ENTER(0x00546b14);
    /* 00546b14: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 00546b1a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b1c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x546b21u); f_005b8610();
    /* 00546b21: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 00546b27: mov dword ptr [0xa73854], eax */ W32((u32)(0xa73854u), r_eax);
    /* 00546b2c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b2e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x546b33u); f_005b8624();
    /* 00546b33: mov dword ptr [0xa73850], eax */ W32((u32)(0xa73850u), r_eax);
    /* 00546b38: ret  */ FN_RET(0x00546b14); r_esp += 4; return;
}

void f_00546b3c(void) /* sub_546B3C */
{
    FN_ENTER(0x00546b3c);
    /* 00546b3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00546b3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00546b3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00546b41: call 0x546b60 */ r_esp -= 4; W32(r_esp, 0x546b46u); f_00546b60();
    /* 00546b46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00546b4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546b4c: jne 0x546b52 */ if (!fZ) goto L_00546b52;
L_00546b4e:; BB(0x00546b4e);
    /* 00546b4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00546b4f: ret 4 */ FN_RET(0x00546b3c); r_esp += 8; return;
L_00546b52:; BB(0x00546b52);
    /* 00546b52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00546b53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x546b58u); f_005c2f74();
    /* 00546b58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546b59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00546b5a: ret 4 */ FN_RET(0x00546b3c); r_esp += 8; return;
}

void f_00546b60(void) /* sub_546B60 */
{
    FN_ENTER(0x00546b60);
    /* 00546b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00546b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546b65: push 0x8d59e4 */ { u32 v = 0x8d59e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00546b6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546b71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00546b78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546b7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00546b7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00546b81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00546b84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00546b87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00546b8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546b8d: mov dword ptr [ecx], 0xb03668 */ W32((u32)(r_ecx), 0xb03668u);
    /* 00546b93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546b9a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x546b9fu); f_008171e8();
    /* 00546b9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546ba2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546ba9: mov esp, ebp */ r_esp = r_ebp;
    /* 00546bab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546bac: ret  */ FN_RET(0x00546b60); r_esp += 4; return;
}

void f_00546bb0(void) /* sub_546BB0 */
{
    FN_ENTER(0x00546bb0);
    /* 00546bb0: mov dword ptr [0xa7385c], 0 */ W32((u32)(0xa7385cu), 0x0u);
    /* 00546bba: ret  */ FN_RET(0x00546bb0); r_esp += 4; return;
}

void f_00546bbc(void) /* sub_546BBC */
{
    FN_ENTER(0x00546bbc);
    /* 00546bbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546bbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00546bbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546bc1: push 0x8d5a00 */ { u32 v = 0x8d5a00u; r_esp -= 4; W32(r_esp, v); }
    /* 00546bc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546bcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00546bd4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546bd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00546bda: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00546bdd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00546be0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00546be3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00546be6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546be9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00546bec: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00546bef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00546bf2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00546bf5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00546bf8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00546bfb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x546c00u); f_008193cc();
    /* 00546c00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546c07: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00546c0a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00546c0d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00546c10: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00546c13: mov dword ptr [ecx + 0x338], edx */ W32((u32)(r_ecx+0x338u), r_edx);
    /* 00546c19: mov dword ptr [ecx + 0x33c], ebx */ W32((u32)(r_ecx+0x33cu), r_ebx);
    /* 00546c1f: mov dword ptr [ecx], 0xb03668 */ W32((u32)(r_ecx), 0xb03668u);
    /* 00546c25: mov eax, dword ptr [0x9bd154] */ r_eax = R32((u32)(0x9bd154u));
    /* 00546c2a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00546c2d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00546c2f: mov dword ptr [ecx + 0x330], esi */ W32((u32)(r_ecx+0x330u), r_esi);
    /* 00546c35: mov dword ptr [ecx + 0x334], esi */ W32((u32)(r_ecx+0x334u), r_esi);
    /* 00546c3b: mov dword ptr [ecx + 0x344], edi */ W32((u32)(r_ecx+0x344u), r_edi);
    /* 00546c41: call 0x546c7c */ r_esp -= 4; W32(r_esp, 0x546c46u); f_00546c7c();
    /* 00546c46: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00546c49: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00546c4c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00546c4f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546c52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00546c54: mov dword ptr [eax + 0x328], edx */ W32((u32)(r_eax+0x328u), r_edx);
    /* 00546c5a: mov dword ptr [eax + 0x32c], 0xff000000 */ W32((u32)(r_eax+0x32cu), 0xff000000u);
    /* 00546c64: mov dword ptr [eax + 0x340], edx */ W32((u32)(r_eax+0x340u), r_edx);
    /* 00546c6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546c6d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546c74: mov esp, ebp */ r_esp = r_ebp;
    /* 00546c76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546c77: ret 0x10 */ FN_RET(0x00546bbc); r_esp += 20; return;
}

void f_00546c7c(void) /* sub_546C7C */
{
    FN_ENTER(0x00546c7c);
    /* 00546c7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00546c7d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00546c7e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546c81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00546c83: mov edx, dword ptr [ebx + 0x338] */ r_edx = R32((u32)(r_ebx+0x338u));
    /* 00546c89: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546c8b: mov esi, dword ptr [ebx + 0x33c] */ r_esi = R32((u32)(r_ebx+0x33cu));
    /* 00546c91: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00546c94: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00546c97: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 00546c9a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546c9d: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00546ca0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00546ca2: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00546ca5: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00546ca8: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00546cab: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00546cae: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00546cb1: lea esi, [ebx + 0x28] */ r_esi = (u32)(r_ebx+0x28u);
    /* 00546cb4: mov ecx, esi */ r_ecx = r_esi;
    /* 00546cb6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x546cbbu); f_0082f9c4();
    /* 00546cbb: mov ecx, esi */ r_ecx = r_esi;
    /* 00546cbd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x546cc2u); f_0083173c();
    /* 00546cc2: fild dword ptr [ebx + 0x344] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x344u)));
    /* 00546cc8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00546cca: mov edx, dword ptr [ebx + 0x344] */ r_edx = R32((u32)(r_ebx+0x344u));
    /* 00546cd0: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00546cd3: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 00546cd6: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00546cd9: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 00546cdc: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 00546cdf: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 00546ce2: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00546ce4: fst dword ptr [ebx + 0x34] */ W_F32((u32)(r_ebx+0x34u), ST(0));
    /* 00546ce7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546ce9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00546ceb: jle 0x547072 */ if ((fZ||fS!=fO)) goto L_00547072;
L_00546cf1:; BB(0x00546cf1);
    /* 00546cf1: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00546cf4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00546cf6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00546cf9: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00546cfb: lea ecx, [ebx + ecx + 0x3c] */ r_ecx = (u32)(r_ebx+r_ecx+0x3cu);
    /* 00546cff: jmp 0x546d04 */ goto L_00546d04;
L_00546d01:; BB(0x00546d01);
    /* 00546d01: fld dword ptr [ebx + 0x34] */ FPUSH(R_F32((u32)(r_ebx+0x34u)));
L_00546d04:; BB(0x00546d04);
    /* 00546d04: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00546d07: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00546d0a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00546d0c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00546d0f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00546d13: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00546d17: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00546d19: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00546d1b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00546d1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00546d1f: fst dword ptr [ebx + eax*4 + 0x2a0] */ W_F32((u32)(r_ebx+r_eax*4+0x2a0u), ST(0));
    /* 00546d26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00546d28: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 00546d2a: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00546d2c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00546d2e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00546d30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00546d32: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 00546d34: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00546d36: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00546d38: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00546d3b: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00546d3d: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00546d40: mov edx, dword ptr [ebx + 0x344] */ r_edx = R32((u32)(r_ebx+0x344u));
    /* 00546d46: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00546d49: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00546d4c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00546d4e: jl 0x546d01 */ if ((fS!=fO)) goto L_00546d01;
L_00546d50:; BB(0x00546d50);
    /* 00546d50: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 00546d52: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00546d54: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00546d56: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00546d58: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00546d5a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00546d5c: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
L_00546d5f:; BB(0x00546d5f);
    /* 00546d5f: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00546d62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00546d63: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00546d66: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x546d6bu); f_0082e900();
    /* 00546d6b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00546d6f: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00546d72: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x546d77u); f_0082e900();
    /* 00546d77: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00546d7b: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00546d7e: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x546d83u); f_0082e900();
    /* 00546d83: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00546d87: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 00546d8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00546d8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00546d8e: jbe 0x546da6 */ if ((fC||fZ)) goto L_00546da6;
L_00546d90:; BB(0x00546d90);
    /* 00546d90: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00546d94: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00546d96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00546d98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00546d99: jbe 0x546d9f */ if ((fC||fZ)) goto L_00546d9f;
L_00546d9b:; BB(0x00546d9b);
    /* 00546d9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546d9d: jmp 0x546dbd */ goto L_00546dbd;
L_00546d9f:; BB(0x00546d9f);
    /* 00546d9f: mov eax, 2 */ r_eax = 0x2u;
    /* 00546da4: jmp 0x546dbd */ goto L_00546dbd;
L_00546da6:; BB(0x00546da6);
    /* 00546da6: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00546daa: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00546dac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00546dae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00546daf: jbe 0x546db8 */ if ((fC||fZ)) goto L_00546db8;
L_00546db1:; BB(0x00546db1);
    /* 00546db1: mov eax, 1 */ r_eax = 0x1u;
    /* 00546db6: jmp 0x546dbd */ goto L_00546dbd;
L_00546db8:; BB(0x00546db8);
    /* 00546db8: mov eax, 2 */ r_eax = 0x2u;
L_00546dbd:; BB(0x00546dbd);
    /* 00546dbd: lea edx, [ebx + 0x1d4] */ r_edx = (u32)(r_ebx+0x1d4u);
    /* 00546dc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546dc5: je 0x546f5b */ if (fZ) goto L_00546f5b;
L_00546dcb:; BB(0x00546dcb);
    /* 00546dcb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546dce: jne 0x546e8f */ if (!fZ) goto L_00546e8f;
L_00546dd4:; BB(0x00546dd4);
    /* 00546dd4: fld dword ptr [0x923d14] */ FPUSH(R_F32((u32)(0x923d14u)));
    /* 00546dda: fdiv dword ptr [ebx + 0x2c] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x2cu));
    /* 00546ddd: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 00546de0: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 00546de3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00546de6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00546de8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00546dea: jle 0x547083 */ if ((fZ||fS!=fO)) goto L_00547083;
L_00546df0:; BB(0x00546df0);
    /* 00546df0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00546df2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00546df6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00546df8: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00546dfc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00546e00: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00546e04: mov edi, edx */ r_edi = r_edx;
L_00546e06:; BB(0x00546e06);
    /* 00546e06: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x546e0bu); f_008587a5();
    /* 00546e0b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00546e0f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00546e13: fdiv dword ptr [0x923d0c] */ ST(0) = ST(0) / R_F32((u32)(0x923d0cu));
    /* 00546e19: fadd dword ptr [0x923d10] */ ST(0) = ST(0) + R_F32((u32)(0x923d10u));
    /* 00546e1f: fmul dword ptr [0x923d08] */ ST(0) = ST(0) * R_F32((u32)(0x923d08u));
    /* 00546e25: fmul dword ptr [0x923d00] */ ST(0) = ST(0) * R_F32((u32)(0x923d00u));
    /* 00546e2b: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00546e2f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x546e34u); f_008587a5();
    /* 00546e34: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00546e38: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00546e3b: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 00546e3f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00546e43: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00546e47: fdiv dword ptr [0x923d0c] */ ST(0) = ST(0) / R_F32((u32)(0x923d0cu));
    /* 00546e4d: fadd dword ptr [0x923d10] */ ST(0) = ST(0) + R_F32((u32)(0x923d10u));
    /* 00546e53: fmul dword ptr [0x923d08] */ ST(0) = ST(0) * R_F32((u32)(0x923d08u));
    /* 00546e59: fmul dword ptr [0x923d00] */ ST(0) = ST(0) * R_F32((u32)(0x923d00u));
    /* 00546e5f: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 00546e61: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 00546e65: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00546e67: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00546e6b: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00546e6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00546e6f: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x546e74u); f_00782868();
    /* 00546e74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00546e76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546e79: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00546e7c: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00546e7f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00546e82: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00546e84: jl 0x546e06 */ if ((fS!=fO)) goto L_00546e06;
L_00546e86:; BB(0x00546e86);
    /* 00546e86: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00546e8a: jmp 0x547011 */ goto L_00547011;
L_00546e8f:; BB(0x00546e8f);
    /* 00546e8f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546e92: jne 0x546f53 */ if (!fZ) goto L_00546f53;
L_00546e98:; BB(0x00546e98);
    /* 00546e98: fld dword ptr [0x923d14] */ FPUSH(R_F32((u32)(0x923d14u)));
    /* 00546e9e: fdiv dword ptr [ebx + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x30u));
    /* 00546ea1: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 00546ea4: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 00546ea7: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00546eaa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00546eac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00546eae: jle 0x54708b */ if ((fZ||fS!=fO)) goto L_0054708b;
L_00546eb4:; BB(0x00546eb4);
    /* 00546eb4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00546eb6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00546eba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00546ebc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00546ec0: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00546ec4: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00546ec8: mov edi, edx */ r_edi = r_edx;
L_00546eca:; BB(0x00546eca);
    /* 00546eca: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x546ecfu); f_008587a5();
    /* 00546ecf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00546ed3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00546ed7: fdiv dword ptr [0x923d0c] */ ST(0) = ST(0) / R_F32((u32)(0x923d0cu));
    /* 00546edd: fadd dword ptr [0x923d10] */ ST(0) = ST(0) + R_F32((u32)(0x923d10u));
    /* 00546ee3: fmul dword ptr [0x923d08] */ ST(0) = ST(0) * R_F32((u32)(0x923d08u));
    /* 00546ee9: fmul dword ptr [0x923d00] */ ST(0) = ST(0) * R_F32((u32)(0x923d00u));
    /* 00546eef: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00546ef3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x546ef8u); f_008587a5();
    /* 00546ef8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00546efc: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 00546efe: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 00546f02: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00546f06: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00546f0a: fdiv dword ptr [0x923d0c] */ ST(0) = ST(0) / R_F32((u32)(0x923d0cu));
    /* 00546f10: fadd dword ptr [0x923d10] */ ST(0) = ST(0) + R_F32((u32)(0x923d10u));
    /* 00546f16: fmul dword ptr [0x923d08] */ ST(0) = ST(0) * R_F32((u32)(0x923d08u));
    /* 00546f1c: fmul dword ptr [0x923d00] */ ST(0) = ST(0) * R_F32((u32)(0x923d00u));
    /* 00546f22: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 00546f25: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 00546f29: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00546f2b: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 00546f2f: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00546f32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00546f33: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x546f38u); f_00782868();
    /* 00546f38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00546f3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546f3d: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00546f40: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00546f43: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00546f46: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00546f48: jl 0x546eca */ if ((fS!=fO)) goto L_00546eca;
L_00546f4a:; BB(0x00546f4a);
    /* 00546f4a: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00546f4e: jmp 0x547011 */ goto L_00547011;
L_00546f53:; BB(0x00546f53);
    /* 00546f53: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00546f56: jmp 0x547011 */ goto L_00547011;
L_00546f5b:; BB(0x00546f5b);
    /* 00546f5b: fld dword ptr [0x923d14] */ FPUSH(R_F32((u32)(0x923d14u)));
    /* 00546f61: fdiv dword ptr [ebx + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x28u));
    /* 00546f64: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 00546f67: fld dword ptr [ebx + 0x30] */ FPUSH(R_F32((u32)(r_ebx+0x30u)));
    /* 00546f6a: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00546f6d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00546f6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00546f71: jle 0x547096 */ if ((fZ||fS!=fO)) goto L_00547096;
L_00546f77:; BB(0x00546f77);
    /* 00546f77: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00546f79: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00546f7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00546f7f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00546f83: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00546f87: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00546f8b: mov edi, edx */ r_edi = r_edx;
L_00546f8d:; BB(0x00546f8d);
    /* 00546f8d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x546f92u); f_008587a5();
    /* 00546f92: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00546f96: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00546f9a: fdiv dword ptr [0x923d0c] */ ST(0) = ST(0) / R_F32((u32)(0x923d0cu));
    /* 00546fa0: fadd dword ptr [0x923d10] */ ST(0) = ST(0) + R_F32((u32)(0x923d10u));
    /* 00546fa6: fmul dword ptr [0x923d08] */ ST(0) = ST(0) * R_F32((u32)(0x923d08u));
    /* 00546fac: fmul dword ptr [0x923d00] */ ST(0) = ST(0) * R_F32((u32)(0x923d00u));
    /* 00546fb2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00546fb6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x546fbbu); f_008587a5();
    /* 00546fbb: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00546fbf: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 00546fc2: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 00546fc6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00546fca: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00546fce: fdiv dword ptr [0x923d0c] */ ST(0) = ST(0) / R_F32((u32)(0x923d0cu));
    /* 00546fd4: fadd dword ptr [0x923d10] */ ST(0) = ST(0) + R_F32((u32)(0x923d10u));
    /* 00546fda: fmul dword ptr [0x923d08] */ ST(0) = ST(0) * R_F32((u32)(0x923d08u));
    /* 00546fe0: fmul dword ptr [0x923d00] */ ST(0) = ST(0) * R_F32((u32)(0x923d00u));
    /* 00546fe6: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00546fe9: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 00546fed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00546fef: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 00546ff3: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00546ff5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00546ff6: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x546ffbu); f_00782868();
    /* 00546ffb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00546ffd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547000: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00547003: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00547006: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00547009: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054700b: jl 0x546f8d */ if ((fS!=fO)) goto L_00546f8d;
L_0054700d:; BB(0x0054700d);
    /* 0054700d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00547011:; BB(0x00547011);
    /* 00547011: mov esi, 1 */ r_esi = 0x1u;
    /* 00547016: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00547019: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054701c: jle 0x547057 */ if ((fZ||fS!=fO)) goto L_00547057;
L_0054701e:; BB(0x0054701e);
    /* 0054701e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x547023u); f_008587a5();
    /* 00547023: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00547027: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0054702b: fdiv dword ptr [0x923d0c] */ ST(0) = ST(0) / R_F32((u32)(0x923d0cu));
    /* 00547031: fadd dword ptr [0x923d10] */ ST(0) = ST(0) + R_F32((u32)(0x923d10u));
    /* 00547037: fmul dword ptr [0x923d08] */ ST(0) = ST(0) * R_F32((u32)(0x923d08u));
    /* 0054703d: fmul dword ptr [0x923cfc] */ ST(0) = ST(0) * R_F32((u32)(0x923cfcu));
    /* 00547043: fstp dword ptr [ebx + esi*4 + 0x2e4] */ W_F32((u32)(r_ebx+r_esi*4+0x2e4u), ST(0)); FPOP();
    /* 0054704a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054704d: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00547050: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00547053: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00547055: jl 0x54701e */ if ((fS!=fO)) goto L_0054701e;
L_00547057:; BB(0x00547057);
    /* 00547057: mov dword ptr [ebx + 0x2e4], 0 */ W32((u32)(r_ebx+0x2e4u), 0x0u);
    /* 00547061: mov dword ptr [ebx + eax*4 + 0x2e0], 0 */ W32((u32)(r_ebx+r_eax*4+0x2e0u), 0x0u);
    /* 0054706c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054706f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00547070: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00547071: ret  */ FN_RET(0x00546c7c); r_esp += 4; return;
L_00547072:; BB(0x00547072);
    /* 00547072: fstp st(6) */ ST(6) = ST(0); FPOP();
    /* 00547074: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547076: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00547078: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0054707a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0054707c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0054707e: jmp 0x546d5f */ goto L_00546d5f;
L_00547083:; BB(0x00547083);
    /* 00547083: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547085: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547087: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547089: jmp 0x547011 */ goto L_00547011;
L_0054708b:; BB(0x0054708b);
    /* 0054708b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054708d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054708f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547091: jmp 0x547011 */ goto L_00547011;
L_00547096:; BB(0x00547096);
    /* 00547096: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547098: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054709a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054709c: jmp 0x547011 */ goto L_00547011;
}

