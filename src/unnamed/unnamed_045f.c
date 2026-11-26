#include "protos.h"

void f_0045f028(void)
{
    FN_ENTER(0x0045f028);
    /* 0045f028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045f029: mov edi, ecx */ r_edi = r_ecx;
    /* 0045f02b: mov ecx, dword ptr [edi + 0x52c] */ r_ecx = R32((u32)(r_edi+0x52cu));
    /* 0045f031: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x45f036u); f_007a7d3c();
    /* 0045f036: mov ecx, dword ptr [edi + 0x530] */ r_ecx = R32((u32)(r_edi+0x530u));
    /* 0045f03c: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x45f041u); f_007a7d3c();
    /* 0045f041: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0045f047: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f04a: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045f04d: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f050: mov ecx, edi */ r_ecx = r_edi;
    /* 0045f052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f053: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45f058u); f_0045d43c();
    /* 0045f058: mov eax, dword ptr [0xa45930] */ r_eax = R32((u32)(0xa45930u));
    /* 0045f05d: mov dword ptr [edi + 0x534], 0 */ W32((u32)(r_edi+0x534u), 0x0u);
    /* 0045f067: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 0045f06d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045f06e: ret  */ FN_RET(0x0045f028); r_esp += 4; return;
}

void f_0045f070(void) /* sub_45F070 */
{
    FN_ENTER(0x0045f070);
    /* 0045f070: mov eax, dword ptr [0xa4592c] */ r_eax = R32((u32)(0xa4592cu));
    /* 0045f075: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045f07b: mov dword ptr [ecx + 0x400], 0x3e4ccccd */ W32((u32)(r_ecx+0x400u), 0x3e4ccccdu);
    /* 0045f085: ret  */ FN_RET(0x0045f070); r_esp += 4; return;
}

void f_0045f088(void) /* sub_45F088 */
{
    FN_ENTER(0x0045f088);
    /* 0045f088: mov eax, dword ptr [0xa45928] */ r_eax = R32((u32)(0xa45928u));
    /* 0045f08d: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045f093: ret  */ FN_RET(0x0045f088); r_esp += 4; return;
}

void f_0045f094(void) /* sub_45F094 */
{
    FN_ENTER(0x0045f094);
    /* 0045f094: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f095: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045f097: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045f099: call 0x45f12c */ r_esp -= 4; W32(r_esp, 0x45f09eu); f_0045f12c();
    /* 0045f09e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045f0a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045f0a4: jne 0x45f0aa */ if (!fZ) goto L_0045f0aa;
L_0045f0a6:; BB(0x0045f0a6);
    /* 0045f0a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f0a7: ret 4 */ FN_RET(0x0045f094); r_esp += 8; return;
L_0045f0aa:; BB(0x0045f0aa);
    /* 0045f0aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45f0b0u); f_005c2f74();
    /* 0045f0b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f0b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f0b2: ret 4 */ FN_RET(0x0045f094); r_esp += 8; return;
}

void f_0045f0b8(void) /* sub_45F0B8 */
{
    FN_ENTER(0x0045f0b8);
    /* 0045f0b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045f0bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045f0bd: call 0x45f0dc */ r_esp -= 4; W32(r_esp, 0x45f0c2u); f_0045f0dc();
    /* 0045f0c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045f0c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045f0c8: jne 0x45f0ce */ if (!fZ) goto L_0045f0ce;
L_0045f0ca:; BB(0x0045f0ca);
    /* 0045f0ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f0cb: ret 4 */ FN_RET(0x0045f0b8); r_esp += 8; return;
L_0045f0ce:; BB(0x0045f0ce);
    /* 0045f0ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45f0d4u); f_005c2f74();
    /* 0045f0d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f0d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f0d6: ret 4 */ FN_RET(0x0045f0b8); r_esp += 8; return;
}

