#include "protos.h"

void f_00852022(void)
{
    FN_ENTER(0x00852022);
    /* 00852022: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 00852029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085202b: mov dword ptr [esp + 4], 0xb4834c */ W32((u32)(r_esp+0x4u), 0xb4834cu);
    /* 00852033: jne 0x852085 */ if (!fZ) goto L_00852085;
L_00852035:; BB(0x00852035);
    /* 00852035: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852038: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085203b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085203e: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852040: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852044: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852047: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852049: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085204d: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085204f: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852054: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85205au); call_ind(t); }
    /* 0085205a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085205b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085205d: jne 0x85666c */ if (!fZ) goto L_0085666c;
L_00852063:; BB(0x00852063);
    /* 00852063: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852068: push 0xb483ac */ { u32 v = 0xb483acu; r_esp -= 4; W32(r_esp, v); }
    /* 0085206d: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852072u); f_0085b5fd();
    /* 00852072: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852075: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85207au); f_00859dd6();
    /* 0085207a: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852080: jmp 0x85666c */ goto L_0085666c;
L_00852085:; BB(0x00852085);
    /* 00852085: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852088: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085208b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085208e: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852090: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852094: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852097: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852099: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085209d: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085209f: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008520a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008520a4: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8520aau); call_ind(t); }
    /* 008520aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008520ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008520ad: je 0x8567f0 */ if (fZ) goto L_008567f0;
L_008520b3:; BB(0x008520b3);
    /* 008520b3: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852022); r_esp += 4; return;
L_008567f0:; BB(0x008567f0);
    /* 008567f0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8567f5u); f_00859dd6();
    /* 008567f5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008567fb: jmp 0x85666c */ goto L_0085666c;
}

void f_008520b8(void)
{
    FN_ENTER(0x008520b8);
    /* 008520b8: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 008520bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008520c1: mov dword ptr [esp + 4], 0xb4834c */ W32((u32)(r_esp+0x4u), 0xb4834cu);
    /* 008520c9: jne 0x85211b */ if (!fZ) goto L_0085211b;
L_008520cb:; BB(0x008520cb);
    /* 008520cb: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008520ce: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008520d1: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008520d4: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008520d6: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008520da: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008520dd: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008520df: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008520e3: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008520e5: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008520e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008520ea: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8520f0u); call_ind(t); }
    /* 008520f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008520f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008520f3: jne 0x85666c */ if (!fZ) goto L_0085666c;
L_008520f9:; BB(0x008520f9);
    /* 008520f9: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008520fe: push 0xb48354 */ { u32 v = 0xb48354u; r_esp -= 4; W32(r_esp, v); }
    /* 00852103: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852108u); f_0085b5fd();
    /* 00852108: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085210b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852110u); f_00859dd6();
    /* 00852110: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852116: jmp 0x85666c */ goto L_0085666c;
L_0085211b:; BB(0x0085211b);
    /* 0085211b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085211e: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852121: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852124: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852126: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0085212a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0085212d: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 0085212f: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852133: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852135: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085213a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852140u); call_ind(t); }
    /* 00852140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852143: je 0x856800 */ if (fZ) goto L_00856800;
L_00852149:; BB(0x00852149);
    /* 00852149: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008520b8); r_esp += 4; return;
L_00856800:; BB(0x00856800);
    /* 00856800: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856805u); f_00859dd6();
    /* 00856805: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085680b: jmp 0x85666c */ goto L_0085666c;
}

void f_0085214e(void)
{
    FN_ENTER(0x0085214e);
    /* 0085214e: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 00852156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852158: mov dword ptr [esp + 0x64], 0xb482fc */ W32((u32)(r_esp+0x64u), 0xb482fcu);
    /* 00852160: jne 0x852193 */ if (!fZ) goto L_00852193;
L_00852162:; BB(0x00852162);
    /* 00852162: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852165: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00852168: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0085216a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085216c: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00852170: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 00852176: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00852178: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00852179: jbe 0x852187 */ if ((fC||fZ)) goto L_00852187;
L_0085217b:; BB(0x0085217b);
    /* 0085217b: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 00852180: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852183: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852185: jmp 0x8521c2 */ goto L_008521c2;
L_00852187:; BB(0x00852187);
    /* 00852187: mov eax, dword ptr [0x995acc] */ r_eax = R32((u32)(0x995accu));
    /* 0085218c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085218f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852191: jmp 0x8521c2 */ goto L_008521c2;
L_00852193:; BB(0x00852193);
    /* 00852193: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852196: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00852199: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0085219b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085219d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 008521a1: fcomp dword ptr [0x995ab0] */ fx_compare(ST(0), R_F32((u32)(0x995ab0u))); FPOP();
    /* 008521a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008521a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008521aa: jbe 0x8521b8 */ if ((fC||fZ)) goto L_008521b8;
L_008521ac:; BB(0x008521ac);
    /* 008521ac: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 008521b1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008521b4: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008521b6: jmp 0x8521c2 */ goto L_008521c2;
L_008521b8:; BB(0x008521b8);
    /* 008521b8: mov eax, dword ptr [0x995ac4] */ r_eax = R32((u32)(0x995ac4u));
    /* 008521bd: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008521c0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_008521c2:; BB(0x008521c2);
    /* 008521c2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008521c5: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008521c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008521ca: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008521ce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008521d0: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008521d4: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008521d7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008521d9: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008521dd: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008521e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008521e2: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8521e8u); call_ind(t); }
    /* 008521e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008521e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008521eb: je 0x856810 */ if (fZ) goto L_00856810;
L_008521f1:; BB(0x008521f1);
    /* 008521f1: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008521f5: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008521f8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008521fa: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085214e); r_esp += 4; return;
L_00856810:; BB(0x00856810);
    /* 00856810: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856815u); f_00859dd6();
    /* 00856815: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085681b: jmp 0x8521f1 */ goto L_008521f1;
}

