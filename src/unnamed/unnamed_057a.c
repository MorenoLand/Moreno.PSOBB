#include "protos.h"

void f_0057a094(void)
{
    FN_ENTER(0x0057a094);
    /* 0057a094: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x57a099u); f_0061cdb0();
    /* 0057a099: mov ecx, dword ptr [0xa74108] */ r_ecx = R32((u32)(0xa74108u));
    /* 0057a09f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057a0a1: je 0x57a0b6 */ if (fZ) goto L_0057a0b6;
L_0057a0a3:; BB(0x0057a0a3);
    /* 0057a0a3: je 0x57a0ac */ if (fZ) goto L_0057a0ac;
L_0057a0a5:; BB(0x0057a0a5);
    /* 0057a0a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0a7: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x57a0acu); f_004066a8();
L_0057a0ac:; BB(0x0057a0ac);
    /* 0057a0ac: mov dword ptr [0xa74108], 0 */ W32((u32)(0xa74108u), 0x0u);
L_0057a0b6:; BB(0x0057a0b6);
    /* 0057a0b6: ret  */ FN_RET(0x0057a094); r_esp += 4; return;
}

void f_0057a0b8(void)
{
    FN_ENTER(0x0057a0b8);
    /* 0057a0b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a0bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0bd: push 0x8d7864 */ { u32 v = 0x8d7864u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057a0c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057a0d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a0d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057a0d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057a0d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057a0dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057a0df: push 0x4e0 */ { u32 v = 0x4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0e4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0057a0eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57a0f0u); f_005caba4();
    /* 0057a0f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057a0f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057a0f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a0f6: je 0x57a12f */ if (fZ) goto L_0057a12f;
L_0057a0f8:; BB(0x0057a0f8);
    /* 0057a0f8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057a0ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057a106: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a109: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a10f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057a112: call 0x57a134 */ r_esp -= 4; W32(r_esp, 0x57a117u); f_0057a134();
    /* 0057a117: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057a11a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0057a121:; BB(0x0057a121);
    /* 0057a121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057a124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057a12b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a12d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a12e: ret  */ FN_RET(0x0057a0b8); r_esp += 4; return;
L_0057a12f:; BB(0x0057a12f);
    /* 0057a12f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057a131: jmp 0x57a121 */ goto L_0057a121;
}

void f_0057a134(void) /* sub_57A134 */
{
    FN_ENTER(0x0057a134);
    /* 0057a134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a135: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a139: push 0x8d78c8 */ { u32 v = 0x8d78c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a13e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057a144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a145: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057a14c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a14f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057a152: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0057a155: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0057a158: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0057a15b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0057a15e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a161: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0057a164: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057a167: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x57a16cu); f_005216f4();
    /* 0057a16c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057a173: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057a176: mov dword ptr [ecx], 0xb070c0 */ W32((u32)(r_ecx), 0xb070c0u);
    /* 0057a17c: add ecx, 0x3f4 */ {  u32 a = r_ecx; u32 b = 0x3f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a182: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x57a187u); f_005122f8();
    /* 0057a187: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057a18e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057a191: add ecx, 0x410 */ {  u32 a = r_ecx; u32 b = 0x410u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a197: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x57a19cu); f_00576a48();
    /* 0057a19c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057a1a3: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1a8: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1ad: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057a1b0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1b2: add eax, 0x42c */ {  u32 a = r_eax; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a1b7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1ba: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x57a1bfu); f_00858736();
    /* 0057a1bf: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0057a1c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057a1c9: mov eax, dword ptr [0x9beee8] */ r_eax = R32((u32)(0x9beee8u));
    /* 0057a1ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057a1d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1d2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0057a1d5: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x57a1dau); f_0051f750();
    /* 0057a1da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057a1dd: call 0x57a208 */ r_esp -= 4; W32(r_esp, 0x57a1e2u); f_0057a208();
    /* 0057a1e2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057a1e5: call 0x57c96c */ r_esp -= 4; W32(r_esp, 0x57a1eau); f_0057c96c();
    /* 0057a1ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057a1ed: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
    /* 0057a1f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057a1fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057a201: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a203: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a204: ret 8 */ FN_RET(0x0057a134); r_esp += 12; return;
}

void f_0057a208(void) /* sub_57A208 */
{
    FN_ENTER(0x0057a208);
    /* 0057a208: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 0057a20e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057a210: jle 0x57a289 */ if ((fZ||fS!=fO)) goto L_0057a289;
L_0057a212:; BB(0x0057a212);
    /* 0057a212: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
L_0057a21c:; BB(0x0057a21c);
    /* 0057a21c: fld dword ptr [0x9276a4] */ FPUSH(R_F32((u32)(0x9276a4u)));
    /* 0057a222: fadd dword ptr [ecx + 0x35c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x35cu));
    /* 0057a228: fld dword ptr [0x9276a0] */ FPUSH(R_F32((u32)(0x9276a0u)));
    /* 0057a22e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0057a230: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057a232: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 0057a238: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0057a23a: fld dword ptr [0x92769c] */ FPUSH(R_F32((u32)(0x92769cu)));
    /* 0057a240: fadd dword ptr [ecx + 0x360] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x360u));
    /* 0057a246: fld dword ptr [0x927698] */ FPUSH(R_F32((u32)(0x927698u)));
    /* 0057a24c: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 0057a252: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0057a254: fstp dword ptr [ecx + 0x3e8] */ W_F32((u32)(r_ecx+0x3e8u), ST(0)); FPOP();
    /* 0057a25a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0057a25c: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0057a25e: fstp dword ptr [ecx + 0x3ec] */ W_F32((u32)(r_ecx+0x3ecu), ST(0)); FPOP();
    /* 0057a264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057a265: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0057a267: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057a269: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0057a26b: jb 0x57a26f */ if (fC) goto L_0057a26f;
L_0057a26d:; BB(0x0057a26d);
    /* 0057a26d: fst st(3) */ ST(3) = ST(0);
L_0057a26f:; BB(0x0057a26f);
    /* 0057a26f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057a271: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0057a273: fstp dword ptr [ecx + 0x3e0] */ W_F32((u32)(r_ecx+0x3e0u), ST(0)); FPOP();
    /* 0057a279: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057a27a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057a27c: ja 0x57a280 */ if ((!fC&&!fZ)) goto L_0057a280;
L_0057a27e:; BB(0x0057a27e);
    /* 0057a27e: fst st(1) */ ST(1) = ST(0);
L_0057a280:; BB(0x0057a280);
    /* 0057a280: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057a282: fstp dword ptr [ecx + 0x3e4] */ W_F32((u32)(r_ecx+0x3e4u), ST(0)); FPOP();
    /* 0057a288: ret  */ FN_RET(0x0057a208); r_esp += 4; return;
L_0057a289:; BB(0x0057a289);
    /* 0057a289: mov dword ptr [ecx + 0x3f0], 1 */ W32((u32)(r_ecx+0x3f0u), 0x1u);
    /* 0057a293: jmp 0x57a21c */ goto L_0057a21c;
}

void f_0057a298(void) /* sub_57A298 */
{
    FN_ENTER(0x0057a298);
    /* 0057a298: mov eax, dword ptr [0xa74108] */ r_eax = R32((u32)(0xa74108u));
    /* 0057a29d: ret  */ FN_RET(0x0057a298); r_esp += 4; return;
}

void f_0057a2a0(void) /* sub_57A2A0 */
{
    FN_ENTER(0x0057a2a0);
    /* 0057a2a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2a1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a2a4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057a2a6: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x57a2abu); f_004f7c84();
    /* 0057a2ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a2ad: je 0x57a2be */ if (fZ) goto L_0057a2be;
L_0057a2af:; BB(0x0057a2af);
    /* 0057a2af: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057a2b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a2b3: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x57a2b9u); call_ind(t); }
    /* 0057a2b9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a2bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a2bd: ret  */ FN_RET(0x0057a2a0); r_esp += 4; return;
L_0057a2be:; BB(0x0057a2be);
    /* 0057a2be: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057a2c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a2c2: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x57a2c8u); call_ind(t); }
    /* 0057a2c8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a2cb: je 0x57a358 */ if (fZ) goto L_0057a358;
L_0057a2d1:; BB(0x0057a2d1);
    /* 0057a2d1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057a2d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a2d5: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x57a2dbu); call_ind(t); }
    /* 0057a2db: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0057a2e0: cmp eax, dword ptr [0xa74128] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa74128u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a2e6: je 0x57a30c */ if (fZ) goto L_0057a30c;
L_0057a2e8:; BB(0x0057a2e8);
    /* 0057a2e8: mov dword ptr [0xa74128], eax */ W32((u32)(0xa74128u), r_eax);
    /* 0057a2ed: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2ef: movsx eax, word ptr [ebx + 0x3dc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3dcu));
    /* 0057a2f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2f9: push dword ptr [0xa7412c] */ { u32 v = R32((u32)(0xa7412cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a2ff: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x57a304u); f_0081a2b0();
    /* 0057a304: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a307: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
L_0057a30c:; BB(0x0057a30c);
    /* 0057a30c: cmp eax, dword ptr [0xa74120] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa74120u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a312: je 0x57a358 */ if (fZ) goto L_0057a358;
L_0057a314:; BB(0x0057a314);
    /* 0057a314: fild dword ptr [ebx + 0x3dc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x3dcu)));
    /* 0057a31a: fdiv dword ptr [0x927694] */ ST(0) = ST(0) / R_F32((u32)(0x927694u));
    /* 0057a320: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057a322: mov dword ptr [0xa74120], eax */ W32((u32)(0xa74120u), r_eax);
    /* 0057a327: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0057a32a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0057a32e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057a333: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057a337: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0057a33b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057a33f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0057a342: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0057a347: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a349: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a34a: push dword ptr [0xa74124] */ { u32 v = R32((u32)(0xa74124u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a350: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x57a355u); f_0081a2b0();
    /* 0057a355: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057a358:; BB(0x0057a358);
    /* 0057a358: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a35a: call 0x57a37c */ r_esp -= 4; W32(r_esp, 0x57a35fu); f_0057a37c();
    /* 0057a35f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a361: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x57a366u); f_006401f0();
    /* 0057a366: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057a368: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a36a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x57a370u); call_ind(t); }
    /* 0057a370: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a372: call 0x57a3a8 */ r_esp -= 4; W32(r_esp, 0x57a377u); f_0057a3a8();
    /* 0057a377: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a37a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a37b: ret  */ FN_RET(0x0057a2a0); r_esp += 4; return;
}

void f_0057a37c(void) /* sub_57A37C */
{
    FN_ENTER(0x0057a37c);
    /* 0057a37c: fld dword ptr [0x927690] */ FPUSH(R_F32((u32)(0x927690u)));
    /* 0057a382: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0057a385: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0057a388: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0057a38b: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0057a391: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0057a394: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0057a39a: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0057a3a0: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0057a3a3: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0057a3a6: ret  */ FN_RET(0x0057a37c); r_esp += 4; return;
}

void f_0057a3a8(void) /* sub_57A3A8 */
{
    FN_ENTER(0x0057a3a8);
    /* 0057a3a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a3a9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a3ac: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057a3ae: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 0057a3b4: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0057a3b9: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057a3bb: mov eax, ecx */ r_eax = r_ecx;
    /* 0057a3bd: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0057a3c0: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0057a3c2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057a3c4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0057a3c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a3c9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a3cb: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a3cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a3cf: je 0x57a3d9 */ if (fZ) goto L_0057a3d9;
L_0057a3d1:; BB(0x0057a3d1);
    /* 0057a3d1: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 0057a3d7: jmp 0x57a43c */ goto L_0057a43c;
L_0057a3d9:; BB(0x0057a3d9);
    /* 0057a3d9: fld dword ptr [0x92768c] */ FPUSH(R_F32((u32)(0x92768cu)));
    /* 0057a3df: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0057a3e2: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0057a3e5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057a3e8: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0057a3eb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0057a3ef: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0057a3f3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0057a3f7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057a3fb: lea eax, [ebx + 0x128] */ r_eax = (u32)(r_ebx+0x128u);
    /* 0057a401: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0057a404: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a40a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a40b: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x57a410u); f_007806dc();
    /* 0057a410: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a415: je 0x57a450 */ if (fZ) goto L_0057a450;
L_0057a417:; BB(0x0057a417);
    /* 0057a417: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057a419: mov dword ptr [ebx + 0x3cc], edx */ W32((u32)(r_ebx+0x3ccu), r_edx);
    /* 0057a41f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0057a422: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057a424: mov dword ptr [ebx + 0x3d0], ecx */ W32((u32)(r_ebx+0x3d0u), r_ecx);
    /* 0057a42a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057a42d: mov dword ptr [ebx + 0x3d4], ecx */ W32((u32)(r_ebx+0x3d4u), r_ecx);
    /* 0057a433: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0057a436: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
L_0057a43c:; BB(0x0057a43c);
    /* 0057a43c: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a442: je 0x57a44b */ if (fZ) goto L_0057a44b;
L_0057a444:; BB(0x0057a444);
    /* 0057a444: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_0057a44b:; BB(0x0057a44b);
    /* 0057a44b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a44e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a44f: ret  */ FN_RET(0x0057a3a8); r_esp += 4; return;
L_0057a450:; BB(0x0057a450);
    /* 0057a450: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0057a453: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0057a456: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0057a45c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0057a45f: mov dword ptr [ebx + 0x3d4], edx */ W32((u32)(r_ebx+0x3d4u), r_edx);
    /* 0057a465: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 0057a46b: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
    /* 0057a471: jmp 0x57a43c */ goto L_0057a43c;
}

void f_0057a474(void) /* sub_57A474 */
{
    FN_ENTER(0x0057a474);
    /* 0057a474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a475: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a476: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a479: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057a47b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x57a480u); f_004f7c84();
    /* 0057a480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a482: je 0x57a495 */ if (fZ) goto L_0057a495;
L_0057a484:; BB(0x0057a484);
    /* 0057a484: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057a487: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a489: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x57a48fu); call_ind(t); }
    /* 0057a48f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a492: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a494: ret  */ FN_RET(0x0057a474); r_esp += 4; return;
L_0057a495:; BB(0x0057a495);
    /* 0057a495: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057a49b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057a49d: jne 0x57a591 */ if (!fZ) goto L_0057a591;
L_0057a4a3:; BB(0x0057a4a3);
    /* 0057a4a3: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x57a4a8u); f_00694cc8();
    /* 0057a4a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a4aa: je 0x57a4d0 */ if (fZ) goto L_0057a4d0;
L_0057a4ac:; BB(0x0057a4ac);
    /* 0057a4ac: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a4b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a4b3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057a4b6: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a4bc: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a4c2: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x57a4c5u); call_ind(t); }
    /* 0057a4c5: mov ebx, eax */ r_ebx = r_eax;
    /* 0057a4c7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a4c9: jne 0x57a4ef */ if (!fZ) goto L_0057a4ef;
L_0057a4cb:; BB(0x0057a4cb);
    /* 0057a4cb: jmp 0x57a591 */ goto L_0057a591;
L_0057a4d0:; BB(0x0057a4d0);
    /* 0057a4d0: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a4d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a4d7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057a4da: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a4df: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x57a4e2u); call_ind(t); }
    /* 0057a4e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a4e4: je 0x57a591 */ if (fZ) goto L_0057a591;
L_0057a4ea:; BB(0x0057a4ea);
    /* 0057a4ea: mov ebx, 1 */ r_ebx = 0x1u;
L_0057a4ef:; BB(0x0057a4ef);
    /* 0057a4ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a4f1: call 0x57a598 */ r_esp -= 4; W32(r_esp, 0x57a4f6u); f_0057a598();
    /* 0057a4f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a4f8: je 0x57a500 */ if (fZ) goto L_0057a500;
L_0057a4fa:; BB(0x0057a4fa);
    /* 0057a4fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a4fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a4fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a4ff: ret  */ FN_RET(0x0057a474); r_esp += 4; return;
L_0057a500:; BB(0x0057a500);
    /* 0057a500: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a502: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x57a507u); f_008173d0();
    /* 0057a507: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a508: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a50a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a50c: call 0x57a6b4 */ r_esp -= 4; W32(r_esp, 0x57a511u); f_0057a6b4();
    /* 0057a511: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0057a518: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a51b: je 0x57a54e */ if (fZ) goto L_0057a54e;
L_0057a51d:; BB(0x0057a51d);
    /* 0057a51d: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0057a523: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a528: jne 0x57a54e */ if (!fZ) goto L_0057a54e;
L_0057a52a:; BB(0x0057a52a);
    /* 0057a52a: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 0057a531: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057a534: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a536: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0057a53e: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 0057a546: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a549: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x57a54eu); f_00520cf8();
L_0057a54e:; BB(0x0057a54e);
    /* 0057a54e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a550: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x57a555u); f_00520608();
    /* 0057a555: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0057a55a: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0057a55f: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x57a564u); f_00520d08();
    /* 0057a564: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0057a56a: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057a570: and edx, 0xfffff7ef */ {  u32 a = r_edx; u32 b = 0xfffff7efu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057a576: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057a578: je 0x57a587 */ if (fZ) goto L_0057a587;
L_0057a57a:; BB(0x0057a57a);
    /* 0057a57a: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0057a580: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a582: call 0x57a604 */ r_esp -= 4; W32(r_esp, 0x57a587u); f_0057a604();
L_0057a587:; BB(0x0057a587);
    /* 0057a587: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0057a58c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0057a591:; BB(0x0057a591);
    /* 0057a591: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a594: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a596: ret  */ FN_RET(0x0057a474); r_esp += 4; return;
}

void f_0057a598(void) /* sub_57A598 */
{
    FN_ENTER(0x0057a598);
    /* 0057a598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a599: mov edi, ecx */ r_edi = r_ecx;
    /* 0057a59b: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0057a5a0: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057a5a2: je 0x57a600 */ if (fZ) goto L_0057a600;
L_0057a5a4:; BB(0x0057a5a4);
    /* 0057a5a4: lea eax, [edi + 0x3d0] */ r_eax = (u32)(r_edi+0x3d0u);
    /* 0057a5aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5ab: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x57a5b0u); f_00505a3c();
    /* 0057a5b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057a5b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057a5b3: je 0x57a5f9 */ if (fZ) goto L_0057a5f9;
L_0057a5b5:; BB(0x0057a5b5);
    /* 0057a5b5: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0057a5b8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x57a5bdu); f_00829cc8();
    /* 0057a5bd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57a5c2u); f_0082d7b0();
    /* 0057a5c2: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0057a5c5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x57a5cau); f_0082d838();
    /* 0057a5ca: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057a5cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a5cf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57a5d4u); f_0082d8bc();
    /* 0057a5d4: mov ecx, edi */ r_ecx = r_edi;
    /* 0057a5d6: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x57a5dbu); f_007aa668();
    /* 0057a5db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57a5e0u); f_0082da80();
    /* 0057a5e0: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0057a5e6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057a5e8: je 0x57a5f1 */ if (fZ) goto L_0057a5f1;
L_0057a5ea:; BB(0x0057a5ea);
    /* 0057a5ea: mov ecx, edi */ r_ecx = r_edi;
    /* 0057a5ec: call 0x57a604 */ r_esp -= 4; W32(r_esp, 0x57a5f1u); f_0057a604();
L_0057a5f1:; BB(0x0057a5f1);
    /* 0057a5f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5f3: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x57a5f8u); f_00505bf8();
    /* 0057a5f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0057a5f9:; BB(0x0057a5f9);
    /* 0057a5f9: mov eax, 1 */ r_eax = 0x1u;
    /* 0057a5fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a5ff: ret  */ FN_RET(0x0057a598); r_esp += 4; return;
L_0057a600:; BB(0x0057a600);
    /* 0057a600: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057a602: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a603: ret  */ FN_RET(0x0057a598); r_esp += 4; return;
}

void f_0057a604(void) /* sub_57A604 */
{
    FN_ENTER(0x0057a604);
    /* 0057a604: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a605: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a606: mov edi, ecx */ r_edi = r_ecx;
    /* 0057a608: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0057a60d: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057a612: jne 0x57a617 */ if (!fZ) goto L_0057a617;
L_0057a614:; BB(0x0057a614);
    /* 0057a614: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a615: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a616: ret  */ FN_RET(0x0057a604); r_esp += 4; return;
L_0057a617:; BB(0x0057a617);
    /* 0057a617: mov eax, dword ptr [0xa74108] */ r_eax = R32((u32)(0xa74108u));
    /* 0057a61c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0057a622: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0057a625: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x57a62au); f_00829cc8();
    /* 0057a62a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57a62fu); f_0082d7b0();
    /* 0057a62f: lea ecx, [edi + 0x4a0] */ r_ecx = (u32)(r_edi+0x4a0u);
    /* 0057a635: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x57a63au); f_0082d838();
    /* 0057a63a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057a63d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a63f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57a644u); f_0082d8bc();
    /* 0057a644: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0057a64a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057a64c: je 0x57a692 */ if (fZ) goto L_0057a692;
L_0057a64e:; BB(0x0057a64e);
    /* 0057a64e: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0057a654: lea ebx, [edi + 0x410] */ r_ebx = (u32)(r_edi+0x410u);
    /* 0057a65a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a65c: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x57a65fu); call_ind(t); }
    /* 0057a65f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a661: je 0x57a6a9 */ if (fZ) goto L_0057a6a9;
L_0057a663:; BB(0x0057a663);
    /* 0057a663: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0057a669: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a66b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x57a66eu); call_ind(t); }
    /* 0057a66e: mov eax, dword ptr [0xa74108] */ r_eax = R32((u32)(0xa74108u));
    /* 0057a673: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0057a679: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0057a67c: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a67f: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x57a684u); f_0082e6b0();
    /* 0057a684: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057a685: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0057a68b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a68d: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x57a690u); call_ind(t); }
    /* 0057a690: jmp 0x57a6a9 */ goto L_0057a6a9;
L_0057a692:; BB(0x0057a692);
    /* 0057a692: mov eax, dword ptr [0xa74108] */ r_eax = R32((u32)(0xa74108u));
    /* 0057a697: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0057a69d: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0057a6a0: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057a6a3: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x57a6a8u); f_0082e6b0();
    /* 0057a6a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0057a6a9:; BB(0x0057a6a9);
    /* 0057a6a9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57a6aeu); f_0082da80();
    /* 0057a6ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a6af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a6b0: ret  */ FN_RET(0x0057a604); r_esp += 4; return;
}

void f_0057a6b4(void) /* sub_57A6B4 */
{
    FN_ENTER(0x0057a6b4);
    /* 0057a6b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6b8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057a6ba: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0057a6be: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0057a6c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057a6c3: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0057a6c6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057a6c8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057a6ca: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0057a6cc: lea esi, [ebx + edi + 0x42c] */ r_esi = (u32)(r_ebx+r_edi+0x42cu);
    /* 0057a6d3: mov ecx, esi */ r_ecx = r_esi;
    /* 0057a6d5: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x57a6dau); f_005771a4();
    /* 0057a6da: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0057a6e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a6e1: mov ecx, esi */ r_ecx = r_esi;
    /* 0057a6e3: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x57a6e8u); f_0057725c();
    /* 0057a6e8: mov ebp, eax */ r_ebp = r_eax;
    /* 0057a6ea: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0057a6ed: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x57a6f2u); f_00829cc8();
    /* 0057a6f2: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x57a6f7u); f_00578b38();
    /* 0057a6f7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57a6fcu); f_0082d7b0();
    /* 0057a6fc: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0057a6ff: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x57a704u); f_0082d838();
    /* 0057a704: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0057a707: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a709: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57a70eu); f_0082d8bc();
    /* 0057a70e: mov dword ptr [0xa74134], 0 */ W32((u32)(0xa74134u), 0x0u);
    /* 0057a718: lea edx, [ebx + 0x4a0] */ r_edx = (u32)(r_ebx+0x4a0u);
    /* 0057a71e: mov ecx, 0x579f3c */ r_ecx = 0x579f3cu;
    /* 0057a723: mov dword ptr [0xa74130], edx */ W32((u32)(0xa74130u), r_edx);
    /* 0057a729: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x57a72eu); f_0082fac4();
    /* 0057a72e: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0057a734: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057a737: jne 0x57a788 */ if (!fZ) goto L_0057a788;
L_0057a739:; BB(0x0057a739);
    /* 0057a739: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a73b: je 0x57a76a */ if (fZ) goto L_0057a76a;
L_0057a73d:; BB(0x0057a73d);
    /* 0057a73d: mov eax, dword ptr [edi + ebx + 0x42c] */ r_eax = R32((u32)(r_edi+r_ebx+0x42cu));
    /* 0057a744: mov ecx, esi */ r_ecx = r_esi;
    /* 0057a746: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x57a749u); call_ind(t); }
    /* 0057a749: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0057a74e: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a753: je 0x57a75c */ if (fZ) goto L_0057a75c;
L_0057a755:; BB(0x0057a755);
    /* 0057a755: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a757: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x57a75cu); f_007aa668();
L_0057a75c:; BB(0x0057a75c);
    /* 0057a75c: mov eax, dword ptr [edi + ebx + 0x42c] */ r_eax = R32((u32)(r_edi+r_ebx+0x42cu));
    /* 0057a763: mov ecx, esi */ r_ecx = r_esi;
    /* 0057a765: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x57a768u); call_ind(t); }
    /* 0057a768: jmp 0x57a7c6 */ goto L_0057a7c6;
L_0057a76a:; BB(0x0057a76a);
    /* 0057a76a: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0057a76f: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a774: jne 0x57a7c6 */ if (!fZ) goto L_0057a7c6;
L_0057a776:; BB(0x0057a776);
    /* 0057a776: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0057a77a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a77d: je 0x57a7e5 */ if (fZ) goto L_0057a7e5;
L_0057a77f:; BB(0x0057a77f);
    /* 0057a77f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a781: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x57a786u); f_007aa7b8();
    /* 0057a786: jmp 0x57a7c6 */ goto L_0057a7c6;
L_0057a788:; BB(0x0057a788);
    /* 0057a788: mov eax, dword ptr [ebx + 0x3f4] */ r_eax = R32((u32)(r_ebx+0x3f4u));
    /* 0057a78e: lea ebp, [ebx + 0x3f4] */ r_ebp = (u32)(r_ebx+0x3f4u);
    /* 0057a794: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a796: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x57a799u); call_ind(t); }
    /* 0057a799: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a79b: je 0x57a7c6 */ if (fZ) goto L_0057a7c6;
L_0057a79d:; BB(0x0057a79d);
    /* 0057a79d: mov eax, dword ptr [ebx + 0x3f4] */ r_eax = R32((u32)(r_ebx+0x3f4u));
    /* 0057a7a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a7a5: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x57a7a8u); call_ind(t); }
    /* 0057a7a8: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0057a7ad: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a7b2: je 0x57a7bb */ if (fZ) goto L_0057a7bb;
L_0057a7b4:; BB(0x0057a7b4);
    /* 0057a7b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a7b6: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x57a7bbu); f_007aa668();
L_0057a7bb:; BB(0x0057a7bb);
    /* 0057a7bb: mov eax, dword ptr [ebx + 0x3f4] */ r_eax = R32((u32)(r_ebx+0x3f4u));
    /* 0057a7c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057a7c3: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x57a7c6u); call_ind(t); }
L_0057a7c6:; BB(0x0057a7c6);
    /* 0057a7c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a7c8: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x57a7cdu); f_0082fac4();
    /* 0057a7cd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57a7d2u); f_0082da80();
    /* 0057a7d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a7d4: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x57a7d9u); f_00520610();
    /* 0057a7d9: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x57a7deu); f_0082dab0();
    /* 0057a7de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057a7df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a7e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057a7e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a7e2: ret 8 */ FN_RET(0x0057a6b4); r_esp += 12; return;
L_0057a7e5:; BB(0x0057a7e5);
    /* 0057a7e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057a7e7: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x57a7ecu); f_007aa668();
    /* 0057a7ec: jmp 0x57a7c6 */ goto L_0057a7c6;
}

void f_0057a7f0(void) /* sub_57A7F0 */
{
    FN_ENTER(0x0057a7f0);
    /* 0057a7f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a7f1: mov edi, ecx */ r_edi = r_ecx;
    /* 0057a7f3: mov ecx, edi */ r_ecx = r_edi;
    /* 0057a7f5: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x57a7fau); f_0051f814();
    /* 0057a7fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057a7fc: je 0x57a805 */ if (fZ) goto L_0057a805;
L_0057a7fe:; BB(0x0057a7fe);
    /* 0057a7fe: mov ecx, edi */ r_ecx = r_edi;
    /* 0057a800: call 0x57a208 */ r_esp -= 4; W32(r_esp, 0x57a805u); f_0057a208();
L_0057a805:; BB(0x0057a805);
    /* 0057a805: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a806: ret  */ FN_RET(0x0057a7f0); r_esp += 4; return;
}

void f_0057a808(void) /* sub_57A808 */
{
    FN_ENTER(0x0057a808);
    /* 0057a808: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a809: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057a80a: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a80d: mov edi, ecx */ r_edi = r_ecx;
    /* 0057a80f: mov ecx, edi */ r_ecx = r_edi;
    /* 0057a811: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x57a816u); f_0051f814();
    /* 0057a816: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a81b: mov ecx, edi */ r_ecx = r_edi;
    /* 0057a81d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057a81f: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a824: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x57a827u); call_ind(t); }
    /* 0057a827: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a829: je 0x57a95a */ if (fZ) goto L_0057a95a;
L_0057a82f:; BB(0x0057a82f);
    /* 0057a82f: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0057a836: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a839: je 0x57a861 */ if (fZ) goto L_0057a861;
L_0057a83b:; BB(0x0057a83b);
    /* 0057a83b: mov dword ptr [esp + 0xc], 0x40000000 */ W32((u32)(r_esp+0xcu), 0x40000000u);
    /* 0057a843: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0057a847: mov ecx, edi */ r_ecx = r_edi;
    /* 0057a849: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 0057a851: mov dword ptr [esp + 0x14], 0x40000000 */ W32((u32)(r_esp+0x14u), 0x40000000u);
    /* 0057a859: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a85c: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x57a861u); f_00520cf8();
L_0057a861:; BB(0x0057a861);
    /* 0057a861: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x57a866u); f_00578b38();
    /* 0057a866: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0057a869: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x57a86eu); f_00829cc8();
    /* 0057a86e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57a873u); f_0082d7b0();
    /* 0057a873: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0057a876: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x57a87bu); f_0082d838();
    /* 0057a87b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057a87e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a880: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57a885u); f_0082d8bc();
    /* 0057a885: fld dword ptr [edi + 0x35c] */ FPUSH(R_F32((u32)(r_edi+0x35cu)));
    /* 0057a88b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0057a88f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0057a894: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057a899: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0057a89d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0057a8a1: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057a8a5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0057a8a9: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0057a8ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0057a8af: jl 0x57a8bd */ if ((fS!=fO)) goto L_0057a8bd;
L_0057a8b1:; BB(0x0057a8b1);
    /* 0057a8b1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057a8b4: jl 0x57a8bf */ if ((fS!=fO)) goto L_0057a8bf;
L_0057a8b6:; BB(0x0057a8b6);
    /* 0057a8b6: mov eax, 4 */ r_eax = 0x4u;
    /* 0057a8bb: jmp 0x57a8bf */ goto L_0057a8bf;
L_0057a8bd:; BB(0x0057a8bd);
    /* 0057a8bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0057a8bf:; BB(0x0057a8bf);
    /* 0057a8bf: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 0057a8c5: mov esi, dword ptr [edi + 0xdc] */ r_esi = R32((u32)(r_edi+0xdcu));
    /* 0057a8cb: fld dword ptr [edi + 0x360] */ FPUSH(R_F32((u32)(r_edi+0x360u)));
    /* 0057a8d1: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0057a8d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a8d7: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0057a8db: mov esi, dword ptr [esi + eax*8 + 4] */ r_esi = R32((u32)(r_esi+r_eax*8+0x4u));
    /* 0057a8df: fcomp dword ptr [0x927678] */ fx_compare(ST(0), R_F32((u32)(0x927678u))); FPOP();
    /* 0057a8e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057a8e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057a8e8: jae 0x57a8f6 */ if (!fC) goto L_0057a8f6;
L_0057a8ea:; BB(0x0057a8ea);
    /* 0057a8ea: fld dword ptr [0x927678] */ FPUSH(R_F32((u32)(0x927678u)));
    /* 0057a8f0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0057a8f4: jmp 0x57a92f */ goto L_0057a92f;
L_0057a8f6:; BB(0x0057a8f6);
    /* 0057a8f6: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0057a8fa: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0057a8fd: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 0057a900: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0057a904: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0057a908: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0057a90b: fadd dword ptr [edx*4 + 0x9275d8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9275d8u));
    /* 0057a912: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057a914: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057a916: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057a917: jae 0x57a92f */ if (!fC) goto L_0057a92f;
L_0057a919:; BB(0x0057a919);
    /* 0057a919: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0057a91d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0057a921: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0057a924: fadd dword ptr [ecx*4 + 0x9275d8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x9275d8u));
    /* 0057a92b: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_0057a92f:; BB(0x0057a92f);
    /* 0057a92f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x57a934u); f_0082fa9c();
    /* 0057a934: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0057a938: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 0057a93b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0057a93f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057a942: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0057a946: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x57a94bu); f_0083046c();
    /* 0057a94b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x57a950u); f_0082faac();
    /* 0057a950: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57a955u); f_0082da80();
    /* 0057a955: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x57a95au); f_0082dab0();
L_0057a95a:; BB(0x0057a95a);
    /* 0057a95a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057a95d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057a95e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057a95f: ret  */ FN_RET(0x0057a808); r_esp += 4; return;
}

void f_0057a960(void) /* sub_57A960 */
{
    FN_ENTER(0x0057a960);
    /* 0057a960: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0057a964: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057a967: ja 0x57aa07 */ if ((!fC&&!fZ)) goto L_0057aa07;
L_0057a96d:; BB(0x0057a96d);
    /* 0057a96d: mov eax, dword ptr [eax*4 + 0x927544] */ r_eax = R32((u32)(r_eax*4+0x927544u));
    /* 0057a974: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a960); r_esp += 12; return;
}

void f_0057a976(void)
{
    FN_ENTER(0x0057a976);
    /* 0057a976: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a97a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a97b: call 0x57aa0c */ r_esp -= 4; W32(r_esp, 0x57a980u); f_0057aa0c();
    /* 0057a980: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a976); r_esp += 12; return;
}

void f_0057a985(void)
{
    FN_ENTER(0x0057a985);
    /* 0057a985: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a989: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a98a: call 0x57ab8c */ r_esp -= 4; W32(r_esp, 0x57a98fu); f_0057ab8c();
    /* 0057a98f: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a985); r_esp += 12; return;
}

void f_0057a991(void)
{
    FN_ENTER(0x0057a991);
    /* 0057a991: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a996: call 0x57ad0c */ r_esp -= 4; W32(r_esp, 0x57a99bu); f_0057ad0c();
    /* 0057a99b: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a991); r_esp += 12; return;
}

void f_0057a99d(void)
{
    FN_ENTER(0x0057a99d);
    /* 0057a99d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9a2: call 0x57b2b0 */ r_esp -= 4; W32(r_esp, 0x57a9a7u); f_0057b2b0();
    /* 0057a9a7: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a99d); r_esp += 12; return;
}

void f_0057a9a9(void)
{
    FN_ENTER(0x0057a9a9);
    /* 0057a9a9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9ae: call 0x57b364 */ r_esp -= 4; W32(r_esp, 0x57a9b3u); f_0057b364();
    /* 0057a9b3: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9a9); r_esp += 12; return;
}

void f_0057a9b5(void)
{
    FN_ENTER(0x0057a9b5);
    /* 0057a9b5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9ba: call 0x57b4e8 */ r_esp -= 4; W32(r_esp, 0x57a9bfu); f_0057b4e8();
    /* 0057a9bf: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9b5); r_esp += 12; return;
}

void f_0057a9c1(void)
{
    FN_ENTER(0x0057a9c1);
    /* 0057a9c1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9c6: call 0x57bb5c */ r_esp -= 4; W32(r_esp, 0x57a9cbu); f_0057bb5c();
    /* 0057a9cb: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9c1); r_esp += 12; return;
}

void f_0057a9cd(void)
{
    FN_ENTER(0x0057a9cd);
    /* 0057a9cd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9d2: call 0x57bdf0 */ r_esp -= 4; W32(r_esp, 0x57a9d7u); f_0057bdf0();
    /* 0057a9d7: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9cd); r_esp += 12; return;
}

void f_0057a9d9(void)
{
    FN_ENTER(0x0057a9d9);
    /* 0057a9d9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9de: call 0x57c3d0 */ r_esp -= 4; W32(r_esp, 0x57a9e3u); f_0057c3d0();
    /* 0057a9e3: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9d9); r_esp += 12; return;
}

void f_0057a9e5(void)
{
    FN_ENTER(0x0057a9e5);
    /* 0057a9e5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9ea: call 0x57c54c */ r_esp -= 4; W32(r_esp, 0x57a9efu); f_0057c54c();
    /* 0057a9ef: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9e5); r_esp += 12; return;
}

void f_0057a9f1(void)
{
    FN_ENTER(0x0057a9f1);
    /* 0057a9f1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057a9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9f6: call 0x57c5f8 */ r_esp -= 4; W32(r_esp, 0x57a9fbu); f_0057c5f8();
    /* 0057a9fb: jmp 0x57aa07 */ goto L_0057aa07;
L_0057aa07:; BB(0x0057aa07);
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9f1); r_esp += 12; return;
}

void f_0057a9fd(void)
{
    FN_ENTER(0x0057a9fd);
    /* 0057a9fd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057aa01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa02: call 0x59adf0 */ r_esp -= 4; W32(r_esp, 0x57aa07u); f_0059adf0();
    /* 0057aa07: ret 8 */ FN_RET(0x0057a9fd); r_esp += 12; return;
}

void f_0057aa0c(void) /* sub_57AA0C */
{
    FN_ENTER(0x0057aa0c);
    /* 0057aa0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa0e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057aa10: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0057aa14: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057aa17: je 0x57ab19 */ if (fZ) goto L_0057ab19;
L_0057aa1d:; BB(0x0057aa1d);
    /* 0057aa1d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057aa20: je 0x57aafc */ if (fZ) goto L_0057aafc;
L_0057aa26:; BB(0x0057aa26);
    /* 0057aa26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057aa28: jne 0x57ab14 */ if (!fZ) goto L_0057ab14;
L_0057aa2e:; BB(0x0057aa2e);
    /* 0057aa2e: mov eax, dword ptr [ebp + 0x4bc] */ r_eax = R32((u32)(r_ebp+0x4bcu));
    /* 0057aa34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057aa36: jne 0x57aaa9 */ if (!fZ) goto L_0057aaa9;
L_0057aa38:; BB(0x0057aa38);
    /* 0057aa38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057aa3a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57aa3fu); f_007aa094();
    /* 0057aa3f: mov eax, dword ptr [ebp + 0x410] */ r_eax = R32((u32)(r_ebp+0x410u));
    /* 0057aa45: lea ecx, [ebp + 0x410] */ r_ecx = (u32)(r_ebp+0x410u);
    /* 0057aa4b: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x57aa4eu); call_ind(t); }
    /* 0057aa4e: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0057aa54: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057aa57: je 0x57ab14 */ if (fZ) goto L_0057ab14;
L_0057aa5d:; BB(0x0057aa5d);
    /* 0057aa5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057aa5f: je 0x57ab14 */ if (fZ) goto L_0057ab14;
L_0057aa65:; BB(0x0057aa65);
    /* 0057aa65: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0057aa68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa69: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x57aa6eu); f_005787fc();
    /* 0057aa6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057aa70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa73: push 0x285 */ { u32 v = 0x285u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa78: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57aa7du); f_00814298();
    /* 0057aa7d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057aa80: lea ecx, [ebp + 0x3f4] */ r_ecx = (u32)(r_ebp+0x3f4u);
    /* 0057aa86: call 0x512458 */ r_esp -= 4; W32(r_esp, 0x57aa8bu); f_00512458();
    /* 0057aa8b: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057aa91: mov dword ptr [ebp + 0x4bc], 1 */ W32((u32)(r_ebp+0x4bcu), 0x1u);
    /* 0057aa9b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057aa9e: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0057aaa4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057aaa5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057aaa6: ret 4 */ FN_RET(0x0057aa0c); r_esp += 8; return;
L_0057aaa9:; BB(0x0057aaa9);
    /* 0057aaa9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057aaac: jne 0x57aaed */ if (!fZ) goto L_0057aaed;
L_0057aaae:; BB(0x0057aaae);
    /* 0057aaae: mov eax, dword ptr [ebp + 0x3f4] */ r_eax = R32((u32)(r_ebp+0x3f4u));
    /* 0057aab4: lea ecx, [ebp + 0x3f4] */ r_ecx = (u32)(r_ebp+0x3f4u);
    /* 0057aaba: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x57aabdu); call_ind(t); }
    /* 0057aabd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057aabf: je 0x57ab14 */ if (fZ) goto L_0057ab14;
L_0057aac1:; BB(0x0057aac1);
    /* 0057aac1: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057aac7: mov dword ptr [ebp + 0x4bc], 2 */ W32((u32)(r_ebp+0x4bcu), 0x2u);
    /* 0057aad1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057aad4: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0057aada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aadc: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0057aadf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057aae0: call 0x578658 */ r_esp -= 4; W32(r_esp, 0x57aae5u); f_00578658();
    /* 0057aae5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057aae8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057aae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057aaea: ret 4 */ FN_RET(0x0057aa0c); r_esp += 8; return;
L_0057aaed:; BB(0x0057aaed);
    /* 0057aaed: mov dword ptr [ebp + 0x4bc], 2 */ W32((u32)(r_ebp+0x4bcu), 0x2u);
    /* 0057aaf7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057aaf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057aaf9: ret 4 */ FN_RET(0x0057aa0c); r_esp += 8; return;
L_0057aafc:; BB(0x0057aafc);
    /* 0057aafc: mov eax, dword ptr [ebp + 0x4bc] */ r_eax = R32((u32)(r_ebp+0x4bcu));
    /* 0057ab02: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057ab05: jne 0x57ab14 */ if (!fZ) goto L_0057ab14;
L_0057ab07:; BB(0x0057ab07);
    /* 0057ab07: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0057ab0b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057ab10: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_0057ab14:; BB(0x0057ab14);
    /* 0057ab14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057ab15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ab16: ret 4 */ FN_RET(0x0057aa0c); r_esp += 8; return;
L_0057ab19:; BB(0x0057ab19);
    /* 0057ab19: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057ab1c: mov eax, 4 */ r_eax = 0x4u;
    /* 0057ab21: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0057ab28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ab2a: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x57ab30u); call_ind(t); }
    /* 0057ab30: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057ab36: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057ab39: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0057ab3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ab41: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57ab46u); f_007aa094();
    /* 0057ab46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ab48: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x57ab4du); f_0051f894();
    /* 0057ab4d: fild dword ptr [ebp + 0x3dc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3dcu)));
    /* 0057ab53: fstp dword ptr [ebp + 0x4cc] */ W_F32((u32)(r_ebp+0x4ccu), ST(0)); FPOP();
    /* 0057ab59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ab5b: mov dword ptr [ebp + 0x4bc], eax */ W32((u32)(r_ebp+0x4bcu), r_eax);
    /* 0057ab61: mov dword ptr [ebp + 0x4b8], eax */ W32((u32)(r_ebp+0x4b8u), r_eax);
    /* 0057ab67: lea ecx, [ebp + 0x410] */ r_ecx = (u32)(r_ebp+0x410u);
    /* 0057ab6d: call 0x576c0c */ r_esp -= 4; W32(r_esp, 0x57ab72u); f_00576c0c();
    /* 0057ab72: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0057ab75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ab77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab7a: push 0x27b */ { u32 v = 0x27bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab7f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57ab84u); f_00814298();
    /* 0057ab84: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057ab87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057ab88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ab89: ret 4 */ FN_RET(0x0057aa0c); r_esp += 8; return;
}

void f_0057ab8c(void) /* sub_57AB8C */
{
    FN_ENTER(0x0057ab8c);
    /* 0057ab8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab8d: mov esi, ecx */ r_esi = r_ecx;
    /* 0057ab8f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057ab93: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ab96: je 0x57ac3c */ if (fZ) goto L_0057ac3c;
L_0057ab9c:; BB(0x0057ab9c);
    /* 0057ab9c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ab9f: je 0x57abcb */ if (fZ) goto L_0057abcb;
L_0057aba1:; BB(0x0057aba1);
    /* 0057aba1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057aba3: jne 0x57abb0 */ if (!fZ) goto L_0057abb0;
L_0057aba5:; BB(0x0057aba5);
    /* 0057aba5: mov ecx, esi */ r_ecx = r_esi;
    /* 0057aba7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57abacu); f_007aa094();
    /* 0057abac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057abad: ret 4 */ FN_RET(0x0057ab8c); r_esp += 8; return;
L_0057abb0:; BB(0x0057abb0);
    /* 0057abb0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057abb3: jne 0x57ac38 */ if (!fZ) goto L_0057ac38;
L_0057abb9:; BB(0x0057abb9);
    /* 0057abb9: mov ecx, esi */ r_ecx = r_esi;
    /* 0057abbb: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x57abc0u); f_0051f81c();
    /* 0057abc0: mov ecx, esi */ r_ecx = r_esi;
    /* 0057abc2: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x57abc7u); f_00520be8();
    /* 0057abc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057abc8: ret 4 */ FN_RET(0x0057ab8c); r_esp += 8; return;
L_0057abcb:; BB(0x0057abcb);
    /* 0057abcb: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0057abd1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057abd3: je 0x57ac38 */ if (fZ) goto L_0057ac38;
L_0057abd5:; BB(0x0057abd5);
    /* 0057abd5: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0057abdb: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057abdd: je 0x57ac04 */ if (fZ) goto L_0057ac04;
L_0057abdf:; BB(0x0057abdf);
    /* 0057abdf: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057abe2: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0057abe8: mov ecx, esi */ r_ecx = r_esi;
    /* 0057abea: call 0x57ac74 */ r_esp -= 4; W32(r_esp, 0x57abefu); f_0057ac74();
    /* 0057abef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057abf1: jne 0x57ac38 */ if (!fZ) goto L_0057ac38;
L_0057abf3:; BB(0x0057abf3);
    /* 0057abf3: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057abf9: mov ecx, esi */ r_ecx = r_esi;
    /* 0057abfb: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57ac00u); f_0051f62c();
    /* 0057ac00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ac01: ret 4 */ FN_RET(0x0057ab8c); r_esp += 8; return;
L_0057ac04:; BB(0x0057ac04);
    /* 0057ac04: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac06: call 0x57acb8 */ r_esp -= 4; W32(r_esp, 0x57ac0bu); f_0057acb8();
    /* 0057ac0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ac0d: je 0x57ac20 */ if (fZ) goto L_0057ac20;
L_0057ac0f:; BB(0x0057ac0f);
    /* 0057ac0f: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057ac15: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac17: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57ac1cu); f_0051f62c();
    /* 0057ac1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ac1d: ret 4 */ FN_RET(0x0057ab8c); r_esp += 8; return;
L_0057ac20:; BB(0x0057ac20);
    /* 0057ac20: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac22: call 0x57ac74 */ r_esp -= 4; W32(r_esp, 0x57ac27u); f_0057ac74();
    /* 0057ac27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057ac29: jne 0x57ac38 */ if (!fZ) goto L_0057ac38;
L_0057ac2b:; BB(0x0057ac2b);
    /* 0057ac2b: push dword ptr [esi + 0x380] */ { u32 v = R32((u32)(r_esi+0x380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057ac31: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac33: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57ac38u); f_0051f62c();
L_0057ac38:; BB(0x0057ac38);
    /* 0057ac38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ac39: ret 4 */ FN_RET(0x0057ab8c); r_esp += 8; return;
L_0057ac3c:; BB(0x0057ac3c);
    /* 0057ac3c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0057ac3e: mov eax, 3 */ r_eax = 0x3u;
    /* 0057ac43: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0057ac4a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac4c: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x57ac52u); call_ind(t); }
    /* 0057ac52: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0057ac58: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057ac5b: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0057ac61: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac63: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57ac68u); f_007aa094();
    /* 0057ac68: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac6a: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x57ac6fu); f_00520bdc();
    /* 0057ac6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ac70: ret 4 */ FN_RET(0x0057ab8c); r_esp += 8; return;
}

void f_0057ac74(void) /* sub_57AC74 */
{
    FN_ENTER(0x0057ac74);
    /* 0057ac74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ac75: mov esi, ecx */ r_esi = r_ecx;
    /* 0057ac77: movsx ecx, word ptr [esi + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 0057ac7e: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0057ac85: lea eax, [ecx] */ r_eax = (u32)(r_ecx);
    /* 0057ac87: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0057ac8a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ac8c: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0057ac8e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ac90: jg 0x57acb4 */ if ((!fZ&&fS==fO)) goto L_0057acb4;
L_0057ac92:; BB(0x0057ac92);
    /* 0057ac92: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ac94: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x57ac99u); f_007751b0();
    /* 0057ac99: fcomp dword ptr [esi + 0x3ec] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3ecu))); FPOP();
    /* 0057ac9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057aca1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057aca2: ja 0x57acb4 */ if ((!fC&&!fZ)) goto L_0057acb4;
L_0057aca4:; BB(0x0057aca4);
    /* 0057aca4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aca6: mov ecx, esi */ r_ecx = r_esi;
    /* 0057aca8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57acadu); f_0051f62c();
    /* 0057acad: mov eax, 1 */ r_eax = 0x1u;
    /* 0057acb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057acb3: ret  */ FN_RET(0x0057ac74); r_esp += 4; return;
L_0057acb4:; BB(0x0057acb4);
    /* 0057acb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057acb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057acb7: ret  */ FN_RET(0x0057ac74); r_esp += 4; return;
}

void f_0057acb8(void) /* sub_57ACB8 */
{
    FN_ENTER(0x0057acb8);
    /* 0057acb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057acb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057acbb: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057acc1: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057acc3: jne 0x57ad08 */ if (!fZ) goto L_0057ad08;
L_0057acc5:; BB(0x0057acc5);
    /* 0057acc5: movsx ecx, word ptr [ebp + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 0057accc: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0057acd3: lea eax, [ecx] */ r_eax = (u32)(r_ecx);
    /* 0057acd5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0057acd8: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057acda: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0057acdc: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057acde: jg 0x57ad08 */ if ((!fZ&&fS==fO)) goto L_0057ad08;
L_0057ace0:; BB(0x0057ace0);
    /* 0057ace0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057ace2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x57ace7u); f_007751b0();
    /* 0057ace7: fcomp dword ptr [ebp + 0x3e8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3e8u))); FPOP();
    /* 0057aced: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057acef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057acf0: ja 0x57ad08 */ if ((!fC&&!fZ)) goto L_0057ad08;
L_0057acf2:; BB(0x0057acf2);
    /* 0057acf2: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 0057acf8: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057acfb: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 0057ad01: mov eax, 1 */ r_eax = 0x1u;
    /* 0057ad06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ad07: ret  */ FN_RET(0x0057acb8); r_esp += 4; return;
L_0057ad08:; BB(0x0057ad08);
    /* 0057ad08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057ad0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ad0b: ret  */ FN_RET(0x0057acb8); r_esp += 4; return;
}

void f_0057ad0c(void) /* sub_57AD0C */
{
    FN_ENTER(0x0057ad0c);
    /* 0057ad0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0057ad0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad11: push 0x8d78f0 */ { u32 v = 0x8d78f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057ad1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057ad24: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ad27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057ad2a: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0057ad2d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0057ad30: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0057ad33: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057ad36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057ad39: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad3c: je 0x57b1ac */ if (fZ) goto L_0057b1ac;
L_0057ad42:; BB(0x0057ad42);
    /* 0057ad42: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad45: je 0x57af1f */ if (fZ) goto L_0057af1f;
L_0057ad4b:; BB(0x0057ad4b);
    /* 0057ad4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad4d: jne 0x57aef3 */ if (!fZ) goto L_0057aef3;
L_0057ad53:; BB(0x0057ad53);
    /* 0057ad53: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57ad58u); f_007aa094();
    /* 0057ad58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ad5b: mov eax, dword ptr [eax + 0x4b8] */ r_eax = R32((u32)(r_eax+0x4b8u));
    /* 0057ad61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad63: je 0x57b0ff */ if (fZ) goto L_0057b0ff;
L_0057ad69:; BB(0x0057ad69);
    /* 0057ad69: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad6c: je 0x57af63 */ if (fZ) goto L_0057af63;
L_0057ad72:; BB(0x0057ad72);
    /* 0057ad72: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad75: je 0x57aea6 */ if (fZ) goto L_0057aea6;
L_0057ad7b:; BB(0x0057ad7b);
    /* 0057ad7b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad7e: jne 0x57ae16 */ if (!fZ) goto L_0057ae16;
L_0057ad84:; BB(0x0057ad84);
    /* 0057ad84: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad89: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ad8c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57ad91u); f_007aaa30();
    /* 0057ad91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad93: je 0x57aedb */ if (fZ) goto L_0057aedb;
L_0057ad99:; BB(0x0057ad99);
    /* 0057ad99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ad9c: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0057ad9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057ada1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ada2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ada3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ada4: push 0x279 */ { u32 v = 0x279u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ada9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57adaeu); f_00814298();
    /* 0057adae: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0057adb5: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057adba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57adbfu); f_005caba4();
    /* 0057adbf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057adc2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0057adc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057adc7: je 0x57adfd */ if (fZ) goto L_0057adfd;
L_0057adc9:; BB(0x0057adc9);
    /* 0057adc9: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0057add0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057add7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057adda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057addb: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0057adde: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057ade4: lea edi, [ebx + 0x4a0] */ r_edi = (u32)(r_ebx+0x4a0u);
    /* 0057adea: movzx esi, dx */ r_esi = (u32)(u16)r_edx;
    /* 0057aded: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057adee: mov ecx, eax */ r_ecx = r_eax;
    /* 0057adf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057adf1: call 0x57d0f4 */ r_esp -= 4; W32(r_esp, 0x57adf6u); f_0057d0f4();
    /* 0057adf6: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0057adfd:; BB(0x0057adfd);
    /* 0057adfd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057ae04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ae07: mov dword ptr [eax + 0x4b8], 4 */ W32((u32)(r_eax+0x4b8u), 0x4u);
    /* 0057ae11: jmp 0x57aedb */ goto L_0057aedb;
L_0057ae16:; BB(0x0057ae16);
    /* 0057ae16: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ae19: jne 0x57aedb */ if (!fZ) goto L_0057aedb;
L_0057ae1f:; BB(0x0057ae1f);
    /* 0057ae1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ae22: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0057ae28: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057ae2b: je 0x57ae34 */ if (fZ) goto L_0057ae34;
L_0057ae2d:; BB(0x0057ae2d);
    /* 0057ae2d: mov eax, 1 */ r_eax = 0x1u;
    /* 0057ae32: jmp 0x57ae36 */ goto L_0057ae36;
L_0057ae34:; BB(0x0057ae34);
    /* 0057ae34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0057ae36:; BB(0x0057ae36);
    /* 0057ae36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ae38: je 0x57aedb */ if (fZ) goto L_0057aedb;
L_0057ae3e:; BB(0x0057ae3e);
    /* 0057ae3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ae41: mov ecx, dword ptr [edx + 0x4bc] */ r_ecx = R32((u32)(r_edx+0x4bcu));
    /* 0057ae47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ae49: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057ae50: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ae53: mov dword ptr [edx + 0x4bc], ecx */ W32((u32)(r_edx+0x4bcu), r_ecx);
    /* 0057ae59: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0057ae5e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ae61: je 0x57af49 */ if (fZ) goto L_0057af49;
L_0057ae67:; BB(0x0057ae67);
    /* 0057ae67: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ae6a: je 0x57af49 */ if (fZ) goto L_0057af49;
L_0057ae70:; BB(0x0057ae70);
    /* 0057ae70: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ae73: jl 0x57ae83 */ if ((fS!=fO)) goto L_0057ae83;
L_0057ae75:; BB(0x0057ae75);
    /* 0057ae75: mov eax, edx */ r_eax = r_edx;
    /* 0057ae77: mov dword ptr [eax + 0x4b8], 5 */ W32((u32)(r_eax+0x4b8u), 0x5u);
    /* 0057ae81: jmp 0x57aedb */ goto L_0057aedb;
L_0057ae83:; BB(0x0057ae83);
    /* 0057ae83: mov ebx, edx */ r_ebx = r_edx;
    /* 0057ae85: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0057ae88: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 0057ae8e: mov edx, dword ptr [0xa7410c] */ r_edx = R32((u32)(0xa7410cu));
    /* 0057ae94: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0057ae97: add dword ptr [ebx + 0x60], ecx */ { u32 ad = (u32)(r_ebx+0x60u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0057ae9a: mov dword ptr [ebx + 0x4b8], 1 */ W32((u32)(r_ebx+0x4b8u), 0x1u);
    /* 0057aea4: jmp 0x57aedb */ goto L_0057aedb;
L_0057aea6:; BB(0x0057aea6);
    /* 0057aea6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057aea9: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aeae: lea edx, [eax + 0x4a0] */ r_edx = (u32)(r_eax+0x4a0u);
    /* 0057aeb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057aeb5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57aebau); f_0050b510();
    /* 0057aeba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057aebd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aec2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057aec5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57aecau); f_007aaa30();
    /* 0057aeca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057aecc: je 0x57aedb */ if (fZ) goto L_0057aedb;
L_0057aece:; BB(0x0057aece);
    /* 0057aece: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057aed1: mov dword ptr [eax + 0x4b8], 3 */ W32((u32)(r_eax+0x4b8u), 0x3u);
L_0057aedb:; BB(0x0057aedb);
    /* 0057aedb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057aede: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057aee0: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57aee6u); call_ind(t); }
    /* 0057aee6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057aee9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057aeeb: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x57aef1u); call_ind(t); }
    /* 0057aef1: jmp 0x57af30 */ goto L_0057af30;
L_0057aef3:; BB(0x0057aef3);
    /* 0057aef3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057aef6: jne 0x57af30 */ if (!fZ) goto L_0057af30;
L_0057aef8:; BB(0x0057aef8);
    /* 0057aef8: mov eax, ecx */ r_eax = r_ecx;
    /* 0057aefa: mov edx, dword ptr [eax + 0x49c] */ r_edx = R32((u32)(r_eax+0x49cu));
    /* 0057af00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057af02: je 0x57af30 */ if (fZ) goto L_0057af30;
L_0057af04:; BB(0x0057af04);
    /* 0057af04: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0057af08: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057af0d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0057af11: mov edx, ecx */ r_edx = r_ecx;
    /* 0057af13: mov dword ptr [edx + 0x49c], 0 */ W32((u32)(r_edx+0x49cu), 0x0u);
    /* 0057af1d: jmp 0x57af30 */ goto L_0057af30;
L_0057af1f:; BB(0x0057af1f);
    /* 0057af1f: mov eax, ecx */ r_eax = r_ecx;
    /* 0057af21: mov edx, dword ptr [eax + 0x4b8] */ r_edx = R32((u32)(r_eax+0x4b8u));
    /* 0057af27: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057af2a: je 0x57b190 */ if (fZ) goto L_0057b190;
L_0057af30:; BB(0x0057af30);
    /* 0057af30: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057af33: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057af36: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057af39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057af3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057af43: mov esp, ebp */ r_esp = r_ebp;
    /* 0057af45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057af46: ret 4 */ FN_RET(0x0057ad0c); r_esp += 8; return;
L_0057af49:; BB(0x0057af49);
    /* 0057af49: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057af4c: jl 0x57ae83 */ if ((fS!=fO)) goto L_0057ae83;
L_0057af52:; BB(0x0057af52);
    /* 0057af52: mov eax, edx */ r_eax = r_edx;
    /* 0057af54: mov dword ptr [eax + 0x4b8], 5 */ W32((u32)(r_eax+0x4b8u), 0x5u);
    /* 0057af5e: jmp 0x57aedb */ goto L_0057aedb;
L_0057af63:; BB(0x0057af63);
    /* 0057af63: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057af66: mov eax, dword ptr [0xa7410c] */ r_eax = R32((u32)(0xa7410cu));
    /* 0057af6b: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0057af71: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0057af74: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0057af77: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057af79: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0057af7c: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 0057af7f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0057af81: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057af83: jle 0x57b071 */ if ((fZ||fS!=fO)) goto L_0057b071;
L_0057af89:; BB(0x0057af89);
    /* 0057af89: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0057af90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057af91: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x57af96u); f_00520f3c();
    /* 0057af96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057af97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057af99: je 0x57b066 */ if (fZ) goto L_0057b066;
L_0057af9f:; BB(0x0057af9f);
    /* 0057af9f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057afa2: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x57afa7u); f_007ba980();
    /* 0057afa7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057afaa: mov ecx, edi */ r_ecx = r_edi;
    /* 0057afac: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x57afb1u); f_007ba980();
    /* 0057afb1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057afb4: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0057afb7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0057afba: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057afbc: jne 0x57b066 */ if (!fZ) goto L_0057b066;
L_0057afc2:; BB(0x0057afc2);
    /* 0057afc2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057afc5: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57afcau); f_005213d8();
    /* 0057afca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057afcd: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57afd2u); f_00521410();
    /* 0057afd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057afd5: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0057afdb: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0057afe1: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057afe3: fmul qword ptr [0x9275d0] */ ST(0) = ST(0) * R_F64((u32)(0x9275d0u));
    /* 0057afe9: fdiv qword ptr [0x9275c8] */ ST(0) = ST(0) / R_F64((u32)(0x9275c8u));
    /* 0057afef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057aff2: movzx edi, word ptr [ecx + 0x60] */ r_edi = (u32)R16((u32)(r_ecx+0x60u));
    /* 0057aff6: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0057aff9: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0057affd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057b002: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057b005: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0057b008: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057b00b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0057b00e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b011: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057b014: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057b01a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057b01d: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0057b020: mov dword ptr [ecx + 0x4c4], edx */ W32((u32)(r_ecx+0x4c4u), r_edx);
    /* 0057b026: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0057b029: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b02b: jle 0x57b046 */ if ((fZ||fS!=fO)) goto L_0057b046;
L_0057b02d:; BB(0x0057b02d);
    /* 0057b02d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b02f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b031: jl 0x57b0b9 */ if ((fS!=fO)) goto L_0057b0b9;
L_0057b037:; BB(0x0057b037);
    /* 0057b037: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b039: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057b03b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b03d: jl 0x57b0b9 */ if ((fS!=fO)) goto L_0057b0b9;
L_0057b03f:; BB(0x0057b03f);
    /* 0057b03f: mov eax, 1 */ r_eax = 0x1u;
    /* 0057b044: jmp 0x57b062 */ goto L_0057b062;
L_0057b046:; BB(0x0057b046);
    /* 0057b046: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b048: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b04a: jle 0x57b0e9 */ if ((fZ||fS!=fO)) goto L_0057b0e9;
L_0057b050:; BB(0x0057b050);
    /* 0057b050: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b052: jl 0x57b060 */ if ((fS!=fO)) goto L_0057b060;
L_0057b054:; BB(0x0057b054);
    /* 0057b054: mov eax, edi */ r_eax = r_edi;
    /* 0057b056: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b05a: jle 0x57b0f5 */ if ((fZ||fS!=fO)) goto L_0057b0f5;
L_0057b060:; BB(0x0057b060);
    /* 0057b060: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0057b062:; BB(0x0057b062);
    /* 0057b062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b064: jne 0x57b0cf */ if (!fZ) goto L_0057b0cf;
L_0057b066:; BB(0x0057b066);
    /* 0057b066: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057b069: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b06b: jl 0x57af89 */ if ((fS!=fO)) goto L_0057af89;
L_0057b071:; BB(0x0057b071);
    /* 0057b071: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b074: mov edx, dword ptr [eax + 0x4b8] */ r_edx = R32((u32)(r_eax+0x4b8u));
    /* 0057b07a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b07d: jne 0x57aedb */ if (!fZ) goto L_0057aedb;
L_0057b083:; BB(0x0057b083);
    /* 0057b083: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b085: push dword ptr [ecx + 0x4c8] */ { u32 v = R32((u32)(r_ecx+0x4c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057b08b: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057b08e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b092: call 0x57b218 */ r_esp -= 4; W32(r_esp, 0x57b097u); f_0057b218();
    /* 0057b097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b099: je 0x57aedb */ if (fZ) goto L_0057aedb;
L_0057b09f:; BB(0x0057b09f);
    /* 0057b09f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b0a2: mov eax, 2 */ r_eax = 0x2u;
    /* 0057b0a7: mov dword ptr [edx + 0x4b8], eax */ W32((u32)(r_edx+0x4b8u), r_eax);
    /* 0057b0ad: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057b0b4: jmp 0x57aedb */ goto L_0057aedb;
L_0057b0b9:; BB(0x0057b0b9);
    /* 0057b0b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b0bb: jle 0x57b0c1 */ if ((fZ||fS!=fO)) goto L_0057b0c1;
L_0057b0bd:; BB(0x0057b0bd);
    /* 0057b0bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b0bf: jmp 0x57b062 */ goto L_0057b062;
L_0057b0c1:; BB(0x0057b0c1);
    /* 0057b0c1: mov eax, edi */ r_eax = r_edi;
    /* 0057b0c3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b0c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b0c7: jle 0x57b03f */ if ((fZ||fS!=fO)) goto L_0057b03f;
L_0057b0cd:; BB(0x0057b0cd);
    /* 0057b0cd: jmp 0x57b0bd */ goto L_0057b0bd;
L_0057b0cf:; BB(0x0057b0cf);
    /* 0057b0cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b0d2: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0057b0d5: mov edx, 2 */ r_edx = 0x2u;
    /* 0057b0da: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 0057b0e0: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 0057b0e7: jmp 0x57b071 */ goto L_0057b071;
L_0057b0e9:; BB(0x0057b0e9);
    /* 0057b0e9: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b0eb: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057b0ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b0ef: jl 0x57b050 */ if ((fS!=fO)) goto L_0057b050;
L_0057b0f5:; BB(0x0057b0f5);
    /* 0057b0f5: mov eax, 1 */ r_eax = 0x1u;
    /* 0057b0fa: jmp 0x57b062 */ goto L_0057b062;
L_0057b0ff:; BB(0x0057b0ff);
    /* 0057b0ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b102: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0057b108: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b10a: je 0x57b118 */ if (fZ) goto L_0057b118;
L_0057b10c:; BB(0x0057b10c);
    /* 0057b10c: lea edx, [eax + 0x4a0] */ r_edx = (u32)(r_eax+0x4a0u);
    /* 0057b112: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b113: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x57b118u); f_00508db8();
L_0057b118:; BB(0x0057b118);
    /* 0057b118: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b11b: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0057b11e: mov esi, dword ptr [ebx + 0x4c0] */ r_esi = R32((u32)(r_ebx+0x4c0u));
    /* 0057b124: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 0057b12a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057b12d: mov edx, dword ptr [0xa7410c] */ r_edx = R32((u32)(0xa7410cu));
    /* 0057b133: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0057b136: add dword ptr [ebx + 0x60], ecx */ { u32 ad = (u32)(r_ebx+0x60u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0057b139: mov dword ptr [ebx + 0x4c0], esi */ W32((u32)(r_ebx+0x4c0u), r_esi);
    /* 0057b13f: mov edi, dword ptr [0xa7410c] */ r_edi = R32((u32)(0xa7410cu));
    /* 0057b145: cmp esi, dword ptr [edi + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b148: jl 0x57aedb */ if ((fS!=fO)) goto L_0057aedb;
L_0057b14e:; BB(0x0057b14e);
    /* 0057b14e: mov eax, ebx */ r_eax = r_ebx;
    /* 0057b150: mov edx, dword ptr [eax + 0x49c] */ r_edx = R32((u32)(r_eax+0x49cu));
    /* 0057b156: mov dword ptr [eax + 0x4b8], 1 */ W32((u32)(r_eax+0x4b8u), 0x1u);
    /* 0057b160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b162: mov dword ptr [eax + 0x4bc], 0 */ W32((u32)(r_eax+0x4bcu), 0x0u);
    /* 0057b16c: je 0x57aedb */ if (fZ) goto L_0057aedb;
L_0057b172:; BB(0x0057b172);
    /* 0057b172: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0057b176: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057b17b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0057b17f: mov edx, ebx */ r_edx = r_ebx;
    /* 0057b181: mov dword ptr [edx + 0x49c], 0 */ W32((u32)(r_edx+0x49cu), 0x0u);
    /* 0057b18b: jmp 0x57aedb */ goto L_0057aedb;
L_0057b190:; BB(0x0057b190);
    /* 0057b190: call 0x57b298 */ r_esp -= 4; W32(r_esp, 0x57b195u); f_0057b298();
    /* 0057b195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b197: jne 0x57af30 */ if (!fZ) goto L_0057af30;
L_0057b19d:; BB(0x0057b19d);
    /* 0057b19d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b1a0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b1a2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57b1a7u); f_0051f62c();
    /* 0057b1a7: jmp 0x57af30 */ goto L_0057af30;
L_0057b1ac:; BB(0x0057b1ac);
    /* 0057b1ac: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057b1ae: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x57b1b4u); call_ind(t); }
    /* 0057b1b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b1b7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b1b9: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0057b1bf: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057b1c2: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057b1c5: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0057b1cb: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57b1d0u); f_0051f664();
    /* 0057b1d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b1d3: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 0057b1d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b1da: mov dword ptr [edx + 0x4c4], eax */ W32((u32)(r_edx+0x4c4u), r_eax);
    /* 0057b1e0: mov dword ptr [edx + 0x4c8], eax */ W32((u32)(r_edx+0x4c8u), r_eax);
    /* 0057b1e6: mov dword ptr [edx + 0x4b8], eax */ W32((u32)(r_edx+0x4b8u), r_eax);
    /* 0057b1ec: mov dword ptr [edx + 0x4c0], eax */ W32((u32)(r_edx+0x4c0u), r_eax);
    /* 0057b1f2: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057b1f9: lea ecx, [edx + 0x4a0] */ r_ecx = (u32)(r_edx+0x4a0u);
    /* 0057b1ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b200: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x57b205u); f_00509590();
    /* 0057b205: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057b208: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b20b: mov dword ptr [edx + 0x49c], eax */ W32((u32)(r_edx+0x49cu), r_eax);
    /* 0057b211: jmp 0x57af30 */ goto L_0057af30;
}

