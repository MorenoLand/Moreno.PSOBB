#include "protos.h"

void f_00851063(void)
{
    FN_ENTER(0x00851063);
    /* 00851063: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00851068: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085106b: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00851073: mov dword ptr [esp + 0x64], 0xb482b4 */ W32((u32)(r_esp+0x64u), 0xb482b4u);
    /* 0085107b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085107d: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 00851083: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851085: jne 0x8510d1 */ if (!fZ) goto L_008510d1;
L_00851087:; BB(0x00851087);
    /* 00851087: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085108a: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085108d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085108f: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851093: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851095: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00851099: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085109c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085109e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008510a2: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008510a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008510a7: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8510adu); call_ind(t); }
    /* 008510ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008510ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008510b0: jne 0x851100 */ if (!fZ) goto L_00851100;
L_008510b2:; BB(0x008510b2);
    /* 008510b2: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008510b7: push 0xb482bc */ { u32 v = 0xb482bcu; r_esp -= 4; W32(r_esp, v); }
    /* 008510bc: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8510c1u); f_0085b5fd();
    /* 008510c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008510c4: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8510c9u); f_00859dd6();
    /* 008510c9: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008510cf: jmp 0x851100 */ goto L_00851100;
L_008510d1:; BB(0x008510d1);
    /* 008510d1: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008510d4: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008510d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008510d9: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008510dd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008510df: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008510e3: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008510e6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008510e8: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008510ec: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008510f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008510f1: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8510f7u); call_ind(t); }
    /* 008510f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008510f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008510fa: je 0x856670 */ if (fZ) goto L_00856670;
L_00851100:; BB(0x00851100);
    /* 00851100: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00851104: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851107: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00851109: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851063); r_esp += 4; return;
L_00856670:; BB(0x00856670);
    /* 00856670: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856675u); f_00859dd6();
    /* 00856675: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085667b: jmp 0x851100 */ goto L_00851100;
}

void f_0085110e(void)
{
    FN_ENTER(0x0085110e);
    /* 0085110e: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00851114: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851117: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 0085111f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851121: mov dword ptr [esp + 0x44], 0xb48294 */ W32((u32)(r_esp+0x44u), 0xb48294u);
    /* 00851129: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 0085112b: jne 0x851177 */ if (!fZ) goto L_00851177;
L_0085112d:; BB(0x0085112d);
    /* 0085112d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851130: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851133: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851136: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851138: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085113c: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851140: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851142: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851146: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851148: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085114c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085114d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851153u); call_ind(t); }
    /* 00851153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851156: jne 0x8511a6 */ if (!fZ) goto L_008511a6;
L_00851158:; BB(0x00851158);
    /* 00851158: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085115d: push 0xb4829c */ { u32 v = 0xb4829cu; r_esp -= 4; W32(r_esp, v); }
    /* 00851162: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851167u); f_0085b5fd();
    /* 00851167: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085116a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85116fu); f_00859dd6();
    /* 0085116f: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851175: jmp 0x8511a6 */ goto L_008511a6;
L_00851177:; BB(0x00851177);
    /* 00851177: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085117a: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085117d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851180: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851182: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851186: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085118a: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085118c: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851190: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851192: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851197: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85119du); call_ind(t); }
    /* 0085119d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085119e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008511a0: je 0x856680 */ if (fZ) goto L_00856680;
L_008511a6:; BB(0x008511a6);
    /* 008511a6: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008511aa: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008511ad: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008511af: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085110e); r_esp += 4; return;
L_00856680:; BB(0x00856680);
    /* 00856680: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856685u); f_00859dd6();
    /* 00856685: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085668b: jmp 0x8511a6 */ goto L_008511a6;
}

void f_008511b4(void)
{
    FN_ENTER(0x008511b4);
    /* 008511b4: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008511ba: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008511bd: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 008511c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008511c6: mov dword ptr [esp + 4], 0xb48274 */ W32((u32)(r_esp+0x4u), 0xb48274u);
    /* 008511ce: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 008511d0: jne 0x85121b */ if (!fZ) goto L_0085121b;
L_008511d2:; BB(0x008511d2);
    /* 008511d2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008511d5: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008511d8: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008511db: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008511dd: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008511e1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008511e4: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008511e6: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008511ea: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008511ec: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008511f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008511f1: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8511f7u); call_ind(t); }
    /* 008511f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008511f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008511fa: jne 0x851249 */ if (!fZ) goto L_00851249;
L_008511fc:; BB(0x008511fc);
    /* 008511fc: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851201: push 0xb4827c */ { u32 v = 0xb4827cu; r_esp -= 4; W32(r_esp, v); }
    /* 00851206: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85120bu); f_0085b5fd();
    /* 0085120b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085120e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851213u); f_00859dd6();
    /* 00851213: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851219: jmp 0x851249 */ goto L_00851249;
L_0085121b:; BB(0x0085121b);
    /* 0085121b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085121e: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851221: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851224: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851226: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085122a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085122d: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085122f: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851233: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851235: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085123a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851240u); call_ind(t); }
    /* 00851240: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851241: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851243: je 0x856690 */ if (fZ) goto L_00856690;
L_00851249:; BB(0x00851249);
    /* 00851249: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 0085124d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851250: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851252: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008511b4); r_esp += 4; return;
L_00856690:; BB(0x00856690);
    /* 00856690: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856695u); f_00859dd6();
    /* 00856695: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085669b: jmp 0x851249 */ goto L_00851249;
}