void f_008521ff(void)
{
    FN_ENTER(0x008521ff);
    /* 008521ff: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 00852207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852209: mov dword ptr [esp + 0x44], 0xb482f4 */ W32((u32)(r_esp+0x44u), 0xb482f4u);
    /* 00852211: jne 0x852241 */ if (!fZ) goto L_00852241;
L_00852213:; BB(0x00852213);
    /* 00852213: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852216: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852218: fcom qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); 
    /* 0085221e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00852220: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852224: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00852225: jbe 0x852234 */ if ((fC||fZ)) goto L_00852234;
L_00852227:; BB(0x00852227);
    /* 00852227: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 0085222d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852230: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852232: jmp 0x85226d */ goto L_0085226d;
L_00852234:; BB(0x00852234);
    /* 00852234: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 0085223a: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085223d: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 0085223f: jmp 0x85226d */ goto L_0085226d;
L_00852241:; BB(0x00852241);
    /* 00852241: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852244: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852246: fcom qword ptr [0x995ad0] */ fx_compare(ST(0), R_F64((u32)(0x995ad0u))); 
    /* 0085224c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0085224e: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852252: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00852253: jbe 0x852262 */ if ((fC||fZ)) goto L_00852262;
L_00852255:; BB(0x00852255);
    /* 00852255: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 0085225b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085225e: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852260: jmp 0x85226d */ goto L_0085226d;
L_00852262:; BB(0x00852262);
    /* 00852262: fld qword ptr [0x995af8] */ FPUSH(R_F64((u32)(0x995af8u)));
    /* 00852268: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085226b: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_0085226d:; BB(0x0085226d);
    /* 0085226d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852270: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852273: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852276: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852278: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085227c: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852280: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852282: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852286: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852288: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085228c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085228d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852293u); call_ind(t); }
    /* 00852293: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852296: je 0x856820 */ if (fZ) goto L_00856820;
L_0085229c:; BB(0x0085229c);
    /* 0085229c: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008522a0: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008522a3: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008522a5: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008521ff); r_esp += 4; return;
L_00856820:; BB(0x00856820);
    /* 00856820: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856825u); f_00859dd6();
    /* 00856825: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085682b: jmp 0x85229c */ goto L_0085229c;
}

void f_008522aa(void)
{
    FN_ENTER(0x008522aa);
    /* 008522aa: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 008522b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008522b3: mov dword ptr [esp + 4], 0xb482ec */ W32((u32)(r_esp+0x4u), 0xb482ecu);
    /* 008522bb: jne 0x8522f1 */ if (!fZ) goto L_008522f1;
L_008522bd:; BB(0x008522bd);
    /* 008522bd: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008522c0: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008522c6: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008522c8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008522ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008522cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008522ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008522d0: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008522d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008522d5: jbe 0x8522e4 */ if ((fC||fZ)) goto L_008522e4;
L_008522d7:; BB(0x008522d7);
    /* 008522d7: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 008522dd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008522e0: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008522e2: jmp 0x852323 */ goto L_00852323;
L_008522e4:; BB(0x008522e4);
    /* 008522e4: fld dword ptr [0x995acc] */ FPUSH(R_F32((u32)(0x995accu)));
    /* 008522ea: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008522ed: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008522ef: jmp 0x852323 */ goto L_00852323;
L_008522f1:; BB(0x008522f1);
    /* 008522f1: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008522f4: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 008522fa: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008522fc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008522fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00852300: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00852302: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00852304: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852308: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00852309: jbe 0x852318 */ if ((fC||fZ)) goto L_00852318;
L_0085230b:; BB(0x0085230b);
    /* 0085230b: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00852311: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852314: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852316: jmp 0x852323 */ goto L_00852323;
L_00852318:; BB(0x00852318);
    /* 00852318: fld xword ptr [0x995b5a] */ FPUSH(R_F80((u32)(0x995b5au)));
    /* 0085231e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852321: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00852323:; BB(0x00852323);
    /* 00852323: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852326: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852329: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0085232c: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085232e: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852332: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852335: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852337: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085233b: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085233d: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852342: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852348u); call_ind(t); }
    /* 00852348: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085234b: je 0x856830 */ if (fZ) goto L_00856830;
L_00852351:; BB(0x00852351);
    /* 00852351: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00852355: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852358: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085235a: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008522aa); r_esp += 4; return;
L_00856830:; BB(0x00856830);
    /* 00856830: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856835u); f_00859dd6();
    /* 00856835: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085683b: jmp 0x852351 */ goto L_00852351;
}

void f_0085235f(void)
{
    FN_ENTER(0x0085235f);
    /* 0085235f: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00852367: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852369: mov dword ptr [esp + 0x64], 0xb487c0 */ W32((u32)(r_esp+0x64u), 0xb487c0u);
    /* 00852371: jne 0x8523bd */ if (!fZ) goto L_008523bd;
L_00852373:; BB(0x00852373);
    /* 00852373: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852376: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852379: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085237b: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0085237f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852381: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852385: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852388: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085238a: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0085238e: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852393: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852399u); call_ind(t); }
    /* 00852399: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085239a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085239c: jne 0x8523ec */ if (!fZ) goto L_008523ec;
L_0085239e:; BB(0x0085239e);
    /* 0085239e: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008523a3: push 0xb487cc */ { u32 v = 0xb487ccu; r_esp -= 4; W32(r_esp, v); }
    /* 008523a8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8523adu); f_0085b5fd();
    /* 008523ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008523b0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8523b5u); f_00859dd6();
    /* 008523b5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008523bb: jmp 0x8523ec */ goto L_008523ec;
L_008523bd:; BB(0x008523bd);
    /* 008523bd: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008523c0: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008523c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008523c5: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008523c9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008523cb: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008523cf: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008523d2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008523d4: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008523d8: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008523dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008523dd: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8523e3u); call_ind(t); }
    /* 008523e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008523e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008523e6: je 0x856840 */ if (fZ) goto L_00856840;
L_008523ec:; BB(0x008523ec);
    /* 008523ec: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008523f0: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008523f3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008523f5: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085235f); r_esp += 4; return;
L_00856840:; BB(0x00856840);
    /* 00856840: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856845u); f_00859dd6();
    /* 00856845: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085684b: jmp 0x8523ec */ goto L_008523ec;
}

void f_008523fa(void)
{
    FN_ENTER(0x008523fa);
    /* 008523fa: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 00852402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852404: mov dword ptr [esp + 0x44], 0xb48798 */ W32((u32)(r_esp+0x44u), 0xb48798u);
    /* 0085240c: jne 0x852458 */ if (!fZ) goto L_00852458;
L_0085240e:; BB(0x0085240e);
    /* 0085240e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852411: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852414: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852417: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852419: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085241d: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852421: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852423: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852427: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852429: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085242d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085242e: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852434u); call_ind(t); }
    /* 00852434: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852437: jne 0x852487 */ if (!fZ) goto L_00852487;
L_00852439:; BB(0x00852439);
    /* 00852439: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085243e: push 0xb487a4 */ { u32 v = 0xb487a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00852443: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852448u); f_0085b5fd();
    /* 00852448: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085244b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852450u); f_00859dd6();
    /* 00852450: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852456: jmp 0x852487 */ goto L_00852487;
L_00852458:; BB(0x00852458);
    /* 00852458: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085245b: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085245e: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852461: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852463: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852467: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085246b: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085246d: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852471: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852473: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852477: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852478: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85247eu); call_ind(t); }
    /* 0085247e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085247f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852481: je 0x856850 */ if (fZ) goto L_00856850;
L_00852487:; BB(0x00852487);
    /* 00852487: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085248b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085248e: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852490: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008523fa); r_esp += 4; return;
L_00856850:; BB(0x00856850);
    /* 00856850: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856855u); f_00859dd6();
    /* 00856855: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085685b: jmp 0x852487 */ goto L_00852487;
}

