#include "protos.h"

void f_00853042(void)
{
    FN_ENTER(0x00853042);
    /* 00853042: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00853048: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085304b: mov dword ptr [esp + 0x40], 5 */ W32((u32)(r_esp+0x40u), 0x5u);
    /* 00853053: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853055: mov dword ptr [esp + 0x44], 0xb4850c */ W32((u32)(r_esp+0x44u), 0xb4850cu);
    /* 0085305d: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 0085305f: jne 0x8530ab */ if (!fZ) goto L_008530ab;
L_00853061:; BB(0x00853061);
    /* 00853061: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853064: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853067: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085306a: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085306c: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853070: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853074: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853076: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085307a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085307c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853081: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853087u); call_ind(t); }
    /* 00853087: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853088: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085308a: jne 0x8530da */ if (!fZ) goto L_008530da;
L_0085308c:; BB(0x0085308c);
    /* 0085308c: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853091: push 0xb48510 */ { u32 v = 0xb48510u; r_esp -= 4; W32(r_esp, v); }
    /* 00853096: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85309bu); f_0085b5fd();
    /* 0085309b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085309e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8530a3u); f_00859dd6();
    /* 008530a3: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008530a9: jmp 0x8530da */ goto L_008530da;
L_008530ab:; BB(0x008530ab);
    /* 008530ab: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008530ae: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008530b1: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008530b4: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008530b6: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008530ba: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008530be: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008530c0: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008530c4: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008530c6: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008530ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008530cb: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8530d1u); call_ind(t); }
    /* 008530d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008530d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008530d4: je 0x8569a0 */ if (fZ) goto L_008569a0;
L_008530da:; BB(0x008530da);
    /* 008530da: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008530de: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008530e1: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008530e3: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853042); r_esp += 4; return;
L_008569a0:; BB(0x008569a0);
    /* 008569a0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8569a5u); f_00859dd6();
    /* 008569a5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008569ab: jmp 0x8530da */ goto L_008530da;
}

void f_008530e8(void)
{
    FN_ENTER(0x008530e8);
    /* 008530e8: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008530ee: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008530f1: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 008530f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008530fa: mov dword ptr [esp + 4], 0xb484f4 */ W32((u32)(r_esp+0x4u), 0xb484f4u);
    /* 00853102: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 00853104: jne 0x85314f */ if (!fZ) goto L_0085314f;
L_00853106:; BB(0x00853106);
    /* 00853106: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853109: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085310c: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085310f: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853111: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853115: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853118: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085311a: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085311e: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853120: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853125: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85312bu); call_ind(t); }
    /* 0085312b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085312c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085312e: jne 0x85317d */ if (!fZ) goto L_0085317d;
L_00853130:; BB(0x00853130);
    /* 00853130: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853135: push 0xb484f8 */ { u32 v = 0xb484f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085313a: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85313fu); f_0085b5fd();
    /* 0085313f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853142: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853147u); f_00859dd6();
    /* 00853147: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085314d: jmp 0x85317d */ goto L_0085317d;
L_0085314f:; BB(0x0085314f);
    /* 0085314f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853152: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853155: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00853158: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085315a: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085315e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853161: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853163: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853167: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853169: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085316d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085316e: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853174u); call_ind(t); }
    /* 00853174: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853177: je 0x8569b0 */ if (fZ) goto L_008569b0;
L_0085317d:; BB(0x0085317d);
    /* 0085317d: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00853181: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853184: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853186: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008530e8); r_esp += 4; return;
L_008569b0:; BB(0x008569b0);
    /* 008569b0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8569b5u); f_00859dd6();
    /* 008569b5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008569bb: jmp 0x85317d */ goto L_0085317d;
}

void f_0085318b(void)
{
    FN_ENTER(0x0085318b);
    /* 0085318b: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00853190: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853193: mov dword ptr [esp + 0x60], 5 */ W32((u32)(r_esp+0x60u), 0x5u);
    /* 0085319b: mov dword ptr [esp + 0x64], 0xb484dc */ W32((u32)(r_esp+0x64u), 0xb484dcu);
    /* 008531a3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008531a5: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 008531ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008531ad: jne 0x8531f9 */ if (!fZ) goto L_008531f9;
L_008531af:; BB(0x008531af);
    /* 008531af: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008531b2: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008531b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008531b7: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008531bb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008531bd: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008531c1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008531c4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008531c6: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008531ca: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008531ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008531cf: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8531d5u); call_ind(t); }
    /* 008531d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008531d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008531d8: jne 0x853228 */ if (!fZ) goto L_00853228;
L_008531da:; BB(0x008531da);
    /* 008531da: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008531df: push 0xb484e0 */ { u32 v = 0xb484e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008531e4: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8531e9u); f_0085b5fd();
    /* 008531e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008531ec: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8531f1u); f_00859dd6();
    /* 008531f1: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008531f7: jmp 0x853228 */ goto L_00853228;
L_008531f9:; BB(0x008531f9);
    /* 008531f9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008531fc: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008531ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00853201: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00853205: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853207: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085320b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085320e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853210: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853214: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853219: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85321fu); call_ind(t); }
    /* 0085321f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853222: je 0x8569c0 */ if (fZ) goto L_008569c0;
L_00853228:; BB(0x00853228);
    /* 00853228: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085322c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085322f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853231: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085318b); r_esp += 4; return;
L_008569c0:; BB(0x008569c0);
    /* 008569c0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8569c5u); f_00859dd6();
    /* 008569c5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008569cb: jmp 0x853228 */ goto L_00853228;
}