void f_00851257(void)
{
    FN_ENTER(0x00851257);
    /* 00851257: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 0085125c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085125f: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00851267: mov dword ptr [esp + 0x64], 0xb48254 */ W32((u32)(r_esp+0x64u), 0xb48254u);
    /* 0085126f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00851271: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 00851277: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851279: jne 0x8512c5 */ if (!fZ) goto L_008512c5;
L_0085127b:; BB(0x0085127b);
    /* 0085127b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085127e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851281: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00851283: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851287: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851289: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085128d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851290: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851292: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851296: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085129a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085129b: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8512a1u); call_ind(t); }
    /* 008512a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008512a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008512a4: jne 0x8512f4 */ if (!fZ) goto L_008512f4;
L_008512a6:; BB(0x008512a6);
    /* 008512a6: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008512ab: push 0xb4825c */ { u32 v = 0xb4825cu; r_esp -= 4; W32(r_esp, v); }
    /* 008512b0: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8512b5u); f_0085b5fd();
    /* 008512b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008512b8: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8512bdu); f_00859dd6();
    /* 008512bd: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008512c3: jmp 0x8512f4 */ goto L_008512f4;
L_008512c5:; BB(0x008512c5);
    /* 008512c5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008512c8: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008512cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008512cd: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008512d1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008512d3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008512d7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008512da: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008512dc: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008512e0: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008512e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008512e5: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8512ebu); call_ind(t); }
    /* 008512eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008512ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008512ee: je 0x8566a0 */ if (fZ) goto L_008566a0;
L_008512f4:; BB(0x008512f4);
    /* 008512f4: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008512f8: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008512fb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008512fd: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851257); r_esp += 4; return;
L_008566a0:; BB(0x008566a0);
    /* 008566a0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8566a5u); f_00859dd6();
    /* 008566a5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008566ab: jmp 0x8512f4 */ goto L_008512f4;
}

void f_00851302(void)
{
    FN_ENTER(0x00851302);
    /* 00851302: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00851308: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085130b: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00851313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851315: mov dword ptr [esp + 0x44], 0xb48234 */ W32((u32)(r_esp+0x44u), 0xb48234u);
    /* 0085131d: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 0085131f: jne 0x85136b */ if (!fZ) goto L_0085136b;
L_00851321:; BB(0x00851321);
    /* 00851321: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851324: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851327: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085132a: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085132c: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851330: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851334: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851336: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085133a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085133c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851341: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851347u); call_ind(t); }
    /* 00851347: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085134a: jne 0x85139a */ if (!fZ) goto L_0085139a;
L_0085134c:; BB(0x0085134c);
    /* 0085134c: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851351: push 0xb4823c */ { u32 v = 0xb4823cu; r_esp -= 4; W32(r_esp, v); }
    /* 00851356: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85135bu); f_0085b5fd();
    /* 0085135b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085135e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851363u); f_00859dd6();
    /* 00851363: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851369: jmp 0x85139a */ goto L_0085139a;
L_0085136b:; BB(0x0085136b);
    /* 0085136b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085136e: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851371: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851374: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851376: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085137a: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085137e: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851380: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851384: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851386: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085138a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085138b: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851391u); call_ind(t); }
    /* 00851391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851392: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851394: je 0x8566b0 */ if (fZ) goto L_008566b0;
L_0085139a:; BB(0x0085139a);
    /* 0085139a: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085139e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008513a1: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008513a3: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851302); r_esp += 4; return;
L_008566b0:; BB(0x008566b0);
    /* 008566b0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8566b5u); f_00859dd6();
    /* 008566b5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008566bb: jmp 0x85139a */ goto L_0085139a;
}

void f_008513a8(void)
{
    FN_ENTER(0x008513a8);
    /* 008513a8: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008513ae: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008513b1: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 008513b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008513ba: mov dword ptr [esp + 4], 0xb48214 */ W32((u32)(r_esp+0x4u), 0xb48214u);
    /* 008513c2: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 008513c4: jne 0x85140f */ if (!fZ) goto L_0085140f;
L_008513c6:; BB(0x008513c6);
    /* 008513c6: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008513c9: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008513cc: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008513cf: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008513d1: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008513d5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008513d8: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008513da: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008513de: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008513e0: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008513e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008513e5: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8513ebu); call_ind(t); }
    /* 008513eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008513ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008513ee: jne 0x85143d */ if (!fZ) goto L_0085143d;
L_008513f0:; BB(0x008513f0);
    /* 008513f0: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008513f5: push 0xb4821c */ { u32 v = 0xb4821cu; r_esp -= 4; W32(r_esp, v); }
    /* 008513fa: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8513ffu); f_0085b5fd();
    /* 008513ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851402: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851407u); f_00859dd6();
    /* 00851407: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085140d: jmp 0x85143d */ goto L_0085143d;
L_0085140f:; BB(0x0085140f);
    /* 0085140f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851412: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851415: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851418: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085141a: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085141e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851421: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851423: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851427: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851429: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085142d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085142e: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851434u); call_ind(t); }
    /* 00851434: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851437: je 0x8566c0 */ if (fZ) goto L_008566c0;
L_0085143d:; BB(0x0085143d);
    /* 0085143d: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00851441: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851444: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851446: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008513a8); r_esp += 4; return;
L_008566c0:; BB(0x008566c0);
    /* 008566c0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8566c5u); f_00859dd6();
    /* 008566c5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008566cb: jmp 0x85143d */ goto L_0085143d;
}

