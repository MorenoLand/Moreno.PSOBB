#include "protos.h"

void f_00857024(void)
{
    FN_ENTER(0x00857024);
    /* 00857024: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00857027: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00857029: fcom qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); 
    /* 0085702f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00857031: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00857035: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00857036: jbe 0x857045 */ if ((fC||fZ)) goto L_00857045;
L_00857038:; BB(0x00857038);
    /* 00857038: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 0085703e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857041: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00857043: jmp 0x857050 */ goto L_00857050;
L_00857045:; BB(0x00857045);
    /* 00857045: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 0085704b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085704e: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_00857050:; BB(0x00857050);
    /* 00857050: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857055u); f_00859dd6();
    /* 00857055: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085705b: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857024); r_esp += 4; return;
}

void f_00857060(void)
{
    FN_ENTER(0x00857060);
    /* 00857060: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00857063: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00857069: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085706b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0085706d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0085706f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00857071: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00857073: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00857077: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00857078: jbe 0x857087 */ if ((fC||fZ)) goto L_00857087;
L_0085707a:; BB(0x0085707a);
    /* 0085707a: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00857080: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857083: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857085: jmp 0x857092 */ goto L_00857092;
L_00857087:; BB(0x00857087);
    /* 00857087: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 0085708d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857090: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00857092:; BB(0x00857092);
    /* 00857092: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857097u); f_00859dd6();
    /* 00857097: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085709d: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857060); r_esp += 4; return;
}

void f_008570a2(void)
{
    FN_ENTER(0x008570a2);
    /* 008570a2: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8570a7u); f_00859dd6();
    /* 008570a7: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008570ad: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008570a2); r_esp += 4; return;
}

void f_008570b2(void)
{
    FN_ENTER(0x008570b2);
    /* 008570b2: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8570b7u); f_00859dd6();
    /* 008570b7: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008570bd: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008570b2); r_esp += 4; return;
}

void f_008570c2(void)
{
    FN_ENTER(0x008570c2);
    /* 008570c2: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8570c7u); f_00859dd6();
    /* 008570c7: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008570cd: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008570c2); r_esp += 4; return;
}

void f_008570d2(void)
{
    FN_ENTER(0x008570d2);
    /* 008570d2: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 008570d7: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008570da: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008570dc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8570e1u); f_00859dd6();
    /* 008570e1: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008570e7: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008570d2); r_esp += 4; return;
}

void f_008570ec(void)
{
    FN_ENTER(0x008570ec);
    /* 008570ec: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 008570f2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008570f5: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008570f7: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8570fcu); f_00859dd6();
    /* 008570fc: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857102: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008570ec); r_esp += 4; return;
}

void f_00857107(void)
{
    FN_ENTER(0x00857107);
    /* 00857107: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85710cu); f_00859dd6();
    /* 0085710c: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00857112: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857107); r_esp += 4; return;
}

void f_00857117(void)
{
    FN_ENTER(0x00857117);
    /* 00857117: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 0085711d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857120: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857122: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857127u); f_00859dd6();
    /* 00857127: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085712d: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857117); r_esp += 4; return;
}

void f_00857132(void)
{
    FN_ENTER(0x00857132);
    /* 00857132: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00857137: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085713a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085713c: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857141u); f_00859dd6();
    /* 00857141: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857147: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857132); r_esp += 4; return;
}

void f_0085714c(void)
{
    FN_ENTER(0x0085714c);
    /* 0085714c: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00857151: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857154: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00857156: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85715bu); f_00859dd6();
    /* 0085715b: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00857161: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085714c); r_esp += 4; return;
}

void f_00857166(void)
{
    FN_ENTER(0x00857166);
    /* 00857166: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 0085716b: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085716e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00857170: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857175u); f_00859dd6();
    /* 00857175: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085717b: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857166); r_esp += 4; return;
}

void f_00857180(void)
{
    FN_ENTER(0x00857180);
    /* 00857180: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00857186: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857189: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085718b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857190u); f_00859dd6();
    /* 00857190: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857196: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857180); r_esp += 4; return;
}

void f_0085719b(void)
{
    FN_ENTER(0x0085719b);
    /* 0085719b: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008571a1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008571a4: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008571a6: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8571abu); f_00859dd6();
    /* 008571ab: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008571b1: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085719b); r_esp += 4; return;
}

void f_008571b6(void)
{
    FN_ENTER(0x008571b6);
    /* 008571b6: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008571bc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008571bf: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008571c1: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8571c6u); f_00859dd6();
    /* 008571c6: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008571cc: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008571b6); r_esp += 4; return;
}

void f_008571d1(void)
{
    FN_ENTER(0x008571d1);
    /* 008571d1: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008571d7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008571da: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008571dc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8571e1u); f_00859dd6();
    /* 008571e1: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008571e7: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008571d1); r_esp += 4; return;
}

void f_008571ec(void)
{
    FN_ENTER(0x008571ec);
    /* 008571ec: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 008571f2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008571f5: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008571f7: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8571fcu); f_00859dd6();
    /* 008571fc: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00857202: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008571ec); r_esp += 4; return;
}

void f_00857207(void)
{
    FN_ENTER(0x00857207);
    /* 00857207: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 0085720d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857210: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857212: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857217u); f_00859dd6();
    /* 00857217: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085721d: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857207); r_esp += 4; return;
}

void f_00857222(void)
{
    FN_ENTER(0x00857222);
    /* 00857222: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00857227: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085722a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085722c: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857231u); f_00859dd6();
    /* 00857231: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857237: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857222); r_esp += 4; return;
}

void f_0085723c(void)
{
    FN_ENTER(0x0085723c);
    /* 0085723c: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00857242: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857245: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00857247: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85724cu); f_00859dd6();
    /* 0085724c: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857252: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085723c); r_esp += 4; return;
}

void f_00857257(void)
{
    FN_ENTER(0x00857257);
    /* 00857257: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 0085725d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857260: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857262: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857267u); f_00859dd6();
    /* 00857267: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085726d: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857257); r_esp += 4; return;
}

void f_00857272(void)
{
    FN_ENTER(0x00857272);
    /* 00857272: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00857277: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085727a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085727c: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857281u); f_00859dd6();
    /* 00857281: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00857287: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857272); r_esp += 4; return;
}

void f_0085728c(void)
{
    FN_ENTER(0x0085728c);
    /* 0085728c: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00857292: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857295: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00857297: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85729cu); f_00859dd6();
    /* 0085729c: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008572a2: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085728c); r_esp += 4; return;
}

void f_008572a7(void)
{
    FN_ENTER(0x008572a7);
    /* 008572a7: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008572ad: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008572b0: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008572b2: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8572b7u); f_00859dd6();
    /* 008572b7: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008572bd: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008572a7); r_esp += 4; return;
}

void f_008572c2(void)
{
    FN_ENTER(0x008572c2);
    /* 008572c2: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 008572c7: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008572ca: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008572cc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8572d1u); f_00859dd6();
    /* 008572d1: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008572d7: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008572c2); r_esp += 4; return;
}

void f_008572dc(void)
{
    FN_ENTER(0x008572dc);
    /* 008572dc: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 008572e2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008572e5: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008572e7: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8572ecu); f_00859dd6();
    /* 008572ec: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008572f2: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008572dc); r_esp += 4; return;
}

void f_008572f7(void)
{
    FN_ENTER(0x008572f7);
    /* 008572f7: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008572fd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857300: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857302: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857307u); f_00859dd6();
    /* 00857307: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085730d: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008572f7); r_esp += 4; return;
}

void f_00857312(void)
{
    FN_ENTER(0x00857312);
    /* 00857312: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00857315: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00857318: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0085731a: mov edx, dword ptr [0x995ab0] */ r_edx = R32((u32)(0x995ab0u));
    /* 00857320: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00857322: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00857326: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 0085732c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0085732e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0085732f: jae 0x85733d */ if (!fC) goto L_0085733d;
L_00857331:; BB(0x00857331);
    /* 00857331: mov eax, dword ptr [0x995ab4] */ r_eax = R32((u32)(0x995ab4u));
    /* 00857336: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857339: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085733b: jmp 0x857342 */ goto L_00857342;
L_0085733d:; BB(0x0085733d);
    /* 0085733d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857340: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00857342:; BB(0x00857342);
    /* 00857342: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857347u); f_00859dd6();
    /* 00857347: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085734d: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857312); r_esp += 4; return;
}

void f_00857352(void)
{
    FN_ENTER(0x00857352);
    /* 00857352: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00857355: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00857358: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0085735a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085735c: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00857360: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 00857366: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00857368: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00857369: jae 0x857377 */ if (!fC) goto L_00857377;
L_0085736b:; BB(0x0085736b);
    /* 0085736b: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00857370: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857373: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00857375: jmp 0x857381 */ goto L_00857381;
L_00857377:; BB(0x00857377);
    /* 00857377: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 0085737c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085737f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00857381:; BB(0x00857381);
    /* 00857381: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857386u); f_00859dd6();
    /* 00857386: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085738c: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857352); r_esp += 4; return;
}

void f_00857391(void)
{
    FN_ENTER(0x00857391);
    /* 00857391: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00857394: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 0085739a: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085739c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0085739e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008573a0: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008573a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008573a5: jae 0x8573b6 */ if (!fC) goto L_008573b6;
L_008573a7:; BB(0x008573a7);
    /* 008573a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008573a9: fld qword ptr [0x995ad8] */ FPUSH(R_F64((u32)(0x995ad8u)));
    /* 008573af: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008573b2: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008573b4: jmp 0x8573bb */ goto L_008573bb;
L_008573b6:; BB(0x008573b6);
    /* 008573b6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008573b9: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_008573bb:; BB(0x008573bb);
    /* 008573bb: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8573c0u); f_00859dd6();
    /* 008573c0: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008573c6: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857391); r_esp += 4; return;
}

void f_008573cb(void)
{
    FN_ENTER(0x008573cb);
    /* 008573cb: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008573ce: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008573d0: fcom qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); 
    /* 008573d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008573d8: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008573dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008573dd: jae 0x8573ec */ if (!fC) goto L_008573ec;
L_008573df:; BB(0x008573df);
    /* 008573df: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008573e5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008573e8: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008573ea: jmp 0x8573f7 */ goto L_008573f7;
L_008573ec:; BB(0x008573ec);
    /* 008573ec: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 008573f2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008573f5: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_008573f7:; BB(0x008573f7);
    /* 008573f7: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8573fcu); f_00859dd6();
    /* 008573fc: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857402: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008573cb); r_esp += 4; return;
}

void f_00857407(void)
{
    FN_ENTER(0x00857407);
    /* 00857407: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085740a: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00857410: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00857412: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00857414: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00857416: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085741a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0085741b: jae 0x85742c */ if (!fC) goto L_0085742c;
L_0085741d:; BB(0x0085741d);
    /* 0085741d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0085741f: fld xword ptr [0x995b1a] */ FPUSH(R_F80((u32)(0x995b1au)));
    /* 00857425: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857428: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085742a: jmp 0x857431 */ goto L_00857431;
L_0085742c:; BB(0x0085742c);
    /* 0085742c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085742f: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00857431:; BB(0x00857431);
    /* 00857431: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857436u); f_00859dd6();
    /* 00857436: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085743c: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857407); r_esp += 4; return;
}

void f_00857441(void)
{
    FN_ENTER(0x00857441);
    /* 00857441: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00857444: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 0085744a: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085744c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0085744e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00857450: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00857452: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00857454: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00857458: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00857459: jae 0x857468 */ if (!fC) goto L_00857468;
L_0085745b:; BB(0x0085745b);
    /* 0085745b: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00857461: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857464: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857466: jmp 0x857473 */ goto L_00857473;
L_00857468:; BB(0x00857468);
    /* 00857468: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 0085746e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857471: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00857473:; BB(0x00857473);
    /* 00857473: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857478u); f_00859dd6();
    /* 00857478: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085747e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857441); r_esp += 4; return;
}

void f_00857483(void)
{
    FN_ENTER(0x00857483);
    /* 00857483: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857488u); f_00859dd6();
    /* 00857488: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085748e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857483); r_esp += 4; return;
}

void f_00857493(void)
{
    FN_ENTER(0x00857493);
    /* 00857493: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857498u); f_00859dd6();
    /* 00857498: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085749e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857493); r_esp += 4; return;
}

void f_008574a3(void)
{
    FN_ENTER(0x008574a3);
    /* 008574a3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8574a8u); f_00859dd6();
    /* 008574a8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008574ae: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008574a3); r_esp += 4; return;
}

void f_008574b3(void)
{
    FN_ENTER(0x008574b3);
    /* 008574b3: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 008574b8: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008574bb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008574bd: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8574c2u); f_00859dd6();
    /* 008574c2: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008574c8: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008574b3); r_esp += 4; return;
}

void f_008574cd(void)
{
    FN_ENTER(0x008574cd);
    /* 008574cd: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 008574d3: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008574d6: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008574d8: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8574ddu); f_00859dd6();
    /* 008574dd: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008574e3: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008574cd); r_esp += 4; return;
}

void f_008574e8(void)
{
    FN_ENTER(0x008574e8);
    /* 008574e8: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 008574ee: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008574f1: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008574f3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8574f8u); f_00859dd6();
    /* 008574f8: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008574fe: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008574e8); r_esp += 4; return;
}

void f_00857503(void)
{
    FN_ENTER(0x00857503);
    /* 00857503: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857508u); f_00859dd6();
    /* 00857508: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085750e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857503); r_esp += 4; return;
}

void f_00857513(void)
{
    FN_ENTER(0x00857513);
    /* 00857513: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857518u); f_00859dd6();
    /* 00857518: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085751e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857513); r_esp += 4; return;
}

void f_00857523(void)
{
    FN_ENTER(0x00857523);
    /* 00857523: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857528u); f_00859dd6();
    /* 00857528: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085752e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857523); r_esp += 4; return;
}

void f_00857533(void)
{
    FN_ENTER(0x00857533);
    /* 00857533: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857538u); f_00859dd6();
    /* 00857538: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085753e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857533); r_esp += 4; return;
}

void f_00857543(void)
{
    FN_ENTER(0x00857543);
    /* 00857543: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857548u); f_00859dd6();
    /* 00857548: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085754e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857543); r_esp += 4; return;
}

void f_00857553(void)
{
    FN_ENTER(0x00857553);
    /* 00857553: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857558u); f_00859dd6();
    /* 00857558: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085755e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857553); r_esp += 4; return;
}

void f_00857563(void)
{
    FN_ENTER(0x00857563);
    /* 00857563: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00857568: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085756b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085756d: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857572u); f_00859dd6();
    /* 00857572: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00857578: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857563); r_esp += 4; return;
}

void f_0085757d(void)
{
    FN_ENTER(0x0085757d);
    /* 0085757d: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00857583: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857586: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00857588: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85758du); f_00859dd6();
    /* 0085758d: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00857593: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085757d); r_esp += 4; return;
}

void f_00857598(void)
{
    FN_ENTER(0x00857598);
    /* 00857598: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 0085759e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008575a1: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008575a3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8575a8u); f_00859dd6();
    /* 008575a8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008575ae: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857598); r_esp += 4; return;
}

void f_008575b3(void)
{
    FN_ENTER(0x008575b3);
    /* 008575b3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8575b8u); f_00859dd6();
    /* 008575b8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008575be: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008575b3); r_esp += 4; return;
}

void f_008575c3(void)
{
    FN_ENTER(0x008575c3);
    /* 008575c3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8575c8u); f_00859dd6();
    /* 008575c8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008575ce: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008575c3); r_esp += 4; return;
}

void f_008575d3(void)
{
    FN_ENTER(0x008575d3);
    /* 008575d3: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 008575d8: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008575db: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008575dd: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8575e2u); f_00859dd6();
    /* 008575e2: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008575e8: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008575d3); r_esp += 4; return;
}

void f_008575ed(void)
{
    FN_ENTER(0x008575ed);
    /* 008575ed: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008575f0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008575f2: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 008575f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008575fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008575fb: jae 0x857609 */ if (!fC) goto L_00857609;
L_008575fd:; BB(0x008575fd);
    /* 008575fd: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00857602: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857605: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00857607: jmp 0x857613 */ goto L_00857613;
L_00857609:; BB(0x00857609);
    /* 00857609: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 0085760e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857611: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00857613:; BB(0x00857613);
    /* 00857613: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857618u); f_00859dd6();
    /* 00857618: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085761e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008575ed); r_esp += 4; return;
}

void f_00857623(void)
{
    FN_ENTER(0x00857623);
    /* 00857623: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857628u); f_00859dd6();
    /* 00857628: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085762e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857623); r_esp += 4; return;
}

void f_00857633(void)
{
    FN_ENTER(0x00857633);
    /* 00857633: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857638u); f_00859dd6();
    /* 00857638: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085763e: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857633); r_esp += 4; return;
}

void f_00857643(void)
{
    FN_ENTER(0x00857643);
    /* 00857643: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00857649: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085764c: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085764e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857653u); f_00859dd6();
    /* 00857653: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857659: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857643); r_esp += 4; return;
}

void f_0085765e(void)
{
    FN_ENTER(0x0085765e);
    /* 0085765e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857661: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00857663: fcomp qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); FPOP();
    /* 00857669: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0085766b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0085766c: jae 0x85767b */ if (!fC) goto L_0085767b;
L_0085766e:; BB(0x0085766e);
    /* 0085766e: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00857674: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857677: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00857679: jmp 0x857686 */ goto L_00857686;
L_0085767b:; BB(0x0085767b);
    /* 0085767b: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00857681: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857684: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_00857686:; BB(0x00857686);
    /* 00857686: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85768bu); f_00859dd6();
    /* 0085768b: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857691: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085765e); r_esp += 4; return;
}

void f_00857696(void)
{
    FN_ENTER(0x00857696);
    /* 00857696: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85769bu); f_00859dd6();
    /* 0085769b: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008576a1: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857696); r_esp += 4; return;
}

void f_008576a6(void)
{
    FN_ENTER(0x008576a6);
    /* 008576a6: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8576abu); f_00859dd6();
    /* 008576ab: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008576b1: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008576a6); r_esp += 4; return;
}

void f_008576b6(void)
{
    FN_ENTER(0x008576b6);
    /* 008576b6: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008576bc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008576bf: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008576c1: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8576c6u); f_00859dd6();
    /* 008576c6: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008576cc: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008576b6); r_esp += 4; return;
}

void f_008576d1(void)
{
    FN_ENTER(0x008576d1);
    /* 008576d1: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008576d7: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008576da: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008576dc: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 008576de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008576e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008576e1: jae 0x8576f0 */ if (!fC) goto L_008576f0;
L_008576e3:; BB(0x008576e3);
    /* 008576e3: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 008576e9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008576ec: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008576ee: jmp 0x8576fb */ goto L_008576fb;
L_008576f0:; BB(0x008576f0);
    /* 008576f0: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 008576f6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008576f9: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_008576fb:; BB(0x008576fb);
    /* 008576fb: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857700u); f_00859dd6();
    /* 00857700: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857706: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008576d1); r_esp += 4; return;
}

void f_0085770b(void)
{
    FN_ENTER(0x0085770b);
    /* 0085770b: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00857710: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857713: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00857715: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85771au); f_00859dd6();
    /* 0085771a: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857720: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085770b); r_esp += 4; return;
}

void f_00857725(void)
{
    FN_ENTER(0x00857725);
    /* 00857725: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 0085772a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085772d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085772f: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857734u); f_00859dd6();
    /* 00857734: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085773a: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857725); r_esp += 4; return;
}

void f_0085773f(void)
{
    FN_ENTER(0x0085773f);
    /* 0085773f: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00857745: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857748: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085774a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85774fu); f_00859dd6();
    /* 0085774f: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857755: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085773f); r_esp += 4; return;
}

void f_0085775a(void)
{
    FN_ENTER(0x0085775a);
    /* 0085775a: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00857760: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857763: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00857765: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85776au); f_00859dd6();
    /* 0085776a: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857770: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x0085775a); r_esp += 4; return;
}

void f_00857775(void)
{
    FN_ENTER(0x00857775);
    /* 00857775: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 0085777b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085777e: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857780: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857785u); f_00859dd6();
    /* 00857785: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085778b: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857775); r_esp += 4; return;
}

void f_00857790(void)
{
    FN_ENTER(0x00857790);
    /* 00857790: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00857796: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857799: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085779b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8577a0u); f_00859dd6();
    /* 008577a0: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008577a6: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857790); r_esp += 4; return;
}

void f_008577ab(void)
{
    FN_ENTER(0x008577ab);
    /* 008577ab: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 008577b0: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008577b3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008577b5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8577bau); f_00859dd6();
    /* 008577ba: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008577c0: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008577ab); r_esp += 4; return;
}

void f_008577c2(void)
{
    FN_ENTER(0x008577c2);
    /* 008577c2: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 008577c7: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008577ca: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008577cc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8577d1u); f_00859dd6();
    /* 008577d1: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008577d7: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008577c2); r_esp += 4; return;
}

void f_008577d9(void)
{
    FN_ENTER(0x008577d9);
    /* 008577d9: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008577df: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008577e2: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008577e4: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8577e9u); f_00859dd6();
    /* 008577e9: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008577ef: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008577d9); r_esp += 4; return;
}

void f_008577f1(void)
{
    FN_ENTER(0x008577f1);
    /* 008577f1: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008577f7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008577fa: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008577fc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857801u); f_00859dd6();
    /* 00857801: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857807: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x008577f1); r_esp += 4; return;
}

void f_00857809(void)
{
    FN_ENTER(0x00857809);
    /* 00857809: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 0085780f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00857812: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00857814: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857819u); f_00859dd6();
    /* 00857819: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085781f: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857809); r_esp += 4; return;
}

void f_00857821(void)
{
    FN_ENTER(0x00857821);
    /* 00857821: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00857827: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085782a: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085782c: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857831u); f_00859dd6();
    /* 00857831: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857821); r_esp += 4; return;
}

void f_00857837(void)
{
    FN_ENTER(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00857837); r_esp += 4; return;
}

void f_0085784c(void)
{
    FN_ENTER(0x0085784c);
    /* 0085784c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085784f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00857851: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00857853: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00857855: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857857: jne 0x85789e */ if (!fZ) goto L_0085789e;
L_00857859:; BB(0x00857859);
    /* 00857859: jmp 0x8578a2 */ goto L_008578a2;
L_0085789e:; BB(0x0085789e);
    /* 0085789e: mov esp, ebx */ r_esp = r_ebx;
    /* 008578a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578a1: ret  */ FN_RET(0x0085784c); r_esp += 4; return;
L_008578a2:; BB(0x008578a2);
    /* 008578a2: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8578a7u); f_00859dd6();
    /* 008578a7: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008578ad: jmp 0x85789e */ goto L_0085789e;
}