void f_00853236(void)
{
    FN_ENTER(0x00853236);
    /* 00853236: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 0085323c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085323f: mov dword ptr [esp + 0x40], 5 */ W32((u32)(r_esp+0x40u), 0x5u);
    /* 00853247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853249: mov dword ptr [esp + 0x44], 0xb484c4 */ W32((u32)(r_esp+0x44u), 0xb484c4u);
    /* 00853251: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 00853253: jne 0x85329f */ if (!fZ) goto L_0085329f;
L_00853255:; BB(0x00853255);
    /* 00853255: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853258: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085325b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085325e: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853260: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853264: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853268: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085326a: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085326e: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853270: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853275: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85327bu); call_ind(t); }
    /* 0085327b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085327c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085327e: jne 0x8532ce */ if (!fZ) goto L_008532ce;
L_00853280:; BB(0x00853280);
    /* 00853280: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853285: push 0xb484c8 */ { u32 v = 0xb484c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085328a: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85328fu); f_0085b5fd();
    /* 0085328f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853292: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853297u); f_00859dd6();
    /* 00853297: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085329d: jmp 0x8532ce */ goto L_008532ce;
L_0085329f:; BB(0x0085329f);
    /* 0085329f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008532a2: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008532a5: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008532a8: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008532aa: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008532ae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008532b2: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008532b4: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008532b8: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008532ba: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008532be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008532bf: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8532c5u); call_ind(t); }
    /* 008532c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008532c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008532c8: je 0x8569d0 */ if (fZ) goto L_008569d0;
L_008532ce:; BB(0x008532ce);
    /* 008532ce: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008532d2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008532d5: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008532d7: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853236); r_esp += 4; return;
L_008569d0:; BB(0x008569d0);
    /* 008569d0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8569d5u); f_00859dd6();
    /* 008569d5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008569db: jmp 0x8532ce */ goto L_008532ce;
}

void f_008532dc(void)
{
    FN_ENTER(0x008532dc);
    /* 008532dc: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008532e2: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008532e5: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 008532ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008532ee: mov dword ptr [esp + 4], 0xb484ac */ W32((u32)(r_esp+0x4u), 0xb484acu);
    /* 008532f6: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 008532f8: jne 0x853343 */ if (!fZ) goto L_00853343;
L_008532fa:; BB(0x008532fa);
    /* 008532fa: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008532fd: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853300: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00853303: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853305: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853309: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085330c: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085330e: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853312: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853314: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853319: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85331fu); call_ind(t); }
    /* 0085331f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853320: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853322: jne 0x853371 */ if (!fZ) goto L_00853371;
L_00853324:; BB(0x00853324);
    /* 00853324: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853329: push 0xb484b0 */ { u32 v = 0xb484b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085332e: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853333u); f_0085b5fd();
    /* 00853333: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853336: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85333bu); f_00859dd6();
    /* 0085333b: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00853341: jmp 0x853371 */ goto L_00853371;
L_00853343:; BB(0x00853343);
    /* 00853343: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853346: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853349: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085334c: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085334e: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853352: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853355: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853357: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085335b: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085335d: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853362: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853368u); call_ind(t); }
    /* 00853368: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085336b: je 0x8569e0 */ if (fZ) goto L_008569e0;
L_00853371:; BB(0x00853371);
    /* 00853371: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00853375: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853378: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085337a: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008532dc); r_esp += 4; return;
L_008569e0:; BB(0x008569e0);
    /* 008569e0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8569e5u); f_00859dd6();
    /* 008569e5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008569eb: jmp 0x853371 */ goto L_00853371;
}

void f_0085337f(void)
{
    FN_ENTER(0x0085337f);
    /* 0085337f: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00853384: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853387: mov dword ptr [esp + 0x60], 5 */ W32((u32)(r_esp+0x60u), 0x5u);
    /* 0085338f: mov dword ptr [esp + 0x64], 0xb486bc */ W32((u32)(r_esp+0x64u), 0xb486bcu);
    /* 00853397: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853399: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 0085339f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008533a1: jne 0x8533ed */ if (!fZ) goto L_008533ed;
L_008533a3:; BB(0x008533a3);
    /* 008533a3: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008533a6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008533a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008533ab: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008533af: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008533b1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008533b5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008533b8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008533ba: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008533be: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008533c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008533c3: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8533c9u); call_ind(t); }
    /* 008533c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008533ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008533cc: jne 0x85341c */ if (!fZ) goto L_0085341c;
L_008533ce:; BB(0x008533ce);
    /* 008533ce: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008533d3: push 0xb486c0 */ { u32 v = 0xb486c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008533d8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8533ddu); f_0085b5fd();
    /* 008533dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008533e0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8533e5u); f_00859dd6();
    /* 008533e5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008533eb: jmp 0x85341c */ goto L_0085341c;
L_008533ed:; BB(0x008533ed);
    /* 008533ed: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008533f0: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008533f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008533f5: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008533f9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008533fb: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008533ff: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853402: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853404: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853408: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085340c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085340d: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853413u); call_ind(t); }
    /* 00853413: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853416: je 0x8569f0 */ if (fZ) goto L_008569f0;
L_0085341c:; BB(0x0085341c);
    /* 0085341c: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00853420: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853423: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853425: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085337f); r_esp += 4; return;
L_008569f0:; BB(0x008569f0);
    /* 008569f0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8569f5u); f_00859dd6();
    /* 008569f5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008569fb: jmp 0x85341c */ goto L_0085341c;
}

