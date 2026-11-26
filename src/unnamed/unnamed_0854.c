#include "protos.h"

void f_0085404a(void)
{
    FN_ENTER(0x0085404a);
    /* 0085404a: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00854052: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854054: mov dword ptr [esp + 0x64], 0xb485b4 */ W32((u32)(r_esp+0x64u), 0xb485b4u);
    /* 0085405c: jne 0x8540b2 */ if (!fZ) goto L_008540b2;
L_0085405e:; BB(0x0085405e);
    /* 0085405e: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00854063: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854066: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00854069: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085406b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085406d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00854071: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00854074: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854076: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085407a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085407d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085407f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854083: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854088: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85408eu); call_ind(t); }
    /* 0085408e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085408f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854091: jne 0x8540eb */ if (!fZ) goto L_008540eb;
L_00854093:; BB(0x00854093);
    /* 00854093: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00854098: push 0xb485f4 */ { u32 v = 0xb485f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085409d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8540a2u); f_0085b5fd();
    /* 008540a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008540a5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8540aau); f_00859dd6();
    /* 008540aa: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008540b0: jmp 0x8540eb */ goto L_008540eb;
L_008540b2:; BB(0x008540b2);
    /* 008540b2: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 008540b7: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008540ba: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008540bd: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008540bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008540c1: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008540c5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008540c8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008540ca: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008540ce: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008540d1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008540d3: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008540d7: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008540db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008540dc: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8540e2u); call_ind(t); }
    /* 008540e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008540e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008540e5: je 0x856b20 */ if (fZ) goto L_00856b20;
L_008540eb:; BB(0x008540eb);
    /* 008540eb: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008540ef: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008540f2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008540f4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085404a); r_esp += 4; return;
L_00856b20:; BB(0x00856b20);
    /* 00856b20: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b25u); f_00859dd6();
    /* 00856b25: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856b2b: jmp 0x8540eb */ goto L_008540eb;
}

void f_008540f9(void)
{
    FN_ENTER(0x008540f9);
    /* 008540f9: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00854101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854103: mov dword ptr [esp + 0x64], 0xb485b4 */ W32((u32)(r_esp+0x64u), 0xb485b4u);
    /* 0085410b: jne 0x854161 */ if (!fZ) goto L_00854161;
L_0085410d:; BB(0x0085410d);
    /* 0085410d: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00854112: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854115: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00854118: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085411a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085411c: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00854120: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00854123: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854125: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854129: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085412c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085412e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854132: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854137: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85413du); call_ind(t); }
    /* 0085413d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085413e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854140: jne 0x85419a */ if (!fZ) goto L_0085419a;
L_00854142:; BB(0x00854142);
    /* 00854142: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00854147: push 0xb485f4 */ { u32 v = 0xb485f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085414c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854151u); f_0085b5fd();
    /* 00854151: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854154: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854159u); f_00859dd6();
    /* 00854159: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085415f: jmp 0x85419a */ goto L_0085419a;
L_00854161:; BB(0x00854161);
    /* 00854161: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00854166: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854169: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085416c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085416e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854170: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00854174: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00854177: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854179: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085417d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854180: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854182: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854186: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085418a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085418b: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854191u); call_ind(t); }
    /* 00854191: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854194: je 0x856b30 */ if (fZ) goto L_00856b30;
L_0085419a:; BB(0x0085419a);
    /* 0085419a: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085419e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008541a1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008541a3: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008540f9); r_esp += 4; return;
L_00856b30:; BB(0x00856b30);
    /* 00856b30: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b35u); f_00859dd6();
    /* 00856b35: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856b3b: jmp 0x85419a */ goto L_0085419a;
}

void f_008541a8(void)
{
    FN_ENTER(0x008541a8);
    /* 008541a8: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 008541ae: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008541b1: mov dword ptr [esp + 0x40], 5 */ W32((u32)(r_esp+0x40u), 0x5u);
    /* 008541b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008541bb: mov dword ptr [esp + 0x44], 0xb4859c */ W32((u32)(r_esp+0x44u), 0xb4859cu);
    /* 008541c3: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 008541c5: jne 0x854211 */ if (!fZ) goto L_00854211;
L_008541c7:; BB(0x008541c7);
    /* 008541c7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008541ca: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008541cd: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008541d0: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008541d2: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008541d6: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008541da: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008541dc: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008541e0: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008541e2: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008541e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008541e7: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8541edu); call_ind(t); }
    /* 008541ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008541ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008541f0: jne 0x854240 */ if (!fZ) goto L_00854240;
L_008541f2:; BB(0x008541f2);
    /* 008541f2: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008541f7: push 0xb485a0 */ { u32 v = 0xb485a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008541fc: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854201u); f_0085b5fd();
    /* 00854201: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854204: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854209u); f_00859dd6();
    /* 00854209: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085420f: jmp 0x854240 */ goto L_00854240;
L_00854211:; BB(0x00854211);
    /* 00854211: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854214: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854217: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085421a: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085421c: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854220: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854224: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854226: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085422a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085422c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854231: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854237u); call_ind(t); }
    /* 00854237: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854238: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085423a: je 0x856b40 */ if (fZ) goto L_00856b40;
L_00854240:; BB(0x00854240);
    /* 00854240: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00854244: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854247: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854249: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008541a8); r_esp += 4; return;
L_00856b40:; BB(0x00856b40);
    /* 00856b40: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b45u); f_00859dd6();
    /* 00856b45: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856b4b: jmp 0x854240 */ goto L_00854240;
}