void f_0085785b(void)
{
    FN_ENTER(0x0085785b);
    /* 0085785b: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085785e: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00857861: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00857863: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00857866: mov ecx, eax */ r_ecx = r_eax;
    /* 00857868: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0085786b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085786d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085786f: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00857871: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857873: jne 0x85789e */ if (!fZ) goto L_0085789e;
L_00857875:; BB(0x00857875);
    /* 00857875: jmp 0x8578af */ goto L_008578af;
L_0085789e:; BB(0x0085789e);
    /* 0085789e: mov esp, ebx */ r_esp = r_ebx;
    /* 008578a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578a1: ret  */ FN_RET(0x0085785b); r_esp += 4; return;
L_008578af:; BB(0x008578af);
    /* 008578af: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8578b4u); f_00859dd6();
    /* 008578b4: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008578ba: jmp 0x85789e */ goto L_0085789e;
}

void f_00857877(void)
{
    FN_ENTER(0x00857877);
    /* 00857877: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085787a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085787d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0085787f: or ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857882: jne 0x85789e */ if (!fZ) goto L_0085789e;
L_00857884:; BB(0x00857884);
    /* 00857884: jmp 0x8578bc */ goto L_008578bc;
L_0085789e:; BB(0x0085789e);
    /* 0085789e: mov esp, ebx */ r_esp = r_ebx;
    /* 008578a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578a1: ret  */ FN_RET(0x00857877); r_esp += 4; return;
L_008578bc:; BB(0x008578bc);
    /* 008578bc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8578c1u); f_00859dd6();
    /* 008578c1: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008578c7: jmp 0x85789e */ goto L_0085789e;
}

