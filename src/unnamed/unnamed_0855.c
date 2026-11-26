#include "protos.h"

void f_00855067(void)
{
    FN_ENTER(0x00855067);
    /* 00855067: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 0085506e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855070: mov dword ptr [esp + 4], 0xb4813c */ W32((u32)(r_esp+0x4u), 0xb4813cu);
    /* 00855078: jne 0x855087 */ if (!fZ) goto L_00855087;
L_0085507a:; BB(0x0085507a);
    /* 0085507a: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00855080: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855083: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855085: jmp 0x855092 */ goto L_00855092;
L_00855087:; BB(0x00855087);
    /* 00855087: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 0085508d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855090: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00855092:; BB(0x00855092);
    /* 00855092: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855095: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00855098: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085509b: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085509d: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008550a1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008550a4: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008550a6: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008550aa: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008550ac: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008550b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008550b1: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8550b7u); call_ind(t); }
    /* 008550b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008550b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008550ba: je 0x856ce0 */ if (fZ) goto L_00856ce0;
L_008550c0:; BB(0x008550c0);
    /* 008550c0: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008550c4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008550c7: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008550c9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855067); r_esp += 4; return;
L_00856ce0:; BB(0x00856ce0);
    /* 00856ce0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856ce5u); f_00859dd6();
    /* 00856ce5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856ceb: jmp 0x8550c0 */ goto L_008550c0;
}

void f_008550ce(void)
{
    FN_ENTER(0x008550ce);
    /* 008550ce: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8550d3u); f_00859dd6();
    /* 008550d3: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008550d9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008550ce); r_esp += 4; return;
}

void f_008550de(void)
{
    FN_ENTER(0x008550de);
    /* 008550de: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8550e3u); f_00859dd6();
    /* 008550e3: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008550e9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008550de); r_esp += 4; return;
}

void f_008550ee(void)
{
    FN_ENTER(0x008550ee);
    /* 008550ee: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8550f3u); f_00859dd6();
    /* 008550f3: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008550f9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008550ee); r_esp += 4; return;
}

void f_008550fe(void)
{
    FN_ENTER(0x008550fe);
    /* 008550fe: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855103u); f_00859dd6();
    /* 00855103: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00855109: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008550fe); r_esp += 4; return;
}

void f_0085510e(void)
{
    FN_ENTER(0x0085510e);
    /* 0085510e: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00855113: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855116: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855119: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00855121: mov dword ptr [esp + 0x64], 0xb480a4 */ W32((u32)(r_esp+0x64u), 0xb480a4u);
    /* 00855129: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085512b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085512d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00855131: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855134: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855136: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085513a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085513d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085513f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855143: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855148: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85514eu); call_ind(t); }
    /* 0085514e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085514f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855151: jne 0x85516e */ if (!fZ) goto L_0085516e;
L_00855153:; BB(0x00855153);
    /* 00855153: mov eax, dword ptr [0xa237e4] */ r_eax = R32((u32)(0xa237e4u));
    /* 00855158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085515a: jne 0x85516e */ if (!fZ) goto L_0085516e;
L_0085515c:; BB(0x0085515c);
    /* 0085515c: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855161: push 0xb480ac */ { u32 v = 0xb480acu; r_esp -= 4; W32(r_esp, v); }
    /* 00855166: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85516bu); f_0085b5fd();
    /* 0085516b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085516e:; BB(0x0085516e);
    /* 0085516e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855173u); f_00859dd6();
    /* 00855173: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855176: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085517c: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00855180: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855182: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085510e); r_esp += 4; return;
}

void f_00855187(void)
{
    FN_ENTER(0x00855187);
    /* 00855187: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 0085518d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855190: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00855193: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855196: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 0085519e: mov dword ptr [esp + 0x44], 0xb48084 */ W32((u32)(r_esp+0x44u), 0xb48084u);
    /* 008551a6: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008551a8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008551ab: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008551ad: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008551b1: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008551b3: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008551b7: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008551b9: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008551bd: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008551c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008551c2: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8551c8u); call_ind(t); }
    /* 008551c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008551c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008551cb: jne 0x8551f3 */ if (!fZ) goto L_008551f3;
L_008551cd:; BB(0x008551cd);
    /* 008551cd: mov eax, dword ptr [0xa237e4] */ r_eax = R32((u32)(0xa237e4u));
    /* 008551d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008551d4: jne 0x8551e8 */ if (!fZ) goto L_008551e8;
L_008551d6:; BB(0x008551d6);
    /* 008551d6: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008551db: push 0xb4808c */ { u32 v = 0xb4808cu; r_esp -= 4; W32(r_esp, v); }
    /* 008551e0: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8551e5u); f_0085b5fd();
    /* 008551e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008551e8:; BB(0x008551e8);
    /* 008551e8: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8551edu); f_00859dd6();
    /* 008551ed: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
L_008551f3:; BB(0x008551f3);
    /* 008551f3: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008551f7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008551fa: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008551fc: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855187); r_esp += 4; return;
}

void f_00855201(void)
{
    FN_ENTER(0x00855201);
    /* 00855201: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00855207: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085520a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085520d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855210: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00855217: mov dword ptr [esp + 4], 0xb48064 */ W32((u32)(r_esp+0x4u), 0xb48064u);
    /* 0085521f: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855221: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855224: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855226: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085522a: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085522c: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855230: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855232: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855236: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085523a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855240u); call_ind(t); }
    /* 00855240: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855241: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855243: jne 0x85526b */ if (!fZ) goto L_0085526b;
L_00855245:; BB(0x00855245);
    /* 00855245: mov eax, dword ptr [0xa237e4] */ r_eax = R32((u32)(0xa237e4u));
    /* 0085524a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085524c: jne 0x855260 */ if (!fZ) goto L_00855260;
L_0085524e:; BB(0x0085524e);
    /* 0085524e: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855253: push 0xb4806c */ { u32 v = 0xb4806cu; r_esp -= 4; W32(r_esp, v); }
    /* 00855258: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85525du); f_0085b5fd();
    /* 0085525d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00855260:; BB(0x00855260);
    /* 00855260: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855265u); f_00859dd6();
    /* 00855265: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
L_0085526b:; BB(0x0085526b);
    /* 0085526b: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 0085526f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855272: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855274: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855201); r_esp += 4; return;
}

void f_00855279(void)
{
    FN_ENTER(0x00855279);
    /* 00855279: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085527c: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085527f: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00855287: mov dword ptr [esp + 0x64], 0xb47f54 */ W32((u32)(r_esp+0x64u), 0xb47f54u);
    /* 0085528f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00855291: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855294: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00855296: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855298: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0085529c: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0085529f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008552a1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008552a5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008552a8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008552aa: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008552ae: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008552b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008552b3: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8552b9u); call_ind(t); }
    /* 008552b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008552ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008552bc: je 0x856cf0 */ if (fZ) goto L_00856cf0;
L_008552c2:; BB(0x008552c2);
    /* 008552c2: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008552c6: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008552c9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008552cb: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855279); r_esp += 4; return;
L_00856cf0:; BB(0x00856cf0);
    /* 00856cf0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856cf5u); f_00859dd6();
    /* 00856cf5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856cfb: jmp 0x8552c2 */ goto L_008552c2;
}