void f_0085424e(void)
{
    FN_ENTER(0x0085424e);
    /* 0085424e: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00854256: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854258: mov dword ptr [esp + 0x44], 0xb4859c */ W32((u32)(r_esp+0x44u), 0xb4859cu);
    /* 00854260: jne 0x8542b7 */ if (!fZ) goto L_008542b7;
L_00854262:; BB(0x00854262);
    /* 00854262: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00854268: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085426b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085426e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854271: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854273: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854276: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854278: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085427c: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085427e: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854282: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00854284: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854288: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085428c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085428d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854293u); call_ind(t); }
    /* 00854293: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854296: jne 0x8542f1 */ if (!fZ) goto L_008542f1;
L_00854298:; BB(0x00854298);
    /* 00854298: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085429d: push 0xb485e0 */ { u32 v = 0xb485e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008542a2: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8542a7u); f_0085b5fd();
    /* 008542a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008542aa: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8542afu); f_00859dd6();
    /* 008542af: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008542b5: jmp 0x8542f1 */ goto L_008542f1;
L_008542b7:; BB(0x008542b7);
    /* 008542b7: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008542bd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008542c0: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008542c3: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008542c6: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008542c8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008542cb: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008542cd: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008542d1: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008542d3: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008542d7: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008542d9: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008542dd: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008542e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008542e2: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8542e8u); call_ind(t); }
    /* 008542e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008542e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008542eb: je 0x856b50 */ if (fZ) goto L_00856b50;
L_008542f1:; BB(0x008542f1);
    /* 008542f1: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008542f5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008542f8: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008542fa: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085424e); r_esp += 4; return;
L_00856b50:; BB(0x00856b50);
    /* 00856b50: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b55u); f_00859dd6();
    /* 00856b55: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856b5b: jmp 0x8542f1 */ goto L_008542f1;
}

void f_008542ff(void)
{
    FN_ENTER(0x008542ff);
    /* 008542ff: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00854307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854309: mov dword ptr [esp + 0x44], 0xb4859c */ W32((u32)(r_esp+0x44u), 0xb4859cu);
    /* 00854311: jne 0x854368 */ if (!fZ) goto L_00854368;
L_00854313:; BB(0x00854313);
    /* 00854313: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00854319: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085431c: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085431f: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854322: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854324: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854327: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854329: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085432d: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085432f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854333: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00854335: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854339: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085433d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085433e: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854344u); call_ind(t); }
    /* 00854344: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854347: jne 0x8543a2 */ if (!fZ) goto L_008543a2;
L_00854349:; BB(0x00854349);
    /* 00854349: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085434e: push 0xb485e0 */ { u32 v = 0xb485e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00854353: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854358u); f_0085b5fd();
    /* 00854358: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085435b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854360u); f_00859dd6();
    /* 00854360: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854366: jmp 0x8543a2 */ goto L_008543a2;
L_00854368:; BB(0x00854368);
    /* 00854368: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 0085436e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854371: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854374: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854377: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854379: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085437c: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085437e: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854382: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00854384: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854388: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085438a: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085438e: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854393: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854399u); call_ind(t); }
    /* 00854399: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085439a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085439c: je 0x856b60 */ if (fZ) goto L_00856b60;
L_008543a2:; BB(0x008543a2);
    /* 008543a2: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008543a6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008543a9: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008543ab: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008542ff); r_esp += 4; return;
L_00856b60:; BB(0x00856b60);
    /* 00856b60: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b65u); f_00859dd6();
    /* 00856b65: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856b6b: jmp 0x8543a2 */ goto L_008543a2;
}

void f_008543b0(void)
{
    FN_ENTER(0x008543b0);
    /* 008543b0: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008543b6: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008543b9: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 008543c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008543c2: mov dword ptr [esp + 4], 0xb48584 */ W32((u32)(r_esp+0x4u), 0xb48584u);
    /* 008543ca: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 008543cc: jne 0x854417 */ if (!fZ) goto L_00854417;
L_008543ce:; BB(0x008543ce);
    /* 008543ce: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008543d1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008543d4: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008543d7: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008543d9: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008543dd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008543e0: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008543e2: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008543e6: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008543e8: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008543ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008543ed: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8543f3u); call_ind(t); }
    /* 008543f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008543f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008543f6: jne 0x854445 */ if (!fZ) goto L_00854445;
L_008543f8:; BB(0x008543f8);
    /* 008543f8: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008543fd: push 0xb48588 */ { u32 v = 0xb48588u; r_esp -= 4; W32(r_esp, v); }
    /* 00854402: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854407u); f_0085b5fd();
    /* 00854407: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085440a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85440fu); f_00859dd6();
    /* 0085440f: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00854415: jmp 0x854445 */ goto L_00854445;
L_00854417:; BB(0x00854417);
    /* 00854417: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085441a: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085441d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854420: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854422: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854426: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854429: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085442b: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085442f: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854431: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854436: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85443cu); call_ind(t); }
    /* 0085443c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085443d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085443f: je 0x856b70 */ if (fZ) goto L_00856b70;
L_00854445:; BB(0x00854445);
    /* 00854445: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00854449: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085444c: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085444e: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008543b0); r_esp += 4; return;
L_00856b70:; BB(0x00856b70);
    /* 00856b70: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b75u); f_00859dd6();
    /* 00856b75: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856b7b: jmp 0x854445 */ goto L_00854445;
}

