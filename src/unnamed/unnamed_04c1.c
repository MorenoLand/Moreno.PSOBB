#include "protos.h"

void f_004c1070(void) /* sub_4C1070 */
{
    FN_ENTER(0x004c1070);
    /* 004c1070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c1071: mov ebp, esp */ r_ebp = r_esp;
    /* 004c1073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c1075: push 0x8d1538 */ { u32 v = 0x8d1538u; r_esp -= 4; W32(r_esp, v); }
    /* 004c107a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c1080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1081: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c1088: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c108b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c108e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004c1091: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004c1094: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004c1097: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004c109a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c109d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c10a0: ja 0x4c158b */ if ((!fC&&!fZ)) goto L_004c158b;
L_004c10a6:; BB(0x004c10a6);
    /* 004c10a6: mov eax, dword ptr [eax*4 + 0x90793c] */ r_eax = R32((u32)(r_eax*4+0x90793cu));
    /* 004c10ad: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c1070); r_esp += 8; return;
}

void f_004c10af(void)
{
    FN_ENTER(0x004c10af);
    /* 004c10af: mov eax, ecx */ r_eax = r_ecx;
    /* 004c10b1: mov edx, dword ptr [eax + 0x85c] */ r_edx = R32((u32)(r_eax+0x85cu));
    /* 004c10b7: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c10ba: je 0x4c15a4 */ if (fZ) goto L_004c15a4;
L_004c10c0:; BB(0x004c10c0);
    /* 004c10c0: jmp 0x4c158b */ goto L_004c158b;
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c10af); r_esp += 8; return;
L_004c15a4:; BB(0x004c15a4);
    /* 004c15a4: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 004c15aa: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c15ad: je 0x4c15be */ if (fZ) goto L_004c15be;
L_004c15af:; BB(0x004c15af);
    /* 004c15af: mov eax, dword ptr [eax + 0x67c] */ r_eax = R32((u32)(r_eax+0x67cu));
    /* 004c15b5: mov edx, eax */ r_edx = r_eax;
    /* 004c15b7: mov ecx, 0x9080e0 */ r_ecx = 0x9080e0u;
    /* 004c15bc: jmp 0x4c15da */ goto L_004c15da;
L_004c15be:; BB(0x004c15be);
    /* 004c15be: mov eax, dword ptr [eax + 0x67c] */ r_eax = R32((u32)(r_eax+0x67cu));
    /* 004c15c4: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c15c7: jge 0x4c15d2 */ if ((fS==fO)) goto L_004c15d2;
L_004c15c9:; BB(0x004c15c9);
    /* 004c15c9: mov edx, eax */ r_edx = r_eax;
    /* 004c15cb: mov ecx, 0x9088c0 */ r_ecx = 0x9088c0u;
    /* 004c15d0: jmp 0x4c15da */ goto L_004c15da;
L_004c15d2:; BB(0x004c15d2);
    /* 004c15d2: lea edx, [eax - 0x32] */ r_edx = (u32)(r_eax+0xffffffceu);
    /* 004c15d5: mov ecx, 0x908160 */ r_ecx = 0x908160u;
L_004c15da:; BB(0x004c15da);
    /* 004c15da: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004c15dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c15e0: cmp edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c15e3: jne 0x4c15f8 */ if (!fZ) goto L_004c15f8;
L_004c15e5:; BB(0x004c15e5);
    /* 004c15e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c15e8: mov dword ptr [edx + 0x67c], 0 */ W32((u32)(r_edx+0x67cu), 0x0u);
    /* 004c15f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c15f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c15f6: jmp 0x4c15da */ goto L_004c15da;
L_004c15f8:; BB(0x004c15f8);
    /* 004c15f8: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c15fb: je 0x4c1611 */ if (fZ) goto L_004c1611;
L_004c15fd:; BB(0x004c15fd);
    /* 004c15fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1601: mov dword ptr [ecx + 0x67c], eax */ W32((u32)(r_ecx+0x67cu), r_eax);
    /* 004c1607: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c160cu); f_004c3074();
    /* 004c160c: jmp 0x4c158b */ goto L_004c158b;
L_004c1611:; BB(0x004c1611);
    /* 004c1611: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1614: mov dword ptr [edx + 0x67c], 0x32 */ W32((u32)(r_edx+0x67cu), 0x32u);
    /* 004c161e: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c1623: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c1625: jmp 0x4c15da */ goto L_004c15da;
}

void f_004c10c5(void)
{
    FN_ENTER(0x004c10c5);
    /* 004c10c5: call 0x4c0b34 */ r_esp -= 4; W32(r_esp, 0x4c10cau); f_004c0b34();
    /* 004c10ca: jmp 0x4c158b */ goto L_004c158b;
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c10c5); r_esp += 8; return;
}

void f_004c10cf(void)
{
    FN_ENTER(0x004c10cf);
    /* 004c10cf: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x4c10d4u); f_0052126c();
    /* 004c10d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c10d6: je 0x4c10e2 */ if (fZ) goto L_004c10e2;
L_004c10d8:; BB(0x004c10d8);
    /* 004c10d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c10db: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4c10e0u); f_005213d8();
    /* 004c10e0: jmp 0x4c1128 */ goto L_004c1128;
L_004c10e2:; BB(0x004c10e2);
    /* 004c10e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c10e5: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 004c10e8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c10edu); f_0082dcbc();
    /* 004c10ed: fmul dword ptr [0xa48528] */ ST(0) = ST(0) * R_F32((u32)(0xa48528u));
    /* 004c10f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c10f6: fadd dword ptr [edx + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x418u));
    /* 004c10fc: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004c10ff: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 004c1102: fstp dword ptr [edx + 0x39c] */ W_F32((u32)(r_edx+0x39cu), ST(0)); FPOP();
    /* 004c1108: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 004c110e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c1113u); f_0082ddd8();
    /* 004c1113: fmul dword ptr [0xa48528] */ ST(0) = ST(0) * R_F32((u32)(0xa48528u));
    /* 004c1119: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c111c: fadd dword ptr [eax + 0x420] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x420u));
    /* 004c1122: fstp dword ptr [eax + 0x3a4] */ W_F32((u32)(r_eax+0x3a4u), ST(0)); FPOP();
L_004c1128:; BB(0x004c1128);
    /* 004c1128: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c112b: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c1130u); f_004c0b5c();
    /* 004c1130: jmp 0x4c158b */ goto L_004c158b;
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c10cf); r_esp += 8; return;
}

void f_004c1135(void)
{
    FN_ENTER(0x004c1135);
    /* 004c1135: mov eax, ecx */ r_eax = r_ecx;
    /* 004c1137: mov edx, dword ptr [eax + 0x8a4] */ r_edx = R32((u32)(r_eax+0x8a4u));
    /* 004c113d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c113f: je 0x4c115a */ if (fZ) goto L_004c115a;
L_004c1141:; BB(0x004c1141);
    /* 004c1141: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c1145: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c114a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c114e: mov edx, ecx */ r_edx = r_ecx;
    /* 004c1150: mov dword ptr [edx + 0x8a4], 0 */ W32((u32)(r_edx+0x8a4u), 0x0u);
L_004c115a:; BB(0x004c115a);
    /* 004c115a: mov eax, ecx */ r_eax = r_ecx;
    /* 004c115c: mov edx, dword ptr [eax + 0x8a8] */ r_edx = R32((u32)(r_eax+0x8a8u));
    /* 004c1162: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1164: je 0x4c117f */ if (fZ) goto L_004c117f;
L_004c1166:; BB(0x004c1166);
    /* 004c1166: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c116a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c116f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c1173: mov edx, ecx */ r_edx = r_ecx;
    /* 004c1175: mov dword ptr [edx + 0x8a8], 0 */ W32((u32)(r_edx+0x8a8u), 0x0u);
L_004c117f:; BB(0x004c117f);
    /* 004c117f: mov eax, ecx */ r_eax = r_ecx;
    /* 004c1181: mov edx, dword ptr [eax + 0x8ac] */ r_edx = R32((u32)(r_eax+0x8acu));
    /* 004c1187: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c1189: je 0x4c158b */ if (fZ) goto L_004c158b;
L_004c118f:; BB(0x004c118f);
    /* 004c118f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c1193: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c1198: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c119c: mov edx, ecx */ r_edx = r_ecx;
    /* 004c119e: mov dword ptr [edx + 0x8ac], 0 */ W32((u32)(r_edx+0x8acu), 0x0u);
    /* 004c11a8: jmp 0x4c158b */ goto L_004c158b;
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c1135); r_esp += 8; return;
}