void f_008552d0(void)
{
    FN_ENTER(0x008552d0);
    /* 008552d0: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 008552d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008552da: mov dword ptr [esp + 0x64], 0xb47f54 */ W32((u32)(r_esp+0x64u), 0xb47f54u);
    /* 008552e2: jne 0x855338 */ if (!fZ) goto L_00855338;
L_008552e4:; BB(0x008552e4);
    /* 008552e4: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 008552e9: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008552ec: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008552ef: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008552f1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008552f3: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008552f7: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008552fa: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008552fc: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855300: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855303: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855305: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855309: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085530d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085530e: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855314u); call_ind(t); }
    /* 00855314: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855315: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855317: jne 0x855367 */ if (!fZ) goto L_00855367;
L_00855319:; BB(0x00855319);
    /* 00855319: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085531e: push 0xb48038 */ { u32 v = 0xb48038u; r_esp -= 4; W32(r_esp, v); }
    /* 00855323: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855328u); f_0085b5fd();
    /* 00855328: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085532b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855330u); f_00859dd6();
    /* 00855330: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00855336: jmp 0x855367 */ goto L_00855367;
L_00855338:; BB(0x00855338);
    /* 00855338: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085533b: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085533e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00855340: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00855344: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00855346: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085534a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085534d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085534f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855353: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855358: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85535eu); call_ind(t); }
    /* 0085535e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085535f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855361: je 0x856d00 */ if (fZ) goto L_00856d00;
L_00855367:; BB(0x00855367);
    /* 00855367: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0085536b: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085536e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855370: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008552d0); r_esp += 4; return;
L_00856d00:; BB(0x00856d00);
    /* 00856d00: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d05u); f_00859dd6();
    /* 00856d05: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856d0b: jmp 0x855367 */ goto L_00855367;
}

void f_00855375(void)
{
    FN_ENTER(0x00855375);
    /* 00855375: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 0085537a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085537d: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00855385: mov dword ptr [esp + 0x64], 0xb47f54 */ W32((u32)(r_esp+0x64u), 0xb47f54u);
    /* 0085538d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085538f: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 00855395: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855397: jne 0x8553ed */ if (!fZ) goto L_008553ed;
L_00855399:; BB(0x00855399);
    /* 00855399: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 0085539e: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008553a1: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008553a4: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008553a6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008553a8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008553ac: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008553af: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008553b1: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008553b5: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008553b8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008553ba: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008553be: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008553c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008553c3: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8553c9u); call_ind(t); }
    /* 008553c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008553ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008553cc: jne 0x855421 */ if (!fZ) goto L_00855421;
L_008553ce:; BB(0x008553ce);
    /* 008553ce: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008553d3: push 0xb47fbc */ { u32 v = 0xb47fbcu; r_esp -= 4; W32(r_esp, v); }
    /* 008553d8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8553ddu); f_0085b5fd();
    /* 008553dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008553e0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8553e5u); f_00859dd6();
    /* 008553e5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008553eb: jmp 0x855421 */ goto L_00855421;
L_008553ed:; BB(0x008553ed);
    /* 008553ed: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008553f0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008553f2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008553f5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008553f7: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008553fa: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 008553fe: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855400: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855404: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855407: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855409: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0085540d: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855411: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855412: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855418u); call_ind(t); }
    /* 00855418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085541b: je 0x856d10 */ if (fZ) goto L_00856d10;
L_00855421:; BB(0x00855421);
    /* 00855421: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00855425: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855428: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085542a: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855375); r_esp += 4; return;
L_00856d10:; BB(0x00856d10);
    /* 00856d10: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d15u); f_00859dd6();
    /* 00856d15: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856d1b: jmp 0x855421 */ goto L_00855421;
}