void f_00854453(void)
{
    FN_ENTER(0x00854453);
    /* 00854453: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0085445a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085445c: mov dword ptr [esp + 4], 0xb48584 */ W32((u32)(r_esp+0x4u), 0xb48584u);
    /* 00854464: jne 0x8544ba */ if (!fZ) goto L_008544ba;
L_00854466:; BB(0x00854466);
    /* 00854466: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 0085446c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085446f: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854472: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854475: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854477: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085447a: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085447c: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854480: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854482: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854486: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854488: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085448c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085448f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854490: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854496u); call_ind(t); }
    /* 00854496: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854499: jne 0x8544f3 */ if (!fZ) goto L_008544f3;
L_0085449b:; BB(0x0085449b);
    /* 0085449b: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008544a0: push 0xb485cc */ { u32 v = 0xb485ccu; r_esp -= 4; W32(r_esp, v); }
    /* 008544a5: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8544aau); f_0085b5fd();
    /* 008544aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008544ad: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8544b2u); f_00859dd6();
    /* 008544b2: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008544b8: jmp 0x8544f3 */ goto L_008544f3;
L_008544ba:; BB(0x008544ba);
    /* 008544ba: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 008544c0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008544c3: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008544c6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008544c9: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008544cb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008544ce: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008544d0: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008544d4: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008544d6: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008544da: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008544dc: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008544e0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008544e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008544e4: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8544eau); call_ind(t); }
    /* 008544ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008544eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008544ed: je 0x856b80 */ if (fZ) goto L_00856b80;
L_008544f3:; BB(0x008544f3);
    /* 008544f3: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008544f7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008544fa: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008544fc: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854453); r_esp += 4; return;
L_00856b80:; BB(0x00856b80);
    /* 00856b80: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b85u); f_00859dd6();
    /* 00856b85: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856b8b: jmp 0x8544f3 */ goto L_008544f3;
}

void f_00854501(void)
{
    FN_ENTER(0x00854501);
    /* 00854501: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00854508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085450a: mov dword ptr [esp + 4], 0xb48584 */ W32((u32)(r_esp+0x4u), 0xb48584u);
    /* 00854512: jne 0x854568 */ if (!fZ) goto L_00854568;
L_00854514:; BB(0x00854514);
    /* 00854514: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 0085451a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085451d: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854520: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854523: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854525: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854528: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085452a: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085452e: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854530: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854534: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854536: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085453a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085453d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085453e: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854544u); call_ind(t); }
    /* 00854544: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854545: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854547: jne 0x8545a1 */ if (!fZ) goto L_008545a1;
L_00854549:; BB(0x00854549);
    /* 00854549: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085454e: push 0xb485cc */ { u32 v = 0xb485ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00854553: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854558u); f_0085b5fd();
    /* 00854558: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085455b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854560u); f_00859dd6();
    /* 00854560: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854566: jmp 0x8545a1 */ goto L_008545a1;
L_00854568:; BB(0x00854568);
    /* 00854568: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 0085456e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854571: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854574: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854577: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854579: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085457c: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085457e: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854582: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854584: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854588: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085458a: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085458e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854592: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854598u); call_ind(t); }
    /* 00854598: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085459b: je 0x856b90 */ if (fZ) goto L_00856b90;
L_008545a1:; BB(0x008545a1);
    /* 008545a1: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008545a5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008545a8: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008545aa: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854501); r_esp += 4; return;
L_00856b90:; BB(0x00856b90);
    /* 00856b90: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b95u); f_00859dd6();
    /* 00856b95: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856b9b: jmp 0x8545a1 */ goto L_008545a1;
}

void f_008545af(void)
{
    FN_ENTER(0x008545af);
    /* 008545af: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 008545b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008545b9: mov dword ptr [esp + 0x64], 0xb482e4 */ W32((u32)(r_esp+0x64u), 0xb482e4u);
    /* 008545c1: jne 0x8545cf */ if (!fZ) goto L_008545cf;
L_008545c3:; BB(0x008545c3);
    /* 008545c3: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 008545c8: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008545cb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008545cd: jmp 0x8545d9 */ goto L_008545d9;
L_008545cf:; BB(0x008545cf);
    /* 008545cf: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 008545d4: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008545d7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_008545d9:; BB(0x008545d9);
    /* 008545d9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008545dc: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008545df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008545e1: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008545e5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008545e7: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008545eb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008545ee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008545f0: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008545f4: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008545f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008545f9: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8545ffu); call_ind(t); }
    /* 008545ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854602: je 0x856ba0 */ if (fZ) goto L_00856ba0;
L_00854608:; BB(0x00854608);
    /* 00854608: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085460c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085460f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854611: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008545af); r_esp += 4; return;
L_00856ba0:; BB(0x00856ba0);
    /* 00856ba0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ba5u); f_00859dd6();
    /* 00856ba5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856bab: jmp 0x854608 */ goto L_00854608;
}

void f_00854616(void)
{
    FN_ENTER(0x00854616);
    /* 00854616: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 0085461e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854620: mov dword ptr [esp + 0x44], 0xb482dc */ W32((u32)(r_esp+0x44u), 0xb482dcu);
    /* 00854628: jne 0x854637 */ if (!fZ) goto L_00854637;
L_0085462a:; BB(0x0085462a);
    /* 0085462a: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00854630: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854633: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854635: jmp 0x854642 */ goto L_00854642;
L_00854637:; BB(0x00854637);
    /* 00854637: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 0085463d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854640: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_00854642:; BB(0x00854642);
    /* 00854642: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854645: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854648: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085464b: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085464d: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854651: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854655: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854657: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085465b: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085465d: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854662: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854668u); call_ind(t); }
    /* 00854668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085466b: je 0x856bb0 */ if (fZ) goto L_00856bb0;
L_00854671:; BB(0x00854671);
    /* 00854671: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00854675: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854678: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085467a: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854616); r_esp += 4; return;
L_00856bb0:; BB(0x00856bb0);
    /* 00856bb0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856bb5u); f_00859dd6();
    /* 00856bb5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856bbb: jmp 0x854671 */ goto L_00854671;
}