void f_0085342a(void)
{
    FN_ENTER(0x0085342a);
    /* 0085342a: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00853432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853434: mov dword ptr [esp + 0x64], 0xb486bc */ W32((u32)(r_esp+0x64u), 0xb486bcu);
    /* 0085343c: jne 0x853492 */ if (!fZ) goto L_00853492;
L_0085343e:; BB(0x0085343e);
    /* 0085343e: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00853443: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853446: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00853449: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085344b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085344d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00853451: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00853454: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853456: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085345a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085345d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085345f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853463: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853468: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85346eu); call_ind(t); }
    /* 0085346e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085346f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853471: jne 0x8534cb */ if (!fZ) goto L_008534cb;
L_00853473:; BB(0x00853473);
    /* 00853473: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853478: push 0xb486fc */ { u32 v = 0xb486fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085347d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853482u); f_0085b5fd();
    /* 00853482: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853485: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85348au); f_00859dd6();
    /* 0085348a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853490: jmp 0x8534cb */ goto L_008534cb;
L_00853492:; BB(0x00853492);
    /* 00853492: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00853497: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085349a: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085349d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085349f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008534a1: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008534a5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008534a8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008534aa: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008534ae: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008534b1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008534b3: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008534b7: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008534bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008534bc: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8534c2u); call_ind(t); }
    /* 008534c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008534c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008534c5: je 0x856a00 */ if (fZ) goto L_00856a00;
L_008534cb:; BB(0x008534cb);
    /* 008534cb: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008534cf: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008534d2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008534d4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085342a); r_esp += 4; return;
L_00856a00:; BB(0x00856a00);
    /* 00856a00: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a05u); f_00859dd6();
    /* 00856a05: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856a0b: jmp 0x8534cb */ goto L_008534cb;
}

void f_008534d9(void)
{
    FN_ENTER(0x008534d9);
    /* 008534d9: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 008534e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008534e3: mov dword ptr [esp + 0x64], 0xb486bc */ W32((u32)(r_esp+0x64u), 0xb486bcu);
    /* 008534eb: jne 0x853541 */ if (!fZ) goto L_00853541;
L_008534ed:; BB(0x008534ed);
    /* 008534ed: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 008534f2: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008534f5: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008534f8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008534fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008534fc: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00853500: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00853503: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853505: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853509: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085350c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085350e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853512: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853517: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85351du); call_ind(t); }
    /* 0085351d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085351e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853520: jne 0x85357a */ if (!fZ) goto L_0085357a;
L_00853522:; BB(0x00853522);
    /* 00853522: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853527: push 0xb486fc */ { u32 v = 0xb486fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085352c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853531u); f_0085b5fd();
    /* 00853531: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853534: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853539u); f_00859dd6();
    /* 00853539: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085353f: jmp 0x85357a */ goto L_0085357a;
L_00853541:; BB(0x00853541);
    /* 00853541: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00853546: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853549: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085354c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085354e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853550: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00853554: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00853557: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853559: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085355d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853560: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853562: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853566: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085356a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085356b: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853571u); call_ind(t); }
    /* 00853571: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853574: je 0x856a10 */ if (fZ) goto L_00856a10;
L_0085357a:; BB(0x0085357a);
    /* 0085357a: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085357e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853581: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853583: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008534d9); r_esp += 4; return;
L_00856a10:; BB(0x00856a10);
    /* 00856a10: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a15u); f_00859dd6();
    /* 00856a15: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856a1b: jmp 0x85357a */ goto L_0085357a;
}

void f_00853588(void)
{
    FN_ENTER(0x00853588);
    /* 00853588: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 0085358e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853591: mov dword ptr [esp + 0x40], 5 */ W32((u32)(r_esp+0x40u), 0x5u);
    /* 00853599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085359b: mov dword ptr [esp + 0x44], 0xb486a4 */ W32((u32)(r_esp+0x44u), 0xb486a4u);
    /* 008535a3: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 008535a5: jne 0x8535f1 */ if (!fZ) goto L_008535f1;
L_008535a7:; BB(0x008535a7);
    /* 008535a7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008535aa: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008535ad: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008535b0: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008535b2: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008535b6: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008535ba: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008535bc: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008535c0: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008535c2: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008535c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008535c7: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8535cdu); call_ind(t); }
    /* 008535cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008535ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008535d0: jne 0x853620 */ if (!fZ) goto L_00853620;
L_008535d2:; BB(0x008535d2);
    /* 008535d2: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008535d7: push 0xb486a8 */ { u32 v = 0xb486a8u; r_esp -= 4; W32(r_esp, v); }
    /* 008535dc: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8535e1u); f_0085b5fd();
    /* 008535e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008535e4: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8535e9u); f_00859dd6();
    /* 008535e9: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008535ef: jmp 0x853620 */ goto L_00853620;
L_008535f1:; BB(0x008535f1);
    /* 008535f1: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008535f4: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008535f7: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008535fa: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008535fc: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853600: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853604: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853606: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085360a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085360c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853611: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853617u); call_ind(t); }
    /* 00853617: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085361a: je 0x856a20 */ if (fZ) goto L_00856a20;
L_00853620:; BB(0x00853620);
    /* 00853620: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00853624: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853627: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853629: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853588); r_esp += 4; return;
L_00856a20:; BB(0x00856a20);
    /* 00856a20: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a25u); f_00859dd6();
    /* 00856a25: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856a2b: jmp 0x853620 */ goto L_00853620;
}