void f_0085542f(void)
{
    FN_ENTER(0x0085542f);
    /* 0085542f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855431: je 0x855442 */ if (fZ) goto L_00855442;
L_00855433:; BB(0x00855433);
    /* 00855433: mov eax, dword ptr [0x995ab8] */ r_eax = R32((u32)(0x995ab8u));
    /* 00855438: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085543b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085543d: jmp 0x85666c */ goto L_0085666c;
L_00855442:; BB(0x00855442);
    /* 00855442: mov edx, dword ptr [0x995ab0] */ r_edx = R32((u32)(0x995ab0u));
    /* 00855448: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085544b: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00855453: mov eax, 0xb47f54 */ r_eax = 0xb47f54u;
    /* 00855458: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0085545c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085545f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00855461: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855463: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00855467: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0085546a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085546c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855470: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855473: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855475: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855479: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085547d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085547e: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855484u); call_ind(t); }
    /* 00855484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855487: jne 0x8554a6 */ if (!fZ) goto L_008554a6;
L_00855489:; BB(0x00855489);
    /* 00855489: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085548e: push 0xb47f5c */ { u32 v = 0xb47f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00855493: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855498u); f_0085b5fd();
    /* 00855498: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085549b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8554a0u); f_00859dd6();
    /* 008554a0: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
L_008554a6:; BB(0x008554a6);
    /* 008554a6: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008554aa: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008554ad: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008554af: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085542f); r_esp += 4; return;
}

void f_008554b4(void)
{
    FN_ENTER(0x008554b4);
    /* 008554b4: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 008554b9: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008554bc: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008554bf: mov dword ptr [esp + 0x60], 4 */ W32((u32)(r_esp+0x60u), 0x4u);
    /* 008554c7: mov dword ptr [esp + 0x64], 0xb47f54 */ W32((u32)(r_esp+0x64u), 0xb47f54u);
    /* 008554cf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008554d1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008554d3: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008554d7: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008554da: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008554dc: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008554e0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008554e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008554e5: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008554e9: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008554ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008554ee: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8554f4u); call_ind(t); }
    /* 008554f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008554f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008554f7: je 0x856d20 */ if (fZ) goto L_00856d20;
L_008554fd:; BB(0x008554fd);
    /* 008554fd: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00855501: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855504: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855506: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008554b4); r_esp += 4; return;
L_00856d20:; BB(0x00856d20);
    /* 00856d20: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d25u); f_00859dd6();
    /* 00856d25: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856d2b: jmp 0x8554fd */ goto L_008554fd;
}

void f_0085550b(void)
{
    FN_ENTER(0x0085550b);
    /* 0085550b: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 00855513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855515: mov dword ptr [esp + 0x64], 0xb47f54 */ W32((u32)(r_esp+0x64u), 0xb47f54u);
    /* 0085551d: jne 0x855547 */ if (!fZ) goto L_00855547;
L_0085551f:; BB(0x0085551f);
    /* 0085551f: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855522: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00855524: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 0085552a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0085552c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0085552d: jae 0x85553b */ if (!fC) goto L_0085553b;
L_0085552f:; BB(0x0085552f);
    /* 0085552f: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00855534: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855537: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855539: jmp 0x85556d */ goto L_0085556d;
L_0085553b:; BB(0x0085553b);
    /* 0085553b: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 00855540: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855543: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855545: jmp 0x85556d */ goto L_0085556d;
L_00855547:; BB(0x00855547);
    /* 00855547: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085554a: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0085554c: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 00855552: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00855554: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00855555: jae 0x855563 */ if (!fC) goto L_00855563;
L_00855557:; BB(0x00855557);
    /* 00855557: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 0085555c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085555f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855561: jmp 0x85556d */ goto L_0085556d;
L_00855563:; BB(0x00855563);
    /* 00855563: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00855568: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085556b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0085556d:; BB(0x0085556d);
    /* 0085556d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855570: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855573: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00855575: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00855579: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085557b: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085557f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855582: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855584: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855588: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085558c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085558d: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855593u); call_ind(t); }
    /* 00855593: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855596: je 0x856d30 */ if (fZ) goto L_00856d30;
L_0085559c:; BB(0x0085559c);
    /* 0085559c: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008555a0: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008555a3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008555a5: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085550b); r_esp += 4; return;
L_00856d30:; BB(0x00856d30);
    /* 00856d30: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d35u); f_00859dd6();
    /* 00856d35: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856d3b: jmp 0x85559c */ goto L_0085559c;
}

void f_008555aa(void)
{
    FN_ENTER(0x008555aa);
    /* 008555aa: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008555ad: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008555b0: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008555b3: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 008555bb: mov dword ptr [esp + 0x44], 0xb47f34 */ W32((u32)(r_esp+0x44u), 0xb47f34u);
    /* 008555c3: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008555c5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008555c8: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 008555ca: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008555cc: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008555d0: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008555d2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008555d5: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008555d9: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008555db: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008555df: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008555e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008555e4: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8555eau); call_ind(t); }
    /* 008555ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008555eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008555ed: je 0x856d40 */ if (fZ) goto L_00856d40;
L_008555f3:; BB(0x008555f3);
    /* 008555f3: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008555f7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008555fa: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008555fc: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008555aa); r_esp += 4; return;
L_00856d40:; BB(0x00856d40);
    /* 00856d40: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d45u); f_00859dd6();
    /* 00856d45: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856d4b: jmp 0x8555f3 */ goto L_008555f3;
}

void f_00855601(void)
{
    FN_ENTER(0x00855601);
    /* 00855601: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00855609: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085560b: mov dword ptr [esp + 0x44], 0xb47f34 */ W32((u32)(r_esp+0x44u), 0xb47f34u);
    /* 00855613: jne 0x85566a */ if (!fZ) goto L_0085566a;
L_00855615:; BB(0x00855615);
    /* 00855615: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 0085561b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085561e: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00855621: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855624: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855626: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855629: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085562b: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085562f: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00855631: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00855635: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855637: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085563b: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085563f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855640: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x855646u); call_ind(t); }
    /* 00855646: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855647: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855649: jne 0x855699 */ if (!fZ) goto L_00855699;
L_0085564b:; BB(0x0085564b);
    /* 0085564b: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855650: push 0xb4800c */ { u32 v = 0xb4800cu; r_esp -= 4; W32(r_esp, v); }
    /* 00855655: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85565au); f_0085b5fd();
    /* 0085565a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085565d: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855662u); f_00859dd6();
    /* 00855662: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00855668: jmp 0x855699 */ goto L_00855699;
L_0085566a:; BB(0x0085566a);
    /* 0085566a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085566d: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00855670: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00855673: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855675: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00855679: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085567d: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085567f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00855683: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00855685: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00855689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085568a: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x855690u); call_ind(t); }
    /* 00855690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855693: je 0x856d50 */ if (fZ) goto L_00856d50;
L_00855699:; BB(0x00855699);
    /* 00855699: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085569d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008556a0: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008556a2: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855601); r_esp += 4; return;
L_00856d50:; BB(0x00856d50);
    /* 00856d50: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d55u); f_00859dd6();
    /* 00856d55: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856d5b: jmp 0x855699 */ goto L_00855699;
}