void f_0085144b(void)
{
    FN_ENTER(0x0085144b);
    /* 0085144b: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00851453: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851455: mov dword ptr [esp + 0x64], 0xb47e90 */ W32((u32)(r_esp+0x64u), 0xb47e90u);
    /* 0085145d: jne 0x8514b3 */ if (!fZ) goto L_008514b3;
L_0085145f:; BB(0x0085145f);
    /* 0085145f: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00851464: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851467: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085146a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085146c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085146e: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00851472: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00851475: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851477: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085147b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085147e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851480: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851484: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851489: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85148fu); call_ind(t); }
    /* 0085148f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851490: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851492: jne 0x8514ec */ if (!fZ) goto L_008514ec;
L_00851494:; BB(0x00851494);
    /* 00851494: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851499: push 0xb47ee4 */ { u32 v = 0xb47ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085149e: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8514a3u); f_0085b5fd();
    /* 008514a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008514a6: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8514abu); f_00859dd6();
    /* 008514ab: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008514b1: jmp 0x8514ec */ goto L_008514ec;
L_008514b3:; BB(0x008514b3);
    /* 008514b3: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 008514b8: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008514bb: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008514be: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008514c0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008514c2: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008514c6: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008514c9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008514cb: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008514cf: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008514d2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008514d4: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008514d8: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008514dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008514dd: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8514e3u); call_ind(t); }
    /* 008514e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008514e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008514e6: je 0x8566d0 */ if (fZ) goto L_008566d0;
L_008514ec:; BB(0x008514ec);
    /* 008514ec: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008514f0: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008514f3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008514f5: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085144b); r_esp += 4; return;
L_008566d0:; BB(0x008566d0);
    /* 008566d0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8566d5u); f_00859dd6();
    /* 008566d5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008566db: jmp 0x8514ec */ goto L_008514ec;
}

void f_008514fa(void)
{
    FN_ENTER(0x008514fa);
    /* 008514fa: mov dword ptr [esp + 0x60], 2 */ W32((u32)(r_esp+0x60u), 0x2u);
    /* 00851502: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851504: mov dword ptr [esp + 0x64], 0xb47e90 */ W32((u32)(r_esp+0x64u), 0xb47e90u);
    /* 0085150c: jne 0x851562 */ if (!fZ) goto L_00851562;
L_0085150e:; BB(0x0085150e);
    /* 0085150e: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00851513: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851516: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00851519: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085151b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085151d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00851521: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00851524: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851526: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085152a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085152d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085152f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851533: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851538: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85153eu); call_ind(t); }
    /* 0085153e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085153f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851541: jne 0x85159b */ if (!fZ) goto L_0085159b;
L_00851543:; BB(0x00851543);
    /* 00851543: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851548: push 0xb47e98 */ { u32 v = 0xb47e98u; r_esp -= 4; W32(r_esp, v); }
    /* 0085154d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851552u); f_0085b5fd();
    /* 00851552: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851555: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85155au); f_00859dd6();
    /* 0085155a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851560: jmp 0x85159b */ goto L_0085159b;
L_00851562:; BB(0x00851562);
    /* 00851562: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00851567: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085156a: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085156d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085156f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851571: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00851575: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00851578: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085157a: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085157e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851581: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851583: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851587: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085158b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085158c: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851592u); call_ind(t); }
    /* 00851592: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851595: je 0x8566e0 */ if (fZ) goto L_008566e0;
L_0085159b:; BB(0x0085159b);
    /* 0085159b: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085159f: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008515a2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008515a4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008514fa); r_esp += 4; return;
L_008566e0:; BB(0x008566e0);
    /* 008566e0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8566e5u); f_00859dd6();
    /* 008566e5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008566eb: jmp 0x85159b */ goto L_0085159b;
}

void f_008515a9(void)
{
    FN_ENTER(0x008515a9);
    /* 008515a9: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 008515b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008515b3: mov dword ptr [esp + 0x44], 0xb47e74 */ W32((u32)(r_esp+0x44u), 0xb47e74u);
    /* 008515bb: jne 0x851612 */ if (!fZ) goto L_00851612;
L_008515bd:; BB(0x008515bd);
    /* 008515bd: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008515c3: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008515c6: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008515c9: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008515cc: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008515ce: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008515d1: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008515d3: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008515d7: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008515d9: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008515dd: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008515df: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008515e3: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008515e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008515e8: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8515eeu); call_ind(t); }
    /* 008515ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008515ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008515f1: jne 0x85164c */ if (!fZ) goto L_0085164c;
L_008515f3:; BB(0x008515f3);
    /* 008515f3: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008515f8: push 0xb47ecc */ { u32 v = 0xb47eccu; r_esp -= 4; W32(r_esp, v); }
    /* 008515fd: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851602u); f_0085b5fd();
    /* 00851602: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851605: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85160au); f_00859dd6();
    /* 0085160a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851610: jmp 0x85164c */ goto L_0085164c;
L_00851612:; BB(0x00851612);
    /* 00851612: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00851618: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085161b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085161e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851621: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00851623: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851626: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851628: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085162c: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085162e: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851632: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851634: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851638: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085163c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085163d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851643u); call_ind(t); }
    /* 00851643: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851646: je 0x8566f0 */ if (fZ) goto L_008566f0;
L_0085164c:; BB(0x0085164c);
    /* 0085164c: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00851650: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851653: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00851655: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008515a9); r_esp += 4; return;
L_008566f0:; BB(0x008566f0);
    /* 008566f0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8566f5u); f_00859dd6();
    /* 008566f5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008566fb: jmp 0x85164c */ goto L_0085164c;
}

void f_00851635(void)
{
    FN_ENTER(0x00851635);
    /* 00851635: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00851636: and al, 0x58 */ {  u32 a = (u8)r_eax; u32 b = 0x58u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00851638: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085163c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085163d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851643u); call_ind(t); }
    /* 00851643: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851646: je 0x8566f0 */ if (fZ) goto L_008566f0;
L_0085164c:; BB(0x0085164c);
    /* 0085164c: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00851650: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851653: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00851655: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851635); r_esp += 4; return;
L_008566f0:; BB(0x008566f0);
    /* 008566f0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8566f5u); f_00859dd6();
    /* 008566f5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008566fb: jmp 0x85164c */ goto L_0085164c;
}