void f_0085362e(void)
{
    FN_ENTER(0x0085362e);
    /* 0085362e: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00853636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853638: mov dword ptr [esp + 0x44], 0xb486a4 */ W32((u32)(r_esp+0x44u), 0xb486a4u);
    /* 00853640: jne 0x853697 */ if (!fZ) goto L_00853697;
L_00853642:; BB(0x00853642);
    /* 00853642: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00853648: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085364b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085364e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853651: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853653: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853656: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853658: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085365c: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085365e: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853662: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853664: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853668: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085366c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085366d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853673u); call_ind(t); }
    /* 00853673: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853674: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853676: jne 0x8536d1 */ if (!fZ) goto L_008536d1;
L_00853678:; BB(0x00853678);
    /* 00853678: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085367d: push 0xb486e8 */ { u32 v = 0xb486e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00853682: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853687u); f_0085b5fd();
    /* 00853687: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085368a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85368fu); f_00859dd6();
    /* 0085368f: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853695: jmp 0x8536d1 */ goto L_008536d1;
L_00853697:; BB(0x00853697);
    /* 00853697: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 0085369d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008536a0: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008536a3: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008536a6: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008536a8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008536ab: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008536ad: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008536b1: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008536b3: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008536b7: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008536b9: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008536bd: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008536c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008536c2: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8536c8u); call_ind(t); }
    /* 008536c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008536c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008536cb: je 0x856a30 */ if (fZ) goto L_00856a30;
L_008536d1:; BB(0x008536d1);
    /* 008536d1: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008536d5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008536d8: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008536da: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085362e); r_esp += 4; return;
L_00856a30:; BB(0x00856a30);
    /* 00856a30: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a35u); f_00859dd6();
    /* 00856a35: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856a3b: jmp 0x8536d1 */ goto L_008536d1;
}

void f_008536df(void)
{
    FN_ENTER(0x008536df);
    /* 008536df: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 008536e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008536e9: mov dword ptr [esp + 0x44], 0xb486a4 */ W32((u32)(r_esp+0x44u), 0xb486a4u);
    /* 008536f1: jne 0x853748 */ if (!fZ) goto L_00853748;
L_008536f3:; BB(0x008536f3);
    /* 008536f3: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008536f9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008536fc: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008536ff: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853702: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853704: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853707: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853709: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085370d: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085370f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853713: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853715: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853719: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085371d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085371e: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853724u); call_ind(t); }
    /* 00853724: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853727: jne 0x853782 */ if (!fZ) goto L_00853782;
L_00853729:; BB(0x00853729);
    /* 00853729: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085372e: push 0xb486e8 */ { u32 v = 0xb486e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00853733: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853738u); f_0085b5fd();
    /* 00853738: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085373b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853740u); f_00859dd6();
    /* 00853740: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853746: jmp 0x853782 */ goto L_00853782;
L_00853748:; BB(0x00853748);
    /* 00853748: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 0085374e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853751: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853754: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853757: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853759: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085375c: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085375e: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853762: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853764: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853768: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085376a: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085376e: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853773: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853779u); call_ind(t); }
    /* 00853779: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085377a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085377c: je 0x856a40 */ if (fZ) goto L_00856a40;
L_00853782:; BB(0x00853782);
    /* 00853782: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00853786: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853789: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085378b: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008536df); r_esp += 4; return;
L_00856a40:; BB(0x00856a40);
    /* 00856a40: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a45u); f_00859dd6();
    /* 00856a45: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856a4b: jmp 0x853782 */ goto L_00853782;
}

void f_00853790(void)
{
    FN_ENTER(0x00853790);
    /* 00853790: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00853796: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853799: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 008537a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008537a2: mov dword ptr [esp + 4], 0xb4868c */ W32((u32)(r_esp+0x4u), 0xb4868cu);
    /* 008537aa: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 008537ac: jne 0x8537f7 */ if (!fZ) goto L_008537f7;
L_008537ae:; BB(0x008537ae);
    /* 008537ae: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008537b1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008537b4: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008537b7: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008537b9: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008537bd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008537c0: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008537c2: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008537c6: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008537c8: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008537cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008537cd: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8537d3u); call_ind(t); }
    /* 008537d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008537d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008537d6: jne 0x853825 */ if (!fZ) goto L_00853825;
L_008537d8:; BB(0x008537d8);
    /* 008537d8: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008537dd: push 0xb48690 */ { u32 v = 0xb48690u; r_esp -= 4; W32(r_esp, v); }
    /* 008537e2: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8537e7u); f_0085b5fd();
    /* 008537e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008537ea: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8537efu); f_00859dd6();
    /* 008537ef: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008537f5: jmp 0x853825 */ goto L_00853825;
L_008537f7:; BB(0x008537f7);
    /* 008537f7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008537fa: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008537fd: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00853800: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853802: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853806: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853809: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085380b: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085380f: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853811: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853816: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85381cu); call_ind(t); }
    /* 0085381c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085381d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085381f: je 0x856a50 */ if (fZ) goto L_00856a50;
L_00853825:; BB(0x00853825);
    /* 00853825: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00853829: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085382c: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085382e: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853790); r_esp += 4; return;
L_00856a50:; BB(0x00856a50);
    /* 00856a50: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a55u); f_00859dd6();
    /* 00856a55: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856a5b: jmp 0x853825 */ goto L_00853825;
}

