#include "protos.h"

void f_00856048(void)
{
    FN_ENTER(0x00856048);
    /* 00856048: mov dword ptr [esp + 0x40], 2 */ W32((u32)(r_esp+0x40u), 0x2u);
    /* 00856050: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00856052: mov dword ptr [esp + 0x44], 0xb47df0 */ W32((u32)(r_esp+0x44u), 0xb47df0u);
    /* 0085605a: jne 0x8560b1 */ if (!fZ) goto L_008560b1;
L_0085605c:; BB(0x0085605c);
    /* 0085605c: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00856062: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856065: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856068: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085606b: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085606d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856070: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00856072: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00856076: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00856078: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085607c: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085607e: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00856082: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00856086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856087: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85608du); call_ind(t); }
    /* 0085608d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085608e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00856090: jne 0x8560eb */ if (!fZ) goto L_008560eb;
L_00856092:; BB(0x00856092);
    /* 00856092: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00856097: push 0xb47df8 */ { u32 v = 0xb47df8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085609c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8560a1u); f_0085b5fd();
    /* 008560a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008560a4: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8560a9u); f_00859dd6();
    /* 008560a9: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008560af: jmp 0x8560eb */ goto L_008560eb;
L_008560b1:; BB(0x008560b1);
    /* 008560b1: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008560b7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008560ba: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008560bd: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008560c0: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008560c2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008560c5: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008560c7: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008560cb: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008560cd: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008560d1: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008560d3: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008560d7: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008560db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008560dc: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8560e2u); call_ind(t); }
    /* 008560e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008560e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008560e5: je 0x856e70 */ if (fZ) goto L_00856e70;
L_008560eb:; BB(0x008560eb);
    /* 008560eb: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008560ef: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008560f2: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008560f4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00856048); r_esp += 4; return;
L_00856e70:; BB(0x00856e70);
    /* 00856e70: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e75u); f_00859dd6();
    /* 00856e75: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856e7b: jmp 0x8560eb */ goto L_008560eb;
}

void f_008560f9(void)
{
    FN_ENTER(0x008560f9);
    /* 008560f9: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00856100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00856102: mov dword ptr [esp + 4], 0xb47dd0 */ W32((u32)(r_esp+0x4u), 0xb47dd0u);
    /* 0085610a: jne 0x856160 */ if (!fZ) goto L_00856160;
L_0085610c:; BB(0x0085610c);
    /* 0085610c: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00856112: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856115: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856118: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085611b: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085611d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856120: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00856122: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00856126: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00856128: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085612c: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085612e: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00856132: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00856135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856136: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85613cu); call_ind(t); }
    /* 0085613c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085613d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085613f: jne 0x856199 */ if (!fZ) goto L_00856199;
L_00856141:; BB(0x00856141);
    /* 00856141: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00856146: push 0xb47e2c */ { u32 v = 0xb47e2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085614b: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x856150u); f_0085b5fd();
    /* 00856150: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00856153: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856158u); f_00859dd6();
    /* 00856158: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085615e: jmp 0x856199 */ goto L_00856199;
L_00856160:; BB(0x00856160);
    /* 00856160: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00856166: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856169: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085616c: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085616f: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00856171: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856174: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00856176: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085617a: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085617c: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00856180: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00856182: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00856186: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00856189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085618a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x856190u); call_ind(t); }
    /* 00856190: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00856191: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00856193: je 0x856e80 */ if (fZ) goto L_00856e80;
L_00856199:; BB(0x00856199);
    /* 00856199: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 0085619d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008561a0: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008561a2: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008560f9); r_esp += 4; return;
L_00856e80:; BB(0x00856e80);
    /* 00856e80: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e85u); f_00859dd6();
    /* 00856e85: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856e8b: jmp 0x856199 */ goto L_00856199;
}