void f_0085165a(void)
{
    FN_ENTER(0x0085165a);
    /* 0085165a: mov dword ptr [esp + 0x40], 2 */ W32((u32)(r_esp+0x40u), 0x2u);
    /* 00851662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851664: mov dword ptr [esp + 0x44], 0xb47e74 */ W32((u32)(r_esp+0x44u), 0xb47e74u);
    /* 0085166c: jne 0x8516c3 */ if (!fZ) goto L_008516c3;
L_0085166e:; BB(0x0085166e);
    /* 0085166e: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00851674: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851677: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085167a: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085167d: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085167f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851682: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851684: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851688: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085168a: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085168e: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851690: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851694: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851699: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85169fu); call_ind(t); }
    /* 0085169f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008516a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008516a2: jne 0x8516fd */ if (!fZ) goto L_008516fd;
L_008516a4:; BB(0x008516a4);
    /* 008516a4: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008516a9: push 0xb47e7c */ { u32 v = 0xb47e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 008516ae: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8516b3u); f_0085b5fd();
    /* 008516b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008516b6: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8516bbu); f_00859dd6();
    /* 008516bb: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008516c1: jmp 0x8516fd */ goto L_008516fd;
L_008516c3:; BB(0x008516c3);
    /* 008516c3: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008516c9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008516cc: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008516cf: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008516d2: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008516d4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008516d7: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008516d9: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008516dd: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008516df: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008516e3: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008516e5: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008516e9: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008516ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008516ee: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8516f4u); call_ind(t); }
    /* 008516f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008516f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008516f7: je 0x856700 */ if (fZ) goto L_00856700;
L_008516fd:; BB(0x008516fd);
    /* 008516fd: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00851701: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851704: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00851706: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085165a); r_esp += 4; return;
L_00856700:; BB(0x00856700);
    /* 00856700: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856705u); f_00859dd6();
    /* 00856705: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085670b: jmp 0x8516fd */ goto L_008516fd;
}

void f_0085170b(void)
{
    FN_ENTER(0x0085170b);
    /* 0085170b: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00851712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851714: mov dword ptr [esp + 4], 0xb47eac */ W32((u32)(r_esp+0x4u), 0xb47eacu);
    /* 0085171c: jne 0x851772 */ if (!fZ) goto L_00851772;
L_0085171e:; BB(0x0085171e);
    /* 0085171e: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00851724: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851727: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085172a: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085172d: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085172f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851732: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851734: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851738: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085173a: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085173e: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851740: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851744: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851748: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85174eu); call_ind(t); }
    /* 0085174e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085174f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851751: jne 0x8517ab */ if (!fZ) goto L_008517ab;
L_00851753:; BB(0x00851753);
    /* 00851753: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851758: push 0xb47eb4 */ { u32 v = 0xb47eb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085175d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851762u); f_0085b5fd();
    /* 00851762: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851765: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85176au); f_00859dd6();
    /* 0085176a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851770: jmp 0x8517ab */ goto L_008517ab;
L_00851772:; BB(0x00851772);
    /* 00851772: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00851778: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085177b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085177e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851781: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851783: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851786: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851788: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085178c: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085178e: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851792: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851794: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851798: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085179b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085179c: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8517a2u); call_ind(t); }
    /* 008517a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008517a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008517a5: je 0x856710 */ if (fZ) goto L_00856710;
L_008517ab:; BB(0x008517ab);
    /* 008517ab: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008517af: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008517b2: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008517b4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085170b); r_esp += 4; return;
L_00856710:; BB(0x00856710);
    /* 00856710: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856715u); f_00859dd6();
    /* 00856715: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085671b: jmp 0x8517ab */ goto L_008517ab;
}

void f_008517b9(void)
{
    FN_ENTER(0x008517b9);
    /* 008517b9: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8517beu); f_00859dd6();
    /* 008517be: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008517c4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008517b9); r_esp += 4; return;
}

void f_008517c9(void)
{
    FN_ENTER(0x008517c9);
    /* 008517c9: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 008517d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008517d3: mov dword ptr [esp + 0x64], 0xb47d68 */ W32((u32)(r_esp+0x64u), 0xb47d68u);
    /* 008517db: jne 0x851831 */ if (!fZ) goto L_00851831;
L_008517dd:; BB(0x008517dd);
    /* 008517dd: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 008517e2: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008517e5: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008517e8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008517ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008517ec: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008517f0: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008517f3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008517f5: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008517f9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008517fc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008517fe: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851802: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851807: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85180du); call_ind(t); }
    /* 0085180d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085180e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851810: jne 0x85186a */ if (!fZ) goto L_0085186a;
L_00851812:; BB(0x00851812);
    /* 00851812: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851817: push 0xb47db8 */ { u32 v = 0xb47db8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085181c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851821u); f_0085b5fd();
    /* 00851821: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851824: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851829u); f_00859dd6();
    /* 00851829: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085182f: jmp 0x85186a */ goto L_0085186a;
L_00851831:; BB(0x00851831);
    /* 00851831: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00851836: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851839: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085183c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085183e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851840: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00851844: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00851847: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851849: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085184d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851850: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851852: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851856: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085185a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085185b: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851861u); call_ind(t); }
    /* 00851861: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851862: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851864: je 0x856720 */ if (fZ) goto L_00856720;
L_0085186a:; BB(0x0085186a);
    /* 0085186a: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085186e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851871: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00851873: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008517c9); r_esp += 4; return;
L_00856720:; BB(0x00856720);
    /* 00856720: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856725u); f_00859dd6();
    /* 00856725: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085672b: jmp 0x85186a */ goto L_0085186a;
}

