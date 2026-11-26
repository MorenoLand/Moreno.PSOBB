#include "protos.h"

void f_00429334(void) /* sub_429334 */
{
    FN_ENTER(0x00429334);
    /* 00429334: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00429335: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00429337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00429339: call 0x429358 */ r_esp -= 4; W32(r_esp, 0x42933eu); f_00429358();
    /* 0042933e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00429342: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00429344: jne 0x42934a */ if (!fZ) goto L_0042934a;
L_00429346:; BB(0x00429346);
    /* 00429346: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429347: ret 4 */ FN_RET(0x00429334); r_esp += 8; return;
L_0042934a:; BB(0x0042934a);
    /* 0042934a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042934b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x429350u); f_005c2f74();
    /* 00429350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00429351: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429352: ret 4 */ FN_RET(0x00429334); r_esp += 8; return;
}

void f_00429358(void) /* sub_429358 */
{
    FN_ENTER(0x00429358);
    /* 00429358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429359: mov ebp, esp */ r_ebp = r_esp;
    /* 0042935b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042935d: push 0x8cdb7c */ { u32 v = 0x8cdb7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00429362: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00429368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429369: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00429370: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00429376: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00429379: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0042937c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042937f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00429382: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00429385: mov dword ptr [ecx], 0xaf41b0 */ W32((u32)(r_ecx), 0xaf41b0u);
    /* 0042938b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429392: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x429397u); f_008171e8();
    /* 00429397: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042939a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004293a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004293a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004293a4: ret  */ FN_RET(0x00429358); r_esp += 4; return;
}

void f_004293a8(void) /* sub_4293A8 */
{
    FN_ENTER(0x004293a8);
    /* 004293a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004293a9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004293ac: mov esi, ecx */ r_esi = r_ecx;
    /* 004293ae: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004293b2: mov ecx, esi */ r_ecx = r_esi;
    /* 004293b4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4293b9u); f_008193cc();
    /* 004293b9: mov dword ptr [esi], 0xaf41b0 */ W32((u32)(r_esi), 0xaf41b0u);
    /* 004293bf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4293c4u); f_008587a5();
    /* 004293c4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004293c7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004293ca: fdiv dword ptr [0x8fc680] */ ST(0) = ST(0) / R_F32((u32)(0x8fc680u));
    /* 004293d0: fcomp dword ptr [0x8fc67c] */ fx_compare(ST(0), R_F32((u32)(0x8fc67cu))); FPOP();
    /* 004293d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004293d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004293d9: jbe 0x4293df */ if ((fC||fZ)) goto L_004293df;
L_004293db:; BB(0x004293db);
    /* 004293db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004293dd: jmp 0x4293e4 */ goto L_004293e4;
L_004293df:; BB(0x004293df);
    /* 004293df: mov eax, 1 */ r_eax = 0x1u;
L_004293e4:; BB(0x004293e4);
    /* 004293e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004293e5: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004293e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004293eb: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004293ef: call 0x4295d0 */ r_esp -= 4; W32(r_esp, 0x4293f4u); f_004295d0();
    /* 004293f4: mov eax, esi */ r_eax = r_esi;
    /* 004293f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004293f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004293fa: ret 0xc */ FN_RET(0x004293a8); r_esp += 16; return;
}

void f_00429400(void) /* sub_429400 */
{
    FN_ENTER(0x00429400);
    /* 00429400: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00429401: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00429403: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429407: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00429409: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x42940eu); f_008193cc();
    /* 0042940e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429412: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429416: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042941a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042941c: mov dword ptr [ebx], 0xaf41b0 */ W32((u32)(r_ebx), 0xaf41b0u);
    /* 00429422: call 0x4295d0 */ r_esp -= 4; W32(r_esp, 0x429427u); f_004295d0();
    /* 00429427: mov eax, ebx */ r_eax = r_ebx;
    /* 00429429: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042942a: ret 0x10 */ FN_RET(0x00429400); r_esp += 20; return;
}

void f_00429430(void) /* sub_429430 */
{
    FN_ENTER(0x00429430);
    /* 00429430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429431: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00429433: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00429436: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429439: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 0042943c: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042943f: jle 0x42946f */ if ((fZ||fS!=fO)) goto L_0042946f;
L_00429441:; BB(0x00429441);
    /* 00429441: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00429444: fsub dword ptr [0x8fc66c] */ ST(0) = ST(0) - R_F32((u32)(0x8fc66cu));
    /* 0042944a: fcom dword ptr [0x8fc678] */ fx_compare(ST(0), R_F32((u32)(0x8fc678u))); 
    /* 00429450: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429452: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429453: jb 0x42945a */ if (fC) goto L_0042945a;
L_00429455:; BB(0x00429455);
    /* 00429455: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00429458: jmp 0x42946f */ goto L_0042946f;
L_0042945a:; BB(0x0042945a);
    /* 0042945a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042945c: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00429460: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429462: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00429465: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042946b: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
L_0042946f:; BB(0x0042946f);
    /* 0042946f: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 00429472: lea edx, [ebp + 0x28] */ r_edx = (u32)(r_ebp+0x28u);
    /* 00429475: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x42947au); f_0082ebac();
    /* 0042947a: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0042947d: fcom dword ptr [0x8fc668] */ fx_compare(ST(0), R_F32((u32)(0x8fc668u))); 
    /* 00429483: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429485: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429486: jae 0x4294b0 */ if (!fC) goto L_004294b0;
L_00429488:; BB(0x00429488);
    /* 00429488: fld dword ptr [0x8fc670] */ FPUSH(R_F32((u32)(0x8fc670u)));
    /* 0042948e: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00429491: fmul dword ptr [0x8fc674] */ ST(0) = ST(0) * R_F32((u32)(0x8fc674u));
    /* 00429497: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 0042949a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0042949c: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 0042949f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004294a1: fchs  */ ST(0) = -ST(0);
    /* 004294a3: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 004294a6: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004294a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004294ab: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 004294ae: jmp 0x4294b5 */ goto L_004294b5;
L_004294b0:; BB(0x004294b0);
    /* 004294b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004294b2: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
L_004294b5:; BB(0x004294b5);
    /* 004294b5: fadd dword ptr [0x8fc664] */ ST(0) = ST(0) + R_F32((u32)(0x8fc664u));
    /* 004294bb: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004294be: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004294c1: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 004294c4: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004294c7: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 004294ca: add edx, 0x110 */ {  u32 a = r_edx; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004294d0: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 004294d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004294d4: ret  */ FN_RET(0x00429430); r_esp += 4; return;
}

void f_004294d8(void) /* sub_4294D8 */
{
    FN_ENTER(0x004294d8);
    /* 004294d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004294d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004294db: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004294de: fcomp dword ptr [0x8fc660] */ fx_compare(ST(0), R_F32((u32)(0x8fc660u))); FPOP();
    /* 004294e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004294e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004294e7: jae 0x429582 */ if (!fC) goto L_00429582;
L_004294ed:; BB(0x004294ed);
    /* 004294ed: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004294f2: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004294f7: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 004294fc: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429501: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00429506: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0042950b: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x429510u); f_0082d6fc();
    /* 00429510: lea eax, [ebx + 0x40] */ r_eax = (u32)(r_ebx+0x40u);
    /* 00429513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429514: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x429519u); f_0082d710();
    /* 00429519: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042951c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x429521u); f_0082d7b0();
    /* 00429521: mov ecx, dword ptr [0xa4381c] */ r_ecx = R32((u32)(0xa4381cu));
    /* 00429527: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x42952cu); f_00829cc8();
    /* 0042952c: lea ecx, [ebx + 0x1c] */ r_ecx = (u32)(r_ebx+0x1cu);
    /* 0042952f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x429534u); f_0082d838();
    /* 00429534: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 00429537: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00429539: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x42953eu); f_0082d8bc();
    /* 0042953e: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00429541: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00429543: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x429548u); f_0082e9e4();
    /* 00429548: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 0042954d: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 00429550: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00429556: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429558: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042955c: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x429561u); f_0082e1e8();
    /* 00429561: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00429562: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x429567u); f_0082da80();
    /* 00429567: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429569: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0042956e: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x429573u); f_0082d6fc();
    /* 00429573: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00429576: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0042957b: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00429580: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429581: ret  */ FN_RET(0x004294d8); r_esp += 4; return;
L_00429582:; BB(0x00429582);
    /* 00429582: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x429587u); f_0082d7b0();
    /* 00429587: mov ecx, dword ptr [0xa4381c] */ r_ecx = R32((u32)(0xa4381cu));
    /* 0042958d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x429592u); f_00829cc8();
    /* 00429592: lea ecx, [ebx + 0x1c] */ r_ecx = (u32)(r_ebx+0x1cu);
    /* 00429595: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x42959au); f_0082d838();
    /* 0042959a: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0042959d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042959f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4295a4u); f_0082d8bc();
    /* 004295a4: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004295a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004295a9: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4295aeu); f_0082e9e4();
    /* 004295ae: mov eax, dword ptr [0xa43820] */ r_eax = R32((u32)(0xa43820u));
    /* 004295b3: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 004295b6: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004295bc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004295be: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004295c2: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4295c7u); f_0082e1e8();
    /* 004295c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004295c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4295cdu); f_0082da80();
    /* 004295cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004295ce: ret  */ FN_RET(0x004294d8); r_esp += 4; return;
}

void f_004295d0(void) /* sub_4295D0 */
{
    FN_ENTER(0x004295d0);
    /* 004295d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004295d1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004295d4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004295d6: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004295da: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004295de: mov ecx, dword ptr [0x9a4314] */ r_ecx = R32((u32)(0x9a4314u));
    /* 004295e4: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 004295e7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004295e9: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 004295ec: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004295ef: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 004295f2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004295f5: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 004295f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004295fa: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 004295fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00429600: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 00429603: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00429606: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00429609: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x42960eu); f_008587a5();
    /* 0042960e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00429611: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00429614: fdiv dword ptr [0x8fc65c] */ ST(0) = ST(0) / R_F32((u32)(0x8fc65cu));
    /* 0042961a: fmul dword ptr [0x8fc658] */ ST(0) = ST(0) * R_F32((u32)(0x8fc658u));
    /* 00429620: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00429624: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00429629: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042962e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00429632: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00429636: fistp dword ptr [ebp + 0x34] */ W32((u32)(r_ebp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00429639: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0042963d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x429642u); f_008587a5();
    /* 00429642: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 00429649: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0042964d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00429651: fdiv dword ptr [0x8fc65c] */ ST(0) = ST(0) / R_F32((u32)(0x8fc65cu));
    /* 00429657: fmul dword ptr [0x8fc658] */ ST(0) = ST(0) * R_F32((u32)(0x8fc658u));
    /* 0042965d: mov dword ptr [ebp + 0x40], 0x3f800000 */ W32((u32)(r_ebp+0x40u), 0x3f800000u);
    /* 00429664: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00429668: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0042966d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429672: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00429676: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0042967a: fistp dword ptr [ebp + 0x38] */ W32((u32)(r_ebp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042967d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00429681: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00429685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429687: mov dword ptr [ebp + 0x44], 0x3f800000 */ W32((u32)(r_ebp+0x44u), 0x3f800000u);
    /* 0042968e: mov dword ptr [ebp + 0x48], 0x3f800000 */ W32((u32)(r_ebp+0x48u), 0x3f800000u);
    /* 00429695: mov dword ptr [ebp + 0x4c], 0x3f800000 */ W32((u32)(r_ebp+0x4cu), 0x3f800000u);
    /* 0042969c: jne 0x4296ac */ if (!fZ) goto L_004296ac;
L_0042969e:; BB(0x0042969e);
    /* 0042969e: mov dword ptr [ebp + 0x50], 2 */ W32((u32)(r_ebp+0x50u), 0x2u);
    /* 004296a5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004296a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004296a9: ret 0xc */ FN_RET(0x004295d0); r_esp += 16; return;
L_004296ac:; BB(0x004296ac);
    /* 004296ac: mov dword ptr [ebp + 0x50], 1 */ W32((u32)(r_ebp+0x50u), 0x1u);
    /* 004296b3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004296b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004296b7: ret 0xc */ FN_RET(0x004295d0); r_esp += 16; return;
}

void f_004296bc(void) /* sub_4296BC */
{
    FN_ENTER(0x004296bc);
    /* 004296bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004296bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004296bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004296c1: call 0x429754 */ r_esp -= 4; W32(r_esp, 0x4296c6u); f_00429754();
    /* 004296c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004296ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004296cc: jne 0x4296d2 */ if (!fZ) goto L_004296d2;
L_004296ce:; BB(0x004296ce);
    /* 004296ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004296cf: ret 4 */ FN_RET(0x004296bc); r_esp += 8; return;
L_004296d2:; BB(0x004296d2);
    /* 004296d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004296d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4296d8u); f_005c2f74();
    /* 004296d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004296d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004296da: ret 4 */ FN_RET(0x004296bc); r_esp += 8; return;
}

void f_004296e0(void) /* sub_4296E0 */
{
    FN_ENTER(0x004296e0);
    /* 004296e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004296e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004296e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004296e5: call 0x429704 */ r_esp -= 4; W32(r_esp, 0x4296eau); f_00429704();
    /* 004296ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004296ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004296f0: jne 0x4296f6 */ if (!fZ) goto L_004296f6;
L_004296f2:; BB(0x004296f2);
    /* 004296f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004296f3: ret 4 */ FN_RET(0x004296e0); r_esp += 8; return;
L_004296f6:; BB(0x004296f6);
    /* 004296f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004296f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4296fcu); f_005c2f74();
    /* 004296fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004296fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004296fe: ret 4 */ FN_RET(0x004296e0); r_esp += 8; return;
}

void f_00429704(void) /* sub_429704 */
{
    FN_ENTER(0x00429704);
    /* 00429704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429705: mov ebp, esp */ r_ebp = r_esp;
    /* 00429707: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00429709: push 0x8cdb98 */ { u32 v = 0x8cdb98u; r_esp -= 4; W32(r_esp, v); }
    /* 0042970e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00429714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429715: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042971c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042971f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00429722: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00429725: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00429728: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042972b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042972e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00429731: mov dword ptr [ecx], 0xaf4298 */ W32((u32)(r_ecx), 0xaf4298u);
    /* 00429737: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042973e: call 0x429754 */ r_esp -= 4; W32(r_esp, 0x429743u); f_00429754();
    /* 00429743: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429746: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042974d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042974f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429750: ret  */ FN_RET(0x00429704); r_esp += 4; return;
}

void f_00429754(void) /* sub_429754 */
{
    FN_ENTER(0x00429754);
    /* 00429754: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429755: mov ebp, esp */ r_ebp = r_esp;
    /* 00429757: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00429759: push 0x8cdbb4 */ { u32 v = 0x8cdbb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042975e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00429764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429765: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042976c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042976f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00429772: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00429775: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00429778: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042977b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042977e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00429781: mov dword ptr [ecx], 0xaf4288 */ W32((u32)(r_ecx), 0xaf4288u);
    /* 00429787: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042978e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x429793u); f_008171e8();
    /* 00429793: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429796: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042979d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042979f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004297a0: ret  */ FN_RET(0x00429754); r_esp += 4; return;
}

void f_004297a4(void) /* sub_4297A4 */
{
    FN_ENTER(0x004297a4);
    /* 004297a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004297a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004297a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004297a9: call 0x4297c8 */ r_esp -= 4; W32(r_esp, 0x4297aeu); f_004297c8();
    /* 004297ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004297b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004297b4: jne 0x4297ba */ if (!fZ) goto L_004297ba;
L_004297b6:; BB(0x004297b6);
    /* 004297b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004297b7: ret 4 */ FN_RET(0x004297a4); r_esp += 8; return;
L_004297ba:; BB(0x004297ba);
    /* 004297ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004297bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4297c0u); f_005c2f74();
    /* 004297c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004297c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004297c2: ret 4 */ FN_RET(0x004297a4); r_esp += 8; return;
}

void f_004297c8(void) /* sub_4297C8 */
{
    FN_ENTER(0x004297c8);
    /* 004297c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004297c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004297cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004297cd: push 0x8cdbd0 */ { u32 v = 0x8cdbd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004297d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004297d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004297d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004297e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004297e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004297e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004297e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004297ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004297ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004297f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004297f5: mov dword ptr [ecx], 0xaf42a8 */ W32((u32)(r_ecx), 0xaf42a8u);
    /* 004297fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00429802: call 0x429754 */ r_esp -= 4; W32(r_esp, 0x429807u); f_00429754();
    /* 00429807: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042980a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00429811: mov esp, ebp */ r_esp = r_ebp;
    /* 00429813: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429814: ret  */ FN_RET(0x004297c8); r_esp += 4; return;
}

void f_00429818(void) /* sub_429818 */
{
    FN_ENTER(0x00429818);
    /* 00429818: mov ecx, dword ptr [0xa43924] */ r_ecx = R32((u32)(0xa43924u));
    /* 0042981e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00429820: je 0x429828 */ if (fZ) goto L_00429828;
L_00429822:; BB(0x00429822);
    /* 00429822: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429824: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00429826: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x429828u); call_ind(t); }
L_00429828:; BB(0x00429828);
    /* 00429828: mov dword ptr [0xa43924], 0 */ W32((u32)(0xa43924u), 0x0u);
    /* 00429832: ret  */ FN_RET(0x00429818); r_esp += 4; return;
}

void f_00429834(void) /* sub_429834 */
{
    FN_ENTER(0x00429834);
    /* 00429834: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00429835: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00429836: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429837: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00429838: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042983b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0042983d: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429841: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00429843: call 0x4299c8 */ r_esp -= 4; W32(r_esp, 0x429848u); f_004299c8();
    /* 00429848: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0042984c: mov dword ptr [ebp], 0xaf4298 */ W32((u32)(r_ebp), 0xaf4298u);
    /* 00429853: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 00429856: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429858: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0042985c: mov ebp, eax */ r_ebp = r_eax;
    /* 0042985e: mov esi, ecx */ r_esi = r_ecx;
L_00429860:; BB(0x00429860);
    /* 00429860: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00429862: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 00429864: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00429867: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0042986a: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0042986d: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00429870: mov edx, dword ptr [0xa43924] */ r_edx = R32((u32)(0xa43924u));
    /* 00429876: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00429879: lea edx, [edx + ebp + 4] */ r_edx = (u32)(r_edx+r_ebp+0x4u);
    /* 0042987d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042987f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x429884u); f_0082ebac();
    /* 00429884: mov edx, dword ptr [0xa43924] */ r_edx = R32((u32)(0xa43924u));
    /* 0042988a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042988d: mov edx, dword ptr [ebp + eax + 0x10] */ r_edx = R32((u32)(r_ebp+r_eax+0x10u));
    /* 00429891: lea ebx, [esi + 0xc] */ r_ebx = (u32)(r_esi+0xcu);
    /* 00429894: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00429897: mov edx, dword ptr [ebp + eax + 0x14] */ r_edx = R32((u32)(r_ebp+r_eax+0x14u));
    /* 0042989b: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0042989e: mov edx, dword ptr [ebp + eax + 0x18] */ r_edx = R32((u32)(r_ebp+r_eax+0x18u));
    /* 004298a2: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004298a5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4298aau); f_008587a5();
    /* 004298aa: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004298ad: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004298b0: fdiv dword ptr [0x8fc738] */ ST(0) = ST(0) / R_F32((u32)(0x8fc738u));
    /* 004298b6: fmul dword ptr [0x8fc734] */ ST(0) = ST(0) * R_F32((u32)(0x8fc734u));
    /* 004298bc: fadd dword ptr [0x8fc73c] */ ST(0) = ST(0) + R_F32((u32)(0x8fc73cu));
    /* 004298c2: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 004298c5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4298cau); f_008587a5();
    /* 004298ca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004298ce: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004298d2: fdiv dword ptr [0x8fc738] */ ST(0) = ST(0) / R_F32((u32)(0x8fc738u));
    /* 004298d8: fmul dword ptr [0x8fc734] */ ST(0) = ST(0) * R_F32((u32)(0x8fc734u));
    /* 004298de: fadd dword ptr [0x8fc730] */ ST(0) = ST(0) + R_F32((u32)(0x8fc730u));
    /* 004298e4: fsubr dword ptr [ebx + 8] */ ST(0) = R_F32((u32)(r_ebx+0x8u)) - ST(0);
    /* 004298e7: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 004298ea: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4298efu); f_008587a5();
    /* 004298ef: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004298f3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004298f7: fdiv dword ptr [0x8fc738] */ ST(0) = ST(0) / R_F32((u32)(0x8fc738u));
    /* 004298fd: fmul dword ptr [0x8fc72c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc72cu));
    /* 00429903: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00429907: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0042990c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429911: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00429915: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00429919: fistp dword ptr [esi + 0x18] */ W32((u32)(r_esi+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042991c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00429920: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x429925u); f_008587a5();
    /* 00429925: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00429929: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0042992d: fdiv dword ptr [0x8fc738] */ ST(0) = ST(0) / R_F32((u32)(0x8fc738u));
    /* 00429933: fadd dword ptr [0x8fc728] */ ST(0) = ST(0) + R_F32((u32)(0x8fc728u));
    /* 00429939: fmul dword ptr [0x8fc73c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc73cu));
    /* 0042993f: fmul dword ptr [0x8fc724] */ ST(0) = ST(0) * R_F32((u32)(0x8fc724u));
    /* 00429945: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00429949: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0042994e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429953: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00429957: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0042995b: fistp dword ptr [esi + 0x1c] */ W32((u32)(r_esi+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0042995e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00429962: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x429967u); f_008587a5();
    /* 00429967: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
    /* 0042996e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00429972: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00429976: fdiv dword ptr [0x8fc738] */ ST(0) = ST(0) / R_F32((u32)(0x8fc738u));
    /* 0042997c: fmul dword ptr [0x8fc72c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc72cu));
    /* 00429982: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 00429989: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0042998d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00429992: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429997: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0042999b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0042999f: fistp dword ptr [esi + 0x20] */ W32((u32)(r_esi+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004299a2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004299a6: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004299a9: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004299ac: cmp ebp, 0x214 */ {  u32 a = r_ebp; u32 b = 0x214u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004299b2: jl 0x429860 */ if ((fS!=fO)) goto L_00429860;
L_004299b8:; BB(0x004299b8);
    /* 004299b8: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 004299bc: mov eax, ebp */ r_eax = r_ebp;
    /* 004299be: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004299c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004299c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004299c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004299c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004299c5: ret 8 */ FN_RET(0x00429834); r_esp += 12; return;
}

void f_004299c8(void) /* sub_4299C8 */
{
    FN_ENTER(0x004299c8);
    /* 004299c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004299c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004299cb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004299cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004299d1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4299d6u); f_008193cc();
    /* 004299d6: mov dword ptr [ebp], 0xaf4288 */ W32((u32)(r_ebp), 0xaf4288u);
    /* 004299dd: mov eax, ebp */ r_eax = r_ebp;
    /* 004299df: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 004299e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004299e7: ret 4 */ FN_RET(0x004299c8); r_esp += 8; return;
}

void f_004299ec(void) /* sub_4299EC */
{
    FN_ENTER(0x004299ec);
    /* 004299ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004299ed: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004299f0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004299f2: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004299f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004299f8: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004299fb: cmp eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429a00: jl 0x429a14 */ if ((fS!=fO)) goto L_00429a14;
L_00429a02:; BB(0x00429a02);
    /* 00429a02: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00429a06: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429a0b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00429a0f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00429a12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429a13: ret  */ FN_RET(0x004299ec); r_esp += 4; return;
L_00429a14:; BB(0x00429a14);
    /* 00429a14: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00429a18: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00429a1c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00429a1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429a21: lea eax, [ebx + 0x3c] */ r_eax = (u32)(r_ebx+0x3cu);
    /* 00429a24: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00429a27: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429a2a: mov esi, eax */ r_esi = r_eax;
    /* 00429a2c: mov edi, edx */ r_edi = r_edx;
    /* 00429a2e: mov ebp, ecx */ r_ebp = r_ecx;
L_00429a30:; BB(0x00429a30);
    /* 00429a30: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00429a32: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00429a36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429a38: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00429a3c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00429a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429a41: je 0x429abd */ if (fZ) goto L_00429abd;
L_00429a43:; BB(0x00429a43);
    /* 00429a43: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429a46: jne 0x429a95 */ if (!fZ) goto L_00429a95;
L_00429a48:; BB(0x00429a48);
    /* 00429a48: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429a4b: fsub dword ptr [0x8fc740] */ ST(0) = ST(0) - R_F32((u32)(0x8fc740u));
    /* 00429a51: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 00429a54: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00429a56: mov edx, ebx */ r_edx = r_ebx;
    /* 00429a58: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x429a5du); f_0082ebac();
    /* 00429a5d: fld dword ptr [0x8fc71c] */ FPUSH(R_F32((u32)(0x8fc71cu)));
    /* 00429a63: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00429a66: fcom dword ptr [0x8fc718] */ fx_compare(ST(0), R_F32((u32)(0x8fc718u))); 
    /* 00429a6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429a6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429a6f: jae 0x429a81 */ if (!fC) goto L_00429a81;
L_00429a71:; BB(0x00429a71);
    /* 00429a71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429a73: mov dword ptr [esi + 0xc], 3 */ W32((u32)(r_esi+0xcu), 0x3u);
    /* 00429a7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429a7c: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00429a7f: jmp 0x429a84 */ goto L_00429a84;
L_00429a81:; BB(0x00429a81);
    /* 00429a81: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
L_00429a84:; BB(0x00429a84);
    /* 00429a84: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00429a88: add dword ptr [esi - 4], eax */ { u32 ad = (u32)(r_esi+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00429a8b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429a8d: add dword ptr [esi + 4], eax */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00429a90: jmp 0x429b73 */ goto L_00429b73;
L_00429a95:; BB(0x00429a95);
    /* 00429a95: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429a98: jne 0x429b73 */ if (!fZ) goto L_00429b73;
L_00429a9e:; BB(0x00429a9e);
    /* 00429a9e: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429aa1: fmul dword ptr [0x8fc720] */ ST(0) = ST(0) * R_F32((u32)(0x8fc720u));
    /* 00429aa7: fadd dword ptr [esi - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xffffffe8u));
    /* 00429aaa: fld dword ptr [esi - 0x14] */ FPUSH(R_F32((u32)(r_esi+0xffffffecu)));
    /* 00429aad: fadd dword ptr [esi - 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffff8u));
    /* 00429ab0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00429ab2: fstp dword ptr [esi - 0x18] */ W_F32((u32)(r_esi+0xffffffe8u), ST(0)); FPOP();
    /* 00429ab5: fstp dword ptr [esi - 0x14] */ W_F32((u32)(r_esi+0xffffffecu), ST(0)); FPOP();
    /* 00429ab8: jmp 0x429b73 */ goto L_00429b73;
L_00429abd:; BB(0x00429abd);
    /* 00429abd: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429ac0: fsub dword ptr [0x8fc740] */ ST(0) = ST(0) - R_F32((u32)(0x8fc740u));
    /* 00429ac6: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 00429ac9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00429acb: mov edx, ebx */ r_edx = r_ebx;
    /* 00429acd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x429ad2u); f_0082ebac();
    /* 00429ad2: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429ad5: fcom dword ptr [0x8fc718] */ fx_compare(ST(0), R_F32((u32)(0x8fc718u))); 
    /* 00429adb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429add: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429ade: jae 0x429b65 */ if (!fC) goto L_00429b65;
L_00429ae4:; BB(0x00429ae4);
    /* 00429ae4: fld dword ptr [esi - 0x18] */ FPUSH(R_F32((u32)(r_esi+0xffffffe8u)));
    /* 00429ae7: fcom dword ptr [0x8fcc18] */ fx_compare(ST(0), R_F32((u32)(0x8fcc18u))); 
    /* 00429aed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429aef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429af0: jae 0x429bb7 */ if (!fC) goto L_00429bb7;
L_00429af6:; BB(0x00429af6);
    /* 00429af6: fld dword ptr [esi - 0x1c] */ FPUSH(R_F32((u32)(r_esi+0xffffffe4u)));
    /* 00429af9: fcom dword ptr [0x8fcc1c] */ fx_compare(ST(0), R_F32((u32)(0x8fcc1cu))); 
    /* 00429aff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429b01: fld dword ptr [esi - 0x14] */ FPUSH(R_F32((u32)(r_esi+0xffffffecu)));
    /* 00429b04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429b05: ja 0x429b42 */ if ((!fC&&!fZ)) goto L_00429b42;
L_00429b07:; BB(0x00429b07);
    /* 00429b07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00429b09: fcomp dword ptr [0x8fcc20] */ fx_compare(ST(0), R_F32((u32)(0x8fcc20u))); FPOP();
    /* 00429b0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429b11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429b12: jb 0x429b44 */ if (fC) goto L_00429b44;
L_00429b14:; BB(0x00429b14);
    /* 00429b14: fcom dword ptr [0x8fcc24] */ fx_compare(ST(0), R_F32((u32)(0x8fcc24u))); 
    /* 00429b1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429b1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429b1d: ja 0x429b44 */ if ((!fC&&!fZ)) goto L_00429b44;
L_00429b1f:; BB(0x00429b1f);
    /* 00429b1f: fcom dword ptr [0x8fcc28] */ fx_compare(ST(0), R_F32((u32)(0x8fcc28u))); 
    /* 00429b25: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429b27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429b28: jb 0x429b44 */ if (fC) goto L_00429b44;
L_00429b2a:; BB(0x00429b2a);
    /* 00429b2a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429b2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429b2e: fld dword ptr [0x8fc714] */ FPUSH(R_F32((u32)(0x8fc714u)));
    /* 00429b34: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00429b36: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 00429b39: mov dword ptr [esi + 0xc], 2 */ W32((u32)(r_esi+0xcu), 0x2u);
    /* 00429b40: jmp 0x429b67 */ goto L_00429b67;
L_00429b42:; BB(0x00429b42);
    /* 00429b42: fstp st(1) */ ST(1) = ST(0); FPOP();
L_00429b44:; BB(0x00429b44);
    /* 00429b44: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00429b46: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00429b48: fcomp dword ptr [0x8fcc10] */ fx_compare(ST(0), R_F32((u32)(0x8fcc10u))); FPOP();
    /* 00429b4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429b50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429b51: jae 0x429b67 */ if (!fC) goto L_00429b67;
L_00429b53:; BB(0x00429b53);
    /* 00429b53: mov dword ptr [esi + 0xc], 1 */ W32((u32)(r_esi+0xcu), 0x1u);
    /* 00429b5a: mov eax, 1 */ r_eax = 0x1u;
    /* 00429b5f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00429b63: jmp 0x429b67 */ goto L_00429b67;
L_00429b65:; BB(0x00429b65);
    /* 00429b65: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00429b67:; BB(0x00429b67);
    /* 00429b67: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00429b6b: add dword ptr [esi - 4], eax */ { u32 ad = (u32)(r_esi+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00429b6e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429b70: add dword ptr [esi + 4], eax */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00429b73:; BB(0x00429b73);
    /* 00429b73: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00429b77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429b79: je 0x429b92 */ if (fZ) goto L_00429b92;
L_00429b7b:; BB(0x00429b7b);
    /* 00429b7b: mov eax, edi */ r_eax = r_edi;
    /* 00429b7d: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429b80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429b82: jne 0x429b92 */ if (!fZ) goto L_00429b92;
L_00429b84:; BB(0x00429b84);
    /* 00429b84: push 0x171 */ { u32 v = 0x171u; r_esp -= 4; W32(r_esp, v); }
    /* 00429b89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429b8a: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x429b8fu); f_0043aaec();
    /* 00429b8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00429b92:; BB(0x00429b92);
    /* 00429b92: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00429b95: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00429b98: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429b9b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00429b9e: cmp edi, 0x13 */ {  u32 a = r_edi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429ba1: jl 0x429a30 */ if ((fS!=fO)) goto L_00429a30;
L_00429ba7:; BB(0x00429ba7);
    /* 00429ba7: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00429bab: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00429baf: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00429bb2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00429bb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429bb6: ret  */ FN_RET(0x004299ec); r_esp += 4; return;
L_00429bb7:; BB(0x00429bb7);
    /* 00429bb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429bb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429bbb: jmp 0x429b67 */ goto L_00429b67;
}

void f_00429bc0(void) /* sub_429BC0 */
{
    FN_ENTER(0x00429bc0);
    /* 00429bc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00429bc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00429bc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00429bc3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429bc6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00429bc8: mov eax, dword ptr [0xa43d28] */ r_eax = R32((u32)(0xa43d28u));
    /* 00429bcd: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00429bd3: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00429bd6: mov esi, dword ptr [edx + 0x2c] */ r_esi = R32((u32)(r_edx+0x2cu));
    /* 00429bd9: mov eax, dword ptr [0x8fcc14] */ r_eax = R32((u32)(0x8fcc14u));
    /* 00429bde: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00429be5: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429be8: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00429bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00429bf4: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00429bf8: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00429c00: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00429c08: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00429c0b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00429c0f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x429c14u); f_00829cc8();
    /* 00429c14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429c16: mov edi, ebx */ r_edi = r_ebx;
    /* 00429c18: mov ebx, eax */ r_ebx = r_eax;
L_00429c1a:; BB(0x00429c1a);
    /* 00429c1a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x429c1fu); f_0082d7b0();
    /* 00429c1f: mov ecx, edi */ r_ecx = r_edi;
    /* 00429c21: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x429c26u); f_0082d838();
    /* 00429c26: lea ecx, [edi + 0x18] */ r_ecx = (u32)(r_edi+0x18u);
    /* 00429c29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429c2b: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x429c30u); f_00830df8();
    /* 00429c30: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00429c34: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x429c39u); f_00831290();
    /* 00429c39: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00429c3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00429c3e: jl 0x429cbb */ if ((fS!=fO)) goto L_00429cbb;
L_00429c40:; BB(0x00429c40);
    /* 00429c40: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429c43: jle 0x429cb2 */ if ((fZ||fS!=fO)) goto L_00429cb2;
L_00429c45:; BB(0x00429c45);
    /* 00429c45: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c48: jne 0x429cbb */ if (!fZ) goto L_00429cbb;
L_00429c4a:; BB(0x00429c4a);
    /* 00429c4a: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00429c50: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00429c56: or edx, 0x8810 */ {  u32 a = r_edx; u32 b = 0x8810u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00429c5c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00429c62: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00429c65: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00429c68: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00429c6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429c6c: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x429c71u); f_0082d710();
    /* 00429c71: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c76: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c7b: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x429c80u); f_0082d6fc();
    /* 00429c80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429c83: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 00429c88: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x429c8du); f_0082e1c4();
    /* 00429c8d: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429c90: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x429c95u); f_0082e6b0();
    /* 00429c95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c97: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c9c: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x429ca1u); f_0082d6fc();
    /* 00429ca1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429ca4: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 00429caa: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00429cb0: jmp 0x429cbb */ goto L_00429cbb;
L_00429cb2:; BB(0x00429cb2);
    /* 00429cb2: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429cb5: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x429cbau); f_0082e6b0();
    /* 00429cba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00429cbb:; BB(0x00429cbb);
    /* 00429cbb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x429cc0u); f_0082da80();
    /* 00429cc0: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00429cc3: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00429cc6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429cc9: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429ccc: jl 0x429c1a */ if ((fS!=fO)) goto L_00429c1a;
L_00429cd2:; BB(0x00429cd2);
    /* 00429cd2: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00429cd8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x429cddu); f_0061cdb0();
    /* 00429cdd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00429ce0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429ce1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00429ce2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00429ce3: ret  */ FN_RET(0x00429bc0); r_esp += 4; return;
}

void f_00429c20(void)
{
    FN_ENTER(0x00429c20);
    goto L_00429c20;
L_00429c1a:; BB(0x00429c1a);
    /* 00429c1a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x429c1fu); f_0082d7b0();
    /* 00429c1f: mov ecx, edi */ r_ecx = r_edi;
L_00429c20:; BB(0x00429c20);
    /* 00429c20: iretd  */ UNSUP(0x00429c20, "iretd ");
    /* 00429c21: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x429c26u); f_0082d838();
    /* 00429c26: lea ecx, [edi + 0x18] */ r_ecx = (u32)(r_edi+0x18u);
    /* 00429c29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429c2b: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x429c30u); f_00830df8();
    /* 00429c30: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00429c34: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x429c39u); f_00831290();
    /* 00429c39: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00429c3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00429c3e: jl 0x429cbb */ if ((fS!=fO)) goto L_00429cbb;
L_00429c40:; BB(0x00429c40);
    /* 00429c40: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429c43: jle 0x429cb2 */ if ((fZ||fS!=fO)) goto L_00429cb2;
L_00429c45:; BB(0x00429c45);
    /* 00429c45: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c48: jne 0x429cbb */ if (!fZ) goto L_00429cbb;
L_00429c4a:; BB(0x00429c4a);
    /* 00429c4a: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00429c50: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00429c56: or edx, 0x8810 */ {  u32 a = r_edx; u32 b = 0x8810u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00429c5c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00429c62: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00429c65: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00429c68: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00429c6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429c6c: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x429c71u); f_0082d710();
    /* 00429c71: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c76: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c7b: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x429c80u); f_0082d6fc();
    /* 00429c80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429c83: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 00429c88: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x429c8du); f_0082e1c4();
    /* 00429c8d: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429c90: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x429c95u); f_0082e6b0();
    /* 00429c95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c97: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00429c9c: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x429ca1u); f_0082d6fc();
    /* 00429ca1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429ca4: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 00429caa: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00429cb0: jmp 0x429cbb */ goto L_00429cbb;
L_00429cb2:; BB(0x00429cb2);
    /* 00429cb2: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00429cb5: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x429cbau); f_0082e6b0();
    /* 00429cba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00429cbb:; BB(0x00429cbb);
    /* 00429cbb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x429cc0u); f_0082da80();
    /* 00429cc0: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00429cc3: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00429cc6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429cc9: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429ccc: jl 0x429c1a */ if ((fS!=fO)) goto L_00429c1a;
L_00429cd2:; BB(0x00429cd2);
    /* 00429cd2: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00429cd8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x429cddu); f_0061cdb0();
    /* 00429cdd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00429ce0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429ce1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00429ce2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00429ce3: ret  */ FN_RET(0x00429c20); r_esp += 4; return;
}

void f_00429ce4(void) /* sub_429CE4 */
{
    FN_ENTER(0x00429ce4);
    /* 00429ce4: mov ecx, dword ptr [0xa43920] */ r_ecx = R32((u32)(0xa43920u));
    /* 00429cea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00429cec: je 0x429cf4 */ if (fZ) goto L_00429cf4;
L_00429cee:; BB(0x00429cee);
    /* 00429cee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429cf0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00429cf2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x429cf4u); call_ind(t); }
L_00429cf4:; BB(0x00429cf4);
    /* 00429cf4: mov dword ptr [0xa43920], 0 */ W32((u32)(0xa43920u), 0x0u);
    /* 00429cfe: ret  */ FN_RET(0x00429ce4); r_esp += 4; return;
}

void f_00429d00(void) /* sub_429D00 */
{
    FN_ENTER(0x00429d00);
    /* 00429d00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00429d01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00429d02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429d03: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429d06: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00429d08: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00429d0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00429d0e: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00429d12: call 0x4299c8 */ r_esp -= 4; W32(r_esp, 0x429d17u); f_004299c8();
    /* 00429d17: mov dword ptr [ebp], 0xaf42a8 */ W32((u32)(r_ebp), 0xaf42a8u);
    /* 00429d1e: mov dword ptr [ebp + 0x4f0], edi */ W32((u32)(r_ebp+0x4f0u), r_edi);
    /* 00429d24: lea edi, [ebp + 0x20] */ r_edi = (u32)(r_ebp+0x20u);
    /* 00429d27: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x429d2cu); f_0082d7b0();
    /* 00429d2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00429d2e: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x429d33u); f_00830cd8();
    /* 00429d33: mov edx, dword ptr [ebp + 0x4f0] */ r_edx = R32((u32)(r_ebp+0x4f0u));
    /* 00429d39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00429d3b: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x429d40u); f_00831308();
    /* 00429d40: mov dword ptr [ebp + 0x4f4], 0 */ W32((u32)(r_ebp+0x4f4u), 0x0u);
    /* 00429d4a: lea edx, [ebp + 0x4f4] */ r_edx = (u32)(r_ebp+0x4f4u);
    /* 00429d50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00429d52: mov dword ptr [ebp + 0x4f8], 0 */ W32((u32)(r_ebp+0x4f8u), 0x0u);
    /* 00429d5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429d5d: mov dword ptr [ebp + 0x4fc], 0 */ W32((u32)(r_ebp+0x4fcu), 0x0u);
    /* 00429d67: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x429d6cu); f_00830aa0();
    /* 00429d6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429d6e: mov esi, edi */ r_esi = r_edi;
    /* 00429d70: mov edi, eax */ r_edi = r_eax;
L_00429d72:; BB(0x00429d72);
    /* 00429d72: mov edx, dword ptr [0xa43920] */ r_edx = R32((u32)(0xa43920u));
    /* 00429d78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00429d79: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00429d7c: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
    /* 00429d80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00429d82: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x429d87u); f_00830aa0();
    /* 00429d87: mov edx, dword ptr [0xa43920] */ r_edx = R32((u32)(0xa43920u));
    /* 00429d8d: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00429d90: lea edx, [edx + edi + 0x10] */ r_edx = (u32)(r_edx+r_edi+0x10u);
    /* 00429d94: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 00429d97: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00429d99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429d9a: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x429d9fu); f_0082eab8();
    /* 00429d9f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x429da4u); f_008587a5();
    /* 00429da4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00429da7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00429daa: fdiv dword ptr [0x8fc708] */ ST(0) = ST(0) / R_F32((u32)(0x8fc708u));
    /* 00429db0: fmul dword ptr [0x8fc704] */ ST(0) = ST(0) * R_F32((u32)(0x8fc704u));
    /* 00429db6: fadd dword ptr [0x8fc70c] */ ST(0) = ST(0) + R_F32((u32)(0x8fc70cu));
    /* 00429dbc: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00429dbf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x429dc4u); f_008587a5();
    /* 00429dc4: mov dword ptr [esi + 0x18], 0 */ W32((u32)(r_esi+0x18u), 0x0u);
    /* 00429dcb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00429dcf: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00429dd3: fdiv dword ptr [0x8fc708] */ ST(0) = ST(0) / R_F32((u32)(0x8fc708u));
    /* 00429dd9: fmul dword ptr [0x8fc704] */ ST(0) = ST(0) * R_F32((u32)(0x8fc704u));
    /* 00429ddf: fadd dword ptr [0x8fc700] */ ST(0) = ST(0) + R_F32((u32)(0x8fc700u));
    /* 00429de5: fsubr dword ptr [esi + 0x14] */ ST(0) = R_F32((u32)(r_esi+0x14u)) - ST(0);
    /* 00429de8: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 00429deb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x429df0u); f_008587a5();
    /* 00429df0: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 00429df7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00429dfb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00429dff: fdiv dword ptr [0x8fc708] */ ST(0) = ST(0) / R_F32((u32)(0x8fc708u));
    /* 00429e05: fadd dword ptr [0x8fc6fc] */ ST(0) = ST(0) + R_F32((u32)(0x8fc6fcu));
    /* 00429e0b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429e0d: fmul dword ptr [0x8fc70c] */ ST(0) = ST(0) * R_F32((u32)(0x8fc70cu));
    /* 00429e13: fmul dword ptr [0x8fc724] */ ST(0) = ST(0) * R_F32((u32)(0x8fc724u));
    /* 00429e19: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00429e1d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00429e22: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429e27: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00429e2b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00429e2f: fistp dword ptr [esi + 0x1c] */ W32((u32)(r_esi+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00429e32: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00429e36: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 00429e39: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00429e3c: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00429e3f: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00429e42: cmp edi, 0x310 */ {  u32 a = r_edi; u32 b = 0x310u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429e48: jl 0x429d72 */ if ((fS!=fO)) goto L_00429d72;
L_00429e4e:; BB(0x00429e4e);
    /* 00429e4e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x429e53u); f_0082da80();
    /* 00429e53: mov eax, ebp */ r_eax = r_ebp;
    /* 00429e55: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00429e58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429e59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00429e5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00429e5b: ret 8 */ FN_RET(0x00429d00); r_esp += 12; return;
}

void f_00429e60(void) /* sub_429E60 */
{
    FN_ENTER(0x00429e60);
    /* 00429e60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00429e61: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429e64: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00429e66: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00429e69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429e6c: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00429e6f: cmp eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429e74: jl 0x429e88 */ if ((fS!=fO)) goto L_00429e88;
L_00429e76:; BB(0x00429e76);
    /* 00429e76: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00429e7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00429e7f: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00429e83: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00429e86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00429e87: ret  */ FN_RET(0x00429e60); r_esp += 4; return;
L_00429e88:; BB(0x00429e88);
    /* 00429e88: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00429e8c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00429e90: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00429e93: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00429e95: lea eax, [ebx + 0x3c] */ r_eax = (u32)(r_ebx+0x3cu);
    /* 00429e98: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00429e9b: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00429e9e: mov esi, eax */ r_esi = r_eax;
    /* 00429ea0: mov edi, edx */ r_edi = r_edx;
    /* 00429ea2: mov ebp, ecx */ r_ebp = r_ecx;
L_00429ea4:; BB(0x00429ea4);
    /* 00429ea4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00429ea6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00429eaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429eac: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00429eb0: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00429eb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429eb5: je 0x429f31 */ if (fZ) goto L_00429f31;
L_00429eb7:; BB(0x00429eb7);
    /* 00429eb7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429eba: jne 0x429f09 */ if (!fZ) goto L_00429f09;
L_00429ebc:; BB(0x00429ebc);
    /* 00429ebc: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429ebf: fsub dword ptr [0x8fc740] */ ST(0) = ST(0) - R_F32((u32)(0x8fc740u));
    /* 00429ec5: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 00429ec8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00429eca: mov edx, ebx */ r_edx = r_ebx;
    /* 00429ecc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x429ed1u); f_0082ebac();
    /* 00429ed1: fld dword ptr [0x8fc6f4] */ FPUSH(R_F32((u32)(0x8fc6f4u)));
    /* 00429ed7: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00429eda: fcom dword ptr [0x8fc6f0] */ fx_compare(ST(0), R_F32((u32)(0x8fc6f0u))); 
    /* 00429ee0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429ee2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429ee3: jae 0x429ef5 */ if (!fC) goto L_00429ef5;
L_00429ee5:; BB(0x00429ee5);
    /* 00429ee5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429ee7: mov dword ptr [esi + 0xc], 3 */ W32((u32)(r_esi+0xcu), 0x3u);
    /* 00429eee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00429ef0: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00429ef3: jmp 0x429ef8 */ goto L_00429ef8;
L_00429ef5:; BB(0x00429ef5);
    /* 00429ef5: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
L_00429ef8:; BB(0x00429ef8);
    /* 00429ef8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00429efc: add dword ptr [esi - 4], eax */ { u32 ad = (u32)(r_esi+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00429eff: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429f01: add dword ptr [esi + 4], eax */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00429f04: jmp 0x429fe7 */ goto L_00429fe7;
L_00429f09:; BB(0x00429f09);
    /* 00429f09: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429f0c: jne 0x429fe7 */ if (!fZ) goto L_00429fe7;
L_00429f12:; BB(0x00429f12);
    /* 00429f12: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429f15: fmul dword ptr [0x8fc6f8] */ ST(0) = ST(0) * R_F32((u32)(0x8fc6f8u));
    /* 00429f1b: fadd dword ptr [esi - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xffffffe8u));
    /* 00429f1e: fld dword ptr [esi - 0x14] */ FPUSH(R_F32((u32)(r_esi+0xffffffecu)));
    /* 00429f21: fadd dword ptr [esi - 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffff8u));
    /* 00429f24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00429f26: fstp dword ptr [esi - 0x18] */ W_F32((u32)(r_esi+0xffffffe8u), ST(0)); FPOP();
    /* 00429f29: fstp dword ptr [esi - 0x14] */ W_F32((u32)(r_esi+0xffffffecu), ST(0)); FPOP();
    /* 00429f2c: jmp 0x429fe7 */ goto L_00429fe7;
L_00429f31:; BB(0x00429f31);
    /* 00429f31: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429f34: fsub dword ptr [0x8fc740] */ ST(0) = ST(0) - R_F32((u32)(0x8fc740u));
    /* 00429f3a: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 00429f3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00429f3f: mov edx, ebx */ r_edx = r_ebx;
    /* 00429f41: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x429f46u); f_0082ebac();
    /* 00429f46: fld dword ptr [esi - 0xc] */ FPUSH(R_F32((u32)(r_esi+0xfffffff4u)));
    /* 00429f49: fcom dword ptr [0x8fc6f0] */ fx_compare(ST(0), R_F32((u32)(0x8fc6f0u))); 
    /* 00429f4f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429f51: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429f52: jae 0x429fd9 */ if (!fC) goto L_00429fd9;
L_00429f58:; BB(0x00429f58);
    /* 00429f58: fld dword ptr [esi - 0x18] */ FPUSH(R_F32((u32)(r_esi+0xffffffe8u)));
    /* 00429f5b: fcom dword ptr [0x8fcc18] */ fx_compare(ST(0), R_F32((u32)(0x8fcc18u))); 
    /* 00429f61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429f63: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429f64: jae 0x42a02b */ if (!fC) goto L_0042a02b;
L_00429f6a:; BB(0x00429f6a);
    /* 00429f6a: fld dword ptr [esi - 0x1c] */ FPUSH(R_F32((u32)(r_esi+0xffffffe4u)));
    /* 00429f6d: fcom dword ptr [0x8fcc1c] */ fx_compare(ST(0), R_F32((u32)(0x8fcc1cu))); 
    /* 00429f73: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429f75: fld dword ptr [esi - 0x14] */ FPUSH(R_F32((u32)(r_esi+0xffffffecu)));
    /* 00429f78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429f79: ja 0x429fb6 */ if ((!fC&&!fZ)) goto L_00429fb6;
L_00429f7b:; BB(0x00429f7b);
    /* 00429f7b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00429f7d: fcomp dword ptr [0x8fcc20] */ fx_compare(ST(0), R_F32((u32)(0x8fcc20u))); FPOP();
    /* 00429f83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429f85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429f86: jb 0x429fb8 */ if (fC) goto L_00429fb8;
L_00429f88:; BB(0x00429f88);
    /* 00429f88: fcom dword ptr [0x8fcc24] */ fx_compare(ST(0), R_F32((u32)(0x8fcc24u))); 
    /* 00429f8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429f90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429f91: ja 0x429fb8 */ if ((!fC&&!fZ)) goto L_00429fb8;
L_00429f93:; BB(0x00429f93);
    /* 00429f93: fcom dword ptr [0x8fcc28] */ fx_compare(ST(0), R_F32((u32)(0x8fcc28u))); 
    /* 00429f99: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429f9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429f9c: jb 0x429fb8 */ if (fC) goto L_00429fb8;
L_00429f9e:; BB(0x00429f9e);
    /* 00429f9e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429fa0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00429fa2: fld dword ptr [0x8fc6ec] */ FPUSH(R_F32((u32)(0x8fc6ecu)));
    /* 00429fa8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00429faa: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 00429fad: mov dword ptr [esi + 0xc], 2 */ W32((u32)(r_esi+0xcu), 0x2u);
    /* 00429fb4: jmp 0x429fdb */ goto L_00429fdb;
L_00429fb6:; BB(0x00429fb6);
    /* 00429fb6: fstp st(1) */ ST(1) = ST(0); FPOP();
L_00429fb8:; BB(0x00429fb8);
    /* 00429fb8: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00429fba: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00429fbc: fcomp dword ptr [0x8fcc10] */ fx_compare(ST(0), R_F32((u32)(0x8fcc10u))); FPOP();
    /* 00429fc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00429fc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00429fc5: jae 0x429fdb */ if (!fC) goto L_00429fdb;
L_00429fc7:; BB(0x00429fc7);
    /* 00429fc7: mov dword ptr [esi + 0xc], 1 */ W32((u32)(r_esi+0xcu), 0x1u);
    /* 00429fce: mov eax, 1 */ r_eax = 0x1u;
    /* 00429fd3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00429fd7: jmp 0x429fdb */ goto L_00429fdb;
L_00429fd9:; BB(0x00429fd9);
    /* 00429fd9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00429fdb:; BB(0x00429fdb);
    /* 00429fdb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00429fdf: add dword ptr [esi - 4], eax */ { u32 ad = (u32)(r_esi+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00429fe2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429fe4: add dword ptr [esi + 4], eax */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00429fe7:; BB(0x00429fe7);
    /* 00429fe7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00429feb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429fed: je 0x42a006 */ if (fZ) goto L_0042a006;
L_00429fef:; BB(0x00429fef);
    /* 00429fef: mov eax, edi */ r_eax = r_edi;
    /* 00429ff1: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00429ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429ff6: jne 0x42a006 */ if (!fZ) goto L_0042a006;
L_00429ff8:; BB(0x00429ff8);
    /* 00429ff8: push 0x170 */ { u32 v = 0x170u; r_esp -= 4; W32(r_esp, v); }
    /* 00429ffd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429ffe: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x42a003u); f_0043aaec();
    /* 0042a003: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042a006:; BB(0x0042a006);
    /* 0042a006: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042a009: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042a00c: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042a00f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042a012: cmp edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042a015: jl 0x429ea4 */ if ((fS!=fO)) goto L_00429ea4;
L_0042a01b:; BB(0x0042a01b);
    /* 0042a01b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0042a01f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0042a023: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0042a026: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042a029: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042a02a: ret  */ FN_RET(0x00429e60); r_esp += 4; return;
L_0042a02b:; BB(0x0042a02b);
    /* 0042a02b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042a02d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042a02f: jmp 0x429fdb */ goto L_00429fdb;
}