void f_008561a7(void)
{
    FN_ENTER(0x008561a7);
    /* 008561a7: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 008561ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008561b0: mov dword ptr [esp + 4], 0xb47dd0 */ W32((u32)(r_esp+0x4u), 0xb47dd0u);
    /* 008561b8: jne 0x85620e */ if (!fZ) goto L_0085620e;
L_008561ba:; BB(0x008561ba);
    /* 008561ba: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008561c0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008561c3: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008561c6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008561c9: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008561cb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008561ce: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008561d0: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008561d4: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008561d6: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008561da: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008561dc: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008561e0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008561e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008561e4: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8561eau); call_ind(t); }
    /* 008561ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008561eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008561ed: jne 0x856247 */ if (!fZ) goto L_00856247;
L_008561ef:; BB(0x008561ef);
    /* 008561ef: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008561f4: push 0xb47dd8 */ { u32 v = 0xb47dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 008561f9: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8561feu); f_0085b5fd();
    /* 008561fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00856201: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856206u); f_00859dd6();
    /* 00856206: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085620c: jmp 0x856247 */ goto L_00856247;
L_0085620e:; BB(0x0085620e);
    /* 0085620e: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00856214: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856217: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085621a: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085621d: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085621f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856222: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00856224: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00856228: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085622a: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085622e: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00856230: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00856234: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00856237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856238: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85623eu); call_ind(t); }
    /* 0085623e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085623f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00856241: je 0x856e90 */ if (fZ) goto L_00856e90;
L_00856247:; BB(0x00856247);
    /* 00856247: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 0085624b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085624e: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00856250: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008561a7); r_esp += 4; return;
L_00856e90:; BB(0x00856e90);
    /* 00856e90: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e95u); f_00859dd6();
    /* 00856e95: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856e9b: jmp 0x856247 */ goto L_00856247;
}

void f_00856255(void)
{
    FN_ENTER(0x00856255);
    /* 00856255: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 0085625d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085625f: mov dword ptr [esp + 0x64], 0xb47ccc */ W32((u32)(r_esp+0x64u), 0xb47cccu);
    /* 00856267: jne 0x8562bd */ if (!fZ) goto L_008562bd;
L_00856269:; BB(0x00856269);
    /* 00856269: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 0085626e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00856271: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00856274: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00856276: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00856278: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0085627c: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0085627f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00856281: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00856285: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856288: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085628a: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0085628e: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00856292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856293: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x856299u); call_ind(t); }
    /* 00856299: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085629a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085629c: jne 0x8562f6 */ if (!fZ) goto L_008562f6;
L_0085629e:; BB(0x0085629e);
    /* 0085629e: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008562a3: push 0xb47d14 */ { u32 v = 0xb47d14u; r_esp -= 4; W32(r_esp, v); }
    /* 008562a8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8562adu); f_0085b5fd();
    /* 008562ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008562b0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8562b5u); f_00859dd6();
    /* 008562b5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008562bb: jmp 0x8562f6 */ goto L_008562f6;
L_008562bd:; BB(0x008562bd);
    /* 008562bd: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 008562c2: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008562c5: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008562c8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008562ca: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008562cc: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008562d0: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008562d3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008562d5: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008562d9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008562dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008562de: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008562e2: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008562e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008562e7: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8562edu); call_ind(t); }
    /* 008562ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008562ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008562f0: je 0x856ea0 */ if (fZ) goto L_00856ea0;
L_008562f6:; BB(0x008562f6);
    /* 008562f6: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008562fa: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008562fd: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008562ff: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00856255); r_esp += 4; return;
L_00856ea0:; BB(0x00856ea0);
    /* 00856ea0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ea5u); f_00859dd6();
    /* 00856ea5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856eab: jmp 0x8562f6 */ goto L_008562f6;
}

