#include "protos.h"

void f_00732118(void) /* sub_732118 */
{
    FN_ENTER(0x00732118);
    /* 00732118: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00732119: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073211a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073211b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073211d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00732121: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00732125: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 00732128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732129: push 0x9f2eb8 */ { u32 v = 0x9f2eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073212e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073212f: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x732134u); f_0072a68c();
    /* 00732134: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732137: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0073213a: mov dword ptr [ebp + 0x70], 0x61cdb0 */ W32((u32)(r_ebp+0x70u), 0x61cdb0u);
    /* 00732141: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00732143: mov ecx, esi */ r_ecx = r_esi;
    /* 00732145: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00732147: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00732148: call 0x72bdd4 */ r_esp -= 4; W32(r_esp, 0x73214du); f_0072bdd4();
    /* 0073214d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073214f: call 0x72b4a4 */ r_esp -= 4; W32(r_esp, 0x732154u); f_0072b4a4();
    /* 00732154: movzx eax, byte ptr [esi + 0x1c] */ r_eax = (u32)R8((u32)(r_esi+0x1cu));
    /* 00732158: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073215b: je 0x7321ff */ if (fZ) goto L_007321ff;
L_00732161:; BB(0x00732161);
    /* 00732161: mov dword ptr [esi + 8], 0x41200000 */ W32((u32)(r_esi+0x8u), 0x41200000u);
L_00732168:; BB(0x00732168);
    /* 00732168: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00732169: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0073216c: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0073216f: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00732172: mov dword ptr [ebp + 0x3c], 0x42080000 */ W32((u32)(r_ebp+0x3cu), 0x42080000u);
    /* 00732179: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0073217c: call 0x7322b0 */ r_esp -= 4; W32(r_esp, 0x732181u); f_007322b0();
    /* 00732181: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00732182: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732184: jne 0x7321bf */ if (!fZ) goto L_007321bf;
L_00732186:; BB(0x00732186);
    /* 00732186: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0073218a: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073218f: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 00732193: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
L_00732196:; BB(0x00732196);
    /* 00732196: fadd dword ptr [0x971080] */ ST(0) = ST(0) + R_F32((u32)(0x971080u));
    /* 0073219c: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0073219f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 007321a1: call 0x73ec60 */ r_esp -= 4; W32(r_esp, 0x7321a6u); f_0073ec60();
    /* 007321a6: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 007321a9: fmul dword ptr [ebp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x6cu));
    /* 007321ac: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007321ae: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 007321b1: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 007321b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007321b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007321ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007321bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007321bc: ret 4 */ FN_RET(0x00732118); r_esp += 8; return;
L_007321bf:; BB(0x007321bf);
    /* 007321bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007321c1: call 0x5c5894 */ r_esp -= 4; W32(r_esp, 0x7321c6u); f_005c5894();
    /* 007321c6: fld dword ptr [0x971084] */ FPUSH(R_F32((u32)(0x971084u)));
    /* 007321cc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007321cf: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 007321d2: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 007321d5: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 007321d8: mov ecx, esi */ r_ecx = r_esi;
    /* 007321da: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 007321de: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007321e4: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 007321e8: call 0x72d50c */ r_esp -= 4; W32(r_esp, 0x7321edu); f_0072d50c();
    /* 007321ed: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 007321f0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007321f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007321f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007321f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007321f7: ja 0x7321fb */ if ((!fC&&!fZ)) goto L_007321fb;
L_007321f9:; BB(0x007321f9);
    /* 007321f9: fst st(1) */ ST(1) = ST(0);
L_007321fb:; BB(0x007321fb);
    /* 007321fb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007321fd: jmp 0x732196 */ goto L_00732196;
L_007321ff:; BB(0x007321ff);
    /* 007321ff: mov eax, 0xc1000000 */ r_eax = 0xc1000000u;
    /* 00732204: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00732207: jmp 0x732168 */ goto L_00732168;
}

void f_0073220c(void) /* sub_73220C */
{
    FN_ENTER(0x0073220c);
    /* 0073220c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073220d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073220e: mov edi, ecx */ r_edi = r_ecx;
    /* 00732210: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00732214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732215: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00732218: push 0x9f2ce0 */ { u32 v = 0x9f2ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073221d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073221e: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x732223u); f_0072a68c();
    /* 00732223: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00732227: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 0073222a: mov dword ptr [edi + 0x70], 0x731828 */ W32((u32)(r_edi+0x70u), 0x731828u);
    /* 00732231: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 00732234: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00732238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00732239: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073223a: call 0x742454 */ r_esp -= 4; W32(r_esp, 0x73223fu); f_00742454();
    /* 0073223f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732242: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00732244: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x732249u); f_0072e0e4();
    /* 00732249: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0073224e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00732250: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x732255u); f_0072ddf4();
    /* 00732255: fld dword ptr [0x971074] */ FPUSH(R_F32((u32)(0x971074u)));
    /* 0073225b: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 0073225e: fadd dword ptr [0x97106c] */ ST(0) = ST(0) + R_F32((u32)(0x97106cu));
    /* 00732264: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 00732267: mov dword ptr [edi + 0x3c], 0x42440000 */ W32((u32)(r_edi+0x3cu), 0x42440000u);
    /* 0073226e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00732270: call 0x73ec60 */ r_esp -= 4; W32(r_esp, 0x732275u); f_0073ec60();
    /* 00732275: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00732278: fmul dword ptr [edi + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6cu));
    /* 0073227b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0073227d: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 00732280: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
    /* 00732287: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00732288: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00732289: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073228a: ret 4 */ FN_RET(0x0073220c); r_esp += 8; return;
}

void f_00732290(void) /* sub_732290 */
{
    FN_ENTER(0x00732290);
    /* 00732290: mov dword ptr [0xa9a864], 0x3f800000 */ W32((u32)(0xa9a864u), 0x3f800000u);
    /* 0073229a: mov dword ptr [0xa9a868], 0x41000000 */ W32((u32)(0xa9a868u), 0x41000000u);
    /* 007322a4: mov dword ptr [0xa9a86c], 0x3fc00000 */ W32((u32)(0xa9a86cu), 0x3fc00000u);
    /* 007322ae: ret  */ FN_RET(0x00732290); r_esp += 4; return;
}

void f_007322b0(void) /* sub_7322B0 */
{
    FN_ENTER(0x007322b0);
    /* 007322b0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007322b4: movzx eax, byte ptr [ecx + 0xf2] */ r_eax = (u32)R8((u32)(r_ecx+0xf2u));
    /* 007322bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007322bd: jl 0x7322d3 */ if ((fS!=fO)) goto L_007322d3;
L_007322bf:; BB(0x007322bf);
    /* 007322bf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007322c2: jg 0x7322d3 */ if ((!fZ&&fS==fO)) goto L_007322d3;
L_007322c4:; BB(0x007322c4);
    /* 007322c4: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x7322c9u); f_005c443c();
    /* 007322c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007322cb: jne 0x7322d3 */ if (!fZ) goto L_007322d3;
L_007322cd:; BB(0x007322cd);
    /* 007322cd: mov eax, 1 */ r_eax = 0x1u;
    /* 007322d2: ret  */ FN_RET(0x007322b0); r_esp += 4; return;
L_007322d3:; BB(0x007322d3);
    /* 007322d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007322d5: ret  */ FN_RET(0x007322b0); r_esp += 4; return;
}

void f_007322d8(void) /* sub_7322D8 */
{
    FN_ENTER(0x007322d8);
    /* 007322d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007322d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007322db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007322dd: call 0x7322fc */ r_esp -= 4; W32(r_esp, 0x7322e2u); f_007322fc();
    /* 007322e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007322e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007322e8: jne 0x7322ee */ if (!fZ) goto L_007322ee;
L_007322ea:; BB(0x007322ea);
    /* 007322ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007322eb: ret 4 */ FN_RET(0x007322d8); r_esp += 8; return;
L_007322ee:; BB(0x007322ee);
    /* 007322ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007322ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7322f4u); f_005c2f74();
    /* 007322f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007322f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007322f6: ret 4 */ FN_RET(0x007322d8); r_esp += 8; return;
}