void f_0085467f(void)
{
    FN_ENTER(0x0085467f);
    /* 0085467f: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 00854686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854688: mov dword ptr [esp + 4], 0xb482d4 */ W32((u32)(r_esp+0x4u), 0xb482d4u);
    /* 00854690: jne 0x85469f */ if (!fZ) goto L_0085469f;
L_00854692:; BB(0x00854692);
    /* 00854692: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00854698: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085469b: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085469d: jmp 0x8546aa */ goto L_008546aa;
L_0085469f:; BB(0x0085469f);
    /* 0085469f: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 008546a5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008546a8: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_008546aa:; BB(0x008546aa);
    /* 008546aa: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008546ad: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008546b0: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008546b3: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008546b5: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008546b9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008546bc: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008546be: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008546c2: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008546c4: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008546c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008546c9: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8546cfu); call_ind(t); }
    /* 008546cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008546d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008546d2: je 0x856bc0 */ if (fZ) goto L_00856bc0;
L_008546d8:; BB(0x008546d8);
    /* 008546d8: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008546dc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008546df: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008546e1: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085467f); r_esp += 4; return;
L_00856bc0:; BB(0x00856bc0);
    /* 00856bc0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856bc5u); f_00859dd6();
    /* 00856bc5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856bcb: jmp 0x8546d8 */ goto L_008546d8;
}

void f_008546e6(void)
{
    FN_ENTER(0x008546e6);
    /* 008546e6: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 008546eb: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008546ee: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 008546f6: mov dword ptr [esp + 0x64], 0xb481f4 */ W32((u32)(r_esp+0x64u), 0xb481f4u);
    /* 008546fe: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854700: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 00854706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854708: jne 0x854754 */ if (!fZ) goto L_00854754;
L_0085470a:; BB(0x0085470a);
    /* 0085470a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085470d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854710: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854712: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854716: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854718: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085471c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085471f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854721: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854725: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085472a: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854730u); call_ind(t); }
    /* 00854730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854733: jne 0x854783 */ if (!fZ) goto L_00854783;
L_00854735:; BB(0x00854735);
    /* 00854735: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085473a: push 0xb481fc */ { u32 v = 0xb481fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085473f: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854744u); f_0085b5fd();
    /* 00854744: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854747: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85474cu); f_00859dd6();
    /* 0085474c: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854752: jmp 0x854783 */ goto L_00854783;
L_00854754:; BB(0x00854754);
    /* 00854754: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854757: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085475a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085475c: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854760: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854762: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854766: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854769: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085476b: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0085476f: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854774: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85477au); call_ind(t); }
    /* 0085477a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085477b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085477d: je 0x856bd0 */ if (fZ) goto L_00856bd0;
L_00854783:; BB(0x00854783);
    /* 00854783: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00854787: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085478a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085478c: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008546e6); r_esp += 4; return;
L_00856bd0:; BB(0x00856bd0);
    /* 00856bd0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856bd5u); f_00859dd6();
    /* 00856bd5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856bdb: jmp 0x854783 */ goto L_00854783;
}

void f_00854791(void)
{
    FN_ENTER(0x00854791);
    /* 00854791: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00854797: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085479a: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 008547a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008547a4: mov dword ptr [esp + 0x44], 0xb481d4 */ W32((u32)(r_esp+0x44u), 0xb481d4u);
    /* 008547ac: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 008547ae: jne 0x8547fa */ if (!fZ) goto L_008547fa;
L_008547b0:; BB(0x008547b0);
    /* 008547b0: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008547b3: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008547b6: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008547b9: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008547bb: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008547bf: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008547c3: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008547c5: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008547c9: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008547cb: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008547cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008547d0: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8547d6u); call_ind(t); }
    /* 008547d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008547d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008547d9: jne 0x854829 */ if (!fZ) goto L_00854829;
L_008547db:; BB(0x008547db);
    /* 008547db: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008547e0: push 0xb481dc */ { u32 v = 0xb481dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008547e5: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8547eau); f_0085b5fd();
    /* 008547ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008547ed: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8547f2u); f_00859dd6();
    /* 008547f2: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008547f8: jmp 0x854829 */ goto L_00854829;
L_008547fa:; BB(0x008547fa);
    /* 008547fa: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008547fd: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854800: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854803: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00854805: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854809: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085480d: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085480f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854813: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00854815: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085481a: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854820u); call_ind(t); }
    /* 00854820: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854823: je 0x856be0 */ if (fZ) goto L_00856be0;
L_00854829:; BB(0x00854829);
    /* 00854829: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085482d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854830: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854832: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854791); r_esp += 4; return;
L_00856be0:; BB(0x00856be0);
    /* 00856be0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856be5u); f_00859dd6();
    /* 00856be5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856beb: jmp 0x854829 */ goto L_00854829;
}

void f_00854837(void)
{
    FN_ENTER(0x00854837);
    /* 00854837: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 0085483d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854840: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00854847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854849: mov dword ptr [esp + 4], 0xb481b4 */ W32((u32)(r_esp+0x4u), 0xb481b4u);
    /* 00854851: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 00854853: jne 0x85489e */ if (!fZ) goto L_0085489e;
L_00854855:; BB(0x00854855);
    /* 00854855: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854858: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085485b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085485e: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854860: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854864: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854867: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854869: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085486d: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085486f: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854874: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85487au); call_ind(t); }
    /* 0085487a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085487b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085487d: jne 0x8548cc */ if (!fZ) goto L_008548cc;
L_0085487f:; BB(0x0085487f);
    /* 0085487f: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00854884: push 0xb481bc */ { u32 v = 0xb481bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00854889: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85488eu); f_0085b5fd();
    /* 0085488e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854891: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854896u); f_00859dd6();
    /* 00854896: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085489c: jmp 0x8548cc */ goto L_008548cc;
L_0085489e:; BB(0x0085489e);
    /* 0085489e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008548a1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008548a4: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008548a7: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008548a9: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008548ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008548b0: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008548b2: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008548b6: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008548b8: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008548bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008548bd: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8548c3u); call_ind(t); }
    /* 008548c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008548c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008548c6: je 0x856bf0 */ if (fZ) goto L_00856bf0;
L_008548cc:; BB(0x008548cc);
    /* 008548cc: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008548d0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008548d3: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008548d5: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854837); r_esp += 4; return;
L_00856bf0:; BB(0x00856bf0);
    /* 00856bf0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856bf5u); f_00859dd6();
    /* 00856bf5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856bfb: jmp 0x8548cc */ goto L_008548cc;
}