void f_00857886(void)
{
    FN_ENTER(0x00857886);
    /* 00857886: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85788bu); f_00859dd6();
    /* 0085788b: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00857891: jmp 0x85789e */ goto L_0085789e;
L_0085789e:; BB(0x0085789e);
    /* 0085789e: mov esp, ebx */ r_esp = r_ebx;
    /* 008578a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578a1: ret  */ FN_RET(0x00857886); r_esp += 4; return;
}

void f_00857893(void)
{
    FN_ENTER(0x00857893);
    /* 00857893: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857898u); f_00859dd6();
    /* 00857898: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085789e: mov esp, ebx */ r_esp = r_ebx;
    /* 008578a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578a1: ret  */ FN_RET(0x00857893); r_esp += 4; return;
}

void f_0085789e(void)
{
    FN_ENTER(0x0085789e);
    /* 0085789e: mov esp, ebx */ r_esp = r_ebx;
    /* 008578a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578a1: ret  */ FN_RET(0x0085789e); r_esp += 4; return;
}

void f_008578e4(void)
{
    FN_ENTER(0x008578e4);
    /* 008578e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008578e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008578e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008578e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008578e8: mov esp, ebp */ r_esp = r_ebp;
    /* 008578ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008578eb: ret  */ FN_RET(0x008578e4); r_esp += 4; return;
}