void f_00856304(void)
{
    FN_ENTER(0x00856304);
    /* 00856304: mov dword ptr [esp + 0x60], 2 */ W32((u32)(r_esp+0x60u), 0x2u);
    /* 0085630c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085630e: mov dword ptr [esp + 0x64], 0xb47ccc */ W32((u32)(r_esp+0x64u), 0xb47cccu);
    /* 00856316: jne 0x85636c */ if (!fZ) goto L_0085636c;
L_00856318:; BB(0x00856318);
    /* 00856318: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 0085631d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00856320: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00856323: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00856325: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00856327: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0085632b: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0085632e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00856330: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00856334: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856337: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00856339: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0085633d: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00856341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856342: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x856348u); call_ind(t); }
    /* 00856348: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00856349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085634b: jne 0x8563a5 */ if (!fZ) goto L_008563a5;
L_0085634d:; BB(0x0085634d);
    /* 0085634d: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00856352: push 0xb47cd4 */ { u32 v = 0xb47cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00856357: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85635cu); f_0085b5fd();
    /* 0085635c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085635f: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856364u); f_00859dd6();
    /* 00856364: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085636a: jmp 0x8563a5 */ goto L_008563a5;
L_0085636c:; BB(0x0085636c);
    /* 0085636c: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00856371: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00856374: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00856377: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00856379: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085637b: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0085637f: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00856382: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00856384: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00856388: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085638b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085638d: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00856391: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00856395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856396: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85639cu); call_ind(t); }
    /* 0085639c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085639d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085639f: je 0x856eb0 */ if (fZ) goto L_00856eb0;
L_008563a5:; BB(0x008563a5);
    /* 008563a5: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008563a9: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008563ac: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008563ae: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00856304); r_esp += 4; return;
L_00856eb0:; BB(0x00856eb0);
    /* 00856eb0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856eb5u); f_00859dd6();
    /* 00856eb5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856ebb: jmp 0x8563a5 */ goto L_008563a5;
}

void f_008563b3(void)
{
    FN_ENTER(0x008563b3);
    /* 008563b3: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 008563bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008563bd: mov dword ptr [esp + 0x44], 0xb47cb4 */ W32((u32)(r_esp+0x44u), 0xb47cb4u);
    /* 008563c5: jne 0x85641c */ if (!fZ) goto L_0085641c;
L_008563c7:; BB(0x008563c7);
    /* 008563c7: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008563cd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008563d0: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008563d3: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008563d6: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008563d8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008563db: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008563dd: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008563e1: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008563e3: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008563e7: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008563e9: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008563ed: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008563f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008563f2: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8563f8u); call_ind(t); }
    /* 008563f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008563f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008563fb: jne 0x856456 */ if (!fZ) goto L_00856456;
L_008563fd:; BB(0x008563fd);
    /* 008563fd: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00856402: push 0xb47d00 */ { u32 v = 0xb47d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00856407: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85640cu); f_0085b5fd();
    /* 0085640c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085640f: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856414u); f_00859dd6();
    /* 00856414: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085641a: jmp 0x856456 */ goto L_00856456;
L_0085641c:; BB(0x0085641c);
    /* 0085641c: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00856422: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856425: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856428: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085642b: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085642d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856430: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00856432: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00856436: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00856438: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085643c: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085643e: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00856442: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00856446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856447: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85644du); call_ind(t); }
    /* 0085644d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085644e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00856450: je 0x856ec0 */ if (fZ) goto L_00856ec0;
L_00856456:; BB(0x00856456);
    /* 00856456: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085645a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085645d: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085645f: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008563b3); r_esp += 4; return;
L_00856ec0:; BB(0x00856ec0);
    /* 00856ec0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ec5u); f_00859dd6();
    /* 00856ec5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856ecb: jmp 0x856456 */ goto L_00856456;
}

void f_00856464(void)
{
    FN_ENTER(0x00856464);
    /* 00856464: mov dword ptr [esp + 0x40], 2 */ W32((u32)(r_esp+0x40u), 0x2u);
    /* 0085646c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085646e: mov dword ptr [esp + 0x44], 0xb47cb4 */ W32((u32)(r_esp+0x44u), 0xb47cb4u);
    /* 00856476: jne 0x8564cd */ if (!fZ) goto L_008564cd;
L_00856478:; BB(0x00856478);
    /* 00856478: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 0085647e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856481: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856484: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00856487: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00856489: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085648c: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085648e: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00856492: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00856494: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00856498: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085649a: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085649e: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008564a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008564a3: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8564a9u); call_ind(t); }
    /* 008564a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008564aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008564ac: jne 0x856507 */ if (!fZ) goto L_00856507;
L_008564ae:; BB(0x008564ae);
    /* 008564ae: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008564b3: push 0xb47cb8 */ { u32 v = 0xb47cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 008564b8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8564bdu); f_0085b5fd();
    /* 008564bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008564c0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8564c5u); f_00859dd6();
    /* 008564c5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008564cb: jmp 0x856507 */ goto L_00856507;
L_008564cd:; BB(0x008564cd);
    /* 008564cd: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 008564d3: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008564d6: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008564d9: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008564dc: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008564de: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008564e1: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008564e3: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008564e7: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008564e9: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008564ed: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008564ef: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008564f3: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008564f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008564f8: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8564feu); call_ind(t); }
    /* 008564fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008564ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00856501: je 0x856ed0 */ if (fZ) goto L_00856ed0;
L_00856507:; BB(0x00856507);
    /* 00856507: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085650b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085650e: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00856510: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00856464); r_esp += 4; return;
L_00856ed0:; BB(0x00856ed0);
    /* 00856ed0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ed5u); f_00859dd6();
    /* 00856ed5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856edb: jmp 0x856507 */ goto L_00856507;
}