void f_008556a7(void)
{
    FN_ENTER(0x008556a7);
    /* 008556a7: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 008556af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008556b1: mov dword ptr [esp + 0x44], 0xb47f34 */ W32((u32)(r_esp+0x44u), 0xb47f34u);
    /* 008556b9: jne 0x855710 */ if (!fZ) goto L_00855710;
L_008556bb:; BB(0x008556bb);
    /* 008556bb: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 008556c1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008556c4: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008556c7: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008556ca: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008556cc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008556cf: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008556d1: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008556d5: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008556d7: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008556db: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008556dd: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008556e1: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008556e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008556e6: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8556ecu); call_ind(t); }
    /* 008556ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008556ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008556ef: jne 0x85574a */ if (!fZ) goto L_0085574a;
L_008556f1:; BB(0x008556f1);
    /* 008556f1: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008556f6: push 0xb47f9c */ { u32 v = 0xb47f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 008556fb: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855700u); f_0085b5fd();
    /* 00855700: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00855703: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855708u); f_00859dd6();
    /* 00855708: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085570e: jmp 0x85574a */ goto L_0085574a;
L_00855710:; BB(0x00855710);
    /* 00855710: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00855716: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855719: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085571c: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085571f: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855721: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855724: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00855726: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085572a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085572c: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00855730: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855732: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00855736: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085573a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085573b: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x855741u); call_ind(t); }
    /* 00855741: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855744: je 0x856d60 */ if (fZ) goto L_00856d60;
L_0085574a:; BB(0x0085574a);
    /* 0085574a: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085574e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855751: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855753: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008556a7); r_esp += 4; return;
L_00856d60:; BB(0x00856d60);
    /* 00856d60: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d65u); f_00859dd6();
    /* 00856d65: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856d6b: jmp 0x85574a */ goto L_0085574a;
}

void f_00855758(void)
{
    FN_ENTER(0x00855758);
    /* 00855758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085575a: je 0x85576c */ if (fZ) goto L_0085576c;
L_0085575c:; BB(0x0085575c);
    /* 0085575c: fld qword ptr [0x995ae0] */ FPUSH(R_F64((u32)(0x995ae0u)));
    /* 00855762: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855765: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855767: jmp 0x85666c */ goto L_0085666c;
L_0085576c:; BB(0x0085576c);
    /* 0085576c: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00855772: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855775: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855778: mov eax, 0xb47f34 */ r_eax = 0xb47f34u;
    /* 0085577d: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00855781: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855784: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 0085578c: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 0085578e: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00855790: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00855794: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855796: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855799: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085579d: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085579f: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008557a3: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008557a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008557a8: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8557aeu); call_ind(t); }
    /* 008557ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008557af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008557b1: jne 0x8557d0 */ if (!fZ) goto L_008557d0;
L_008557b3:; BB(0x008557b3);
    /* 008557b3: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008557b8: push 0xb47f38 */ { u32 v = 0xb47f38u; r_esp -= 4; W32(r_esp, v); }
    /* 008557bd: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8557c2u); f_0085b5fd();
    /* 008557c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008557c5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8557cau); f_00859dd6();
    /* 008557ca: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
L_008557d0:; BB(0x008557d0);
    /* 008557d0: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008557d4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008557d7: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008557d9: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855758); r_esp += 4; return;
}

void f_008557de(void)
{
    FN_ENTER(0x008557de);
    /* 008557de: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 008557e4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008557e7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008557ea: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008557ed: mov dword ptr [esp + 0x40], 4 */ W32((u32)(r_esp+0x40u), 0x4u);
    /* 008557f5: mov dword ptr [esp + 0x44], 0xb47f34 */ W32((u32)(r_esp+0x44u), 0xb47f34u);
    /* 008557fd: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008557ff: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855802: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00855804: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00855808: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085580a: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0085580e: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855810: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00855814: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00855818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855819: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85581fu); call_ind(t); }
    /* 0085581f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855822: je 0x856d70 */ if (fZ) goto L_00856d70;
L_00855828:; BB(0x00855828);
    /* 00855828: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085582c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085582f: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855831: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008557de); r_esp += 4; return;
L_00856d70:; BB(0x00856d70);
    /* 00856d70: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d75u); f_00859dd6();
    /* 00856d75: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856d7b: jmp 0x855828 */ goto L_00855828;
}

void f_00855836(void)
{
    FN_ENTER(0x00855836);
    /* 00855836: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 0085583e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855840: mov dword ptr [esp + 0x44], 0xb47f34 */ W32((u32)(r_esp+0x44u), 0xb47f34u);
    /* 00855848: jne 0x855874 */ if (!fZ) goto L_00855874;
L_0085584a:; BB(0x0085584a);
    /* 0085584a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085584d: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085584f: fcomp qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); FPOP();
    /* 00855855: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00855857: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00855858: jae 0x855867 */ if (!fC) goto L_00855867;
L_0085585a:; BB(0x0085585a);
    /* 0085585a: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00855860: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855863: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855865: jmp 0x85589c */ goto L_0085589c;
L_00855867:; BB(0x00855867);
    /* 00855867: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 0085586d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855870: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855872: jmp 0x85589c */ goto L_0085589c;
L_00855874:; BB(0x00855874);
    /* 00855874: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855877: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00855879: fcomp qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); FPOP();
    /* 0085587f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00855881: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00855882: jae 0x855891 */ if (!fC) goto L_00855891;
L_00855884:; BB(0x00855884);
    /* 00855884: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 0085588a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085588d: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085588f: jmp 0x85589c */ goto L_0085589c;
L_00855891:; BB(0x00855891);
    /* 00855891: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00855897: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085589a: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_0085589c:; BB(0x0085589c);
    /* 0085589c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085589f: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008558a2: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008558a5: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008558a7: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008558ab: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008558af: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008558b1: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008558b5: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008558b7: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008558bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008558bc: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8558c2u); call_ind(t); }
    /* 008558c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008558c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008558c5: je 0x856d80 */ if (fZ) goto L_00856d80;
L_008558cb:; BB(0x008558cb);
    /* 008558cb: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008558cf: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008558d2: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008558d4: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855836); r_esp += 4; return;
L_00856d80:; BB(0x00856d80);
    /* 00856d80: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d85u); f_00859dd6();
    /* 00856d85: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856d8b: jmp 0x8558cb */ goto L_008558cb;
}

