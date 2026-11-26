#include "protos.h"

void f_0048a13c(void) /* sub_48A13C */
{
    FN_ENTER(0x0048a13c);
    /* 0048a13c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a13d: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048a140: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048a142: movzx eax, byte ptr [0xa46d80] */ r_eax = (u32)R8((u32)(0xa46d80u));
    /* 0048a149: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048a14b: jne 0x48a161 */ if (!fZ) goto L_0048a161;
L_0048a14d:; BB(0x0048a14d);
    /* 0048a14d: mov dword ptr [0xa46d84], 0x42480000 */ W32((u32)(0xa46d84u), 0x42480000u);
    /* 0048a157: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048a15c: mov byte ptr [0xa46d80], al */ W8((u32)(0xa46d80u), (u8)r_eax);
L_0048a161:; BB(0x0048a161);
    /* 0048a161: mov ecx, dword ptr [ebx + 0x380] */ r_ecx = R32((u32)(r_ebx+0x380u));
    /* 0048a167: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a169: je 0x48a278 */ if (fZ) goto L_0048a278;
L_0048a16f:; BB(0x0048a16f);
    /* 0048a16f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0048a172: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0048a176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a178: call 0x49e384 */ r_esp -= 4; W32(r_esp, 0x48a17du); f_0049e384();
    /* 0048a17d: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0048a181: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048a184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048a186: mov esi, ebx */ r_esi = r_ebx;
    /* 0048a188: mov ebx, eax */ r_ebx = r_eax;
L_0048a18a:; BB(0x0048a18a);
    /* 0048a18a: mov eax, dword ptr [esp + ebx] */ r_eax = R32((u32)(r_esp+r_ebx));
    /* 0048a18d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048a191: mov eax, dword ptr [esp + ebx + 4] */ r_eax = R32((u32)(r_esp+r_ebx+0x4u));
    /* 0048a195: mov edx, esi */ r_edx = r_esi;
    /* 0048a197: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048a19b: mov eax, dword ptr [esp + ebx + 8] */ r_eax = R32((u32)(r_esp+r_ebx+0x8u));
    /* 0048a19f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048a1a3: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0048a1a7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48a1acu); f_0082f9c4();
    /* 0048a1ac: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048a1b0: fcom dword ptr [0x901170] */ fx_compare(ST(0), R_F32((u32)(0x901170u))); 
    /* 0048a1b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a1b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a1b9: jae 0x48a1c2 */ if (!fC) goto L_0048a1c2;
L_0048a1bb:; BB(0x0048a1bb);
    /* 0048a1bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a1bd: jmp 0x48a263 */ goto L_0048a263;
L_0048a1c2:; BB(0x0048a1c2);
    /* 0048a1c2: fcomp dword ptr [0xa46d84] */ fx_compare(ST(0), R_F32((u32)(0xa46d84u))); FPOP();
    /* 0048a1c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a1ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a1cb: ja 0x48a263 */ if ((!fC&&!fZ)) goto L_0048a263;
L_0048a1d1:; BB(0x0048a1d1);
    /* 0048a1d1: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0048a1d9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0048a1dd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48a1e2u); f_0083173c();
    /* 0048a1e2: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0048a1e6: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048a1ea: fcomp dword ptr [0x90116c] */ fx_compare(ST(0), R_F32((u32)(0x90116cu))); FPOP();
    /* 0048a1f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a1f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a1f3: ja 0x48a263 */ if ((!fC&&!fZ)) goto L_0048a263;
L_0048a1f5:; BB(0x0048a1f5);
    /* 0048a1f5: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048a1f9: fcomp dword ptr [0x90125c] */ fx_compare(ST(0), R_F32((u32)(0x90125cu))); FPOP();
    /* 0048a1ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a201: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a202: ja 0x48a20c */ if ((!fC&&!fZ)) goto L_0048a20c;
L_0048a204:; BB(0x0048a204);
    /* 0048a204: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
L_0048a20c:; BB(0x0048a20c);
    /* 0048a20c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0048a210: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48a215u); f_0082df08();
    /* 0048a215: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a217: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048a21b: fsubr dword ptr [0x90116c] */ ST(0) = R_F32((u32)(0x90116cu)) - ST(0);
    /* 0048a221: fcom dword ptr [0x901168] */ fx_compare(ST(0), R_F32((u32)(0x901168u))); 
    /* 0048a227: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a229: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0048a22d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a22e: jbe 0x48a23e */ if ((fC||fZ)) goto L_0048a23e;
L_0048a230:; BB(0x0048a230);
    /* 0048a230: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048a234: fmul dword ptr [0x901164] */ ST(0) = ST(0) * R_F32((u32)(0x901164u));
    /* 0048a23a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0048a23e:; BB(0x0048a23e);
    /* 0048a23e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048a242: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048a246: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048a248: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0048a24c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048a24e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048a250: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0048a254: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0048a258: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0048a25c: mov ecx, esi */ r_ecx = r_esi;
    /* 0048a25e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48a263u); f_0082f9c4();
L_0048a263:; BB(0x0048a263);
    /* 0048a263: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048a266: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a269: jl 0x48a18a */ if ((fS!=fO)) goto L_0048a18a;
L_0048a26f:; BB(0x0048a26f);
    /* 0048a26f: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0048a273: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a276: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048a277: ret  */ FN_RET(0x0048a13c); r_esp += 4; return;
L_0048a278:; BB(0x0048a278);
    /* 0048a278: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a27b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048a27c: ret  */ FN_RET(0x0048a13c); r_esp += 4; return;
}

void f_0048a280(void) /* sub_48A280 */
{
    FN_ENTER(0x0048a280);
    /* 0048a280: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a281: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048a284: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048a286: movzx eax, byte ptr [0xa46d88] */ r_eax = (u32)R8((u32)(0xa46d88u));
    /* 0048a28d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048a28f: jne 0x48a2a5 */ if (!fZ) goto L_0048a2a5;
L_0048a291:; BB(0x0048a291);
    /* 0048a291: mov dword ptr [0xa46d8c], 0x42200000 */ W32((u32)(0xa46d8cu), 0x42200000u);
    /* 0048a29b: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048a2a0: mov byte ptr [0xa46d88], al */ W8((u32)(0xa46d88u), (u8)r_eax);
L_0048a2a5:; BB(0x0048a2a5);
    /* 0048a2a5: mov edx, dword ptr [ebx + 0x384] */ r_edx = R32((u32)(r_ebx+0x384u));
    /* 0048a2ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a2ad: je 0x48a369 */ if (fZ) goto L_0048a369;
L_0048a2b3:; BB(0x0048a2b3);
    /* 0048a2b3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048a2b6: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048a2b9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048a2bc: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0048a2bf: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048a2c2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048a2c6: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0048a2c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048a2cd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48a2d2u); f_0082f9c4();
    /* 0048a2d2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048a2d5: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48a2dau); f_0083173c();
    /* 0048a2da: fcom dword ptr [0xa46d8c] */ fx_compare(ST(0), R_F32((u32)(0xa46d8cu))); 
    /* 0048a2e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a2e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a2e3: jae 0x48a367 */ if (!fC) goto L_0048a367;
L_0048a2e9:; BB(0x0048a2e9);
    /* 0048a2e9: fcomp dword ptr [0x901250] */ fx_compare(ST(0), R_F32((u32)(0x901250u))); FPOP();
    /* 0048a2ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a2f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a2f2: ja 0x48a30d */ if ((!fC&&!fZ)) goto L_0048a30d;
L_0048a2f4:; BB(0x0048a2f4);
    /* 0048a2f4: mov eax, dword ptr [ebx + 0x38c] */ r_eax = R32((u32)(r_ebx+0x38cu));
    /* 0048a2fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a2fc: jne 0x48a305 */ if (!fZ) goto L_0048a305;
L_0048a2fe:; BB(0x0048a2fe);
    /* 0048a2fe: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0048a303: jmp 0x48a30a */ goto L_0048a30a;
L_0048a305:; BB(0x0048a305);
    /* 0048a305: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
L_0048a30a:; BB(0x0048a30a);
    /* 0048a30a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_0048a30d:; BB(0x0048a30d);
    /* 0048a30d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048a310: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48a315u); f_0082df08();
    /* 0048a315: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a317: fld dword ptr [0xa46d8c] */ FPUSH(R_F32((u32)(0xa46d8cu)));
    /* 0048a31d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0048a320: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0048a324: mov edx, dword ptr [ebx + 0x384] */ r_edx = R32((u32)(r_ebx+0x384u));
    /* 0048a32a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048a32c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0048a32e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048a330: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048a332: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048a334: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0048a337: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048a33b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048a343: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048a346: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048a349: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48a34eu); f_0082ebac();
    /* 0048a34e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0048a351: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0048a355: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0048a358: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048a35c: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 0048a35f: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0048a362: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a365: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048a366: ret  */ FN_RET(0x0048a280); r_esp += 4; return;
L_0048a367:; BB(0x0048a367);
    /* 0048a367: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048a369:; BB(0x0048a369);
    /* 0048a369: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a36c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048a36d: ret  */ FN_RET(0x0048a280); r_esp += 4; return;
}