void f_008579ea(void) /* sub_8579EA */
{
    FN_ENTER(0x008579ea);
    /* 008579ea: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008579eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008579ec: xchg dword ptr [esp], eax */ { u32 x = R32((u32)(r_esp)); u32 y = r_eax; W32((u32)(r_esp), y); r_eax = x; }
    /* 008579ef: jmp eax */ FN_RET(0x008579ea); return;
}

void f_00857a1a(void)
{
    FN_ENTER(0x00857a1a);
    /* 00857a1a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00857a1d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00857a20: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857a23: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00857a26: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00857a29: mov edi, dword ptr fs:[0] */ r_edi = R32((u32)(TEB));
    /* 00857a30: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00857a33: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00857a35: mov dword ptr fs:[0], ebx */ W32((u32)(TEB), r_ebx);
    /* 00857a3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00857a3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857a3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857a3f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857a40: ret 8 */ FN_RET(0x00857a1a); r_esp += 12; return;
}

void f_00857a43(void) /* ___CxxFrameHandler */
{
    FN_ENTER(0x00857a43);
    /* 00857a43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00857a44: mov ebp, esp */ r_ebp = r_esp;
    /* 00857a46: sub esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00857a49: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857a4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857a4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00857a4c: cld  */ rt_df = 0;
    /* 00857a4d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00857a50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00857a52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857a53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857a54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857a55: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a58: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a5b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a5e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a61: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857a64: call 0x85c4a8 */ r_esp -= 4; W32(r_esp, 0x857a69u); f_0085c4a8();
    /* 00857a69: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00857a6c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00857a6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00857a70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857a71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857a72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00857a75: mov esp, ebp */ r_esp = r_ebp;
    /* 00857a77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00857a78: ret  */ FN_RET(0x00857a43); r_esp += 4; return;
}