void f_008558d9(void)
{
    FN_ENTER(0x008558d9);
    /* 008558d9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008558dc: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008558df: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008558e2: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 008558e9: mov dword ptr [esp + 4], 0xb47f10 */ W32((u32)(r_esp+0x4u), 0xb47f10u);
    /* 008558f1: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008558f3: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008558f6: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 008558f8: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008558fa: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008558fe: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855900: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855903: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855907: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855909: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085590d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855911: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855917u); call_ind(t); }
    /* 00855917: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085591a: je 0x856d90 */ if (fZ) goto L_00856d90;
L_00855920:; BB(0x00855920);
    /* 00855920: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00855924: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855927: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855929: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008558d9); r_esp += 4; return;
L_00856d90:; BB(0x00856d90);
    /* 00856d90: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856d95u); f_00859dd6();
    /* 00856d95: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856d9b: jmp 0x855920 */ goto L_00855920;
}

void f_0085592e(void)
{
    FN_ENTER(0x0085592e);
    /* 0085592e: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00855935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855937: mov dword ptr [esp + 4], 0xb47f10 */ W32((u32)(r_esp+0x4u), 0xb47f10u);
    /* 0085593f: jne 0x855994 */ if (!fZ) goto L_00855994;
L_00855941:; BB(0x00855941);
    /* 00855941: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00855946: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855949: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085594c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085594e: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00855950: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855953: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00855957: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855959: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085595c: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855960: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855962: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855966: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085596a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855970u); call_ind(t); }
    /* 00855970: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855971: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855973: jne 0x8559c2 */ if (!fZ) goto L_008559c2;
L_00855975:; BB(0x00855975);
    /* 00855975: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085597a: push 0xb47fe0 */ { u32 v = 0xb47fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085597f: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855984u); f_0085b5fd();
    /* 00855984: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00855987: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85598cu); f_00859dd6();
    /* 0085598c: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00855992: jmp 0x8559c2 */ goto L_008559c2;
L_00855994:; BB(0x00855994);
    /* 00855994: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855997: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085599a: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085599d: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085599f: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008559a3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008559a6: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008559a8: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008559ac: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008559ae: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008559b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008559b3: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8559b9u); call_ind(t); }
    /* 008559b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008559ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008559bc: je 0x856da0 */ if (fZ) goto L_00856da0;
L_008559c2:; BB(0x008559c2);
    /* 008559c2: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008559c6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008559c9: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008559cb: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085592e); r_esp += 4; return;
L_00856da0:; BB(0x00856da0);
    /* 00856da0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856da5u); f_00859dd6();
    /* 00856da5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856dab: jmp 0x8559c2 */ goto L_008559c2;
}

void f_008559d0(void)
{
    FN_ENTER(0x008559d0);
    /* 008559d0: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 008559d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008559d9: mov dword ptr [esp + 4], 0xb47f10 */ W32((u32)(r_esp+0x4u), 0xb47f10u);
    /* 008559e1: jne 0x855a37 */ if (!fZ) goto L_00855a37;
L_008559e3:; BB(0x008559e3);
    /* 008559e3: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008559e9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008559ec: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008559ef: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008559f2: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008559f4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008559f7: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008559f9: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008559fd: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008559ff: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855a03: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855a05: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855a09: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855a0d: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855a13u); call_ind(t); }
    /* 00855a13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855a14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855a16: jne 0x855a70 */ if (!fZ) goto L_00855a70;
L_00855a18:; BB(0x00855a18);
    /* 00855a18: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855a1d: push 0xb47f78 */ { u32 v = 0xb47f78u; r_esp -= 4; W32(r_esp, v); }
    /* 00855a22: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855a27u); f_0085b5fd();
    /* 00855a27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00855a2a: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855a2fu); f_00859dd6();
    /* 00855a2f: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00855a35: jmp 0x855a70 */ goto L_00855a70;
L_00855a37:; BB(0x00855a37);
    /* 00855a37: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00855a3d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855a40: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00855a43: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855a46: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855a48: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855a4b: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855a4d: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00855a51: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00855a53: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855a57: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855a59: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855a5d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855a61: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855a67u); call_ind(t); }
    /* 00855a67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855a68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855a6a: je 0x856db0 */ if (fZ) goto L_00856db0;
L_00855a70:; BB(0x00855a70);
    /* 00855a70: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00855a74: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855a77: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855a79: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008559d0); r_esp += 4; return;
L_00856db0:; BB(0x00856db0);
    /* 00856db0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856db5u); f_00859dd6();
    /* 00856db5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856dbb: jmp 0x855a70 */ goto L_00855a70;
}