void f_004c11ad(void)
{
    FN_ENTER(0x004c11ad);
    /* 004c11ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c11af: mov eax, 4 */ r_eax = 0x4u;
    /* 004c11b4: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004c11bb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c11c1u); call_ind(t); }
    /* 004c11c1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c11c4: mov dword ptr [ecx + 0x3ec], 0 */ W32((u32)(r_ecx+0x3ecu), 0x0u);
    /* 004c11ce: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c11d3u); f_004cb184();
    /* 004c11d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c11d6: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 004c11dc: mov dword ptr [ecx + 0x860], 2 */ W32((u32)(r_ecx+0x860u), 0x2u);
    /* 004c11e6: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c11e9: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 004c11ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c11f1: mov dword ptr [ecx + 0x85c], edx */ W32((u32)(r_ecx+0x85cu), r_edx);
    /* 004c11f7: mov dword ptr [ecx + 0x864], edx */ W32((u32)(r_ecx+0x864u), r_edx);
    /* 004c11fd: mov dword ptr [ecx + 0x8a4], edx */ W32((u32)(r_ecx+0x8a4u), r_edx);
    /* 004c1203: mov dword ptr [ecx + 0x8a8], edx */ W32((u32)(r_ecx+0x8a8u), r_edx);
    /* 004c1209: mov dword ptr [ecx + 0x8ac], edx */ W32((u32)(r_ecx+0x8acu), r_edx);
    /* 004c120f: jmp 0x4c158b */ goto L_004c158b;
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c11ad); r_esp += 8; return;
}

void f_004c1214(void)
{
    FN_ENTER(0x004c1214);
    /* 004c1214: mov eax, ecx */ r_eax = r_ecx;
    /* 004c1216: mov edx, dword ptr [eax + 0x85c] */ r_edx = R32((u32)(r_eax+0x85cu));
    /* 004c121c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c121f: je 0x4c1627 */ if (fZ) goto L_004c1627;
L_004c1225:; BB(0x004c1225);
    /* 004c1225: jmp 0x4c158b */ goto L_004c158b;
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c1214); r_esp += 8; return;
L_004c1627:; BB(0x004c1627);
    /* 004c1627: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1629: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c162b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c162d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c1633u); call_ind(t); }
    /* 004c1633: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1636: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c163a: mov ecx, dword ptr [edi + 0x67c] */ r_ecx = R32((u32)(r_edi+0x67cu));
    /* 004c1640: movzx ebx, word ptr [edi + 0x394] */ r_ebx = (u32)R16((u32)(r_edi+0x394u));
    /* 004c1647: mov esi, dword ptr [edi + 0x690] */ r_esi = R32((u32)(r_edi+0x690u));
    /* 004c164d: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c1652: mov byte ptr [ebp - 0x70], 0xa8 */ W8((u32)(r_ebp+0xffffff90u), 0xa8u);
    /* 004c1656: mov word ptr [ebp - 0x6e], ax */ W16((u32)(r_ebp+0xffffff92u), (u16)r_eax);
    /* 004c165a: mov eax, dword ptr [edi + 0x694] */ r_eax = R32((u32)(r_edi+0x694u));
    /* 004c1660: mov byte ptr [ebp - 0x6f], 6 */ W8((u32)(r_ebp+0xffffff91u), 0x6u);
    /* 004c1664: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
    /* 004c1668: mov word ptr [ebp - 0x6a], cx */ W16((u32)(r_ebp+0xffffff96u), (u16)r_ecx);
    /* 004c166c: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 004c166f: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 004c1672: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004c1675: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c167au); f_008587a5();
    /* 004c167a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004c167d: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 004c1680: fdiv dword ptr [0x908860] */ ST(0) = ST(0) / R_F32((u32)(0x908860u));
    /* 004c1686: fmul dword ptr [0x908864] */ ST(0) = ST(0) * R_F32((u32)(0x908864u));
    /* 004c168c: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 004c168f: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 004c1692: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 004c1696: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c169b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004c169e: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004c16a1: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c16a4: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 004c16a7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004c16aa: mov byte ptr [ebp - 0x5c], al */ W8((u32)(r_ebp+0xffffffa4u), (u8)r_eax);
    /* 004c16ad: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c16b2u); f_008003e0();
    /* 004c16b2: jmp 0x4c158b */ goto L_004c158b;
}