void f_00853833(void)
{
    FN_ENTER(0x00853833);
    /* 00853833: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0085383a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085383c: mov dword ptr [esp + 4], 0xb4868c */ W32((u32)(r_esp+0x4u), 0xb4868cu);
    /* 00853844: jne 0x85389a */ if (!fZ) goto L_0085389a;
L_00853846:; BB(0x00853846);
    /* 00853846: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 0085384c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085384f: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853852: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853855: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853857: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085385a: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085385c: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853860: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853862: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853866: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853868: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085386c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085386f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853870: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853876u); call_ind(t); }
    /* 00853876: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853877: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853879: jne 0x8538d3 */ if (!fZ) goto L_008538d3;
L_0085387b:; BB(0x0085387b);
    /* 0085387b: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853880: push 0xb486d4 */ { u32 v = 0xb486d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00853885: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85388au); f_0085b5fd();
    /* 0085388a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085388d: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853892u); f_00859dd6();
    /* 00853892: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853898: jmp 0x8538d3 */ goto L_008538d3;
L_0085389a:; BB(0x0085389a);
    /* 0085389a: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 008538a0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008538a3: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008538a6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008538a9: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008538ab: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008538ae: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008538b0: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008538b4: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008538b6: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008538ba: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008538bc: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008538c0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008538c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008538c4: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8538cau); call_ind(t); }
    /* 008538ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008538cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008538cd: je 0x856a60 */ if (fZ) goto L_00856a60;
L_008538d3:; BB(0x008538d3);
    /* 008538d3: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008538d7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008538da: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008538dc: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853833); r_esp += 4; return;
L_00856a60:; BB(0x00856a60);
    /* 00856a60: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a65u); f_00859dd6();
    /* 00856a65: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856a6b: jmp 0x8538d3 */ goto L_008538d3;
}

void f_008538e1(void)
{
    FN_ENTER(0x008538e1);
    /* 008538e1: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 008538e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008538ea: mov dword ptr [esp + 4], 0xb4868c */ W32((u32)(r_esp+0x4u), 0xb4868cu);
    /* 008538f2: jne 0x853948 */ if (!fZ) goto L_00853948;
L_008538f4:; BB(0x008538f4);
    /* 008538f4: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008538fa: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008538fd: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853900: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853903: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853905: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853908: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085390a: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085390e: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853910: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853914: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853916: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085391a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085391d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085391e: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853924u); call_ind(t); }
    /* 00853924: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853927: jne 0x853981 */ if (!fZ) goto L_00853981;
L_00853929:; BB(0x00853929);
    /* 00853929: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085392e: push 0xb486d4 */ { u32 v = 0xb486d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00853933: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853938u); f_0085b5fd();
    /* 00853938: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085393b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853940u); f_00859dd6();
    /* 00853940: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853946: jmp 0x853981 */ goto L_00853981;
L_00853948:; BB(0x00853948);
    /* 00853948: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 0085394e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853951: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853954: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853957: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853959: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085395c: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085395e: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853962: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853964: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853968: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085396a: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085396e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853972: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853978u); call_ind(t); }
    /* 00853978: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085397b: je 0x856a70 */ if (fZ) goto L_00856a70;
L_00853981:; BB(0x00853981);
    /* 00853981: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00853985: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853988: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085398a: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008538e1); r_esp += 4; return;
L_00856a70:; BB(0x00856a70);
    /* 00856a70: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a75u); f_00859dd6();
    /* 00856a75: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856a7b: jmp 0x853981 */ goto L_00853981;
}

void f_0085398f(void)
{
    FN_ENTER(0x0085398f);
    /* 0085398f: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00853994: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853997: mov dword ptr [esp + 0x60], 5 */ W32((u32)(r_esp+0x60u), 0x5u);
    /* 0085399f: mov dword ptr [esp + 0x64], 0xb48638 */ W32((u32)(r_esp+0x64u), 0xb48638u);
    /* 008539a7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008539a9: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 008539af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008539b1: jne 0x8539fd */ if (!fZ) goto L_008539fd;
L_008539b3:; BB(0x008539b3);
    /* 008539b3: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008539b6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008539b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008539bb: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008539bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008539c1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008539c5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008539c8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008539ca: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008539ce: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008539d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008539d3: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8539d9u); call_ind(t); }
    /* 008539d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008539da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008539dc: jne 0x853a2c */ if (!fZ) goto L_00853a2c;
L_008539de:; BB(0x008539de);
    /* 008539de: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008539e3: push 0xb4863c */ { u32 v = 0xb4863cu; r_esp -= 4; W32(r_esp, v); }
    /* 008539e8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8539edu); f_0085b5fd();
    /* 008539ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008539f0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8539f5u); f_00859dd6();
    /* 008539f5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008539fb: jmp 0x853a2c */ goto L_00853a2c;
L_008539fd:; BB(0x008539fd);
    /* 008539fd: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853a00: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853a03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00853a05: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00853a09: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853a0b: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853a0f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853a12: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853a14: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853a18: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853a1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853a1d: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853a23u); call_ind(t); }
    /* 00853a23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853a26: je 0x856a80 */ if (fZ) goto L_00856a80;
L_00853a2c:; BB(0x00853a2c);
    /* 00853a2c: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00853a30: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853a33: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853a35: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085398f); r_esp += 4; return;
L_00856a80:; BB(0x00856a80);
    /* 00856a80: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a85u); f_00859dd6();
    /* 00856a85: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856a8b: jmp 0x853a2c */ goto L_00853a2c;
}