void f_00855a7e(void)
{
    FN_ENTER(0x00855a7e);
    /* 00855a7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855a80: je 0x855a92 */ if (fZ) goto L_00855a92;
L_00855a82:; BB(0x00855a82);
    /* 00855a82: fld xword ptr [0x995b30] */ FPUSH(R_F80((u32)(0x995b30u)));
    /* 00855a88: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855a8b: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855a8d: jmp 0x85666c */ goto L_0085666c;
L_00855a92:; BB(0x00855a92);
    /* 00855a92: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00855a98: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855a9b: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855a9e: mov eax, 0xb47f10 */ r_eax = 0xb47f10u;
    /* 00855aa3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00855aa7: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855aaa: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00855ab1: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 00855ab3: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00855ab5: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00855ab9: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855abb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855abe: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855ac2: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855ac4: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855ac8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855acb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855acc: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855ad2u); call_ind(t); }
    /* 00855ad2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855ad3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855ad5: jne 0x855af4 */ if (!fZ) goto L_00855af4;
L_00855ad7:; BB(0x00855ad7);
    /* 00855ad7: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855adc: push 0xb47f18 */ { u32 v = 0xb47f18u; r_esp -= 4; W32(r_esp, v); }
    /* 00855ae1: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855ae6u); f_0085b5fd();
    /* 00855ae6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00855ae9: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855aeeu); f_00859dd6();
    /* 00855aee: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
L_00855af4:; BB(0x00855af4);
    /* 00855af4: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00855af8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855afb: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855afd: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855a7e); r_esp += 4; return;
}

void f_00855b02(void)
{
    FN_ENTER(0x00855b02);
    /* 00855b02: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00855b08: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855b0b: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00855b0e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855b11: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 00855b18: mov dword ptr [esp + 4], 0xb47f10 */ W32((u32)(r_esp+0x4u), 0xb47f10u);
    /* 00855b20: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855b22: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855b25: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855b27: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00855b2b: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00855b2d: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855b31: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855b33: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855b37: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855b3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855b3b: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855b41u); call_ind(t); }
    /* 00855b41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855b42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855b44: je 0x856dc0 */ if (fZ) goto L_00856dc0;
L_00855b4a:; BB(0x00855b4a);
    /* 00855b4a: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00855b4e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855b51: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855b53: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855b02); r_esp += 4; return;
L_00856dc0:; BB(0x00856dc0);
    /* 00856dc0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856dc5u); f_00859dd6();
    /* 00856dc5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856dcb: jmp 0x855b4a */ goto L_00855b4a;
}

void f_00855b58(void)
{
    FN_ENTER(0x00855b58);
    /* 00855b58: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 00855b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855b61: mov dword ptr [esp + 4], 0xb47f10 */ W32((u32)(r_esp+0x4u), 0xb47f10u);
    /* 00855b69: jne 0x855b97 */ if (!fZ) goto L_00855b97;
L_00855b6b:; BB(0x00855b6b);
    /* 00855b6b: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00855b71: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855b74: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855b76: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00855b78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00855b7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00855b7b: jae 0x855b8a */ if (!fC) goto L_00855b8a;
L_00855b7d:; BB(0x00855b7d);
    /* 00855b7d: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00855b83: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855b86: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855b88: jmp 0x855bc1 */ goto L_00855bc1;
L_00855b8a:; BB(0x00855b8a);
    /* 00855b8a: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00855b90: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855b93: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855b95: jmp 0x855bc1 */ goto L_00855bc1;
L_00855b97:; BB(0x00855b97);
    /* 00855b97: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00855b9d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855ba0: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855ba2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00855ba4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00855ba6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00855ba7: jae 0x855bb6 */ if (!fC) goto L_00855bb6;
L_00855ba9:; BB(0x00855ba9);
    /* 00855ba9: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 00855baf: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855bb2: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855bb4: jmp 0x855bc1 */ goto L_00855bc1;
L_00855bb6:; BB(0x00855bb6);
    /* 00855bb6: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00855bbc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855bbf: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00855bc1:; BB(0x00855bc1);
    /* 00855bc1: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855bc4: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00855bc7: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00855bca: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855bcc: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00855bd0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855bd3: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855bd5: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855bd9: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00855bdb: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855be0: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855be6u); call_ind(t); }
    /* 00855be6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855be9: je 0x856dd0 */ if (fZ) goto L_00856dd0;
L_00855bef:; BB(0x00855bef);
    /* 00855bef: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00855bf3: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855bf6: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855bf8: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855b58); r_esp += 4; return;
L_00856dd0:; BB(0x00856dd0);
    /* 00856dd0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856dd5u); f_00859dd6();
    /* 00856dd5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856ddb: jmp 0x855bef */ goto L_00855bef;
}

void f_00855bfd(void)
{
    FN_ENTER(0x00855bfd);
    /* 00855bfd: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00855c02: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855c05: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855c08: mov dword ptr [esp + 0x60], 4 */ W32((u32)(r_esp+0x60u), 0x4u);
    /* 00855c10: mov dword ptr [esp + 0x64], 0xb47f08 */ W32((u32)(r_esp+0x64u), 0xb47f08u);
    /* 00855c18: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855c1a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00855c1c: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00855c20: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855c23: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855c25: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855c29: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855c2c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855c2e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855c32: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855c36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855c37: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855c3du); call_ind(t); }
    /* 00855c3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855c3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855c40: je 0x856de0 */ if (fZ) goto L_00856de0;
L_00855c46:; BB(0x00855c46);
    /* 00855c46: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00855c4a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855c4d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855c4f: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855bfd); r_esp += 4; return;
L_00856de0:; BB(0x00856de0);
    /* 00856de0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856de5u); f_00859dd6();
    /* 00856de5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856deb: jmp 0x855c46 */ goto L_00855c46;
}

