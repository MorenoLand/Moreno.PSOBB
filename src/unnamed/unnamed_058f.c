#include "protos.h"

void f_0058f040(void) /* sub_58F040 */
{
    FN_ENTER(0x0058f040);
    /* 0058f040: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f041: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058f042: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058f044: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0058f048: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f04b: je 0x58f162 */ if (fZ) goto L_0058f162;
L_0058f051:; BB(0x0058f051);
    /* 0058f051: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f054: je 0x58f105 */ if (fZ) goto L_0058f105;
L_0058f05a:; BB(0x0058f05a);
    /* 0058f05a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f05c: jne 0x58f145 */ if (!fZ) goto L_0058f145;
L_0058f062:; BB(0x0058f062);
    /* 0058f062: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f064: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58f069u); f_007aa094();
    /* 0058f069: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f06e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f070: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x58f075u); f_00520ea0();
    /* 0058f075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f077: je 0x58f145 */ if (fZ) goto L_0058f145;
L_0058f07d:; BB(0x0058f07d);
    /* 0058f07d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f07f: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58f084u); f_005213d8();
    /* 0058f084: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f086: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58f08bu); f_00521410();
    /* 0058f08b: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058f08e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58f093u); f_0082dcbc();
    /* 0058f093: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058f096: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058f099: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58f09eu); f_0082ddd8();
    /* 0058f09e: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 0058f0a4: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0058f0a7: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0058f0ad: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058f0af: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058f0b1: fstp dword ptr [ebx + 0x41c] */ W_F32((u32)(r_ebx+0x41cu), ST(0)); FPOP();
    /* 0058f0b7: mov ecx, 0x1000 */ r_ecx = 0x1000u;
    /* 0058f0bc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58f0c1u); f_0082ddd8();
    /* 0058f0c1: fcomp dword ptr [ebx + 0x41c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x41cu))); FPOP();
    /* 0058f0c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058f0c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058f0ca: jbe 0x58f0e4 */ if ((fC||fZ)) goto L_0058f0e4;
L_0058f0cc:; BB(0x0058f0cc);
    /* 0058f0cc: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f0d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f0d3: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x58f0d8u); f_005214cc();
    /* 0058f0d8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058f0da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f0dc: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58f0e2u); call_ind(t); }
    /* 0058f0e2: jmp 0x58f0f6 */ goto L_0058f0f6;
L_0058f0e4:; BB(0x0058f0e4);
    /* 0058f0e4: push dword ptr [ebx + 0x418] */ { u32 v = R32((u32)(r_ebx+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f0ea: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f0ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f0f1: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x58f0f6u); f_00521528();
L_0058f0f6:; BB(0x0058f0f6);
    /* 0058f0f6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058f0f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f0fa: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58f100u); call_ind(t); }
    /* 0058f100: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f101: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f102: ret 4 */ FN_RET(0x0058f040); r_esp += 8; return;
L_0058f105:; BB(0x0058f105);
    /* 0058f105: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0058f10b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f10d: je 0x58f14a */ if (fZ) goto L_0058f14a;
L_0058f10f:; BB(0x0058f10f);
    /* 0058f10f: push dword ptr [ebx + 0x41c] */ { u32 v = R32((u32)(r_ebx+0x41cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f115: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f117: call 0x58f1dc */ r_esp -= 4; W32(r_esp, 0x58f11cu); f_0058f1dc();
    /* 0058f11c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f11e: je 0x58f12e */ if (fZ) goto L_0058f12e;
L_0058f120:; BB(0x0058f120);
    /* 0058f120: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f122: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f124: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f129u); f_0051f62c();
    /* 0058f129: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f12a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f12b: ret 4 */ FN_RET(0x0058f040); r_esp += 8; return;
L_0058f12e:; BB(0x0058f12e);
    /* 0058f12e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058f130: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f132: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x58f138u); call_ind(t); }
    /* 0058f138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f13a: je 0x58f145 */ if (fZ) goto L_0058f145;
L_0058f13c:; BB(0x0058f13c);
    /* 0058f13c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f13e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f140: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f145u); f_0051f62c();
L_0058f145:; BB(0x0058f145);
    /* 0058f145: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f147: ret 4 */ FN_RET(0x0058f040); r_esp += 8; return;
L_0058f14a:; BB(0x0058f14a);
    /* 0058f14a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058f14c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f14e: call dword ptr [eax + 0x1c4] */ { u32 t = R32((u32)(r_eax+0x1c4u)); r_esp -= 4; W32(r_esp, 0x58f154u); call_ind(t); }
    /* 0058f154: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f156: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f158: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f15du); f_0051f62c();
    /* 0058f15d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f15e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f15f: ret 4 */ FN_RET(0x0058f040); r_esp += 8; return;
L_0058f162:; BB(0x0058f162);
    /* 0058f162: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f164: mov eax, 9 */ r_eax = 0x9u;
    /* 0058f169: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0058f170: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f172: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58f177u); f_0051f664();
    /* 0058f177: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058f179: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058f17b: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x58f181u); call_ind(t); }
    /* 0058f181: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0058f187: mov dword ptr [ebx + 0x3b4], 0x43960000 */ W32((u32)(r_ebx+0x3b4u), 0x43960000u);
    /* 0058f191: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058f194: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0058f19a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f19c: je 0x58f1b6 */ if (fZ) goto L_0058f1b6;
L_0058f19e:; BB(0x0058f19e);
    /* 0058f19e: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0058f1a4: mov edx, dword ptr [eax*4 + 0xa74458] */ r_edx = R32((u32)(r_eax*4+0xa74458u));
    /* 0058f1ab: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0058f1ae: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 0058f1b4: jmp 0x58f1cb */ goto L_0058f1cb;
L_0058f1b6:; BB(0x0058f1b6);
    /* 0058f1b6: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0058f1bc: mov edx, dword ptr [eax*4 + 0xa74458] */ r_edx = R32((u32)(r_eax*4+0xa74458u));
    /* 0058f1c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058f1c5: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
L_0058f1cb:; BB(0x0058f1cb);
    /* 0058f1cb: mov dword ptr [ebx + 0x41c], 0 */ W32((u32)(r_ebx+0x41cu), 0x0u);
    /* 0058f1d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f1d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f1d7: ret 4 */ FN_RET(0x0058f040); r_esp += 8; return;
}

void f_0058f1dc(void) /* sub_58F1DC */
{
    FN_ENTER(0x0058f1dc);
    /* 0058f1dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058f1dd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f1e0: mov edi, ecx */ r_edi = r_ecx;
    /* 0058f1e2: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0058f1e8: fcomp dword ptr [0x928c5c] */ fx_compare(ST(0), R_F32((u32)(0x928c5cu))); FPOP();
    /* 0058f1ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058f1f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058f1f1: jbe 0x58f1fc */ if ((fC||fZ)) goto L_0058f1fc;
L_0058f1f3:; BB(0x0058f1f3);
    /* 0058f1f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058f1f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f1f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f1f9: ret 4 */ FN_RET(0x0058f1dc); r_esp += 8; return;
L_0058f1fc:; BB(0x0058f1fc);
    /* 0058f1fc: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0058f1ff: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58f204u); f_0082dcbc();
    /* 0058f204: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058f207: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0058f20a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58f20fu); f_0082ddd8();
    /* 0058f20f: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0058f215: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0058f218: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0058f21e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058f220: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058f222: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058f226: mov ecx, 0x1e00 */ r_ecx = 0x1e00u;
    /* 0058f22b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58f230u); f_0082ddd8();
    /* 0058f230: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058f234: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058f236: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058f238: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058f239: jae 0x58f244 */ if (!fC) goto L_0058f244;
L_0058f23b:; BB(0x0058f23b);
    /* 0058f23b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058f23d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f240: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f241: ret 4 */ FN_RET(0x0058f1dc); r_esp += 8; return;
L_0058f244:; BB(0x0058f244);
    /* 0058f244: mov eax, 1 */ r_eax = 0x1u;
    /* 0058f249: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f24c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f24d: ret 4 */ FN_RET(0x0058f1dc); r_esp += 8; return;
}

void f_0058f250(void) /* sub_58F250 */
{
    FN_ENTER(0x0058f250);
    /* 0058f250: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058f251: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f252: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f255: mov edi, ecx */ r_edi = r_ecx;
    /* 0058f257: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0058f25b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f25e: je 0x58f479 */ if (fZ) goto L_0058f479;
L_0058f264:; BB(0x0058f264);
    /* 0058f264: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f267: je 0x58f45d */ if (fZ) goto L_0058f45d;
L_0058f26d:; BB(0x0058f26d);
    /* 0058f26d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f26f: jne 0x58f437 */ if (!fZ) goto L_0058f437;
L_0058f275:; BB(0x0058f275);
    /* 0058f275: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 0058f27b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f27d: je 0x58f3b4 */ if (fZ) goto L_0058f3b4;
L_0058f283:; BB(0x0058f283);
    /* 0058f283: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f286: jne 0x58f36f */ if (!fZ) goto L_0058f36f;
L_0058f28c:; BB(0x0058f28c);
    /* 0058f28c: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f28e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58f293u); f_007aa094();
    /* 0058f293: fld dword ptr [0x928c54] */ FPUSH(R_F32((u32)(0x928c54u)));
    /* 0058f299: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f29e: push dword ptr [edi + 0x414] */ { u32 v = R32((u32)(r_edi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f2a4: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0058f2aa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058f2ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058f2ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058f2af: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f2b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058f2b4: jb 0x58f2b8 */ if (fC) goto L_0058f2b8;
L_0058f2b6:; BB(0x0058f2b6);
    /* 0058f2b6: fst st(1) */ ST(1) = ST(0);
L_0058f2b8:; BB(0x0058f2b8);
    /* 0058f2b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058f2ba: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
    /* 0058f2c0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x58f2c5u); f_007a8c74();
    /* 0058f2c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058f2c8: fld dword ptr [0x928c4c] */ FPUSH(R_F32((u32)(0x928c4cu)));
    /* 0058f2ce: fld dword ptr [edi + 0x418] */ FPUSH(R_F32((u32)(r_edi+0x418u)));
    /* 0058f2d4: fsub dword ptr [0x928c50] */ ST(0) = ST(0) - R_F32((u32)(0x928c50u));
    /* 0058f2da: fld dword ptr [edi + 0x3d0] */ FPUSH(R_F32((u32)(r_edi+0x3d0u)));
    /* 0058f2e0: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0058f2e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0058f2e5: fchs  */ ST(0) = -ST(0);
    /* 0058f2e7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058f2e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058f2eb: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f2ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058f2ee: jb 0x58f2f2 */ if (fC) goto L_0058f2f2;
L_0058f2f0:; BB(0x0058f2f0);
    /* 0058f2f0: fst st(1) */ ST(1) = ST(0);
L_0058f2f2:; BB(0x0058f2f2);
    /* 0058f2f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058f2f4: fst dword ptr [edi + 0x418] */ W_F32((u32)(r_edi+0x418u), ST(0));
    /* 0058f2fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058f2fc: fstp dword ptr [edi + 0x3d0] */ W_F32((u32)(r_edi+0x3d0u), ST(0)); FPOP();
    /* 0058f302: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x58f307u); f_005944ec();
    /* 0058f307: fld dword ptr [edi + 0x41c] */ FPUSH(R_F32((u32)(r_edi+0x41cu)));
    /* 0058f30d: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0058f310: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058f312: fst dword ptr [edi + 0x41c] */ W_F32((u32)(r_edi+0x41cu), ST(0));
    /* 0058f318: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0058f31a: fsubr dword ptr [edi + 0x3d0] */ ST(0) = R_F32((u32)(r_edi+0x3d0u)) - ST(0);
    /* 0058f320: fcom dword ptr [edi + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3cu))); 
    /* 0058f323: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058f325: fstp dword ptr [edi + 0x3d0] */ W_F32((u32)(r_edi+0x3d0u), ST(0)); FPOP();
    /* 0058f32b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058f32c: jae 0x58f405 */ if (!fC) goto L_0058f405;
L_0058f332:; BB(0x0058f332);
    /* 0058f332: mov dword ptr [edi + 0x40c], 2 */ W32((u32)(r_edi+0x40cu), 0x2u);
    /* 0058f33c: push 0x137 */ { u32 v = 0x137u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f341: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0058f347: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f349: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58f34eu); f_007879b8();
    /* 0058f34e: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0058f351: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058f353: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f355: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f357: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58f35cu); f_00814298();
    /* 0058f35c: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f361: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f362: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x58f367u); f_0050b510();
    /* 0058f367: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058f36a: jmp 0x58f405 */ goto L_0058f405;
L_0058f36f:; BB(0x0058f36f);
    /* 0058f36f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f372: jne 0x58f405 */ if (!fZ) goto L_0058f405;
L_0058f378:; BB(0x0058f378);
    /* 0058f378: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0058f37e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058f380: je 0x58f3ab */ if (fZ) goto L_0058f3ab;
L_0058f382:; BB(0x0058f382);
    /* 0058f382: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0058f385: mov dword ptr [edi + 0x40c], 3 */ W32((u32)(r_edi+0x40cu), 0x3u);
    /* 0058f38f: mov eax, 8 */ r_eax = 0x8u;
    /* 0058f394: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058f39b: mov dword ptr [edi + 0x3d4], 0 */ W32((u32)(r_edi+0x3d4u), 0x0u);
    /* 0058f3a5: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
L_0058f3ab:; BB(0x0058f3ab);
    /* 0058f3ab: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f3ad: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58f3b2u); f_007aa094();
    /* 0058f3b2: jmp 0x58f405 */ goto L_0058f405;
L_0058f3b4:; BB(0x0058f3b4);
    /* 0058f3b4: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f3b6: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x58f3bbu); f_005944ec();
    /* 0058f3bb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058f3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f3c1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58f3c6u); f_007aa094();
    /* 0058f3c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f3c8: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x58f3cdu); f_005944ec();
    /* 0058f3cd: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0058f3d1: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0058f3d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058f3d6: fst dword ptr [edi + 0x41c] */ W_F32((u32)(r_edi+0x41cu), ST(0));
    /* 0058f3dc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0058f3de: fadd dword ptr [edi + 0x3d0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3d0u));
    /* 0058f3e4: fst dword ptr [edi + 0x3d0] */ W_F32((u32)(r_edi+0x3d0u), ST(0));
    /* 0058f3ea: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 0058f3ed: fstp dword ptr [edi + 0x3d4] */ W_F32((u32)(r_edi+0x3d4u), ST(0)); FPOP();
    /* 0058f3f3: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f3f8: mov dword ptr [edi + 0x40c], 1 */ W32((u32)(r_edi+0x40cu), 0x1u);
    /* 0058f402: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
L_0058f405:; BB(0x0058f405);
    /* 0058f405: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058f407: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f409: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58f40fu); call_ind(t); }
    /* 0058f40f: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f411: call 0x58f528 */ r_esp -= 4; W32(r_esp, 0x58f416u); f_0058f528();
    /* 0058f416: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058f418: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f41a: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58f420u); call_ind(t); }
    /* 0058f420: fld dword ptr [edi + 0x3d0] */ FPUSH(R_F32((u32)(r_edi+0x3d0u)));
    /* 0058f426: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 0058f429: fstp dword ptr [edi + 0x3d4] */ W_F32((u32)(r_edi+0x3d4u), ST(0)); FPOP();
    /* 0058f42f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f433: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f434: ret 4 */ FN_RET(0x0058f250); r_esp += 8; return;
L_0058f437:; BB(0x0058f437);
    /* 0058f437: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f43a: jne 0x58f471 */ if (!fZ) goto L_0058f471;
L_0058f43c:; BB(0x0058f43c);
    /* 0058f43c: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0058f442: mov dword ptr [edi + 0x3d4], 0 */ W32((u32)(r_edi+0x3d4u), 0x0u);
    /* 0058f44c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058f44f: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 0058f455: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f458: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f459: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f45a: ret 4 */ FN_RET(0x0058f250); r_esp += 8; return;
L_0058f45d:; BB(0x0058f45d);
    /* 0058f45d: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 0058f463: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f466: jne 0x58f471 */ if (!fZ) goto L_0058f471;
L_0058f468:; BB(0x0058f468);
    /* 0058f468: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f46a: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f46c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f471u); f_0051f62c();
L_0058f471:; BB(0x0058f471);
    /* 0058f471: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f474: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f475: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f476: ret 4 */ FN_RET(0x0058f250); r_esp += 8; return;
L_0058f479:; BB(0x0058f479);
    /* 0058f479: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f47b: mov eax, 1 */ r_eax = 0x1u;
    /* 0058f480: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058f487: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f489: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58f48eu); f_0051f664();
    /* 0058f48e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058f490: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f492: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x58f498u); call_ind(t); }
    /* 0058f498: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0058f49e: mov dword ptr [edi + 0x40c], 0 */ W32((u32)(r_edi+0x40cu), 0x0u);
    /* 0058f4a8: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058f4ab: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058f4ae: mov dword ptr [edi + 0x418], 0 */ W32((u32)(r_edi+0x418u), 0x0u);
    /* 0058f4b8: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 0058f4be: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f4c0: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x58f4c5u); f_00520f04();
    /* 0058f4c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f4c7: jne 0x58f4da */ if (!fZ) goto L_0058f4da;
L_0058f4c9:; BB(0x0058f4c9);
    /* 0058f4c9: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0058f4cc: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 0058f4d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f4d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f4d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f4d7: ret 4 */ FN_RET(0x0058f250); r_esp += 8; return;
L_0058f4da:; BB(0x0058f4da);
    /* 0058f4da: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f4dc: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58f4e1u); f_005213d8();
    /* 0058f4e1: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f4e3: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x58f4e8u); f_00521410();
    /* 0058f4e8: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0058f4ee: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0058f4f4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0058f4f6: fmul qword ptr [0x928b18] */ ST(0) = ST(0) * R_F64((u32)(0x928b18u));
    /* 0058f4fc: fdiv qword ptr [0x928b10] */ ST(0) = ST(0) / R_F64((u32)(0x928b10u));
    /* 0058f502: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0058f505: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058f509: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058f50e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058f512: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0058f516: fistp dword ptr [edi + 0x414] */ W32((u32)(r_edi+0x414u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058f51c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0058f51f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f522: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058f523: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f524: ret 4 */ FN_RET(0x0058f250); r_esp += 8; return;
}

void f_0058f528(void) /* sub_58F528 */
{
    FN_ENTER(0x0058f528);
    /* 0058f528: fld dword ptr [ecx + 0x3d0] */ FPUSH(R_F32((u32)(r_ecx+0x3d0u)));
    /* 0058f52e: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 0058f531: fcomp dword ptr [0x928c44] */ fx_compare(ST(0), R_F32((u32)(0x928c44u))); FPOP();
    /* 0058f537: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058f539: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058f53a: jbe 0x58f545 */ if ((fC||fZ)) goto L_0058f545;
L_0058f53c:; BB(0x0058f53c);
    /* 0058f53c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058f53e: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x58f544u); call_ind(t); }
    /* 0058f544: ret  */ FN_RET(0x0058f528); r_esp += 4; return;
L_0058f545:; BB(0x0058f545);
    /* 0058f545: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058f547: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x58f54du); call_ind(t); }
    /* 0058f54d: ret  */ FN_RET(0x0058f528); r_esp += 4; return;
}

void f_0058f550(void) /* sub_58F550 */
{
    FN_ENTER(0x0058f550);
    /* 0058f550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058f551: mov esi, ecx */ r_esi = r_ecx;
    /* 0058f553: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058f557: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f55a: je 0x58f6a7 */ if (fZ) goto L_0058f6a7;
L_0058f560:; BB(0x0058f560);
    /* 0058f560: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f563: je 0x58f68f */ if (fZ) goto L_0058f68f;
L_0058f569:; BB(0x0058f569);
    /* 0058f569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f56b: jne 0x58f665 */ if (!fZ) goto L_0058f665;
L_0058f571:; BB(0x0058f571);
    /* 0058f571: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f573: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58f578u); f_007aa094();
    /* 0058f578: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0058f57e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f580: je 0x58f5ee */ if (fZ) goto L_0058f5ee;
L_0058f582:; BB(0x0058f582);
    /* 0058f582: mov ecx, dword ptr [esi + 0x410] */ r_ecx = R32((u32)(r_esi+0x410u));
    /* 0058f588: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 0058f58e: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0058f594: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f597: mov dword ptr [esi + 0x40c], eax */ W32((u32)(r_esi+0x40cu), r_eax);
    /* 0058f59d: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f5a0: mov eax, 0xff */ r_eax = 0xffu;
    /* 0058f5a5: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f5ab: jl 0x58f5af */ if ((fS!=fO)) goto L_0058f5af;
L_0058f5ad:; BB(0x0058f5ad);
    /* 0058f5ad: mov ecx, eax */ r_ecx = r_eax;
L_0058f5af:; BB(0x0058f5af);
    /* 0058f5af: mov dword ptr [esi + 0x410], ecx */ W32((u32)(r_esi+0x410u), r_ecx);
    /* 0058f5b5: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0058f5b8: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f5ba: mov dword ptr [esi + 0x3d8], ecx */ W32((u32)(r_esi+0x3d8u), r_ecx);
    /* 0058f5c0: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f5c2: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x58f5c7u); f_0052126c();
    /* 0058f5c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f5c9: jne 0x58f637 */ if (!fZ) goto L_0058f637;
L_0058f5cb:; BB(0x0058f5cb);
    /* 0058f5cb: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058f5d1: mov dword ptr [esi + 0x40c], 0 */ W32((u32)(r_esi+0x40cu), 0x0u);
    /* 0058f5db: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f5e0: jne 0x58f637 */ if (!fZ) goto L_0058f637;
L_0058f5e2:; BB(0x0058f5e2);
    /* 0058f5e2: mov dword ptr [esi + 0x3d8], 0 */ W32((u32)(r_esi+0x3d8u), 0x0u);
    /* 0058f5ec: jmp 0x58f637 */ goto L_0058f637;
L_0058f5ee:; BB(0x0058f5ee);
    /* 0058f5ee: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f5f3: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f5f5: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x58f5fau); f_00520ea0();
    /* 0058f5fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f5fc: je 0x58f637 */ if (fZ) goto L_0058f637;
L_0058f5fe:; BB(0x0058f5fe);
    /* 0058f5fe: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058f604: mov dword ptr [esi + 0x40c], 1 */ W32((u32)(r_esi+0x40cu), 0x1u);
    /* 0058f60e: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f613: jne 0x58f61c */ if (!fZ) goto L_0058f61c;
L_0058f615:; BB(0x0058f615);
    /* 0058f615: mov eax, 0xffff1c00 */ r_eax = 0xffff1c00u;
    /* 0058f61a: jmp 0x58f622 */ goto L_0058f622;
L_0058f61c:; BB(0x0058f61c);
    /* 0058f61c: mov eax, dword ptr [esi + 0x3d8] */ r_eax = R32((u32)(r_esi+0x3d8u));
L_0058f622:; BB(0x0058f622);
    /* 0058f622: mov dword ptr [esi + 0x410], 0 */ W32((u32)(r_esi+0x410u), 0x0u);
    /* 0058f62c: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058f631: mov dword ptr [esi + 0x3d8], eax */ W32((u32)(r_esi+0x3d8u), r_eax);
L_0058f637:; BB(0x0058f637);
    /* 0058f637: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058f639: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f63b: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58f641u); call_ind(t); }
    /* 0058f641: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f643: call 0x58f528 */ r_esp -= 4; W32(r_esp, 0x58f648u); f_0058f528();
    /* 0058f648: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058f64a: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f64c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58f652u); call_ind(t); }
    /* 0058f652: fld dword ptr [esi + 0x3d0] */ FPUSH(R_F32((u32)(r_esi+0x3d0u)));
    /* 0058f658: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0058f65b: fstp dword ptr [esi + 0x3d4] */ W_F32((u32)(r_esi+0x3d4u), ST(0)); FPOP();
    /* 0058f661: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058f662: ret 4 */ FN_RET(0x0058f550); r_esp += 8; return;
L_0058f665:; BB(0x0058f665);
    /* 0058f665: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058f668: jne 0x58f6a3 */ if (!fZ) goto L_0058f6a3;
L_0058f66a:; BB(0x0058f66a);
    /* 0058f66a: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058f670: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f675: jne 0x58f681 */ if (!fZ) goto L_0058f681;
L_0058f677:; BB(0x0058f677);
    /* 0058f677: mov dword ptr [esi + 0x3d8], 0xffff1c00 */ W32((u32)(r_esi+0x3d8u), 0xffff1c00u);
L_0058f681:; BB(0x0058f681);
    /* 0058f681: mov dword ptr [esi + 0x3d4], 0 */ W32((u32)(r_esi+0x3d4u), 0x0u);
    /* 0058f68b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058f68c: ret 4 */ FN_RET(0x0058f550); r_esp += 8; return;
L_0058f68f:; BB(0x0058f68f);
    /* 0058f68f: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0058f695: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058f698: jle 0x58f6a3 */ if ((fZ||fS!=fO)) goto L_0058f6a3;
L_0058f69a:; BB(0x0058f69a);
    /* 0058f69a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f69c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f69e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f6a3u); f_0051f62c();
L_0058f6a3:; BB(0x0058f6a3);
    /* 0058f6a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058f6a4: ret 4 */ FN_RET(0x0058f550); r_esp += 8; return;
L_0058f6a7:; BB(0x0058f6a7);
    /* 0058f6a7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f6a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058f6ab: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0058f6b2: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f6b4: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58f6b9u); f_0051f664();
    /* 0058f6b9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058f6bb: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f6bd: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x58f6c3u); call_ind(t); }
    /* 0058f6c3: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0058f6c9: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058f6cc: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 0058f6d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f6d4: mov dword ptr [esi + 0x40c], edx */ W32((u32)(r_esi+0x40cu), r_edx);
    /* 0058f6da: mov dword ptr [esi + 0x410], edx */ W32((u32)(r_esi+0x410u), r_edx);
    /* 0058f6e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058f6e1: ret 4 */ FN_RET(0x0058f550); r_esp += 8; return;
}

void f_0058f6e4(void) /* sub_58F6E4 */
{
    FN_ENTER(0x0058f6e4);
    /* 0058f6e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f6e5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f6e8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058f6ea: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0058f6ee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f6f1: je 0x58f71b */ if (fZ) goto L_0058f71b;
L_0058f6f3:; BB(0x0058f6f3);
    /* 0058f6f3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f6f6: jne 0x58f714 */ if (!fZ) goto L_0058f714;
L_0058f6f8:; BB(0x0058f6f8);
    /* 0058f6f8: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0058f6fe: lea ecx, [ebp + 0x3f0] */ r_ecx = (u32)(r_ebp+0x3f0u);
    /* 0058f704: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x58f707u); call_ind(t); }
    /* 0058f707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f709: je 0x58f714 */ if (fZ) goto L_0058f714;
L_0058f70b:; BB(0x0058f70b);
    /* 0058f70b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f70d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058f70f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f714u); f_0051f62c();
L_0058f714:; BB(0x0058f714);
    /* 0058f714: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f718: ret 4 */ FN_RET(0x0058f6e4); r_esp += 8; return;
L_0058f71b:; BB(0x0058f71b);
    /* 0058f71b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f71d: mov eax, 1 */ r_eax = 0x1u;
    /* 0058f722: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0058f729: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058f72b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58f730u); f_0051f664();
    /* 0058f730: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058f733: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058f735: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x58f73bu); call_ind(t); }
    /* 0058f73b: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0058f741: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058f744: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0058f74a: lea ecx, [ebp + 0x3f0] */ r_ecx = (u32)(r_ebp+0x3f0u);
    /* 0058f750: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x58f755u); f_00576c48();
    /* 0058f755: fld dword ptr [0x928c38] */ FPUSH(R_F32((u32)(0x928c38u)));
    /* 0058f75b: fadd dword ptr [ebp + 0x3d0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3d0u));
    /* 0058f761: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0058f764: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0058f767: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058f76b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058f76e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0058f772: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0058f775: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f776: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x58f77bu); f_005789e4();
    /* 0058f77b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f77c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058f77f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f780: ret 4 */ FN_RET(0x0058f6e4); r_esp += 8; return;
}

void f_0058f784(void) /* sub_58F784 */
{
    FN_ENTER(0x0058f784);
    /* 0058f784: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058f785: mov esi, ecx */ r_esi = r_ecx;
    /* 0058f787: mov eax, dword ptr [esi + 0x3e0] */ r_eax = R32((u32)(r_esi+0x3e0u));
    /* 0058f78d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f790: mov dword ptr [esi + 0x3e0], eax */ W32((u32)(r_esi+0x3e0u), r_eax);
    /* 0058f796: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f799: jl 0x58f7ad */ if ((fS!=fO)) goto L_0058f7ad;
L_0058f79b:; BB(0x0058f79b);
    /* 0058f79b: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f79d: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x58f7a2u); f_0058f7b8();
    /* 0058f7a2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f7a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f7a6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f7abu); f_0051f62c();
    /* 0058f7ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058f7ac: ret  */ FN_RET(0x0058f784); r_esp += 4; return;
L_0058f7ad:; BB(0x0058f7ad);
    /* 0058f7ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f7af: mov ecx, esi */ r_ecx = r_esi;
    /* 0058f7b1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f7b6u); f_0051f62c();
    /* 0058f7b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058f7b7: ret  */ FN_RET(0x0058f784); r_esp += 4; return;
}

void f_0058f7b8(void) /* sub_58F7B8 */
{
    FN_ENTER(0x0058f7b8);
    /* 0058f7b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058f7b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058f7ba: mov edi, ecx */ r_edi = r_ecx;
    /* 0058f7bc: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0058f7c2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f7c4: je 0x58f801 */ if (fZ) goto L_0058f801;
L_0058f7c6:; BB(0x0058f7c6);
    /* 0058f7c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0058f7c8: call 0x58fa44 */ r_esp -= 4; W32(r_esp, 0x58f7cdu); f_0058fa44();
    /* 0058f7cd: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0058f7d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058f7d2: mov ebx, edi */ r_ebx = r_edi;
    /* 0058f7d4: mov edi, eax */ r_edi = r_eax;
L_0058f7d6:; BB(0x0058f7d6);
    /* 0058f7d6: movzx edx, word ptr [ebx + edi*2 + 0x434] */ r_edx = (u32)R16((u32)(r_ebx+r_edi*2+0x434u));
    /* 0058f7de: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f7e4: je 0x58f804 */ if (fZ) goto L_0058f804;
L_0058f7e6:; BB(0x0058f7e6);
    /* 0058f7e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f7e7: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58f7ecu); f_007b4d18();
    /* 0058f7ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0058f7ed:; BB(0x0058f7ed);
    /* 0058f7ed: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f7ef: mov ecx, eax */ r_ecx = r_eax;
    /* 0058f7f1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58f7f6u); f_0051f62c();
    /* 0058f7f6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0058f7f9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058f7fc: jl 0x58f7d6 */ if ((fS!=fO)) goto L_0058f7d6;
L_0058f7fe:; BB(0x0058f7fe);
    /* 0058f7fe: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0058f801:; BB(0x0058f801);
    /* 0058f801: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f802: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058f803: ret  */ FN_RET(0x0058f7b8); r_esp += 4; return;
L_0058f804:; BB(0x0058f804);
    /* 0058f804: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0058f808: lea ecx, [edx + edi + 1] */ r_ecx = (u32)(r_edx+r_edi+0x1u);
    /* 0058f80c: movsx edx, word ptr [ebx + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0058f810: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0058f813: lea edx, [edx + edi + 1] */ r_edx = (u32)(r_edx+r_edi+0x1u);
    /* 0058f817: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f818: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f819: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f81a: call 0x58f834 */ r_esp -= 4; W32(r_esp, 0x58f81fu); f_0058f834();
    /* 0058f81f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058f822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f824: je 0x58f7ed */ if (fZ) goto L_0058f7ed;
L_0058f826:; BB(0x0058f826);
    /* 0058f826: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0058f82a: mov word ptr [ebx + edi*2 + 0x434], dx */ W16((u32)(r_ebx+r_edi*2+0x434u), (u16)r_edx);
    /* 0058f832: jmp 0x58f7ed */ goto L_0058f7ed;
}

void f_0058f834(void) /* sub_58F834 */
{
    FN_ENTER(0x0058f834);
    /* 0058f834: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f835: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f837: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f839: push 0x8d812c */ { u32 v = 0x8d812cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f83e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058f844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f845: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058f84c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f84f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058f852: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058f855: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058f858: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058f85b: push 0x448 */ { u32 v = 0x448u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f860: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0058f867: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x58f86cu); f_005caba4();
    /* 0058f86c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f86d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0058f870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f872: je 0x58f8b3 */ if (fZ) goto L_0058f8b3;
L_0058f874:; BB(0x0058f874);
    /* 0058f874: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0058f87b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058f882: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f885: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0058f889: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058f88c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f88d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f890: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f896: call 0x58f8b8 */ r_esp -= 4; W32(r_esp, 0x58f89bu); f_0058f8b8();
    /* 0058f89b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058f89e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0058f8a5:; BB(0x0058f8a5);
    /* 0058f8a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f8a8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058f8af: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f8b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f8b2: ret  */ FN_RET(0x0058f834); r_esp += 4; return;
L_0058f8b3:; BB(0x0058f8b3);
    /* 0058f8b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058f8b5: jmp 0x58f8a5 */ goto L_0058f8a5;
}

void f_0058f8b8(void) /* sub_58F8B8 */
{
    FN_ENTER(0x0058f8b8);
    /* 0058f8b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f8b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f8bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f8bd: push 0x8d8148 */ { u32 v = 0x8d8148u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f8c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058f8c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f8c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058f8d0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f8d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058f8d6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0058f8d9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0058f8dc: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0058f8df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0058f8e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058f8e5: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 0058f8e9: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0058f8ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058f8ef: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0058f8f2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0058f8f5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058f8f8: call 0x58d428 */ r_esp -= 4; W32(r_esp, 0x58f8fdu); f_0058d428();
    /* 0058f8fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058f904: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f907: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058f90a: mov dword ptr [ecx], 0xb08a20 */ W32((u32)(r_ecx), 0xb08a20u);
    /* 0058f910: mov eax, dword ptr [0x9bf99c] */ r_eax = R32((u32)(0x9bf99cu));
    /* 0058f915: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f916: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0058f919: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0058f91d: mov word ptr [ecx + 0x434], dx */ W16((u32)(r_ecx+0x434u), (u16)r_edx);
    /* 0058f924: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x58f929u); f_0051f760();
    /* 0058f929: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f92c: mov eax, ebx */ r_eax = r_ebx;
    /* 0058f92e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058f931: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058f934: mov edx, dword ptr [eax + 0x360] */ r_edx = R32((u32)(r_eax+0x360u));
    /* 0058f93a: mov dword ptr [ecx + 0x360], edx */ W32((u32)(r_ecx+0x360u), r_edx);
    /* 0058f940: mov word ptr [ecx + 0x1c], bx */ W16((u32)(r_ecx+0x1cu), (u16)r_ebx);
    /* 0058f944: mov word ptr [ecx + 0x2c], si */ W16((u32)(r_ecx+0x2cu), (u16)r_esi);
    /* 0058f948: call 0x590d74 */ r_esp -= 4; W32(r_esp, 0x58f94du); f_00590d74();
    /* 0058f94d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f950: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0058f956: mov dword ptr [ecx + 0x3dc], 0 */ W32((u32)(r_ecx+0x3dcu), 0x0u);
    /* 0058f960: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058f965: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 0058f96b: call 0x58fa28 */ r_esp -= 4; W32(r_esp, 0x58f970u); f_0058fa28();
    /* 0058f970: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f973: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f976: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0058f97c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f97e: lea ecx, [esi + 0x3f0] */ r_ecx = (u32)(r_esi+0x3f0u);
    /* 0058f984: mov dword ptr [eax + 0x3d8], 0xffb0b000 */ W32((u32)(r_eax+0x3d8u), 0xffb0b000u);
    /* 0058f98e: mov dword ptr [eax + 0x3c], 0xc3fa0000 */ W32((u32)(r_eax+0x3cu), 0xc3fa0000u);
    /* 0058f995: mov dword ptr [eax + 0x48], 0xc3fa0000 */ W32((u32)(r_eax+0x48u), 0xc3fa0000u);
    /* 0058f99c: mov dword ptr [edx + 0x20], 0xc3fa0000 */ W32((u32)(r_edx+0x20u), 0xc3fa0000u);
    /* 0058f9a3: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 0058f9a6: mov edi, dword ptr [esi + 0x3f0] */ r_edi = R32((u32)(r_esi+0x3f0u));
    /* 0058f9ac: or ebx, 0x800 */ {  u32 a = r_ebx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0058f9b2: mov dword ptr [esi + 0x438], 0 */ W32((u32)(r_esi+0x438u), 0x0u);
    /* 0058f9bc: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 0058f9bf: mov dword ptr [esi + 0x43c], 0 */ W32((u32)(r_esi+0x43cu), 0x0u);
    /* 0058f9c9: mov dword ptr [esi + 0x440], 0 */ W32((u32)(r_esi+0x440u), 0x0u);
    /* 0058f9d3: mov dword ptr [esi + 0x444], 0 */ W32((u32)(r_esi+0x444u), 0x0u);
    /* 0058f9dd: call dword ptr [edi + 4] */ { u32 t = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, 0x58f9e0u); call_ind(t); }
    /* 0058f9e0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f9e3: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0058f9e9: lea ecx, [eax + 0x3f0] */ r_ecx = (u32)(r_eax+0x3f0u);
    /* 0058f9ef: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x58f9f2u); call_ind(t); }
    /* 0058f9f2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f9f5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f9f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058f9f9: mov eax, 8 */ r_eax = 0x8u;
    /* 0058f9fe: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0058fa05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fa06: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x58fa0cu); call_ind(t); }
    /* 0058fa0c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058fa0f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058fa12: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058fa15: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058fa18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058fa1b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058fa22: mov esp, ebp */ r_esp = r_ebp;
    /* 0058fa24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058fa25: ret 0x10 */ FN_RET(0x0058f8b8); r_esp += 20; return;
}

void f_0058fa28(void) /* sub_58FA28 */
{
    FN_ENTER(0x0058fa28);
    /* 0058fa28: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0058fa2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058fa30: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058fa35: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 0058fa3b: call dword ptr [edx + 0x180] */ { u32 t = R32((u32)(r_edx+0x180u)); r_esp -= 4; W32(r_esp, 0x58fa41u); call_ind(t); }
    /* 0058fa41: ret  */ FN_RET(0x0058fa28); r_esp += 4; return;
}

void f_0058fa44(void) /* sub_58FA44 */
{
    FN_ENTER(0x0058fa44);
    /* 0058fa44: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0058fa4a: movzx edx, word ptr [ecx + 0x3e4] */ r_edx = (u32)R16((u32)(r_ecx+0x3e4u));
    /* 0058fa51: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058fa54: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 0058fa5a: mov word ptr [ecx + 0x2d0], dx */ W16((u32)(r_ecx+0x2d0u), (u16)r_edx);
    /* 0058fa61: ret  */ FN_RET(0x0058fa44); r_esp += 4; return;
}

void f_0058fa64(void) /* sub_58FA64 */
{
    FN_ENTER(0x0058fa64);
    /* 0058fa64: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x58fa69u); f_0058f7b8();
    /* 0058fa69: ret  */ FN_RET(0x0058fa64); r_esp += 4; return;
}

void f_0058fa6c(void) /* sub_58FA6C */
{
    FN_ENTER(0x0058fa6c);
    /* 0058fa6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fa6d: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058fa70: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058fa72: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0058fa76: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fa79: je 0x58fdf4 */ if (fZ) goto L_0058fdf4;
L_0058fa7f:; BB(0x0058fa7f);
    /* 0058fa7f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fa82: je 0x58fb61 */ if (fZ) goto L_0058fb61;
L_0058fa88:; BB(0x0058fa88);
    /* 0058fa88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fa8a: jne 0x58fb2e */ if (!fZ) goto L_0058fb2e;
L_0058fa90:; BB(0x0058fa90);
    /* 0058fa90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fa92: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58fa97u); f_007aa094();
    /* 0058fa97: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0058fa9d: fcomp dword ptr [0x928c1c] */ fx_compare(ST(0), R_F32((u32)(0x928c1cu))); FPOP();
    /* 0058faa3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058faa5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058faa6: jb 0x58fb15 */ if (fC) goto L_0058fb15;
L_0058faa8:; BB(0x0058faa8);
    /* 0058faa8: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0058faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fab0: je 0x58fc3b */ if (fZ) goto L_0058fc3b;
L_0058fab6:; BB(0x0058fab6);
    /* 0058fab6: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0058fab9: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0058fabc: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058fabf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058fac2: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058fac5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058fac9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058facd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58fad2u); f_0082dcbc();
    /* 0058fad2: fld dword ptr [0x928c2c] */ FPUSH(R_F32((u32)(0x928c2cu)));
    /* 0058fad8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058fada: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0058fadd: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058fae0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058fae3: fld dword ptr [0x928c28] */ FPUSH(R_F32((u32)(0x928c28u)));
    /* 0058fae9: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0058faed: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058faf1: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58faf6u); f_0082ddd8();
    /* 0058faf6: fld dword ptr [0x928c2c] */ FPUSH(R_F32((u32)(0x928c2cu)));
    /* 0058fafc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058fafe: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0058fb02: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058fb06: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058fb09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fb0a: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 0058fb10: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x58fb15u); f_00508db8();
L_0058fb15:; BB(0x0058fb15);
    /* 0058fb15: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058fb17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fb19: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58fb1fu); call_ind(t); }
    /* 0058fb1f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058fb21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fb23: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58fb29u); call_ind(t); }
    /* 0058fb29: jmp 0x58fc34 */ goto L_0058fc34;
L_0058fb2e:; BB(0x0058fb2e);
    /* 0058fb2e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fb31: jne 0x58fc34 */ if (!fZ) goto L_0058fc34;
L_0058fb37:; BB(0x0058fb37);
    /* 0058fb37: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 0058fb3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fb3f: je 0x58fc34 */ if (fZ) goto L_0058fc34;
L_0058fb45:; BB(0x0058fb45);
    /* 0058fb45: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0058fb49: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058fb4e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0058fb52: mov dword ptr [ebx + 0x42c], 0 */ W32((u32)(r_ebx+0x42cu), 0x0u);
    /* 0058fb5c: jmp 0x58fc34 */ goto L_0058fc34;
L_0058fb61:; BB(0x0058fb61);
    /* 0058fb61: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0058fb67: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058fb69: je 0x58fc34 */ if (fZ) goto L_0058fc34;
L_0058fb6f:; BB(0x0058fb6f);
    /* 0058fb6f: mov eax, dword ptr [ebx + 0x3c4] */ r_eax = R32((u32)(r_ebx+0x3c4u));
    /* 0058fb75: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0058fb77: mov dword ptr [ebx + 0x3c0], eax */ W32((u32)(r_ebx+0x3c0u), r_eax);
    /* 0058fb7d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fb7f: call dword ptr [edx + 0x194] */ { u32 t = R32((u32)(r_edx+0x194u)); r_esp -= 4; W32(r_esp, 0x58fb85u); call_ind(t); }
    /* 0058fb85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fb87: jne 0x58fba7 */ if (!fZ) goto L_0058fba7;
L_0058fb89:; BB(0x0058fb89);
    /* 0058fb89: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0058fb90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fb91: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x58fb96u); f_0051f8d8();
    /* 0058fb96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058fb97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fb99: jne 0x58fba7 */ if (!fZ) goto L_0058fba7;
L_0058fb9b:; BB(0x0058fb9b);
    /* 0058fb9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fb9d: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x58fba2u); f_00520f68();
    /* 0058fba2: jmp 0x58fc24 */ goto L_0058fc24;
L_0058fba7:; BB(0x0058fba7);
    /* 0058fba7: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058fbad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fbaf: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x58fbb4u); f_005212c8();
    /* 0058fbb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fbb6: je 0x58fc24 */ if (fZ) goto L_0058fc24;
L_0058fbb8:; BB(0x0058fbb8);
    /* 0058fbb8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fbba: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x58fbbfu); f_005213d8();
    /* 0058fbbf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fbc1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x58fbc6u); f_007751b0();
    /* 0058fbc6: fld dword ptr [0x928c24] */ FPUSH(R_F32((u32)(0x928c24u)));
    /* 0058fbcc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058fbce: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0058fbd2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0058fbd7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058fbdc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0058fbe0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0058fbe4: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0058fbe8: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0058fbec: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0058fbf0: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0058fbf4: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0058fbf8: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0058fbfc: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0058fc02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058fc04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058fc06: mov ebp, edx */ r_ebp = r_edx;
    /* 0058fc08: mov esi, ecx */ r_esi = r_ecx;
    /* 0058fc0a: jmp 0x58fc12 */ goto L_0058fc12;
L_0058fc0c:; BB(0x0058fc0c);
    /* 0058fc0c: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
L_0058fc12:; BB(0x0058fc12);
    /* 0058fc12: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fc14: jne 0x58fc9a */ if (!fZ) goto L_0058fc9a;
L_0058fc1a:; BB(0x0058fc1a);
    /* 0058fc1a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058fc1d: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058fc20: jl 0x58fc0c */ if ((fS!=fO)) goto L_0058fc0c;
L_0058fc22:; BB(0x0058fc22);
    /* 0058fc22: jmp 0x58fc66 */ goto L_0058fc66;
L_0058fc24:; BB(0x0058fc24);
    /* 0058fc24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fc26: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x58fc2bu); f_0058f7b8();
    /* 0058fc2b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fc2f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58fc34u); f_0051f62c();
L_0058fc34:; BB(0x0058fc34);
    /* 0058fc34: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058fc37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058fc38: ret 4 */ FN_RET(0x0058fa6c); r_esp += 8; return;
L_0058fc3b:; BB(0x0058fc3b);
    /* 0058fc3b: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc40: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0058fc43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc44: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x58fc49u); f_00509590();
    /* 0058fc49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058fc4c: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 0058fc52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fc54: je 0x58fb15 */ if (fZ) goto L_0058fb15;
L_0058fc5a:; BB(0x0058fc5a);
    /* 0058fc5a: mov ecx, eax */ r_ecx = r_eax;
    /* 0058fc5c: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x58fc61u); f_00508f48();
    /* 0058fc61: jmp 0x58fb15 */ goto L_0058fb15;
L_0058fc66:; BB(0x0058fc66);
    /* 0058fc66: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0058fc6a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0058fc6e: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0058fc72: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fc76: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58fc7bu); f_0051f62c();
    /* 0058fc7b: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fc82: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58fc87u); f_007879b8();
    /* 0058fc87: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058fc8a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058fc8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fc90: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58fc95u); f_00814298();
    /* 0058fc95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058fc98: jmp 0x58fc34 */ goto L_0058fc34;
L_0058fc9a:; BB(0x0058fc9a);
    /* 0058fc9a: mov eax, ebp */ r_eax = r_ebp;
    /* 0058fc9c: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0058fca0: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0058fca4: movzx edi, word ptr [ebx + ebp*2 + 0x434] */ r_edi = (u32)R16((u32)(r_ebx+r_ebp*2+0x434u));
    /* 0058fcac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0058fcaf: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fcb5: je 0x58fdb7 */ if (fZ) goto L_0058fdb7;
L_0058fcbb:; BB(0x0058fcbb);
    /* 0058fcbb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058fcbc: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58fcc1u); f_007b4d18();
    /* 0058fcc1: mov edi, eax */ r_edi = r_eax;
    /* 0058fcc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058fcc6:; BB(0x0058fcc6);
    /* 0058fcc6: movzx eax, word ptr [edi + 0x434] */ r_eax = (u32)R16((u32)(r_edi+0x434u));
    /* 0058fccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fcce: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58fcd3u); f_007b4d18();
    /* 0058fcd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058fcd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fcd6: je 0x58fc1a */ if (fZ) goto L_0058fc1a;
L_0058fcdc:; BB(0x0058fcdc);
    /* 0058fcdc: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0058fce0: mov ebp, dword ptr [eax + 0x38] */ r_ebp = R32((u32)(r_eax+0x38u));
    /* 0058fce3: mov dword ptr [edi + 0x38], ebp */ W32((u32)(r_edi+0x38u), r_ebp);
    /* 0058fce6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0058fce9: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0058fcec: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0058fcef: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 0058fcf2: mov dword ptr [edi + 0x44], ebp */ W32((u32)(r_edi+0x44u), r_ebp);
    /* 0058fcf5: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0058fcf8: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0058fcfe: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 0058fd01: mov dword ptr [edx + 0x1c], ebp */ W32((u32)(r_edx+0x1cu), r_ebp);
    /* 0058fd04: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 0058fd07: mov dword ptr [edx + 0x20], ebp */ W32((u32)(r_edx+0x20u), r_ebp);
    /* 0058fd0a: mov ebp, dword ptr [edi + 0x40] */ r_ebp = R32((u32)(r_edi+0x40u));
    /* 0058fd0d: mov dword ptr [edx + 0x24], ebp */ W32((u32)(r_edx+0x24u), r_ebp);
    /* 0058fd10: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0058fd13: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 0058fd16: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0058fd19: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0058fd1c: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0058fd1f: mov dword ptr [edi + 0x64], edx */ W32((u32)(r_edi+0x64u), r_edx);
    /* 0058fd22: movzx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)R16((u32)(r_edi+0x2bcu));
    /* 0058fd29: mov dword ptr [edi + 0x30], 0x20000000 */ W32((u32)(r_edi+0x30u), 0x20000000u);
    /* 0058fd30: mov word ptr [edi + 0x334], dx */ W16((u32)(r_edi+0x334u), (u16)r_edx);
    /* 0058fd37: mov dword ptr [edi + 0x3dc], esi */ W32((u32)(r_edi+0x3dcu), r_esi);
    /* 0058fd3d: movzx edx, word ptr [eax + 0x394] */ r_edx = (u32)R16((u32)(r_eax+0x394u));
    /* 0058fd44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fd45: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0058fd49: mov ecx, edi */ r_ecx = r_edi;
    /* 0058fd4b: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x58fd50u); f_00520fcc();
    /* 0058fd50: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0058fd56: mov dword ptr [edi + 0x438], 0 */ W32((u32)(r_edi+0x438u), 0x0u);
    /* 0058fd60: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058fd65: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 0058fd6b: mov eax, 0xa */ r_eax = 0xau;
    /* 0058fd70: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0058fd77: mov ecx, edi */ r_ecx = r_edi;
    /* 0058fd79: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58fd7eu); f_007aa094();
    /* 0058fd7e: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 0058fd84: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0058fd87: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058fd8a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0058fd8e: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 0058fd92: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058fd94: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0058fd97: fadd dword ptr [eax*4 + 0x928b08] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x928b08u));
    /* 0058fd9e: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
    /* 0058fda4: mov ecx, edi */ r_ecx = r_edi;
    /* 0058fda6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58fdabu); f_0051f62c();
    /* 0058fdab: mov ecx, edi */ r_ecx = r_edi;
    /* 0058fdad: call 0x58fe34 */ r_esp -= 4; W32(r_esp, 0x58fdb2u); f_0058fe34();
    /* 0058fdb2: jmp 0x58fc1a */ goto L_0058fc1a;
L_0058fdb7:; BB(0x0058fdb7);
    /* 0058fdb7: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0058fdbb: lea edi, [eax + edi + 1] */ r_edi = (u32)(r_eax+r_edi+0x1u);
    /* 0058fdbf: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 0058fdc2: movsx edi, word ptr [ebx + 0x2c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0058fdc6: lea eax, [eax + edi + 1] */ r_eax = (u32)(r_eax+r_edi+0x1u);
    /* 0058fdca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fdcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fdcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fdcd: call 0x58f834 */ r_esp -= 4; W32(r_esp, 0x58fdd2u); f_0058f834();
    /* 0058fdd2: mov edi, eax */ r_edi = r_eax;
    /* 0058fdd4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058fdd7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fdd9: je 0x58fcc6 */ if (fZ) goto L_0058fcc6;
L_0058fddf:; BB(0x0058fddf);
    /* 0058fddf: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0058fde3: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0058fde7: mov word ptr [ebx + edx + 0x434], ax */ W16((u32)(r_ebx+r_edx+0x434u), (u16)r_eax);
    /* 0058fdef: jmp 0x58fcc6 */ goto L_0058fcc6;
L_0058fdf4:; BB(0x0058fdf4);
    /* 0058fdf4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0058fdf6: mov eax, 7 */ r_eax = 0x7u;
    /* 0058fdfb: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0058fe02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fe04: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x58fe09u); f_0051f664();
    /* 0058fe09: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058fe0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058fe0d: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x58fe13u); call_ind(t); }
    /* 0058fe13: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0058fe19: mov dword ptr [ebx + 0x42c], 0 */ W32((u32)(r_ebx+0x42cu), 0x0u);
    /* 0058fe23: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058fe26: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0058fe2c: jmp 0x58fc34 */ goto L_0058fc34;
}

void f_0058fe34(void) /* sub_58FE34 */
{
    FN_ENTER(0x0058fe34);
    /* 0058fe34: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0058fe3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058fe3c: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058fe41: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 0058fe47: call dword ptr [edx + 0x17c] */ { u32 t = R32((u32)(r_edx+0x17cu)); r_esp -= 4; W32(r_esp, 0x58fe4du); call_ind(t); }
    /* 0058fe4d: ret  */ FN_RET(0x0058fe34); r_esp += 4; return;
}

void f_0058fe50(void)
{
    FN_ENTER(0x0058fe50);
    /* 0058fe50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fe51: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058fe54: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058fe56: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0058fe5a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fe5d: je 0x590059 */ if (fZ) goto L_00590059;
L_0058fe63:; BB(0x0058fe63);
    /* 0058fe63: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fe66: je 0x59000c */ if (fZ) goto L_0059000c;
L_0058fe6c:; BB(0x0058fe6c);
    /* 0058fe6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fe6e: jne 0x58ffdf */ if (!fZ) goto L_0058ffdf;
L_0058fe74:; BB(0x0058fe74);
    /* 0058fe74: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 0058fe7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fe7c: je 0x58fee9 */ if (fZ) goto L_0058fee9;
L_0058fe7e:; BB(0x0058fe7e);
    /* 0058fe7e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fe81: jne 0x58feba */ if (!fZ) goto L_0058feba;
L_0058fe83:; BB(0x0058fe83);
    /* 0058fe83: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0058fe89: lea ecx, [ebx + 0x3f0] */ r_ecx = (u32)(r_ebx+0x3f0u);
    /* 0058fe8f: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x58fe92u); call_ind(t); }
    /* 0058fe92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fe94: je 0x58ffc4 */ if (fZ) goto L_0058ffc4;
L_0058fe9a:; BB(0x0058fe9a);
    /* 0058fe9a: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0058fea0: mov dword ptr [ebx + 0x40c], 3 */ W32((u32)(r_ebx+0x40cu), 0x3u);
    /* 0058feaa: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058feaf: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0058feb5: jmp 0x58ffc4 */ goto L_0058ffc4;
L_0058feba:; BB(0x0058feba);
    /* 0058feba: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058febd: jne 0x58ffc4 */ if (!fZ) goto L_0058ffc4;
L_0058fec3:; BB(0x0058fec3);
    /* 0058fec3: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0058fec9: lea ecx, [ebx + 0x3f0] */ r_ecx = (u32)(r_ebx+0x3f0u);
    /* 0058fecf: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x58fed2u); call_ind(t); }
    /* 0058fed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fed4: je 0x58ffc4 */ if (fZ) goto L_0058ffc4;
L_0058feda:; BB(0x0058feda);
    /* 0058feda: mov dword ptr [ebx + 0x40c], 3 */ W32((u32)(r_ebx+0x40cu), 0x3u);
    /* 0058fee4: jmp 0x58ffc4 */ goto L_0058ffc4;
L_0058fee9:; BB(0x0058fee9);
    /* 0058fee9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058feeb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x58fef0u); f_007aa094();
    /* 0058fef0: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0058fef6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058fef8: je 0x58ff46 */ if (fZ) goto L_0058ff46;
L_0058fefa:; BB(0x0058fefa);
    /* 0058fefa: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0058ff00: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ff05: je 0x58ff22 */ if (fZ) goto L_0058ff22;
L_0058ff07:; BB(0x0058ff07);
    /* 0058ff07: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0058ff0d: lea ecx, [ebx + 0x3f0] */ r_ecx = (u32)(r_ebx+0x3f0u);
    /* 0058ff13: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x58ff16u); call_ind(t); }
    /* 0058ff16: mov dword ptr [ebx + 0x40c], 1 */ W32((u32)(r_ebx+0x40cu), 0x1u);
    /* 0058ff20: jmp 0x58ff46 */ goto L_0058ff46;
L_0058ff22:; BB(0x0058ff22);
    /* 0058ff22: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058ff27: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0058ff2d: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0058ff33: lea ecx, [ebx + 0x3f0] */ r_ecx = (u32)(r_ebx+0x3f0u);
    /* 0058ff39: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x58ff3cu); call_ind(t); }
    /* 0058ff3c: mov dword ptr [ebx + 0x40c], 2 */ W32((u32)(r_ebx+0x40cu), 0x2u);
L_0058ff46:; BB(0x0058ff46);
    /* 0058ff46: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0058ff4c: fcomp dword ptr [0x928c1c] */ fx_compare(ST(0), R_F32((u32)(0x928c1cu))); FPOP();
    /* 0058ff52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058ff54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058ff55: jb 0x58ffc4 */ if (fC) goto L_0058ffc4;
L_0058ff57:; BB(0x0058ff57);
    /* 0058ff57: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0058ff5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ff5f: je 0x59001e */ if (fZ) goto L_0059001e;
L_0058ff65:; BB(0x0058ff65);
    /* 0058ff65: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0058ff68: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0058ff6b: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058ff6e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058ff71: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058ff74: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0058ff78: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058ff7c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58ff81u); f_0082dcbc();
    /* 0058ff81: fld dword ptr [0x928c18] */ FPUSH(R_F32((u32)(0x928c18u)));
    /* 0058ff87: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058ff89: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0058ff8c: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0058ff8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058ff92: fld dword ptr [0x928c14] */ FPUSH(R_F32((u32)(0x928c14u)));
    /* 0058ff98: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0058ff9c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058ffa0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58ffa5u); f_0082ddd8();
    /* 0058ffa5: fld dword ptr [0x928c18] */ FPUSH(R_F32((u32)(0x928c18u)));
    /* 0058ffab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058ffad: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0058ffb1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058ffb5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058ffb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ffb9: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 0058ffbf: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x58ffc4u); f_00508db8();
L_0058ffc4:; BB(0x0058ffc4);
    /* 0058ffc4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058ffc6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058ffc8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58ffceu); call_ind(t); }
    /* 0058ffce: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058ffd0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058ffd2: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58ffd8u); call_ind(t); }
    /* 0058ffd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ffdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058ffdc: ret 4 */ FN_RET(0x0058fe50); r_esp += 8; return;
L_0058ffdf:; BB(0x0058ffdf);
    /* 0058ffdf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ffe2: jne 0x590017 */ if (!fZ) goto L_00590017;
L_0058ffe4:; BB(0x0058ffe4);
    /* 0058ffe4: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 0058ffea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ffec: je 0x590017 */ if (fZ) goto L_00590017;
L_0058ffee:; BB(0x0058ffee);
    /* 0058ffee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0058fff2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058fff7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0058fffb: mov dword ptr [ebx + 0x42c], 0 */ W32((u32)(r_ebx+0x42cu), 0x0u);
    /* 00590005: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00590008: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590009: ret 4 */ FN_RET(0x0058fe50); r_esp += 8; return;
L_0059000c:; BB(0x0059000c);
    /* 0059000c: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 00590012: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590015: je 0x590042 */ if (fZ) goto L_00590042;
L_00590017:; BB(0x00590017);
    /* 00590017: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059001a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059001b: ret 4 */ FN_RET(0x0058fe50); r_esp += 8; return;
L_0059001e:; BB(0x0059001e);
    /* 0059001e: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 00590023: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00590026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590027: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x59002cu); f_00509590();
    /* 0059002c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059002f: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 00590035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590037: je 0x58ffc4 */ if (fZ) goto L_0058ffc4;
L_00590039:; BB(0x00590039);
    /* 00590039: mov ecx, eax */ r_ecx = r_eax;
    /* 0059003b: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x590040u); f_00508f48();
    /* 00590040: jmp 0x58ffc4 */ goto L_0058ffc4;
L_00590042:; BB(0x00590042);
    /* 00590042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590044: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x590049u); f_0058f7b8();
    /* 00590049: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059004b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059004d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x590052u); f_0051f62c();
    /* 00590052: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00590055: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590056: ret 4 */ FN_RET(0x0058fe50); r_esp += 8; return;
L_00590059:; BB(0x00590059);
    /* 00590059: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0059005b: mov eax, 7 */ r_eax = 0x7u;
    /* 00590060: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00590067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590069: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59006eu); f_0051f664();
    /* 0059006e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590070: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590072: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x590078u); call_ind(t); }
    /* 00590078: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0059007e: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00590081: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00590084: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0059008a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059008c: mov dword ptr [ebx + 0x40c], edx */ W32((u32)(r_ebx+0x40cu), r_edx);
    /* 00590092: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 00590098: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059009b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059009c: ret 4 */ FN_RET(0x0058fe50); r_esp += 8; return;
}