void f_00853a3a(void)
{
    FN_ENTER(0x00853a3a);
    /* 00853a3a: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00853a42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853a44: mov dword ptr [esp + 0x64], 0xb48638 */ W32((u32)(r_esp+0x64u), 0xb48638u);
    /* 00853a4c: jne 0x853aa2 */ if (!fZ) goto L_00853aa2;
L_00853a4e:; BB(0x00853a4e);
    /* 00853a4e: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00853a53: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853a56: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00853a59: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853a5b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853a5d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00853a61: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00853a64: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853a66: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853a6a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853a6d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853a6f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853a73: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853a78: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853a7eu); call_ind(t); }
    /* 00853a7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853a7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853a81: jne 0x853adb */ if (!fZ) goto L_00853adb;
L_00853a83:; BB(0x00853a83);
    /* 00853a83: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853a88: push 0xb48678 */ { u32 v = 0xb48678u; r_esp -= 4; W32(r_esp, v); }
    /* 00853a8d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853a92u); f_0085b5fd();
    /* 00853a92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853a95: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853a9au); f_00859dd6();
    /* 00853a9a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853aa0: jmp 0x853adb */ goto L_00853adb;
L_00853aa2:; BB(0x00853aa2);
    /* 00853aa2: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00853aa7: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853aaa: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00853aad: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853aaf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853ab1: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00853ab5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00853ab8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853aba: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853abe: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853ac1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853ac3: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853ac7: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853acb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853acc: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853ad2u); call_ind(t); }
    /* 00853ad2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853ad3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853ad5: je 0x856a90 */ if (fZ) goto L_00856a90;
L_00853adb:; BB(0x00853adb);
    /* 00853adb: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00853adf: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853ae2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853ae4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853a3a); r_esp += 4; return;
L_00856a90:; BB(0x00856a90);
    /* 00856a90: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856a95u); f_00859dd6();
    /* 00856a95: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856a9b: jmp 0x853adb */ goto L_00853adb;
}

void f_00853ae9(void)
{
    FN_ENTER(0x00853ae9);
    /* 00853ae9: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00853af1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853af3: mov dword ptr [esp + 0x64], 0xb48638 */ W32((u32)(r_esp+0x64u), 0xb48638u);
    /* 00853afb: jne 0x853b51 */ if (!fZ) goto L_00853b51;
L_00853afd:; BB(0x00853afd);
    /* 00853afd: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00853b02: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853b05: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00853b08: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853b0a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853b0c: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00853b10: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00853b13: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853b15: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853b19: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853b1c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853b1e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853b22: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853b27: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853b2du); call_ind(t); }
    /* 00853b2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853b2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853b30: jne 0x853b8a */ if (!fZ) goto L_00853b8a;
L_00853b32:; BB(0x00853b32);
    /* 00853b32: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853b37: push 0xb48678 */ { u32 v = 0xb48678u; r_esp -= 4; W32(r_esp, v); }
    /* 00853b3c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853b41u); f_0085b5fd();
    /* 00853b41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853b44: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853b49u); f_00859dd6();
    /* 00853b49: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853b4f: jmp 0x853b8a */ goto L_00853b8a;
L_00853b51:; BB(0x00853b51);
    /* 00853b51: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00853b56: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853b59: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00853b5c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853b5e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853b60: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00853b64: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00853b67: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853b69: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853b6d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853b70: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853b72: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853b76: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853b7b: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853b81u); call_ind(t); }
    /* 00853b81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853b84: je 0x856aa0 */ if (fZ) goto L_00856aa0;
L_00853b8a:; BB(0x00853b8a);
    /* 00853b8a: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00853b8e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853b91: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853b93: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853ae9); r_esp += 4; return;
L_00856aa0:; BB(0x00856aa0);
    /* 00856aa0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856aa5u); f_00859dd6();
    /* 00856aa5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856aab: jmp 0x853b8a */ goto L_00853b8a;
}

void f_00853b98(void)
{
    FN_ENTER(0x00853b98);
    /* 00853b98: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00853b9e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853ba1: mov dword ptr [esp + 0x40], 5 */ W32((u32)(r_esp+0x40u), 0x5u);
    /* 00853ba9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853bab: mov dword ptr [esp + 0x44], 0xb48620 */ W32((u32)(r_esp+0x44u), 0xb48620u);
    /* 00853bb3: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 00853bb5: jne 0x853c01 */ if (!fZ) goto L_00853c01;
L_00853bb7:; BB(0x00853bb7);
    /* 00853bb7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853bba: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853bbd: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00853bc0: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853bc2: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853bc6: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853bca: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853bcc: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853bd0: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853bd2: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853bd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853bd7: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853bddu); call_ind(t); }
    /* 00853bdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853be0: jne 0x853c30 */ if (!fZ) goto L_00853c30;
L_00853be2:; BB(0x00853be2);
    /* 00853be2: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853be7: push 0xb48624 */ { u32 v = 0xb48624u; r_esp -= 4; W32(r_esp, v); }
    /* 00853bec: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853bf1u); f_0085b5fd();
    /* 00853bf1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853bf4: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853bf9u); f_00859dd6();
    /* 00853bf9: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00853bff: jmp 0x853c30 */ goto L_00853c30;
L_00853c01:; BB(0x00853c01);
    /* 00853c01: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853c04: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853c07: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00853c0a: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853c0c: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853c10: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853c14: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853c16: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853c1a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853c1c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853c21: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853c27u); call_ind(t); }
    /* 00853c27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853c28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853c2a: je 0x856ab0 */ if (fZ) goto L_00856ab0;
L_00853c30:; BB(0x00853c30);
    /* 00853c30: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00853c34: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853c37: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853c39: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853b98); r_esp += 4; return;
L_00856ab0:; BB(0x00856ab0);
    /* 00856ab0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ab5u); f_00859dd6();
    /* 00856ab5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856abb: jmp 0x853c30 */ goto L_00853c30;
}