void f_0048a370(void) /* sub_48A370 */
{
    FN_ENTER(0x0048a370);
    /* 0048a370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a371: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a372: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048a375: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048a377: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0048a37b: mov eax, dword ptr [ebp + ebx*4 + 0x444] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x444u));
    /* 0048a382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a384: je 0x48a38e */ if (fZ) goto L_0048a38e;
L_0048a386:; BB(0x0048a386);
    /* 0048a386: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a389: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048a38a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a38b: ret 4 */ FN_RET(0x0048a370); r_esp += 8; return;
L_0048a38e:; BB(0x0048a38e);
    /* 0048a38e: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0048a391: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0048a394: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048a397: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0048a39a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0048a39e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048a3a2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048a3a5: push dword ptr [ebx*8 + 0x9011c8] */ { u32 v = R32((u32)(r_ebx*8+0x9011c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048a3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3ad: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48a3b2u); f_00509590();
    /* 0048a3b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a3b5: mov dword ptr [ebp + ebx*4 + 0x444], eax */ W32((u32)(r_ebp+r_ebx*4+0x444u), r_eax);
    /* 0048a3bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a3be: je 0x48a3c9 */ if (fZ) goto L_0048a3c9;
L_0048a3c0:; BB(0x0048a3c0);
    /* 0048a3c0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3c2: mov ecx, eax */ r_ecx = r_eax;
    /* 0048a3c4: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48a3c9u); f_00508efc();
L_0048a3c9:; BB(0x0048a3c9);
    /* 0048a3c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a3cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048a3cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a3ce: ret 4 */ FN_RET(0x0048a370); r_esp += 8; return;
}

void f_0048a3d4(void) /* sub_48A3D4 */
{
    FN_ENTER(0x0048a3d4);
    /* 0048a3d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3d6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048a3d8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0048a3dc: mov eax, dword ptr [ebp + ebx*4 + 0x444] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x444u));
    /* 0048a3e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048a3e5: je 0x48a3f9 */ if (fZ) goto L_0048a3f9;
L_0048a3e7:; BB(0x0048a3e7);
    /* 0048a3e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a3e8: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48a3edu); f_005cdcc0();
    /* 0048a3ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048a3ee: mov dword ptr [ebp + ebx*4 + 0x444], 0 */ W32((u32)(r_ebp+r_ebx*4+0x444u), 0x0u);
L_0048a3f9:; BB(0x0048a3f9);
    /* 0048a3f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048a3fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a3fb: ret 4 */ FN_RET(0x0048a3d4); r_esp += 8; return;
}

void f_0048a400(void) /* sub_48A400 */
{
    FN_ENTER(0x0048a400);
    /* 0048a400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a401: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a405: push 0x8cfdea */ { u32 v = 0x8cfdeau; r_esp -= 4; W32(r_esp, v); }
    /* 0048a40a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048a410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a411: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048a418: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048a41b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048a41e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048a421: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048a424: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048a427: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048a429: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048a42c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048a42f: push 0x464 */ { u32 v = 0x464u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a434: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48a439u); f_005caba4();
    /* 0048a439: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048a43a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048a43d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a43f: je 0x48a4ac */ if (fZ) goto L_0048a4ac;
L_0048a441:; BB(0x0048a441);
    /* 0048a441: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0048a448: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048a44f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a451: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48a456u); f_005caba4();
    /* 0048a456: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048a457: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048a45a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a45c: je 0x48a4a8 */ if (fZ) goto L_0048a4a8;
L_0048a45e:; BB(0x0048a45e);
    /* 0048a45e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0048a465: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048a46c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048a472: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048a475: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x48a47au); f_00787a4c();
    /* 0048a47a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048a47d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0048a484:; BB(0x0048a484);
    /* 0048a484: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048a487: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048a48a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a48b: call 0x48a4b0 */ r_esp -= 4; W32(r_esp, 0x48a490u); f_0048a4b0();
    /* 0048a490: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048a493: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048a49a:; BB(0x0048a49a);
    /* 0048a49a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048a49d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048a4a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a4a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a4a7: ret  */ FN_RET(0x0048a400); r_esp += 4; return;
L_0048a4a8:; BB(0x0048a4a8);
    /* 0048a4a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048a4aa: jmp 0x48a484 */ goto L_0048a484;
L_0048a4ac:; BB(0x0048a4ac);
    /* 0048a4ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048a4ae: jmp 0x48a49a */ goto L_0048a49a;
}

void f_0048a4b0(void) /* sub_48A4B0 */
{
    FN_ENTER(0x0048a4b0);
    /* 0048a4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048a4b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4b5: push 0x8cfe04 */ { u32 v = 0x8cfe04u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048a4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a4c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048a4c8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048a4cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048a4ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0048a4d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0048a4d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048a4d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048a4da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048a4dd: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0048a4e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048a4e3: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x48a4e8u); f_007865e8();
    /* 0048a4e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048a4ef: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a4f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048a4f5: mov dword ptr [ecx], 0xaf8c40 */ W32((u32)(r_ecx), 0xaf8c40u);
    /* 0048a4fb: mov edx, dword ptr [0x9a6990] */ r_edx = R32((u32)(0x9a6990u));
    /* 0048a501: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a502: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0048a505: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 0048a508: mov dword ptr [ecx + 0x380], ebx */ W32((u32)(r_ecx+0x380u), r_ebx);
    /* 0048a50e: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
    /* 0048a511: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 0048a514: mov edi, dword ptr [eax + 0x48] */ r_edi = R32((u32)(r_eax+0x48u));
    /* 0048a517: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 0048a51a: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0048a51d: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0048a520: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0048a523: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0048a526: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0048a529: mov dword ptr [ecx + 0x38c], edx */ W32((u32)(r_ecx+0x38cu), r_edx);
    /* 0048a52f: mov dword ptr [edx*4 + 0xa46dc4], ecx */ W32((u32)(r_edx*4+0xa46dc4u), r_ecx);
    /* 0048a536: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0048a538: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x48a53eu); call_ind(t); }
    /* 0048a53e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a541: movsx ebx, word ptr [ecx + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 0048a545: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048a547: jl 0x48a588 */ if ((fS!=fO)) goto L_0048a588;
L_0048a549:; BB(0x0048a549);
    /* 0048a549: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a54f: jg 0x48a588 */ if ((!fZ&&fS==fO)) goto L_0048a588;
L_0048a551:; BB(0x0048a551);
    /* 0048a551: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 0048a557: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0048a55a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048a55c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0048a55f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048a561: mov edi, dword ptr [eax + edx + 8] */ r_edi = R32((u32)(r_eax+r_edx+0x8u));
    /* 0048a565: movzx esi, word ptr [eax + edx + 4] */ r_esi = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 0048a56a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048a56c: jl 0x48a588 */ if ((fS!=fO)) goto L_0048a588;
L_0048a56e:; BB(0x0048a56e);
    /* 0048a56e: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a574: jg 0x48a588 */ if ((!fZ&&fS==fO)) goto L_0048a588;
L_0048a576:; BB(0x0048a576);
    /* 0048a576: mov dword ptr [eax + edx], 0 */ W32((u32)(r_eax+r_edx), 0x0u);
    /* 0048a57d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a580: mov dword ptr [eax + edx + 4], esi */ W32((u32)(r_eax+r_edx+0x4u), r_esi);
    /* 0048a584: mov dword ptr [eax + edx + 8], edi */ W32((u32)(r_eax+r_edx+0x8u), r_edi);
L_0048a588:; BB(0x0048a588);
    /* 0048a588: mov eax, dword ptr [0xa46fa0] */ r_eax = R32((u32)(0xa46fa0u));
    /* 0048a58d: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 0048a590: mov esi, dword ptr [ecx + 0x3c] */ r_esi = R32((u32)(r_ecx+0x3cu));
    /* 0048a593: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 0048a596: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 0048a59c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048a59e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a5a0: push 0x9a6994 */ { u32 v = 0x9a6994u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a5a5: mov dword ptr [ecx + 0x384], edx */ W32((u32)(r_ecx+0x384u), r_edx);
    /* 0048a5ab: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0048a5ae: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0048a5b1: mov dword ptr [ecx + 0x74], ebx */ W32((u32)(r_ecx+0x74u), r_ebx);
    /* 0048a5b4: mov dword ptr [ecx + 0x78], esi */ W32((u32)(r_ecx+0x78u), r_esi);
    /* 0048a5b7: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 0048a5ba: mov dword ptr [ecx + 0x50], ebx */ W32((u32)(r_ecx+0x50u), r_ebx);
    /* 0048a5bd: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 0048a5c0: mov dword ptr [ecx + 0x58], edi */ W32((u32)(r_ecx+0x58u), r_edi);
    /* 0048a5c3: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 0048a5c6: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 0048a5c9: mov dword ptr [ecx + 0x4c], edi */ W32((u32)(r_ecx+0x4cu), r_edi);
    /* 0048a5cc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x48a5d1u); f_007b9a88();
    /* 0048a5d1: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a5d4: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a5d7: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a5d9: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048a5dc: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0048a5df: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0048a5e2: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0048a5e8: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0048a5ee: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0048a5f4: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 0048a5fe: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 0048a608: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 0048a612: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x48a617u); f_0077a684();
    /* 0048a617: mov esi, eax */ r_esi = r_eax;
    /* 0048a619: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a61b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x48a620u); f_0077a698();
    /* 0048a620: mov ebx, eax */ r_ebx = r_eax;
    /* 0048a622: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a624: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x48a629u); f_0077a6b4();
    /* 0048a629: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a62c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a62f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a630: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a631: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048a632: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x48a637u); f_007868f8();
    /* 0048a637: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a63a: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0048a641: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0048a648: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0048a64e: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x48a653u); f_007b4f54();
    /* 0048a653: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a656: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 0048a65c: mov edx, 0x55 */ r_edx = 0x55u;
    /* 0048a661: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048a664: jne 0x48a66b */ if (!fZ) goto L_0048a66b;
L_0048a666:; BB(0x0048a666);
    /* 0048a666: mov edx, 0x56 */ r_edx = 0x56u;
L_0048a66b:; BB(0x0048a66b);
    /* 0048a66b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a66c: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x48a671u); f_00787550();
    /* 0048a671: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048a674: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a677: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0048a67a: or dword ptr [ecx + 0x2e8], eax */ { u32 ad = (u32)(r_ecx+0x2e8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0048a680: mov ebx, dword ptr [edx + 0x5c] */ r_ebx = R32((u32)(r_edx+0x5cu));
    /* 0048a683: mov dword ptr [ecx + 0x398], ebx */ W32((u32)(r_ecx+0x398u), r_ebx);
    /* 0048a689: call 0x48aa80 */ r_esp -= 4; W32(r_esp, 0x48a68eu); f_0048aa80();
    /* 0048a68e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a691: call 0x48ab6c */ r_esp -= 4; W32(r_esp, 0x48a696u); f_0048ab6c();
    /* 0048a696: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a699: add eax, 0x454 */ {  u32 a = r_eax; u32 b = 0x454u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048a69e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048a69f: push 0x9011e8 */ { u32 v = 0x9011e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048a6a4: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x48a6a9u); f_0058836c();
    /* 0048a6a9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a6ac: mov edx, dword ptr [0x901178] */ r_edx = R32((u32)(0x901178u));
    /* 0048a6b2: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0048a6b4: mov dword ptr [ecx + 0x460], eax */ W32((u32)(r_ecx+0x460u), r_eax);
    /* 0048a6ba: mov eax, dword ptr [0x901174] */ r_eax = R32((u32)(0x901174u));
    /* 0048a6bf: mov dword ptr [ecx + 0x410], eax */ W32((u32)(r_ecx+0x410u), r_eax);
    /* 0048a6c5: mov dword ptr [ecx + 0x414], edx */ W32((u32)(r_ecx+0x414u), r_edx);
    /* 0048a6cb: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x48a6d0u); f_0077a6cc();
    /* 0048a6d0: mov ecx, eax */ r_ecx = r_eax;
    /* 0048a6d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048a6d5: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a6d8: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0048a6da: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048a6dd: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048a6e1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048a6e6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048a6e9: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048a6ec: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048a6ef: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048a6f2: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0048a6f5: fld dword ptr [0x901240] */ FPUSH(R_F32((u32)(0x901240u)));
    /* 0048a6fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048a6fd: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048a6ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a701: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a702: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048a705: ja 0x48a713 */ if ((!fC&&!fZ)) goto L_0048a713;
L_0048a707:; BB(0x0048a707);
    /* 0048a707: mov dword ptr [ebx + 0x3c8], 0x96 */ W32((u32)(r_ebx+0x3c8u), 0x96u);
    /* 0048a711: jmp 0x48a719 */ goto L_0048a719;
L_0048a713:; BB(0x0048a713);
    /* 0048a713: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
L_0048a719:; BB(0x0048a719);
    /* 0048a719: fcomp dword ptr [ecx + 4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x4u))); FPOP();
    /* 0048a71c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a71e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0048a721: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a722: jb 0x48a730 */ if (fC) goto L_0048a730;
L_0048a724:; BB(0x0048a724);
    /* 0048a724: mov dword ptr [ebx + 0x3cc], 0x40000000 */ W32((u32)(r_ebx+0x3ccu), 0x40000000u);
    /* 0048a72e: jmp 0x48a736 */ goto L_0048a736;
L_0048a730:; BB(0x0048a730);
    /* 0048a730: mov dword ptr [ebx + 0x3cc], edx */ W32((u32)(r_ebx+0x3ccu), r_edx);
L_0048a736:; BB(0x0048a736);
    /* 0048a736: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048a738: call 0x48aa68 */ r_esp -= 4; W32(r_esp, 0x48a73du); f_0048aa68();
    /* 0048a73d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a740: mov dword ptr [ecx + 0x400], 0 */ W32((u32)(r_ecx+0x400u), 0x0u);
    /* 0048a74a: mov dword ptr [ecx + 0x404], 0x3f800000 */ W32((u32)(r_ecx+0x404u), 0x3f800000u);
    /* 0048a754: mov dword ptr [ecx + 0x408], 0 */ W32((u32)(r_ecx+0x408u), 0x0u);
    /* 0048a75e: call 0x48918c */ r_esp -= 4; W32(r_esp, 0x48a763u); f_0048918c();
    /* 0048a763: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a766: call 0x48aa4c */ r_esp -= 4; W32(r_esp, 0x48a76bu); f_0048aa4c();
    /* 0048a76b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a76e: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 0048a778: push dword ptr [0x9a69c4] */ { u32 v = R32((u32)(0x9a69c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048a77e: call 0x489050 */ r_esp -= 4; W32(r_esp, 0x48a783u); f_00489050();
    /* 0048a783: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048a786: mov eax, dword ptr [0x9a69c8] */ r_eax = R32((u32)(0x9a69c8u));
    /* 0048a78b: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0048a791: mov eax, dword ptr [0x9a69cc] */ r_eax = R32((u32)(0x9a69ccu));
    /* 0048a796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048a798: je 0x48a79f */ if (fZ) goto L_0048a79f;
L_0048a79a:; BB(0x0048a79a);
    /* 0048a79a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48a79cu); call_ind(t); }
    /* 0048a79c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
L_0048a79f:; BB(0x0048a79f);
    /* 0048a79f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048a7a2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048a7a5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048a7a8: mov eax, ecx */ r_eax = r_ecx;
    /* 0048a7aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048a7ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048a7b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0048a7b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048a7b7: ret 8 */ FN_RET(0x0048a4b0); r_esp += 12; return;
}

void f_0048a7bc(void) /* sub_48A7BC */
{
    FN_ENTER(0x0048a7bc);
    /* 0048a7bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048a7c0: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 0048a7c6: ret 4 */ FN_RET(0x0048a7bc); r_esp += 8; return;
}

void f_0048a7cc(void) /* sub_48A7CC */
{
    FN_ENTER(0x0048a7cc);
    /* 0048a7cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048a7d0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0048a7d4: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0048a7da: mov dword ptr [ecx + 0x398], edx */ W32((u32)(r_ecx+0x398u), r_edx);
    /* 0048a7e0: call 0x48a7e8 */ r_esp -= 4; W32(r_esp, 0x48a7e5u); f_0048a7e8();
    /* 0048a7e5: ret 8 */ FN_RET(0x0048a7cc); r_esp += 12; return;
}

void f_0048a7e8(void) /* sub_48A7E8 */
{
    FN_ENTER(0x0048a7e8);
    /* 0048a7e8: movsx eax, word ptr [ecx + 0x3bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x3bcu));
    /* 0048a7ef: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 0048a7f5: mov word ptr [ecx + 0x3a6], ax */ W16((u32)(r_ecx+0x3a6u), (u16)r_eax);
    /* 0048a7fc: mov word ptr [ecx + 0x3a4], ax */ W16((u32)(r_ecx+0x3a4u), (u16)r_eax);
    /* 0048a803: mov word ptr [ecx + 0x3a2], ax */ W16((u32)(r_ecx+0x3a2u), (u16)r_eax);
    /* 0048a80a: mov word ptr [ecx + 0x3a0], ax */ W16((u32)(r_ecx+0x3a0u), (u16)r_eax);
    /* 0048a811: mov word ptr [ecx + 0x39e], ax */ W16((u32)(r_ecx+0x39eu), (u16)r_eax);
    /* 0048a818: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048a81b: je 0x48a8b3 */ if (fZ) goto L_0048a8b3;
L_0048a821:; BB(0x0048a821);
    /* 0048a821: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048a824: je 0x48a8a3 */ if (fZ) goto L_0048a8a3;
L_0048a826:; BB(0x0048a826);
    /* 0048a826: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048a829: je 0x48a855 */ if (fZ) goto L_0048a855;
L_0048a82b:; BB(0x0048a82b);
    /* 0048a82b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048a82e: jne 0x48a840 */ if (!fZ) goto L_0048a840;
L_0048a830:; BB(0x0048a830);
    /* 0048a830: movzx edx, word ptr [ecx + 0x3be] */ r_edx = (u32)R16((u32)(r_ecx+0x3beu));
    /* 0048a837: mov word ptr [ecx + 0x3a4], dx */ W16((u32)(r_ecx+0x3a4u), (u16)r_edx);
    /* 0048a83e: jmp 0x48a863 */ goto L_0048a863;
L_0048a840:; BB(0x0048a840);
    /* 0048a840: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048a843: jne 0x48a863 */ if (!fZ) goto L_0048a863;
L_0048a845:; BB(0x0048a845);
    /* 0048a845: movzx edx, word ptr [ecx + 0x3be] */ r_edx = (u32)R16((u32)(r_ecx+0x3beu));
    /* 0048a84c: mov word ptr [ecx + 0x3a6], dx */ W16((u32)(r_ecx+0x3a6u), (u16)r_edx);
    /* 0048a853: jmp 0x48a863 */ goto L_0048a863;
L_0048a855:; BB(0x0048a855);
    /* 0048a855: movzx edx, word ptr [ecx + 0x3be] */ r_edx = (u32)R16((u32)(r_ecx+0x3beu));
    /* 0048a85c: mov word ptr [ecx + 0x3a2], dx */ W16((u32)(r_ecx+0x3a2u), (u16)r_edx);
L_0048a863:; BB(0x0048a863);
    /* 0048a863: movzx edx, word ptr [ecx + 0x3a0] */ r_edx = (u32)R16((u32)(r_ecx+0x3a0u));
    /* 0048a86a: mov word ptr [ecx + 0x2f6], ax */ W16((u32)(r_ecx+0x2f6u), (u16)r_eax);
    /* 0048a871: movzx eax, word ptr [ecx + 0x3a2] */ r_eax = (u32)R16((u32)(r_ecx+0x3a2u));
    /* 0048a878: mov word ptr [ecx + 0x2f8], ax */ W16((u32)(r_ecx+0x2f8u), (u16)r_eax);
    /* 0048a87f: movzx eax, word ptr [ecx + 0x3a6] */ r_eax = (u32)R16((u32)(r_ecx+0x3a6u));
    /* 0048a886: mov word ptr [ecx + 0x2fa], dx */ W16((u32)(r_ecx+0x2fau), (u16)r_edx);
    /* 0048a88d: mov word ptr [ecx + 0x2fc], ax */ W16((u32)(r_ecx+0x2fcu), (u16)r_eax);
    /* 0048a894: movzx eax, word ptr [ecx + 0x3a4] */ r_eax = (u32)R16((u32)(r_ecx+0x3a4u));
    /* 0048a89b: mov word ptr [ecx + 0x2fe], ax */ W16((u32)(r_ecx+0x2feu), (u16)r_eax);
    /* 0048a8a2: ret  */ FN_RET(0x0048a7e8); r_esp += 4; return;
L_0048a8a3:; BB(0x0048a8a3);
    /* 0048a8a3: movzx edx, word ptr [ecx + 0x3be] */ r_edx = (u32)R16((u32)(r_ecx+0x3beu));
    /* 0048a8aa: mov word ptr [ecx + 0x3a0], dx */ W16((u32)(r_ecx+0x3a0u), (u16)r_edx);
    /* 0048a8b1: jmp 0x48a863 */ goto L_0048a863;
L_0048a8b3:; BB(0x0048a8b3);
    /* 0048a8b3: movsx eax, word ptr [ecx + 0x3be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x3beu));
    /* 0048a8ba: mov word ptr [ecx + 0x39e], ax */ W16((u32)(r_ecx+0x39eu), (u16)r_eax);
    /* 0048a8c1: jmp 0x48a863 */ goto L_0048a863;
}

void f_0048a8c4(void) /* sub_48A8C4 */
{
    FN_ENTER(0x0048a8c4);
    /* 0048a8c4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0048a8c9: mov word ptr [ecx + 0x410], ax */ W16((u32)(r_ecx+0x410u), (u16)r_eax);
    /* 0048a8d0: ret 4 */ FN_RET(0x0048a8c4); r_esp += 8; return;
}

void f_0048a8d4(void) /* sub_48A8D4 */
{
    FN_ENTER(0x0048a8d4);
    /* 0048a8d4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048a8d8: mov dword ptr [ecx + 0x414], eax */ W32((u32)(r_ecx+0x414u), r_eax);
    /* 0048a8de: ret 4 */ FN_RET(0x0048a8d4); r_esp += 8; return;
}

void f_0048a8e4(void) /* sub_48A8E4 */
{
    FN_ENTER(0x0048a8e4);
    /* 0048a8e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048a8e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048a8e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048a8e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048a8e8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0048a8ec: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0048a8f0: mov ebx, dword ptr [eax*4 + 0xa46dc4] */ r_ebx = R32((u32)(r_eax*4+0xa46dc4u));
    /* 0048a8f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048a8f9: je 0x48aa19 */ if (fZ) goto L_0048aa19;
L_0048a8ff:; BB(0x0048a8ff);
    /* 0048a8ff: mov dword ptr [ebx + 0x418], 0 */ W32((u32)(r_ebx+0x418u), 0x0u);
    /* 0048a909: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a90c: mov edx, 3 */ r_edx = 0x3u;
    /* 0048a911: jg 0x48a915 */ if ((!fZ&&fS==fO)) goto L_0048a915;
L_0048a913:; BB(0x0048a913);
    /* 0048a913: mov edx, esi */ r_edx = r_esi;
L_0048a915:; BB(0x0048a915);
    /* 0048a915: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048a917: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048a919: jle 0x48a9e4 */ if ((fZ||fS!=fO)) goto L_0048a9e4;
L_0048a91f:; BB(0x0048a91f);
    /* 0048a91f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a922: jl 0x48a9ac */ if ((fS!=fO)) goto L_0048a9ac;
L_0048a928:; BB(0x0048a928);
    /* 0048a928: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0048a92b: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0048a92f: lea edi, [edx - 4] */ r_edi = (u32)(r_edx+0xfffffffcu);
    /* 0048a932: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0048a935: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048a937: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0048a93a: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0048a93c:; BB(0x0048a93c);
    /* 0048a93c: mov ecx, dword ptr [ebp + esi] */ r_ecx = R32((u32)(r_ebp+r_esi));
    /* 0048a940: mov dword ptr [esi + ebx + 0x420], ecx */ W32((u32)(r_esi+r_ebx+0x420u), r_ecx);
    /* 0048a947: mov ecx, dword ptr [ebp + esi + 4] */ r_ecx = R32((u32)(r_ebp+r_esi+0x4u));
    /* 0048a94b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048a94e: mov dword ptr [esi + ebx + 0x424], ecx */ W32((u32)(r_esi+r_ebx+0x424u), r_ecx);
    /* 0048a955: mov ecx, dword ptr [ebp + esi + 8] */ r_ecx = R32((u32)(r_ebp+r_esi+0x8u));
    /* 0048a959: mov dword ptr [esi + ebx + 0x428], ecx */ W32((u32)(r_esi+r_ebx+0x428u), r_ecx);
    /* 0048a960: mov ecx, dword ptr [ebp + esi + 0xc] */ r_ecx = R32((u32)(r_ebp+r_esi+0xcu));
    /* 0048a964: mov dword ptr [esi + ebx + 0x42c], ecx */ W32((u32)(r_esi+r_ebx+0x42cu), r_ecx);
    /* 0048a96b: mov ecx, dword ptr [ebp + esi + 0x10] */ r_ecx = R32((u32)(r_ebp+r_esi+0x10u));
    /* 0048a96f: mov dword ptr [esi + ebx + 0x430], ecx */ W32((u32)(r_esi+r_ebx+0x430u), r_ecx);
    /* 0048a976: mov ecx, dword ptr [ebp + esi + 0x14] */ r_ecx = R32((u32)(r_ebp+r_esi+0x14u));
    /* 0048a97a: mov dword ptr [esi + ebx + 0x434], ecx */ W32((u32)(r_esi+r_ebx+0x434u), r_ecx);
    /* 0048a981: mov ecx, dword ptr [ebp + esi + 0x18] */ r_ecx = R32((u32)(r_ebp+r_esi+0x18u));
    /* 0048a985: mov dword ptr [esi + ebx + 0x438], ecx */ W32((u32)(r_esi+r_ebx+0x438u), r_ecx);
    /* 0048a98c: mov ecx, dword ptr [ebp + esi + 0x1c] */ r_ecx = R32((u32)(r_ebp+r_esi+0x1cu));
    /* 0048a990: mov dword ptr [esi + ebx + 0x43c], ecx */ W32((u32)(r_esi+r_ebx+0x43cu), r_ecx);
    /* 0048a997: mov ecx, dword ptr [ebp + esi + 0x20] */ r_ecx = R32((u32)(r_ebp+r_esi+0x20u));
    /* 0048a99b: mov dword ptr [esi + ebx + 0x440], ecx */ W32((u32)(r_esi+r_ebx+0x440u), r_ecx);
    /* 0048a9a2: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048a9a5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a9a7: jle 0x48a93c */ if ((fZ||fS!=fO)) goto L_0048a93c;
L_0048a9a9:; BB(0x0048a9a9);
    /* 0048a9a9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0048a9ac:; BB(0x0048a9ac);
    /* 0048a9ac: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0048a9af: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0048a9b1: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0048a9b4: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048a9b6: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_0048a9ba:; BB(0x0048a9ba);
    /* 0048a9ba: mov ecx, dword ptr [edi + esi] */ r_ecx = R32((u32)(r_edi+r_esi));
    /* 0048a9bd: mov dword ptr [esi + ebx + 0x420], ecx */ W32((u32)(r_esi+r_ebx+0x420u), r_ecx);
    /* 0048a9c4: mov ecx, dword ptr [edi + esi + 4] */ r_ecx = R32((u32)(r_edi+r_esi+0x4u));
    /* 0048a9c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048a9cb: mov dword ptr [esi + ebx + 0x424], ecx */ W32((u32)(r_esi+r_ebx+0x424u), r_ecx);
    /* 0048a9d2: mov ecx, dword ptr [edi + esi + 8] */ r_ecx = R32((u32)(r_edi+r_esi+0x8u));
    /* 0048a9d6: mov dword ptr [esi + ebx + 0x428], ecx */ W32((u32)(r_esi+r_ebx+0x428u), r_ecx);
    /* 0048a9dd: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048a9e0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048a9e2: jl 0x48a9ba */ if ((fS!=fO)) goto L_0048a9ba;
L_0048a9e4:; BB(0x0048a9e4);
    /* 0048a9e4: mov dword ptr [ebx + 0x388], 3 */ W32((u32)(r_ebx+0x388u), 0x3u);
    /* 0048a9ee: mov dword ptr [ebx + 0x41c], edx */ W32((u32)(r_ebx+0x41cu), r_edx);
    /* 0048a9f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048a9f6: push dword ptr [0x9a6a00] */ { u32 v = R32((u32)(0x9a6a00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048a9fc: call 0x489050 */ r_esp -= 4; W32(r_esp, 0x48aa01u); f_00489050();
    /* 0048aa01: mov eax, dword ptr [0x9a6a04] */ r_eax = R32((u32)(0x9a6a04u));
    /* 0048aa06: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0048aa0c: mov eax, dword ptr [0x9a6a08] */ r_eax = R32((u32)(0x9a6a08u));
    /* 0048aa11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048aa13: je 0x48aa19 */ if (fZ) goto L_0048aa19;
L_0048aa15:; BB(0x0048aa15);
    /* 0048aa15: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048aa17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48aa19u); call_ind(t); }
L_0048aa19:; BB(0x0048aa19);
    /* 0048aa19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048aa1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048aa1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048aa1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048aa1d: ret  */ FN_RET(0x0048a8e4); r_esp += 4; return;
}

void f_0048aa4c(void) /* sub_48AA4C */
{
    FN_ENTER(0x0048aa4c);
    /* 0048aa4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048aa4e: mov dword ptr [ecx + 0x444], eax */ W32((u32)(r_ecx+0x444u), r_eax);
    /* 0048aa54: mov dword ptr [ecx + 0x448], eax */ W32((u32)(r_ecx+0x448u), r_eax);
    /* 0048aa5a: mov dword ptr [ecx + 0x44c], eax */ W32((u32)(r_ecx+0x44cu), r_eax);
    /* 0048aa60: mov dword ptr [ecx + 0x450], eax */ W32((u32)(r_ecx+0x450u), r_eax);
    /* 0048aa66: ret  */ FN_RET(0x0048aa4c); r_esp += 4; return;
}

void f_0048aa68(void) /* sub_48AA68 */
{
    FN_ENTER(0x0048aa68);
    /* 0048aa68: mov dword ptr [ecx + 0x3c0], 0 */ W32((u32)(r_ecx+0x3c0u), 0x0u);
    /* 0048aa72: mov dword ptr [ecx + 0x3c4], 0 */ W32((u32)(r_ecx+0x3c4u), 0x0u);
    /* 0048aa7c: ret  */ FN_RET(0x0048aa68); r_esp += 4; return;
}

void f_0048aa80(void) /* sub_48AA80 */
{
    FN_ENTER(0x0048aa80);
    /* 0048aa80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048aa82: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048aa84: mov ecx, dword ptr [ebx + 0x320] */ r_ecx = R32((u32)(r_ebx+0x320u));
    /* 0048aa8a: movsx edx, word ptr [ecx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 0048aa8e: movsx edi, word ptr [ecx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 0048aa92: mov eax, edx */ r_eax = r_edx;
    /* 0048aa94: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aa96: jle 0x48aa9c */ if ((fZ||fS!=fO)) goto L_0048aa9c;
L_0048aa98:; BB(0x0048aa98);
    /* 0048aa98: mov edx, edi */ r_edx = r_edi;
    /* 0048aa9a: jmp 0x48aaa4 */ goto L_0048aaa4;
L_0048aa9c:; BB(0x0048aa9c);
    /* 0048aa9c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aa9e: mov eax, edi */ r_eax = r_edi;
    /* 0048aaa0: jg 0x48aaa4 */ if ((!fZ&&fS==fO)) goto L_0048aaa4;
L_0048aaa2:; BB(0x0048aaa2);
    /* 0048aaa2: mov eax, edx */ r_eax = r_edx;
L_0048aaa4:; BB(0x0048aaa4);
    /* 0048aaa4: movsx edi, word ptr [ecx + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 0048aaa8: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aaaa: jle 0x48aab0 */ if ((fZ||fS!=fO)) goto L_0048aab0;
L_0048aaac:; BB(0x0048aaac);
    /* 0048aaac: mov edx, edi */ r_edx = r_edi;
    /* 0048aaae: jmp 0x48aab6 */ goto L_0048aab6;
L_0048aab0:; BB(0x0048aab0);
    /* 0048aab0: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aab2: jle 0x48aab6 */ if ((fZ||fS!=fO)) goto L_0048aab6;
L_0048aab4:; BB(0x0048aab4);
    /* 0048aab4: mov eax, edi */ r_eax = r_edi;
L_0048aab6:; BB(0x0048aab6);
    /* 0048aab6: movsx edi, word ptr [ecx + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0048aaba: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aabc: jle 0x48aac2 */ if ((fZ||fS!=fO)) goto L_0048aac2;
L_0048aabe:; BB(0x0048aabe);
    /* 0048aabe: mov edx, edi */ r_edx = r_edi;
    /* 0048aac0: jmp 0x48aac8 */ goto L_0048aac8;
L_0048aac2:; BB(0x0048aac2);
    /* 0048aac2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aac4: jle 0x48aac8 */ if ((fZ||fS!=fO)) goto L_0048aac8;
L_0048aac6:; BB(0x0048aac6);
    /* 0048aac6: mov eax, edi */ r_eax = r_edi;
L_0048aac8:; BB(0x0048aac8);
    /* 0048aac8: movsx edi, word ptr [ecx + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xau));
    /* 0048aacc: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aace: jle 0x48aad4 */ if ((fZ||fS!=fO)) goto L_0048aad4;
L_0048aad0:; BB(0x0048aad0);
    /* 0048aad0: mov edx, edi */ r_edx = r_edi;
    /* 0048aad2: jmp 0x48aada */ goto L_0048aada;
L_0048aad4:; BB(0x0048aad4);
    /* 0048aad4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048aad6: jle 0x48aada */ if ((fZ||fS!=fO)) goto L_0048aada;
L_0048aad8:; BB(0x0048aad8);
    /* 0048aad8: mov eax, edi */ r_eax = r_edi;
L_0048aada:; BB(0x0048aada);
    /* 0048aada: mov word ptr [ebx + 0x3be], dx */ W16((u32)(r_ebx+0x3beu), (u16)r_edx);
    /* 0048aae1: mov word ptr [ebx + 0x3bc], ax */ W16((u32)(r_ebx+0x3bcu), (u16)r_eax);
    /* 0048aae8: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0048aaeb: mov word ptr [ebx + 0x39c], ax */ W16((u32)(r_ebx+0x39cu), (u16)r_eax);
    /* 0048aaf2: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0048aaf6: mov word ptr [ebx + 0x39e], dx */ W16((u32)(r_ebx+0x39eu), (u16)r_edx);
    /* 0048aafd: movzx edi, word ptr [ecx + 4] */ r_edi = (u32)R16((u32)(r_ecx+0x4u));
    /* 0048ab01: mov word ptr [ebx + 0x3a0], di */ W16((u32)(r_ebx+0x3a0u), (u16)r_edi);
    /* 0048ab08: movzx eax, word ptr [ecx + 6] */ r_eax = (u32)R16((u32)(r_ecx+0x6u));
    /* 0048ab0c: mov word ptr [ebx + 0x3a2], ax */ W16((u32)(r_ebx+0x3a2u), (u16)r_eax);
    /* 0048ab13: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0048ab17: mov word ptr [ebx + 0x3a4], ax */ W16((u32)(r_ebx+0x3a4u), (u16)r_eax);
    /* 0048ab1e: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 0048ab22: mov word ptr [ebx + 0x3a6], ax */ W16((u32)(r_ebx+0x3a6u), (u16)r_eax);
    /* 0048ab29: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0048ab2c: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 0048ab32: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0048ab35: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
    /* 0048ab3b: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0048ab3e: mov dword ptr [ebx + 0x3b0], eax */ W32((u32)(r_ebx+0x3b0u), r_eax);
    /* 0048ab44: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0048ab47: mov dword ptr [ebx + 0x3b4], eax */ W32((u32)(r_ebx+0x3b4u), r_eax);
    /* 0048ab4d: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0048ab50: mov dword ptr [ebx + 0x3b8], eax */ W32((u32)(r_ebx+0x3b8u), r_eax);
    /* 0048ab56: lea eax, [ebx + 0x39c] */ r_eax = (u32)(r_ebx+0x39cu);
    /* 0048ab5c: mov dword ptr [ebx + 0x320], eax */ W32((u32)(r_ebx+0x320u), r_eax);
    /* 0048ab62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ab64: call 0x48a7e8 */ r_esp -= 4; W32(r_esp, 0x48ab69u); f_0048a7e8();
    /* 0048ab69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ab6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048ab6b: ret  */ FN_RET(0x0048aa80); r_esp += 4; return;
}

void f_0048ab6c(void) /* sub_48AB6C */
{
    FN_ENTER(0x0048ab6c);
    /* 0048ab6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ab6d: mov esi, ecx */ r_esi = r_ecx;
    /* 0048ab6f: movzx eax, byte ptr [0xa46d90] */ r_eax = (u32)R8((u32)(0xa46d90u));
    /* 0048ab76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048ab78: jne 0x48ab8e */ if (!fZ) goto L_0048ab8e;
L_0048ab7a:; BB(0x0048ab7a);
    /* 0048ab7a: mov dword ptr [0xa46db8], 0x3d888889 */ W32((u32)(0xa46db8u), 0x3d888889u);
    /* 0048ab84: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048ab89: mov byte ptr [0xa46d90], al */ W8((u32)(0xa46d90u), (u8)r_eax);
L_0048ab8e:; BB(0x0048ab8e);
    /* 0048ab8e: push dword ptr [0x9a6948] */ { u32 v = R32((u32)(0x9a6948u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048ab94: mov eax, dword ptr [0x901208] */ r_eax = R32((u32)(0x901208u));
    /* 0048ab99: mov ecx, dword ptr [esi + 0x37c] */ r_ecx = R32((u32)(r_esi+0x37cu));
    /* 0048ab9f: mov edx, dword ptr [0x90120c] */ r_edx = R32((u32)(0x90120cu));
    /* 0048aba5: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 0048abab: mov eax, dword ptr [0xa46da8] */ r_eax = R32((u32)(0xa46da8u));
    /* 0048abb0: mov dword ptr [esi + 0x3e0], edx */ W32((u32)(r_esi+0x3e0u), r_edx);
    /* 0048abb6: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 0048abbc: mov eax, dword ptr [0xa46dac] */ r_eax = R32((u32)(0xa46dacu));
    /* 0048abc1: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 0048abc7: mov eax, dword ptr [0xa46db0] */ r_eax = R32((u32)(0xa46db0u));
    /* 0048abcc: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 0048abd2: mov eax, dword ptr [0xa46db4] */ r_eax = R32((u32)(0xa46db4u));
    /* 0048abd7: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 0048abdd: mov eax, dword ptr [0xa46db8] */ r_eax = R32((u32)(0xa46db8u));
    /* 0048abe2: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 0048abe8: mov eax, dword ptr [0xa46dbc] */ r_eax = R32((u32)(0xa46dbcu));
    /* 0048abed: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 0048abf3: mov eax, dword ptr [0xa46dc0] */ r_eax = R32((u32)(0xa46dc0u));
    /* 0048abf8: mov dword ptr [esi + 0x3fc], eax */ W32((u32)(r_esi+0x3fcu), r_eax);
    /* 0048abfe: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48ac03u); f_005b8638();
    /* 0048ac03: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 0048ac09: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 0048ac0f: mov eax, dword ptr [0x9a694c] */ r_eax = R32((u32)(0x9a694cu));
    /* 0048ac14: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 0048ac1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ac1b: ret  */ FN_RET(0x0048ab6c); r_esp += 4; return;
}

void f_0048ac1c(void) /* sub_48AC1C */
{
    FN_ENTER(0x0048ac1c);
    /* 0048ac1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac1d: mov edi, ecx */ r_edi = r_ecx;
    /* 0048ac1f: mov ecx, edi */ r_ecx = r_edi;
    /* 0048ac21: call 0x48966c */ r_esp -= 4; W32(r_esp, 0x48ac26u); f_0048966c();
    /* 0048ac26: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0048ac2c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ac2f: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0048ac35: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048ac38: jl 0x48ac43 */ if ((fS!=fO)) goto L_0048ac43;
L_0048ac3a:; BB(0x0048ac3a);
    /* 0048ac3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac3c: mov ecx, edi */ r_ecx = r_edi;
    /* 0048ac3e: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48ac43u); f_00489624();
L_0048ac43:; BB(0x0048ac43);
    /* 0048ac43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048ac44: ret  */ FN_RET(0x0048ac1c); r_esp += 4; return;
}

void f_0048ac48(void) /* sub_48AC48 */
{
    FN_ENTER(0x0048ac48);
    /* 0048ac48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac49: mov esi, ecx */ r_esi = r_ecx;
    /* 0048ac4b: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ac4d: call 0x4896c4 */ r_esp -= 4; W32(r_esp, 0x48ac52u); f_004896c4();
    /* 0048ac52: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ac54: call 0x489f44 */ r_esp -= 4; W32(r_esp, 0x48ac59u); f_00489f44();
    /* 0048ac59: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ac5b: call 0x48a280 */ r_esp -= 4; W32(r_esp, 0x48ac60u); f_0048a280();
    /* 0048ac60: mov eax, dword ptr [esi + 0x414] */ r_eax = R32((u32)(r_esi+0x414u));
    /* 0048ac66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ac68: jne 0x48ac73 */ if (!fZ) goto L_0048ac73;
L_0048ac6a:; BB(0x0048ac6a);
    /* 0048ac6a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac6c: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ac6e: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48ac73u); f_00489624();
L_0048ac73:; BB(0x0048ac73);
    /* 0048ac73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ac74: ret  */ FN_RET(0x0048ac48); r_esp += 4; return;
}

void f_0048ac78(void) /* sub_48AC78 */
{
    FN_ENTER(0x0048ac78);
    /* 0048ac78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ac79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048ac7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ac7d: call 0x489c90 */ r_esp -= 4; W32(r_esp, 0x48ac82u); f_00489c90();
    /* 0048ac82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ac84: call 0x489e3c */ r_esp -= 4; W32(r_esp, 0x48ac89u); f_00489e3c();
    /* 0048ac89: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ac8b: call 0x489f44 */ r_esp -= 4; W32(r_esp, 0x48ac90u); f_00489f44();
    /* 0048ac90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ac92: call 0x48a13c */ r_esp -= 4; W32(r_esp, 0x48ac97u); f_0048a13c();
    /* 0048ac97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ac99: call 0x48a280 */ r_esp -= 4; W32(r_esp, 0x48ac9eu); f_0048a280();
    /* 0048ac9e: mov eax, dword ptr [ebx + 0x414] */ r_eax = R32((u32)(r_ebx+0x414u));
    /* 0048aca4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048aca6: je 0x48acb1 */ if (fZ) goto L_0048acb1;
L_0048aca8:; BB(0x0048aca8);
    /* 0048aca8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048acaa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048acac: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48acb1u); f_00489624();
L_0048acb1:; BB(0x0048acb1);
    /* 0048acb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048acb2: ret  */ FN_RET(0x0048ac78); r_esp += 4; return;
}

void f_0048acb4(void) /* sub_48ACB4 */
{
    FN_ENTER(0x0048acb4);
    /* 0048acb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048acb5: mov esi, ecx */ r_esi = r_ecx;
    /* 0048acb7: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0048acbd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048acc0: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0048acc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048acc8: jl 0x48accc */ if ((fS!=fO)) goto L_0048accc;
L_0048acca:; BB(0x0048acca);
    /* 0048acca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048accb: ret  */ FN_RET(0x0048acb4); r_esp += 4; return;
L_0048accc:; BB(0x0048accc);
    /* 0048accc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048acce: mov ecx, esi */ r_ecx = r_esi;
    /* 0048acd0: call 0x48a3d4 */ r_esp -= 4; W32(r_esp, 0x48acd5u); f_0048a3d4();
    /* 0048acd5: mov eax, dword ptr [esi + 0x414] */ r_eax = R32((u32)(r_esi+0x414u));
    /* 0048acdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048acdd: je 0x48acea */ if (fZ) goto L_0048acea;
L_0048acdf:; BB(0x0048acdf);
    /* 0048acdf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ace1: mov ecx, esi */ r_ecx = r_esi;
    /* 0048ace3: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48ace8u); f_00489624();
    /* 0048ace8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048ace9: ret  */ FN_RET(0x0048acb4); r_esp += 4; return;
L_0048acea:; BB(0x0048acea);
    /* 0048acea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048acec: mov ecx, esi */ r_ecx = r_esi;
    /* 0048acee: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48acf3u); f_00489624();
    /* 0048acf3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048acf4: ret  */ FN_RET(0x0048acb4); r_esp += 4; return;
}

void f_0048acf8(void) /* sub_48ACF8 */
{
    FN_ENTER(0x0048acf8);
    /* 0048acf8: movzx eax, byte ptr [0xa46dd0] */ r_eax = (u32)R8((u32)(0xa46dd0u));
    /* 0048acff: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048ad01: jne 0x48ad17 */ if (!fZ) goto L_0048ad17;
L_0048ad03:; BB(0x0048ad03);
    /* 0048ad03: mov dword ptr [0xa46dd4], 0x3d088889 */ W32((u32)(0xa46dd4u), 0x3d088889u);
    /* 0048ad0d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048ad12: mov byte ptr [0xa46dd0], al */ W8((u32)(0xa46dd0u), (u8)r_eax);
L_0048ad17:; BB(0x0048ad17);
    /* 0048ad17: fld dword ptr [0xa46dd4] */ FPUSH(R_F32((u32)(0xa46dd4u)));
    /* 0048ad1d: fadd dword ptr [ecx + 0x408] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x408u));
    /* 0048ad23: fld dword ptr [0x901328] */ FPUSH(R_F32((u32)(0x901328u)));
    /* 0048ad29: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048ad2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048ad2d: mov edx, dword ptr [ecx + 0x3d4] */ r_edx = R32((u32)(r_ecx+0x3d4u));
    /* 0048ad33: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048ad36: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048ad37: mov dword ptr [ecx + 0x3d4], edx */ W32((u32)(r_ecx+0x3d4u), r_edx);
    /* 0048ad3d: ja 0x48ad41 */ if ((!fC&&!fZ)) goto L_0048ad41;
L_0048ad3f:; BB(0x0048ad3f);
    /* 0048ad3f: fst st(1) */ ST(1) = ST(0);
L_0048ad41:; BB(0x0048ad41);
    /* 0048ad41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048ad43: cmp edx, dword ptr [ecx + 0x3c8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048ad49: fstp dword ptr [ecx + 0x408] */ W_F32((u32)(r_ecx+0x408u), ST(0)); FPOP();
    /* 0048ad4f: jl 0x48ad58 */ if ((fS!=fO)) goto L_0048ad58;
L_0048ad51:; BB(0x0048ad51);
    /* 0048ad51: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ad53: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48ad58u); f_00489624();
L_0048ad58:; BB(0x0048ad58);
    /* 0048ad58: ret  */ FN_RET(0x0048acf8); r_esp += 4; return;
}

void f_0048ad5c(void)
{
    FN_ENTER(0x0048ad5c);
    /* 0048ad5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ad5d: mov edi, ecx */ r_edi = r_ecx;
    /* 0048ad5f: movzx eax, byte ptr [0xa46dd8] */ r_eax = (u32)R8((u32)(0xa46dd8u));
    /* 0048ad66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048ad68: jne 0x48ad7e */ if (!fZ) goto L_0048ad7e;
L_0048ad6a:; BB(0x0048ad6a);
    /* 0048ad6a: mov dword ptr [0xa46ddc], 0xbd088889 */ W32((u32)(0xa46ddcu), 0xbd088889u);
    /* 0048ad74: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048ad79: mov byte ptr [0xa46dd8], al */ W8((u32)(0xa46dd8u), (u8)r_eax);
L_0048ad7e:; BB(0x0048ad7e);
    /* 0048ad7e: fld dword ptr [0xa46ddc] */ FPUSH(R_F32((u32)(0xa46ddcu)));
    /* 0048ad84: fadd dword ptr [edi + 0x408] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x408u));
    /* 0048ad8a: fld dword ptr [0x901320] */ FPUSH(R_F32((u32)(0x901320u)));
    /* 0048ad90: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048ad92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048ad94: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 0048ad9a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048ad9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048ad9e: mov dword ptr [edi + 0x3d4], edx */ W32((u32)(r_edi+0x3d4u), r_edx);
    /* 0048ada4: jb 0x48ada8 */ if (fC) goto L_0048ada8;
L_0048ada6:; BB(0x0048ada6);
    /* 0048ada6: fst st(1) */ ST(1) = ST(0);
L_0048ada8:; BB(0x0048ada8);
    /* 0048ada8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048adaa: fstp dword ptr [edi + 0x408] */ W_F32((u32)(r_edi+0x408u), ST(0)); FPOP();
    /* 0048adb0: cmp edx, 0x5a */ {  u32 a = r_edx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048adb3: jl 0x48adda */ if ((fS!=fO)) goto L_0048adda;
L_0048adb5:; BB(0x0048adb5);
    /* 0048adb5: mov ecx, edi */ r_ecx = r_edi;
    /* 0048adb7: call 0x489ec8 */ r_esp -= 4; W32(r_esp, 0x48adbcu); f_00489ec8();
    /* 0048adbc: mov eax, dword ptr [edi + 0x414] */ r_eax = R32((u32)(r_edi+0x414u));
    /* 0048adc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048adc4: je 0x48add1 */ if (fZ) goto L_0048add1;
L_0048adc6:; BB(0x0048adc6);
    /* 0048adc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048adc8: mov ecx, edi */ r_ecx = r_edi;
    /* 0048adca: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48adcfu); f_00489624();
    /* 0048adcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048add0: ret  */ FN_RET(0x0048ad5c); r_esp += 4; return;
L_0048add1:; BB(0x0048add1);
    /* 0048add1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048add3: mov ecx, edi */ r_ecx = r_edi;
    /* 0048add5: call 0x489624 */ r_esp -= 4; W32(r_esp, 0x48addau); f_00489624();
L_0048adda:; BB(0x0048adda);
    /* 0048adda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048addb: ret  */ FN_RET(0x0048ad5c); r_esp += 4; return;
}

void f_0048addc(void)
{
    FN_ENTER(0x0048addc);
    /* 0048addc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048addd: mov edi, ecx */ r_edi = r_ecx;
    /* 0048addf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ade1: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0048ade7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ade8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ade9: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0048adec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048aded: push 0x5a4 */ { u32 v = 0x5a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048adf2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48adf7u); f_00814298();
    /* 0048adf7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048adfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048adfc: mov ecx, edi */ r_ecx = r_edi;
    /* 0048adfe: call 0x48a3d4 */ r_esp -= 4; W32(r_esp, 0x48ae03u); f_0048a3d4();
    /* 0048ae03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048ae04: ret  */ FN_RET(0x0048addc); r_esp += 4; return;
}

void f_0048ae08(void) /* sub_48AE08 */
{
    FN_ENTER(0x0048ae08);
    /* 0048ae08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ae0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae0b: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0048ae11: call 0x48a370 */ r_esp -= 4; W32(r_esp, 0x48ae16u); f_0048a370();
    /* 0048ae16: ret  */ FN_RET(0x0048ae08); r_esp += 4; return;
}

void f_0048ae18(void) /* sub_48AE18 */
{
    FN_ENTER(0x0048ae18);
    /* 0048ae18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae19: mov edi, ecx */ r_edi = r_ecx;
    /* 0048ae1b: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 0048ae21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ae23: mov dword ptr [edi + 0x3d4], 0x25 */ W32((u32)(r_edi+0x3d4u), 0x25u);
    /* 0048ae2d: jne 0x48ae36 */ if (!fZ) goto L_0048ae36;
L_0048ae2f:; BB(0x0048ae2f);
    /* 0048ae2f: mov ecx, edi */ r_ecx = r_edi;
    /* 0048ae31: call 0x489ee8 */ r_esp -= 4; W32(r_esp, 0x48ae36u); f_00489ee8();
L_0048ae36:; BB(0x0048ae36);
    /* 0048ae36: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae38: mov ecx, edi */ r_ecx = r_edi;
    /* 0048ae3a: call 0x48a370 */ r_esp -= 4; W32(r_esp, 0x48ae3fu); f_0048a370();
    /* 0048ae3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048ae40: ret  */ FN_RET(0x0048ae18); r_esp += 4; return;
}

void f_0048ae44(void) /* sub_48AE44 */
{
    FN_ENTER(0x0048ae44);
    /* 0048ae44: mov dword ptr [ecx + 0x3d4], 0 */ W32((u32)(r_ecx+0x3d4u), 0x0u);
    /* 0048ae4e: ret  */ FN_RET(0x0048ae44); r_esp += 4; return;
}

void f_0048ae50(void) /* sub_48AE50 */
{
    FN_ENTER(0x0048ae50);
    /* 0048ae50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048ae53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ae55: call 0x48ae74 */ r_esp -= 4; W32(r_esp, 0x48ae5au); f_0048ae74();
    /* 0048ae5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048ae5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ae60: jne 0x48ae66 */ if (!fZ) goto L_0048ae66;
L_0048ae62:; BB(0x0048ae62);
    /* 0048ae62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ae63: ret 4 */ FN_RET(0x0048ae50); r_esp += 8; return;
L_0048ae66:; BB(0x0048ae66);
    /* 0048ae66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x48ae6cu); f_005c2f74();
    /* 0048ae6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ae6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ae6e: ret 4 */ FN_RET(0x0048ae50); r_esp += 8; return;
}

void f_0048ae74(void) /* sub_48AE74 */
{
    FN_ENTER(0x0048ae74);
    /* 0048ae74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae75: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ae77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae79: push 0x8cfe20 */ { u32 v = 0x8cfe20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048ae84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ae85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048ae8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ae8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048ae92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048ae95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048ae98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048ae9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048ae9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048aea5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048aea8: mov eax, dword ptr [ecx + 0x3b8] */ r_eax = R32((u32)(r_ecx+0x3b8u));
    /* 0048aeae: mov dword ptr [ecx], 0xaf8e20 */ W32((u32)(r_ecx), 0xaf8e20u);
    /* 0048aeb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048aeb6: je 0x48aecc */ if (fZ) goto L_0048aecc;
L_0048aeb8:; BB(0x0048aeb8);
    /* 0048aeb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048aeb9: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48aebeu); f_005cdcc0();
    /* 0048aebe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048aebf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048aec2: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
L_0048aecc:; BB(0x0048aecc);
    /* 0048aecc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x48aed1u); f_007b9c8c();
    /* 0048aed1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048aed8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048aedb: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x48aee0u); f_0078638c();
    /* 0048aee0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048aee3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048aeea: mov esp, ebp */ r_esp = r_ebp;
    /* 0048aeec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048aeed: ret  */ FN_RET(0x0048ae74); r_esp += 4; return;
}

void f_0048aef0(void) /* sub_48AEF0 */
{
    FN_ENTER(0x0048aef0);
    /* 0048aef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048aef1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048aef3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x48aef8u); f_004f7c84();
    /* 0048aef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048aefa: je 0x48aefe */ if (fZ) goto L_0048aefe;
L_0048aefc:; BB(0x0048aefc);
    /* 0048aefc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048aefd: ret  */ FN_RET(0x0048aef0); r_esp += 4; return;
L_0048aefe:; BB(0x0048aefe);
    /* 0048aefe: call 0x48e560 */ r_esp -= 4; W32(r_esp, 0x48af03u); f_0048e560();
    /* 0048af03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af05: jne 0x48af11 */ if (!fZ) goto L_0048af11;
L_0048af07:; BB(0x0048af07);
    /* 0048af07: mov dword ptr [ebp + 0x398], 4 */ W32((u32)(r_ebp+0x398u), 0x4u);
L_0048af11:; BB(0x0048af11);
    /* 0048af11: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x48af16u); f_00520db8();
    /* 0048af16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048af18: jne 0x48aff4 */ if (!fZ) goto L_0048aff4;
L_0048af1e:; BB(0x0048af1e);
    /* 0048af1e: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0048af21: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0048af24: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0048af27: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0048af2a: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 0048af2d: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 0048af30: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0048af36: mov eax, dword ptr [eax*4 + 0x901364] */ r_eax = R32((u32)(r_eax*4+0x901364u));
    /* 0048af3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af3f: je 0x48af45 */ if (fZ) goto L_0048af45;
L_0048af41:; BB(0x0048af41);
    /* 0048af41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048af43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48af45u); call_ind(t); }
L_0048af45:; BB(0x0048af45);
    /* 0048af45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048af47: call 0x4890e0 */ r_esp -= 4; W32(r_esp, 0x48af4cu); f_004890e0();
    /* 0048af4c: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 0048af52: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af55: je 0x48aff6 */ if (fZ) goto L_0048aff6;
L_0048af5b:; BB(0x0048af5b);
    /* 0048af5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af5d: je 0x48af8d */ if (fZ) goto L_0048af8d;
L_0048af5f:; BB(0x0048af5f);
    /* 0048af5f: mov eax, 0xff7f5126 */ r_eax = 0xff7f5126u;
    /* 0048af64: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048af67: jne 0x48af6e */ if (!fZ) goto L_0048af6e;
L_0048af69:; BB(0x0048af69);
    /* 0048af69: mov eax, 0xffffa24c */ r_eax = 0xffffa24cu;
L_0048af6e:; BB(0x0048af6e);
    /* 0048af6e: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0048af71: mov edx, 1 */ r_edx = 0x1u;
    /* 0048af76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048af77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048af78: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048af7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048af7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048af7f: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x48af84u); f_0080575c();
    /* 0048af84: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048af87: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
L_0048af8d:; BB(0x0048af8d);
    /* 0048af8d: fld dword ptr [0x901360] */ FPUSH(R_F32((u32)(0x901360u)));
    /* 0048af93: fadd dword ptr [ebp + 0x3b0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3b0u));
    /* 0048af99: fld dword ptr [0x9013f8] */ FPUSH(R_F32((u32)(0x9013f8u)));
    /* 0048af9f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048afa1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048afa3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048afa4: jb 0x48afa8 */ if (fC) goto L_0048afa8;
L_0048afa6:; BB(0x0048afa6);
    /* 0048afa6: fst st(1) */ ST(1) = ST(0);
L_0048afa8:; BB(0x0048afa8);
    /* 0048afa8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048afaa: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 0048afb0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048afb2: jne 0x48afc7 */ if (!fZ) goto L_0048afc7;
L_0048afb4:; BB(0x0048afb4);
    /* 0048afb4: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 0048afba: add eax, 0x1111 */ {  u32 a = r_eax; u32 b = 0x1111u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048afbf: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
    /* 0048afc5: jmp 0x48afdf */ goto L_0048afdf;
L_0048afc7:; BB(0x0048afc7);
    /* 0048afc7: jle 0x48afdf */ if ((fZ||fS!=fO)) goto L_0048afdf;
L_0048afc9:; BB(0x0048afc9);
    /* 0048afc9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048afcc: jg 0x48afdf */ if ((!fZ&&fS==fO)) goto L_0048afdf;
L_0048afce:; BB(0x0048afce);
    /* 0048afce: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 0048afd4: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048afd9: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
L_0048afdf:; BB(0x0048afdf);
    /* 0048afdf: mov eax, dword ptr [ebp + 0x3b8] */ r_eax = R32((u32)(r_ebp+0x3b8u));
    /* 0048afe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048afe7: je 0x48aff4 */ if (fZ) goto L_0048aff4;
L_0048afe9:; BB(0x0048afe9);
    /* 0048afe9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048afec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048afed: mov ecx, eax */ r_ecx = r_eax;
    /* 0048afef: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x48aff4u); f_00508db8();
L_0048aff4:; BB(0x0048aff4);
    /* 0048aff4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048aff5: ret  */ FN_RET(0x0048aef0); r_esp += 4; return;
L_0048aff6:; BB(0x0048aff6);
    /* 0048aff6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048aff8: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x48affdu); f_007b6880();
    /* 0048affd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048afff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048b000: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x48b005u); f_006946a8();
    /* 0048b005: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048b008: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 0048b00e: jmp 0x48af5b */ goto L_0048af5b;
}