void f_00851878(void)
{
    FN_ENTER(0x00851878);
    /* 00851878: mov dword ptr [esp + 0x60], 2 */ W32((u32)(r_esp+0x60u), 0x2u);
    /* 00851880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851882: mov dword ptr [esp + 0x64], 0xb47d68 */ W32((u32)(r_esp+0x64u), 0xb47d68u);
    /* 0085188a: jne 0x8518e0 */ if (!fZ) goto L_008518e0;
L_0085188c:; BB(0x0085188c);
    /* 0085188c: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00851891: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851894: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00851897: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00851899: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085189b: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0085189f: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008518a2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008518a4: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008518a8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008518ab: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008518ad: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008518b1: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008518b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008518b6: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8518bcu); call_ind(t); }
    /* 008518bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008518bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008518bf: jne 0x851919 */ if (!fZ) goto L_00851919;
L_008518c1:; BB(0x008518c1);
    /* 008518c1: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008518c6: push 0xb47d70 */ { u32 v = 0xb47d70u; r_esp -= 4; W32(r_esp, v); }
    /* 008518cb: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8518d0u); f_0085b5fd();
    /* 008518d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008518d3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8518d8u); f_00859dd6();
    /* 008518d8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008518de: jmp 0x851919 */ goto L_00851919;
L_008518e0:; BB(0x008518e0);
    /* 008518e0: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 008518e5: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008518e8: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008518eb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008518ed: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008518ef: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008518f3: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008518f6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008518f8: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008518fc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008518ff: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851901: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851905: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851909: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085190a: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851910u); call_ind(t); }
    /* 00851910: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851911: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851913: je 0x856730 */ if (fZ) goto L_00856730;
L_00851919:; BB(0x00851919);
    /* 00851919: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085191d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851920: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00851922: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851878); r_esp += 4; return;
L_00856730:; BB(0x00856730);
    /* 00856730: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856735u); f_00859dd6();
    /* 00856735: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085673b: jmp 0x851919 */ goto L_00851919;
}

void f_00851927(void)
{
    FN_ENTER(0x00851927);
    /* 00851927: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 0085192f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851931: mov dword ptr [esp + 0x44], 0xb47d4c */ W32((u32)(r_esp+0x44u), 0xb47d4cu);
    /* 00851939: jne 0x851990 */ if (!fZ) goto L_00851990;
L_0085193b:; BB(0x0085193b);
    /* 0085193b: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00851941: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851944: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00851947: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085194a: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085194c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085194f: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851951: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851955: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851957: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085195b: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085195d: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851961: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851966: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85196cu); call_ind(t); }
    /* 0085196c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085196d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085196f: jne 0x8519ca */ if (!fZ) goto L_008519ca;
L_00851971:; BB(0x00851971);
    /* 00851971: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851976: push 0xb47da0 */ { u32 v = 0xb47da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085197b: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851980u); f_0085b5fd();
    /* 00851980: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851983: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851988u); f_00859dd6();
    /* 00851988: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085198e: jmp 0x8519ca */ goto L_008519ca;
L_00851990:; BB(0x00851990);
    /* 00851990: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00851996: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851999: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085199c: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085199f: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008519a1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008519a4: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008519a6: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008519aa: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008519ac: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008519b0: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008519b2: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008519b6: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008519ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008519bb: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8519c1u); call_ind(t); }
    /* 008519c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008519c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008519c4: je 0x856740 */ if (fZ) goto L_00856740;
L_008519ca:; BB(0x008519ca);
    /* 008519ca: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008519ce: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008519d1: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008519d3: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851927); r_esp += 4; return;
L_00856740:; BB(0x00856740);
    /* 00856740: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856745u); f_00859dd6();
    /* 00856745: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085674b: jmp 0x8519ca */ goto L_008519ca;
}

void f_008519d8(void)
{
    FN_ENTER(0x008519d8);
    /* 008519d8: mov dword ptr [esp + 0x40], 2 */ W32((u32)(r_esp+0x40u), 0x2u);
    /* 008519e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008519e2: mov dword ptr [esp + 0x44], 0xb47d4c */ W32((u32)(r_esp+0x44u), 0xb47d4cu);
    /* 008519ea: jne 0x851a41 */ if (!fZ) goto L_00851a41;
L_008519ec:; BB(0x008519ec);
    /* 008519ec: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008519f2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008519f5: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008519f8: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008519fb: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008519fd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851a00: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851a02: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851a06: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851a08: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851a0c: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851a0e: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851a12: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851a17: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851a1du); call_ind(t); }
    /* 00851a1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851a1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851a20: jne 0x851a7b */ if (!fZ) goto L_00851a7b;
L_00851a22:; BB(0x00851a22);
    /* 00851a22: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851a27: push 0xb47d54 */ { u32 v = 0xb47d54u; r_esp -= 4; W32(r_esp, v); }
    /* 00851a2c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851a31u); f_0085b5fd();
    /* 00851a31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851a34: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851a39u); f_00859dd6();
    /* 00851a39: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851a3f: jmp 0x851a7b */ goto L_00851a7b;
L_00851a41:; BB(0x00851a41);
    /* 00851a41: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00851a47: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851a4a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00851a4d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851a50: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00851a52: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851a55: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851a57: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851a5b: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851a5d: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851a61: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851a63: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851a67: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851a6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851a6c: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851a72u); call_ind(t); }
    /* 00851a72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851a75: je 0x856750 */ if (fZ) goto L_00856750;
L_00851a7b:; BB(0x00851a7b);
    /* 00851a7b: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00851a7f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851a82: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00851a84: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008519d8); r_esp += 4; return;
L_00856750:; BB(0x00856750);
    /* 00856750: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856755u); f_00859dd6();
    /* 00856755: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085675b: jmp 0x851a7b */ goto L_00851a7b;
}