void f_004c122a(void)
{
    FN_ENTER(0x004c122a);
    /* 004c122a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c122fu); f_007aa094();
    /* 004c122f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1232: call 0x4c06c0 */ r_esp -= 4; W32(r_esp, 0x4c1237u); f_004c06c0();
    /* 004c1237: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c123a: mov eax, dword ptr [eax + 0x85c] */ r_eax = R32((u32)(r_eax+0x85cu));
    /* 004c1240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1242: je 0x4c1505 */ if (fZ) goto L_004c1505;
L_004c1248:; BB(0x004c1248);
    /* 004c1248: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c124b: jne 0x4c1499 */ if (!fZ) goto L_004c1499;
L_004c1251:; BB(0x004c1251);
    /* 004c1251: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1254: mov edx, dword ptr [eax + 0x864] */ r_edx = R32((u32)(r_eax+0x864u));
    /* 004c125a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c125d: mov dword ptr [eax + 0x864], edx */ W32((u32)(r_eax+0x864u), r_edx);
    /* 004c1263: cmp edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1266: jl 0x4c1308 */ if ((fS!=fO)) goto L_004c1308;
L_004c126c:; BB(0x004c126c);
    /* 004c126c: mov edx, eax */ r_edx = r_eax;
    /* 004c126e: mov eax, 6 */ r_eax = 0x6u;
    /* 004c1273: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004c127a: mov edx, dword ptr [edx + 0x8a4] */ r_edx = R32((u32)(r_edx+0x8a4u));
    /* 004c1280: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1282: je 0x4c129e */ if (fZ) goto L_004c129e;
L_004c1284:; BB(0x004c1284);
    /* 004c1284: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c1288: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c128d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c1291: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1294: mov dword ptr [edx + 0x8a4], 0 */ W32((u32)(r_edx+0x8a4u), 0x0u);
L_004c129e:; BB(0x004c129e);
    /* 004c129e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c12a1: mov edx, dword ptr [eax + 0x8a8] */ r_edx = R32((u32)(r_eax+0x8a8u));
    /* 004c12a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c12a9: je 0x4c12c5 */ if (fZ) goto L_004c12c5;
L_004c12ab:; BB(0x004c12ab);
    /* 004c12ab: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c12af: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c12b4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c12b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c12bb: mov dword ptr [edx + 0x8a8], 0 */ W32((u32)(r_edx+0x8a8u), 0x0u);
L_004c12c5:; BB(0x004c12c5);
    /* 004c12c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c12c8: mov edx, dword ptr [eax + 0x8ac] */ r_edx = R32((u32)(r_eax+0x8acu));
    /* 004c12ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c12d0: je 0x4c12ec */ if (fZ) goto L_004c12ec;
L_004c12d2:; BB(0x004c12d2);
    /* 004c12d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c12d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c12db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c12df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c12e2: mov dword ptr [edx + 0x8ac], 0 */ W32((u32)(r_edx+0x8acu), 0x0u);
L_004c12ec:; BB(0x004c12ec);
    /* 004c12ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c12ef: mov dword ptr [eax + 0x85c], 2 */ W32((u32)(r_eax+0x85cu), 0x2u);
    /* 004c12f9: mov dword ptr [eax + 0x860], 0 */ W32((u32)(r_eax+0x860u), 0x0u);
    /* 004c1303: jmp 0x4c158b */ goto L_004c158b;
L_004c1308:; BB(0x004c1308);
    /* 004c1308: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004c130e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c1311: jne 0x4c158b */ if (!fZ) goto L_004c158b;
L_004c1317:; BB(0x004c1317);
    /* 004c1317: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1319: lea edx, [ecx + 0x63c] */ r_edx = (u32)(r_ecx+0x63cu);
    /* 004c131f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c1321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1323: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1324: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1325: push 0x40e */ { u32 v = 0x40eu; r_esp -= 4; W32(r_esp, v); }
    /* 004c132a: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c132fu); f_008144b0();
    /* 004c132f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1332: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004c1335: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 004c1338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1339: lea ebx, [eax + 0x424] */ r_ebx = (u32)(r_eax+0x424u);
    /* 004c133f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004c1342: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1343: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1344: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x4c1349u); f_007a8d98();
    /* 004c1349: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c134c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c134f: mov edx, dword ptr [eax + 0x860] */ r_edx = R32((u32)(r_eax+0x860u));
    /* 004c1355: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c1358: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 004c135e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1361: jl 0x4c13c9 */ if ((fS!=fO)) goto L_004c13c9;
L_004c1363:; BB(0x004c1363);
    /* 004c1363: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 004c136a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c136c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4c1371u); f_005caba4();
    /* 004c1371: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c1372: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004c1375: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1377: je 0x4c13b5 */ if (fZ) goto L_004c13b5;
L_004c1379:; BB(0x004c1379);
    /* 004c1379: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 004c1380: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c1387: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c138a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c138d: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004c1391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1392: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 004c1398: push dword ptr [ebx + 0x76c] */ { u32 v = R32((u32)(r_ebx+0x76cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c139e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c139f: lea edi, [ebx + 0x418] */ r_edi = (u32)(r_ebx+0x418u);
    /* 004c13a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c13a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c13a7: mov ecx, eax */ r_ecx = r_eax;
    /* 004c13a9: call 0x4cf118 */ r_esp -= 4; W32(r_esp, 0x4c13aeu); f_004cf118();
    /* 004c13ae: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004c13b5:; BB(0x004c13b5);
    /* 004c13b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c13bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c13bf: mov dword ptr [eax + 0x860], 0 */ W32((u32)(r_eax+0x860u), 0x0u);
L_004c13c9:; BB(0x004c13c9);
    /* 004c13c9: mov ecx, dword ptr [eax + 0x8a4] */ r_ecx = R32((u32)(r_eax+0x8a4u));
    /* 004c13cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c13d1: je 0x4c16f2 */ if (fZ) goto L_004c16f2;
L_004c13d7:; BB(0x004c13d7);
    /* 004c13d7: lea edx, [eax + 0x430] */ r_edx = (u32)(r_eax+0x430u);
    /* 004c13dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c13de: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4c13e3u); f_00508db8();
    /* 004c13e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c13e6: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 004c13e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c13ea: mov ecx, dword ptr [edx + 0x8a4] */ r_ecx = R32((u32)(r_edx+0x8a4u));
    /* 004c13f0: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4c13f5u); f_00508dd0();
L_004c13f5:; BB(0x004c13f5);
    /* 004c13f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c13f8: mov eax, dword ptr [eax + 0x8a8] */ r_eax = R32((u32)(r_eax+0x8a8u));
    /* 004c13fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1400: jne 0x4c1442 */ if (!fZ) goto L_004c1442;
L_004c1402:; BB(0x004c1402);
    /* 004c1402: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1405: mov ecx, dword ptr [edx + 0x770] */ r_ecx = R32((u32)(r_edx+0x770u));
    /* 004c140b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004c140e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1411: je 0x4c1435 */ if (fZ) goto L_004c1435;
L_004c1413:; BB(0x004c1413);
    /* 004c1413: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1416: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004c1419: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c141b: lea ebx, [eax + 0x418] */ r_ebx = (u32)(r_eax+0x418u);
    /* 004c1421: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1423: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1424: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x4c1429u); f_00509dc4();
    /* 004c1429: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c142c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c142f: mov dword ptr [edx + 0x8a8], eax */ W32((u32)(r_edx+0x8a8u), r_eax);
L_004c1435:; BB(0x004c1435);
    /* 004c1435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1437: je 0x4c1465 */ if (fZ) goto L_004c1465;
L_004c1439:; BB(0x004c1439);
    /* 004c1439: mov ecx, eax */ r_ecx = r_eax;
    /* 004c143b: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4c1440u); f_00508f48();
    /* 004c1440: jmp 0x4c1465 */ goto L_004c1465;
L_004c1442:; BB(0x004c1442);
    /* 004c1442: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1445: lea ebx, [edx + 0x430] */ r_ebx = (u32)(r_edx+0x430u);
    /* 004c144b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c144c: mov ecx, eax */ r_ecx = r_eax;
    /* 004c144e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4c1453u); f_00508db8();
    /* 004c1453: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1456: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 004c1459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c145a: mov ecx, dword ptr [edx + 0x8a8] */ r_ecx = R32((u32)(r_edx+0x8a8u));
    /* 004c1460: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4c1465u); f_00508dd0();
L_004c1465:; BB(0x004c1465);
    /* 004c1465: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1468: mov ecx, dword ptr [eax + 0x8ac] */ r_ecx = R32((u32)(r_eax+0x8acu));
    /* 004c146e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1470: je 0x4c16b7 */ if (fZ) goto L_004c16b7;
L_004c1476:; BB(0x004c1476);
    /* 004c1476: lea edx, [eax + 0x430] */ r_edx = (u32)(r_eax+0x430u);
    /* 004c147c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c147d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4c1482u); f_00508db8();
    /* 004c1482: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1485: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 004c1488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1489: mov ecx, dword ptr [edx + 0x8ac] */ r_ecx = R32((u32)(r_edx+0x8acu));
    /* 004c148f: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4c1494u); f_00508dd0();
    /* 004c1494: jmp 0x4c158b */ goto L_004c158b;
L_004c1499:; BB(0x004c1499);
    /* 004c1499: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c149c: jne 0x4c158b */ if (!fZ) goto L_004c158b;
L_004c14a2:; BB(0x004c14a2);
    /* 004c14a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c14a5: mov edx, dword ptr [eax + 0x860] */ r_edx = R32((u32)(r_eax+0x860u));
    /* 004c14ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c14ae: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 004c14b4: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c14b7: jge 0x4c14d4 */ if ((fS==fO)) goto L_004c14d4;
L_004c14b9:; BB(0x004c14b9);
    /* 004c14b9: mov ecx, eax */ r_ecx = r_eax;
    /* 004c14bb: lea edx, [ecx + 0x63c] */ r_edx = (u32)(r_ecx+0x63cu);
    /* 004c14c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c14c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c14c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c14c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c14c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c14c7: push 0x40e */ { u32 v = 0x40eu; r_esp -= 4; W32(r_esp, v); }
    /* 004c14cc: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c14d1u); f_008144b0();
    /* 004c14d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c14d4:; BB(0x004c14d4);
    /* 004c14d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c14d7: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004c14dd: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c14e0: je 0x4c14e9 */ if (fZ) goto L_004c14e9;
L_004c14e2:; BB(0x004c14e2);
    /* 004c14e2: mov eax, 1 */ r_eax = 0x1u;
    /* 004c14e7: jmp 0x4c14eb */ goto L_004c14eb;
L_004c14e9:; BB(0x004c14e9);
    /* 004c14e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004c14eb:; BB(0x004c14eb);
    /* 004c14eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c14ed: je 0x4c158b */ if (fZ) goto L_004c158b;
L_004c14f3:; BB(0x004c14f3);
    /* 004c14f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c14f6: mov dword ptr [eax + 0x85c], 3 */ W32((u32)(r_eax+0x85cu), 0x3u);
    /* 004c1500: jmp 0x4c158b */ goto L_004c158b;
L_004c1505:; BB(0x004c1505);
    /* 004c1505: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1508: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c150du); f_00521410();
    /* 004c150d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1510: call 0x4c0e04 */ r_esp -= 4; W32(r_esp, 0x4c1515u); f_004c0e04();
    /* 004c1515: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1518: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 004c151e: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 004c1524: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c1526: fmul qword ptr [0x908298] */ ST(0) = ST(0) * R_F64((u32)(0x908298u));
    /* 004c152c: fdiv qword ptr [0x908290] */ ST(0) = ST(0) / R_F64((u32)(0x908290u));
    /* 004c1532: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1535: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 004c1538: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 004c153c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c1541: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004c1544: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004c1547: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c154a: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 004c154d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004c1550: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1555: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1556: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c1559: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c155eu); f_007a8c74();
    /* 004c155e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1561: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1564: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 004c156a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004c156d: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 004c1570: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c1573: je 0x4c158b */ if (fZ) goto L_004c158b;
L_004c1575:; BB(0x004c1575);
    /* 004c1575: mov dword ptr [edx + 0x85c], 1 */ W32((u32)(r_edx+0x85cu), 0x1u);
    /* 004c157f: mov eax, 5 */ r_eax = 0x5u;
    /* 004c1584: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_004c158b:; BB(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c122a); r_esp += 8; return;
L_004c16b7:; BB(0x004c16b7);
    /* 004c16b7: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004c16ba: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c16bc: mov edx, dword ptr [eax + 0x770] */ r_edx = R32((u32)(r_eax+0x770u));
    /* 004c16c2: lea ebx, [eax + 0x418] */ r_ebx = (u32)(r_eax+0x418u);
    /* 004c16c8: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c16cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c16cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c16cd: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x4c16d2u); f_00509dc4();
    /* 004c16d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c16d5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c16d8: mov dword ptr [edx + 0x8ac], eax */ W32((u32)(r_edx+0x8acu), r_eax);
    /* 004c16de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c16e0: je 0x4c158b */ if (fZ) goto L_004c158b;
L_004c16e6:; BB(0x004c16e6);
    /* 004c16e6: mov ecx, eax */ r_ecx = r_eax;
    /* 004c16e8: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4c16edu); f_00508f48();
    /* 004c16ed: jmp 0x4c158b */ goto L_004c158b;
L_004c16f2:; BB(0x004c16f2);
    /* 004c16f2: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004c16f5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c16f7: mov edx, dword ptr [eax + 0x770] */ r_edx = R32((u32)(r_eax+0x770u));
    /* 004c16fd: lea ebx, [eax + 0x418] */ r_ebx = (u32)(r_eax+0x418u);
    /* 004c1703: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c1706: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1707: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1708: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x4c170du); f_00509dc4();
    /* 004c170d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1710: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c1713: mov dword ptr [edx + 0x8a4], eax */ W32((u32)(r_edx+0x8a4u), r_eax);
    /* 004c1719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c171b: je 0x4c13f5 */ if (fZ) goto L_004c13f5;
L_004c1721:; BB(0x004c1721);
    /* 004c1721: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1723: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4c1728u); f_00508f48();
    /* 004c1728: jmp 0x4c13f5 */ goto L_004c13f5;
}

void f_004c158b(void)
{
    FN_ENTER(0x004c158b);
    /* 004c158b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c158e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c1591: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c1594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c1597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c159e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c15a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c15a1: ret 4 */ FN_RET(0x004c158b); r_esp += 8; return;
}

void f_004c1730(void) /* sub_4C1730 */
{
    FN_ENTER(0x004c1730);
    /* 004c1730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1731: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c1734: mov edi, ecx */ r_edi = r_ecx;
    /* 004c1736: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c173a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c173d: ja 0x4c1944 */ if ((!fC&&!fZ)) goto L_004c1944;
L_004c1743:; BB(0x004c1743);
    /* 004c1743: mov eax, dword ptr [eax*4 + 0x90796c] */ r_eax = R32((u32)(r_eax*4+0x90796cu));
    /* 004c174a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c1944:; BB(0x004c1944);
    /* 004c1944: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1948: ret 4 */ FN_RET(0x004c1730); r_esp += 8; return;
}

void f_004c174c(void)
{
    FN_ENTER(0x004c174c);
    /* 004c174c: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 004c1752: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c1754: je 0x4c1944 */ if (fZ) goto L_004c1944;
L_004c175a:; BB(0x004c175a);
    /* 004c175a: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c1760: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c1762: je 0x4c1773 */ if (fZ) goto L_004c1773;
L_004c1764:; BB(0x004c1764);
    /* 004c1764: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c176a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c176c: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c1771: jmp 0x4c178f */ goto L_004c178f;
L_004c1773:; BB(0x004c1773);
    /* 004c1773: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c1779: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c177c: jge 0x4c1787 */ if ((fS==fO)) goto L_004c1787;
L_004c177e:; BB(0x004c177e);
    /* 004c177e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1780: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c1785: jmp 0x4c178f */ goto L_004c178f;
L_004c1787:; BB(0x004c1787);
    /* 004c1787: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c178a: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c178f:; BB(0x004c178f);
    /* 004c178f: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c1792: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c1795: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1798: jne 0x4c194b */ if (!fZ) goto L_004c194b;
L_004c179e:; BB(0x004c179e);
    /* 004c179e: mov dword ptr [edi + 0x67c], 0 */ W32((u32)(r_edi+0x67cu), 0x0u);
    /* 004c17a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c17aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c17ac: jmp 0x4c178f */ goto L_004c178f;
L_004c1944:; BB(0x004c1944);
    /* 004c1944: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1948: ret 4 */ FN_RET(0x004c174c); r_esp += 8; return;
L_004c194b:; BB(0x004c194b);
    /* 004c194b: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c194e: je 0x4c1965 */ if (fZ) goto L_004c1965;
L_004c1950:; BB(0x004c1950);
    /* 004c1950: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c1951: mov dword ptr [edi + 0x67c], eax */ W32((u32)(r_edi+0x67cu), r_eax);
    /* 004c1957: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1959: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c195eu); f_004c3074();
    /* 004c195e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1961: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1962: ret 4 */ FN_RET(0x004c174c); r_esp += 8; return;
L_004c1965:; BB(0x004c1965);
    /* 004c1965: mov dword ptr [edi + 0x67c], 0x32 */ W32((u32)(r_edi+0x67cu), 0x32u);
    /* 004c196f: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c1974: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c1976: jmp 0x4c178f */ goto L_004c178f;
}

void f_004c17ae(void)
{
    FN_ENTER(0x004c17ae);
    /* 004c17ae: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004c17b0: mov eax, 7 */ r_eax = 0x7u;
    /* 004c17b5: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004c17bc: mov ecx, edi */ r_ecx = r_edi;
    /* 004c17be: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c17c4u); call_ind(t); }
    /* 004c17c4: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 004c17ce: mov ecx, edi */ r_ecx = r_edi;
    /* 004c17d0: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c17d5u); f_004cb184();
    /* 004c17d5: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c17db: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
    /* 004c17e1: mov dword ptr [edi + 0x85c], 0 */ W32((u32)(r_edi+0x85cu), 0x0u);
    /* 004c17eb: and eax, 0xffffffcb */ {  u32 a = r_eax; u32 b = 0xffffffcbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c17ee: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c17f1: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004c17f7: call 0x426b98 */ r_esp -= 4; W32(r_esp, 0x4c17fcu); f_00426b98();
    /* 004c17fc: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c17ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1800: ret 4 */ FN_RET(0x004c17ae); r_esp += 8; return;
}

void f_004c1803(void)
{
    FN_ENTER(0x004c1803);
    /* 004c1803: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 004c1809: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c180b: je 0x4c1944 */ if (fZ) goto L_004c1944;
L_004c1811:; BB(0x004c1811);
    /* 004c1811: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1813: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1815: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c1817: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1819: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c181fu); call_ind(t); }
    /* 004c181f: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c1823: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c1829: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c182d: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c1832: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c1837: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c183c: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c1842: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c1847: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c184c: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c1853: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c1857: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c185d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c1861: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c1865: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c186au); f_008587a5();
    /* 004c186a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004c186e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004c1872: fdiv dword ptr [0x908858] */ ST(0) = ST(0) / R_F32((u32)(0x908858u));
    /* 004c1878: fmul dword ptr [0x90885c] */ ST(0) = ST(0) * R_F32((u32)(0x90885cu));
    /* 004c187e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c1881: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004c1885: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004c188a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c188f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004c1893: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004c1897: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c189b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c189f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004c18a3: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c18a7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c18acu); f_008003e0();
    /* 004c18ac: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c18af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c18b0: ret 4 */ FN_RET(0x004c1803); r_esp += 8; return;
L_004c1944:; BB(0x004c1944);
    /* 004c1944: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1948: ret 4 */ FN_RET(0x004c1803); r_esp += 8; return;
}

void f_004c18b3(void)
{
    FN_ENTER(0x004c18b3);
    /* 004c18b3: mov ecx, edi */ r_ecx = r_edi;
    /* 004c18b5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c18bau); f_007aa094();
    /* 004c18ba: add dword ptr [edi + 0x85c], 1 */ { u32 ad = (u32)(r_edi+0x85cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c18c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c18c3: mov ecx, edi */ r_ecx = r_edi;
    /* 004c18c5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c18cau); f_007aaa30();
    /* 004c18ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c18cc: jne 0x4c18de */ if (!fZ) goto L_004c18de;
L_004c18ce:; BB(0x004c18ce);
    /* 004c18ce: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c18d3: mov ecx, edi */ r_ecx = r_edi;
    /* 004c18d5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c18dau); f_007aaa30();
    /* 004c18da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c18dc: je 0x4c18f6 */ if (fZ) goto L_004c18f6;
L_004c18de:; BB(0x004c18de);
    /* 004c18de: lea edx, [edi + 0x63c] */ r_edx = (u32)(r_edi+0x63cu);
    /* 004c18e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c18e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c18e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c18e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c18e9: push 0x40a */ { u32 v = 0x40au; r_esp -= 4; W32(r_esp, v); }
    /* 004c18ee: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c18f3u); f_00814298();
    /* 004c18f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c18f6:; BB(0x004c18f6);
    /* 004c18f6: mov eax, dword ptr [edi + 0x85c] */ r_eax = R32((u32)(r_edi+0x85cu));
    /* 004c18fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c18ff: jle 0x4c1944 */ if ((fZ||fS!=fO)) goto L_004c1944;
L_004c1901:; BB(0x004c1901);
    /* 004c1901: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1906: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1908: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c190du); f_007aaa30();
    /* 004c190d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c190f: je 0x4c191e */ if (fZ) goto L_004c191e;
L_004c1911:; BB(0x004c1911);
    /* 004c1911: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
    /* 004c1917: call 0x426b88 */ r_esp -= 4; W32(r_esp, 0x4c191cu); f_00426b88();
    /* 004c191c: jmp 0x4c1939 */ goto L_004c1939;
L_004c191e:; BB(0x004c191e);
    /* 004c191e: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1923: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1925: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c192au); f_007aaa30();
    /* 004c192a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c192c: je 0x4c1939 */ if (fZ) goto L_004c1939;
L_004c192e:; BB(0x004c192e);
    /* 004c192e: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
    /* 004c1934: call 0x426b98 */ r_esp -= 4; W32(r_esp, 0x4c1939u); f_00426b98();
L_004c1939:; BB(0x004c1939);
    /* 004c1939: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
    /* 004c193f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c1941: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4c1944u); call_ind(t); }
L_004c1944:; BB(0x004c1944);
    /* 004c1944: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1948: ret 4 */ FN_RET(0x004c18b3); r_esp += 8; return;
}

void f_004c1944(void)
{
    FN_ENTER(0x004c1944);
    /* 004c1944: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1947: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1948: ret 4 */ FN_RET(0x004c1944); r_esp += 8; return;
}

void f_004c197c(void) /* sub_4C197C */
{
    FN_ENTER(0x004c197c);
    /* 004c197c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c197d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c197e: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c1981: mov edi, ecx */ r_edi = r_ecx;
    /* 004c1983: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004c1987: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c198a: ja 0x4c1d52 */ if ((!fC&&!fZ)) goto L_004c1d52;
L_004c1990:; BB(0x004c1990);
    /* 004c1990: mov eax, dword ptr [eax*4 + 0x90799c] */ r_eax = R32((u32)(r_eax*4+0x90799cu));
    /* 004c1997: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c1d52:; BB(0x004c1d52);
    /* 004c1d52: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1d57: ret 4 */ FN_RET(0x004c197c); r_esp += 8; return;
}

void f_004c1999(void)
{
    FN_ENTER(0x004c1999);
    /* 004c1999: mov eax, dword ptr [edi + 0x85c] */ r_eax = R32((u32)(r_edi+0x85cu));
    /* 004c199f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c19a2: jne 0x4c1d52 */ if (!fZ) goto L_004c1d52;
L_004c19a8:; BB(0x004c19a8);
    /* 004c19a8: jmp 0x4c1d5a */ goto L_004c1d5a;
L_004c1d52:; BB(0x004c1d52);
    /* 004c1d52: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1d57: ret 4 */ FN_RET(0x004c1999); r_esp += 8; return;
L_004c1d5a:; BB(0x004c1d5a);
    /* 004c1d5a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1d5c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004c1d5e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c1d60: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1d62: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c1d68u); call_ind(t); }
    /* 004c1d68: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c1d6c: mov esi, dword ptr [edi + 0x67c] */ r_esi = R32((u32)(r_edi+0x67cu));
    /* 004c1d72: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c1d78: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c1d7d: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c1d84: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c1d88: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 004c1d8d: mov edx, 0xf */ r_edx = 0xfu;
    /* 004c1d92: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c1d97: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c1d9c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c1da0: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c1da6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c1daa: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c1dae: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c1db3u); f_008587a5();
    /* 004c1db3: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004c1db7: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004c1dbb: fdiv dword ptr [0x908840] */ ST(0) = ST(0) / R_F32((u32)(0x908840u));
    /* 004c1dc1: fmul dword ptr [0x908844] */ ST(0) = ST(0) * R_F32((u32)(0x908844u));
    /* 004c1dc7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c1dca: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 004c1dce: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 004c1dd3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c1dd8: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004c1ddc: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c1de0: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c1de4: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 004c1de8: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004c1dec: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c1df0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c1df5u); f_008003e0();
    /* 004c1df5: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1df8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1df9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1dfa: ret 4 */ FN_RET(0x004c1999); r_esp += 8; return;
}

void f_004c19ad(void)
{
    FN_ENTER(0x004c19ad);
    /* 004c19ad: mov eax, dword ptr [edi + 0x85c] */ r_eax = R32((u32)(r_edi+0x85cu));
    /* 004c19b3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c19b6: jne 0x4c1d52 */ if (!fZ) goto L_004c1d52;
L_004c19bc:; BB(0x004c19bc);
    /* 004c19bc: jmp 0x4c1dfd */ goto L_004c1dfd;
L_004c1d52:; BB(0x004c1d52);
    /* 004c1d52: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1d57: ret 4 */ FN_RET(0x004c19ad); r_esp += 8; return;
L_004c1dfd:; BB(0x004c1dfd);
    /* 004c1dfd: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c1e03: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c1e05: je 0x4c1e16 */ if (fZ) goto L_004c1e16;
L_004c1e07:; BB(0x004c1e07);
    /* 004c1e07: mov edx, dword ptr [edi + 0x67c] */ r_edx = R32((u32)(r_edi+0x67cu));
    /* 004c1e0d: mov eax, edx */ r_eax = r_edx;
    /* 004c1e0f: mov esi, 0x9080e0 */ r_esi = 0x9080e0u;
    /* 004c1e14: jmp 0x4c1e32 */ goto L_004c1e32;
L_004c1e16:; BB(0x004c1e16);
    /* 004c1e16: mov edx, dword ptr [edi + 0x67c] */ r_edx = R32((u32)(r_edi+0x67cu));
    /* 004c1e1c: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c1e1f: jge 0x4c1e2a */ if ((fS==fO)) goto L_004c1e2a;
L_004c1e21:; BB(0x004c1e21);
    /* 004c1e21: mov eax, edx */ r_eax = r_edx;
    /* 004c1e23: mov esi, 0x9088c0 */ r_esi = 0x9088c0u;
    /* 004c1e28: jmp 0x4c1e32 */ goto L_004c1e32;
L_004c1e2a:; BB(0x004c1e2a);
    /* 004c1e2a: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004c1e2d: mov esi, 0x908160 */ r_esi = 0x908160u;
L_004c1e32:; BB(0x004c1e32);
    /* 004c1e32: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 004c1e35: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c1e38: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1e3b: jne 0x4c1e4d */ if (!fZ) goto L_004c1e4d;
L_004c1e3d:; BB(0x004c1e3d);
    /* 004c1e3d: mov dword ptr [edi + 0x67c], 0 */ W32((u32)(r_edi+0x67cu), 0x0u);
    /* 004c1e47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c1e49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c1e4b: jmp 0x4c1e32 */ goto L_004c1e32;
L_004c1e4d:; BB(0x004c1e4d);
    /* 004c1e4d: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1e50: je 0x4c1e68 */ if (fZ) goto L_004c1e68;
L_004c1e52:; BB(0x004c1e52);
    /* 004c1e52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1e53: mov dword ptr [edi + 0x67c], edx */ W32((u32)(r_edi+0x67cu), r_edx);
    /* 004c1e59: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1e5b: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c1e60u); f_004c3074();
    /* 004c1e60: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1e63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1e64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1e65: ret 4 */ FN_RET(0x004c19ad); r_esp += 8; return;
L_004c1e68:; BB(0x004c1e68);
    /* 004c1e68: mov dword ptr [edi + 0x67c], 0x32 */ W32((u32)(r_edi+0x67cu), 0x32u);
    /* 004c1e72: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004c1e77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c1e79: jmp 0x4c1e32 */ goto L_004c1e32;
}

void f_004c19c1(void)
{
    FN_ENTER(0x004c19c1);
    /* 004c19c1: mov ecx, edi */ r_ecx = r_edi;
    /* 004c19c3: call 0x4c0b34 */ r_esp -= 4; W32(r_esp, 0x4c19c8u); f_004c0b34();
    /* 004c19c8: jmp 0x4c1d52 */ goto L_004c1d52;
L_004c1d52:; BB(0x004c1d52);
    /* 004c1d52: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1d57: ret 4 */ FN_RET(0x004c19c1); r_esp += 8; return;
}

void f_004c19cd(void)
{
    FN_ENTER(0x004c19cd);
    /* 004c19cd: lea eax, [edi + 0x39c] */ r_eax = (u32)(r_edi+0x39cu);
    /* 004c19d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c19d4: mov ecx, edi */ r_ecx = r_edi;
    /* 004c19d6: call 0x4c1e7c */ r_esp -= 4; W32(r_esp, 0x4c19dbu); f_004c1e7c();
    /* 004c19db: mov ecx, edi */ r_ecx = r_edi;
    /* 004c19dd: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c19e2u); f_004c0b5c();
    /* 004c19e2: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c19e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c19e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c19e7: ret 4 */ FN_RET(0x004c19cd); r_esp += 8; return;
}

void f_004c19ea(void)
{
    FN_ENTER(0x004c19ea);
    /* 004c19ea: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 004c19f0: mov edx, dword ptr [edi + 0x3ac] */ r_edx = R32((u32)(r_edi+0x3acu));
    /* 004c19f6: mov esi, dword ptr [edi + 0x3b0] */ r_esi = R32((u32)(r_edi+0x3b0u));
    /* 004c19fc: mov dword ptr [edi + 0x5e8], eax */ W32((u32)(r_edi+0x5e8u), r_eax);
    /* 004c1a02: mov dword ptr [edi + 0x5ec], edx */ W32((u32)(r_edi+0x5ecu), r_edx);
    /* 004c1a08: mov dword ptr [edi + 0x5f0], esi */ W32((u32)(r_edi+0x5f0u), r_esi);
    /* 004c1a0e: jmp 0x4c1d52 */ goto L_004c1d52;
L_004c1d52:; BB(0x004c1d52);
    /* 004c1d52: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1d57: ret 4 */ FN_RET(0x004c19ea); r_esp += 8; return;
}

void f_004c1a13(void)
{
    FN_ENTER(0x004c1a13);
    /* 004c1a13: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004c1a15: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004c1a1a: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004c1a21: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1a23: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c1a29u); call_ind(t); }
    /* 004c1a29: mov dword ptr [edi + 0x3ec], 1 */ W32((u32)(r_edi+0x3ecu), 0x1u);
    /* 004c1a33: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1a35: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4c1a3au); f_004c1f00();
    /* 004c1a3a: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c1a40: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c1a43: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004c1a49: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1a4b: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c1a50u); f_00521410();
    /* 004c1a50: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004c1a56: fld dword ptr [0x908820] */ FPUSH(R_F32((u32)(0x908820u)));
    /* 004c1a5c: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 004c1a5f: mov eax, dword ptr [edi + 0x3b4] */ r_eax = R32((u32)(r_edi+0x3b4u));
    /* 004c1a65: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1a68: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004c1a6c: mov dword ptr [esp], 0x3dcccccd */ W32((u32)(r_esp), 0x3dcccccdu);
    /* 004c1a73: lea ecx, [edi + 0x5f4] */ r_ecx = (u32)(r_edi+0x5f4u);
    /* 004c1a79: mov dword ptr [esp + 4], 0xbdcccccd */ W32((u32)(r_esp+0x4u), 0xbdcccccdu);
    /* 004c1a81: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c1a85: call 0x783444 */ r_esp -= 4; W32(r_esp, 0x4c1a8au); f_00783444();
    /* 004c1a8a: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 004c1a90: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 004c1a96: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c1a98: fmul qword ptr [0x908288] */ ST(0) = ST(0) * R_F64((u32)(0x908288u));
    /* 004c1a9e: fdiv qword ptr [0x908280] */ ST(0) = ST(0) / R_F64((u32)(0x908280u));
    /* 004c1aa4: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 004c1aa8: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 004c1aad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c1ab2: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004c1ab6: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c1aba: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c1abe: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 004c1ac2: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004c1ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ac7: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c1aca: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4c1acfu); f_007a900c();
    /* 004c1acf: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1ad1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1ad4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004c1ad6: jl 0x4c1ae4 */ if ((fS!=fO)) goto L_004c1ae4;
L_004c1ad8:; BB(0x004c1ad8);
    /* 004c1ad8: mov dword ptr [edi + 0x65c], 1 */ W32((u32)(r_edi+0x65cu), 0x1u);
    /* 004c1ae2: jmp 0x4c1af0 */ goto L_004c1af0;
L_004c1ae4:; BB(0x004c1ae4);
    /* 004c1ae4: mov dword ptr [edi + 0x65c], 0xffffffff */ W32((u32)(r_edi+0x65cu), 0xffffffffu);
    /* 004c1aee: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_004c1af0:; BB(0x004c1af0);
    /* 004c1af0: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004c1af6: fld dword ptr [0x908820] */ FPUSH(R_F32((u32)(0x908820u)));
    /* 004c1afc: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 004c1aff: fmul dword ptr [0x908834] */ ST(0) = ST(0) * R_F32((u32)(0x908834u));
    /* 004c1b05: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 004c1b09: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 004c1b0e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c1b13: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004c1b17: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c1b1b: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c1b1f: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 004c1b23: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1b26: fild dword ptr [esp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x5cu)));
    /* 004c1b2a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004c1b2e: lea eax, [edi + 0x618] */ r_eax = (u32)(r_edi+0x618u);
    /* 004c1b34: mov dword ptr [esp], 0x41800000 */ W32((u32)(r_esp), 0x41800000u);
    /* 004c1b3b: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 004c1b3f: fild dword ptr [esp + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x64u)));
    /* 004c1b43: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c1b47: mov ecx, eax */ r_ecx = r_eax;
    /* 004c1b49: mov dword ptr [esp + 4], 0xc1800000 */ W32((u32)(r_esp+0x4u), 0xc1800000u);
    /* 004c1b51: call 0x783444 */ r_esp -= 4; W32(r_esp, 0x4c1b56u); f_00783444();
    /* 004c1b56: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 004c1b59: mov dword ptr [edi + 0x85c], 0 */ W32((u32)(r_edi+0x85cu), 0x0u);
    /* 004c1b63: mov dword ptr [edi + 0x86c], eax */ W32((u32)(r_edi+0x86cu), r_eax);
    /* 004c1b69: mov dword ptr [edi + 0x874], 0 */ W32((u32)(r_edi+0x874u), 0x0u);
    /* 004c1b73: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1b76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1b77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1b78: ret 4 */ FN_RET(0x004c1a13); r_esp += 8; return;
}

void f_004c1b7b(void)
{
    FN_ENTER(0x004c1b7b);
    /* 004c1b7b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b7d: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004c1b7f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c1b81: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1b83: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c1b89u); call_ind(t); }
    /* 004c1b89: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c1b8d: mov esi, dword ptr [edi + 0x67c] */ r_esi = R32((u32)(r_edi+0x67cu));
    /* 004c1b93: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c1b99: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c1b9e: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c1ba5: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c1baa: mov word ptr [esp + 0x1e], si */ W16((u32)(r_esp+0x1eu), (u16)r_esi);
    /* 004c1baf: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004c1bb4: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c1bb9: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c1bbe: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c1bc2: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c1bc8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c1bcc: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c1bd0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c1bd5u); f_008587a5();
    /* 004c1bd5: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004c1bd9: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004c1bdd: fdiv dword ptr [0x908840] */ ST(0) = ST(0) / R_F32((u32)(0x908840u));
    /* 004c1be3: fmul dword ptr [0x908844] */ ST(0) = ST(0) * R_F32((u32)(0x908844u));
    /* 004c1be9: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c1bed: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 004c1bf1: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 004c1bf6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c1bfb: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004c1bff: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c1c03: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c1c07: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 004c1c0b: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004c1c0f: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c1c13: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c1c18u); f_008003e0();
    /* 004c1c18: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1c1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1c1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1c1d: ret 4 */ FN_RET(0x004c1b7b); r_esp += 8; return;
}

void f_004c1c20(void)
{
    FN_ENTER(0x004c1c20);
    /* 004c1c20: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1c22: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c1c27u); f_007aa094();
    /* 004c1c27: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1c29: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c1c2eu); f_004c53d8();
    /* 004c1c2e: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1c30: call 0x4c1f18 */ r_esp -= 4; W32(r_esp, 0x4c1c35u); f_004c1f18();
    /* 004c1c35: mov eax, dword ptr [edi + 0x85c] */ r_eax = R32((u32)(r_edi+0x85cu));
    /* 004c1c3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1c3d: jne 0x4c1cc4 */ if (!fZ) goto L_004c1cc4;
L_004c1c43:; BB(0x004c1c43);
    /* 004c1c43: fld dword ptr [0x908824] */ FPUSH(R_F32((u32)(0x908824u)));
    /* 004c1c49: fadd dword ptr [edi + 0x874] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x874u));
    /* 004c1c4f: fst dword ptr [edi + 0x874] */ W_F32((u32)(r_edi+0x874u), ST(0));
    /* 004c1c55: lea esi, [edi + 0x618] */ r_esi = (u32)(r_edi+0x618u);
    /* 004c1c5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1c5c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c1c5f: mov ecx, esi */ r_ecx = r_esi;
    /* 004c1c61: call 0x782d28 */ r_esp -= 4; W32(r_esp, 0x4c1c66u); f_00782d28();
    /* 004c1c66: fild dword ptr [edi + 0x86c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x86cu)));
    /* 004c1c6c: fild dword ptr [edi + 0x65c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x65cu)));
    /* 004c1c72: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c1c74: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c1c76: push dword ptr [edi + 0x874] */ { u32 v = R32((u32)(r_edi+0x874u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c1c7c: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 004c1c80: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 004c1c85: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c1c8a: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c1c8e: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 004c1c92: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c1c95: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c1c99: mov ecx, esi */ r_ecx = r_esi;
    /* 004c1c9b: call 0x782d9c */ r_esp -= 4; W32(r_esp, 0x4c1ca0u); f_00782d9c();
    /* 004c1ca0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1ca2: je 0x4c1d52 */ if (fZ) goto L_004c1d52;
L_004c1ca8:; BB(0x004c1ca8);
    /* 004c1ca8: mov dword ptr [edi + 0x874], 0 */ W32((u32)(r_edi+0x874u), 0x0u);
    /* 004c1cb2: mov dword ptr [edi + 0x85c], 1 */ W32((u32)(r_edi+0x85cu), 0x1u);
    /* 004c1cbc: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1cbf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1cc0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1cc1: ret 4 */ FN_RET(0x004c1c20); r_esp += 8; return;
L_004c1cc4:; BB(0x004c1cc4);
    /* 004c1cc4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1cc7: jne 0x4c1d52 */ if (!fZ) goto L_004c1d52;
L_004c1ccd:; BB(0x004c1ccd);
    /* 004c1ccd: push dword ptr [edi + 0x874] */ { u32 v = R32((u32)(r_edi+0x874u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c1cd3: lea esi, [edi + 0x5f4] */ r_esi = (u32)(r_edi+0x5f4u);
    /* 004c1cd9: mov ecx, esi */ r_ecx = r_esi;
    /* 004c1cdb: call 0x782d28 */ r_esp -= 4; W32(r_esp, 0x4c1ce0u); f_00782d28();
    /* 004c1ce0: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004c1ce4: fld dword ptr [0x908824] */ FPUSH(R_F32((u32)(0x908824u)));
    /* 004c1cea: fadd dword ptr [edi + 0x874] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x874u));
    /* 004c1cf0: fst dword ptr [edi + 0x874] */ W_F32((u32)(r_edi+0x874u), ST(0));
    /* 004c1cf6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1cf7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c1cfa: mov ecx, esi */ r_ecx = r_esi;
    /* 004c1cfc: call 0x782d28 */ r_esp -= 4; W32(r_esp, 0x4c1d01u); f_00782d28();
    /* 004c1d01: fsub dword ptr [esp + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x5cu));
    /* 004c1d05: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 004c1d0b: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 004c1d11: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c1d13: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c1d15: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c1d17: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c1d19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c1d1b: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004c1d1f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004c1d23: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 004c1d2b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1d2d: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 004c1d31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1d32: call 0x4c0fcc */ r_esp -= 4; W32(r_esp, 0x4c1d37u); f_004c0fcc();
    /* 004c1d37: push dword ptr [edi + 0x874] */ { u32 v = R32((u32)(r_edi+0x874u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c1d3d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c1d3f: call 0x782d9c */ r_esp -= 4; W32(r_esp, 0x4c1d44u); f_00782d9c();
    /* 004c1d44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1d46: je 0x4c1d52 */ if (fZ) goto L_004c1d52;
L_004c1d48:; BB(0x004c1d48);
    /* 004c1d48: mov dword ptr [edi + 0x85c], 2 */ W32((u32)(r_edi+0x85cu), 0x2u);
L_004c1d52:; BB(0x004c1d52);
    /* 004c1d52: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1d57: ret 4 */ FN_RET(0x004c1c20); r_esp += 8; return;
}

void f_004c1d52(void)
{
    FN_ENTER(0x004c1d52);
    /* 004c1d52: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1d55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1d56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1d57: ret 4 */ FN_RET(0x004c1d52); r_esp += 8; return;
}

void f_004c1e7c(void) /* sub_4C1E7C */
{
    FN_ENTER(0x004c1e7c);
    /* 004c1e7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1e7d: mov edi, ecx */ r_edi = r_ecx;
    /* 004c1e7f: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c1e85: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c1e88: jge 0x4c1edd */ if ((fS==fO)) goto L_004c1edd;
L_004c1e8a:; BB(0x004c1e8a);
    /* 004c1e8a: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004c1e8d: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 004c1e90: mov dword ptr [edi + 0x3a0], 0 */ W32((u32)(r_edi+0x3a0u), 0x0u);
    /* 004c1e9a: mov dword ptr [edi + 0x39c], edx */ W32((u32)(r_edi+0x39cu), r_edx);
    /* 004c1ea0: mov dword ptr [edi + 0x3a4], eax */ W32((u32)(r_edi+0x3a4u), r_eax);
    /* 004c1ea6: lea eax, [edi + 0x39c] */ r_eax = (u32)(r_edi+0x39cu);
    /* 004c1eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1ead: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c1eb2u); f_007828e4();
    /* 004c1eb2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c1eb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1eb7: fld dword ptr [0x908818] */ FPUSH(R_F32((u32)(0x908818u)));
    /* 004c1ebd: fld dword ptr [edi + 0x39c] */ FPUSH(R_F32((u32)(r_edi+0x39cu)));
    /* 004c1ec3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c1ec5: fld dword ptr [edi + 0x3a4] */ FPUSH(R_F32((u32)(r_edi+0x3a4u)));
    /* 004c1ecb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c1ecd: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 004c1ed3: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 004c1ed9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1eda: ret 4 */ FN_RET(0x004c1e7c); r_esp += 8; return;
L_004c1edd:; BB(0x004c1edd);
    /* 004c1edd: mov dword ptr [edi + 0x39c], 0 */ W32((u32)(r_edi+0x39cu), 0x0u);
    /* 004c1ee7: mov dword ptr [edi + 0x3a0], 0 */ W32((u32)(r_edi+0x3a0u), 0x0u);
    /* 004c1ef1: mov dword ptr [edi + 0x3a4], 0 */ W32((u32)(r_edi+0x3a4u), 0x0u);
    /* 004c1efb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1efc: ret 4 */ FN_RET(0x004c1e7c); r_esp += 8; return;
}

void f_004c1f00(void) /* sub_4C1F00 */
{
    FN_ENTER(0x004c1f00);
    /* 004c1f00: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 004c1f06: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c1f09: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 004c1f0f: mov dword ptr [ecx + 0x3c], 0x43340000 */ W32((u32)(r_ecx+0x3cu), 0x43340000u);
    /* 004c1f16: ret  */ FN_RET(0x004c1f00); r_esp += 4; return;
}

void f_004c1f18(void) /* sub_4C1F18 */
{
    FN_ENTER(0x004c1f18);
    /* 004c1f18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f19: mov edi, ecx */ r_edi = r_ecx;
    /* 004c1f1b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1f1d: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f22: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c1f27u); f_007aaa30();
    /* 004c1f27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c1f29: je 0x4c1f32 */ if (fZ) goto L_004c1f32;
L_004c1f2b:; BB(0x004c1f2b);
    /* 004c1f2b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c1f2d: call 0x4c1f34 */ r_esp -= 4; W32(r_esp, 0x4c1f32u); f_004c1f34();
L_004c1f32:; BB(0x004c1f32);
    /* 004c1f32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c1f33: ret  */ FN_RET(0x004c1f18); r_esp += 4; return;
}

void f_004c1f34(void) /* sub_4C1F34 */
{
    FN_ENTER(0x004c1f34);
    /* 004c1f34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f35: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c1f38: mov esi, ecx */ r_esi = r_ecx;
    /* 004c1f3a: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004c1f3d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004c1f40: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c1f43: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 004c1f46: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c1f4a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c1f4e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c1f51: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f57: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4c1f5cu); f_00780630();
    /* 004c1f5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1f5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1f61: je 0x4c1f97 */ if (fZ) goto L_004c1f97;
L_004c1f63:; BB(0x004c1f63);
    /* 004c1f63: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004c1f66: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004c1f69: fcomp dword ptr [0x90880c] */ fx_compare(ST(0), R_F32((u32)(0x90880cu))); FPOP();
    /* 004c1f6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c1f71: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004c1f74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c1f75: jbe 0x4c1f7c */ if ((fC||fZ)) goto L_004c1f7c;
L_004c1f77:; BB(0x004c1f77);
    /* 004c1f77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1f7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1f7b: ret  */ FN_RET(0x004c1f34); r_esp += 4; return;
L_004c1f7c:; BB(0x004c1f7c);
    /* 004c1f7c: mov esi, dword ptr [esi + 0x770] */ r_esi = R32((u32)(r_esi+0x770u));
    /* 004c1f82: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c1f86: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c1f89: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f8b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c1f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f8f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c1f94u); f_0050b7a4();
    /* 004c1f94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c1f97:; BB(0x004c1f97);
    /* 004c1f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1f9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1f9b: ret  */ FN_RET(0x004c1f34); r_esp += 4; return;
}

void f_004c1f9c(void) /* sub_4C1F9C */
{
    FN_ENTER(0x004c1f9c);
    /* 004c1f9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c1f9d: mov ebp, esp */ r_ebp = r_esp;
    /* 004c1f9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c1fa1: push 0x8d15a8 */ { u32 v = 0x8d15a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c1fa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c1fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c1fad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c1fb4: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c1fba: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c1fbd: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 004c1fc0: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004c1fc3: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004c1fc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004c1fc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c1fcc: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c1fcf: ja 0x4c24f1 */ if ((!fC&&!fZ)) goto L_004c24f1;
L_004c1fd5:; BB(0x004c1fd5);
    /* 004c1fd5: mov eax, dword ptr [eax*4 + 0x9079cc] */ r_eax = R32((u32)(r_eax*4+0x9079ccu));
    /* 004c1fdc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c24f1:; BB(0x004c24f1);
    /* 004c24f1: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c24f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004c24f7: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c24fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c24fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c2504: mov esp, ebp */ r_esp = r_ebp;
    /* 004c2506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c2507: ret 4 */ FN_RET(0x004c1f9c); r_esp += 8; return;
}

void f_004c1fde(void)
{
    FN_ENTER(0x004c1fde);
    /* 004c1fde: mov eax, ecx */ r_eax = r_ecx;
    /* 004c1fe0: mov edx, dword ptr [eax + 0x85c] */ r_edx = R32((u32)(r_eax+0x85cu));
    /* 004c1fe6: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c1fe9: je 0x4c250a */ if (fZ) goto L_004c250a;
L_004c1fef:; BB(0x004c1fef);
    /* 004c1fef: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c24f1:; BB(0x004c24f1);
    /* 004c24f1: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c24f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004c24f7: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c24fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c24fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c2504: mov esp, ebp */ r_esp = r_ebp;
    /* 004c2506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c2507: ret 4 */ FN_RET(0x004c1fde); r_esp += 8; return;
L_004c250a:; BB(0x004c250a);
    /* 004c250a: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 004c2510: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c2513: je 0x4c2524 */ if (fZ) goto L_004c2524;
L_004c2515:; BB(0x004c2515);
    /* 004c2515: mov eax, dword ptr [eax + 0x67c] */ r_eax = R32((u32)(r_eax+0x67cu));
    /* 004c251b: mov edx, eax */ r_edx = r_eax;
    /* 004c251d: mov ecx, 0x9080e0 */ r_ecx = 0x9080e0u;
    /* 004c2522: jmp 0x4c2540 */ goto L_004c2540;
L_004c2524:; BB(0x004c2524);
    /* 004c2524: mov eax, dword ptr [eax + 0x67c] */ r_eax = R32((u32)(r_eax+0x67cu));
    /* 004c252a: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c252d: jge 0x4c2538 */ if ((fS==fO)) goto L_004c2538;
L_004c252f:; BB(0x004c252f);
    /* 004c252f: mov edx, eax */ r_edx = r_eax;
    /* 004c2531: mov ecx, 0x9088c0 */ r_ecx = 0x9088c0u;
    /* 004c2536: jmp 0x4c2540 */ goto L_004c2540;
L_004c2538:; BB(0x004c2538);
    /* 004c2538: lea edx, [eax - 0x32] */ r_edx = (u32)(r_eax+0xffffffceu);
    /* 004c253b: mov ecx, 0x908160 */ r_ecx = 0x908160u;
L_004c2540:; BB(0x004c2540);
    /* 004c2540: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004c2543: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c2546: cmp edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2549: jne 0x4c255e */ if (!fZ) goto L_004c255e;
L_004c254b:; BB(0x004c254b);
    /* 004c254b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c254e: mov dword ptr [edx + 0x67c], 0 */ W32((u32)(r_edx+0x67cu), 0x0u);
    /* 004c2558: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c255a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c255c: jmp 0x4c2540 */ goto L_004c2540;
L_004c255e:; BB(0x004c255e);
    /* 004c255e: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c2561: je 0x4c2577 */ if (fZ) goto L_004c2577;
L_004c2563:; BB(0x004c2563);
    /* 004c2563: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c2566: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c2567: mov dword ptr [ecx + 0x67c], eax */ W32((u32)(r_ecx+0x67cu), r_eax);
    /* 004c256d: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c2572u); f_004c3074();
    /* 004c2572: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c2577:; BB(0x004c2577);
    /* 004c2577: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c257a: mov dword ptr [edx + 0x67c], 0x32 */ W32((u32)(r_edx+0x67cu), 0x32u);
    /* 004c2584: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c2589: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c258b: jmp 0x4c2540 */ goto L_004c2540;
}

void f_004c1ff4(void)
{
    FN_ENTER(0x004c1ff4);
    /* 004c1ff4: mov eax, ecx */ r_eax = r_ecx;
    /* 004c1ff6: mov edx, dword ptr [eax + 0x8a4] */ r_edx = R32((u32)(r_eax+0x8a4u));
    /* 004c1ffc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c1ffe: je 0x4c24f1 */ if (fZ) goto L_004c24f1;
L_004c2004:; BB(0x004c2004);
    /* 004c2004: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004c2008: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c200d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004c2011: mov edx, ecx */ r_edx = r_ecx;
    /* 004c2013: mov dword ptr [edx + 0x8a4], 0 */ W32((u32)(r_edx+0x8a4u), 0x0u);
    /* 004c201d: jmp 0x4c24f1 */ goto L_004c24f1;
L_004c24f1:; BB(0x004c24f1);
    /* 004c24f1: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c24f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004c24f7: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c24fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c24fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c2504: mov esp, ebp */ r_esp = r_ebp;
    /* 004c2506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c2507: ret 4 */ FN_RET(0x004c1ff4); r_esp += 8; return;
}