void f_0045f0dc(void) /* sub_45F0DC */
{
    FN_ENTER(0x0045f0dc);
    /* 0045f0dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f0df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0e1: push 0x8cf508 */ { u32 v = 0x8cf508u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045f0ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045f0f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f0f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045f0fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0045f0fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045f100: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045f103: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045f106: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f109: mov dword ptr [ecx], 0xaf7ec0 */ W32((u32)(r_ecx), 0xaf7ec0u);
    /* 0045f10f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045f116: call 0x45f12c */ r_esp -= 4; W32(r_esp, 0x45f11bu); f_0045f12c();
    /* 0045f11b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045f11e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045f125: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f128: ret  */ FN_RET(0x0045f0dc); r_esp += 4; return;
}

void f_0045f12c(void) /* sub_45F12C */
{
    FN_ENTER(0x0045f12c);
    /* 0045f12c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f12d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f12f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f131: push 0x8cf524 */ { u32 v = 0x8cf524u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f136: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f13d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045f144: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f147: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045f14a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0045f14d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045f150: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045f153: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045f156: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045f15d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f160: mov dword ptr [ecx], 0xaf7d60 */ W32((u32)(r_ecx), 0xaf7d60u);
    /* 0045f166: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x45f16bu); f_007b9c8c();
    /* 0045f16b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f16e: mov eax, dword ptr [ecx + 0x3bc] */ r_eax = R32((u32)(r_ecx+0x3bcu));
    /* 0045f174: mov dword ptr [ecx + 0x38c], 0 */ W32((u32)(r_ecx+0x38cu), 0x0u);
    /* 0045f17e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f180: je 0x45f196 */ if (fZ) goto L_0045f196;
L_0045f182:; BB(0x0045f182);
    /* 0045f182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f183: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45f188u); f_005cdcc0();
    /* 0045f188: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f189: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f18c: mov dword ptr [ecx + 0x3bc], 0 */ W32((u32)(r_ecx+0x3bcu), 0x0u);
L_0045f196:; BB(0x0045f196);
    /* 0045f196: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045f19d: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x45f1a2u); f_0078638c();
    /* 0045f1a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045f1a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045f1ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f1ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f1af: ret  */ FN_RET(0x0045f12c); r_esp += 4; return;
}

void f_0045f1b0(void) /* sub_45F1B0 */
{
    FN_ENTER(0x0045f1b0);
    /* 0045f1b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045f1b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045f1b5: call 0x45f1d4 */ r_esp -= 4; W32(r_esp, 0x45f1bau); f_0045f1d4();
    /* 0045f1ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045f1be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045f1c0: jne 0x45f1c6 */ if (!fZ) goto L_0045f1c6;
L_0045f1c2:; BB(0x0045f1c2);
    /* 0045f1c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f1c3: ret 4 */ FN_RET(0x0045f1b0); r_esp += 8; return;
L_0045f1c6:; BB(0x0045f1c6);
    /* 0045f1c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45f1ccu); f_005c2f74();
    /* 0045f1cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f1cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f1ce: ret 4 */ FN_RET(0x0045f1b0); r_esp += 8; return;
}

void f_0045f1d4(void) /* sub_45F1D4 */
{
    FN_ENTER(0x0045f1d4);
    /* 0045f1d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f1d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1d9: push 0x8cf540 */ { u32 v = 0x8cf540u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045f1e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045f1ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f1ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045f1f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0045f1f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045f1f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045f1fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045f1fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f201: mov dword ptr [ecx], 0xaf8020 */ W32((u32)(r_ecx), 0xaf8020u);
    /* 0045f207: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045f20e: call 0x45f12c */ r_esp -= 4; W32(r_esp, 0x45f213u); f_0045f12c();
    /* 0045f213: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045f216: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045f21d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f21f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f220: ret  */ FN_RET(0x0045f1d4); r_esp += 4; return;
}

void f_0045f224(void) /* sub_45F224 */
{
    FN_ENTER(0x0045f224);
    /* 0045f224: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0045f22a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045f22d: je 0x45f234 */ if (fZ) goto L_0045f234;
L_0045f22f:; BB(0x0045f22f);
    /* 0045f22f: call 0x45f238 */ r_esp -= 4; W32(r_esp, 0x45f234u); f_0045f238();
L_0045f234:; BB(0x0045f234);
    /* 0045f234: ret  */ FN_RET(0x0045f224); r_esp += 4; return;
}

void f_0045f238(void) /* sub_45F238 */
{
    FN_ENTER(0x0045f238);
    /* 0045f238: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 0045f23e: add dword ptr [eax + 0x394], 1 */ { u32 ad = (u32)(r_eax+0x394u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045f245: mov dword ptr [ecx + 0x3b0], 0 */ W32((u32)(r_ecx+0x3b0u), 0x0u);
    /* 0045f24f: mov dword ptr [ecx + 0x37c], 3 */ W32((u32)(r_ecx+0x37cu), 0x3u);
    /* 0045f259: ret  */ FN_RET(0x0045f238); r_esp += 4; return;
}

void f_0045f25c(void) /* sub_45F25C */
{
    FN_ENTER(0x0045f25c);
    /* 0045f25c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045f25d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f25e: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f261: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045f263: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045f269: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f26c: je 0x45f28c */ if (fZ) goto L_0045f28c;
L_0045f26e:; BB(0x0045f26e);
    /* 0045f26e: mov edx, dword ptr [ebp + 0x380] */ r_edx = R32((u32)(r_ebp+0x380u));
    /* 0045f274: mov esi, dword ptr [edx + 0x384] */ r_esi = R32((u32)(r_edx+0x384u));
    /* 0045f27a: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f27d: je 0x45f28c */ if (fZ) goto L_0045f28c;
L_0045f27f:; BB(0x0045f27f);
    /* 0045f27f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045f281: call 0x45f238 */ r_esp -= 4; W32(r_esp, 0x45f286u); f_0045f238();
    /* 0045f286: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
L_0045f28c:; BB(0x0045f28c);
    /* 0045f28c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f28f: je 0x45f618 */ if (fZ) goto L_0045f618;
L_0045f295:; BB(0x0045f295);
    /* 0045f295: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f298: je 0x45f618 */ if (fZ) goto L_0045f618;
L_0045f29e:; BB(0x0045f29e);
    /* 0045f29e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0045f2a0:; BB(0x0045f2a0);
    /* 0045f2a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f2a2: je 0x45f2cd */ if (fZ) goto L_0045f2cd;
L_0045f2a4:; BB(0x0045f2a4);
    /* 0045f2a4: mov edx, dword ptr [ebp + 0x3b4] */ r_edx = R32((u32)(r_ebp+0x3b4u));
    /* 0045f2aa: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045f2ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045f2af: jl 0x45f5a2 */ if ((fS!=fO)) goto L_0045f5a2;
L_0045f2b5:; BB(0x0045f2b5);
    /* 0045f2b5: mov dword ptr [ebp + 0x3b4], edx */ W32((u32)(r_ebp+0x3b4u), r_edx);
    /* 0045f2bb: cmp edx, 0x1c2 */ {  u32 a = r_edx; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f2c1: jge 0x45f2cd */ if ((fS==fO)) goto L_0045f2cd;
L_0045f2c3:; BB(0x0045f2c3);
    /* 0045f2c3: mov dword ptr [ebp + 0x3b0], 1 */ W32((u32)(r_ebp+0x3b0u), 0x1u);
L_0045f2cd:; BB(0x0045f2cd);
    /* 0045f2cd: mov eax, dword ptr [eax*4 + 0x9a6780] */ r_eax = R32((u32)(r_eax*4+0x9a6780u));
    /* 0045f2d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f2d6: je 0x45f622 */ if (fZ) goto L_0045f622;
L_0045f2dc:; BB(0x0045f2dc);
    /* 0045f2dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045f2de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f2e0u); call_ind(t); }
    /* 0045f2e0: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045f2e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f2e9: je 0x45f5cf */ if (fZ) goto L_0045f5cf;
L_0045f2ef:; BB(0x0045f2ef);
    /* 0045f2ef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f2f2: je 0x45f5cf */ if (fZ) goto L_0045f5cf;
L_0045f2f8:; BB(0x0045f2f8);
    /* 0045f2f8: mov ecx, dword ptr [ebp + 0x3bc] */ r_ecx = R32((u32)(r_ebp+0x3bcu));
    /* 0045f2fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f300: je 0x45f33f */ if (fZ) goto L_0045f33f;
L_0045f302:; BB(0x0045f302);
    /* 0045f302: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0045f305: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0045f308: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0045f30b: mov esi, dword ptr [ebp + 0x3b0] */ r_esi = R32((u32)(r_ebp+0x3b0u));
    /* 0045f311: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045f314: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f316: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045f31a: je 0x45f32a */ if (fZ) goto L_0045f32a;
L_0045f31c:; BB(0x0045f31c);
    /* 0045f31c: fld dword ptr [0x900514] */ FPUSH(R_F32((u32)(0x900514u)));
    /* 0045f322: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045f324: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045f328: jmp 0x45f336 */ goto L_0045f336;
L_0045f32a:; BB(0x0045f32a);
    /* 0045f32a: fld dword ptr [0x900518] */ FPUSH(R_F32((u32)(0x900518u)));
    /* 0045f330: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045f332: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0045f336:; BB(0x0045f336);
    /* 0045f336: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045f339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f33a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45f33fu); f_00508db8();
L_0045f33f:; BB(0x0045f33f);
    /* 0045f33f: fld dword ptr [0x900634] */ FPUSH(R_F32((u32)(0x900634u)));
    /* 0045f345: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 0045f34b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f34d: je 0x45f384 */ if (fZ) goto L_0045f384;
L_0045f34f:; BB(0x0045f34f);
    /* 0045f34f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f351: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 0045f357: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f35a: jge 0x45f372 */ if ((fS==fO)) goto L_0045f372;
L_0045f35c:; BB(0x0045f35c);
    /* 0045f35c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0045f360: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0045f364: fdiv dword ptr [0x900630] */ ST(0) = ST(0) / R_F32((u32)(0x900630u));
    /* 0045f36a: fst dword ptr [ebp + 0x3b8] */ W_F32((u32)(r_ebp+0x3b8u), ST(0));
    /* 0045f370: jmp 0x45f3b8 */ goto L_0045f3b8;
L_0045f372:; BB(0x0045f372);
    /* 0045f372: fld dword ptr [0x90062c] */ FPUSH(R_F32((u32)(0x90062cu)));
    /* 0045f378: mov dword ptr [ebp + 0x3b8], 0x3f800000 */ W32((u32)(r_ebp+0x3b8u), 0x3f800000u);
    /* 0045f382: jmp 0x45f3b8 */ goto L_0045f3b8;
L_0045f384:; BB(0x0045f384);
    /* 0045f384: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 0045f38a: cmp eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f38f: jge 0x45f3b0 */ if ((fS==fO)) goto L_0045f3b0;
L_0045f391:; BB(0x0045f391);
    /* 0045f391: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f393: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045f395: add eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f39a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0045f39e: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0045f3a2: fdiv dword ptr [0x900630] */ ST(0) = ST(0) / R_F32((u32)(0x900630u));
    /* 0045f3a8: fst dword ptr [ebp + 0x3b8] */ W_F32((u32)(r_ebp+0x3b8u), ST(0));
    /* 0045f3ae: jmp 0x45f3b8 */ goto L_0045f3b8;
L_0045f3b0:; BB(0x0045f3b0);
    /* 0045f3b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045f3b2: mov dword ptr [ebp + 0x3b8], eax */ W32((u32)(r_ebp+0x3b8u), r_eax);
L_0045f3b8:; BB(0x0045f3b8);
    /* 0045f3b8: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 0045f3be: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f3c1: je 0x45f5c5 */ if (fZ) goto L_0045f5c5;
L_0045f3c7:; BB(0x0045f3c7);
    /* 0045f3c7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f3ca: je 0x45f5c5 */ if (fZ) goto L_0045f5c5;
L_0045f3d0:; BB(0x0045f3d0);
    /* 0045f3d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045f3d2:; BB(0x0045f3d2);
    /* 0045f3d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f3d4: je 0x45f40b */ if (fZ) goto L_0045f40b;
L_0045f3d6:; BB(0x0045f3d6);
    /* 0045f3d6: fld dword ptr [0x900634] */ FPUSH(R_F32((u32)(0x900634u)));
    /* 0045f3dc: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0045f3de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f3e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f3e1: jae 0x45f40b */ if (!fC) goto L_0045f40b;
L_0045f3e3:; BB(0x0045f3e3);
    /* 0045f3e3: fmul dword ptr [0x900628] */ ST(0) = ST(0) * R_F32((u32)(0x900628u));
    /* 0045f3e9: fild dword ptr [ebp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x60u)));
    /* 0045f3ec: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0045f3ee: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0045f3f2: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0045f3f7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f3fc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0045f400: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0045f404: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045f407: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
L_0045f40b:; BB(0x0045f40b);
    /* 0045f40b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f40d: movzx eax, byte ptr [0xa45a04] */ r_eax = (u32)R8((u32)(0xa45a04u));
    /* 0045f414: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045f416: jne 0x45f434 */ if (!fZ) goto L_0045f434;
L_0045f418:; BB(0x0045f418);
    /* 0045f418: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 0045f41e: fdiv dword ptr [0x900624] */ ST(0) = ST(0) / R_F32((u32)(0x900624u));
    /* 0045f424: fstp dword ptr [0xa45a08] */ W_F32((u32)(0xa45a08u), ST(0)); FPOP();
    /* 0045f42a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f42f: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
L_0045f434:; BB(0x0045f434);
    /* 0045f434: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 0045f43a: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
    /* 0045f440: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f442: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f443: ja 0x45f44e */ if ((!fC&&!fZ)) goto L_0045f44e;
L_0045f445:; BB(0x0045f445);
    /* 0045f445: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f447: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0045f44c: jmp 0x45f478 */ goto L_0045f478;
L_0045f44e:; BB(0x0045f44e);
    /* 0045f44e: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 0045f454: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0045f456: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0045f45a: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0045f45f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f464: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0045f468: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0045f46c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045f470: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0045f474: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_0045f478:; BB(0x0045f478);
    /* 0045f478: mov esi, 1 */ r_esi = 0x1u;
    /* 0045f47d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f480: jle 0x45f488 */ if ((fZ||fS!=fO)) goto L_0045f488;
L_0045f482:; BB(0x0045f482);
    /* 0045f482: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045f484: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045f486: jl 0x45f482 */ if ((fS!=fO)) goto L_0045f482;
L_0045f488:; BB(0x0045f488);
    /* 0045f488: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045f48b: test dword ptr [ebp + 0x3c0], esi */ {  u32 a = R32((u32)(r_ebp+0x3c0u)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f491: jne 0x45f500 */ if (!fZ) goto L_0045f500;
L_0045f493:; BB(0x0045f493);
    /* 0045f493: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f496: je 0x45f5bb */ if (fZ) goto L_0045f5bb;
L_0045f49c:; BB(0x0045f49c);
    /* 0045f49c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f49f: je 0x45f5bb */ if (fZ) goto L_0045f5bb;
L_0045f4a5:; BB(0x0045f4a5);
    /* 0045f4a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045f4a7:; BB(0x0045f4a7);
    /* 0045f4a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f4a9: je 0x45f500 */ if (fZ) goto L_0045f500;
L_0045f4ab:; BB(0x0045f4ab);
    /* 0045f4ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4ad: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045f4b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045f4b5: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x45f4bau); f_007714cc();
    /* 0045f4ba: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0045f4bd: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f4c2: je 0x45f500 */ if (fZ) goto L_0045f500;
L_0045f4c4:; BB(0x0045f4c4);
    /* 0045f4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4c5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45f4cau); f_0068d5a8();
    /* 0045f4ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f4cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f4cd: je 0x45f500 */ if (fZ) goto L_0045f500;
L_0045f4cf:; BB(0x0045f4cf);
    /* 0045f4cf: movsx esi, word ptr [ebp + 0x2cc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2ccu));
    /* 0045f4d6: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0045f4da: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0045f4de: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0045f4e0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0045f4e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045f4e6: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0045f4eb: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0045f4ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4f1: mov ecx, eax */ r_ecx = r_eax;
    /* 0045f4f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4f4: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045f4f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4fb: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x45f4feu); call_ind(t); }
    /* 0045f4fe: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045f500:; BB(0x0045f500);
    /* 0045f500: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045f502: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x45f507u); f_0078730c();
    /* 0045f507: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045f50a: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045f50d: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0045f510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f511: call 0x461478 */ r_esp -= 4; W32(r_esp, 0x45f516u); f_00461478();
    /* 0045f516: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f519: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045f51f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f522: je 0x45f595 */ if (fZ) goto L_0045f595;
L_0045f524:; BB(0x0045f524);
    /* 0045f524: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 0045f52a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f52c: je 0x45f566 */ if (fZ) goto L_0045f566;
L_0045f52e:; BB(0x0045f52e);
    /* 0045f52e: mov edx, dword ptr [ebp + 0x38c] */ r_edx = R32((u32)(r_ebp+0x38cu));
    /* 0045f534: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0045f537: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f53a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0045f53d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045f53f: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x45f544u); f_007b6880();
    /* 0045f544: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f546: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f547: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x45f54cu); f_006946a8();
    /* 0045f54c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f54e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f550: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0045f556: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f55b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f55c: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x45f561u); f_00805608();
    /* 0045f561: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f564: jmp 0x45f595 */ goto L_0045f595;
L_0045f566:; BB(0x0045f566);
    /* 0045f566: mov edx, dword ptr [ebp + 0x38c] */ r_edx = R32((u32)(r_ebp+0x38cu));
    /* 0045f56c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0045f56f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045f572: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0045f575: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0045f57b: mov esi, 1 */ r_esi = 0x1u;
    /* 0045f580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045f581: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045f582: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f587: push 0xff7f5126 */ { u32 v = 0xff7f5126u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f58c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f58d: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x45f592u); f_0080575c();
    /* 0045f592: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045f595:; BB(0x0045f595);
    /* 0045f595: add dword ptr [ebp + 0x3c0], 1 */ { u32 ad = (u32)(r_ebp+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0045f59c: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045f59f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f5a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045f5a1: ret  */ FN_RET(0x0045f25c); r_esp += 4; return;
L_0045f5a2:; BB(0x0045f5a2);
    /* 0045f5a2: mov dword ptr [ebp + 0x3b0], 0 */ W32((u32)(r_ebp+0x3b0u), 0x0u);
    /* 0045f5ac: mov dword ptr [ebp + 0x3b4], 0xa8c */ W32((u32)(r_ebp+0x3b4u), 0xa8cu);
    /* 0045f5b6: jmp 0x45f2cd */ goto L_0045f2cd;
L_0045f5bb:; BB(0x0045f5bb);
    /* 0045f5bb: mov eax, 1 */ r_eax = 0x1u;
    /* 0045f5c0: jmp 0x45f4a7 */ goto L_0045f4a7;
L_0045f5c5:; BB(0x0045f5c5);
    /* 0045f5c5: mov eax, 1 */ r_eax = 0x1u;
    /* 0045f5ca: jmp 0x45f3d2 */ goto L_0045f3d2;
L_0045f5cf:; BB(0x0045f5cf);
    /* 0045f5cf: movzx eax, byte ptr [0xa45968] */ r_eax = (u32)R8((u32)(0xa45968u));
    /* 0045f5d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045f5d8: jne 0x45f5ee */ if (!fZ) goto L_0045f5ee;
L_0045f5da:; BB(0x0045f5da);
    /* 0045f5da: mov dword ptr [0xa4596c], 0x3dcccccc */ W32((u32)(0xa4596cu), 0x3dccccccu);
    /* 0045f5e4: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f5e9: mov byte ptr [0xa45968], al */ W8((u32)(0xa45968u), (u8)r_eax);
L_0045f5ee:; BB(0x0045f5ee);
    /* 0045f5ee: mov ecx, dword ptr [ebp + 0x3c4] */ r_ecx = R32((u32)(r_ebp+0x3c4u));
    /* 0045f5f4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45f5f9u); f_0082dcbc();
    /* 0045f5f9: fld dword ptr [0xa4596c] */ FPUSH(R_F32((u32)(0xa4596cu)));
    /* 0045f5ff: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045f601: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0045f604: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0045f60a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0045f60d: add dword ptr [ebp + 0x3c4], eax */ { u32 ad = (u32)(r_ebp+0x3c4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0045f613: jmp 0x45f2f8 */ goto L_0045f2f8;
L_0045f618:; BB(0x0045f618);
    /* 0045f618: mov edx, 1 */ r_edx = 0x1u;
    /* 0045f61d: jmp 0x45f2a0 */ goto L_0045f2a0;
L_0045f622:; BB(0x0045f622);
    /* 0045f622: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045f625: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f626: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045f627: ret  */ FN_RET(0x0045f25c); r_esp += 4; return;
}

void f_0045f628(void) /* sub_45F628 */
{
    FN_ENTER(0x0045f628);
    /* 0045f628: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0045f62b: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0045f62e: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0045f631: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0045f634: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0045f637: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0045f63a: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0045f63d: movzx eax, byte ptr [0xa45970] */ r_eax = (u32)R8((u32)(0xa45970u));
    /* 0045f644: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045f646: jne 0x45f662 */ if (!fZ) goto L_0045f662;
L_0045f648:; BB(0x0045f648);
    /* 0045f648: fld dword ptr [0x900620] */ FPUSH(R_F32((u32)(0x900620u)));
    /* 0045f64e: mov dword ptr [0xa45974], 0x40c00000 */ W32((u32)(0xa45974u), 0x40c00000u);
    /* 0045f658: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f65b: mov byte ptr [0xa45970], al */ W8((u32)(0xa45970u), (u8)r_eax);
    /* 0045f660: jmp 0x45f668 */ goto L_0045f668;
L_0045f662:; BB(0x0045f662);
    /* 0045f662: fld dword ptr [0xa45974] */ FPUSH(R_F32((u32)(0xa45974u)));
L_0045f668:; BB(0x0045f668);
    /* 0045f668: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0045f66a: jne 0x45f680 */ if (!fZ) goto L_0045f680;
L_0045f66c:; BB(0x0045f66c);
    /* 0045f66c: mov dword ptr [0xa45978], 0x3eaaaaab */ W32((u32)(0xa45978u), 0x3eaaaaabu);
    /* 0045f676: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 0045f67b: mov byte ptr [0xa45970], al */ W8((u32)(0xa45970u), (u8)r_eax);
L_0045f680:; BB(0x0045f680);
    /* 0045f680: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045f682: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f684: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f685: jbe 0x45f6ac */ if ((fC||fZ)) goto L_0045f6ac;
L_0045f687:; BB(0x0045f687);
    /* 0045f687: fld dword ptr [0xa45978] */ FPUSH(R_F32((u32)(0xa45978u)));
    /* 0045f68d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0045f68f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045f691: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f693: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f694: jae 0x45f6a6 */ if (!fC) goto L_0045f6a6;
L_0045f696:; BB(0x0045f696);
    /* 0045f696: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045f698: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0045f69b: mov dword ptr [ecx + 0x37c], 1 */ W32((u32)(r_ecx+0x37cu), 0x1u);
    /* 0045f6a5: ret  */ FN_RET(0x0045f628); r_esp += 4; return;
L_0045f6a6:; BB(0x0045f6a6);
    /* 0045f6a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f6a8: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0045f6ab: ret  */ FN_RET(0x0045f628); r_esp += 4; return;
L_0045f6ac:; BB(0x0045f6ac);
    /* 0045f6ac: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045f6ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f6b0: ret  */ FN_RET(0x0045f628); r_esp += 4; return;
}

void f_0045f6b4(void) /* sub_45F6B4 */
{
    FN_ENTER(0x0045f6b4);
    /* 0045f6b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6b7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f6ba: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045f6bc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0045f6bf: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 0045f6c2: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0045f6c5: mov edx, ebx */ r_edx = r_ebx;
    /* 0045f6c7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045f6ca: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 0045f6cd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045f6d1: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 0045f6d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045f6d8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45f6ddu); f_0082f9c4();
    /* 0045f6dd: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045f6e5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0045f6e8: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45f6edu); f_0083173c();
    /* 0045f6ed: fld dword ptr [0x90051c] */ FPUSH(R_F32((u32)(0x90051cu)));
    /* 0045f6f3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045f6f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f6f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f6f8: jbe 0x45f7b5 */ if ((fC||fZ)) goto L_0045f7b5;
L_0045f6fe:; BB(0x0045f6fe);
    /* 0045f6fe: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 0045f704: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045f706: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045f708: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f70a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f70c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f70d: jae 0x45f7bd */ if (!fC) goto L_0045f7bd;
L_0045f713:; BB(0x0045f713);
    /* 0045f713: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045f715: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f717: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 0045f71a: mov edx, dword ptr [ebp + 0x58] */ r_edx = R32((u32)(r_ebp+0x58u));
    /* 0045f71d: mov ebx, dword ptr [ebp + 0x3ac] */ r_ebx = R32((u32)(r_ebp+0x3acu));
    /* 0045f723: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0045f726: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0045f729: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045f72c: mov dword ptr [ebp + 0x3a0], 0 */ W32((u32)(r_ebp+0x3a0u), 0x0u);
    /* 0045f736: mov dword ptr [ebp + 0x3ac], ebx */ W32((u32)(r_ebp+0x3acu), r_ebx);
    /* 0045f73c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045f73e: mov dword ptr [ebp + 0x39c], 0 */ W32((u32)(r_ebp+0x39cu), 0x0u);
    /* 0045f748: mov dword ptr [ebp + 0x394], 0 */ W32((u32)(r_ebp+0x394u), 0x0u);
    /* 0045f752: jge 0x45f8e2 */ if ((fS==fO)) goto L_0045f8e2;
L_0045f758:; BB(0x0045f758);
    /* 0045f758: movzx eax, byte ptr [0xa45980] */ r_eax = (u32)R8((u32)(0xa45980u));
    /* 0045f75f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045f761: jne 0x45f777 */ if (!fZ) goto L_0045f777;
L_0045f763:; BB(0x0045f763);
    /* 0045f763: mov dword ptr [0xa45984], 0x43160000 */ W32((u32)(0xa45984u), 0x43160000u);
    /* 0045f76d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f772: mov byte ptr [0xa45980], al */ W8((u32)(0xa45980u), (u8)r_eax);
L_0045f777:; BB(0x0045f777);
    /* 0045f777: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f779: push dword ptr [0xa45984] */ { u32 v = R32((u32)(0xa45984u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045f77f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045f781: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x45f786u); f_007714cc();
    /* 0045f786: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0045f789: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f78e: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0045f794: je 0x45f8e9 */ if (fZ) goto L_0045f8e9;
L_0045f79a:; BB(0x0045f79a);
    /* 0045f79a: mov dword ptr [ebp + 0x3ac], 0xb4 */ W32((u32)(r_ebp+0x3acu), 0xb4u);
    /* 0045f7a4: mov dword ptr [ebp + 0x37c], 2 */ W32((u32)(r_ebp+0x37cu), 0x2u);
    /* 0045f7ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045f7b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f7b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f7b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045f7b4: ret  */ FN_RET(0x0045f6b4); r_esp += 4; return;
L_0045f7b5:; BB(0x0045f7b5);
    /* 0045f7b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f7b7: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
L_0045f7bd:; BB(0x0045f7bd);
    /* 0045f7bd: movzx eax, byte ptr [0xa45980] */ r_eax = (u32)R8((u32)(0xa45980u));
    /* 0045f7c4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045f7c6: jne 0x45f7e4 */ if (!fZ) goto L_0045f7e4;
L_0045f7c8:; BB(0x0045f7c8);
    /* 0045f7c8: fld dword ptr [0x900610] */ FPUSH(R_F32((u32)(0x900610u)));
    /* 0045f7ce: fmul dword ptr [0xa45a10] */ ST(0) = ST(0) * R_F32((u32)(0xa45a10u));
    /* 0045f7d4: fst dword ptr [0xa4597c] */ W_F32((u32)(0xa4597cu), ST(0));
    /* 0045f7da: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f7dd: mov byte ptr [0xa45980], al */ W8((u32)(0xa45980u), (u8)r_eax);
    /* 0045f7e2: jmp 0x45f7ea */ goto L_0045f7ea;
L_0045f7e4:; BB(0x0045f7e4);
    /* 0045f7e4: fld dword ptr [0xa4597c] */ FPUSH(R_F32((u32)(0xa4597cu)));
L_0045f7ea:; BB(0x0045f7ea);
    /* 0045f7ea: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045f7ec: jne 0x45f802 */ if (!fZ) goto L_0045f802;
L_0045f7ee:; BB(0x0045f7ee);
    /* 0045f7ee: mov dword ptr [0xa45988], 0x41c80000 */ W32((u32)(0xa45988u), 0x41c80000u);
    /* 0045f7f8: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f7fd: mov byte ptr [0xa45980], al */ W8((u32)(0xa45980u), (u8)r_eax);
L_0045f802:; BB(0x0045f802);
    /* 0045f802: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045f804: fcom dword ptr [0xa45988] */ fx_compare(ST(0), R_F32((u32)(0xa45988u))); 
    /* 0045f80a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f80c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f80d: jae 0x45f83a */ if (!fC) goto L_0045f83a;
L_0045f80f:; BB(0x0045f80f);
    /* 0045f80f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045f811: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0045f813: fld dword ptr [0xa45a10] */ FPUSH(R_F32((u32)(0xa45a10u)));
    /* 0045f819: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045f81b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f81d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f81e: mov esi, dword ptr [0xa45a10] */ r_esi = R32((u32)(0xa45a10u));
    /* 0045f824: jbe 0x45f830 */ if ((fC||fZ)) goto L_0045f830;
L_0045f826:; BB(0x0045f826);
    /* 0045f826: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045f828: mov dword ptr [ebp + 0x3a0], esi */ W32((u32)(r_ebp+0x3a0u), r_esi);
    /* 0045f82e: jmp 0x45f863 */ goto L_0045f863;
L_0045f830:; BB(0x0045f830);
    /* 0045f830: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f832: fst dword ptr [ebp + 0x3a0] */ W_F32((u32)(r_ebp+0x3a0u), ST(0));
    /* 0045f838: jmp 0x45f863 */ goto L_0045f863;
L_0045f83a:; BB(0x0045f83a);
    /* 0045f83a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045f83c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045f83e: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 0045f844: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045f846: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f848: mov esi, dword ptr [ebp + 0x3a4] */ r_esi = R32((u32)(r_ebp+0x3a4u));
    /* 0045f84e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f84f: jae 0x45f85b */ if (!fC) goto L_0045f85b;
L_0045f851:; BB(0x0045f851);
    /* 0045f851: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045f853: mov dword ptr [ebp + 0x3a0], esi */ W32((u32)(r_ebp+0x3a0u), r_esi);
    /* 0045f859: jmp 0x45f863 */ goto L_0045f863;
L_0045f85b:; BB(0x0045f85b);
    /* 0045f85b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f85d: fst dword ptr [ebp + 0x3a0] */ W_F32((u32)(r_ebp+0x3a0u), ST(0));
L_0045f863:; BB(0x0045f863);
    /* 0045f863: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045f865: fcomp dword ptr [0x900618] */ fx_compare(ST(0), R_F32((u32)(0x900618u))); FPOP();
    /* 0045f86b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f86d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f86e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045f871: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0045f874: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0045f878: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045f87c: mov dword ptr [ebp + 0x398], esi */ W32((u32)(r_ebp+0x398u), r_esi);
    /* 0045f882: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0045f886: je 0x45f8bd */ if (fZ) goto L_0045f8bd;
L_0045f888:; BB(0x0045f888);
    /* 0045f888: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045f88a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045f88c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f88e: mov dword ptr [ebp + 0x394], edx */ W32((u32)(r_ebp+0x394u), r_edx);
    /* 0045f894: mov dword ptr [ebp + 0x39c], esi */ W32((u32)(r_ebp+0x39cu), r_esi);
    /* 0045f89a: lea esi, [ebp + 0x394] */ r_esi = (u32)(r_ebp+0x394u);
    /* 0045f8a0: mov ecx, esi */ r_ecx = r_esi;
    /* 0045f8a2: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45f8a7u); f_0082df08();
    /* 0045f8a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045f8a9: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 0045f8af: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 0045f8b5: fld dword ptr [ebp + 0x39c] */ FPUSH(R_F32((u32)(r_ebp+0x39cu)));
    /* 0045f8bb: jmp 0x45f8c3 */ goto L_0045f8c3;
L_0045f8bd:; BB(0x0045f8bd);
    /* 0045f8bd: lea esi, [ebp + 0x394] */ r_esi = (u32)(r_ebp+0x394u);
L_0045f8c3:; BB(0x0045f8c3);
    /* 0045f8c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045f8c5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0045f8c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045f8c9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045f8cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045f8cd: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 0045f8d3: fstp dword ptr [ebp + 0x39c] */ W_F32((u32)(r_ebp+0x39cu), ST(0)); FPOP();
    /* 0045f8d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045f8db: mov edx, esi */ r_edx = r_esi;
    /* 0045f8dd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45f8e2u); f_0082ebac();
L_0045f8e2:; BB(0x0045f8e2);
    /* 0045f8e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045f8e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f8e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f8e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045f8e8: ret  */ FN_RET(0x0045f6b4); r_esp += 4; return;
L_0045f8e9:; BB(0x0045f8e9);
    /* 0045f8e9: mov dword ptr [ebp + 0x3ac], 0x3c */ W32((u32)(r_ebp+0x3acu), 0x3cu);
    /* 0045f8f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045f8f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045f8f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f8f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045f8f9: ret  */ FN_RET(0x0045f6b4); r_esp += 4; return;
}

void f_0045f8fc(void) /* sub_45F8FC */
{
    FN_ENTER(0x0045f8fc);
    /* 0045f8fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045f8fe: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f901: mov edi, ecx */ r_edi = r_ecx;
    /* 0045f903: movzx eax, byte ptr [0xa4598c] */ r_eax = (u32)R8((u32)(0xa4598cu));
    /* 0045f90a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045f90c: jne 0x45f92a */ if (!fZ) goto L_0045f92a;
L_0045f90e:; BB(0x0045f90e);
    /* 0045f90e: fld dword ptr [0x900608] */ FPUSH(R_F32((u32)(0x900608u)));
    /* 0045f914: fmul dword ptr [0xa45a14] */ ST(0) = ST(0) * R_F32((u32)(0xa45a14u));
    /* 0045f91a: fstp dword ptr [0xa45990] */ W_F32((u32)(0xa45990u), ST(0)); FPOP();
    /* 0045f920: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045f925: mov byte ptr [0xa4598c], al */ W8((u32)(0xa4598cu), (u8)r_eax);
L_0045f92a:; BB(0x0045f92a);
    /* 0045f92a: push dword ptr [edi + 0x390] */ { u32 v = R32((u32)(r_edi+0x390u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045f930: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45f935u); f_0068d5a8();
    /* 0045f935: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f938: je 0x45fa5d */ if (fZ) goto L_0045fa5d;
L_0045f93e:; BB(0x0045f93e);
    /* 0045f93e: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0045f941: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0045f944: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 0045f948: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045f94a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045f94d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045f951: shl esi, 0xd */ { u32 c = (13u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045f954: mov ecx, esi */ r_ecx = r_esi;
    /* 0045f956: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45f95bu); f_0082dcbc();
    /* 0045f95b: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 0045f961: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045f963: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0045f966: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045f96a: mov ecx, esi */ r_ecx = r_esi;
    /* 0045f96c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45f971u); f_0082ddd8();
    /* 0045f971: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 0045f977: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045f979: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045f97d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045f97f: fld dword ptr [0xa45990] */ FPUSH(R_F32((u32)(0xa45990u)));
    /* 0045f985: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045f989: fcomp dword ptr [edi + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x38u))); FPOP();
    /* 0045f98c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f98e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045f990: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045f994: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f995: jbe 0x45f9a7 */ if ((fC||fZ)) goto L_0045f9a7;
L_0045f997:; BB(0x0045f997);
    /* 0045f997: fld dword ptr [edi + 0x394] */ FPUSH(R_F32((u32)(r_edi+0x394u)));
    /* 0045f99d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0045f99f: fstp dword ptr [edi + 0x394] */ W_F32((u32)(r_edi+0x394u), ST(0)); FPOP();
    /* 0045f9a5: jmp 0x45f9b5 */ goto L_0045f9b5;
L_0045f9a7:; BB(0x0045f9a7);
    /* 0045f9a7: fld dword ptr [edi + 0x394] */ FPUSH(R_F32((u32)(r_edi+0x394u)));
    /* 0045f9ad: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0045f9af: fstp dword ptr [edi + 0x394] */ W_F32((u32)(r_edi+0x394u), ST(0)); FPOP();
L_0045f9b5:; BB(0x0045f9b5);
    /* 0045f9b5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045f9b9: fcomp dword ptr [edi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x40u))); FPOP();
    /* 0045f9bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f9be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f9bf: jbe 0x45f9d1 */ if ((fC||fZ)) goto L_0045f9d1;
L_0045f9c1:; BB(0x0045f9c1);
    /* 0045f9c1: fld dword ptr [edi + 0x39c] */ FPUSH(R_F32((u32)(r_edi+0x39cu)));
    /* 0045f9c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045f9c9: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 0045f9cf: jmp 0x45f9df */ goto L_0045f9df;
L_0045f9d1:; BB(0x0045f9d1);
    /* 0045f9d1: fld dword ptr [edi + 0x39c] */ FPUSH(R_F32((u32)(r_edi+0x39cu)));
    /* 0045f9d7: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0045f9d9: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
L_0045f9df:; BB(0x0045f9df);
    /* 0045f9df: lea esi, [edi + 0x394] */ r_esi = (u32)(r_edi+0x394u);
    /* 0045f9e5: mov ecx, esi */ r_ecx = r_esi;
    /* 0045f9e7: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45f9ecu); f_0083173c();
    /* 0045f9ec: fcom dword ptr [edi + 0x3a4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3a4u))); 
    /* 0045f9f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045f9f4: fstp dword ptr [edi + 0x3a0] */ W_F32((u32)(r_edi+0x3a0u), ST(0)); FPOP();
    /* 0045f9fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045f9fb: jbe 0x45fa3a */ if ((fC||fZ)) goto L_0045fa3a;
L_0045f9fd:; BB(0x0045f9fd);
    /* 0045f9fd: mov ecx, esi */ r_ecx = r_esi;
    /* 0045f9ff: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45fa04u); f_0082df08();
    /* 0045fa04: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fa06: fld dword ptr [edi + 0x3a4] */ FPUSH(R_F32((u32)(r_edi+0x3a4u)));
    /* 0045fa0c: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 0045fa12: fld dword ptr [edi + 0x394] */ FPUSH(R_F32((u32)(r_edi+0x394u)));
    /* 0045fa18: fld dword ptr [edi + 0x39c] */ FPUSH(R_F32((u32)(r_edi+0x39cu)));
    /* 0045fa1e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045fa20: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0045fa22: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045fa24: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045fa26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045fa28: fstp dword ptr [edi + 0x394] */ W_F32((u32)(r_edi+0x394u), ST(0)); FPOP();
    /* 0045fa2e: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 0045fa34: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
L_0045fa3a:; BB(0x0045fa3a);
    /* 0045fa3a: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0045fa3d: mov edx, esi */ r_edx = r_esi;
    /* 0045fa3f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45fa44u); f_0082ebac();
    /* 0045fa44: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0045fa4a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fa4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045fa4f: jl 0x45fa77 */ if ((fS!=fO)) goto L_0045fa77;
L_0045fa51:; BB(0x0045fa51);
    /* 0045fa51: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 0045fa57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045fa5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045fa5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045fa5c: ret  */ FN_RET(0x0045f8fc); r_esp += 4; return;
L_0045fa5d:; BB(0x0045fa5d);
    /* 0045fa5d: mov dword ptr [edi + 0x3ac], 0x3c */ W32((u32)(r_edi+0x3acu), 0x3cu);
    /* 0045fa67: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 0045fa71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045fa74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045fa75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045fa76: ret  */ FN_RET(0x0045f8fc); r_esp += 4; return;
L_0045fa77:; BB(0x0045fa77);
    /* 0045fa77: mov dword ptr [edi + 0x3ac], 0x3c */ W32((u32)(r_edi+0x3acu), 0x3cu);
    /* 0045fa81: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 0045fa8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045fa8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045fa8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045fa90: ret  */ FN_RET(0x0045f8fc); r_esp += 4; return;
}

void f_0045fa94(void) /* sub_45FA94 */
{
    FN_ENTER(0x0045fa94);
    /* 0045fa94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fa95: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045fa97: movzx eax, byte ptr [0xa45994] */ r_eax = (u32)R8((u32)(0xa45994u));
    /* 0045fa9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045faa0: jne 0x45fabe */ if (!fZ) goto L_0045fabe;
L_0045faa2:; BB(0x0045faa2);
    /* 0045faa2: fld dword ptr [0x900604] */ FPUSH(R_F32((u32)(0x900604u)));
    /* 0045faa8: mov dword ptr [0xa45998], 0xbeaaaaab */ W32((u32)(0xa45998u), 0xbeaaaaabu);
    /* 0045fab2: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045fab7: mov byte ptr [0xa45994], al */ W8((u32)(0xa45994u), (u8)r_eax);
    /* 0045fabc: jmp 0x45fac4 */ goto L_0045fac4;
L_0045fabe:; BB(0x0045fabe);
    /* 0045fabe: fld dword ptr [0xa45998] */ FPUSH(R_F32((u32)(0xa45998u)));
L_0045fac4:; BB(0x0045fac4);
    /* 0045fac4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0045fac6: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0045fac9: fcom dword ptr [0x900600] */ fx_compare(ST(0), R_F32((u32)(0x900600u))); 
    /* 0045facf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045fad1: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 0045fad4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045fad5: jae 0x45fafa */ if (!fC) goto L_0045fafa;
L_0045fad7:; BB(0x0045fad7);
    /* 0045fad7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045fad9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045fadb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fadd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045fadf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045fae0: jb 0x45fafc */ if (fC) goto L_0045fafc;
L_0045fae2:; BB(0x0045fae2);
    /* 0045fae2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fae4: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fae9: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0045faec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045faed: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45faf2u); f_0050b510();
    /* 0045faf2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045faf5: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0045faf8: jmp 0x45fafc */ goto L_0045fafc;
L_0045fafa:; BB(0x0045fafa);
    /* 0045fafa: fstp st(1) */ ST(1) = ST(0); FPOP();
L_0045fafc:; BB(0x0045fafc);
    /* 0045fafc: fcomp dword ptr [0x9005fc] */ fx_compare(ST(0), R_F32((u32)(0x9005fcu))); FPOP();
    /* 0045fb02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045fb04: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 0045fb07: add edx, 0x111 */ {  u32 a = r_edx; u32 b = 0x111u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0045fb0d: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 0045fb10: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045fb11: jae 0x45fb22 */ if (!fC) goto L_0045fb22;
L_0045fb13:; BB(0x0045fb13);
    /* 0045fb13: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0045fb17: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045fb1c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0045fb20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fb21: ret  */ FN_RET(0x0045fa94); r_esp += 4; return;
L_0045fb22:; BB(0x0045fb22);
    /* 0045fb22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fb23: ret  */ FN_RET(0x0045fa94); r_esp += 4; return;
}

void f_0045fb24(void) /* sub_45FB24 */
{
    FN_ENTER(0x0045fb24);
    /* 0045fb24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb25: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fb27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb29: push 0x8cf582 */ { u32 v = 0x8cf582u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045fb34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045fb3c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045fb3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045fb42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0045fb45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045fb48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045fb4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045fb4d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045fb50: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045fb53: push 0x3cc */ { u32 v = 0x3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb58: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x45fb5du); f_005caba4();
    /* 0045fb5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045fb5e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045fb61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fb63: je 0x45fbd0 */ if (fZ) goto L_0045fbd0;
L_0045fb65:; BB(0x0045fb65);
    /* 0045fb65: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0045fb6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045fb73: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fb75: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x45fb7au); f_005caba4();
    /* 0045fb7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045fb7b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045fb7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fb80: je 0x45fbcc */ if (fZ) goto L_0045fbcc;
L_0045fb82:; BB(0x0045fb82);
    /* 0045fb82: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0045fb89: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045fb90: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045fb96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045fb99: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x45fb9eu); f_00787a4c();
    /* 0045fb9e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045fba1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0045fba8:; BB(0x0045fba8);
    /* 0045fba8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045fbab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045fbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbaf: call 0x45fbd4 */ r_esp -= 4; W32(r_esp, 0x45fbb4u); f_0045fbd4();
    /* 0045fbb4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045fbb7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0045fbbe:; BB(0x0045fbbe);
    /* 0045fbbe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045fbc1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045fbc8: mov esp, ebp */ r_esp = r_ebp;
    /* 0045fbca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045fbcb: ret  */ FN_RET(0x0045fb24); r_esp += 4; return;
L_0045fbcc:; BB(0x0045fbcc);
    /* 0045fbcc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045fbce: jmp 0x45fba8 */ goto L_0045fba8;
L_0045fbd0:; BB(0x0045fbd0);
    /* 0045fbd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045fbd2: jmp 0x45fbbe */ goto L_0045fbbe;
}

void f_0045fbd4(void) /* sub_45FBD4 */
{
    FN_ENTER(0x0045fbd4);
    /* 0045fbd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0045fbd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbd9: push 0x8cf59c */ { u32 v = 0x8cf59cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045fbe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fbe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045fbec: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045fbef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045fbf2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0045fbf5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0045fbf8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0045fbfb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045fbfe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045fc01: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0045fc04: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045fc07: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x45fc0cu); f_007865e8();
    /* 0045fc0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045fc13: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fc16: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0045fc19: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fc1c: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 0045fc22: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045fc25: mov dword ptr [ebx + 0x2e8], edx */ W32((u32)(r_ebx+0x2e8u), r_edx);
    /* 0045fc2b: mov dword ptr [ebx], 0xaf7d60 */ W32((u32)(r_ebx), 0xaf7d60u);
    /* 0045fc31: mov eax, dword ptr [0x9a67bc] */ r_eax = R32((u32)(0x9a67bcu));
    /* 0045fc36: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0045fc39: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0045fc3b: mov dword ptr [ebx + 0x380], esi */ W32((u32)(r_ebx+0x380u), r_esi);
    /* 0045fc41: add dword ptr [esi + 0x390], 1 */ { u32 ad = (u32)(r_esi+0x390u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0045fc48: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0045fc4a: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045fc4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc4e: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x45fc54u); call_ind(t); }
    /* 0045fc54: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fc57: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0045fc59: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x45fc5fu); call_ind(t); }
    /* 0045fc5f: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 0045fc64: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fc67: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 0045fc6a: mov esi, dword ptr [ecx + 0x3c] */ r_esi = R32((u32)(r_ecx+0x3cu));
    /* 0045fc6d: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 0045fc70: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0045fc76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc78: push 0x9a67c8 */ { u32 v = 0x9a67c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fc7d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045fc7f: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0045fc82: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0045fc85: mov dword ptr [ecx + 0x74], ebx */ W32((u32)(r_ecx+0x74u), r_ebx);
    /* 0045fc88: mov dword ptr [ecx + 0x78], esi */ W32((u32)(r_ecx+0x78u), r_esi);
    /* 0045fc8b: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 0045fc8e: mov dword ptr [ecx + 0x50], ebx */ W32((u32)(r_ecx+0x50u), r_ebx);
    /* 0045fc91: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 0045fc94: mov dword ptr [ecx + 0x58], edi */ W32((u32)(r_ecx+0x58u), r_edi);
    /* 0045fc97: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 0045fc9a: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 0045fc9d: mov dword ptr [ecx + 0x4c], edi */ W32((u32)(r_ecx+0x4cu), r_edi);
    /* 0045fca0: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x45fca5u); f_007b9a88();
    /* 0045fca5: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fca8: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0045fcab: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0045fcae: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fcb0: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 0045fcb6: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0045fcb9: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0045fcc3: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0045fcc9: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0045fccf: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 0045fcd9: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0045fcdf: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 0045fce9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x45fceeu); f_0077a684();
    /* 0045fcee: mov esi, eax */ r_esi = r_eax;
    /* 0045fcf0: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fcf2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x45fcf7u); f_0077a698();
    /* 0045fcf7: mov ebx, eax */ r_ebx = r_eax;
    /* 0045fcf9: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fcfb: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x45fd00u); f_0077a6b4();
    /* 0045fd00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fd03: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fd06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd09: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x45fd0eu); f_007868f8();
    /* 0045fd0e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fd11: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 0045fd18: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0045fd1f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x45fd24u); f_007b4f54();
    /* 0045fd24: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fd27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd29: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x45fd2eu); f_00787550();
    /* 0045fd2e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fd31: mov dword ptr [eax + 0x390], 0 */ W32((u32)(r_eax+0x390u), 0x0u);
    /* 0045fd3b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fd3e: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd44: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45fd49u); f_00509590();
    /* 0045fd49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045fd4c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fd4f: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 0045fd55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045fd57: je 0x45fd65 */ if (fZ) goto L_0045fd65;
L_0045fd59:; BB(0x0045fd59);
    /* 0045fd59: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fd5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0045fd5d: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45fd62u); f_00508efc();
    /* 0045fd62: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
L_0045fd65:; BB(0x0045fd65);
    /* 0045fd65: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0045fd69: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
    /* 0045fd73: mov esi, ebx */ r_esi = r_ebx;
    /* 0045fd75: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045fd78: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 0045fd82: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0045fd85: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045fd87: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045fd89: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 0045fd93: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045fd95: mov dword ptr [ecx + 0x3ac], edi */ W32((u32)(r_ecx+0x3acu), r_edi);
    /* 0045fd9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045fd9d: mov dword ptr [ecx + 0x394], 0 */ W32((u32)(r_ecx+0x394u), 0x0u);
    /* 0045fda7: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0045fdaa: mov eax, ebx */ r_eax = r_ebx;
    /* 0045fdac: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045fdaf: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
    /* 0045fdb9: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0045fdbc: mov dword ptr [ecx + 0x3c0], edx */ W32((u32)(r_ecx+0x3c0u), r_edx);
    /* 0045fdc2: mov dword ptr [ecx + 0x3b0], edx */ W32((u32)(r_ecx+0x3b0u), r_edx);
    /* 0045fdc8: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0045fdcd: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045fdcf: mov eax, ebx */ r_eax = r_ebx;
    /* 0045fdd1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0045fdd4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045fdd6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0045fdd9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fddb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fddd: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0045fddf: lea eax, [ebx + ebx + 2] */ r_eax = (u32)(r_ebx+r_ebx+0x2u);
    /* 0045fde3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0045fde6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fde8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fdea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045fdec: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045fdee: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0045fdf1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fdf3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fdf5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fdf7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045fdf9: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 0045fdff: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45fe04u); f_007751b0();
    /* 0045fe04: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fe07: fld dword ptr [0x9005f0] */ FPUSH(R_F32((u32)(0x9005f0u)));
    /* 0045fe0d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045fe0f: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0045fe12: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0045fe16: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045fe1b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045fe1e: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0045fe21: fistp dword ptr [ecx + 0x3c4] */ W32((u32)(r_ecx+0x3c4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045fe27: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0045fe2a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45fe2fu); f_007751b0();
    /* 0045fe2f: fld dword ptr [0x9005e8] */ FPUSH(R_F32((u32)(0x9005e8u)));
    /* 0045fe35: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045fe37: fadd dword ptr [0x9005ec] */ ST(0) = ST(0) + R_F32((u32)(0x9005ecu));
    /* 0045fe3d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fe40: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0045fe43: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0045fe47: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045fe4c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045fe4f: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0045fe52: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045fe55: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0045fe58: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045fe5b: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 0045fe61: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045fe63: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x45fe68u); f_0077a6cc();
    /* 0045fe68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045fe69: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045fe6c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0045fe6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045fe70: fcom dword ptr [0xa45a10] */ fx_compare(ST(0), R_F32((u32)(0xa45a10u))); 
    /* 0045fe76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045fe78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045fe79: ja 0x45fe85 */ if ((!fC&&!fZ)) goto L_0045fe85;
L_0045fe7b:; BB(0x0045fe7b);
    /* 0045fe7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fe7d: fld dword ptr [0xa45a14] */ FPUSH(R_F32((u32)(0xa45a14u)));
    /* 0045fe83: jmp 0x45fe9e */ goto L_0045fe9e;
L_0045fe85:; BB(0x0045fe85);
    /* 0045fe85: fld dword ptr [0xa45a14] */ FPUSH(R_F32((u32)(0xa45a14u)));
    /* 0045fe8b: fld dword ptr [0x9005e4] */ FPUSH(R_F32((u32)(0x9005e4u)));
    /* 0045fe91: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045fe93: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0045fe95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045fe97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fe99: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045fe9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045fe9c: jae 0x45fea6 */ if (!fC) goto L_0045fea6;
L_0045fe9e:; BB(0x0045fe9e);
    /* 0045fe9e: fstp dword ptr [ecx + 0x3a4] */ W_F32((u32)(r_ecx+0x3a4u), ST(0)); FPOP();
    /* 0045fea4: jmp 0x45feae */ goto L_0045feae;
L_0045fea6:; BB(0x0045fea6);
    /* 0045fea6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fea8: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
L_0045feae:; BB(0x0045feae);
    /* 0045feae: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0045feb0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x45feb5u); f_0077a6cc();
    /* 0045feb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045feb6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045feb9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0045febb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045febd: fcom dword ptr [0xa45a10] */ fx_compare(ST(0), R_F32((u32)(0xa45a10u))); 
    /* 0045fec3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045fec5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045fec6: ja 0x45fed2 */ if ((!fC&&!fZ)) goto L_0045fed2;
L_0045fec8:; BB(0x0045fec8);
    /* 0045fec8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045feca: fld dword ptr [0xa45a18] */ FPUSH(R_F32((u32)(0xa45a18u)));
    /* 0045fed0: jmp 0x45feeb */ goto L_0045feeb;
L_0045fed2:; BB(0x0045fed2);
    /* 0045fed2: fld dword ptr [0xa45a18] */ FPUSH(R_F32((u32)(0xa45a18u)));
    /* 0045fed8: fld dword ptr [0x9005e4] */ FPUSH(R_F32((u32)(0x9005e4u)));
    /* 0045fede: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045fee0: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0045fee2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045fee4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fee6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045fee8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045fee9: jae 0x45fef3 */ if (!fC) goto L_0045fef3;
L_0045feeb:; BB(0x0045feeb);
    /* 0045feeb: fstp dword ptr [ecx + 0x3a8] */ W_F32((u32)(r_ecx+0x3a8u), ST(0)); FPOP();
    /* 0045fef1: jmp 0x45fefb */ goto L_0045fefb;
L_0045fef3:; BB(0x0045fef3);
    /* 0045fef3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045fef5: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
L_0045fefb:; BB(0x0045fefb);
    /* 0045fefb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045fefe: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045ff01: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045ff04: mov eax, ecx */ r_eax = r_ecx;
    /* 0045ff06: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 0045ff10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ff13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045ff1a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ff1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ff1d: ret 8 */ FN_RET(0x0045fbd4); r_esp += 12; return;
}

void f_0045ff20(void) /* sub_45FF20 */
{
    FN_ENTER(0x0045ff20);
    /* 0045ff20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff21: mov edi, ecx */ r_edi = r_ecx;
    /* 0045ff23: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0045ff29: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045ff2c: je 0x45ff4e */ if (fZ) goto L_0045ff4e;
L_0045ff2e:; BB(0x0045ff2e);
    /* 0045ff2e: mov ecx, edi */ r_ecx = r_edi;
    /* 0045ff30: call 0x787348 */ r_esp -= 4; W32(r_esp, 0x45ff35u); f_00787348();
    /* 0045ff35: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 0045ff3b: add dword ptr [eax + 0x394], 1 */ { u32 ad = (u32)(r_eax+0x394u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ff42: mov dword ptr [edi + 0x37c], 3 */ W32((u32)(r_edi+0x37cu), 0x3u);
    /* 0045ff4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ff4d: ret  */ FN_RET(0x0045ff20); r_esp += 4; return;
L_0045ff4e:; BB(0x0045ff4e);
    /* 0045ff4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ff4f: ret  */ FN_RET(0x0045ff20); r_esp += 4; return;
}

void f_0045ff50(void)
{
    FN_ENTER(0x0045ff50);
    /* 0045ff50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ff52: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ff55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045ff57: mov edi, dword ptr [ebx + 0x37c] */ r_edi = R32((u32)(r_ebx+0x37cu));
    /* 0045ff5d: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ff60: je 0x45ff8a */ if (fZ) goto L_0045ff8a;
L_0045ff62:; BB(0x0045ff62);
    /* 0045ff62: mov edx, dword ptr [ebx + 0x380] */ r_edx = R32((u32)(r_ebx+0x380u));
    /* 0045ff68: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 0045ff6e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ff71: je 0x45ff8a */ if (fZ) goto L_0045ff8a;
L_0045ff73:; BB(0x0045ff73);
    /* 0045ff73: add dword ptr [edx + 0x394], 1 */ { u32 ad = (u32)(r_edx+0x394u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0045ff7a: mov dword ptr [ebx + 0x37c], 3 */ W32((u32)(r_ebx+0x37cu), 0x3u);
    /* 0045ff84: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ff87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ff88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ff89: ret  */ FN_RET(0x0045ff50); r_esp += 4; return;
L_0045ff8a:; BB(0x0045ff8a);
    /* 0045ff8a: mov eax, dword ptr [edi*4 + 0x9a6794] */ r_eax = R32((u32)(r_edi*4+0x9a6794u));
    /* 0045ff91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ff93: je 0x4601a9 */ if (fZ) goto L_004601a9;
L_0045ff99:; BB(0x0045ff99);
    /* 0045ff99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045ff9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ff9du); call_ind(t); }
    /* 0045ff9d: mov edi, dword ptr [ebx + 0x37c] */ r_edi = R32((u32)(r_ebx+0x37cu));
    /* 0045ffa3: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ffa6: je 0x46015a */ if (fZ) goto L_0046015a;
L_0045ffac:; BB(0x0045ffac);
    /* 0045ffac: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
L_0045ffaf:; BB(0x0045ffaf);
    /* 0045ffaf: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0045ffb2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0045ffb5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045ffb8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045ffbc: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ffbf: je 0x45ffcd */ if (fZ) goto L_0045ffcd;
L_0045ffc1:; BB(0x0045ffc1);
    /* 0045ffc1: fadd dword ptr [0x900520] */ ST(0) = ST(0) + R_F32((u32)(0x900520u));
    /* 0045ffc7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045ffcb: jmp 0x45ffd7 */ goto L_0045ffd7;
L_0045ffcd:; BB(0x0045ffcd);
    /* 0045ffcd: fadd dword ptr [0x900524] */ ST(0) = ST(0) + R_F32((u32)(0x900524u));
    /* 0045ffd3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0045ffd7:; BB(0x0045ffd7);
    /* 0045ffd7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045ffda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ffdb: mov ecx, dword ptr [ebx + 0x3bc] */ r_ecx = R32((u32)(r_ebx+0x3bcu));
    /* 0045ffe1: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45ffe6u); f_00508db8();
    /* 0045ffe6: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045ffec: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ffef: je 0x45fffe */ if (fZ) goto L_0045fffe;
L_0045fff1:; BB(0x0045fff1);
    /* 0045fff1: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0045fff4: add eax, 0x1111 */ {  u32 a = r_eax; u32 b = 0x1111u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fff9: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0045fffc: jmp 0x460001 */ goto L_00460001;
L_0045fffe:; BB(0x0045fffe);
    /* 0045fffe: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
L_00460001:; BB(0x00460001);
    /* 00460001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460002: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460005: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00460008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460009: call 0x461478 */ r_esp -= 4; W32(r_esp, 0x46000eu); f_00461478();
    /* 0046000e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460011: movzx eax, byte ptr [0xa45a04] */ r_eax = (u32)R8((u32)(0xa45a04u));
    /* 00460018: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046001a: jne 0x460038 */ if (!fZ) goto L_00460038;
L_0046001c:; BB(0x0046001c);
    /* 0046001c: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460022: fdiv dword ptr [0x9005dc] */ ST(0) = ST(0) / R_F32((u32)(0x9005dcu));
    /* 00460028: fstp dword ptr [0xa45a08] */ W_F32((u32)(0xa45a08u), ST(0)); FPOP();
    /* 0046002e: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460033: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
L_00460038:; BB(0x00460038);
    /* 00460038: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 0046003e: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
    /* 00460044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460047: ja 0x460052 */ if ((!fC&&!fZ)) goto L_00460052;
L_00460049:; BB(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_00460052:; BB(0x00460052);
    /* 00460052: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x0045ff50); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
L_0046015a:; BB(0x0046015a);
    /* 0046015a: movzx eax, byte ptr [0xa4599c] */ r_eax = (u32)R8((u32)(0xa4599cu));
    /* 00460161: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460163: jne 0x460179 */ if (!fZ) goto L_00460179;
L_00460165:; BB(0x00460165);
    /* 00460165: mov dword ptr [0xa459a0], 0x3dcccccc */ W32((u32)(0xa459a0u), 0x3dccccccu);
    /* 0046016f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460174: mov byte ptr [0xa4599c], al */ W8((u32)(0xa4599cu), (u8)r_eax);
L_00460179:; BB(0x00460179);
    /* 00460179: mov ecx, dword ptr [ebx + 0x3c4] */ r_ecx = R32((u32)(r_ebx+0x3c4u));
    /* 0046017f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x460184u); f_0082dcbc();
    /* 00460184: fld dword ptr [0xa459a0] */ FPUSH(R_F32((u32)(0xa459a0u)));
    /* 0046018a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0046018c: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0046018f: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00460195: mov edi, dword ptr [ebx + 0x37c] */ r_edi = R32((u32)(r_ebx+0x37cu));
    /* 0046019b: fst dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0));
    /* 0046019e: add dword ptr [ebx + 0x3c4], eax */ { u32 ad = (u32)(r_ebx+0x3c4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004601a4: jmp 0x45ffaf */ goto L_0045ffaf;
L_004601a9:; BB(0x004601a9);
    /* 004601a9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004601ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004601ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004601ae: ret  */ FN_RET(0x0045ff50); r_esp += 4; return;
}