void f_00851a89(void)
{
    FN_ENTER(0x00851a89);
    /* 00851a89: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00851a90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851a92: mov dword ptr [esp + 4], 0xb47d2c */ W32((u32)(r_esp+0x4u), 0xb47d2cu);
    /* 00851a9a: jne 0x851af0 */ if (!fZ) goto L_00851af0;
L_00851a9c:; BB(0x00851a9c);
    /* 00851a9c: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00851aa2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851aa5: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00851aa8: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851aab: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851aad: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851ab0: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851ab2: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851ab6: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851ab8: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851abc: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851abe: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851ac2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851ac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851ac6: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851accu); call_ind(t); }
    /* 00851acc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851acf: jne 0x851b29 */ if (!fZ) goto L_00851b29;
L_00851ad1:; BB(0x00851ad1);
    /* 00851ad1: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851ad6: push 0xb47d88 */ { u32 v = 0xb47d88u; r_esp -= 4; W32(r_esp, v); }
    /* 00851adb: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851ae0u); f_0085b5fd();
    /* 00851ae0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851ae3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851ae8u); f_00859dd6();
    /* 00851ae8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851aee: jmp 0x851b29 */ goto L_00851b29;
L_00851af0:; BB(0x00851af0);
    /* 00851af0: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00851af6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851af9: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00851afc: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851aff: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851b01: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851b04: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851b06: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851b0a: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851b0c: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851b10: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851b12: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851b16: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851b1a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851b20u); call_ind(t); }
    /* 00851b20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851b21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851b23: je 0x856760 */ if (fZ) goto L_00856760;
L_00851b29:; BB(0x00851b29);
    /* 00851b29: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00851b2d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851b30: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851b32: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851a89); r_esp += 4; return;
L_00856760:; BB(0x00856760);
    /* 00856760: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856765u); f_00859dd6();
    /* 00856765: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085676b: jmp 0x851b29 */ goto L_00851b29;
}

void f_00851b37(void)
{
    FN_ENTER(0x00851b37);
    /* 00851b37: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 00851b3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851b40: mov dword ptr [esp + 4], 0xb47d2c */ W32((u32)(r_esp+0x4u), 0xb47d2cu);
    /* 00851b48: jne 0x851b9e */ if (!fZ) goto L_00851b9e;
L_00851b4a:; BB(0x00851b4a);
    /* 00851b4a: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00851b50: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851b53: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00851b56: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851b59: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851b5b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851b5e: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851b60: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851b64: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851b66: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851b6a: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851b6c: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851b70: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851b73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851b74: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851b7au); call_ind(t); }
    /* 00851b7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851b7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851b7d: jne 0x851bd7 */ if (!fZ) goto L_00851bd7;
L_00851b7f:; BB(0x00851b7f);
    /* 00851b7f: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851b84: push 0xb47d34 */ { u32 v = 0xb47d34u; r_esp -= 4; W32(r_esp, v); }
    /* 00851b89: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851b8eu); f_0085b5fd();
    /* 00851b8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851b91: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851b96u); f_00859dd6();
    /* 00851b96: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851b9c: jmp 0x851bd7 */ goto L_00851bd7;
L_00851b9e:; BB(0x00851b9e);
    /* 00851b9e: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00851ba4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851ba7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00851baa: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851bad: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851baf: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851bb2: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851bb4: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851bb8: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851bba: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851bbe: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851bc0: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851bc4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851bc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851bc8: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851bceu); call_ind(t); }
    /* 00851bce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851bcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851bd1: je 0x856770 */ if (fZ) goto L_00856770;
L_00851bd7:; BB(0x00851bd7);
    /* 00851bd7: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00851bdb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851bde: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851be0: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851b37); r_esp += 4; return;
L_00856770:; BB(0x00856770);
    /* 00856770: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856775u); f_00859dd6();
    /* 00856775: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085677b: jmp 0x851bd7 */ goto L_00851bd7;
}

void f_00851be5(void)
{
    FN_ENTER(0x00851be5);
    /* 00851be5: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00851bed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851bef: mov dword ptr [esp + 0x64], 0xb4832c */ W32((u32)(r_esp+0x64u), 0xb4832cu);
    /* 00851bf7: jne 0x851c43 */ if (!fZ) goto L_00851c43;
L_00851bf9:; BB(0x00851bf9);
    /* 00851bf9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851bfc: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851bff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00851c01: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851c05: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851c07: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00851c0b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851c0e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851c10: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851c14: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851c19: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851c1fu); call_ind(t); }
    /* 00851c1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851c20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851c22: jne 0x851c72 */ if (!fZ) goto L_00851c72;
L_00851c24:; BB(0x00851c24);
    /* 00851c24: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851c29: push 0xb48334 */ { u32 v = 0xb48334u; r_esp -= 4; W32(r_esp, v); }
    /* 00851c2e: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851c33u); f_0085b5fd();
    /* 00851c33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851c36: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851c3bu); f_00859dd6();
    /* 00851c3b: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851c41: jmp 0x851c72 */ goto L_00851c72;
L_00851c43:; BB(0x00851c43);
    /* 00851c43: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851c46: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851c49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00851c4b: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851c4f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851c51: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00851c55: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851c58: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851c5a: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851c5e: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851c63: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851c69u); call_ind(t); }
    /* 00851c69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851c6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851c6c: je 0x856780 */ if (fZ) goto L_00856780;
L_00851c72:; BB(0x00851c72);
    /* 00851c72: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00851c76: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00851c79: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00851c7b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851c80u); f_00859dd6();
    /* 00851c80: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851c86: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851be5); r_esp += 4; return;
L_00856780:; BB(0x00856780);
    /* 00856780: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856785u); f_00859dd6();
    /* 00856785: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085678b: jmp 0x851c72 */ goto L_00851c72;
}