void f_008548da(void)
{
    FN_ENTER(0x008548da);
    /* 008548da: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 008548df: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008548e2: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 008548ea: mov dword ptr [esp + 0x64], 0xb48194 */ W32((u32)(r_esp+0x64u), 0xb48194u);
    /* 008548f2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008548f4: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 008548fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008548fc: jne 0x854948 */ if (!fZ) goto L_00854948;
L_008548fe:; BB(0x008548fe);
    /* 008548fe: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854901: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854904: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854906: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0085490a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085490c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854910: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854913: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854915: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854919: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085491d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085491e: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854924u); call_ind(t); }
    /* 00854924: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854927: jne 0x854977 */ if (!fZ) goto L_00854977;
L_00854929:; BB(0x00854929);
    /* 00854929: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085492e: push 0xb4819c */ { u32 v = 0xb4819cu; r_esp -= 4; W32(r_esp, v); }
    /* 00854933: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854938u); f_0085b5fd();
    /* 00854938: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085493b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854940u); f_00859dd6();
    /* 00854940: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854946: jmp 0x854977 */ goto L_00854977;
L_00854948:; BB(0x00854948);
    /* 00854948: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085494b: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085494e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854950: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854954: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854956: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085495a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085495d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085495f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854963: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854968: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85496eu); call_ind(t); }
    /* 0085496e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085496f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854971: je 0x856c00 */ if (fZ) goto L_00856c00;
L_00854977:; BB(0x00854977);
    /* 00854977: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085497b: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085497e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854980: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008548da); r_esp += 4; return;
L_00856c00:; BB(0x00856c00);
    /* 00856c00: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c05u); f_00859dd6();
    /* 00856c05: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856c0b: jmp 0x854977 */ goto L_00854977;
}

void f_00854985(void)
{
    FN_ENTER(0x00854985);
    /* 00854985: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 0085498b: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085498e: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00854996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854998: mov dword ptr [esp + 0x44], 0xb48174 */ W32((u32)(r_esp+0x44u), 0xb48174u);
    /* 008549a0: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 008549a2: jne 0x8549ee */ if (!fZ) goto L_008549ee;
L_008549a4:; BB(0x008549a4);
    /* 008549a4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008549a7: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008549aa: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008549ad: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008549af: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008549b3: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008549b7: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008549b9: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008549bd: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008549bf: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008549c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008549c4: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8549cau); call_ind(t); }
    /* 008549ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008549cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008549cd: jne 0x854a1d */ if (!fZ) goto L_00854a1d;
L_008549cf:; BB(0x008549cf);
    /* 008549cf: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008549d4: push 0xb4817c */ { u32 v = 0xb4817cu; r_esp -= 4; W32(r_esp, v); }
    /* 008549d9: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8549deu); f_0085b5fd();
    /* 008549de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008549e1: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8549e6u); f_00859dd6();
    /* 008549e6: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008549ec: jmp 0x854a1d */ goto L_00854a1d;
L_008549ee:; BB(0x008549ee);
    /* 008549ee: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008549f1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008549f4: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008549f7: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008549f9: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008549fd: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854a01: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854a03: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854a07: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00854a09: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854a0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854a0e: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854a14u); call_ind(t); }
    /* 00854a14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854a15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854a17: je 0x856c10 */ if (fZ) goto L_00856c10;
L_00854a1d:; BB(0x00854a1d);
    /* 00854a1d: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00854a21: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854a24: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854a26: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854985); r_esp += 4; return;
L_00856c10:; BB(0x00856c10);
    /* 00856c10: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c15u); f_00859dd6();
    /* 00856c15: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856c1b: jmp 0x854a1d */ goto L_00854a1d;
}

void f_00854a2b(void)
{
    FN_ENTER(0x00854a2b);
    /* 00854a2b: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00854a31: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854a34: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00854a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854a3d: mov dword ptr [esp + 4], 0xb48154 */ W32((u32)(r_esp+0x4u), 0xb48154u);
    /* 00854a45: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 00854a47: jne 0x854a92 */ if (!fZ) goto L_00854a92;
L_00854a49:; BB(0x00854a49);
    /* 00854a49: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854a4c: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854a4f: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854a52: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854a54: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854a58: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854a5b: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854a5d: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854a61: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854a63: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854a67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854a68: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854a6eu); call_ind(t); }
    /* 00854a6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854a6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854a71: jne 0x854ac0 */ if (!fZ) goto L_00854ac0;
L_00854a73:; BB(0x00854a73);
    /* 00854a73: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00854a78: push 0xb4815c */ { u32 v = 0xb4815cu; r_esp -= 4; W32(r_esp, v); }
    /* 00854a7d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854a82u); f_0085b5fd();
    /* 00854a82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854a85: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854a8au); f_00859dd6();
    /* 00854a8a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854a90: jmp 0x854ac0 */ goto L_00854ac0;
L_00854a92:; BB(0x00854a92);
    /* 00854a92: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854a95: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854a98: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854a9b: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854a9d: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854aa1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854aa4: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854aa6: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854aaa: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854aac: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854ab1: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854ab7u); call_ind(t); }
    /* 00854ab7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854ab8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854aba: je 0x856c20 */ if (fZ) goto L_00856c20;
L_00854ac0:; BB(0x00854ac0);
    /* 00854ac0: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00854ac4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854ac7: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854ac9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854a2b); r_esp += 4; return;
L_00856c20:; BB(0x00856c20);
    /* 00856c20: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c25u); f_00859dd6();
    /* 00856c25: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856c2b: jmp 0x854ac0 */ goto L_00854ac0;
}