void f_00856515(void)
{
    FN_ENTER(0x00856515);
    /* 00856515: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0085651c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085651e: mov dword ptr [esp + 4], 0xb47c98 */ W32((u32)(r_esp+0x4u), 0xb47c98u);
    /* 00856526: jne 0x85657c */ if (!fZ) goto L_0085657c;
L_00856528:; BB(0x00856528);
    /* 00856528: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 0085652e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856531: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856534: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00856537: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00856539: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085653c: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085653e: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00856542: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00856544: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00856548: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085654a: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085654e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00856551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856552: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x856558u); call_ind(t); }
    /* 00856558: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00856559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085655b: jne 0x8565b5 */ if (!fZ) goto L_008565b5;
L_0085655d:; BB(0x0085655d);
    /* 0085655d: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00856562: push 0xb47ce8 */ { u32 v = 0xb47ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 00856567: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85656cu); f_0085b5fd();
    /* 0085656c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085656f: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856574u); f_00859dd6();
    /* 00856574: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085657a: jmp 0x8565b5 */ goto L_008565b5;
L_0085657c:; BB(0x0085657c);
    /* 0085657c: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00856582: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856585: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856588: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085658b: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085658d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856590: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00856592: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00856596: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00856598: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085659c: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085659e: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008565a2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008565a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008565a6: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8565acu); call_ind(t); }
    /* 008565ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008565ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008565af: je 0x856ee0 */ if (fZ) goto L_00856ee0;
L_008565b5:; BB(0x008565b5);
    /* 008565b5: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008565b9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008565bc: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008565be: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00856515); r_esp += 4; return;
L_00856ee0:; BB(0x00856ee0);
    /* 00856ee0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ee5u); f_00859dd6();
    /* 00856ee5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856eeb: jmp 0x8565b5 */ goto L_008565b5;
}

void f_008565c3(void)
{
    FN_ENTER(0x008565c3);
    /* 008565c3: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 008565ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008565cc: mov dword ptr [esp + 4], 0xb47c98 */ W32((u32)(r_esp+0x4u), 0xb47c98u);
    /* 008565d4: jne 0x85662a */ if (!fZ) goto L_0085662a;
L_008565d6:; BB(0x008565d6);
    /* 008565d6: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008565dc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008565df: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008565e2: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008565e5: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008565e7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008565ea: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008565ec: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008565f0: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008565f2: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008565f6: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008565f8: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008565fc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008565ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856600: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x856606u); call_ind(t); }
    /* 00856606: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00856607: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00856609: jne 0x856663 */ if (!fZ) goto L_00856663;
L_0085660b:; BB(0x0085660b);
    /* 0085660b: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00856610: push 0xb47ca0 */ { u32 v = 0xb47ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 00856615: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85661au); f_0085b5fd();
    /* 0085661a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085661d: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856622u); f_00859dd6();
    /* 00856622: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856628: jmp 0x856663 */ goto L_00856663;
L_0085662a:; BB(0x0085662a);
    /* 0085662a: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00856630: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856633: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856636: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00856639: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085663b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085663e: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00856640: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00856644: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00856646: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085664a: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085664c: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00856650: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00856653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00856654: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85665au); call_ind(t); }
    /* 0085665a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085665b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085665d: je 0x856ef0 */ if (fZ) goto L_00856ef0;
L_00856663:; BB(0x00856663);
    /* 00856663: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00856667: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085666a: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008565c3); r_esp += 4; return;
L_00856ef0:; BB(0x00856ef0);
    /* 00856ef0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ef5u); f_00859dd6();
    /* 00856ef5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856efb: jmp 0x856663 */ goto L_00856663;
}