void f_00851c8b(void)
{
    FN_ENTER(0x00851c8b);
    /* 00851c8b: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00851c93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851c95: mov dword ptr [esp + 0x44], 0xb48324 */ W32((u32)(r_esp+0x44u), 0xb48324u);
    /* 00851c9d: jne 0x851ce9 */ if (!fZ) goto L_00851ce9;
L_00851c9f:; BB(0x00851c9f);
    /* 00851c9f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851ca2: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851ca5: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851ca8: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851caa: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851cae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851cb2: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851cb4: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851cb8: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851cba: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851cbf: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851cc5u); call_ind(t); }
    /* 00851cc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851cc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851cc8: jne 0x851d18 */ if (!fZ) goto L_00851d18;
L_00851cca:; BB(0x00851cca);
    /* 00851cca: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851ccf: push 0xb4830c */ { u32 v = 0xb4830cu; r_esp -= 4; W32(r_esp, v); }
    /* 00851cd4: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851cd9u); f_0085b5fd();
    /* 00851cd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851cdc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851ce1u); f_00859dd6();
    /* 00851ce1: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851ce7: jmp 0x851d18 */ goto L_00851d18;
L_00851ce9:; BB(0x00851ce9);
    /* 00851ce9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851cec: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851cef: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851cf2: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851cf4: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851cf8: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851cfc: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851cfe: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851d02: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851d04: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851d09: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851d0fu); call_ind(t); }
    /* 00851d0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851d10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851d12: je 0x856790 */ if (fZ) goto L_00856790;
L_00851d18:; BB(0x00851d18);
    /* 00851d18: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00851d1c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851d1f: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00851d21: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851c8b); r_esp += 4; return;
L_00856790:; BB(0x00856790);
    /* 00856790: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856795u); f_00859dd6();
    /* 00856795: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085679b: jmp 0x851d18 */ goto L_00851d18;
}

void f_00851d26(void)
{
    FN_ENTER(0x00851d26);
    /* 00851d26: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00851d2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851d2f: mov dword ptr [esp + 4], 0xb48304 */ W32((u32)(r_esp+0x4u), 0xb48304u);
    /* 00851d37: jne 0x851d82 */ if (!fZ) goto L_00851d82;
L_00851d39:; BB(0x00851d39);
    /* 00851d39: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851d3c: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851d3f: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851d42: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851d44: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851d48: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851d4b: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851d4d: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851d51: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851d53: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851d57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851d58: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851d5eu); call_ind(t); }
    /* 00851d5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851d5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851d61: jne 0x851db0 */ if (!fZ) goto L_00851db0;
L_00851d63:; BB(0x00851d63);
    /* 00851d63: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851d68: push 0xb4830c */ { u32 v = 0xb4830cu; r_esp -= 4; W32(r_esp, v); }
    /* 00851d6d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851d72u); f_0085b5fd();
    /* 00851d72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851d75: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851d7au); f_00859dd6();
    /* 00851d7a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851d80: jmp 0x851db0 */ goto L_00851db0;
L_00851d82:; BB(0x00851d82);
    /* 00851d82: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851d85: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851d88: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851d8b: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00851d8d: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00851d91: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00851d94: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00851d96: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00851d9a: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00851d9c: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00851da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851da1: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x851da7u); call_ind(t); }
    /* 00851da7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851daa: je 0x8567a0 */ if (fZ) goto L_008567a0;
L_00851db0:; BB(0x00851db0);
    /* 00851db0: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00851db4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851db7: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00851db9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851d26); r_esp += 4; return;
L_008567a0:; BB(0x008567a0);
    /* 008567a0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8567a5u); f_00859dd6();
    /* 008567a5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008567ab: jmp 0x851db0 */ goto L_00851db0;
}

void f_00851dbe(void)
{
    FN_ENTER(0x00851dbe);
    /* 00851dbe: mov dword ptr [esp + 0x60], 2 */ W32((u32)(r_esp+0x60u), 0x2u);
    /* 00851dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851dc8: mov dword ptr [esp + 0x64], 0xb4838c */ W32((u32)(r_esp+0x64u), 0xb4838cu);
    /* 00851dd0: jne 0x851e23 */ if (!fZ) goto L_00851e23;
L_00851dd2:; BB(0x00851dd2);
    /* 00851dd2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851dd5: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851dd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00851dda: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851dde: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851de0: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00851de4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851de7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851de9: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851ded: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851df1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851df2: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851df8u); call_ind(t); }
    /* 00851df8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851df9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851dfb: jne 0x85666c */ if (!fZ) goto L_0085666c;
L_00851e01:; BB(0x00851e01);
    /* 00851e01: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851e06: push 0xb483d8 */ { u32 v = 0xb483d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00851e0b: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851e10u); f_0085b5fd();
    /* 00851e10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851e13: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851e18u); f_00859dd6();
    /* 00851e18: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851e1e: jmp 0x85666c */ goto L_0085666c;
L_00851e23:; BB(0x00851e23);
    /* 00851e23: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851e26: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851e29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00851e2b: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851e2f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851e31: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00851e35: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851e38: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851e3a: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851e3e: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851e43: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851e49u); call_ind(t); }
    /* 00851e49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851e4c: je 0x8567b0 */ if (fZ) goto L_008567b0;
L_00851e52:; BB(0x00851e52);
    /* 00851e52: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851dbe); r_esp += 4; return;
L_008567b0:; BB(0x008567b0);
    /* 008567b0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8567b5u); f_00859dd6();
    /* 008567b5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008567bb: jmp 0x85666c */ goto L_0085666c;
}