void f_00857b4f(void)
{
    FN_ENTER(0x00857b4f);
    /* 00857b4f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857b53: je 0x857b6c */ if (fZ) goto L_00857b6c;
L_00857b55:; BB(0x00857b55);
    /* 00857b55: mov ebx, dword ptr fs:[0] */ r_ebx = R32((u32)(TEB));
    /* 00857b5c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00857b5e: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00857b61: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00857b63: mov dword ptr fs:[0], ebx */ W32((u32)(TEB), r_ebx);
    /* 00857b6a: jmp 0x857b75 */ goto L_00857b75;
L_00857b6c:; BB(0x00857b6c);
    /* 00857b6c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00857b6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
L_00857b75:; BB(0x00857b75);
    /* 00857b75: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00857b78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857b79: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857b7a: ret  */ FN_RET(0x00857b4f); r_esp += 4; return;
}

void f_00857dce(void) /* __fpmath */
{
    FN_ENTER(0x00857dce);
    /* 00857dce: call 0x857d96 */ r_esp -= 4; W32(r_esp, 0x857dd3u); f_00857d96();
    /* 00857dd3: call 0x85cd5d */ r_esp -= 4; W32(r_esp, 0x857dd8u); f_0085cd5d();
    /* 00857dd8: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857ddd: mov dword ptr [0xae7a04], eax */ W32((u32)(0xae7a04u), r_eax);
    /* 00857de2: je 0x857de9 */ if (fZ) goto L_00857de9;
L_00857de4:; BB(0x00857de4);
    /* 00857de4: call 0x85cd0b */ r_esp -= 4; W32(r_esp, 0x857de9u); f_0085cd0b();
L_00857de9:; BB(0x00857de9);
    /* 00857de9: fnclex  */ ;
    /* 00857deb: ret  */ FN_RET(0x00857dce); r_esp += 4; return;
}