void f_00853c3e(void)
{
    FN_ENTER(0x00853c3e);
    /* 00853c3e: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00853c46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853c48: mov dword ptr [esp + 0x44], 0xb48620 */ W32((u32)(r_esp+0x44u), 0xb48620u);
    /* 00853c50: jne 0x853ca7 */ if (!fZ) goto L_00853ca7;
L_00853c52:; BB(0x00853c52);
    /* 00853c52: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00853c58: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853c5b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853c5e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853c61: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853c63: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853c66: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853c68: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853c6c: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853c6e: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853c72: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853c74: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853c78: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853c7d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853c83u); call_ind(t); }
    /* 00853c83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853c84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853c86: jne 0x853ce1 */ if (!fZ) goto L_00853ce1;
L_00853c88:; BB(0x00853c88);
    /* 00853c88: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853c8d: push 0xb48664 */ { u32 v = 0xb48664u; r_esp -= 4; W32(r_esp, v); }
    /* 00853c92: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853c97u); f_0085b5fd();
    /* 00853c97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853c9a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853c9fu); f_00859dd6();
    /* 00853c9f: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853ca5: jmp 0x853ce1 */ goto L_00853ce1;
L_00853ca7:; BB(0x00853ca7);
    /* 00853ca7: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00853cad: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853cb0: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853cb3: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853cb6: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853cb8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853cbb: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853cbd: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853cc1: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853cc3: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853cc7: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853cc9: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853ccd: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853cd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853cd2: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853cd8u); call_ind(t); }
    /* 00853cd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853cd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853cdb: je 0x856ac0 */ if (fZ) goto L_00856ac0;
L_00853ce1:; BB(0x00853ce1);
    /* 00853ce1: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00853ce5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853ce8: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853cea: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853c3e); r_esp += 4; return;
L_00856ac0:; BB(0x00856ac0);
    /* 00856ac0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ac5u); f_00859dd6();
    /* 00856ac5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856acb: jmp 0x853ce1 */ goto L_00853ce1;
}

void f_00853cef(void)
{
    FN_ENTER(0x00853cef);
    /* 00853cef: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00853cf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853cf9: mov dword ptr [esp + 0x44], 0xb48620 */ W32((u32)(r_esp+0x44u), 0xb48620u);
    /* 00853d01: jne 0x853d58 */ if (!fZ) goto L_00853d58;
L_00853d03:; BB(0x00853d03);
    /* 00853d03: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00853d09: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853d0c: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853d0f: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853d12: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853d14: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853d17: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853d19: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853d1d: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853d1f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853d23: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853d25: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853d29: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853d2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853d2e: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853d34u); call_ind(t); }
    /* 00853d34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853d35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853d37: jne 0x853d92 */ if (!fZ) goto L_00853d92;
L_00853d39:; BB(0x00853d39);
    /* 00853d39: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853d3e: push 0xb48664 */ { u32 v = 0xb48664u; r_esp -= 4; W32(r_esp, v); }
    /* 00853d43: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853d48u); f_0085b5fd();
    /* 00853d48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853d4b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853d50u); f_00859dd6();
    /* 00853d50: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853d56: jmp 0x853d92 */ goto L_00853d92;
L_00853d58:; BB(0x00853d58);
    /* 00853d58: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00853d5e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853d61: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853d64: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853d67: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853d69: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853d6c: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00853d6e: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00853d72: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00853d74: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00853d78: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00853d7a: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00853d7e: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00853d82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853d83: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x853d89u); call_ind(t); }
    /* 00853d89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853d8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853d8c: je 0x856ad0 */ if (fZ) goto L_00856ad0;
L_00853d92:; BB(0x00853d92);
    /* 00853d92: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00853d96: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853d99: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00853d9b: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853cef); r_esp += 4; return;
L_00856ad0:; BB(0x00856ad0);
    /* 00856ad0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ad5u); f_00859dd6();
    /* 00856ad5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856adb: jmp 0x853d92 */ goto L_00853d92;
}

void f_00853da0(void)
{
    FN_ENTER(0x00853da0);
    /* 00853da0: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00853da6: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853da9: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 00853db0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853db2: mov dword ptr [esp + 4], 0xb48608 */ W32((u32)(r_esp+0x4u), 0xb48608u);
    /* 00853dba: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 00853dbc: jne 0x853e07 */ if (!fZ) goto L_00853e07;
L_00853dbe:; BB(0x00853dbe);
    /* 00853dbe: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853dc1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853dc4: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00853dc7: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853dc9: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853dcd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853dd0: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853dd2: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853dd6: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853dd8: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853ddd: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853de3u); call_ind(t); }
    /* 00853de3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853de6: jne 0x853e35 */ if (!fZ) goto L_00853e35;
L_00853de8:; BB(0x00853de8);
    /* 00853de8: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853ded: push 0xb4860c */ { u32 v = 0xb4860cu; r_esp -= 4; W32(r_esp, v); }
    /* 00853df2: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853df7u); f_0085b5fd();
    /* 00853df7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853dfa: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853dffu); f_00859dd6();
    /* 00853dff: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00853e05: jmp 0x853e35 */ goto L_00853e35;
L_00853e07:; BB(0x00853e07);
    /* 00853e07: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853e0a: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00853e0d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00853e10: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853e12: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853e16: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853e19: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853e1b: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853e1f: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853e21: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853e25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853e26: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853e2cu); call_ind(t); }
    /* 00853e2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853e2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853e2f: je 0x856ae0 */ if (fZ) goto L_00856ae0;
L_00853e35:; BB(0x00853e35);
    /* 00853e35: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00853e39: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853e3c: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853e3e: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853da0); r_esp += 4; return;
L_00856ae0:; BB(0x00856ae0);
    /* 00856ae0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ae5u); f_00859dd6();
    /* 00856ae5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856aeb: jmp 0x853e35 */ goto L_00853e35;
}