void f_00851e57(void)
{
    FN_ENTER(0x00851e57);
    /* 00851e57: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00851e5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851e61: mov dword ptr [esp + 0x64], 0xb4838c */ W32((u32)(r_esp+0x64u), 0xb4838cu);
    /* 00851e69: jne 0x851ebc */ if (!fZ) goto L_00851ebc;
L_00851e6b:; BB(0x00851e6b);
    /* 00851e6b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851e6e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851e71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00851e73: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851e77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851e79: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00851e7d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851e80: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851e82: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851e86: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851e8b: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851e91u); call_ind(t); }
    /* 00851e91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851e92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851e94: jne 0x85666c */ if (!fZ) goto L_0085666c;
L_00851e9a:; BB(0x00851e9a);
    /* 00851e9a: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851e9f: push 0xb48394 */ { u32 v = 0xb48394u; r_esp -= 4; W32(r_esp, v); }
    /* 00851ea4: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851ea9u); f_0085b5fd();
    /* 00851ea9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851eac: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851eb1u); f_00859dd6();
    /* 00851eb1: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851eb7: jmp 0x85666c */ goto L_0085666c;
L_00851ebc:; BB(0x00851ebc);
    /* 00851ebc: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851ebf: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00851ec2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00851ec4: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00851ec8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00851eca: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00851ece: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00851ed1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00851ed3: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00851ed7: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00851edb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851edc: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x851ee2u); call_ind(t); }
    /* 00851ee2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851ee5: je 0x8567c0 */ if (fZ) goto L_008567c0;
L_00851eeb:; BB(0x00851eeb);
    /* 00851eeb: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851e57); r_esp += 4; return;
L_008567c0:; BB(0x008567c0);
    /* 008567c0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8567c5u); f_00859dd6();
    /* 008567c5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008567cb: jmp 0x85666c */ goto L_0085666c;
}

void f_00851ef0(void)
{
    FN_ENTER(0x00851ef0);
    /* 00851ef0: mov dword ptr [esp + 0x40], 2 */ W32((u32)(r_esp+0x40u), 0x2u);
    /* 00851ef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851efa: mov dword ptr [esp + 0x44], 0xb4836c */ W32((u32)(r_esp+0x44u), 0xb4836cu);
    /* 00851f02: jne 0x851f55 */ if (!fZ) goto L_00851f55;
L_00851f04:; BB(0x00851f04);
    /* 00851f04: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851f07: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851f0a: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851f0d: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851f0f: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851f13: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851f17: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851f19: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851f1d: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851f1f: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851f24: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851f2au); call_ind(t); }
    /* 00851f2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851f2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851f2d: jne 0x85666c */ if (!fZ) goto L_0085666c;
L_00851f33:; BB(0x00851f33);
    /* 00851f33: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851f38: push 0xb483c4 */ { u32 v = 0xb483c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00851f3d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851f42u); f_0085b5fd();
    /* 00851f42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851f45: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851f4au); f_00859dd6();
    /* 00851f4a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851f50: jmp 0x85666c */ goto L_0085666c;
L_00851f55:; BB(0x00851f55);
    /* 00851f55: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851f58: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851f5b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851f5e: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851f60: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851f64: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851f68: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851f6a: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851f6e: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851f70: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851f75: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851f7bu); call_ind(t); }
    /* 00851f7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851f7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851f7e: je 0x8567d0 */ if (fZ) goto L_008567d0;
L_00851f84:; BB(0x00851f84);
    /* 00851f84: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851ef0); r_esp += 4; return;
L_008567d0:; BB(0x008567d0);
    /* 008567d0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8567d5u); f_00859dd6();
    /* 008567d5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008567db: jmp 0x85666c */ goto L_0085666c;
}

void f_00851f89(void)
{
    FN_ENTER(0x00851f89);
    /* 00851f89: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00851f91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00851f93: mov dword ptr [esp + 0x44], 0xb4836c */ W32((u32)(r_esp+0x44u), 0xb4836cu);
    /* 00851f9b: jne 0x851fee */ if (!fZ) goto L_00851fee;
L_00851f9d:; BB(0x00851f9d);
    /* 00851f9d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851fa0: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851fa3: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851fa6: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851fa8: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851fac: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00851fb0: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00851fb2: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00851fb6: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00851fb8: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00851fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00851fbd: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x851fc3u); call_ind(t); }
    /* 00851fc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00851fc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00851fc6: jne 0x85666c */ if (!fZ) goto L_0085666c;
L_00851fcc:; BB(0x00851fcc);
    /* 00851fcc: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00851fd1: push 0xb48374 */ { u32 v = 0xb48374u; r_esp -= 4; W32(r_esp, v); }
    /* 00851fd6: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x851fdbu); f_0085b5fd();
    /* 00851fdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00851fde: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x851fe3u); f_00859dd6();
    /* 00851fe3: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00851fe9: jmp 0x85666c */ goto L_0085666c;
L_00851fee:; BB(0x00851fee);
    /* 00851fee: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00851ff1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00851ff4: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00851ff7: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00851ff9: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00851ffd: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852001: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852003: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852007: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852009: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085200d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085200e: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852014u); call_ind(t); }
    /* 00852014: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852015: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852017: je 0x8567e0 */ if (fZ) goto L_008567e0;
L_0085201d:; BB(0x0085201d);
    /* 0085201d: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00851f89); r_esp += 4; return;
L_008567e0:; BB(0x008567e0);
    /* 008567e0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8567e5u); f_00859dd6();
    /* 008567e5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008567eb: jmp 0x85666c */ goto L_0085666c;
}