void f_00855c54(void)
{
    FN_ENTER(0x00855c54);
    /* 00855c54: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 00855c5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855c5e: mov dword ptr [esp + 0x64], 0xb47f08 */ W32((u32)(r_esp+0x64u), 0xb47f08u);
    /* 00855c66: jne 0x855c74 */ if (!fZ) goto L_00855c74;
L_00855c68:; BB(0x00855c68);
    /* 00855c68: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 00855c6d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855c70: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855c72: jmp 0x855c7e */ goto L_00855c7e;
L_00855c74:; BB(0x00855c74);
    /* 00855c74: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00855c79: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855c7c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00855c7e:; BB(0x00855c7e);
    /* 00855c7e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855c81: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855c84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00855c86: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00855c8a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00855c8c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855c90: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855c93: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855c95: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855c99: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855c9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855c9e: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855ca4u); call_ind(t); }
    /* 00855ca4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855ca7: je 0x856df0 */ if (fZ) goto L_00856df0;
L_00855cad:; BB(0x00855cad);
    /* 00855cad: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00855cb1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855cb4: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855cb6: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855c54); r_esp += 4; return;
L_00856df0:; BB(0x00856df0);
    /* 00856df0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856df5u); f_00859dd6();
    /* 00856df5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856dfb: jmp 0x855cad */ goto L_00855cad;
}

void f_00855cbb(void)
{
    FN_ENTER(0x00855cbb);
    /* 00855cbb: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00855cc1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855cc4: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00855cc7: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855cca: mov dword ptr [esp + 0x40], 4 */ W32((u32)(r_esp+0x40u), 0x4u);
    /* 00855cd2: mov dword ptr [esp + 0x44], 0xb47f04 */ W32((u32)(r_esp+0x44u), 0xb47f04u);
    /* 00855cda: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855cdc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855cdf: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00855ce1: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00855ce5: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00855ce7: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00855ceb: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855ced: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00855cf1: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00855cf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855cf6: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x855cfcu); call_ind(t); }
    /* 00855cfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855cfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855cff: je 0x856e00 */ if (fZ) goto L_00856e00;
L_00855d05:; BB(0x00855d05);
    /* 00855d05: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00855d09: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855d0c: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855d0e: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855cbb); r_esp += 4; return;
L_00856e00:; BB(0x00856e00);
    /* 00856e00: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e05u); f_00859dd6();
    /* 00856e05: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856e0b: jmp 0x855d05 */ goto L_00855d05;
}

void f_00855d13(void)
{
    FN_ENTER(0x00855d13);
    /* 00855d13: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 00855d1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855d1d: mov dword ptr [esp + 0x44], 0xb47f04 */ W32((u32)(r_esp+0x44u), 0xb47f04u);
    /* 00855d25: jne 0x855d34 */ if (!fZ) goto L_00855d34;
L_00855d27:; BB(0x00855d27);
    /* 00855d27: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00855d2d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855d30: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855d32: jmp 0x855d3f */ goto L_00855d3f;
L_00855d34:; BB(0x00855d34);
    /* 00855d34: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00855d3a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855d3d: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_00855d3f:; BB(0x00855d3f);
    /* 00855d3f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855d42: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00855d45: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00855d48: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855d4a: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00855d4e: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00855d52: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00855d54: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00855d58: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00855d5a: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00855d5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855d5f: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x855d65u); call_ind(t); }
    /* 00855d65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855d66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855d68: je 0x856e10 */ if (fZ) goto L_00856e10;
L_00855d6e:; BB(0x00855d6e);
    /* 00855d6e: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00855d72: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855d75: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855d77: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855d13); r_esp += 4; return;
L_00856e10:; BB(0x00856e10);
    /* 00856e10: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e15u); f_00859dd6();
    /* 00856e15: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856e1b: jmp 0x855d6e */ goto L_00855d6e;
}

void f_00855d7c(void)
{
    FN_ENTER(0x00855d7c);
    /* 00855d7c: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00855d82: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855d85: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00855d88: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855d8b: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 00855d92: mov dword ptr [esp + 4], 0xb47efc */ W32((u32)(r_esp+0x4u), 0xb47efcu);
    /* 00855d9a: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855d9c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855d9f: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855da1: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00855da5: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00855da7: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855dab: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855dad: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855db1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855db5: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855dbbu); call_ind(t); }
    /* 00855dbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855dbe: je 0x856e20 */ if (fZ) goto L_00856e20;
L_00855dc4:; BB(0x00855dc4);
    /* 00855dc4: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00855dc8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855dcb: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855dcd: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855d7c); r_esp += 4; return;
L_00856e20:; BB(0x00856e20);
    /* 00856e20: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e25u); f_00859dd6();
    /* 00856e25: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856e2b: jmp 0x855dc4 */ goto L_00855dc4;
}

void f_00855dd2(void)
{
    FN_ENTER(0x00855dd2);
    /* 00855dd2: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 00855dd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855ddb: mov dword ptr [esp + 4], 0xb47efc */ W32((u32)(r_esp+0x4u), 0xb47efcu);
    /* 00855de3: jne 0x855df2 */ if (!fZ) goto L_00855df2;
L_00855de5:; BB(0x00855de5);
    /* 00855de5: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00855deb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855dee: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855df0: jmp 0x855dfd */ goto L_00855dfd;
L_00855df2:; BB(0x00855df2);
    /* 00855df2: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00855df8: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855dfb: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00855dfd:; BB(0x00855dfd);
    /* 00855dfd: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00855e00: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00855e03: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00855e06: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00855e08: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00855e0c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00855e0f: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00855e11: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00855e15: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00855e17: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00855e1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855e1c: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x855e22u); call_ind(t); }
    /* 00855e22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855e23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855e25: je 0x856e30 */ if (fZ) goto L_00856e30;
L_00855e2b:; BB(0x00855e2b);
    /* 00855e2b: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00855e2f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855e32: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00855e34: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855dd2); r_esp += 4; return;
L_00856e30:; BB(0x00856e30);
    /* 00856e30: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e35u); f_00859dd6();
    /* 00856e35: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00856e3b: jmp 0x855e2b */ goto L_00855e2b;
}