void f_00854ace(void)
{
    FN_ENTER(0x00854ace);
    /* 00854ace: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854ad1: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00854ad4: mov dword ptr [esp + 0x60], 4 */ W32((u32)(r_esp+0x60u), 0x4u);
    /* 00854adc: mov dword ptr [esp + 0x64], 0xb48134 */ W32((u32)(r_esp+0x64u), 0xb48134u);
    /* 00854ae4: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00854ae6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854ae8: mov edx, dword ptr [0x995ab0] */ r_edx = R32((u32)(0x995ab0u));
    /* 00854aee: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00854af2: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 00854af8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00854afa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00854afb: jae 0x854b09 */ if (!fC) goto L_00854b09;
L_00854afd:; BB(0x00854afd);
    /* 00854afd: mov eax, dword ptr [0x995ab4] */ r_eax = R32((u32)(0x995ab4u));
    /* 00854b02: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854b05: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854b07: jmp 0x854b0e */ goto L_00854b0e;
L_00854b09:; BB(0x00854b09);
    /* 00854b09: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854b0c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00854b0e:; BB(0x00854b0e);
    /* 00854b0e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854b11: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854b14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854b16: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854b1a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854b1c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854b20: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854b23: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854b25: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854b29: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854b2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854b2e: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854b34u); call_ind(t); }
    /* 00854b34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854b35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854b37: je 0x856c30 */ if (fZ) goto L_00856c30;
L_00854b3d:; BB(0x00854b3d);
    /* 00854b3d: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00854b41: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854b44: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854b46: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854ace); r_esp += 4; return;
L_00856c30:; BB(0x00856c30);
    /* 00856c30: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c35u); f_00859dd6();
    /* 00856c35: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856c3b: jmp 0x854b3d */ goto L_00854b3d;
}

void f_00854b4b(void)
{
    FN_ENTER(0x00854b4b);
    /* 00854b4b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854b4e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00854b51: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 00854b59: mov dword ptr [esp + 0x64], 0xb48134 */ W32((u32)(r_esp+0x64u), 0xb48134u);
    /* 00854b61: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00854b63: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854b65: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00854b69: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 00854b6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00854b71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00854b72: jae 0x854b80 */ if (!fC) goto L_00854b80;
L_00854b74:; BB(0x00854b74);
    /* 00854b74: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00854b79: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854b7c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854b7e: jmp 0x854b8a */ goto L_00854b8a;
L_00854b80:; BB(0x00854b80);
    /* 00854b80: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00854b85: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854b88: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00854b8a:; BB(0x00854b8a);
    /* 00854b8a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854b8d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854b90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854b92: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854b96: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854b98: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854b9c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854b9f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854ba1: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854ba5: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854baa: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854bb0u); call_ind(t); }
    /* 00854bb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854bb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854bb3: je 0x856c40 */ if (fZ) goto L_00856c40;
L_00854bb9:; BB(0x00854bb9);
    /* 00854bb9: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00854bbd: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854bc0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854bc2: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854b4b); r_esp += 4; return;
L_00856c40:; BB(0x00856c40);
    /* 00856c40: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c45u); f_00859dd6();
    /* 00856c45: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856c4b: jmp 0x854bb9 */ goto L_00854bb9;
}

void f_00854bc7(void)
{
    FN_ENTER(0x00854bc7);
    /* 00854bc7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854bca: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00854bd0: mov dword ptr [esp + 0x40], 4 */ W32((u32)(r_esp+0x40u), 0x4u);
    /* 00854bd8: mov dword ptr [esp + 0x44], 0xb4812c */ W32((u32)(r_esp+0x44u), 0xb4812cu);
    /* 00854be0: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854be2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00854be4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00854be6: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854bea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00854beb: jae 0x854bfc */ if (!fC) goto L_00854bfc;
L_00854bed:; BB(0x00854bed);
    /* 00854bed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00854bef: fld qword ptr [0x995ad8] */ FPUSH(R_F64((u32)(0x995ad8u)));
    /* 00854bf5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854bf8: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854bfa: jmp 0x854c01 */ goto L_00854c01;
L_00854bfc:; BB(0x00854bfc);
    /* 00854bfc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854bff: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_00854c01:; BB(0x00854c01);
    /* 00854c01: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854c04: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854c07: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854c0a: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00854c0c: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854c10: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854c14: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854c16: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854c1a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00854c1c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854c21: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854c27u); call_ind(t); }
    /* 00854c27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854c28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854c2a: je 0x856c50 */ if (fZ) goto L_00856c50;
L_00854c30:; BB(0x00854c30);
    /* 00854c30: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00854c34: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854c37: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854c39: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854bc7); r_esp += 4; return;
L_00856c50:; BB(0x00856c50);
    /* 00856c50: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c55u); f_00859dd6();
    /* 00856c55: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856c5b: jmp 0x854c30 */ goto L_00854c30;
}

void f_00854c3e(void)
{
    FN_ENTER(0x00854c3e);
    /* 00854c3e: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854c41: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 00854c49: mov dword ptr [esp + 0x44], 0xb4812c */ W32((u32)(r_esp+0x44u), 0xb4812cu);
    /* 00854c51: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854c53: fcom qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); 
    /* 00854c59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00854c5b: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854c5f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00854c60: jae 0x854c6f */ if (!fC) goto L_00854c6f;
L_00854c62:; BB(0x00854c62);
    /* 00854c62: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00854c68: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854c6b: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854c6d: jmp 0x854c7a */ goto L_00854c7a;
L_00854c6f:; BB(0x00854c6f);
    /* 00854c6f: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00854c75: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854c78: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_00854c7a:; BB(0x00854c7a);
    /* 00854c7a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854c7d: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854c80: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854c83: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00854c85: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854c89: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854c8d: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854c8f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854c93: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00854c95: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854c99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854c9a: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854ca0u); call_ind(t); }
    /* 00854ca0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854ca1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854ca3: je 0x856c60 */ if (fZ) goto L_00856c60;
L_00854ca9:; BB(0x00854ca9);
    /* 00854ca9: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00854cad: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854cb0: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854cb2: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854c3e); r_esp += 4; return;
L_00856c60:; BB(0x00856c60);
    /* 00856c60: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c65u); f_00859dd6();
    /* 00856c65: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856c6b: jmp 0x854ca9 */ goto L_00854ca9;
}