void f_00857dec(void) /* _wcsncpy */
{
    FN_ENTER(0x00857dec);
    /* 00857dec: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00857df0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857df2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857df3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00857df4: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00857df8: mov esi, edi */ r_esi = r_edi;
    /* 00857dfa: je 0x857e24 */ if (fZ) goto L_00857e24;
L_00857dfc:; BB(0x00857dfc);
    /* 00857dfc: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00857e00:; BB(0x00857e00);
    /* 00857e00: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00857e03: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 00857e06: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00857e07: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00857e08: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857e09: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857e0a: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00857e0d: je 0x857e12 */ if (fZ) goto L_00857e12;
L_00857e0f:; BB(0x00857e0f);
    /* 00857e0f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00857e10: jne 0x857e00 */ if (!fZ) goto L_00857e00;
L_00857e12:; BB(0x00857e12);
    /* 00857e12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857e14: je 0x857e24 */ if (fZ) goto L_00857e24;
L_00857e16:; BB(0x00857e16);
    /* 00857e16: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00857e17: je 0x857e24 */ if (fZ) goto L_00857e24;
L_00857e19:; BB(0x00857e19);
    /* 00857e19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00857e1b: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 00857e1d: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00857e1f: adc ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00857e21: rep stosw word ptr es:[edi], ax */ while (r_ecx) { W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2; r_ecx--; }
L_00857e24:; BB(0x00857e24);
    /* 00857e24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00857e25: mov eax, esi */ r_eax = r_esi;
    /* 00857e27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857e28: ret  */ FN_RET(0x00857dec); r_esp += 4; return;
}