void f_007322fc(void) /* sub_7322FC */
{
    FN_ENTER(0x007322fc);
    /* 007322fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007322fd: mov ebp, esp */ r_ebp = r_esp;
    /* 007322ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00732301: push 0x8f14dc */ { u32 v = 0x8f14dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00732306: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073230c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073230d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00732314: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00732317: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073231a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073231d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00732320: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00732323: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00732326: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073232d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00732330: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 00732333: mov dword ptr [ecx], 0xb407e8 */ W32((u32)(r_ecx), 0xb407e8u);
    /* 00732339: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073233b: je 0x732359 */ if (fZ) goto L_00732359;
L_0073233d:; BB(0x0073233d);
    /* 0073233d: push dword ptr [ecx + 0x54] */ { u32 v = R32((u32)(r_ecx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732340: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x732345u); f_0068d5a8();
    /* 00732345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00732346: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732348: je 0x732356 */ if (fZ) goto L_00732356;
L_0073234a:; BB(0x0073234a);
    /* 0073234a: mov ecx, eax */ r_ecx = r_eax;
    /* 0073234c: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x732351u); f_00693728();
    /* 00732351: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00732354: jmp 0x732359 */ goto L_00732359;
L_00732356:; BB(0x00732356);
    /* 00732356: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00732359:; BB(0x00732359);
    /* 00732359: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x73235eu); f_0078ba3c();
    /* 0073235e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00732361: call 0x73238c */ r_esp -= 4; W32(r_esp, 0x732366u); f_0073238c();
    /* 00732366: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00732369: call 0x78b33c */ r_esp -= 4; W32(r_esp, 0x73236eu); f_0078b33c();
    /* 0073236e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00732375: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00732378: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x73237du); f_008171e8();
    /* 0073237d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00732380: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00732387: mov esp, ebp */ r_esp = r_ebp;
    /* 00732389: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073238a: ret  */ FN_RET(0x007322fc); r_esp += 4; return;
}

void f_0073238c(void) /* sub_73238C */
{
    FN_ENTER(0x0073238c);
    /* 0073238c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0073238f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00732391: je 0x7323a7 */ if (fZ) goto L_007323a7;
L_00732393:; BB(0x00732393);
    /* 00732393: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00732397: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073239c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007323a0: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_007323a7:; BB(0x007323a7);
    /* 007323a7: ret  */ FN_RET(0x0073238c); r_esp += 4; return;
}

void f_007323a8(void) /* sub_7323A8 */
{
    FN_ENTER(0x007323a8);
    /* 007323a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007323a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007323aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007323ab: mov edi, ecx */ r_edi = r_ecx;
    /* 007323ad: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 007323b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007323b2: je 0x732464 */ if (fZ) goto L_00732464;
L_007323b8:; BB(0x007323b8);
    /* 007323b8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007323ba: jne 0x732464 */ if (!fZ) goto L_00732464;
L_007323c0:; BB(0x007323c0);
    /* 007323c0: mov esi, dword ptr [edi + 0x1c] */ r_esi = R32((u32)(r_edi+0x1cu));
    /* 007323c3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007323c5: je 0x732464 */ if (fZ) goto L_00732464;
L_007323cb:; BB(0x007323cb);
    /* 007323cb: mov ecx, esi */ r_ecx = r_esi;
    /* 007323cd: call 0x739dec */ r_esp -= 4; W32(r_esp, 0x7323d2u); f_00739dec();
    /* 007323d2: mov word ptr [edi + 0x52], ax */ W16((u32)(r_edi+0x52u), (u16)r_eax);
    /* 007323d6: mov ecx, esi */ r_ecx = r_esi;
    /* 007323d8: call 0x739e0c */ r_esp -= 4; W32(r_esp, 0x7323ddu); f_00739e0c();
    /* 007323dd: mov ebx, eax */ r_ebx = r_eax;
    /* 007323df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007323e0: mov ecx, edi */ r_ecx = r_edi;
    /* 007323e2: call 0x73249c */ r_esp -= 4; W32(r_esp, 0x7323e7u); f_0073249c();
    /* 007323e7: mov ecx, esi */ r_ecx = r_esi;
    /* 007323e9: call 0x739dc4 */ r_esp -= 4; W32(r_esp, 0x7323eeu); f_00739dc4();
    /* 007323ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007323f0: je 0x732429 */ if (fZ) goto L_00732429;
L_007323f2:; BB(0x007323f2);
    /* 007323f2: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 007323f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007323f6: mov ecx, edi */ r_ecx = r_edi;
    /* 007323f8: call 0x732910 */ r_esp -= 4; W32(r_esp, 0x7323fdu); f_00732910();
    /* 007323fd: movsx esi, word ptr [edi + 0x52] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x52u));
    /* 00732401: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 00732404: mov edx, dword ptr [edx + esi*8 + 4] */ r_edx = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 00732408: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073240a: je 0x732474 */ if (fZ) goto L_00732474;
L_0073240c:; BB(0x0073240c);
    /* 0073240c: add word ptr [edi + 0x50], 1 */ { u32 ad = (u32)(r_edi+0x50u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00732411: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 00732414: mov ecx, edi */ r_ecx = r_edi;
    /* 00732416: call 0x7332f8 */ r_esp -= 4; W32(r_esp, 0x73241bu); f_007332f8();
    /* 0073241b: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073241e: mov ecx, edi */ r_ecx = r_edi;
    /* 00732420: call 0x733320 */ r_esp -= 4; W32(r_esp, 0x732425u); f_00733320();
    /* 00732425: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00732426: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00732427: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00732428: ret  */ FN_RET(0x007323a8); r_esp += 4; return;
L_00732429:; BB(0x00732429);
    /* 00732429: mov ecx, esi */ r_ecx = r_esi;
    /* 0073242b: call 0x739dcc */ r_esp -= 4; W32(r_esp, 0x732430u); f_00739dcc();
    /* 00732430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732432: je 0x732468 */ if (fZ) goto L_00732468;
L_00732434:; BB(0x00732434);
    /* 00732434: movsx edx, word ptr [edi + 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x50u));
    /* 00732438: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073243a: jle 0x73248e */ if ((fZ||fS!=fO)) goto L_0073248e;
L_0073243c:; BB(0x0073243c);
    /* 0073243c: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 0073243f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732440: mov ecx, edi */ r_ecx = r_edi;
    /* 00732442: call 0x732910 */ r_esp -= 4; W32(r_esp, 0x732447u); f_00732910();
    /* 00732447: add word ptr [edi + 0x50], -1 */ { u32 ad = (u32)(r_edi+0x50u);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0073244c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073244e: call 0x732508 */ r_esp -= 4; W32(r_esp, 0x732453u); f_00732508();
    /* 00732453: mov ecx, edi */ r_ecx = r_edi;
    /* 00732455: call 0x732514 */ r_esp -= 4; W32(r_esp, 0x73245au); f_00732514();
    /* 0073245a: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073245d: mov ecx, edi */ r_ecx = r_edi;
    /* 0073245f: call 0x732534 */ r_esp -= 4; W32(r_esp, 0x732464u); f_00732534();
L_00732464:; BB(0x00732464);
    /* 00732464: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00732465: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00732466: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00732467: ret  */ FN_RET(0x007323a8); r_esp += 4; return;
L_00732468:; BB(0x00732468);
    /* 00732468: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073246a: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x73246fu); f_00791748();
    /* 0073246f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00732470: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00732471: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00732472: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00732473: ret  */ FN_RET(0x007323a8); r_esp += 4; return;
L_00732474:; BB(0x00732474);
    /* 00732474: mov ecx, edi */ r_ecx = r_edi;
    /* 00732476: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x73247bu); f_0078ba3c();
    /* 0073247b: mov ecx, edi */ r_ecx = r_edi;
    /* 0073247d: call 0x732934 */ r_esp -= 4; W32(r_esp, 0x732482u); f_00732934();
    /* 00732482: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00732483: mov ecx, edi */ r_ecx = r_edi;
    /* 00732485: call 0x732960 */ r_esp -= 4; W32(r_esp, 0x73248au); f_00732960();
    /* 0073248a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073248b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073248c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073248d: ret  */ FN_RET(0x007323a8); r_esp += 4; return;
L_0073248e:; BB(0x0073248e);
    /* 0073248e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00732490: mov ecx, edi */ r_ecx = r_edi;
    /* 00732492: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x732495u); call_ind(t); }
    /* 00732495: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00732496: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00732497: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00732498: ret  */ FN_RET(0x007323a8); r_esp += 4; return;
}

void f_0073249c(void) /* sub_73249C */
{
    FN_ENTER(0x0073249c);
    /* 0073249c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073249d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073249e: mov edi, ecx */ r_edi = r_ecx;
    /* 007324a0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007324a4: cmp ebp, dword ptr [edi + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007324a7: je 0x7324c8 */ if (fZ) goto L_007324c8;
L_007324a9:; BB(0x007324a9);
    /* 007324a9: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 007324ac: mov dword ptr [edi + 0x48], ebp */ W32((u32)(r_edi+0x48u), r_ebp);
    /* 007324af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007324b1: je 0x7324cd */ if (fZ) goto L_007324cd;
L_007324b3:; BB(0x007324b3);
    /* 007324b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007324b4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7324b9u); f_0079317c();
    /* 007324b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007324ba: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007324bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007324c0: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 007324c3: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7324c8u); f_0073ae38();
L_007324c8:; BB(0x007324c8);
    /* 007324c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007324c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007324ca: ret 4 */ FN_RET(0x0073249c); r_esp += 8; return;
L_007324cd:; BB(0x007324cd);
    /* 007324cd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007324cf: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7324d4u); f_0073ec50();
    /* 007324d4: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007324d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007324d9: push 0x971100 */ { u32 v = 0x971100u; r_esp -= 4; W32(r_esp, v); }
    /* 007324de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007324df: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x7324e4u); f_0073aa40();
    /* 007324e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007324e7: push 0x47434f00 */ { u32 v = 0x47434f00u; r_esp -= 4; W32(r_esp, v); }
    /* 007324ec: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 007324ef: mov ecx, eax */ r_ecx = r_eax;
    /* 007324f1: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7324f6u); f_00712624();
    /* 007324f6: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007324f9: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007324fc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x732501u); f_0061cdb0();
    /* 00732501: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732504: jmp 0x7324b3 */ goto L_007324b3;
}

void f_00732508(void) /* sub_732508 */
{
    FN_ENTER(0x00732508);
    /* 00732508: movsx eax, word ptr [ecx + 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x50u));
    /* 0073250c: mov edx, dword ptr [ecx + eax*8 + 0x2c] */ r_edx = R32((u32)(r_ecx+r_eax*8+0x2cu));
    /* 00732510: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00732513: ret  */ FN_RET(0x00732508); r_esp += 4; return;
}

void f_00732514(void) /* sub_732514 */
{
    FN_ENTER(0x00732514);
    /* 00732514: movsx edx, word ptr [ecx + 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x50u));
    /* 00732518: mov eax, dword ptr [ecx + edx*8 + 0x2c] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x2cu));
    /* 0073251c: cmp eax, dword ptr [ecx + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073251f: je 0x732528 */ if (fZ) goto L_00732528;
L_00732521:; BB(0x00732521);
    /* 00732521: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00732523: mov word ptr [ecx + 0x52], ax */ W16((u32)(r_ecx+0x52u), (u16)r_eax);
    /* 00732527: ret  */ FN_RET(0x00732514); r_esp += 4; return;
L_00732528:; BB(0x00732528);
    /* 00732528: movzx eax, word ptr [ecx + edx*8 + 0x28] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*8+0x28u));
    /* 0073252d: mov word ptr [ecx + 0x52], ax */ W16((u32)(r_ecx+0x52u), (u16)r_eax);
    /* 00732531: ret  */ FN_RET(0x00732514); r_esp += 4; return;
}

void f_00732520(void)
{
    FN_ENTER(0x00732520);
    /* 00732520: pop es */ UNSUP(0x00732520, "pop es");
    /* 00732521: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00732523: mov word ptr [ecx + 0x52], ax */ W16((u32)(r_ecx+0x52u), (u16)r_eax);
    /* 00732527: ret  */ FN_RET(0x00732520); r_esp += 4; return;
}

void f_00732534(void) /* sub_732534 */
{
    FN_ENTER(0x00732534);
    /* 00732534: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00732535: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00732536: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00732537: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00732538: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073253b: mov esi, ecx */ r_esi = r_ecx;
    /* 0073253d: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00732540: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732542: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00732546: je 0x7325f2 */ if (fZ) goto L_007325f2;
L_0073254c:; BB(0x0073254c);
    /* 0073254c: call 0x739f74 */ r_esp -= 4; W32(r_esp, 0x732551u); f_00739f74();
    /* 00732551: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00732554: call 0x739ddc */ r_esp -= 4; W32(r_esp, 0x732559u); f_00739ddc();
    /* 00732559: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 0073255c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073255e: je 0x7325fc */ if (fZ) goto L_007325fc;
L_00732564:; BB(0x00732564);
    /* 00732564: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00732566: mov ebp, edi */ r_ebp = r_edi;
    /* 00732568: mov edi, eax */ r_edi = r_eax;
L_0073256a:; BB(0x0073256a);
    /* 0073256a: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0073256e: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00732572: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732575: je 0x7325c8 */ if (fZ) goto L_007325c8;
L_00732577:; BB(0x00732577);
    /* 00732577: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073257a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0073257e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073257f: mov ecx, esi */ r_ecx = r_esi;
    /* 00732581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732582: call 0x732620 */ r_esp -= 4; W32(r_esp, 0x732587u); f_00732620();
    /* 00732587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732589: je 0x7325bd */ if (fZ) goto L_007325bd;
L_0073258b:; BB(0x0073258b);
    /* 0073258b: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 0073258f: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00732593: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732595: je 0x7325a3 */ if (fZ) goto L_007325a3;
L_00732597:; BB(0x00732597);
    /* 00732597: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00732598: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073259a: call 0x739d60 */ r_esp -= 4; W32(r_esp, 0x73259fu); f_00739d60();
    /* 0073259f: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
L_007325a3:; BB(0x007325a3);
    /* 007325a3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007325a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007325a9: je 0x7325b5 */ if (fZ) goto L_007325b5;
L_007325ab:; BB(0x007325ab);
    /* 007325ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325ae: call 0x739ad4 */ r_esp -= 4; W32(r_esp, 0x7325b3u); f_00739ad4();
    /* 007325b3: jmp 0x7325bd */ goto L_007325bd;
L_007325b5:; BB(0x007325b5);
    /* 007325b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325b8: call 0x739ab4 */ r_esp -= 4; W32(r_esp, 0x7325bdu); f_00739ab4();
L_007325bd:; BB(0x007325bd);
    /* 007325bd: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007325c0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007325c3: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007325c6: jl 0x73256a */ if ((fS!=fO)) goto L_0073256a;
L_007325c8:; BB(0x007325c8);
    /* 007325c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325ca: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x7325cfu); f_00738f70();
    /* 007325cf: movsx edx, word ptr [esi + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x52u));
    /* 007325d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007325d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325d6: call 0x739df4 */ r_esp -= 4; W32(r_esp, 0x7325dbu); f_00739df4();
    /* 007325db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325dd: call 0x739e0c */ r_esp -= 4; W32(r_esp, 0x7325e2u); f_00739e0c();
    /* 007325e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325e3: mov ecx, esi */ r_ecx = r_esi;
    /* 007325e5: call 0x73249c */ r_esp -= 4; W32(r_esp, 0x7325eau); f_0073249c();
    /* 007325ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007325ec: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7325f1u); f_00791748();
    /* 007325f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007325f2:; BB(0x007325f2);
    /* 007325f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007325f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007325f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007325f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007325f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007325f9: ret 4 */ FN_RET(0x00732534); r_esp += 8; return;
L_007325fc:; BB(0x007325fc);
    /* 007325fc: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007325fe: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x732603u); f_0073ec50();
    /* 00732603: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732607: call 0x738e40 */ r_esp -= 4; W32(r_esp, 0x73260cu); f_00738e40();
    /* 0073260c: mov ebx, eax */ r_ebx = r_eax;
    /* 0073260e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732611: mov dword ptr [esi + 0x48], 0x30 */ W32((u32)(r_esi+0x48u), 0x30u);
    /* 00732618: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 0073261b: jmp 0x732564 */ goto L_00732564;
}

void f_0073253a(void)
{
    FN_ENTER(0x0073253a);
    /* 0073253a: or byte ptr [ebx + 0x1c4e8bf1], cl */ { u32 ad = (u32)(r_ebx+0x1c4e8bf1u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00732540: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732542: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00732546: je 0x7325f2 */ if (fZ) goto L_007325f2;
L_0073254c:; BB(0x0073254c);
    /* 0073254c: call 0x739f74 */ r_esp -= 4; W32(r_esp, 0x732551u); f_00739f74();
    /* 00732551: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00732554: call 0x739ddc */ r_esp -= 4; W32(r_esp, 0x732559u); f_00739ddc();
    /* 00732559: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 0073255c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073255e: je 0x7325fc */ if (fZ) goto L_007325fc;
L_00732564:; BB(0x00732564);
    /* 00732564: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00732566: mov ebp, edi */ r_ebp = r_edi;
    /* 00732568: mov edi, eax */ r_edi = r_eax;
L_0073256a:; BB(0x0073256a);
    /* 0073256a: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0073256e: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00732572: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732575: je 0x7325c8 */ if (fZ) goto L_007325c8;
L_00732577:; BB(0x00732577);
    /* 00732577: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073257a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0073257e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073257f: mov ecx, esi */ r_ecx = r_esi;
    /* 00732581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732582: call 0x732620 */ r_esp -= 4; W32(r_esp, 0x732587u); f_00732620();
    /* 00732587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732589: je 0x7325bd */ if (fZ) goto L_007325bd;
L_0073258b:; BB(0x0073258b);
    /* 0073258b: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 0073258f: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00732593: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732595: je 0x7325a3 */ if (fZ) goto L_007325a3;
L_00732597:; BB(0x00732597);
    /* 00732597: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00732598: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073259a: call 0x739d60 */ r_esp -= 4; W32(r_esp, 0x73259fu); f_00739d60();
    /* 0073259f: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
L_007325a3:; BB(0x007325a3);
    /* 007325a3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007325a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007325a9: je 0x7325b5 */ if (fZ) goto L_007325b5;
L_007325ab:; BB(0x007325ab);
    /* 007325ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325ae: call 0x739ad4 */ r_esp -= 4; W32(r_esp, 0x7325b3u); f_00739ad4();
    /* 007325b3: jmp 0x7325bd */ goto L_007325bd;
L_007325b5:; BB(0x007325b5);
    /* 007325b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325b8: call 0x739ab4 */ r_esp -= 4; W32(r_esp, 0x7325bdu); f_00739ab4();
L_007325bd:; BB(0x007325bd);
    /* 007325bd: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007325c0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007325c3: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007325c6: jl 0x73256a */ if ((fS!=fO)) goto L_0073256a;
L_007325c8:; BB(0x007325c8);
    /* 007325c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325ca: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x7325cfu); f_00738f70();
    /* 007325cf: movsx edx, word ptr [esi + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x52u));
    /* 007325d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007325d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325d6: call 0x739df4 */ r_esp -= 4; W32(r_esp, 0x7325dbu); f_00739df4();
    /* 007325db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325dd: call 0x739e0c */ r_esp -= 4; W32(r_esp, 0x7325e2u); f_00739e0c();
    /* 007325e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325e3: mov ecx, esi */ r_ecx = r_esi;
    /* 007325e5: call 0x73249c */ r_esp -= 4; W32(r_esp, 0x7325eau); f_0073249c();
    /* 007325ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007325ec: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7325f1u); f_00791748();
    /* 007325f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007325f2:; BB(0x007325f2);
    /* 007325f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007325f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007325f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007325f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007325f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007325f9: ret 4 */ FN_RET(0x0073253a); r_esp += 8; return;
L_007325fc:; BB(0x007325fc);
    /* 007325fc: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007325fe: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x732603u); f_0073ec50();
    /* 00732603: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732607: call 0x738e40 */ r_esp -= 4; W32(r_esp, 0x73260cu); f_00738e40();
    /* 0073260c: mov ebx, eax */ r_ebx = r_eax;
    /* 0073260e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732611: mov dword ptr [esi + 0x48], 0x30 */ W32((u32)(r_esi+0x48u), 0x30u);
    /* 00732618: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 0073261b: jmp 0x732564 */ goto L_00732564;
}

void f_0073255c(void)
{
    FN_ENTER(0x0073255c);
    /* 0073255c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073255e: je 0x7325fc */ if (fZ) goto L_007325fc;
L_00732564:; BB(0x00732564);
    /* 00732564: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00732566: mov ebp, edi */ r_ebp = r_edi;
    /* 00732568: mov edi, eax */ r_edi = r_eax;
L_0073256a:; BB(0x0073256a);
    /* 0073256a: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0073256e: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00732572: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732575: je 0x7325c8 */ if (fZ) goto L_007325c8;
L_00732577:; BB(0x00732577);
    /* 00732577: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0073257a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0073257e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073257f: mov ecx, esi */ r_ecx = r_esi;
    /* 00732581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732582: call 0x732620 */ r_esp -= 4; W32(r_esp, 0x732587u); f_00732620();
    /* 00732587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732589: je 0x7325bd */ if (fZ) goto L_007325bd;
L_0073258b:; BB(0x0073258b);
    /* 0073258b: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 0073258f: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00732593: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732595: je 0x7325a3 */ if (fZ) goto L_007325a3;
L_00732597:; BB(0x00732597);
    /* 00732597: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00732598: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073259a: call 0x739d60 */ r_esp -= 4; W32(r_esp, 0x73259fu); f_00739d60();
    /* 0073259f: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
L_007325a3:; BB(0x007325a3);
    /* 007325a3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007325a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007325a9: je 0x7325b5 */ if (fZ) goto L_007325b5;
L_007325ab:; BB(0x007325ab);
    /* 007325ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325ae: call 0x739ad4 */ r_esp -= 4; W32(r_esp, 0x7325b3u); f_00739ad4();
    /* 007325b3: jmp 0x7325bd */ goto L_007325bd;
L_007325b5:; BB(0x007325b5);
    /* 007325b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325b8: call 0x739ab4 */ r_esp -= 4; W32(r_esp, 0x7325bdu); f_00739ab4();
L_007325bd:; BB(0x007325bd);
    /* 007325bd: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007325c0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007325c3: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007325c6: jl 0x73256a */ if ((fS!=fO)) goto L_0073256a;
L_007325c8:; BB(0x007325c8);
    /* 007325c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325ca: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x7325cfu); f_00738f70();
    /* 007325cf: movsx edx, word ptr [esi + 0x52] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x52u));
    /* 007325d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007325d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325d6: call 0x739df4 */ r_esp -= 4; W32(r_esp, 0x7325dbu); f_00739df4();
    /* 007325db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007325dd: call 0x739e0c */ r_esp -= 4; W32(r_esp, 0x7325e2u); f_00739e0c();
    /* 007325e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007325e3: mov ecx, esi */ r_ecx = r_esi;
    /* 007325e5: call 0x73249c */ r_esp -= 4; W32(r_esp, 0x7325eau); f_0073249c();
    /* 007325ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007325ec: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7325f1u); f_00791748();
    /* 007325f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007325f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007325f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007325f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007325f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007325f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007325f9: ret 4 */ FN_RET(0x0073255c); r_esp += 8; return;
L_007325fc:; BB(0x007325fc);
    /* 007325fc: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007325fe: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x732603u); f_0073ec50();
    /* 00732603: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732607: call 0x738e40 */ r_esp -= 4; W32(r_esp, 0x73260cu); f_00738e40();
    /* 0073260c: mov ebx, eax */ r_ebx = r_eax;
    /* 0073260e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732611: mov dword ptr [esi + 0x48], 0x30 */ W32((u32)(r_esi+0x48u), 0x30u);
    /* 00732618: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 0073261b: jmp 0x732564 */ goto L_00732564;
}

void f_00732620(void) /* sub_732620 */
{
    FN_ENTER(0x00732620);
    /* 00732620: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00732621: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00732622: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00732623: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00732627: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0073262b: push dword ptr [ecx + 0x54] */ { u32 v = R32((u32)(r_ecx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073262e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x732633u); f_0068d5a8();
    /* 00732633: mov ebx, eax */ r_ebx = r_eax;
    /* 00732635: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732638: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073263a: je 0x73287c */ if (fZ) goto L_0073287c;
L_00732640:; BB(0x00732640);
    /* 00732640: mov edx, ebx */ r_edx = r_ebx;
    /* 00732642: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00732648: je 0x73287c */ if (fZ) goto L_0073287c;
L_0073264e:; BB(0x0073264e);
    /* 0073264e: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 00732654: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x732659u); f_00807ac0();
    /* 00732659: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0073265c: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0073265f: ja 0x7328bc */ if ((!fC&&!fZ)) goto L_007328bc;
L_00732665:; BB(0x00732665);
    /* 00732665: mov edx, dword ptr [edx*4 + 0x971120] */ r_edx = R32((u32)(r_edx*4+0x971120u));
    /* 0073266c: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0073287c:; BB(0x0073287c);
    /* 0073287c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073287e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073287f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00732880: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00732881: ret 8 */ FN_RET(0x00732620); r_esp += 12; return;
L_007328bc:; BB(0x007328bc);
    /* 007328bc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x00732620); r_esp += 12; return;
}

void f_0073266e(void)
{
    FN_ENTER(0x0073266e);
    /* 0073266e: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 00732674: mov eax, dword ptr [edx + 0x2b8] */ r_eax = R32((u32)(r_edx+0x2b8u));
    /* 0073267a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073267c: jne 0x7326a0 */ if (!fZ) goto L_007326a0;
L_0073267e:; BB(0x0073267e);
    /* 0073267e: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 00732684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732686: jne 0x7326a0 */ if (!fZ) goto L_007326a0;
L_00732688:; BB(0x00732688);
    /* 00732688: mov eax, dword ptr [edx + 0x2c0] */ r_eax = R32((u32)(r_edx+0x2c0u));
    /* 0073268e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732690: jne 0x7326a0 */ if (!fZ) goto L_007326a0;
L_00732692:; BB(0x00732692);
    /* 00732692: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 00732698: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073269a: jne 0x7326a0 */ if (!fZ) goto L_007326a0;
L_0073269c:; BB(0x0073269c);
    /* 0073269c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073269e: jmp 0x7326a5 */ goto L_007326a5;
L_007326a0:; BB(0x007326a0);
    /* 007326a0: mov eax, 1 */ r_eax = 0x1u;
L_007326a5:; BB(0x007326a5);
    /* 007326a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007326a7: jne 0x7326af */ if (!fZ) goto L_007326af;
L_007326a9:; BB(0x007326a9);
    /* 007326a9: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_007326af:; BB(0x007326af);
    /* 007326af: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x7326b4u); f_0080a640();
    /* 007326b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007326b6: jne 0x7326ca */ if (!fZ) goto L_007326ca;
L_007326b8:; BB(0x007326b8);
    /* 007326b8: call 0x694ca0 */ r_esp -= 4; W32(r_esp, 0x7326bdu); f_00694ca0();
    /* 007326bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007326bf: jne 0x7326ca */ if (!fZ) goto L_007326ca;
L_007326c1:; BB(0x007326c1);
    /* 007326c1: call 0x694cb4 */ r_esp -= 4; W32(r_esp, 0x7326c6u); f_00694cb4();
    /* 007326c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007326c8: je 0x7326db */ if (fZ) goto L_007326db;
L_007326ca:; BB(0x007326ca);
    /* 007326ca: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 007326d0: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007326d4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007326d6: jmp 0x7328be */ goto L_007328be;
L_007326db:; BB(0x007326db);
    /* 007326db: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007326dd: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x0073266e); r_esp += 12; return;
}

void f_007326e2(void)
{
    FN_ENTER(0x007326e2);
    /* 007326e2: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 007326e7: mov edx, dword ptr [eax + 0x2b8] */ r_edx = R32((u32)(r_eax+0x2b8u));
    /* 007326ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007326ef: jne 0x732713 */ if (!fZ) goto L_00732713;
L_007326f1:; BB(0x007326f1);
    /* 007326f1: mov edx, dword ptr [eax + 0x2bc] */ r_edx = R32((u32)(r_eax+0x2bcu));
    /* 007326f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007326f9: jne 0x732713 */ if (!fZ) goto L_00732713;
L_007326fb:; BB(0x007326fb);
    /* 007326fb: mov edx, dword ptr [eax + 0x2c0] */ r_edx = R32((u32)(r_eax+0x2c0u));
    /* 00732701: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732703: jne 0x732713 */ if (!fZ) goto L_00732713;
L_00732705:; BB(0x00732705);
    /* 00732705: mov edx, dword ptr [eax + 0x2c4] */ r_edx = R32((u32)(r_eax+0x2c4u));
    /* 0073270b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073270d: jne 0x732713 */ if (!fZ) goto L_00732713;
L_0073270f:; BB(0x0073270f);
    /* 0073270f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00732711: jmp 0x732718 */ goto L_00732718;
L_00732713:; BB(0x00732713);
    /* 00732713: mov edx, 1 */ r_edx = 0x1u;
L_00732718:; BB(0x00732718);
    /* 00732718: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073271a: jne 0x732726 */ if (!fZ) goto L_00732726;
L_0073271c:; BB(0x0073271c);
    /* 0073271c: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00732722: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00732724: jmp 0x732728 */ goto L_00732728;
L_00732726:; BB(0x00732726);
    /* 00732726: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
L_00732728:; BB(0x00732728);
    /* 00732728: movzx eax, byte ptr [eax + 0x2c8] */ r_eax = (u32)R8((u32)(r_eax+0x2c8u));
    /* 0073272f: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00732732: jge 0x7328be */ if ((fS==fO)) goto L_007328be;
L_00732738:; BB(0x00732738);
    /* 00732738: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 0073273e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00732740: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x007326e2); r_esp += 12; return;
}

void f_00732745(void)
{
    FN_ENTER(0x00732745);
    /* 00732745: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 0073274b: mov eax, dword ptr [edx + 0x2b8] */ r_eax = R32((u32)(r_edx+0x2b8u));
    /* 00732751: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732753: jne 0x732777 */ if (!fZ) goto L_00732777;
L_00732755:; BB(0x00732755);
    /* 00732755: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 0073275b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073275d: jne 0x732777 */ if (!fZ) goto L_00732777;
L_0073275f:; BB(0x0073275f);
    /* 0073275f: mov eax, dword ptr [edx + 0x2c0] */ r_eax = R32((u32)(r_edx+0x2c0u));
    /* 00732765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732767: jne 0x732777 */ if (!fZ) goto L_00732777;
L_00732769:; BB(0x00732769);
    /* 00732769: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 0073276f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732771: jne 0x732777 */ if (!fZ) goto L_00732777;
L_00732773:; BB(0x00732773);
    /* 00732773: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00732775: jmp 0x73277c */ goto L_0073277c;
L_00732777:; BB(0x00732777);
    /* 00732777: mov eax, 1 */ r_eax = 0x1u;
L_0073277c:; BB(0x0073277c);
    /* 0073277c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073277e: jne 0x73278d */ if (!fZ) goto L_0073278d;
L_00732780:; BB(0x00732780);
    /* 00732780: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00732786: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00732788: jmp 0x7328be */ goto L_007328be;
L_0073278d:; BB(0x0073278d);
    /* 0073278d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0073278f: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x00732745); r_esp += 12; return;
}

void f_00732794(void)
{
    FN_ENTER(0x00732794);
    /* 00732794: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x732799u); f_007a61a4();
    /* 00732799: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073279c: je 0x7328d1 */ if (fZ) goto L_007328d1;
L_007327a2:; BB(0x007327a2);
    /* 007327a2: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 007327a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007327aa: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x00732794); r_esp += 12; return;
L_007328d1:; BB(0x007328d1);
    /* 007328d1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007328d3: jmp 0x7328be */ goto L_007328be;
}

void f_007327af(void)
{
    FN_ENTER(0x007327af);
    /* 007327af: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7327b4u); f_007a61a4();
    /* 007327b4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007327b7: je 0x7328d5 */ if (fZ) goto L_007328d5;
L_007327bd:; BB(0x007327bd);
    /* 007327bd: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007327c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007327c3: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 007327c9: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x007327af); r_esp += 12; return;
L_007328d5:; BB(0x007328d5);
    /* 007328d5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007328db: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x7328e0u); f_00825abc();
    /* 007328e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007328e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007328e3: jne 0x7328ef */ if (!fZ) goto L_007328ef;
L_007328e5:; BB(0x007328e5);
    /* 007328e5: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 007328eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007328ed: jmp 0x7328be */ goto L_007328be;
L_007328ef:; BB(0x007328ef);
    /* 007328ef: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007328f1: jmp 0x7328be */ goto L_007328be;
}

void f_007327ce(void)
{
    FN_ENTER(0x007327ce);
    /* 007327ce: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7327d3u); f_006dc358();
    /* 007327d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007327d5: je 0x7327e8 */ if (fZ) goto L_007327e8;
L_007327d7:; BB(0x007327d7);
    /* 007327d7: add word ptr [edi], -1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007327db: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007327dd: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 007327e3: jmp 0x7328be */ goto L_007328be;
L_007327e8:; BB(0x007327e8);
    /* 007327e8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007327ea: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x007327ce); r_esp += 12; return;
}

void f_007327ef(void)
{
    FN_ENTER(0x007327ef);
    /* 007327ef: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7327f4u); f_006dc358();
    /* 007327f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007327f6: je 0x732809 */ if (fZ) goto L_00732809;
L_007327f8:; BB(0x007327f8);
    /* 007327f8: add word ptr [edi], -1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007327fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007327fe: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00732804: jmp 0x7328be */ goto L_007328be;
L_00732809:; BB(0x00732809);
    /* 00732809: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x73280eu); f_007a61a4();
    /* 0073280e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732811: je 0x732827 */ if (fZ) goto L_00732827;
L_00732813:; BB(0x00732813);
    /* 00732813: mov eax, dword ptr [0xab59b8] */ r_eax = R32((u32)(0xab59b8u));
    /* 00732818: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073281a: jle 0x7328f3 */ if ((fZ||fS!=fO)) goto L_007328f3;
L_00732820:; BB(0x00732820);
    /* 00732820: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00732822: jmp 0x7328be */ goto L_007328be;
L_00732827:; BB(0x00732827);
    /* 00732827: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00732829: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x007327ef); r_esp += 12; return;
L_007328f3:; BB(0x007328f3);
    /* 007328f3: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 007328f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007328fb: jmp 0x7328be */ goto L_007328be;
}

void f_0073282e(void)
{
    FN_ENTER(0x0073282e);
    /* 0073282e: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00732833: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732836: je 0x7328fd */ if (fZ) goto L_007328fd;
L_0073283c:; BB(0x0073283c);
    /* 0073283c: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00732842: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00732844: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x0073282e); r_esp += 12; return;
L_007328fd:; BB(0x007328fd);
    /* 007328fd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007328ff: jmp 0x7328be */ goto L_007328be;
}

void f_00732846(void)
{
    FN_ENTER(0x00732846);
    /* 00732846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732847: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x73284cu); f_00807d8c();
    /* 0073284c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073284d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073284f: jne 0x73285b */ if (!fZ) goto L_0073285b;
L_00732851:; BB(0x00732851);
    /* 00732851: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00732857: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00732859: jmp 0x7328be */ goto L_007328be;
L_0073285b:; BB(0x0073285b);
    /* 0073285b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0073285d: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x00732846); r_esp += 12; return;
}

void f_0073285f(void)
{
    FN_ENTER(0x0073285f);
    /* 0073285f: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x732864u); f_007a61a4();
    /* 00732864: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732867: je 0x732901 */ if (fZ) goto L_00732901;
L_0073286d:; BB(0x0073286d);
    /* 0073286d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0073286f: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x0073285f); r_esp += 12; return;
L_00732901:; BB(0x00732901);
    /* 00732901: mov eax, 8 */ r_eax = 0x8u;
    /* 00732906: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 00732909: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0073290b: jmp 0x7328be */ goto L_007328be;
}

void f_00732871(void)
{
    FN_ENTER(0x00732871);
    /* 00732871: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 00732877: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073287a: je 0x732884 */ if (fZ) goto L_00732884;
L_0073287c:; BB(0x0073287c);
    /* 0073287c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073287e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073287f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00732880: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00732881: ret 8 */ FN_RET(0x00732871); r_esp += 12; return;
L_00732884:; BB(0x00732884);
    /* 00732884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732885: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x73288au); f_00807d8c();
    /* 0073288a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073288b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073288d: jne 0x73289b */ if (!fZ) goto L_0073289b;
L_0073288f:; BB(0x0073288f);
    /* 0073288f: mov eax, 4 */ r_eax = 0x4u;
    /* 00732894: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 00732897: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00732899: jmp 0x7328be */ goto L_007328be;
L_0073289b:; BB(0x0073289b);
    /* 0073289b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0073289d: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x00732871); r_esp += 12; return;
}

void f_0073289f(void)
{
    FN_ENTER(0x0073289f);
    /* 0073289f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007328a1: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x0073289f); r_esp += 12; return;
}

void f_007328a3(void)
{
    FN_ENTER(0x007328a3);
    /* 007328a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007328a4: call 0x8076d4 */ r_esp -= 4; W32(r_esp, 0x7328a9u); f_008076d4();
    /* 007328a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007328aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007328ac: je 0x7328b8 */ if (fZ) goto L_007328b8;
L_007328ae:; BB(0x007328ae);
    /* 007328ae: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 007328b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007328b6: jmp 0x7328be */ goto L_007328be;
L_007328b8:; BB(0x007328b8);
    /* 007328b8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007328ba: jmp 0x7328be */ goto L_007328be;
L_007328be:; BB(0x007328be);
    /* 007328be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007328c0: jne 0x7328c6 */ if (!fZ) goto L_007328c6;
L_007328c2:; BB(0x007328c2);
    /* 007328c2: add word ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
L_007328c6:; BB(0x007328c6);
    /* 007328c6: mov eax, 1 */ r_eax = 0x1u;
    /* 007328cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007328cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007328cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007328ce: ret 8 */ FN_RET(0x007328a3); r_esp += 12; return;
}

void f_00732910(void) /* sub_732910 */
{
    FN_ENTER(0x00732910);
    /* 00732910: movsx eax, word ptr [ecx + 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x50u));
    /* 00732914: movzx edx, word ptr [ecx + 0x52] */ r_edx = (u32)R16((u32)(r_ecx+0x52u));
    /* 00732918: mov word ptr [ecx + eax*8 + 0x28], dx */ W16((u32)(r_ecx+r_eax*8+0x28u), (u16)r_edx);
    /* 0073291d: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 00732922: mov word ptr [ecx + eax*8 + 0x2a], dx */ W16((u32)(r_ecx+r_eax*8+0x2au), (u16)r_edx);
    /* 00732927: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0073292a: mov dword ptr [ecx + eax*8 + 0x2c], edx */ W32((u32)(r_ecx+r_eax*8+0x2cu), r_edx);
    /* 0073292e: ret 4 */ FN_RET(0x00732910); r_esp += 8; return;
}

void f_00732934(void) /* sub_732934 */
{
    FN_ENTER(0x00732934);
    /* 00732934: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00732935: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00732937: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0073293a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073293c: je 0x73294b */ if (fZ) goto L_0073294b;
L_0073293e:; BB(0x0073293e);
    /* 0073293e: call 0x739e28 */ r_esp -= 4; W32(r_esp, 0x732943u); f_00739e28();
    /* 00732943: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00732946: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x73294bu); f_00738f70();
L_0073294b:; BB(0x0073294b);
    /* 0073294b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073294c: ret  */ FN_RET(0x00732934); r_esp += 4; return;
}

void f_00732950(void) /* sub_732950 */
{
    FN_ENTER(0x00732950);
    /* 00732950: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00732953: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00732955: je 0x73295c */ if (fZ) goto L_0073295c;
L_00732957:; BB(0x00732957);
    /* 00732957: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x73295cu); f_007127c8();
L_0073295c:; BB(0x0073295c);
    /* 0073295c: ret  */ FN_RET(0x00732950); r_esp += 4; return;
}

void f_00732960(void) /* sub_732960 */
{
    FN_ENTER(0x00732960);
    /* 00732960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00732961: mov ebp, esp */ r_ebp = r_esp;
    /* 00732963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00732965: push 0x8f17bc */ { u32 v = 0x8f17bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073296a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00732970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732971: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00732978: sub esp, 0xd8 */ {  u32 a = r_esp; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073297e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00732981: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00732984: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00732987: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0073298a: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0073298d: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00732990: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00732993: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00732996: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 00732999: call 0x73238c */ r_esp -= 4; W32(r_esp, 0x73299eu); f_0073238c();
    /* 0073299e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007329a1: mov dword ptr [eax + 0x58], 0x47447c00 */ W32((u32)(r_eax+0x58u), 0x47447c00u);
    /* 007329a8: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007329ab: ja 0x7331f2 */ if ((!fC&&!fZ)) goto L_007331f2;
L_007329b1:; BB(0x007329b1);
    /* 007329b1: mov eax, dword ptr [ebx*4 + 0x9711e0] */ r_eax = R32((u32)(r_ebx*4+0x9711e0u));
    /* 007329b8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732960); r_esp += 8; return;
}

void f_007329ba(void)
{
    FN_ENTER(0x007329ba);
    /* 007329ba: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007329c1: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 007329c3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7329c8u); f_005caba4();
    /* 007329c8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007329cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007329ce: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007329d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007329d3: je 0x733205 */ if (fZ) goto L_00733205;
L_007329d9:; BB(0x007329d9);
    /* 007329d9: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007329e0: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 007329e7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007329ea: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007329ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007329f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007329f1: call 0x74f1e8 */ r_esp -= 4; W32(r_esp, 0x7329f6u); f_0074f1e8();
    /* 007329f6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007329fd:; BB(0x007329fd);
    /* 007329fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732a00: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732a03: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732a06: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x007329ba); r_esp += 8; return;
L_00733205:; BB(0x00733205);
    /* 00733205: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733207: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073320a: jmp 0x7329fd */ goto L_007329fd;
}

void f_00732a0b(void)
{
    FN_ENTER(0x00732a0b);
    /* 00732a0b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00732a12: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00732a14: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732a19u); f_005caba4();
    /* 00732a19: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732a1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732a1f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00732a22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732a24: je 0x73320f */ if (fZ) goto L_0073320f;
L_00732a2a:; BB(0x00732a2a);
    /* 00732a2a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00732a31: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 00732a38: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732a3b: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732a3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732a42: call 0x74c23c */ r_esp -= 4; W32(r_esp, 0x732a47u); f_0074c23c();
    /* 00732a47: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00732a4e:; BB(0x00732a4e);
    /* 00732a4e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732a51: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732a54: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732a57: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732a0b); r_esp += 8; return;
L_0073320f:; BB(0x0073320f);
    /* 0073320f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733211: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733214: jmp 0x732a4e */ goto L_00732a4e;
}

void f_00732a41(void)
{
    FN_ENTER(0x00732a41);
    /* 00732a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732a42: call 0x74c23c */ r_esp -= 4; W32(r_esp, 0x732a47u); f_0074c23c();
    /* 00732a47: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00732a4e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732a51: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732a54: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732a57: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732a41); r_esp += 8; return;
}

void f_00732a5c(void)
{
    FN_ENTER(0x00732a5c);
    /* 00732a5c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00732a63: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00732a65: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732a6au); f_005caba4();
    /* 00732a6a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732a6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732a70: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00732a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732a75: je 0x733219 */ if (fZ) goto L_00733219;
L_00732a7b:; BB(0x00732a7b);
    /* 00732a7b: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00732a82: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 00732a89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732a8c: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732a8f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732a92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732a93: call 0x74c860 */ r_esp -= 4; W32(r_esp, 0x732a98u); f_0074c860();
    /* 00732a98: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00732a9f:; BB(0x00732a9f);
    /* 00732a9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732aa2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732aa5: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732aa8: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732a5c); r_esp += 8; return;
L_00733219:; BB(0x00733219);
    /* 00733219: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073321b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073321e: jmp 0x732a9f */ goto L_00732a9f;
}

void f_00732aad(void)
{
    FN_ENTER(0x00732aad);
    /* 00732aad: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00732ab4: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00732ab6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732abbu); f_005caba4();
    /* 00732abb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732abe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732ac1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00732ac4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732ac6: je 0x733223 */ if (fZ) goto L_00733223;
L_00732acc:; BB(0x00732acc);
    /* 00732acc: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00732ad3: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 00732ada: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732add: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732ae0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732ae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732ae4: call 0x74d5e8 */ r_esp -= 4; W32(r_esp, 0x732ae9u); f_0074d5e8();
    /* 00732ae9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00732af0:; BB(0x00732af0);
    /* 00732af0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732af3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732af6: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732af9: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732aad); r_esp += 8; return;
L_00733223:; BB(0x00733223);
    /* 00733223: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733225: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733228: jmp 0x732af0 */ goto L_00732af0;
}

void f_00732afe(void)
{
    FN_ENTER(0x00732afe);
    /* 00732afe: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00732b05: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00732b07: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732b0cu); f_005caba4();
    /* 00732b0c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732b0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732b12: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00732b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732b17: je 0x73322d */ if (fZ) goto L_0073322d;
L_00732b1d:; BB(0x00732b1d);
    /* 00732b1d: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00732b24: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 00732b2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732b2e: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732b31: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732b35: call 0x74d8f4 */ r_esp -= 4; W32(r_esp, 0x732b3au); f_0074d8f4();
    /* 00732b3a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00732b41:; BB(0x00732b41);
    /* 00732b41: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732b44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732b47: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732b4a: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732afe); r_esp += 8; return;
L_0073322d:; BB(0x0073322d);
    /* 0073322d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073322f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733232: jmp 0x732b41 */ goto L_00732b41;
}

void f_00732b4f(void)
{
    FN_ENTER(0x00732b4f);
    /* 00732b4f: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 00732b59: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00732b5b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732b60u); f_005caba4();
    /* 00732b60: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732b63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732b66: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00732b6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732b6e: je 0x733237 */ if (fZ) goto L_00733237;
L_00732b74:; BB(0x00732b74);
    /* 00732b74: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 00732b7e: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00732b85: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732b88: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732b8b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732b8f: call 0x7608a8 */ r_esp -= 4; W32(r_esp, 0x732b94u); f_007608a8();
    /* 00732b94: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00732b9e:; BB(0x00732b9e);
    /* 00732b9e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732ba1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732ba4: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732ba7: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732b4f); r_esp += 8; return;
L_00733237:; BB(0x00733237);
    /* 00733237: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733239: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073323c: jmp 0x732b9e */ goto L_00732b9e;
}

void f_00732bac(void)
{
    FN_ENTER(0x00732bac);
    /* 00732bac: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 00732bb6: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00732bbb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732bc0u); f_005caba4();
    /* 00732bc0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732bc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732bc6: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00732bcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732bce: je 0x733241 */ if (fZ) goto L_00733241;
L_00732bd4:; BB(0x00732bd4);
    /* 00732bd4: mov dword ptr [ebp - 0xb4], 1 */ W32((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 00732bde: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00732be5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732be8: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732beb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732bee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732bef: call 0x75efb0 */ r_esp -= 4; W32(r_esp, 0x732bf4u); f_0075efb0();
    /* 00732bf4: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00732bfe:; BB(0x00732bfe);
    /* 00732bfe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732c01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732c04: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732c07: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732bac); r_esp += 8; return;
L_00733241:; BB(0x00733241);
    /* 00733241: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733243: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733246: jmp 0x732bfe */ goto L_00732bfe;
}

void f_00732c0c(void)
{
    FN_ENTER(0x00732c0c);
    /* 00732c0c: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 00732c16: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00732c18: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732c1du); f_005caba4();
    /* 00732c1d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732c20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732c23: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00732c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732c2b: je 0x73324b */ if (fZ) goto L_0073324b;
L_00732c31:; BB(0x00732c31);
    /* 00732c31: mov dword ptr [ebp - 0xbc], 1 */ W32((u32)(r_ebp+0xffffff44u), 0x1u);
    /* 00732c3b: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00732c42: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732c45: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732c48: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732c4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732c4c: call 0x75e958 */ r_esp -= 4; W32(r_esp, 0x732c51u); f_0075e958();
    /* 00732c51: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00732c5b:; BB(0x00732c5b);
    /* 00732c5b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732c5e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732c61: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732c64: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732c0c); r_esp += 8; return;
L_0073324b:; BB(0x0073324b);
    /* 0073324b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073324d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733250: jmp 0x732c5b */ goto L_00732c5b;
}

void f_00732c69(void)
{
    FN_ENTER(0x00732c69);
    /* 00732c69: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
    /* 00732c73: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00732c75: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732c7au); f_005caba4();
    /* 00732c7a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732c7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732c80: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00732c86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732c88: je 0x733255 */ if (fZ) goto L_00733255;
L_00732c8e:; BB(0x00732c8e);
    /* 00732c8e: mov dword ptr [ebp - 0xe4], 1 */ W32((u32)(r_ebp+0xffffff1cu), 0x1u);
    /* 00732c98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00732c9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732ca2: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732ca5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732ca9: call 0x756ff4 */ r_esp -= 4; W32(r_esp, 0x732caeu); f_00756ff4();
    /* 00732cae: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_00732cb8:; BB(0x00732cb8);
    /* 00732cb8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732cbb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732cbe: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732cc1: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732c69); r_esp += 8; return;
L_00733255:; BB(0x00733255);
    /* 00733255: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733257: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073325a: jmp 0x732cb8 */ goto L_00732cb8;
}

void f_00732cc6(void)
{
    FN_ENTER(0x00732cc6);
    /* 00732cc6: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 00732cd0: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00732cd2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732cd7u); f_005caba4();
    /* 00732cd7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732cda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732cdd: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00732ce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732ce5: je 0x73325f */ if (fZ) goto L_0073325f;
L_00732ceb:; BB(0x00732ceb);
    /* 00732ceb: mov dword ptr [ebp - 0xc4], 1 */ W32((u32)(r_ebp+0xffffff3cu), 0x1u);
    /* 00732cf5: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00732cfc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732cff: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732d02: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732d06: call 0x7525bc */ r_esp -= 4; W32(r_esp, 0x732d0bu); f_007525bc();
    /* 00732d0b: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00732d15:; BB(0x00732d15);
    /* 00732d15: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732d18: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732d1b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732d1e: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732cc6); r_esp += 8; return;
L_0073325f:; BB(0x0073325f);
    /* 0073325f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733261: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733264: jmp 0x732d15 */ goto L_00732d15;
}

void f_00732d23(void)
{
    FN_ENTER(0x00732d23);
    /* 00732d23: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00732d2a: push 0x11e8 */ { u32 v = 0x11e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00732d2f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732d34u); f_005caba4();
    /* 00732d34: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732d37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732d3a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00732d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732d3f: je 0x733269 */ if (fZ) goto L_00733269;
L_00732d45:; BB(0x00732d45);
    /* 00732d45: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00732d4c: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 00732d53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732d56: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732d59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732d5d: call 0x750184 */ r_esp -= 4; W32(r_esp, 0x732d62u); f_00750184();
    /* 00732d62: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00732d69:; BB(0x00732d69);
    /* 00732d69: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732d6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732d6f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732d72: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732d23); r_esp += 8; return;
L_00733269:; BB(0x00733269);
    /* 00733269: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073326b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073326e: jmp 0x732d69 */ goto L_00732d69;
}

void f_00732d77(void)
{
    FN_ENTER(0x00732d77);
    /* 00732d77: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 00732d7e: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00732d83: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732d88u); f_005caba4();
    /* 00732d88: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732d8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732d8e: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00732d91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732d93: je 0x733273 */ if (fZ) goto L_00733273;
L_00732d99:; BB(0x00732d99);
    /* 00732d99: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00732da0: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00732da7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732daa: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732dad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732db1: call 0x752114 */ r_esp -= 4; W32(r_esp, 0x732db6u); f_00752114();
    /* 00732db6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00732dbd:; BB(0x00732dbd);
    /* 00732dbd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732dc0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732dc3: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732dc6: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732d77); r_esp += 8; return;
L_00733273:; BB(0x00733273);
    /* 00733273: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733275: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733278: jmp 0x732dbd */ goto L_00732dbd;
}

void f_00732dcb(void)
{
    FN_ENTER(0x00732dcb);
    /* 00732dcb: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00732dd2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00732dd4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732dd9u); f_005caba4();
    /* 00732dd9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732ddc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732ddf: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00732de2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732de4: je 0x73327d */ if (fZ) goto L_0073327d;
L_00732dea:; BB(0x00732dea);
    /* 00732dea: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 00732df1: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 00732df8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732dfb: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732dfe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732e01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732e02: call 0x7558a0 */ r_esp -= 4; W32(r_esp, 0x732e07u); f_007558a0();
    /* 00732e07: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00732e0e:; BB(0x00732e0e);
    /* 00732e0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732e11: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732e14: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732e17: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732dcb); r_esp += 8; return;
L_0073327d:; BB(0x0073327d);
    /* 0073327d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073327f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733282: jmp 0x732e0e */ goto L_00732e0e;
}

void f_00732e1c(void)
{
    FN_ENTER(0x00732e1c);
    /* 00732e1c: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 00732e26: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00732e28: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732e2du); f_005caba4();
    /* 00732e2d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732e30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732e33: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00732e39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732e3b: je 0x733287 */ if (fZ) goto L_00733287;
L_00732e41:; BB(0x00732e41);
    /* 00732e41: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 00732e4b: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00732e52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732e55: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732e58: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732e5c: call 0x75882c */ r_esp -= 4; W32(r_esp, 0x732e61u); f_0075882c();
    /* 00732e61: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00732e6b:; BB(0x00732e6b);
    /* 00732e6b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732e6e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732e71: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732e74: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732e1c); r_esp += 8; return;
L_00733287:; BB(0x00733287);
    /* 00733287: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733289: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0073328c: jmp 0x732e6b */ goto L_00732e6b;
}

void f_00732e79(void)
{
    FN_ENTER(0x00732e79);
    /* 00732e79: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00732e80: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00732e85: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732e8au); f_005caba4();
    /* 00732e8a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732e8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732e90: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00732e93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732e95: je 0x733291 */ if (fZ) goto L_00733291;
L_00732e9b:; BB(0x00732e9b);
    /* 00732e9b: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00732ea2: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 00732ea9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732eac: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732eaf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732eb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732eb3: call 0x754c8c */ r_esp -= 4; W32(r_esp, 0x732eb8u); f_00754c8c();
    /* 00732eb8: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00732ebf:; BB(0x00732ebf);
    /* 00732ebf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732ec2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732ec5: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732ec8: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732e79); r_esp += 8; return;
L_00733291:; BB(0x00733291);
    /* 00733291: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00733293: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00733296: jmp 0x732ebf */ goto L_00732ebf;
}

void f_00732ecd(void)
{
    FN_ENTER(0x00732ecd);
    /* 00732ecd: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 00732ed7: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00732ed9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732edeu); f_005caba4();
    /* 00732ede: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732ee1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732ee4: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00732eea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732eec: je 0x73329b */ if (fZ) goto L_0073329b;
L_00732ef2:; BB(0x00732ef2);
    /* 00732ef2: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 00732efc: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00732f03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732f06: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732f09: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732f0d: call 0x754294 */ r_esp -= 4; W32(r_esp, 0x732f12u); f_00754294();
    /* 00732f12: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00732f1c:; BB(0x00732f1c);
    /* 00732f1c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732f1f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732f22: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732f25: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732ecd); r_esp += 8; return;
L_0073329b:; BB(0x0073329b);
    /* 0073329b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073329d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332a0: jmp 0x732f1c */ goto L_00732f1c;
}

void f_00732f2a(void)
{
    FN_ENTER(0x00732f2a);
    /* 00732f2a: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00732f34: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00732f39: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732f3eu); f_005caba4();
    /* 00732f3e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732f41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732f44: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00732f47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732f49: je 0x7332a5 */ if (fZ) goto L_007332a5;
L_00732f4f:; BB(0x00732f4f);
    /* 00732f4f: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 00732f59: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00732f60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732f63: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732f66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732f69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732f6a: call 0x744a60 */ r_esp -= 4; W32(r_esp, 0x732f6fu); f_00744a60();
    /* 00732f6f: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00732f79:; BB(0x00732f79);
    /* 00732f79: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732f7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732f7f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732f82: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732f2a); r_esp += 8; return;
L_007332a5:; BB(0x007332a5);
    /* 007332a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332a7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332aa: jmp 0x732f79 */ goto L_00732f79;
}

void f_00732f87(void)
{
    FN_ENTER(0x00732f87);
    /* 00732f87: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00732f91: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00732f93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732f98u); f_005caba4();
    /* 00732f98: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732f9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732f9e: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00732fa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00732fa6: je 0x7332af */ if (fZ) goto L_007332af;
L_00732fac:; BB(0x00732fac);
    /* 00732fac: mov dword ptr [ebp - 0xa4], 1 */ W32((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 00732fb6: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00732fbd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00732fc0: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732fc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00732fc7: call 0x743e00 */ r_esp -= 4; W32(r_esp, 0x732fccu); f_00743e00();
    /* 00732fcc: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00732fd6:; BB(0x00732fd6);
    /* 00732fd6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00732fd9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00732fdc: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00732fdf: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732f87); r_esp += 8; return;
L_007332af:; BB(0x007332af);
    /* 007332af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332b1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332b4: jmp 0x732fd6 */ goto L_00732fd6;
}

void f_00732fe4(void)
{
    FN_ENTER(0x00732fe4);
    /* 00732fe4: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 00732fee: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00732ff0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x732ff5u); f_005caba4();
    /* 00732ff5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00732ff8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00732ffb: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00733001: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00733003: je 0x7332b9 */ if (fZ) goto L_007332b9;
L_00733009:; BB(0x00733009);
    /* 00733009: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
    /* 00733013: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0073301a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073301d: push dword ptr [eax + 0x54] */ { u32 v = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00733020: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00733024: call 0x75086c */ r_esp -= 4; W32(r_esp, 0x733029u); f_0075086c();
    /* 00733029: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_00733033:; BB(0x00733033);
    /* 00733033: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00733036: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00733039: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0073303c: jmp 0x7331f2 */ goto L_007331f2;
L_007331f2:; BB(0x007331f2);
    /* 007331f2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007331f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007331f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007331ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00733201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00733202: ret 4 */ FN_RET(0x00732fe4); r_esp += 8; return;
L_007332b9:; BB(0x007332b9);
    /* 007332b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007332bb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007332be: jmp 0x733033 */ goto L_00733033;
}