void f_00854cb7(void)
{
    FN_ENTER(0x00854cb7);
    /* 00854cb7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854cba: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00854cc0: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 00854cc7: mov dword ptr [esp + 4], 0xb48124 */ W32((u32)(r_esp+0x4u), 0xb48124u);
    /* 00854ccf: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854cd1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00854cd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00854cd5: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854cd9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00854cda: jae 0x854ceb */ if (!fC) goto L_00854ceb;
L_00854cdc:; BB(0x00854cdc);
    /* 00854cdc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00854cde: fld xword ptr [0x995b1a] */ FPUSH(R_F80((u32)(0x995b1au)));
    /* 00854ce4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854ce7: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854ce9: jmp 0x854cf0 */ goto L_00854cf0;
L_00854ceb:; BB(0x00854ceb);
    /* 00854ceb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854cee: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00854cf0:; BB(0x00854cf0);
    /* 00854cf0: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854cf3: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854cf6: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854cf9: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854cfb: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854cff: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854d02: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854d04: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854d08: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854d0a: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854d0f: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854d15u); call_ind(t); }
    /* 00854d15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854d16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854d18: je 0x856c70 */ if (fZ) goto L_00856c70;
L_00854d1e:; BB(0x00854d1e);
    /* 00854d1e: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00854d22: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854d25: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854d27: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854cb7); r_esp += 4; return;
L_00856c70:; BB(0x00856c70);
    /* 00856c70: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c75u); f_00859dd6();
    /* 00856c75: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856c7b: jmp 0x854d1e */ goto L_00854d1e;
}

void f_00854d2c(void)
{
    FN_ENTER(0x00854d2c);
    /* 00854d2c: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854d2f: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00854d35: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 00854d3c: mov dword ptr [esp + 4], 0xb48124 */ W32((u32)(r_esp+0x4u), 0xb48124u);
    /* 00854d44: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854d46: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00854d48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00854d4a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00854d4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00854d4e: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854d52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00854d53: jae 0x854d62 */ if (!fC) goto L_00854d62;
L_00854d55:; BB(0x00854d55);
    /* 00854d55: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00854d5b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854d5e: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854d60: jmp 0x854d6d */ goto L_00854d6d;
L_00854d62:; BB(0x00854d62);
    /* 00854d62: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00854d68: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854d6b: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00854d6d:; BB(0x00854d6d);
    /* 00854d6d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854d70: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854d73: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854d76: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854d78: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854d7c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854d7f: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854d81: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854d85: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854d87: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854d8c: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854d92u); call_ind(t); }
    /* 00854d92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854d93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854d95: je 0x856c80 */ if (fZ) goto L_00856c80;
L_00854d9b:; BB(0x00854d9b);
    /* 00854d9b: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00854d9f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854da2: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854da4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854d2c); r_esp += 4; return;
L_00856c80:; BB(0x00856c80);
    /* 00856c80: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c85u); f_00859dd6();
    /* 00856c85: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856c8b: jmp 0x854d9b */ goto L_00854d9b;
}

void f_00854da9(void)
{
    FN_ENTER(0x00854da9);
    /* 00854da9: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00854db1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854db3: mov dword ptr [esp + 0x64], 0xb47c78 */ W32((u32)(r_esp+0x64u), 0xb47c78u);
    /* 00854dbb: jne 0x854e11 */ if (!fZ) goto L_00854e11;
L_00854dbd:; BB(0x00854dbd);
    /* 00854dbd: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00854dc2: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854dc5: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00854dc8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854dca: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854dcc: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00854dd0: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00854dd3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854dd5: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854dd9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854ddc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854dde: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854de2: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854de7: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854dedu); call_ind(t); }
    /* 00854ded: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854dee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854df0: jne 0x854e40 */ if (!fZ) goto L_00854e40;
L_00854df2:; BB(0x00854df2);
    /* 00854df2: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00854df7: push 0xb47c80 */ { u32 v = 0xb47c80u; r_esp -= 4; W32(r_esp, v); }
    /* 00854dfc: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854e01u); f_0085b5fd();
    /* 00854e01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854e04: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854e09u); f_00859dd6();
    /* 00854e09: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854e0f: jmp 0x854e40 */ goto L_00854e40;
L_00854e11:; BB(0x00854e11);
    /* 00854e11: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854e14: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854e17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854e19: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854e1d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854e1f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854e23: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854e26: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854e28: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854e2c: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854e31: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854e37u); call_ind(t); }
    /* 00854e37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854e38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854e3a: je 0x856c90 */ if (fZ) goto L_00856c90;
L_00854e40:; BB(0x00854e40);
    /* 00854e40: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00854e44: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854e47: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854e49: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854da9); r_esp += 4; return;
L_00856c90:; BB(0x00856c90);
    /* 00856c90: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856c95u); f_00859dd6();
    /* 00856c95: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856c9b: jmp 0x854e40 */ goto L_00854e40;
}