void f_00855e39(void)
{
    FN_ENTER(0x00855e39);
    /* 00855e39: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00855e41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855e43: mov dword ptr [esp + 0x64], 0xb47e0c */ W32((u32)(r_esp+0x64u), 0xb47e0cu);
    /* 00855e4b: jne 0x855ea1 */ if (!fZ) goto L_00855ea1;
L_00855e4d:; BB(0x00855e4d);
    /* 00855e4d: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00855e52: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855e55: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855e58: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855e5a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00855e5c: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00855e60: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855e63: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855e65: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855e69: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855e6c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855e6e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855e72: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855e76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855e77: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855e7du); call_ind(t); }
    /* 00855e7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855e7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855e80: jne 0x855eda */ if (!fZ) goto L_00855eda;
L_00855e82:; BB(0x00855e82);
    /* 00855e82: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855e87: push 0xb47e5c */ { u32 v = 0xb47e5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00855e8c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855e91u); f_0085b5fd();
    /* 00855e91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00855e94: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855e99u); f_00859dd6();
    /* 00855e99: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00855e9f: jmp 0x855eda */ goto L_00855eda;
L_00855ea1:; BB(0x00855ea1);
    /* 00855ea1: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00855ea6: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855ea9: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855eac: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855eae: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00855eb0: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00855eb4: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855eb7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855eb9: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855ebd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855ec0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855ec2: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855ec6: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855eca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855ecb: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855ed1u); call_ind(t); }
    /* 00855ed1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855ed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855ed4: je 0x856e40 */ if (fZ) goto L_00856e40;
L_00855eda:; BB(0x00855eda);
    /* 00855eda: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00855ede: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855ee1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855ee3: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855e39); r_esp += 4; return;
L_00856e40:; BB(0x00856e40);
    /* 00856e40: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e45u); f_00859dd6();
    /* 00856e45: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856e4b: jmp 0x855eda */ goto L_00855eda;
}

void f_00855ee8(void)
{
    FN_ENTER(0x00855ee8);
    /* 00855ee8: mov dword ptr [esp + 0x60], 2 */ W32((u32)(r_esp+0x60u), 0x2u);
    /* 00855ef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855ef2: mov dword ptr [esp + 0x64], 0xb47e0c */ W32((u32)(r_esp+0x64u), 0xb47e0cu);
    /* 00855efa: jne 0x855f50 */ if (!fZ) goto L_00855f50;
L_00855efc:; BB(0x00855efc);
    /* 00855efc: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 00855f01: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855f04: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855f07: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855f09: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00855f0b: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00855f0f: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855f12: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855f14: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855f18: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855f1b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855f1d: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855f21: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855f26: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855f2cu); call_ind(t); }
    /* 00855f2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855f2f: jne 0x855f89 */ if (!fZ) goto L_00855f89;
L_00855f31:; BB(0x00855f31);
    /* 00855f31: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855f36: push 0xb47e14 */ { u32 v = 0xb47e14u; r_esp -= 4; W32(r_esp, v); }
    /* 00855f3b: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855f40u); f_0085b5fd();
    /* 00855f40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00855f43: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855f48u); f_00859dd6();
    /* 00855f48: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00855f4e: jmp 0x855f89 */ goto L_00855f89;
L_00855f50:; BB(0x00855f50);
    /* 00855f50: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 00855f55: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855f58: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00855f5b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855f5d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00855f5f: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00855f63: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00855f66: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855f68: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00855f6c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855f6f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00855f71: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00855f75: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00855f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855f7a: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x855f80u); call_ind(t); }
    /* 00855f80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855f83: je 0x856e50 */ if (fZ) goto L_00856e50;
L_00855f89:; BB(0x00855f89);
    /* 00855f89: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00855f8d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00855f90: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00855f92: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855ee8); r_esp += 4; return;
L_00856e50:; BB(0x00856e50);
    /* 00856e50: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e55u); f_00859dd6();
    /* 00856e55: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856e5b: jmp 0x855f89 */ goto L_00855f89;
}

void f_00855f97(void)
{
    FN_ENTER(0x00855f97);
    /* 00855f97: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00855f9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00855fa1: mov dword ptr [esp + 0x44], 0xb47df0 */ W32((u32)(r_esp+0x44u), 0xb47df0u);
    /* 00855fa9: jne 0x856000 */ if (!fZ) goto L_00856000;
L_00855fab:; BB(0x00855fab);
    /* 00855fab: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 00855fb1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855fb4: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00855fb7: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00855fba: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00855fbc: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00855fbf: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00855fc1: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00855fc5: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00855fc7: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00855fcb: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00855fcd: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00855fd1: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00855fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00855fd6: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x855fdcu); call_ind(t); }
    /* 00855fdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00855fdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00855fdf: jne 0x85603a */ if (!fZ) goto L_0085603a;
L_00855fe1:; BB(0x00855fe1);
    /* 00855fe1: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00855fe6: push 0xb47e44 */ { u32 v = 0xb47e44u; r_esp -= 4; W32(r_esp, v); }
    /* 00855feb: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x855ff0u); f_0085b5fd();
    /* 00855ff0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00855ff3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x855ff8u); f_00859dd6();
    /* 00855ff8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00855ffe: jmp 0x85603a */ goto L_0085603a;
L_00856000:; BB(0x00856000);
    /* 00856000: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00856006: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856009: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085600c: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085600f: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00856011: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856014: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00856016: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085601a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085601c: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00856020: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00856022: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00856026: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085602a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085602b: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x856031u); call_ind(t); }
    /* 00856031: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00856032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00856034: je 0x856e60 */ if (fZ) goto L_00856e60;
L_0085603a:; BB(0x0085603a);
    /* 0085603a: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085603e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00856041: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00856043: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00855f97); r_esp += 4; return;
L_00856e60:; BB(0x00856e60);
    /* 00856e60: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856e65u); f_00859dd6();
    /* 00856e65: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00856e6b: jmp 0x85603a */ goto L_0085603a;
}