void f_0085244a(void)
{
    FN_ENTER(0x0085244a);
    /* 0085244a: or al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085244c: xchg byte ptr [ecx], bh */ { u32 x = R8((u32)(r_ecx)); u32 y = (u8)(r_ebx>>8); W8((u32)(r_ecx), y); r_ebx = (r_ebx & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 0085244f: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00852451: add byte ptr [ecx], ah */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00852453: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00852455: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00852457: das  */ UNSUP(0x00852457, "das ");
    /* 00852458: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085245b: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0085245e: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852461: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852463: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852467: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085246b: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085246d: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852471: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852473: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852477: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852478: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x85247eu); call_ind(t); }
    /* 0085247e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085247f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852481: je 0x856850 */ if (fZ) goto L_00856850;
L_00852487:; BB(0x00852487);
    /* 00852487: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085248b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085248e: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852490: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085244a); r_esp += 4; return;
L_00856850:; BB(0x00856850);
    /* 00856850: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856855u); f_00859dd6();
    /* 00856855: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085685b: jmp 0x852487 */ goto L_00852487;
}

void f_00852495(void)
{
    FN_ENTER(0x00852495);
    /* 00852495: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0085249c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085249e: mov dword ptr [esp + 4], 0xb48770 */ W32((u32)(r_esp+0x4u), 0xb48770u);
    /* 008524a6: jne 0x8524f1 */ if (!fZ) goto L_008524f1;
L_008524a8:; BB(0x008524a8);
    /* 008524a8: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008524ab: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008524ae: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008524b1: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008524b3: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008524b7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008524ba: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008524bc: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008524c0: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008524c2: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008524c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008524c7: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8524cdu); call_ind(t); }
    /* 008524cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008524ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008524d0: jne 0x85251f */ if (!fZ) goto L_0085251f;
L_008524d2:; BB(0x008524d2);
    /* 008524d2: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008524d7: push 0xb4877c */ { u32 v = 0xb4877cu; r_esp -= 4; W32(r_esp, v); }
    /* 008524dc: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8524e1u); f_0085b5fd();
    /* 008524e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008524e4: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8524e9u); f_00859dd6();
    /* 008524e9: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008524ef: jmp 0x85251f */ goto L_0085251f;
L_008524f1:; BB(0x008524f1);
    /* 008524f1: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008524f4: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008524f7: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008524fa: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008524fc: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852500: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852503: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852505: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852509: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085250b: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0085250f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852510: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852516u); call_ind(t); }
    /* 00852516: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852517: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852519: je 0x856860 */ if (fZ) goto L_00856860;
L_0085251f:; BB(0x0085251f);
    /* 0085251f: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00852523: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852526: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852528: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852495); r_esp += 4; return;
L_00856860:; BB(0x00856860);
    /* 00856860: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856865u); f_00859dd6();
    /* 00856865: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085686b: jmp 0x85251f */ goto L_0085251f;
}

void f_0085252d(void)
{
    FN_ENTER(0x0085252d);
    /* 0085252d: mov dword ptr [esp + 0x60], 1 */ W32((u32)(r_esp+0x60u), 0x1u);
    /* 00852535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852537: mov dword ptr [esp + 0x64], 0xb48750 */ W32((u32)(r_esp+0x64u), 0xb48750u);
    /* 0085253f: jne 0x852595 */ if (!fZ) goto L_00852595;
L_00852541:; BB(0x00852541);
    /* 00852541: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852544: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852547: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00852549: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085254c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0085254e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852550: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00852554: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00852557: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852559: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085255d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852560: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852562: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852566: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0085256a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085256b: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852571u); call_ind(t); }
    /* 00852571: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852574: jne 0x8525c4 */ if (!fZ) goto L_008525c4;
L_00852576:; BB(0x00852576);
    /* 00852576: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085257b: push 0xb48758 */ { u32 v = 0xb48758u; r_esp -= 4; W32(r_esp, v); }
    /* 00852580: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852585u); f_0085b5fd();
    /* 00852585: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852588: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85258du); f_00859dd6();
    /* 0085258d: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852593: jmp 0x8525c4 */ goto L_008525c4;
L_00852595:; BB(0x00852595);
    /* 00852595: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852598: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085259b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085259d: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008525a1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008525a3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008525a7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008525aa: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008525ac: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008525b0: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008525b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008525b5: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8525bbu); call_ind(t); }
    /* 008525bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008525bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008525be: je 0x856870 */ if (fZ) goto L_00856870;
L_008525c4:; BB(0x008525c4);
    /* 008525c4: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008525c8: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008525cb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008525cd: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085252d); r_esp += 4; return;
L_00856870:; BB(0x00856870);
    /* 00856870: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856875u); f_00859dd6();
    /* 00856875: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085687b: jmp 0x8525c4 */ goto L_008525c4;
}

void f_008525d2(void)
{
    FN_ENTER(0x008525d2);
    /* 008525d2: mov dword ptr [esp + 0x40], 1 */ W32((u32)(r_esp+0x40u), 0x1u);
    /* 008525da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008525dc: mov dword ptr [esp + 0x44], 0xb48730 */ W32((u32)(r_esp+0x44u), 0xb48730u);
    /* 008525e4: jne 0x85263a */ if (!fZ) goto L_0085263a;
L_008525e6:; BB(0x008525e6);
    /* 008525e6: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008525e9: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008525ec: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008525ef: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008525f1: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008525f4: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 008525f6: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008525f8: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008525fc: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008525fe: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852601: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852605: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852607: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085260b: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085260f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852610: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852616u); call_ind(t); }
    /* 00852616: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852619: jne 0x852669 */ if (!fZ) goto L_00852669;
L_0085261b:; BB(0x0085261b);
    /* 0085261b: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852620: push 0xb48738 */ { u32 v = 0xb48738u; r_esp -= 4; W32(r_esp, v); }
    /* 00852625: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x85262au); f_0085b5fd();
    /* 0085262a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085262d: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852632u); f_00859dd6();
    /* 00852632: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852638: jmp 0x852669 */ goto L_00852669;
L_0085263a:; BB(0x0085263a);
    /* 0085263a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085263d: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852640: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852643: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852645: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852649: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085264d: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0085264f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852653: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852655: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085265a: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852660u); call_ind(t); }
    /* 00852660: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852661: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852663: je 0x856880 */ if (fZ) goto L_00856880;
L_00852669:; BB(0x00852669);
    /* 00852669: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085266d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852670: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852672: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008525d2); r_esp += 4; return;
L_00856880:; BB(0x00856880);
    /* 00856880: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856885u); f_00859dd6();
    /* 00856885: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085688b: jmp 0x852669 */ goto L_00852669;
}

void f_00852677(void)
{
    FN_ENTER(0x00852677);
    /* 00852677: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0085267e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852680: mov dword ptr [esp + 4], 0xb48710 */ W32((u32)(r_esp+0x4u), 0xb48710u);
    /* 00852688: jne 0x8526dd */ if (!fZ) goto L_008526dd;
L_0085268a:; BB(0x0085268a);
    /* 0085268a: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085268d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852690: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00852693: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852695: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00852698: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 0085269a: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 0085269c: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008526a0: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008526a2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008526a5: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008526a9: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008526ab: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008526af: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008526b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008526b3: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8526b9u); call_ind(t); }
    /* 008526b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008526ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008526bc: jne 0x85270b */ if (!fZ) goto L_0085270b;
L_008526be:; BB(0x008526be);
    /* 008526be: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 008526c3: push 0xb48718 */ { u32 v = 0xb48718u; r_esp -= 4; W32(r_esp, v); }
    /* 008526c8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8526cdu); f_0085b5fd();
    /* 008526cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008526d0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8526d5u); f_00859dd6();
    /* 008526d5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008526db: jmp 0x85270b */ goto L_0085270b;
L_008526dd:; BB(0x008526dd);
    /* 008526dd: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008526e0: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008526e3: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008526e6: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008526e8: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008526ec: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008526ef: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008526f1: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008526f5: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008526f7: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008526fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008526fc: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852702u); call_ind(t); }
    /* 00852702: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852705: je 0x856890 */ if (fZ) goto L_00856890;
L_0085270b:; BB(0x0085270b);
    /* 0085270b: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 0085270f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852712: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852714: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852677); r_esp += 4; return;
L_00856890:; BB(0x00856890);
    /* 00856890: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856895u); f_00859dd6();
    /* 00856895: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085689b: jmp 0x85270b */ goto L_0085270b;
}

void f_00852719(void)
{
    FN_ENTER(0x00852719);
    /* 00852719: mov dword ptr [esp + 0x60], 2 */ W32((u32)(r_esp+0x60u), 0x2u);
    /* 00852721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852723: mov dword ptr [esp + 0x64], 0xb48400 */ W32((u32)(r_esp+0x64u), 0xb48400u);
    /* 0085272b: jne 0x852781 */ if (!fZ) goto L_00852781;
L_0085272d:; BB(0x0085272d);
    /* 0085272d: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 00852732: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852735: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00852738: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085273a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085273c: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00852740: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00852743: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852745: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852749: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085274c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085274e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852752: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852757: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85275du); call_ind(t); }
    /* 0085275d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085275e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852760: jne 0x8527ba */ if (!fZ) goto L_008527ba;
L_00852762:; BB(0x00852762);
    /* 00852762: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852767: push 0xb48494 */ { u32 v = 0xb48494u; r_esp -= 4; W32(r_esp, v); }
    /* 0085276c: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852771u); f_0085b5fd();
    /* 00852771: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852774: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852779u); f_00859dd6();
    /* 00852779: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085277f: jmp 0x8527ba */ goto L_008527ba;
L_00852781:; BB(0x00852781);
    /* 00852781: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00852786: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852789: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0085278c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085278e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852790: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00852794: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00852797: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852799: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0085279d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008527a0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008527a2: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 008527a6: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 008527aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008527ab: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x8527b1u); call_ind(t); }
    /* 008527b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008527b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008527b4: je 0x8568a0 */ if (fZ) goto L_008568a0;
L_008527ba:; BB(0x008527ba);
    /* 008527ba: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 008527be: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008527c1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008527c3: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852719); r_esp += 4; return;
L_008568a0:; BB(0x008568a0);
    /* 008568a0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8568a5u); f_00859dd6();
    /* 008568a5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008568ab: jmp 0x8527ba */ goto L_008527ba;
}

void f_008527c8(void)
{
    FN_ENTER(0x008527c8);
    /* 008527c8: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 008527d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008527d2: mov dword ptr [esp + 0x64], 0xb48400 */ W32((u32)(r_esp+0x64u), 0xb48400u);
    /* 008527da: jne 0x8527e8 */ if (!fZ) goto L_008527e8;
L_008527dc:; BB(0x008527dc);
    /* 008527dc: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 008527e1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008527e4: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008527e6: jmp 0x8527f2 */ goto L_008527f2;
L_008527e8:; BB(0x008527e8);
    /* 008527e8: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 008527ed: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008527f0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_008527f2:; BB(0x008527f2);
    /* 008527f2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008527f5: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008527f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008527fa: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008527fe: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852800: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852804: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852807: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852809: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0085280d: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852812: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852818u); call_ind(t); }
    /* 00852818: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085281b: je 0x8568b0 */ if (fZ) goto L_008568b0;
L_00852821:; BB(0x00852821);
    /* 00852821: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00852825: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852828: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085282a: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008527c8); r_esp += 4; return;
L_008568b0:; BB(0x008568b0);
    /* 008568b0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8568b5u); f_00859dd6();
    /* 008568b5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008568bb: jmp 0x852821 */ goto L_00852821;
}

void f_0085282f(void)
{
    FN_ENTER(0x0085282f);
    /* 0085282f: mov dword ptr [esp + 0x40], 2 */ W32((u32)(r_esp+0x40u), 0x2u);
    /* 00852837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852839: mov dword ptr [esp + 0x44], 0xb483f8 */ W32((u32)(r_esp+0x44u), 0xb483f8u);
    /* 00852841: jne 0x852898 */ if (!fZ) goto L_00852898;
L_00852843:; BB(0x00852843);
    /* 00852843: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00852849: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085284c: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0085284f: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852852: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852854: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852857: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852859: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085285d: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0085285f: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852863: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852865: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852869: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085286d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085286e: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852874u); call_ind(t); }
    /* 00852874: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852875: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852877: jne 0x8528d2 */ if (!fZ) goto L_008528d2;
L_00852879:; BB(0x00852879);
    /* 00852879: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085287e: push 0xb48480 */ { u32 v = 0xb48480u; r_esp -= 4; W32(r_esp, v); }
    /* 00852883: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852888u); f_0085b5fd();
    /* 00852888: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085288b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852890u); f_00859dd6();
    /* 00852890: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852896: jmp 0x8528d2 */ goto L_008528d2;
L_00852898:; BB(0x00852898);
    /* 00852898: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 0085289e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008528a1: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008528a4: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008528a7: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008528a9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008528ac: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 008528ae: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 008528b2: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 008528b4: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008528b8: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 008528ba: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 008528be: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008528c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008528c3: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x8528c9u); call_ind(t); }
    /* 008528c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008528ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008528cc: je 0x8568c0 */ if (fZ) goto L_008568c0;
L_008528d2:; BB(0x008528d2);
    /* 008528d2: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 008528d6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008528d9: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008528db: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x0085282f); r_esp += 4; return;
L_008568c0:; BB(0x008568c0);
    /* 008568c0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8568c5u); f_00859dd6();
    /* 008568c5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008568cb: jmp 0x8528d2 */ goto L_008528d2;
}

void f_008528e0(void)
{
    FN_ENTER(0x008528e0);
    /* 008528e0: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 008528e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008528ea: mov dword ptr [esp + 0x44], 0xb483f8 */ W32((u32)(r_esp+0x44u), 0xb483f8u);
    /* 008528f2: jne 0x852901 */ if (!fZ) goto L_00852901;
L_008528f4:; BB(0x008528f4);
    /* 008528f4: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 008528fa: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008528fd: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 008528ff: jmp 0x85290c */ goto L_0085290c;
L_00852901:; BB(0x00852901);
    /* 00852901: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00852907: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085290a: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_0085290c:; BB(0x0085290c);
    /* 0085290c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0085290f: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852912: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852915: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852917: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0085291b: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 0085291f: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852921: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852925: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852927: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0085292b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085292c: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852932u); call_ind(t); }
    /* 00852932: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852935: je 0x8568d0 */ if (fZ) goto L_008568d0;
L_0085293b:; BB(0x0085293b);
    /* 0085293b: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0085293f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852942: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852944: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008528e0); r_esp += 4; return;
L_008568d0:; BB(0x008568d0);
    /* 008568d0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8568d5u); f_00859dd6();
    /* 008568d5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008568db: jmp 0x85293b */ goto L_0085293b;
}

void f_00852949(void)
{
    FN_ENTER(0x00852949);
    /* 00852949: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 00852950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852952: mov dword ptr [esp + 4], 0xb483f0 */ W32((u32)(r_esp+0x4u), 0xb483f0u);
    /* 0085295a: jne 0x8529b0 */ if (!fZ) goto L_008529b0;
L_0085295c:; BB(0x0085295c);
    /* 0085295c: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00852962: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852965: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852968: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085296b: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 0085296d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852970: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852972: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852976: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852978: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0085297c: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 0085297e: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852982: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852986: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x85298cu); call_ind(t); }
    /* 0085298c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085298d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085298f: jne 0x8529e9 */ if (!fZ) goto L_008529e9;
L_00852991:; BB(0x00852991);
    /* 00852991: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852996: push 0xb48468 */ { u32 v = 0xb48468u; r_esp -= 4; W32(r_esp, v); }
    /* 0085299b: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x8529a0u); f_0085b5fd();
    /* 008529a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008529a3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8529a8u); f_00859dd6();
    /* 008529a8: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008529ae: jmp 0x8529e9 */ goto L_008529e9;
L_008529b0:; BB(0x008529b0);
    /* 008529b0: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 008529b6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008529b9: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008529bc: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008529bf: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008529c1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008529c4: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 008529c6: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008529ca: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 008529cc: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 008529d0: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 008529d2: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008529d6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008529d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008529da: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x8529e0u); call_ind(t); }
    /* 008529e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008529e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008529e3: je 0x8568e0 */ if (fZ) goto L_008568e0;
L_008529e9:; BB(0x008529e9);
    /* 008529e9: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 008529ed: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008529f0: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 008529f2: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852949); r_esp += 4; return;
L_008568e0:; BB(0x008568e0);
    /* 008568e0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8568e5u); f_00859dd6();
    /* 008568e5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 008568eb: jmp 0x8529e9 */ goto L_008529e9;
}

void f_008529f7(void)
{
    FN_ENTER(0x008529f7);
    /* 008529f7: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 008529fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852a00: mov dword ptr [esp + 4], 0xb483f0 */ W32((u32)(r_esp+0x4u), 0xb483f0u);
    /* 00852a08: jne 0x852a17 */ if (!fZ) goto L_00852a17;
L_00852a0a:; BB(0x00852a0a);
    /* 00852a0a: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00852a10: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852a13: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852a15: jmp 0x852a22 */ goto L_00852a22;
L_00852a17:; BB(0x00852a17);
    /* 00852a17: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00852a1d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852a20: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00852a22:; BB(0x00852a22);
    /* 00852a22: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852a25: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852a28: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852a2b: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852a2d: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852a31: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852a34: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852a36: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852a3a: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852a3c: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852a40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852a41: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852a47u); call_ind(t); }
    /* 00852a47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852a48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852a4a: je 0x8568f0 */ if (fZ) goto L_008568f0;
L_00852a50:; BB(0x00852a50);
    /* 00852a50: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00852a54: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852a57: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852a59: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x008529f7); r_esp += 4; return;
L_008568f0:; BB(0x008568f0);
    /* 008568f0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8568f5u); f_00859dd6();
    /* 008568f5: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 008568fb: jmp 0x852a50 */ goto L_00852a50;
}

void f_00852a5e(void)
{
    FN_ENTER(0x00852a5e);
    /* 00852a5e: mov dword ptr [esp + 0x60], 2 */ W32((u32)(r_esp+0x60u), 0x2u);
    /* 00852a66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852a68: mov dword ptr [esp + 0x64], 0xb48418 */ W32((u32)(r_esp+0x64u), 0xb48418u);
    /* 00852a70: jne 0x852ac6 */ if (!fZ) goto L_00852ac6;
L_00852a72:; BB(0x00852a72);
    /* 00852a72: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 00852a77: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852a7a: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00852a7d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852a7f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852a81: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00852a85: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00852a88: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852a8a: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852a8e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852a91: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852a93: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852a97: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852a9c: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852aa2u); call_ind(t); }
    /* 00852aa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852aa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852aa5: jne 0x852aff */ if (!fZ) goto L_00852aff;
L_00852aa7:; BB(0x00852aa7);
    /* 00852aa7: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852aac: push 0xb48450 */ { u32 v = 0xb48450u; r_esp -= 4; W32(r_esp, v); }
    /* 00852ab1: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852ab6u); f_0085b5fd();
    /* 00852ab6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852ab9: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852abeu); f_00859dd6();
    /* 00852abe: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852ac4: jmp 0x852aff */ goto L_00852aff;
L_00852ac6:; BB(0x00852ac6);
    /* 00852ac6: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00852acb: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852ace: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00852ad1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852ad3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852ad5: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00852ad9: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00852adc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852ade: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852ae2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852ae5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852ae7: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852aeb: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852aef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852af0: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852af6u); call_ind(t); }
    /* 00852af6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852af7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852af9: je 0x856900 */ if (fZ) goto L_00856900;
L_00852aff:; BB(0x00852aff);
    /* 00852aff: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00852b03: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852b06: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852b08: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852a5e); r_esp += 4; return;
L_00856900:; BB(0x00856900);
    /* 00856900: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856905u); f_00859dd6();
    /* 00856905: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085690b: jmp 0x852aff */ goto L_00852aff;
}

void f_00852b0d(void)
{
    FN_ENTER(0x00852b0d);
    /* 00852b0d: mov dword ptr [esp + 0x60], 3 */ W32((u32)(r_esp+0x60u), 0x3u);
    /* 00852b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852b17: mov dword ptr [esp + 0x64], 0xb48418 */ W32((u32)(r_esp+0x64u), 0xb48418u);
    /* 00852b1f: jne 0x852b2d */ if (!fZ) goto L_00852b2d;
L_00852b21:; BB(0x00852b21);
    /* 00852b21: mov eax, dword ptr [0x995ac8] */ r_eax = R32((u32)(0x995ac8u));
    /* 00852b26: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852b29: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852b2b: jmp 0x852b37 */ goto L_00852b37;
L_00852b2d:; BB(0x00852b2d);
    /* 00852b2d: mov eax, dword ptr [0x995ac0] */ r_eax = R32((u32)(0x995ac0u));
    /* 00852b32: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852b35: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00852b37:; BB(0x00852b37);
    /* 00852b37: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852b3a: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852b3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00852b3f: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00852b43: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852b45: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852b49: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852b4c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852b4e: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852b52: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852b57: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852b5du); call_ind(t); }
    /* 00852b5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852b60: je 0x856910 */ if (fZ) goto L_00856910;
L_00852b66:; BB(0x00852b66);
    /* 00852b66: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00852b6a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852b6d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852b6f: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852b0d); r_esp += 4; return;
L_00856910:; BB(0x00856910);
    /* 00856910: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856915u); f_00859dd6();
    /* 00856915: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085691b: jmp 0x852b66 */ goto L_00852b66;
}

void f_00852b74(void)
{
    FN_ENTER(0x00852b74);
    /* 00852b74: mov dword ptr [esp + 0x40], 2 */ W32((u32)(r_esp+0x40u), 0x2u);
    /* 00852b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852b7e: mov dword ptr [esp + 0x44], 0xb48410 */ W32((u32)(r_esp+0x44u), 0xb48410u);
    /* 00852b86: jne 0x852bdd */ if (!fZ) goto L_00852bdd;
L_00852b88:; BB(0x00852b88);
    /* 00852b88: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00852b8e: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852b91: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852b94: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852b97: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852b99: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852b9c: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852b9e: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852ba2: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852ba4: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852ba8: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852baa: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852bae: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852bb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852bb3: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852bb9u); call_ind(t); }
    /* 00852bb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852bba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852bbc: jne 0x852c17 */ if (!fZ) goto L_00852c17;
L_00852bbe:; BB(0x00852bbe);
    /* 00852bbe: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852bc3: push 0xb48438 */ { u32 v = 0xb48438u; r_esp -= 4; W32(r_esp, v); }
    /* 00852bc8: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852bcdu); f_0085b5fd();
    /* 00852bcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852bd0: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852bd5u); f_00859dd6();
    /* 00852bd5: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852bdb: jmp 0x852c17 */ goto L_00852c17;
L_00852bdd:; BB(0x00852bdd);
    /* 00852bdd: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00852be3: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852be6: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852be9: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852bec: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852bee: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852bf1: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852bf3: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852bf7: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852bf9: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852bfd: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852bff: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852c03: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852c08: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852c0eu); call_ind(t); }
    /* 00852c0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852c0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852c11: je 0x856920 */ if (fZ) goto L_00856920;
L_00852c17:; BB(0x00852c17);
    /* 00852c17: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00852c1b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852c1e: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852c20: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852b74); r_esp += 4; return;
L_00856920:; BB(0x00856920);
    /* 00856920: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856925u); f_00859dd6();
    /* 00856925: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085692b: jmp 0x852c17 */ goto L_00852c17;
}

void f_00852c25(void)
{
    FN_ENTER(0x00852c25);
    /* 00852c25: mov dword ptr [esp + 0x40], 3 */ W32((u32)(r_esp+0x40u), 0x3u);
    /* 00852c2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852c2f: mov dword ptr [esp + 0x44], 0xb48410 */ W32((u32)(r_esp+0x44u), 0xb48410u);
    /* 00852c37: jne 0x852c46 */ if (!fZ) goto L_00852c46;
L_00852c39:; BB(0x00852c39);
    /* 00852c39: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00852c3f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852c42: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852c44: jmp 0x852c51 */ goto L_00852c51;
L_00852c46:; BB(0x00852c46);
    /* 00852c46: fld qword ptr [0x995af0] */ FPUSH(R_F64((u32)(0x995af0u)));
    /* 00852c4c: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852c4f: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
L_00852c51:; BB(0x00852c51);
    /* 00852c51: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852c54: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852c57: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852c5a: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852c5c: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852c60: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852c64: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852c66: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852c6a: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852c6c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852c71: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852c77u); call_ind(t); }
    /* 00852c77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852c78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852c7a: je 0x856930 */ if (fZ) goto L_00856930;
L_00852c80:; BB(0x00852c80);
    /* 00852c80: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00852c84: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852c87: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852c89: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852c25); r_esp += 4; return;
L_00856930:; BB(0x00856930);
    /* 00856930: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856935u); f_00859dd6();
    /* 00856935: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085693b: jmp 0x852c80 */ goto L_00852c80;
}

void f_00852c8e(void)
{
    FN_ENTER(0x00852c8e);
    /* 00852c8e: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 00852c95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852c97: mov dword ptr [esp + 4], 0xb48408 */ W32((u32)(r_esp+0x4u), 0xb48408u);
    /* 00852c9f: jne 0x852cf5 */ if (!fZ) goto L_00852cf5;
L_00852ca1:; BB(0x00852ca1);
    /* 00852ca1: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00852ca7: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852caa: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852cad: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852cb0: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852cb2: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852cb5: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852cb7: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852cbb: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852cbd: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852cc1: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852cc3: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852cc7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852ccb: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852cd1u); call_ind(t); }
    /* 00852cd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852cd4: jne 0x852d2e */ if (!fZ) goto L_00852d2e;
L_00852cd6:; BB(0x00852cd6);
    /* 00852cd6: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852cdb: push 0xb48420 */ { u32 v = 0xb48420u; r_esp -= 4; W32(r_esp, v); }
    /* 00852ce0: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852ce5u); f_0085b5fd();
    /* 00852ce5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852ce8: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852cedu); f_00859dd6();
    /* 00852ced: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 00852cf3: jmp 0x852d2e */ goto L_00852d2e;
L_00852cf5:; BB(0x00852cf5);
    /* 00852cf5: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00852cfb: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852cfe: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00852d01: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852d04: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852d06: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852d09: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852d0b: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852d0f: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852d11: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852d15: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852d17: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852d1b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852d1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852d1f: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852d25u); call_ind(t); }
    /* 00852d25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852d26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852d28: je 0x856940 */ if (fZ) goto L_00856940;
L_00852d2e:; BB(0x00852d2e);
    /* 00852d2e: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00852d32: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852d35: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852d37: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852c8e); r_esp += 4; return;
L_00856940:; BB(0x00856940);
    /* 00856940: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856945u); f_00859dd6();
    /* 00856945: mov dword ptr [eax], 0x21 */ W32((u32)(r_eax), 0x21u);
    /* 0085694b: jmp 0x852d2e */ goto L_00852d2e;
}

void f_00852d3c(void)
{
    FN_ENTER(0x00852d3c);
    /* 00852d3c: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 00852d43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852d45: mov dword ptr [esp + 4], 0xb48408 */ W32((u32)(r_esp+0x4u), 0xb48408u);
    /* 00852d4d: jne 0x852d5c */ if (!fZ) goto L_00852d5c;
L_00852d4f:; BB(0x00852d4f);
    /* 00852d4f: fld dword ptr [0x995ac8] */ FPUSH(R_F32((u32)(0x995ac8u)));
    /* 00852d55: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852d58: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852d5a: jmp 0x852d67 */ goto L_00852d67;
L_00852d5c:; BB(0x00852d5c);
    /* 00852d5c: fld xword ptr [0x995b50] */ FPUSH(R_F80((u32)(0x995b50u)));
    /* 00852d62: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852d65: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
L_00852d67:; BB(0x00852d67);
    /* 00852d67: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852d6a: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852d6d: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852d70: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852d72: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852d76: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852d79: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852d7b: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852d7f: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852d81: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852d85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852d86: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852d8cu); call_ind(t); }
    /* 00852d8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852d8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852d8f: je 0x856950 */ if (fZ) goto L_00856950;
L_00852d95:; BB(0x00852d95);
    /* 00852d95: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00852d99: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852d9c: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852d9e: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852d3c); r_esp += 4; return;
L_00856950:; BB(0x00856950);
    /* 00856950: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856955u); f_00859dd6();
    /* 00856955: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085695b: jmp 0x852d95 */ goto L_00852d95;
}

void f_00852da3(void)
{
    FN_ENTER(0x00852da3);
    /* 00852da3: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00852da8: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852dab: mov dword ptr [esp + 0x60], 5 */ W32((u32)(r_esp+0x60u), 0x5u);
    /* 00852db3: mov dword ptr [esp + 0x64], 0xb4856c */ W32((u32)(r_esp+0x64u), 0xb4856cu);
    /* 00852dbb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852dbd: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 00852dc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852dc5: jne 0x852e11 */ if (!fZ) goto L_00852e11;
L_00852dc7:; BB(0x00852dc7);
    /* 00852dc7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852dca: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852dcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00852dcf: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00852dd3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852dd5: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852dd9: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852ddc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852dde: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852de2: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852de7: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852dedu); call_ind(t); }
    /* 00852ded: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852dee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852df0: jne 0x852e40 */ if (!fZ) goto L_00852e40;
L_00852df2:; BB(0x00852df2);
    /* 00852df2: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852df7: push 0xb48570 */ { u32 v = 0xb48570u; r_esp -= 4; W32(r_esp, v); }
    /* 00852dfc: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852e01u); f_0085b5fd();
    /* 00852e01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852e04: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852e09u); f_00859dd6();
    /* 00852e09: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00852e0f: jmp 0x852e40 */ goto L_00852e40;
L_00852e11:; BB(0x00852e11);
    /* 00852e11: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852e14: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852e17: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00852e19: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00852e1d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852e1f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852e23: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852e26: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852e28: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852e2c: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852e31: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852e37u); call_ind(t); }
    /* 00852e37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852e38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852e3a: je 0x856960 */ if (fZ) goto L_00856960;
L_00852e40:; BB(0x00852e40);
    /* 00852e40: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00852e44: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852e47: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852e49: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852da3); r_esp += 4; return;
L_00856960:; BB(0x00856960);
    /* 00856960: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856965u); f_00859dd6();
    /* 00856965: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085696b: jmp 0x852e40 */ goto L_00852e40;
}

void f_00852e4e(void)
{
    FN_ENTER(0x00852e4e);
    /* 00852e4e: fld qword ptr [0x995ad0] */ FPUSH(R_F64((u32)(0x995ad0u)));
    /* 00852e54: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852e57: mov dword ptr [esp + 0x40], 5 */ W32((u32)(r_esp+0x40u), 0x5u);
    /* 00852e5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852e61: mov dword ptr [esp + 0x44], 0xb48554 */ W32((u32)(r_esp+0x44u), 0xb48554u);
    /* 00852e69: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 00852e6b: jne 0x852eb7 */ if (!fZ) goto L_00852eb7;
L_00852e6d:; BB(0x00852e6d);
    /* 00852e6d: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852e70: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852e73: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852e76: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852e78: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852e7c: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852e80: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852e82: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852e86: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852e88: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852e8d: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852e93u); call_ind(t); }
    /* 00852e93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852e94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852e96: jne 0x852ee6 */ if (!fZ) goto L_00852ee6;
L_00852e98:; BB(0x00852e98);
    /* 00852e98: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852e9d: push 0xb48558 */ { u32 v = 0xb48558u; r_esp -= 4; W32(r_esp, v); }
    /* 00852ea2: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852ea7u); f_0085b5fd();
    /* 00852ea7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852eaa: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852eafu); f_00859dd6();
    /* 00852eaf: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00852eb5: jmp 0x852ee6 */ goto L_00852ee6;
L_00852eb7:; BB(0x00852eb7);
    /* 00852eb7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852eba: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852ebd: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852ec0: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00852ec2: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00852ec6: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00852eca: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 00852ecc: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00852ed0: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00852ed2: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00852ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852ed7: call dword ptr [0xa237ec] */ { u32 t = R32((u32)(0xa237ecu)); r_esp -= 4; W32(r_esp, 0x852eddu); call_ind(t); }
    /* 00852edd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852ede: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852ee0: je 0x856970 */ if (fZ) goto L_00856970;
L_00852ee6:; BB(0x00852ee6);
    /* 00852ee6: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 00852eea: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852eed: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00852eef: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852e4e); r_esp += 4; return;
L_00856970:; BB(0x00856970);
    /* 00856970: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856975u); f_00859dd6();
    /* 00856975: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085697b: jmp 0x852ee6 */ goto L_00852ee6;
}

void f_00852ef4(void)
{
    FN_ENTER(0x00852ef4);
    /* 00852ef4: fld xword ptr [0x995b10] */ FPUSH(R_F80((u32)(0x995b10u)));
    /* 00852efa: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852efd: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 00852f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852f06: mov dword ptr [esp + 4], 0xb4853c */ W32((u32)(r_esp+0x4u), 0xb4853cu);
    /* 00852f0e: fstp xword ptr [edx] */ W_F80((u32)(r_edx), ST(0)); FPOP();
    /* 00852f10: jne 0x852f5b */ if (!fZ) goto L_00852f5b;
L_00852f12:; BB(0x00852f12);
    /* 00852f12: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852f15: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852f18: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852f1b: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852f1d: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852f21: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852f24: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852f26: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852f2a: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852f2c: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852f31: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852f37u); call_ind(t); }
    /* 00852f37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852f38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852f3a: jne 0x852f89 */ if (!fZ) goto L_00852f89;
L_00852f3c:; BB(0x00852f3c);
    /* 00852f3c: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852f41: push 0xb48540 */ { u32 v = 0xb48540u; r_esp -= 4; W32(r_esp, v); }
    /* 00852f46: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852f4bu); f_0085b5fd();
    /* 00852f4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852f4e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852f53u); f_00859dd6();
    /* 00852f53: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00852f59: jmp 0x852f89 */ goto L_00852f89;
L_00852f5b:; BB(0x00852f5b);
    /* 00852f5b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852f5e: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00852f61: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00852f64: fld xword ptr [eax] */ FPUSH(R_F80((u32)(r_eax)));
    /* 00852f66: fstp xword ptr [esp + 0x10] */ W_F80((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00852f6a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00852f6d: fld xword ptr [edx] */ FPUSH(R_F80((u32)(r_edx)));
    /* 00852f6f: fstp xword ptr [esp + 0x20] */ W_F80((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00852f73: fld xword ptr [ecx] */ FPUSH(R_F80((u32)(r_ecx)));
    /* 00852f75: fstp xword ptr [esp + 0x30] */ W_F80((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00852f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852f7a: call dword ptr [0xa237f0] */ { u32 t = R32((u32)(0xa237f0u)); r_esp -= 4; W32(r_esp, 0x852f80u); call_ind(t); }
    /* 00852f80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852f83: je 0x856980 */ if (fZ) goto L_00856980;
L_00852f89:; BB(0x00852f89);
    /* 00852f89: fld xword ptr [esp + 0x30] */ FPUSH(R_F80((u32)(r_esp+0x30u)));
    /* 00852f8d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852f90: fstp xword ptr [eax] */ W_F80((u32)(r_eax), ST(0)); FPOP();
    /* 00852f92: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852ef4); r_esp += 4; return;
L_00856980:; BB(0x00856980);
    /* 00856980: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856985u); f_00859dd6();
    /* 00856985: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085698b: jmp 0x852f89 */ goto L_00852f89;
}

void f_00852f97(void)
{
    FN_ENTER(0x00852f97);
    /* 00852f97: mov eax, dword ptr [0x995ab0] */ r_eax = R32((u32)(0x995ab0u));
    /* 00852f9c: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00852f9f: mov dword ptr [esp + 0x60], 5 */ W32((u32)(r_esp+0x60u), 0x5u);
    /* 00852fa7: mov dword ptr [esp + 0x64], 0xb48524 */ W32((u32)(r_esp+0x64u), 0xb48524u);
    /* 00852faf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00852fb1: mov ecx, dword ptr [0xa237e4] */ r_ecx = R32((u32)(0xa237e4u));
    /* 00852fb7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00852fb9: jne 0x853005 */ if (!fZ) goto L_00853005;
L_00852fbb:; BB(0x00852fbb);
    /* 00852fbb: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00852fbe: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00852fc1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00852fc3: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00852fc7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00852fc9: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00852fcd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00852fd0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00852fd2: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00852fd6: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00852fda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00852fdb: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x852fe1u); call_ind(t); }
    /* 00852fe1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00852fe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00852fe4: jne 0x853034 */ if (!fZ) goto L_00853034;
L_00852fe6:; BB(0x00852fe6);
    /* 00852fe6: push 0xa23a20 */ { u32 v = 0xa23a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00852feb: push 0xb48528 */ { u32 v = 0xb48528u; r_esp -= 4; W32(r_esp, v); }
    /* 00852ff0: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x852ff5u); f_0085b5fd();
    /* 00852ff5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00852ff8: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x852ffdu); f_00859dd6();
    /* 00852ffd: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00853003: jmp 0x853034 */ goto L_00853034;
L_00853005:; BB(0x00853005);
    /* 00853005: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00853008: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0085300b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085300d: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00853011: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00853013: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00853017: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0085301a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085301c: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00853020: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 00853024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00853025: call dword ptr [0xa237e8] */ { u32 t = R32((u32)(0xa237e8u)); r_esp -= 4; W32(r_esp, 0x85302bu); call_ind(t); }
    /* 0085302b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085302c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085302e: je 0x856990 */ if (fZ) goto L_00856990;
L_00853034:; BB(0x00853034);
    /* 00853034: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00853038: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0085303b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0085303d: jmp 0x85666c */ goto L_0085666c;
L_0085666c:; BB(0x0085666c);
    /* 0085666c: mov esp, ebx */ r_esp = r_ebx;
    /* 0085666e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085666f: ret  */ FN_RET(0x00852f97); r_esp += 4; return;
L_00856990:; BB(0x00856990);
    /* 00856990: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x856995u); f_00859dd6();
    /* 00856995: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 0085699b: jmp 0x853034 */ goto L_00853034;
}