void f_0085666c(void)
{
    FN_ENTER(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085666c); r_esp += 4; return;
}

void f_00856f15(void)
{
    FN_ENTER(0x00856f15);
    /* 00856f15: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f1au); f_00859dd6();
    /* 00856f1a: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856f20: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f15); r_esp += 4; return;
}

void f_00856f25(void)
{
    FN_ENTER(0x00856f25);
    /* 00856f25: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f2au); f_00859dd6();
    /* 00856f2a: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856f30: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f25); r_esp += 4; return;
}

void f_00856f35(void)
{
    FN_ENTER(0x00856f35);
    /* 00856f35: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f3au); f_00859dd6();
    /* 00856f3a: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856f40: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f35); r_esp += 4; return;
}

void f_00856f45(void)
{
    FN_ENTER(0x00856f45);
    /* 00856f45: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f4au); f_00859dd6();
    /* 00856f4a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856f50: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f45); r_esp += 4; return;
}

void f_00856f55(void)
{
    FN_ENTER(0x00856f55);
    /* 00856f55: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f5au); f_00859dd6();
    /* 00856f5a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856f60: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f55); r_esp += 4; return;
}

void f_00856f65(void)
{
    FN_ENTER(0x00856f65);
    /* 00856f65: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f6au); f_00859dd6();
    /* 00856f6a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856f70: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f65); r_esp += 4; return;
}

void f_00856f75(void)
{
    FN_ENTER(0x00856f75);
    /* 00856f75: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f7au); f_00859dd6();
    /* 00856f7a: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856f80: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f75); r_esp += 4; return;
}

void f_00856f85(void)
{
    FN_ENTER(0x00856f85);
    /* 00856f85: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f8au); f_00859dd6();
    /* 00856f8a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856f90: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f85); r_esp += 4; return;
}

void f_00856f95(void)
{
    FN_ENTER(0x00856f95);
    /* 00856f95: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856f9au); f_00859dd6();
    /* 00856f9a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856fa0: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856f95); r_esp += 4; return;
}

void f_00856fa5(void)
{
    FN_ENTER(0x00856fa5);
    /* 00856fa5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856faau); f_00859dd6();
    /* 00856faa: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856fb0: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856fa5); r_esp += 4; return;
}

void f_00856fb5(void)
{
    FN_ENTER(0x00856fb5);
    /* 00856fb5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856fbau); f_00859dd6();
    /* 00856fba: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856fc0: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856fb5); r_esp += 4; return;
}

void f_00856fc5(void)
{
    FN_ENTER(0x00856fc5);
    /* 00856fc5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856fcau); f_00859dd6();
    /* 00856fca: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856fd0: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856fc5); r_esp += 4; return;
}

void f_00856fd5(void)
{
    FN_ENTER(0x00856fd5);
    /* 00856fd5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856fdau); f_00859dd6();
    /* 00856fda: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856fe0: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856fd5); r_esp += 4; return;
}

void f_00856fe5(void)
{
    FN_ENTER(0x00856fe5);
    /* 00856fe5: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00856fe8: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00856feb: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00856fed: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00856fef: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00856ff3: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 00856ff9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00856ffb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00856ffc: jbe 0x85700a */ if ((fC||fZ)) goto L_0085700a;
L_00856ffe:; BB(0x00856ffe);
    /* 00856ffe: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00857003: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857006: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00857008: jmp 0x857014 */ goto L_00857014;
L_0085700a:; BB(0x0085700a);
    /* 0085700a: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 0085700f: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00857012: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00857014:; BB(0x00857014);
    /* 00857014: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857019u); f_00859dd6();
    /* 00857019: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085701f: jmp 0x857837 */ goto L_00857837;
L_00857837:; BB(0x00857837);
    /* 00857837: mov esp, ebx */ r_esp = r_ebx;
    /* 00857839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085783a: ret  */ FN_RET(0x00856fe5); r_esp += 4; return;
}