void f_00857e29(void) /* _swprintf */
{
    FN_ENTER(0x00857e29);
    /* 00857e29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00857e2a: mov ebp, esp */ r_ebp = r_esp;
    /* 00857e2c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00857e2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00857e32: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00857e35: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00857e38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857e39: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 00857e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857e3d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857e40: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00857e43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857e44: mov dword ptr [ebp - 0x14], 0x42 */ W32((u32)(r_ebp+0xffffffecu), 0x42u);
    /* 00857e4b: mov dword ptr [ebp - 0x1c], 0x7fffffff */ W32((u32)(r_ebp+0xffffffe4u), 0x7fffffffu);
    /* 00857e52: call 0x85cf26 */ r_esp -= 4; W32(r_esp, 0x857e57u); f_0085cf26();
    /* 00857e57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fC = (r < a); }
    /* 00857e5a: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00857e5d: mov esi, eax */ r_esi = r_eax;
    /* 00857e5f: js 0x857e6c */ if (fS) goto L_00857e6c;
L_00857e61:; BB(0x00857e61);
    /* 00857e61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00857e64: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00857e67: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00857e6a: jmp 0x857e79 */ goto L_00857e79;
L_00857e6c:; BB(0x00857e6c);
    /* 00857e6c: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00857e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857e70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857e72: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x857e77u); f_0085cd86();
    /* 00857e77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00857e78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00857e79:; BB(0x00857e79);
    /* 00857e79: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00857e7c: js 0x857e86 */ if (fS) goto L_00857e86;
L_00857e7e:; BB(0x00857e7e);
    /* 00857e7e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00857e81: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00857e84: jmp 0x857e93 */ goto L_00857e93;
L_00857e86:; BB(0x00857e86);
    /* 00857e86: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00857e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857e8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00857e8c: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x857e91u); f_0085cd86();
    /* 00857e91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00857e92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00857e93:; BB(0x00857e93);
    /* 00857e93: mov eax, esi */ r_eax = r_esi;
    /* 00857e95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857e96: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857e97: ret  */ FN_RET(0x00857e29); r_esp += 4; return;
}