void f_00854e4e(void)
{
    FN_ENTER(0x00854e4e);
    /* 00854e4e: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00854e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854e58: mov dword ptr [esp + 0x44], 0xb47c58 */ W32((u32)(r_esp+0x44u), 0xb47c58u);
    /* 00854e60: jne 0x854eb7 */ if (!fZ) goto L_00854eb7;
L_00854e62:; BB(0x00854e62);
    /* 00854e62: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00854e68: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854e6b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854e6e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854e71: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854e73: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854e76: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854e78: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854e7c: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00854e7e: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854e82: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00854e84: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854e88: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854e8d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854e93u); call_ind(t); }
    /* 00854e93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854e94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854e96: jne 0x854ee6 */ if (!fZ) goto L_00854ee6;
L_00854e98:; BB(0x00854e98);
    /* 00854e98: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00854e9d: push 0xb47c60 */ { u32 v = 0xb47c60u; r_esp -= 4; W32(r_esp, v); }
    /* 00854ea2: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854ea7u); f_0085b5fd();
    /* 00854ea7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854eaa: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854eafu); f_00859dd6();
    /* 00854eaf: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854eb5: jmp 0x854ee6 */ goto L_00854ee6;
L_00854eb7:; BB(0x00854eb7);
    /* 00854eb7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854eba: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854ebd: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854ec0: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00854ec2: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00854ec6: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00854eca: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00854ecc: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00854ed0: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00854ed2: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00854ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854ed7: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x854eddu); call_ind(t); }
    /* 00854edd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854ede: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854ee0: je 0x856ca0 */ if (fZ) goto L_00856ca0;
L_00854ee6:; BB(0x00854ee6);
    /* 00854ee6: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00854eea: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854eed: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00854eef: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854e4e); r_esp += 4; return;
L_00856ca0:; BB(0x00856ca0);
    /* 00856ca0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ca5u); f_00859dd6();
    /* 00856ca5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856cab: jmp 0x854ee6 */ goto L_00854ee6;
}

void f_00854ef4(void)
{
    FN_ENTER(0x00854ef4);
    /* 00854ef4: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00854efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854efd: mov dword ptr [esp + 4], 0xb47c38 */ W32((u32)(r_esp+0x4u), 0xb47c38u);
    /* 00854f05: jne 0x854f5b */ if (!fZ) goto L_00854f5b;
L_00854f07:; BB(0x00854f07);
    /* 00854f07: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00854f0d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854f10: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00854f13: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854f16: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854f18: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854f1b: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854f1d: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854f21: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854f23: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854f27: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854f29: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854f2d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854f31: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854f37u); call_ind(t); }
    /* 00854f37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854f38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854f3a: jne 0x854f89 */ if (!fZ) goto L_00854f89;
L_00854f3c:; BB(0x00854f3c);
    /* 00854f3c: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00854f41: push 0xb47c40 */ { u32 v = 0xb47c40u; r_esp -= 4; W32(r_esp, v); }
    /* 00854f46: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x854f4bu); f_0085b5fd();
    /* 00854f4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854f4e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854f53u); f_00859dd6();
    /* 00854f53: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00854f59: jmp 0x854f89 */ goto L_00854f89;
L_00854f5b:; BB(0x00854f5b);
    /* 00854f5b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854f5e: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00854f61: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00854f64: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00854f66: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00854f6a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00854f6d: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00854f6f: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00854f73: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00854f75: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00854f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854f7a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x854f80u); call_ind(t); }
    /* 00854f80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854f83: je 0x856cb0 */ if (fZ) goto L_00856cb0;
L_00854f89:; BB(0x00854f89);
    /* 00854f89: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00854f8d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854f90: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00854f92: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854ef4); r_esp += 4; return;
L_00856cb0:; BB(0x00856cb0);
    /* 00856cb0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856cb5u); f_00859dd6();
    /* 00856cb5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856cbb: jmp 0x854f89 */ goto L_00854f89;
}

void f_00854f97(void)
{
    FN_ENTER(0x00854f97);
    /* 00854f97: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 00854f9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00854fa1: mov dword ptr [esp + 0x64], 0xb4814c */ W32((u32)(r_esp+0x64u), 0xb4814cu);
    /* 00854fa9: jne 0x854fb7 */ if (!fZ) goto L_00854fb7;
L_00854fab:; BB(0x00854fab);
    /* 00854fab: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 00854fb0: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854fb3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854fb5: jmp 0x854fc1 */ goto L_00854fc1;
L_00854fb7:; BB(0x00854fb7);
    /* 00854fb7: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00854fbc: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854fbf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00854fc1:; BB(0x00854fc1);
    /* 00854fc1: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854fc4: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854fc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854fc9: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854fcd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00854fcf: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00854fd3: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854fd6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854fd8: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854fdc: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00854fe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00854fe1: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854fe7u); call_ind(t); }
    /* 00854fe7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854fea: je 0x856cc0 */ if (fZ) goto L_00856cc0;
L_00854ff0:; BB(0x00854ff0);
    /* 00854ff0: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00854ff4: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854ff7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854ff9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854f97); r_esp += 4; return;
L_00856cc0:; BB(0x00856cc0);
    /* 00856cc0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856cc5u); f_00859dd6();
    /* 00856cc5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856ccb: jmp 0x854ff0 */ goto L_00854ff0;
}

void f_00854ffe(void)
{
    FN_ENTER(0x00854ffe);
    /* 00854ffe: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 00855006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855008: mov dword ptr [esp + 0x44], 0xb48144 */ W32((u32)(r_esp+0x44u), 0xb48144u);
    /* 00855010: jne 0x85501f */ if (!fZ) goto L_0085501f;
L_00855012:; BB(0x00855012);
    /* 00855012: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00855018: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085501b: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085501d: jmp 0x85502a */ goto L_0085502a;
L_0085501f:; BB(0x0085501f);
    /* 0085501f: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00855025: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855028: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_0085502a:; BB(0x0085502a);
    /* 0085502a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085502d: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00855030: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00855033: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855035: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00855039: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085503d: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085503f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00855043: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00855045: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00855049: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085504a: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x855050u); call_ind(t); }
    /* 00855050: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855051: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855053: je 0x856cd0 */ if (fZ) goto L_00856cd0;
L_00855059:; BB(0x00855059);
    /* 00855059: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085505d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855060: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855062: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00854ffe); r_esp += 4; return;
L_00856cd0:; BB(0x00856cd0);
    /* 00856cd0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856cd5u); f_00859dd6();
    /* 00856cd5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856cdb: jmp 0x855059 */ goto L_00855059;
}