void f_00853e43(void)
{
    FN_ENTER(0x00853e43);
    /* 00853e43: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00853e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853e4c: mov dword ptr [esp + 4], 0xb48608 */ W32((u32)(r_esp+0x4u), 0xb48608u);
    /* 00853e54: jne 0x853eaa */ if (!fZ) goto L_00853eaa;
L_00853e56:; BB(0x00853e56);
    /* 00853e56: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00853e5c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853e5f: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853e62: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853e65: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853e67: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853e6a: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853e6c: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853e70: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853e72: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853e76: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853e78: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853e7c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853e80: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853e86u); call_ind(t); }
    /* 00853e86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853e87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853e89: jne 0x853ee3 */ if (!fZ) goto L_00853ee3;
L_00853e8b:; BB(0x00853e8b);
    /* 00853e8b: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853e90: push 0xb48650 */ { u32 v = 0xb48650u; r_esp -= 4; W32(r_esp, v); }
    /* 00853e95: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853e9au); f_0085b5fd();
    /* 00853e9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853e9d: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853ea2u); f_00859dd6();
    /* 00853ea2: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853ea8: jmp 0x853ee3 */ goto L_00853ee3;
L_00853eaa:; BB(0x00853eaa);
    /* 00853eaa: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00853eb0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853eb3: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853eb6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853eb9: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853ebb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853ebe: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853ec0: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853ec4: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853ec6: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853eca: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853ecc: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853ed0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853ed4: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853edau); call_ind(t); }
    /* 00853eda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853edb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853edd: je 0x856af0 */ if (fZ) goto L_00856af0;
L_00853ee3:; BB(0x00853ee3);
    /* 00853ee3: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00853ee7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853eea: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853eec: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853e43); r_esp += 4; return;
L_00856af0:; BB(0x00856af0);
    /* 00856af0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856af5u); f_00859dd6();
    /* 00856af5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856afb: jmp 0x853ee3 */ goto L_00853ee3;
}

void f_00853ef1(void)
{
    FN_ENTER(0x00853ef1);
    /* 00853ef1: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00853ef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853efa: mov dword ptr [esp + 4], 0xb48608 */ W32((u32)(r_esp+0x4u), 0xb48608u);
    /* 00853f02: jne 0x853f58 */ if (!fZ) goto L_00853f58;
L_00853f04:; BB(0x00853f04);
    /* 00853f04: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00853f0a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853f0d: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853f10: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853f13: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853f15: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853f18: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853f1a: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853f1e: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853f20: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853f24: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853f26: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853f2a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853f2e: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853f34u); call_ind(t); }
    /* 00853f34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853f35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853f37: jne 0x853f91 */ if (!fZ) goto L_00853f91;
L_00853f39:; BB(0x00853f39);
    /* 00853f39: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853f3e: push 0xb48650 */ { u32 v = 0xb48650u; r_esp -= 4; W32(r_esp, v); }
    /* 00853f43: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853f48u); f_0085b5fd();
    /* 00853f48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00853f4b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x853f50u); f_00859dd6();
    /* 00853f50: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00853f56: jmp 0x853f91 */ goto L_00853f91;
L_00853f58:; BB(0x00853f58);
    /* 00853f58: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00853f5e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853f61: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00853f64: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853f67: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853f69: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853f6c: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00853f6e: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00853f72: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00853f74: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00853f78: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00853f7a: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00853f7e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00853f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853f82: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x853f88u); call_ind(t); }
    /* 00853f88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853f89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853f8b: je 0x856b00 */ if (fZ) goto L_00856b00;
L_00853f91:; BB(0x00853f91);
    /* 00853f91: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00853f95: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853f98: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00853f9a: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853ef1); r_esp += 4; return;
L_00856b00:; BB(0x00856b00);
    /* 00856b00: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b05u); f_00859dd6();
    /* 00856b05: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856b0b: jmp 0x853f91 */ goto L_00853f91;
}

void f_00853f9f(void)
{
    FN_ENTER(0x00853f9f);
    /* 00853f9f: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00853fa4: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00853fa7: mov dword ptr [esp + 0x60], 5 */ W32((u32)(r_esp+0x60u), 0x5u);
    /* 00853faf: mov dword ptr [esp + 0x64], 0xb485b4 */ W32((u32)(r_esp+0x64u), 0xb485b4u);
    /* 00853fb7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00853fb9: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 00853fbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00853fc1: jne 0x85400d */ if (!fZ) goto L_0085400d;
L_00853fc3:; BB(0x00853fc3);
    /* 00853fc3: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853fc6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00853fc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00853fcb: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00853fcf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853fd1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853fd5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00853fd8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00853fda: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853fde: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853fe3: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x853fe9u); call_ind(t); }
    /* 00853fe9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00853fea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00853fec: jne 0x85403c */ if (!fZ) goto L_0085403c;
L_00853fee:; BB(0x00853fee);
    /* 00853fee: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00853ff3: push 0xb485b8 */ { u32 v = 0xb485b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00853ff8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x853ffdu); f_0085b5fd();
    /* 00853ffd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00854000: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x854005u); f_00859dd6();
    /* 00854005: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085400b: jmp 0x85403c */ goto L_0085403c;
L_0085400d:; BB(0x0085400d);
    /* 0085400d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00854010: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00854013: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00854015: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00854019: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085401b: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085401f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00854022: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00854024: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00854028: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085402c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085402d: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x854033u); call_ind(t); }
    /* 00854033: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00854034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00854036: je 0x856b10 */ if (fZ) goto L_00856b10;
L_0085403c:; BB(0x0085403c);
    /* 0085403c: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00854040: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00854043: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00854045: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00853f9f); r_esp += 4; return;
L_00856b10:; BB(0x00856b10);
    /* 00856b10: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856b15u); f_00859dd6();
    /* 00856b15: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856b1b: jmp 0x85403c */ goto L_0085403c;
}