void f_00857f98(void) /* _mbstowcs */
{
    FN_ENTER(0x00857f98);
    /* 00857f98: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x857f9du); f_0085c583();
    /* 00857f9d: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00857fa0: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857fa6: je 0x857fad */ if (fZ) goto L_00857fad;
L_00857fa8:; BB(0x00857fa8);
    /* 00857fa8: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x857fadu); f_0085daca();
L_00857fad:; BB(0x00857fad);
    /* 00857fad: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857fb1: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857fb5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857fba: call 0x857e9d */ r_esp -= 4; W32(r_esp, 0x857fbfu); f_00857e9d();
    /* 00857fbf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00857fc2: ret  */ FN_RET(0x00857f98); r_esp += 4; return;
}

void f_00857fc3(void) /* _wcscat */
{
    FN_ENTER(0x00857fc3);
    /* 00857fc3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00857fc7: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00857fcb: mov edx, eax */ r_edx = r_eax;
    /* 00857fcd: je 0x857fd7 */ if (fZ) goto L_00857fd7;
L_00857fcf:; BB(0x00857fcf);
    /* 00857fcf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857fd0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857fd1: cmp word ptr [edx], 0 */ {  u32 a = R16((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00857fd5: jne 0x857fcf */ if (!fZ) goto L_00857fcf;
L_00857fd7:; BB(0x00857fd7);
    /* 00857fd7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857fd8: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00857fdc:; BB(0x00857fdc);
    /* 00857fdc: mov cx, word ptr [esi] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 00857fdf: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00857fe2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857fe3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857fe4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00857fe5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00857fe6: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857fe9: jne 0x857fdc */ if (!fZ) goto L_00857fdc;
L_00857feb:; BB(0x00857feb);
    /* 00857feb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857fec: ret  */ FN_RET(0x00857fc3); r_esp += 4; return;
}

void f_00857fed(void) /* _wcscpy */
{
    FN_ENTER(0x00857fed);
    /* 00857fed: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00857ff1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
L_00857ff5:; BB(0x00857ff5);
    /* 00857ff5: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00857ff8: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00857ffb: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00857ffc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00857ffd: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857ffe: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857fff: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858002: jne 0x857ff5 */ if (!fZ) goto L_00857ff5;
L_00858004:; BB(0x00858004);
    /* 00858004: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00858008: ret  */ FN_RET(0x00857fed); r_esp += 4; return;
}

