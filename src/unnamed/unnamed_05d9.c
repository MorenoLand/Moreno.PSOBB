#include "protos.h"

void f_005d901c(void) /* sub_5D901C */
{
    FN_ENTER(0x005d901c);
    /* 005d901c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d901d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9020: mov esi, ecx */ r_esi = r_ecx;
    /* 005d9022: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005d9028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d902a: je 0x5d9102 */ if (fZ) goto L_005d9102;
L_005d9030:; BB(0x005d9030);
    /* 005d9030: mov edx, dword ptr [eax + 0x340] */ r_edx = R32((u32)(r_eax+0x340u));
    /* 005d9036: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d9039: je 0x5d9102 */ if (fZ) goto L_005d9102;
L_005d903f:; BB(0x005d903f);
    /* 005d903f: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005d9042: test edx, 0x8000000 */ {  u32 a = r_edx; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9048: jne 0x5d9102 */ if (!fZ) goto L_005d9102;
L_005d904e:; BB(0x005d904e);
    /* 005d904e: mov edx, dword ptr [esi + 0xdc] */ r_edx = R32((u32)(r_esi+0xdcu));
    /* 005d9054: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d9057: jne 0x5d9102 */ if (!fZ) goto L_005d9102;
L_005d905d:; BB(0x005d905d);
    /* 005d905d: mov edx, dword ptr [eax + 0x68c] */ r_edx = R32((u32)(r_eax+0x68cu));
    /* 005d9063: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d9066: je 0x5d9073 */ if (fZ) goto L_005d9073;
L_005d9068:; BB(0x005d9068);
    /* 005d9068: mov edx, 1 */ r_edx = 0x1u;
    /* 005d906d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005d9071: jmp 0x5d9079 */ goto L_005d9079;
L_005d9073:; BB(0x005d9073);
    /* 005d9073: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d9075: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_005d9079:; BB(0x005d9079);
    /* 005d9079: fld dword ptr [eax + 0x690] */ FPUSH(R_F32((u32)(r_eax+0x690u)));
    /* 005d907f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005d9083: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5d9088u); f_0082d7b0();
    /* 005d9088: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005d908c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005d9090: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005d9094: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005d9097: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d9099: mov ebx, eax */ r_ebx = r_eax;
L_005d909b:; BB(0x005d909b);
    /* 005d909b: mov ebp, dword ptr [esi + ebx*4 + 0x1cc] */ r_ebp = R32((u32)(r_esi+r_ebx*4+0x1ccu));
    /* 005d90a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d90a5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d90a7: je 0x5d90ed */ if (fZ) goto L_005d90ed;
L_005d90a9:; BB(0x005d90a9);
    /* 005d90a9: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 005d90ac: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d90af: jne 0x5d90ed */ if (!fZ) goto L_005d90ed;
L_005d90b1:; BB(0x005d90b1);
    /* 005d90b1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d90b3: je 0x5d90e5 */ if (fZ) goto L_005d90e5;
L_005d90b5:; BB(0x005d90b5);
    /* 005d90b5: fld dword ptr [ebp + 0xdc] */ FPUSH(R_F32((u32)(r_ebp+0xdcu)));
    /* 005d90bb: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 005d90bf: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005d90c2: fstp dword ptr [ebp + 0xdc] */ W_F32((u32)(r_ebp+0xdcu), ST(0)); FPOP();
    /* 005d90c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d90ca: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d90cdu); call_ind(t); }
    /* 005d90cd: fld dword ptr [0x92cb58] */ FPUSH(R_F32((u32)(0x92cb58u)));
    /* 005d90d3: fdiv dword ptr [esp + 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x10u));
    /* 005d90d7: fmul dword ptr [ebp + 0xdc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xdcu));
    /* 005d90dd: fstp dword ptr [ebp + 0xdc] */ W_F32((u32)(r_ebp+0xdcu), ST(0)); FPOP();
    /* 005d90e3: jmp 0x5d90ed */ goto L_005d90ed;
L_005d90e5:; BB(0x005d90e5);
    /* 005d90e5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005d90e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d90ea: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5d90edu); call_ind(t); }
L_005d90ed:; BB(0x005d90ed);
    /* 005d90ed: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d90f0: jl 0x5d909b */ if ((fS!=fO)) goto L_005d909b;
L_005d90f2:; BB(0x005d90f2);
    /* 005d90f2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005d90f6: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005d90fa: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005d90fd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5d9102u); f_0082da80();
L_005d9102:; BB(0x005d9102);
    /* 005d9102: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9105: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9106: ret  */ FN_RET(0x005d901c); r_esp += 4; return;
}

void f_005d9108(void) /* sub_5D9108 */
{
    FN_ENTER(0x005d9108);
    /* 005d9108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9109: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d910a: mov esi, ecx */ r_esi = r_ecx;
    /* 005d910c: mov ecx, esi */ r_ecx = r_esi;
    /* 005d910e: call 0x5d91b4 */ r_esp -= 4; W32(r_esp, 0x5d9113u); f_005d91b4();
    /* 005d9113: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9115: call 0x5d19f8 */ r_esp -= 4; W32(r_esp, 0x5d911au); f_005d19f8();
    /* 005d911a: mov eax, dword ptr [esi + 0x1b0] */ r_eax = R32((u32)(r_esi+0x1b0u));
    /* 005d9120: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9122: je 0x5d9127 */ if (fZ) goto L_005d9127;
L_005d9124:; BB(0x005d9124);
    /* 005d9124: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9125: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9126: ret  */ FN_RET(0x005d9108); r_esp += 4; return;
L_005d9127:; BB(0x005d9127);
    /* 005d9127: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9129: call 0x5d91f0 */ r_esp -= 4; W32(r_esp, 0x5d912eu); f_005d91f0();
    /* 005d912e: mov ebp, eax */ r_ebp = r_eax;
    /* 005d9130: mov edx, dword ptr [esi + 0x1b0] */ r_edx = R32((u32)(r_esi+0x1b0u));
    /* 005d9136: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d9139: je 0x5d9152 */ if (fZ) goto L_005d9152;
L_005d913b:; BB(0x005d913b);
    /* 005d913b: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5d9140u); f_00807d60();
    /* 005d9140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9142: je 0x5d9124 */ if (fZ) goto L_005d9124;
L_005d9144:; BB(0x005d9144);
    /* 005d9144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9145: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9147: call 0x5d948c */ r_esp -= 4; W32(r_esp, 0x5d914cu); f_005d948c();
    /* 005d914c: mov edx, dword ptr [esi + 0x1b0] */ r_edx = R32((u32)(r_esi+0x1b0u));
L_005d9152:; BB(0x005d9152);
    /* 005d9152: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d9155: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d9158: ja 0x5d91a9 */ if ((!fC&&!fZ)) goto L_005d91a9;
L_005d915a:; BB(0x005d915a);
    /* 005d915a: mov eax, dword ptr [edx*4 + 0x92c8cc] */ r_eax = R32((u32)(r_edx*4+0x92c8ccu));
    /* 005d9161: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d9108); r_esp += 4; return;
}

void f_005d9163(void)
{
    FN_ENTER(0x005d9163);
    /* 005d9163: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9165: call 0x5d9c14 */ r_esp -= 4; W32(r_esp, 0x5d916au); f_005d9c14();
    /* 005d916a: jmp 0x5d91a9 */ goto L_005d91a9;
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d9163); r_esp += 4; return;
}

void f_005d916c(void)
{
    FN_ENTER(0x005d916c);
    /* 005d916c: mov ecx, esi */ r_ecx = r_esi;
    /* 005d916e: call 0x5d9d24 */ r_esp -= 4; W32(r_esp, 0x5d9173u); f_005d9d24();
    /* 005d9173: jmp 0x5d91a9 */ goto L_005d91a9;
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d916c); r_esp += 4; return;
}

void f_005d9175(void)
{
    FN_ENTER(0x005d9175);
    /* 005d9175: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9177: call 0x5d9dd0 */ r_esp -= 4; W32(r_esp, 0x5d917cu); f_005d9dd0();
    /* 005d917c: jmp 0x5d91a9 */ goto L_005d91a9;
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d9175); r_esp += 4; return;
}

void f_005d917e(void)
{
    FN_ENTER(0x005d917e);
    /* 005d917e: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9180: call 0x5d9e24 */ r_esp -= 4; W32(r_esp, 0x5d9185u); f_005d9e24();
    /* 005d9185: jmp 0x5d91a9 */ goto L_005d91a9;
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d917e); r_esp += 4; return;
}

void f_005d9187(void)
{
    FN_ENTER(0x005d9187);
    /* 005d9187: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9189: call 0x5d9e3c */ r_esp -= 4; W32(r_esp, 0x5d918eu); f_005d9e3c();
    /* 005d918e: jmp 0x5d91a9 */ goto L_005d91a9;
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d9187); r_esp += 4; return;
}

void f_005d9190(void)
{
    FN_ENTER(0x005d9190);
    /* 005d9190: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9192: call 0x5d9eb8 */ r_esp -= 4; W32(r_esp, 0x5d9197u); f_005d9eb8();
    /* 005d9197: jmp 0x5d91a9 */ goto L_005d91a9;
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d9190); r_esp += 4; return;
}

void f_005d9199(void)
{
    FN_ENTER(0x005d9199);
    /* 005d9199: mov ecx, esi */ r_ecx = r_esi;
    /* 005d919b: call 0x5d9ecc */ r_esp -= 4; W32(r_esp, 0x5d91a0u); f_005d9ecc();
    /* 005d91a0: jmp 0x5d91a9 */ goto L_005d91a9;
L_005d91a9:; BB(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d9199); r_esp += 4; return;
}

void f_005d91a2(void)
{
    FN_ENTER(0x005d91a2);
    /* 005d91a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005d91a4: call 0x5d9ee0 */ r_esp -= 4; W32(r_esp, 0x5d91a9u); f_005d9ee0();
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d91a2); r_esp += 4; return;
}

void f_005d91a9(void)
{
    FN_ENTER(0x005d91a9);
    /* 005d91a9: add dword ptr [esi + 0x1f0], 1 */ { u32 ad = (u32)(r_esi+0x1f0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d91b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d91b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d91b2: ret  */ FN_RET(0x005d91a9); r_esp += 4; return;
}

void f_005d91b4(void) /* sub_5D91B4 */
{
    FN_ENTER(0x005d91b4);
    /* 005d91b4: fld dword ptr [0x92cb54] */ FPUSH(R_F32((u32)(0x92cb54u)));
    /* 005d91ba: fld dword ptr [ecx + 0x1b4] */ FPUSH(R_F32((u32)(r_ecx+0x1b4u)));
    /* 005d91c0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005d91c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d91c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d91c5: je 0x5d91e9 */ if (fZ) goto L_005d91e9;
L_005d91c7:; BB(0x005d91c7);
    /* 005d91c7: fld dword ptr [0x92cb50] */ FPUSH(R_F32((u32)(0x92cb50u)));
    /* 005d91cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d91cf: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005d91d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d91d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d91d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d91d7: fstp dword ptr [ecx + 0x1b4] */ W_F32((u32)(r_ecx+0x1b4u), ST(0)); FPOP();
    /* 005d91dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d91de: jne 0x5d91e8 */ if (!fZ) goto L_005d91e8;
L_005d91e0:; BB(0x005d91e0);
    /* 005d91e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d91e2: mov dword ptr [ecx + 0x1b8], eax */ W32((u32)(r_ecx+0x1b8u), r_eax);
L_005d91e8:; BB(0x005d91e8);
    /* 005d91e8: ret  */ FN_RET(0x005d91b4); r_esp += 4; return;
L_005d91e9:; BB(0x005d91e9);
    /* 005d91e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d91eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d91ed: ret  */ FN_RET(0x005d91b4); r_esp += 4; return;
}

void f_005d91f0(void) /* sub_5D91F0 */
{
    FN_ENTER(0x005d91f0);
    /* 005d91f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d91f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d91f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d91f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d91f4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d91f7: mov edi, ecx */ r_edi = r_ecx;
    /* 005d91f9: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005d91ff: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d9201: jne 0x5d920d */ if (!fZ) goto L_005d920d;
L_005d9203:; BB(0x005d9203);
    /* 005d9203: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d9205: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9208: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d9209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d920a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d920b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d920c: ret  */ FN_RET(0x005d91f0); r_esp += 4; return;
L_005d920d:; BB(0x005d920d);
    /* 005d920d: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005d9213: movsx eax, word ptr [edx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2bcu));
    /* 005d921a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005d921e: movsx eax, word ptr [edi + 0x200] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x200u));
    /* 005d9225: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d9227: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 005d922b: movsx esi, word ptr [edx + 0x334] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 005d9232: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d9234: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9236: je 0x5d924c */ if (fZ) goto L_005d924c;
L_005d9238:; BB(0x005d9238);
    /* 005d9238: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d923a: jge 0x5d9245 */ if ((fS==fO)) goto L_005d9245;
L_005d923c:; BB(0x005d923c);
    /* 005d923c: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d923e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005d9241: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_005d9245:; BB(0x005d9245);
    /* 005d9245: mov word ptr [edi + 0x200], si */ W16((u32)(r_edi+0x200u), (u16)r_esi);
L_005d924c:; BB(0x005d924c);
    /* 005d924c: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005d924f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9254: je 0x5d9290 */ if (fZ) goto L_005d9290;
L_005d9256:; BB(0x005d9256);
    /* 005d9256: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9258: lea ebp, [edi + 0x1f8] */ r_ebp = (u32)(r_edi+0x1f8u);
    /* 005d925e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9260: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d9265u); f_005dbbe4();
    /* 005d9265: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9267: jne 0x5d92ac */ if (!fZ) goto L_005d92ac;
L_005d9269:; BB(0x005d9269);
    /* 005d9269: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5d926eu); f_007a61a4();
    /* 005d926e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9271: jne 0x5d9278 */ if (!fZ) goto L_005d9278;
L_005d9273:; BB(0x005d9273);
    /* 005d9273: mov ebx, 2 */ r_ebx = 0x2u;
L_005d9278:; BB(0x005d9278);
    /* 005d9278: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d927a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d927c: call 0x5dbbf0 */ r_esp -= 4; W32(r_esp, 0x5d9281u); f_005dbbf0();
    /* 005d9281: push -5 */ { u32 v = 0xfffffffbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9283: lea ecx, [edi + 0x1bc] */ r_ecx = (u32)(r_edi+0x1bcu);
    /* 005d9289: call 0x5dbfcc */ r_esp -= 4; W32(r_esp, 0x5d928eu); f_005dbfcc();
    /* 005d928e: jmp 0x5d92ac */ goto L_005d92ac;
L_005d9290:; BB(0x005d9290);
    /* 005d9290: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9292: lea ebp, [edi + 0x1f8] */ r_ebp = (u32)(r_edi+0x1f8u);
    /* 005d9298: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d929a: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d929fu); f_005dbbe4();
    /* 005d929f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d92a1: je 0x5d92ac */ if (fZ) goto L_005d92ac;
L_005d92a3:; BB(0x005d92a3);
    /* 005d92a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d92a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d92a7: call 0x5dbbfc */ r_esp -= 4; W32(r_esp, 0x5d92acu); f_005dbbfc();
L_005d92ac:; BB(0x005d92ac);
    /* 005d92ac: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005d92b0: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005d92b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d92b5: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d92b7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d92b9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d92bb: jge 0x5d92e7 */ if ((fS==fO)) goto L_005d92e7;
L_005d92bd:; BB(0x005d92bd);
    /* 005d92bd: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005d92c1: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 005d92c4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d92c6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d92c8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d92ca: jg 0x5d92e7 */ if ((!fZ&&fS==fO)) goto L_005d92e7;
L_005d92cc:; BB(0x005d92cc);
    /* 005d92cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d92ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d92d0: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d92d5u); f_005dbbe4();
    /* 005d92d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d92d7: jne 0x5d92fd */ if (!fZ) goto L_005d92fd;
L_005d92d9:; BB(0x005d92d9);
    /* 005d92d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d92db: or ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005d92de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d92e0: call 0x5dbbf0 */ r_esp -= 4; W32(r_esp, 0x5d92e5u); f_005dbbf0();
    /* 005d92e5: jmp 0x5d92fd */ goto L_005d92fd;
L_005d92e7:; BB(0x005d92e7);
    /* 005d92e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d92e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d92eb: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d92f0u); f_005dbbe4();
    /* 005d92f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d92f2: je 0x5d92fd */ if (fZ) goto L_005d92fd;
L_005d92f4:; BB(0x005d92f4);
    /* 005d92f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d92f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d92f8: call 0x5dbbfc */ r_esp -= 4; W32(r_esp, 0x5d92fdu); f_005dbbfc();
L_005d92fd:; BB(0x005d92fd);
    /* 005d92fd: movsx eax, word ptr [edi + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x1beu));
    /* 005d9304: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9307: jl 0x5d933a */ if ((fS!=fO)) goto L_005d933a;
L_005d9309:; BB(0x005d9309);
    /* 005d9309: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d930c: jle 0x5d932f */ if ((fZ||fS!=fO)) goto L_005d932f;
L_005d930e:; BB(0x005d930e);
    /* 005d930e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9310: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9312: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d9317u); f_005dbbe4();
    /* 005d9317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9319: jne 0x5d9359 */ if (!fZ) goto L_005d9359;
L_005d931b:; BB(0x005d931b);
    /* 005d931b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d931d: or ebx, 0xffffff08 */ {  u32 a = r_ebx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005d9323: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
    /* 005d9326: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9328: call 0x5dbbf0 */ r_esp -= 4; W32(r_esp, 0x5d932du); f_005dbbf0();
    /* 005d932d: jmp 0x5d9359 */ goto L_005d9359;
L_005d932f:; BB(0x005d932f);
    /* 005d932f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9331: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9333: call 0x5dbbfc */ r_esp -= 4; W32(r_esp, 0x5d9338u); f_005dbbfc();
    /* 005d9338: jmp 0x5d9359 */ goto L_005d9359;
L_005d933a:; BB(0x005d933a);
    /* 005d933a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d933c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d933e: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d9343u); f_005dbbe4();
    /* 005d9343: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9345: jne 0x5d9359 */ if (!fZ) goto L_005d9359;
L_005d9347:; BB(0x005d9347);
    /* 005d9347: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9349: or ebx, 0xffffff04 */ {  u32 a = r_ebx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005d934f: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
    /* 005d9352: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9354: call 0x5dbbf0 */ r_esp -= 4; W32(r_esp, 0x5d9359u); f_005dbbf0();
L_005d9359:; BB(0x005d9359);
    /* 005d9359: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d935f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d9361: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5d9364u); call_ind(t); }
    /* 005d9364: movsx edx, word ptr [edi + 0x1f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x1f8u));
    /* 005d936b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d936d: jge 0x5d938a */ if ((fS==fO)) goto L_005d938a;
L_005d936f:; BB(0x005d936f);
    /* 005d936f: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d9375: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d9377: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5d937au); call_ind(t); }
    /* 005d937a: mov word ptr [edi + 0x1f8], ax */ W16((u32)(r_edi+0x1f8u), (u16)r_eax);
    /* 005d9381: or ebx, 0xffffff20 */ {  u32 a = r_ebx; u32 b = 0xffffff20u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005d9387: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
L_005d938a:; BB(0x005d938a);
    /* 005d938a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5d938fu); f_00807ac0();
    /* 005d938f: movsx edx, word ptr [edi + 0x1fa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x1fau));
    /* 005d9396: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9398: je 0x5d93ae */ if (fZ) goto L_005d93ae;
L_005d939a:; BB(0x005d939a);
    /* 005d939a: mov word ptr [edi + 0x1fa], ax */ W16((u32)(r_edi+0x1fau), (u16)r_eax);
    /* 005d93a1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x5d93a6u); f_00807db8();
    /* 005d93a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93a9: jne 0x5d93ae */ if (!fZ) goto L_005d93ae;
L_005d93ab:; BB(0x005d93ab);
    /* 005d93ab: or ebx, 0xffffff80 */ {  u32 a = r_ebx; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_005d93ae:; BB(0x005d93ae);
    /* 005d93ae: fld dword ptr [0x92cb4c] */ FPUSH(R_F32((u32)(0x92cb4cu)));
    /* 005d93b4: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005d93ba: fld dword ptr [edx + 0x520] */ FPUSH(R_F32((u32)(r_edx+0x520u)));
    /* 005d93c0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005d93c3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005d93c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d93cc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005d93d0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d93d4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d93d8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005d93db: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 005d93df: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005d93e3: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005d93e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d93e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d93e8: je 0x5d9432 */ if (fZ) goto L_005d9432;
L_005d93ea:; BB(0x005d93ea);
    /* 005d93ea: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005d93ee: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005d93f2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005d93f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d93f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d93f7: jae 0x5d940f */ if (!fC) goto L_005d940f;
L_005d93f9:; BB(0x005d93f9);
    /* 005d93f9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005d93fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d93fd: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d9402u); f_005dbbe4();
    /* 005d9402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9404: je 0x5d940f */ if (fZ) goto L_005d940f;
L_005d9406:; BB(0x005d9406);
    /* 005d9406: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9408: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d940a: call 0x5dbbfc */ r_esp -= 4; W32(r_esp, 0x5d940fu); f_005dbbfc();
L_005d940f:; BB(0x005d940f);
    /* 005d940f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9411: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9413: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d9418u); f_005dbbe4();
    /* 005d9418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d941a: je 0x5d9428 */ if (fZ) goto L_005d9428;
L_005d941c:; BB(0x005d941c);
    /* 005d941c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d941e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9420: call 0x5dbbfc */ r_esp -= 4; W32(r_esp, 0x5d9425u); f_005dbbfc();
    /* 005d9425: or ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_005d9428:; BB(0x005d9428);
    /* 005d9428: mov eax, ebx */ r_eax = r_ebx;
    /* 005d942a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d942d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d942e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d942f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9430: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d9431: ret  */ FN_RET(0x005d91f0); r_esp += 4; return;
L_005d9432:; BB(0x005d9432);
    /* 005d9432: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d9434: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9436: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9438: call 0x5dbbe4 */ r_esp -= 4; W32(r_esp, 0x5d943du); f_005dbbe4();
    /* 005d943d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d943f: jne 0x5d9455 */ if (!fZ) goto L_005d9455;
L_005d9441:; BB(0x005d9441);
    /* 005d9441: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9443: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9445: call 0x5dbbf0 */ r_esp -= 4; W32(r_esp, 0x5d944au); f_005dbbf0();
    /* 005d944a: or ebx, 0xffffff40 */ {  u32 a = r_ebx; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005d9450: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
    /* 005d9453: jmp 0x5d940f */ goto L_005d940f;
L_005d9455:; BB(0x005d9455);
    /* 005d9455: fld dword ptr [0x92cb4c] */ FPUSH(R_F32((u32)(0x92cb4cu)));
    /* 005d945b: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005d9461: fld dword ptr [edx + 0x520] */ FPUSH(R_F32((u32)(r_edx+0x520u)));
    /* 005d9467: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005d946a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005d946e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d9473: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005d9477: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d947b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d947f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005d9482: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005d9486: jmp 0x5d93ea */ goto L_005d93ea;
}

void f_005d948c(void) /* sub_5D948C */
{
    FN_ENTER(0x005d948c);
    /* 005d948c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d948d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d948e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9491: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d9493: movsx esi, byte ptr [esp + 0x34] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esp+0x34u));
    /* 005d9498: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5d949du); f_008587a5();
    /* 005d949d: test esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94a3: jne 0x5d9945 */ if (!fZ) goto L_005d9945;
L_005d94a9:; BB(0x005d94a9);
    /* 005d94a9: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94af: jne 0x5d982b */ if (!fZ) goto L_005d982b;
L_005d94b5:; BB(0x005d94b5);
    /* 005d94b5: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94bb: jne 0x5d9711 */ if (!fZ) goto L_005d9711;
L_005d94c1:; BB(0x005d94c1);
    /* 005d94c1: test esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94c7: jne 0x5d95f9 */ if (!fZ) goto L_005d95f9;
L_005d94cd:; BB(0x005d94cd);
    /* 005d94cd: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94d3: jne 0x5d95b4 */ if (!fZ) goto L_005d95b4;
L_005d94d9:; BB(0x005d94d9);
    /* 005d94d9: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94df: jne 0x5d956f */ if (!fZ) goto L_005d956f;
L_005d94e5:; BB(0x005d94e5);
    /* 005d94e5: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94eb: jne 0x5d9536 */ if (!fZ) goto L_005d9536;
L_005d94ed:; BB(0x005d94ed);
    /* 005d94ed: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d94f3: jne 0x5d94fd */ if (!fZ) goto L_005d94fd;
L_005d94f5:; BB(0x005d94f5);
    /* 005d94f5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d94f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d94f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d94fa: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d94fd:; BB(0x005d94fd);
    /* 005d94fd: mov eax, dword ptr [ebp + 0x1b0] */ r_eax = R32((u32)(r_ebp+0x1b0u));
    /* 005d9503: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d9505: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d9507:; BB(0x005d9507);
    /* 005d9507: fld dword ptr [0x92cb48] */ FPUSH(R_F32((u32)(0x92cb48u)));
    /* 005d950d: fcomp dword ptr [ebp + 0x1ec] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x1ecu))); FPOP();
    /* 005d9513: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d9515: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d9516: jb 0x5d94f5 */ if (fC) goto L_005d94f5;
L_005d9518:; BB(0x005d9518);
    /* 005d9518: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d951a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d951c: call 0x5d9b80 */ r_esp -= 4; W32(r_esp, 0x5d9521u); f_005d9b80();
    /* 005d9521: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9523: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d9525:; BB(0x005d9525);
    /* 005d9525: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9527: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9529: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5d952eu); f_005c36cc();
    /* 005d952e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9532: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9533: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d9536:; BB(0x005d9536);
    /* 005d9536: mov eax, dword ptr [ebp + 0x1b0] */ r_eax = R32((u32)(r_ebp+0x1b0u));
    /* 005d953c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d953e: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d9540:; BB(0x005d9540);
    /* 005d9540: fld dword ptr [0x92cb48] */ FPUSH(R_F32((u32)(0x92cb48u)));
    /* 005d9546: fcomp dword ptr [ebp + 0x1ec] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x1ecu))); FPOP();
    /* 005d954c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d954e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d954f: jb 0x5d94f5 */ if (fC) goto L_005d94f5;
L_005d9551:; BB(0x005d9551);
    /* 005d9551: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9553: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9555: call 0x5d9b80 */ r_esp -= 4; W32(r_esp, 0x5d955au); f_005d9b80();
    /* 005d955a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d955c: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d955e:; BB(0x005d955e);
    /* 005d955e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9560: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9562: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5d9567u); f_005c36cc();
    /* 005d9567: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d956a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d956b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d956c: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d956f:; BB(0x005d956f);
    /* 005d956f: mov eax, dword ptr [ebp + 0x1b0] */ r_eax = R32((u32)(r_ebp+0x1b0u));
    /* 005d9575: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d9577: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d957d:; BB(0x005d957d);
    /* 005d957d: fld dword ptr [0x92cb48] */ FPUSH(R_F32((u32)(0x92cb48u)));
    /* 005d9583: fcomp dword ptr [ebp + 0x1ec] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x1ecu))); FPOP();
    /* 005d9589: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d958b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d958c: jb 0x5d94f5 */ if (fC) goto L_005d94f5;
L_005d9592:; BB(0x005d9592);
    /* 005d9592: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9594: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9596: call 0x5d9b80 */ r_esp -= 4; W32(r_esp, 0x5d959bu); f_005d9b80();
    /* 005d959b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d959d: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d95a3:; BB(0x005d95a3);
    /* 005d95a3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d95a7: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5d95acu); f_005c36cc();
    /* 005d95ac: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d95af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d95b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d95b1: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d95b4:; BB(0x005d95b4);
    /* 005d95b4: mov eax, dword ptr [ebp + 0x1b0] */ r_eax = R32((u32)(r_ebp+0x1b0u));
    /* 005d95ba: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d95bc: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d95c2:; BB(0x005d95c2);
    /* 005d95c2: fld dword ptr [0x92cb48] */ FPUSH(R_F32((u32)(0x92cb48u)));
    /* 005d95c8: fcomp dword ptr [ebp + 0x1ec] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x1ecu))); FPOP();
    /* 005d95ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d95d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d95d1: jb 0x5d94f5 */ if (fC) goto L_005d94f5;
L_005d95d7:; BB(0x005d95d7);
    /* 005d95d7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d95db: call 0x5d9b80 */ r_esp -= 4; W32(r_esp, 0x5d95e0u); f_005d9b80();
    /* 005d95e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d95e2: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d95e8:; BB(0x005d95e8);
    /* 005d95e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d95ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d95ec: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5d95f1u); f_005c36cc();
    /* 005d95f1: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d95f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d95f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d95f6: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d95f9:; BB(0x005d95f9);
    /* 005d95f9: movsx eax, word ptr [ebp + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1beu));
    /* 005d9600: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9603: jge 0x5d9609 */ if ((fS==fO)) goto L_005d9609;
L_005d9605:; BB(0x005d9605);
    /* 005d9605: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d9607: jmp 0x5d9632 */ goto L_005d9632;
L_005d9609:; BB(0x005d9609);
    /* 005d9609: cmp eax, 0x3d */ {  u32 a = r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d960c: jge 0x5d9615 */ if ((fS==fO)) goto L_005d9615;
L_005d960e:; BB(0x005d960e);
    /* 005d960e: mov eax, 0xf */ r_eax = 0xfu;
    /* 005d9613: jmp 0x5d9632 */ goto L_005d9632;
L_005d9615:; BB(0x005d9615);
    /* 005d9615: cmp eax, 0x51 */ {  u32 a = r_eax; u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9618: jge 0x5d9621 */ if ((fS==fO)) goto L_005d9621;
L_005d961a:; BB(0x005d961a);
    /* 005d961a: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005d961f: jmp 0x5d9632 */ goto L_005d9632;
L_005d9621:; BB(0x005d9621);
    /* 005d9621: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9624: jge 0x5d962d */ if ((fS==fO)) goto L_005d962d;
L_005d9626:; BB(0x005d9626);
    /* 005d9626: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005d962b: jmp 0x5d9632 */ goto L_005d9632;
L_005d962d:; BB(0x005d962d);
    /* 005d962d: mov eax, 0x23 */ r_eax = 0x23u;
L_005d9632:; BB(0x005d9632);
    /* 005d9632: movzx edx, byte ptr [ebp + 0x1e4] */ r_edx = (u32)R8((u32)(r_ebp+0x1e4u));
    /* 005d9639: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d963b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d963d: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d9643:; BB(0x005d9643);
    /* 005d9643: movzx edx, byte ptr [ebp + 0x1e8] */ r_edx = (u32)R8((u32)(r_ebp+0x1e8u));
    /* 005d964a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d964c: je 0x5d9708 */ if (fZ) goto L_005d9708;
L_005d9652:; BB(0x005d9652);
    /* 005d9652: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9655: je 0x5d96f7 */ if (fZ) goto L_005d96f7;
L_005d965b:; BB(0x005d965b);
    /* 005d965b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d965e: je 0x5d969c */ if (fZ) goto L_005d969c;
L_005d9660:; BB(0x005d9660);
    /* 005d9660: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9663: jne 0x5d9683 */ if (!fZ) goto L_005d9683;
L_005d9665:; BB(0x005d9665);
    /* 005d9665: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d966c: mov eax, 0xa */ r_eax = 0xau;
    /* 005d9671: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9674: jg 0x5d9678 */ if ((!fZ&&fS==fO)) goto L_005d9678;
L_005d9676:; BB(0x005d9676);
    /* 005d9676: mov esi, eax */ r_esi = r_eax;
L_005d9678:; BB(0x005d9678);
    /* 005d9678: add esi, -0xa */ {  u32 a = r_esi; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d967b: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d9681: jmp 0x5d969e */ goto L_005d969e;
L_005d9683:; BB(0x005d9683);
    /* 005d9683: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9686: jne 0x5d969e */ if (!fZ) goto L_005d969e;
L_005d9688:; BB(0x005d9688);
    /* 005d9688: mov edx, 0xa */ r_edx = 0xau;
    /* 005d968d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9690: jg 0x5d9694 */ if ((!fZ&&fS==fO)) goto L_005d9694;
L_005d9692:; BB(0x005d9692);
    /* 005d9692: mov eax, edx */ r_eax = r_edx;
L_005d9694:; BB(0x005d9694);
    /* 005d9694: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9697: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 005d969a: jmp 0x5d969e */ goto L_005d969e;
L_005d969c:; BB(0x005d969c);
    /* 005d969c: mov esi, eax */ r_esi = r_eax;
L_005d969e:; BB(0x005d969e);
    /* 005d969e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5d96a3u); f_008587a5();
    /* 005d96a3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005d96a6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d96a9: fdiv dword ptr [0x92cb40] */ ST(0) = ST(0) / R_F32((u32)(0x92cb40u));
    /* 005d96af: fmul dword ptr [0x92cb44] */ ST(0) = ST(0) * R_F32((u32)(0x92cb44u));
    /* 005d96b5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d96b9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d96be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d96c3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d96c7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d96cb: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 005d96cf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d96d3: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 005d96d8: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d96da: jge 0x5d94f5 */ if ((fS==fO)) goto L_005d94f5;
L_005d96e0:; BB(0x005d96e0);
    /* 005d96e0: movzx eax, byte ptr [ebp + 0x1e4] */ r_eax = (u32)R8((u32)(r_ebp+0x1e4u));
    /* 005d96e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d96e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d96ea: call 0x5d9bac */ r_esp -= 4; W32(r_esp, 0x5d96efu); f_005d9bac();
    /* 005d96ef: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d96f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d96f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d96f4: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d96f7:; BB(0x005d96f7);
    /* 005d96f7: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d96fe: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d9700: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d9706: jmp 0x5d969e */ goto L_005d969e;
L_005d9708:; BB(0x005d9708);
    /* 005d9708: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d970f: jmp 0x5d969e */ goto L_005d969e;
L_005d9711:; BB(0x005d9711);
    /* 005d9711: movsx eax, word ptr [ebp + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1beu));
    /* 005d9718: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d971b: jge 0x5d9721 */ if ((fS==fO)) goto L_005d9721;
L_005d971d:; BB(0x005d971d);
    /* 005d971d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d971f: jmp 0x5d974a */ goto L_005d974a;
L_005d9721:; BB(0x005d9721);
    /* 005d9721: cmp eax, 0x3d */ {  u32 a = r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9724: jge 0x5d972d */ if ((fS==fO)) goto L_005d972d;
L_005d9726:; BB(0x005d9726);
    /* 005d9726: mov eax, 0xf */ r_eax = 0xfu;
    /* 005d972b: jmp 0x5d974a */ goto L_005d974a;
L_005d972d:; BB(0x005d972d);
    /* 005d972d: cmp eax, 0x51 */ {  u32 a = r_eax; u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9730: jge 0x5d9739 */ if ((fS==fO)) goto L_005d9739;
L_005d9732:; BB(0x005d9732);
    /* 005d9732: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005d9737: jmp 0x5d974a */ goto L_005d974a;
L_005d9739:; BB(0x005d9739);
    /* 005d9739: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d973c: jge 0x5d9745 */ if ((fS==fO)) goto L_005d9745;
L_005d973e:; BB(0x005d973e);
    /* 005d973e: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005d9743: jmp 0x5d974a */ goto L_005d974a;
L_005d9745:; BB(0x005d9745);
    /* 005d9745: mov eax, 0x23 */ r_eax = 0x23u;
L_005d974a:; BB(0x005d974a);
    /* 005d974a: movzx edx, byte ptr [ebp + 0x1e3] */ r_edx = (u32)R8((u32)(r_ebp+0x1e3u));
    /* 005d9751: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d9753: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9755: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d975b:; BB(0x005d975b);
    /* 005d975b: movzx edx, byte ptr [ebp + 0x1e7] */ r_edx = (u32)R8((u32)(r_ebp+0x1e7u));
    /* 005d9762: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9764: je 0x5d9822 */ if (fZ) goto L_005d9822;
L_005d976a:; BB(0x005d976a);
    /* 005d976a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d976d: je 0x5d9811 */ if (fZ) goto L_005d9811;
L_005d9773:; BB(0x005d9773);
    /* 005d9773: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9776: je 0x5d97b4 */ if (fZ) goto L_005d97b4;
L_005d9778:; BB(0x005d9778);
    /* 005d9778: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d977b: jne 0x5d979b */ if (!fZ) goto L_005d979b;
L_005d977d:; BB(0x005d977d);
    /* 005d977d: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d9784: mov eax, 0xa */ r_eax = 0xau;
    /* 005d9789: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d978c: jg 0x5d9790 */ if ((!fZ&&fS==fO)) goto L_005d9790;
L_005d978e:; BB(0x005d978e);
    /* 005d978e: mov esi, eax */ r_esi = r_eax;
L_005d9790:; BB(0x005d9790);
    /* 005d9790: add esi, -0xa */ {  u32 a = r_esi; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d9793: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d9799: jmp 0x5d97b6 */ goto L_005d97b6;
L_005d979b:; BB(0x005d979b);
    /* 005d979b: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d979e: jne 0x5d97b6 */ if (!fZ) goto L_005d97b6;
L_005d97a0:; BB(0x005d97a0);
    /* 005d97a0: mov edx, 0xa */ r_edx = 0xau;
    /* 005d97a5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d97a8: jg 0x5d97ac */ if ((!fZ&&fS==fO)) goto L_005d97ac;
L_005d97aa:; BB(0x005d97aa);
    /* 005d97aa: mov eax, edx */ r_eax = r_edx;
L_005d97ac:; BB(0x005d97ac);
    /* 005d97ac: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d97af: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 005d97b2: jmp 0x5d97b6 */ goto L_005d97b6;
L_005d97b4:; BB(0x005d97b4);
    /* 005d97b4: mov esi, eax */ r_esi = r_eax;
L_005d97b6:; BB(0x005d97b6);
    /* 005d97b6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5d97bbu); f_008587a5();
    /* 005d97bb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d97bf: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d97c3: fdiv dword ptr [0x92cb40] */ ST(0) = ST(0) / R_F32((u32)(0x92cb40u));
    /* 005d97c9: fmul dword ptr [0x92cb44] */ ST(0) = ST(0) * R_F32((u32)(0x92cb44u));
    /* 005d97cf: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d97d3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d97d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d97dd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d97e1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d97e5: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 005d97e9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d97ed: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 005d97f2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d97f4: jge 0x5d94f5 */ if ((fS==fO)) goto L_005d94f5;
L_005d97fa:; BB(0x005d97fa);
    /* 005d97fa: movzx eax, byte ptr [ebp + 0x1e3] */ r_eax = (u32)R8((u32)(r_ebp+0x1e3u));
    /* 005d9801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9802: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9804: call 0x5d9bac */ r_esp -= 4; W32(r_esp, 0x5d9809u); f_005d9bac();
    /* 005d9809: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d980c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d980d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d980e: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d9811:; BB(0x005d9811);
    /* 005d9811: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d9818: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d981a: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d9820: jmp 0x5d97b6 */ goto L_005d97b6;
L_005d9822:; BB(0x005d9822);
    /* 005d9822: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d9829: jmp 0x5d97b6 */ goto L_005d97b6;
L_005d982b:; BB(0x005d982b);
    /* 005d982b: movsx eax, word ptr [ebp + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1beu));
    /* 005d9832: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9835: jge 0x5d983b */ if ((fS==fO)) goto L_005d983b;
L_005d9837:; BB(0x005d9837);
    /* 005d9837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d9839: jmp 0x5d9864 */ goto L_005d9864;
L_005d983b:; BB(0x005d983b);
    /* 005d983b: cmp eax, 0x3d */ {  u32 a = r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d983e: jge 0x5d9847 */ if ((fS==fO)) goto L_005d9847;
L_005d9840:; BB(0x005d9840);
    /* 005d9840: mov eax, 0xf */ r_eax = 0xfu;
    /* 005d9845: jmp 0x5d9864 */ goto L_005d9864;
L_005d9847:; BB(0x005d9847);
    /* 005d9847: cmp eax, 0x51 */ {  u32 a = r_eax; u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d984a: jge 0x5d9853 */ if ((fS==fO)) goto L_005d9853;
L_005d984c:; BB(0x005d984c);
    /* 005d984c: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005d9851: jmp 0x5d9864 */ goto L_005d9864;
L_005d9853:; BB(0x005d9853);
    /* 005d9853: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9856: jge 0x5d985f */ if ((fS==fO)) goto L_005d985f;
L_005d9858:; BB(0x005d9858);
    /* 005d9858: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005d985d: jmp 0x5d9864 */ goto L_005d9864;
L_005d985f:; BB(0x005d985f);
    /* 005d985f: mov eax, 0x23 */ r_eax = 0x23u;
L_005d9864:; BB(0x005d9864);
    /* 005d9864: movzx edx, byte ptr [ebp + 0x1e2] */ r_edx = (u32)R8((u32)(r_ebp+0x1e2u));
    /* 005d986b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d986d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d986f: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d9875:; BB(0x005d9875);
    /* 005d9875: movzx edx, byte ptr [ebp + 0x1e6] */ r_edx = (u32)R8((u32)(r_ebp+0x1e6u));
    /* 005d987c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d987e: je 0x5d993c */ if (fZ) goto L_005d993c;
L_005d9884:; BB(0x005d9884);
    /* 005d9884: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9887: je 0x5d992b */ if (fZ) goto L_005d992b;
L_005d988d:; BB(0x005d988d);
    /* 005d988d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9890: je 0x5d98ce */ if (fZ) goto L_005d98ce;
L_005d9892:; BB(0x005d9892);
    /* 005d9892: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9895: jne 0x5d98b5 */ if (!fZ) goto L_005d98b5;
L_005d9897:; BB(0x005d9897);
    /* 005d9897: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d989e: mov eax, 0xa */ r_eax = 0xau;
    /* 005d98a3: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d98a6: jg 0x5d98aa */ if ((!fZ&&fS==fO)) goto L_005d98aa;
L_005d98a8:; BB(0x005d98a8);
    /* 005d98a8: mov esi, eax */ r_esi = r_eax;
L_005d98aa:; BB(0x005d98aa);
    /* 005d98aa: add esi, -0xa */ {  u32 a = r_esi; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d98ad: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d98b3: jmp 0x5d98d0 */ goto L_005d98d0;
L_005d98b5:; BB(0x005d98b5);
    /* 005d98b5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d98b8: jne 0x5d98d0 */ if (!fZ) goto L_005d98d0;
L_005d98ba:; BB(0x005d98ba);
    /* 005d98ba: mov edx, 0xa */ r_edx = 0xau;
    /* 005d98bf: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d98c2: jg 0x5d98c6 */ if ((!fZ&&fS==fO)) goto L_005d98c6;
L_005d98c4:; BB(0x005d98c4);
    /* 005d98c4: mov eax, edx */ r_eax = r_edx;
L_005d98c6:; BB(0x005d98c6);
    /* 005d98c6: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d98c9: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 005d98cc: jmp 0x5d98d0 */ goto L_005d98d0;
L_005d98ce:; BB(0x005d98ce);
    /* 005d98ce: mov esi, eax */ r_esi = r_eax;
L_005d98d0:; BB(0x005d98d0);
    /* 005d98d0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5d98d5u); f_008587a5();
    /* 005d98d5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d98d9: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d98dd: fdiv dword ptr [0x92cb40] */ ST(0) = ST(0) / R_F32((u32)(0x92cb40u));
    /* 005d98e3: fmul dword ptr [0x92cb44] */ ST(0) = ST(0) * R_F32((u32)(0x92cb44u));
    /* 005d98e9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d98ed: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d98f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d98f7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d98fb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d98ff: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 005d9903: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d9907: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 005d990c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d990e: jge 0x5d94f5 */ if ((fS==fO)) goto L_005d94f5;
L_005d9914:; BB(0x005d9914);
    /* 005d9914: movzx eax, byte ptr [ebp + 0x1e2] */ r_eax = (u32)R8((u32)(r_ebp+0x1e2u));
    /* 005d991b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d991c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d991e: call 0x5d9bac */ r_esp -= 4; W32(r_esp, 0x5d9923u); f_005d9bac();
    /* 005d9923: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9927: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9928: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d992b:; BB(0x005d992b);
    /* 005d992b: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d9932: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d9934: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d993a: jmp 0x5d98d0 */ goto L_005d98d0;
L_005d993c:; BB(0x005d993c);
    /* 005d993c: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d9943: jmp 0x5d98d0 */ goto L_005d98d0;
L_005d9945:; BB(0x005d9945);
    /* 005d9945: movsx eax, word ptr [ebp + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1beu));
    /* 005d994c: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d994f: jge 0x5d9955 */ if ((fS==fO)) goto L_005d9955;
L_005d9951:; BB(0x005d9951);
    /* 005d9951: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d9953: jmp 0x5d997e */ goto L_005d997e;
L_005d9955:; BB(0x005d9955);
    /* 005d9955: cmp eax, 0x3d */ {  u32 a = r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9958: jge 0x5d9961 */ if ((fS==fO)) goto L_005d9961;
L_005d995a:; BB(0x005d995a);
    /* 005d995a: mov eax, 0xf */ r_eax = 0xfu;
    /* 005d995f: jmp 0x5d997e */ goto L_005d997e;
L_005d9961:; BB(0x005d9961);
    /* 005d9961: cmp eax, 0x51 */ {  u32 a = r_eax; u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9964: jge 0x5d996d */ if ((fS==fO)) goto L_005d996d;
L_005d9966:; BB(0x005d9966);
    /* 005d9966: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005d996b: jmp 0x5d997e */ goto L_005d997e;
L_005d996d:; BB(0x005d996d);
    /* 005d996d: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9970: jge 0x5d9979 */ if ((fS==fO)) goto L_005d9979;
L_005d9972:; BB(0x005d9972);
    /* 005d9972: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005d9977: jmp 0x5d997e */ goto L_005d997e;
L_005d9979:; BB(0x005d9979);
    /* 005d9979: mov eax, 0x23 */ r_eax = 0x23u;
L_005d997e:; BB(0x005d997e);
    /* 005d997e: movzx edx, byte ptr [ebp + 0x1e1] */ r_edx = (u32)R8((u32)(r_ebp+0x1e1u));
    /* 005d9985: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d9987: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9989: je 0x5d94f5 */ if (fZ) goto L_005d94f5;
L_005d998f:; BB(0x005d998f);
    /* 005d998f: movzx edx, byte ptr [ebp + 0x1e5] */ r_edx = (u32)R8((u32)(r_ebp+0x1e5u));
    /* 005d9996: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9998: je 0x5d9a56 */ if (fZ) goto L_005d9a56;
L_005d999e:; BB(0x005d999e);
    /* 005d999e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d99a1: je 0x5d9a45 */ if (fZ) goto L_005d9a45;
L_005d99a7:; BB(0x005d99a7);
    /* 005d99a7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d99aa: je 0x5d99e8 */ if (fZ) goto L_005d99e8;
L_005d99ac:; BB(0x005d99ac);
    /* 005d99ac: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d99af: jne 0x5d99cf */ if (!fZ) goto L_005d99cf;
L_005d99b1:; BB(0x005d99b1);
    /* 005d99b1: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d99b8: mov eax, 0xa */ r_eax = 0xau;
    /* 005d99bd: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d99c0: jg 0x5d99c4 */ if ((!fZ&&fS==fO)) goto L_005d99c4;
L_005d99c2:; BB(0x005d99c2);
    /* 005d99c2: mov esi, eax */ r_esi = r_eax;
L_005d99c4:; BB(0x005d99c4);
    /* 005d99c4: add esi, -0xa */ {  u32 a = r_esi; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d99c7: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d99cd: jmp 0x5d99ea */ goto L_005d99ea;
L_005d99cf:; BB(0x005d99cf);
    /* 005d99cf: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d99d2: jne 0x5d99ea */ if (!fZ) goto L_005d99ea;
L_005d99d4:; BB(0x005d99d4);
    /* 005d99d4: mov edx, 0xa */ r_edx = 0xau;
    /* 005d99d9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d99dc: jg 0x5d99e0 */ if ((!fZ&&fS==fO)) goto L_005d99e0;
L_005d99de:; BB(0x005d99de);
    /* 005d99de: mov eax, edx */ r_eax = r_edx;
L_005d99e0:; BB(0x005d99e0);
    /* 005d99e0: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d99e3: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 005d99e6: jmp 0x5d99ea */ goto L_005d99ea;
L_005d99e8:; BB(0x005d99e8);
    /* 005d99e8: mov esi, eax */ r_esi = r_eax;
L_005d99ea:; BB(0x005d99ea);
    /* 005d99ea: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5d99efu); f_008587a5();
    /* 005d99ef: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d99f3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d99f7: fdiv dword ptr [0x92cb40] */ ST(0) = ST(0) / R_F32((u32)(0x92cb40u));
    /* 005d99fd: fmul dword ptr [0x92cb44] */ ST(0) = ST(0) * R_F32((u32)(0x92cb44u));
    /* 005d9a03: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d9a07: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d9a0c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d9a11: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d9a15: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d9a19: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 005d9a1d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d9a21: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 005d9a26: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9a28: jge 0x5d94f5 */ if ((fS==fO)) goto L_005d94f5;
L_005d9a2e:; BB(0x005d9a2e);
    /* 005d9a2e: movzx eax, byte ptr [ebp + 0x1e1] */ r_eax = (u32)R8((u32)(r_ebp+0x1e1u));
    /* 005d9a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9a38: call 0x5d9bac */ r_esp -= 4; W32(r_esp, 0x5d9a3du); f_005d9bac();
    /* 005d9a3d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9a40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9a41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9a42: ret 4 */ FN_RET(0x005d948c); r_esp += 8; return;
L_005d9a45:; BB(0x005d9a45);
    /* 005d9a45: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d9a4c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d9a4e: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005d9a54: jmp 0x5d99ea */ goto L_005d99ea;
L_005d9a56:; BB(0x005d9a56);
    /* 005d9a56: movzx esi, byte ptr [ebp + 0x1e0] */ r_esi = (u32)R8((u32)(r_ebp+0x1e0u));
    /* 005d9a5d: jmp 0x5d99ea */ goto L_005d99ea;
}

void f_005d9a60(void) /* sub_5D9A60 */
{
    FN_ENTER(0x005d9a60);
    /* 005d9a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a63: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d9a65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d9a67: call 0x5d8c8c */ r_esp -= 4; W32(r_esp, 0x5d9a6cu); f_005d8c8c();
    /* 005d9a6c: mov eax, dword ptr [ebx + 0x1b0] */ r_eax = R32((u32)(r_ebx+0x1b0u));
    /* 005d9a72: mov dword ptr [ebx + 0x1ec], 0x41f00000 */ W32((u32)(r_ebx+0x1ecu), 0x41f00000u);
    /* 005d9a7c: and eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d9a81: or eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d9a85: mov dword ptr [ebx + 0x1f0], 0 */ W32((u32)(r_ebx+0x1f0u), 0x0u);
    /* 005d9a8f: mov dword ptr [ebx + 0x1b0], eax */ W32((u32)(r_ebx+0x1b0u), r_eax);
    /* 005d9a95: lea edx, [ebx + 0x1cc] */ r_edx = (u32)(r_ebx+0x1ccu);
    /* 005d9a9b: lea eax, [ebx + 0x1d4] */ r_eax = (u32)(r_ebx+0x1d4u);
    /* 005d9aa1: mov esi, eax */ r_esi = r_eax;
    /* 005d9aa3: mov edi, edx */ r_edi = r_edx;
L_005d9aa5:; BB(0x005d9aa5);
    /* 005d9aa5: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9aa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9aa9: je 0x5d9b01 */ if (fZ) goto L_005d9b01;
L_005d9aab:; BB(0x005d9aab);
    /* 005d9aab: mov edx, dword ptr [ebx + 0x1b0] */ r_edx = R32((u32)(r_ebx+0x1b0u));
    /* 005d9ab1: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d9ab4: jle 0x5d9abb */ if ((fZ||fS!=fO)) goto L_005d9abb;
L_005d9ab6:; BB(0x005d9ab6);
    /* 005d9ab6: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9ab9: jl 0x5d9ae7 */ if ((fS!=fO)) goto L_005d9ae7;
L_005d9abb:; BB(0x005d9abb);
    /* 005d9abb: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9abe: jl 0x5d9ae0 */ if ((fS!=fO)) goto L_005d9ae0;
L_005d9ac0:; BB(0x005d9ac0);
    /* 005d9ac0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9ac3: jge 0x5d9ae0 */ if ((fS==fO)) goto L_005d9ae0;
L_005d9ac5:; BB(0x005d9ac5);
    /* 005d9ac5: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005d9ac8: movsx eax, byte ptr [eax + 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 005d9acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9acd: call 0x5dd278 */ r_esp -= 4; W32(r_esp, 0x5d9ad2u); f_005dd278();
    /* 005d9ad2: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005d9ad9: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9adc: je 0x5d9b3c */ if (fZ) goto L_005d9b3c;
L_005d9ade:; BB(0x005d9ade);
    /* 005d9ade: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9ae0:; BB(0x005d9ae0);
    /* 005d9ae0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9ae3: je 0x5d9b58 */ if (fZ) goto L_005d9b58;
L_005d9ae5:; BB(0x005d9ae5);
    /* 005d9ae5: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9ae7:; BB(0x005d9ae7);
    /* 005d9ae7: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005d9aea: movsx eax, byte ptr [edx + eax - 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 005d9aef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9af0: call 0x5dd278 */ r_esp -= 4; W32(r_esp, 0x5d9af5u); f_005dd278();
    /* 005d9af5: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005d9afc: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9aff: je 0x5d9b4a */ if (fZ) goto L_005d9b4a;
L_005d9b01:; BB(0x005d9b01);
    /* 005d9b01: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d9b04: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d9b06: ja 0x5d9aa5 */ if ((!fC&&!fZ)) goto L_005d9aa5;
L_005d9b08:; BB(0x005d9b08);
    /* 005d9b08: mov edx, dword ptr [ebx + 0x1cc] */ r_edx = R32((u32)(r_ebx+0x1ccu));
    /* 005d9b0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b10: je 0x5d9b1f */ if (fZ) goto L_005d9b1f;
L_005d9b12:; BB(0x005d9b12);
    /* 005d9b12: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9b16: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d9b1b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005d9b1f:; BB(0x005d9b1f);
    /* 005d9b1f: mov edx, dword ptr [ebx + 0x1d0] */ r_edx = R32((u32)(r_ebx+0x1d0u));
    /* 005d9b25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9b27: je 0x5d9b36 */ if (fZ) goto L_005d9b36;
L_005d9b29:; BB(0x005d9b29);
    /* 005d9b29: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9b2d: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9b32: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005d9b36:; BB(0x005d9b36);
    /* 005d9b36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d9b37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9b38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d9b39: ret 4 */ FN_RET(0x005d9a60); r_esp += 8; return;
L_005d9b3c:; BB(0x005d9b3c);
    /* 005d9b3c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b41: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9b43: call 0x5dd2f0 */ r_esp -= 4; W32(r_esp, 0x5d9b48u); f_005dd2f0();
    /* 005d9b48: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9b4a:; BB(0x005d9b4a);
    /* 005d9b4a: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b4f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9b51: call 0x5dd2f0 */ r_esp -= 4; W32(r_esp, 0x5d9b56u); f_005dd2f0();
    /* 005d9b56: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9b58:; BB(0x005d9b58);
    /* 005d9b58: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005d9b5b: movsx eax, byte ptr [eax + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 005d9b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b60: call 0x5dd278 */ r_esp -= 4; W32(r_esp, 0x5d9b65u); f_005dd278();
    /* 005d9b65: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005d9b6c: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b6f: jne 0x5d9b01 */ if (!fZ) goto L_005d9b01;
L_005d9b71:; BB(0x005d9b71);
    /* 005d9b71: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b76: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9b78: call 0x5dd2f0 */ r_esp -= 4; W32(r_esp, 0x5d9b7du); f_005dd2f0();
    /* 005d9b7d: jmp 0x5d9b01 */ goto L_005d9b01;
}

void f_005d9ac0(void)
{
    FN_ENTER(0x005d9ac0);
    goto L_005d9ac0;
L_005d9aa5:; BB(0x005d9aa5);
    /* 005d9aa5: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9aa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9aa9: je 0x5d9b01 */ if (fZ) goto L_005d9b01;
L_005d9aab:; BB(0x005d9aab);
    /* 005d9aab: mov edx, dword ptr [ebx + 0x1b0] */ r_edx = R32((u32)(r_ebx+0x1b0u));
    /* 005d9ab1: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d9ab4: jle 0x5d9abb */ if ((fZ||fS!=fO)) goto L_005d9abb;
L_005d9ab6:; BB(0x005d9ab6);
    /* 005d9ab6: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9ab9: jl 0x5d9ae7 */ if ((fS!=fO)) goto L_005d9ae7;
L_005d9abb:; BB(0x005d9abb);
    /* 005d9abb: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9abe: jl 0x5d9ae0 */ if ((fS!=fO)) goto L_005d9ae0;
L_005d9ac0:; BB(0x005d9ac0);
    /* 005d9ac0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9ac3: jge 0x5d9ae0 */ if ((fS==fO)) goto L_005d9ae0;
L_005d9ac5:; BB(0x005d9ac5);
    /* 005d9ac5: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005d9ac8: movsx eax, byte ptr [eax + 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 005d9acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9acd: call 0x5dd278 */ r_esp -= 4; W32(r_esp, 0x5d9ad2u); f_005dd278();
    /* 005d9ad2: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005d9ad9: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9adc: je 0x5d9b3c */ if (fZ) goto L_005d9b3c;
L_005d9ade:; BB(0x005d9ade);
    /* 005d9ade: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9ae0:; BB(0x005d9ae0);
    /* 005d9ae0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9ae3: je 0x5d9b58 */ if (fZ) goto L_005d9b58;
L_005d9ae5:; BB(0x005d9ae5);
    /* 005d9ae5: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9ae7:; BB(0x005d9ae7);
    /* 005d9ae7: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005d9aea: movsx eax, byte ptr [edx + eax - 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 005d9aef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9af0: call 0x5dd278 */ r_esp -= 4; W32(r_esp, 0x5d9af5u); f_005dd278();
    /* 005d9af5: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005d9afc: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9aff: je 0x5d9b4a */ if (fZ) goto L_005d9b4a;
L_005d9b01:; BB(0x005d9b01);
    /* 005d9b01: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d9b04: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d9b06: ja 0x5d9aa5 */ if ((!fC&&!fZ)) goto L_005d9aa5;
L_005d9b08:; BB(0x005d9b08);
    /* 005d9b08: mov edx, dword ptr [ebx + 0x1cc] */ r_edx = R32((u32)(r_ebx+0x1ccu));
    /* 005d9b0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b10: je 0x5d9b1f */ if (fZ) goto L_005d9b1f;
L_005d9b12:; BB(0x005d9b12);
    /* 005d9b12: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9b16: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d9b1b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005d9b1f:; BB(0x005d9b1f);
    /* 005d9b1f: mov edx, dword ptr [ebx + 0x1d0] */ r_edx = R32((u32)(r_ebx+0x1d0u));
    /* 005d9b25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9b27: je 0x5d9b36 */ if (fZ) goto L_005d9b36;
L_005d9b29:; BB(0x005d9b29);
    /* 005d9b29: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9b2d: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9b32: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005d9b36:; BB(0x005d9b36);
    /* 005d9b36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d9b37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9b38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d9b39: ret 4 */ FN_RET(0x005d9ac0); r_esp += 8; return;
L_005d9b3c:; BB(0x005d9b3c);
    /* 005d9b3c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b41: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9b43: call 0x5dd2f0 */ r_esp -= 4; W32(r_esp, 0x5d9b48u); f_005dd2f0();
    /* 005d9b48: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9b4a:; BB(0x005d9b4a);
    /* 005d9b4a: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b4f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9b51: call 0x5dd2f0 */ r_esp -= 4; W32(r_esp, 0x5d9b56u); f_005dd2f0();
    /* 005d9b56: jmp 0x5d9b01 */ goto L_005d9b01;
L_005d9b58:; BB(0x005d9b58);
    /* 005d9b58: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005d9b5b: movsx eax, byte ptr [eax + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 005d9b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b60: call 0x5dd278 */ r_esp -= 4; W32(r_esp, 0x5d9b65u); f_005dd278();
    /* 005d9b65: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005d9b6c: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b6f: jne 0x5d9b01 */ if (!fZ) goto L_005d9b01;
L_005d9b71:; BB(0x005d9b71);
    /* 005d9b71: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b76: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005d9b78: call 0x5dd2f0 */ r_esp -= 4; W32(r_esp, 0x5d9b7du); f_005dd2f0();
    /* 005d9b7d: jmp 0x5d9b01 */ goto L_005d9b01;
}

void f_005d9b80(void) /* sub_5D9B80 */
{
    FN_ENTER(0x005d9b80);
    /* 005d9b80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005d9b84: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005d9b8a: movsx edx, word ptr [edx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 005d9b91: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9b94: je 0x5d9ba2 */ if (fZ) goto L_005d9ba2;
L_005d9b96:; BB(0x005d9b96);
    /* 005d9b96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9b98: je 0x5d9ba6 */ if (fZ) goto L_005d9ba6;
L_005d9b9a:; BB(0x005d9b9a);
    /* 005d9b9a: mov eax, 1 */ r_eax = 0x1u;
    /* 005d9b9f: ret 4 */ FN_RET(0x005d9b80); r_esp += 8; return;
L_005d9ba2:; BB(0x005d9ba2);
    /* 005d9ba2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9ba4: je 0x5d9b9a */ if (fZ) goto L_005d9b9a;
L_005d9ba6:; BB(0x005d9ba6);
    /* 005d9ba6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9ba8: ret 4 */ FN_RET(0x005d9b80); r_esp += 8; return;
}

void f_005d9bac(void) /* sub_5D9BAC */
{
    FN_ENTER(0x005d9bac);
    /* 005d9bac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9bad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9bae: mov edi, ecx */ r_edi = r_ecx;
    /* 005d9bb0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005d9bb4: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 005d9bb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9bbb: je 0x5d9bc7 */ if (fZ) goto L_005d9bc7;
L_005d9bbd:; BB(0x005d9bbd);
    /* 005d9bbd: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9bc0: je 0x5d9be7 */ if (fZ) goto L_005d9be7;
L_005d9bc2:; BB(0x005d9bc2);
    /* 005d9bc2: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9bc5: je 0x5d9be7 */ if (fZ) goto L_005d9be7;
L_005d9bc7:; BB(0x005d9bc7);
    /* 005d9bc7: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9bca: je 0x5d9c05 */ if (fZ) goto L_005d9c05;
L_005d9bcc:; BB(0x005d9bcc);
    /* 005d9bcc: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005d9bd2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9bd4: je 0x5d9c00 */ if (fZ) goto L_005d9c00;
L_005d9bd6:; BB(0x005d9bd6);
    /* 005d9bd6: fld dword ptr [0x92cb30] */ FPUSH(R_F32((u32)(0x92cb30u)));
    /* 005d9bdc: fcomp dword ptr [edi + 0x1ec] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x1ecu))); FPOP();
    /* 005d9be2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d9be4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d9be5: jae 0x5d9bec */ if (!fC) goto L_005d9bec;
L_005d9be7:; BB(0x005d9be7);
    /* 005d9be7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9be8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d9be9: ret 4 */ FN_RET(0x005d9bac); r_esp += 8; return;
L_005d9bec:; BB(0x005d9bec);
    /* 005d9bec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9bed: mov ecx, edi */ r_ecx = r_edi;
    /* 005d9bef: call 0x5d9b80 */ r_esp -= 4; W32(r_esp, 0x5d9bf4u); f_005d9b80();
    /* 005d9bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9bf6: je 0x5d9c00 */ if (fZ) goto L_005d9c00;
L_005d9bf8:; BB(0x005d9bf8);
    /* 005d9bf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9bf9: mov ecx, edi */ r_ecx = r_edi;
    /* 005d9bfb: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5d9c00u); f_005c36cc();
L_005d9c00:; BB(0x005d9c00);
    /* 005d9c00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9c01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d9c02: ret 4 */ FN_RET(0x005d9bac); r_esp += 8; return;
L_005d9c05:; BB(0x005d9c05);
    /* 005d9c05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c06: mov ecx, edi */ r_ecx = r_edi;
    /* 005d9c08: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9c0du); f_005d9a60();
    /* 005d9c0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9c0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d9c0f: ret 4 */ FN_RET(0x005d9bac); r_esp += 8; return;
}

void f_005d9c14(void) /* sub_5D9C14 */
{
    FN_ENTER(0x005d9c14);
    /* 005d9c14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c15: mov esi, ecx */ r_esi = r_ecx;
    /* 005d9c17: mov eax, dword ptr [esi + 0x1f0] */ r_eax = R32((u32)(r_esi+0x1f0u));
    /* 005d9c1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9c1f: jne 0x5d9c28 */ if (!fZ) goto L_005d9c28;
L_005d9c21:; BB(0x005d9c21);
    /* 005d9c21: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9c23: call 0x5d9c88 */ r_esp -= 4; W32(r_esp, 0x5d9c28u); f_005d9c88();
L_005d9c28:; BB(0x005d9c28);
    /* 005d9c28: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9c2a: call 0x5d9cf8 */ r_esp -= 4; W32(r_esp, 0x5d9c2fu); f_005d9cf8();
    /* 005d9c2f: mov ecx, dword ptr [esi + 0x1f0] */ r_ecx = R32((u32)(r_esi+0x1f0u));
    /* 005d9c35: cmp ecx, dword ptr [esi + 0x1f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x1f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9c3b: jl 0x5d9c53 */ if ((fS!=fO)) goto L_005d9c53;
L_005d9c3d:; BB(0x005d9c3d);
    /* 005d9c3d: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9c3f: call 0x5d8c8c */ r_esp -= 4; W32(r_esp, 0x5d9c44u); f_005d8c8c();
    /* 005d9c44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c46: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9c48: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9c4du); f_005d9a60();
    /* 005d9c4d: mov ecx, dword ptr [esi + 0x1f0] */ r_ecx = R32((u32)(r_esi+0x1f0u));
L_005d9c53:; BB(0x005d9c53);
    /* 005d9c53: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 005d9c58: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9c5a: mov eax, ecx */ r_eax = r_ecx;
    /* 005d9c5c: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d9c5f: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d9c61: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9c64: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9c66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d9c68: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d9c6a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005d9c6d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9c6f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9c71: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9c73: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d9c75: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9c77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9c79: jne 0x5d9c84 */ if (!fZ) goto L_005d9c84;
L_005d9c7b:; BB(0x005d9c7b);
    /* 005d9c7b: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c7d: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9c7f: call 0x5c3724 */ r_esp -= 4; W32(r_esp, 0x5d9c84u); f_005c3724();
L_005d9c84:; BB(0x005d9c84);
    /* 005d9c84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9c85: ret  */ FN_RET(0x005d9c14); r_esp += 4; return;
}

void f_005d9c88(void) /* sub_5D9C88 */
{
    FN_ENTER(0x005d9c88);
    /* 005d9c88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c89: movsx ebp, word ptr [ecx + 0x1be] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x1beu));
    /* 005d9c90: movsx eax, word ptr [ecx + 0x1bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1bcu));
    /* 005d9c97: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d9c99: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005d9c9e: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9ca0: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005d9ca3: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9ca5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005d9ca8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9caa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9cac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9cae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9cb0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d9cb2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d9cb4: add eax, 0x4b0 */ {  u32 a = r_eax; u32 b = 0x4b0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9cb9: mov edx, 0x384 */ r_edx = 0x384u;
    /* 005d9cbe: cmp eax, 0x384 */ {  u32 a = r_eax; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9cc3: jl 0x5d9cc7 */ if ((fS!=fO)) goto L_005d9cc7;
L_005d9cc5:; BB(0x005d9cc5);
    /* 005d9cc5: mov eax, edx */ r_eax = r_edx;
L_005d9cc7:; BB(0x005d9cc7);
    /* 005d9cc7: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005d9ccd: mov dword ptr [ecx + 0x1f4], eax */ W32((u32)(r_ecx+0x1f4u), r_eax);
    /* 005d9cd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9cd5: je 0x5d9cf5 */ if (fZ) goto L_005d9cf5;
L_005d9cd7:; BB(0x005d9cd7);
    /* 005d9cd7: cmp eax, dword ptr [edx + 0x720] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x720u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9cdd: jle 0x5d9cf5 */ if ((fZ||fS!=fO)) goto L_005d9cf5;
L_005d9cdf:; BB(0x005d9cdf);
    /* 005d9cdf: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ce4: mov dword ptr [edx + 0x720], eax */ W32((u32)(r_edx+0x720u), r_eax);
    /* 005d9cea: add ecx, 0x1f8 */ {  u32 a = r_ecx; u32 b = 0x1f8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9cf0: call 0x5dbbf0 */ r_esp -= 4; W32(r_esp, 0x5d9cf5u); f_005dbbf0();
L_005d9cf5:; BB(0x005d9cf5);
    /* 005d9cf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9cf6: ret  */ FN_RET(0x005d9c88); r_esp += 4; return;
}

void f_005d9cf8(void) /* sub_5D9CF8 */
{
    FN_ENTER(0x005d9cf8);
    /* 005d9cf8: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005d9cfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9d00: je 0x5d9d22 */ if (fZ) goto L_005d9d22;
L_005d9d02:; BB(0x005d9d02);
    /* 005d9d02: mov edx, dword ptr [eax + 0x720] */ r_edx = R32((u32)(r_eax+0x720u));
    /* 005d9d08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9d0a: jne 0x5d9d22 */ if (!fZ) goto L_005d9d22;
L_005d9d0c:; BB(0x005d9d0c);
    /* 005d9d0c: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 005d9d12: sub edx, dword ptr [ecx + 0x1f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1f0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9d18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9d1a: jle 0x5d9d22 */ if ((fZ||fS!=fO)) goto L_005d9d22;
L_005d9d1c:; BB(0x005d9d1c);
    /* 005d9d1c: mov dword ptr [eax + 0x720], edx */ W32((u32)(r_eax+0x720u), r_edx);
L_005d9d22:; BB(0x005d9d22);
    /* 005d9d22: ret  */ FN_RET(0x005d9cf8); r_esp += 4; return;
}

void f_005d9d24(void) /* sub_5D9D24 */
{
    FN_ENTER(0x005d9d24);
    /* 005d9d24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d25: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9d28: mov esi, ecx */ r_esi = r_ecx;
    /* 005d9d2a: mov eax, dword ptr [esi + 0x1f0] */ r_eax = R32((u32)(r_esi+0x1f0u));
    /* 005d9d30: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9d33: je 0x5d9d45 */ if (fZ) goto L_005d9d45;
L_005d9d35:; BB(0x005d9d35);
    /* 005d9d35: jle 0x5d9d40 */ if ((fZ||fS!=fO)) goto L_005d9d40;
L_005d9d37:; BB(0x005d9d37);
    /* 005d9d37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d39: mov ecx, esi */ r_ecx = r_esi;
    /* 005d9d3b: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9d40u); f_005d9a60();
L_005d9d40:; BB(0x005d9d40);
    /* 005d9d40: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9d43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9d44: ret  */ FN_RET(0x005d9d24); r_esp += 4; return;
L_005d9d45:; BB(0x005d9d45);
    /* 005d9d45: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005d9d4a: movsx ecx, word ptr [esi + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1bcu));
    /* 005d9d51: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9d53: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005d9d59: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9d5c: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9d5f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9d61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9d63: je 0x5d9d40 */ if (fZ) goto L_005d9d40;
L_005d9d65:; BB(0x005d9d65);
    /* 005d9d65: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005d9d69: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 005d9d6d: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 005d9d71: mov eax, 0xb */ r_eax = 0xbu;
    /* 005d9d76: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005d9d78:; BB(0x005d9d78);
    /* 005d9d78: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005d9d7d: mov word ptr [ecx], di */ W16((u32)(r_ecx), (u16)r_edi);
    /* 005d9d80: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005d9d82: mov word ptr [ecx + 2], di */ W16((u32)(r_ecx+0x2u), (u16)r_edi);
    /* 005d9d86: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 005d9d89: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9d8c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d9d8f: jne 0x5d9d78 */ if (!fZ) goto L_005d9d78;
L_005d9d91:; BB(0x005d9d91);
    /* 005d9d91: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 005d9d95: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 005d9d99: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005d9d9f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d9da1: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 005d9da8: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005d9dac: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 005d9db1: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 005d9db6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005d9db9: lea esi, [eax + 0x38] */ r_esi = (u32)(r_eax+0x38u);
    /* 005d9dbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9dbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9dbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9dbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9dc0: call 0x6ef8a4 */ r_esp -= 4; W32(r_esp, 0x5d9dc5u); f_006ef8a4();
    /* 005d9dc5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9dc8: jmp 0x5d9d40 */ goto L_005d9d40;
}

void f_005d9dd0(void) /* sub_5D9DD0 */
{
    FN_ENTER(0x005d9dd0);
    /* 005d9dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9dd1: mov eax, dword ptr [ecx + 0x1f0] */ r_eax = R32((u32)(r_ecx+0x1f0u));
    /* 005d9dd7: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9dda: je 0x5d9de7 */ if (fZ) goto L_005d9de7;
L_005d9ddc:; BB(0x005d9ddc);
    /* 005d9ddc: jle 0x5d9de5 */ if ((fZ||fS!=fO)) goto L_005d9de5;
L_005d9dde:; BB(0x005d9dde);
    /* 005d9dde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9de0: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9de5u); f_005d9a60();
L_005d9de5:; BB(0x005d9de5);
    /* 005d9de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9de6: ret  */ FN_RET(0x005d9dd0); r_esp += 4; return;
L_005d9de7:; BB(0x005d9de7);
    /* 005d9de7: mov ebp, dword ptr [ecx + 0xf8] */ r_ebp = R32((u32)(r_ecx+0xf8u));
    /* 005d9ded: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 005d9df4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9df6: jle 0x5d9de5 */ if ((fZ||fS!=fO)) goto L_005d9de5;
L_005d9df8:; BB(0x005d9df8);
    /* 005d9df8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005d9dfd: movsx ecx, word ptr [ecx + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1bcu));
    /* 005d9e04: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9e06: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9e09: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9e0c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9e0e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9e10: je 0x5d9de5 */ if (fZ) goto L_005d9de5;
L_005d9e12:; BB(0x005d9e12);
    /* 005d9e12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e13: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005d9e16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e17: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e18: call 0x6eeeb4 */ r_esp -= 4; W32(r_esp, 0x5d9e1du); f_006eeeb4();
    /* 005d9e1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9e20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e21: ret  */ FN_RET(0x005d9dd0); r_esp += 4; return;
}

void f_005d9e24(void) /* sub_5D9E24 */
{
    FN_ENTER(0x005d9e24);
    /* 005d9e24: mov eax, dword ptr [ecx + 0x1f0] */ r_eax = R32((u32)(r_ecx+0x1f0u));
    /* 005d9e2a: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9e2d: je 0x5d9e38 */ if (fZ) goto L_005d9e38;
L_005d9e2f:; BB(0x005d9e2f);
    /* 005d9e2f: jle 0x5d9e38 */ if ((fZ||fS!=fO)) goto L_005d9e38;
L_005d9e31:; BB(0x005d9e31);
    /* 005d9e31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e33: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9e38u); f_005d9a60();
L_005d9e38:; BB(0x005d9e38);
    /* 005d9e38: ret  */ FN_RET(0x005d9e24); r_esp += 4; return;
}

void f_005d9e3c(void) /* sub_5D9E3C */
{
    FN_ENTER(0x005d9e3c);
    /* 005d9e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d9e3f: mov eax, dword ptr [ebp + 0x1f0] */ r_eax = R32((u32)(r_ebp+0x1f0u));
    /* 005d9e45: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9e48: je 0x5d9e57 */ if (fZ) goto L_005d9e57;
L_005d9e4a:; BB(0x005d9e4a);
    /* 005d9e4a: jle 0x5d9e55 */ if ((fZ||fS!=fO)) goto L_005d9e55;
L_005d9e4c:; BB(0x005d9e4c);
    /* 005d9e4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d9e50: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9e55u); f_005d9a60();
L_005d9e55:; BB(0x005d9e55);
    /* 005d9e55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e56: ret  */ FN_RET(0x005d9e3c); r_esp += 4; return;
L_005d9e57:; BB(0x005d9e57);
    /* 005d9e57: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005d9e5c: movsx ecx, word ptr [ebp + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x1bcu));
    /* 005d9e63: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9e65: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005d9e6b: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9e6e: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9e71: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9e73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9e75: je 0x5d9ea1 */ if (fZ) goto L_005d9ea1;
L_005d9e77:; BB(0x005d9e77);
    /* 005d9e77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e78: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 005d9e7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e7d: call 0x6f0984 */ r_esp -= 4; W32(r_esp, 0x5d9e82u); f_006f0984();
    /* 005d9e82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9e85: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005d9e8a: movsx ecx, word ptr [ebp + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x1bcu));
    /* 005d9e91: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9e93: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005d9e99: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9e9c: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9e9f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_005d9ea1:; BB(0x005d9ea1);
    /* 005d9ea1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9ea3: je 0x5d9e55 */ if (fZ) goto L_005d9e55;
L_005d9ea5:; BB(0x005d9ea5);
    /* 005d9ea5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ea6: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 005d9ea9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9eab: call 0x6e2634 */ r_esp -= 4; W32(r_esp, 0x5d9eb0u); f_006e2634();
    /* 005d9eb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d9eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9eb4: ret  */ FN_RET(0x005d9e3c); r_esp += 4; return;
}

void f_005d9eb8(void) /* sub_5D9EB8 */
{
    FN_ENTER(0x005d9eb8);
    /* 005d9eb8: mov eax, dword ptr [ecx + 0x1f0] */ r_eax = R32((u32)(r_ecx+0x1f0u));
    /* 005d9ebe: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9ec1: jle 0x5d9eca */ if ((fZ||fS!=fO)) goto L_005d9eca;
L_005d9ec3:; BB(0x005d9ec3);
    /* 005d9ec3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ec5: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9ecau); f_005d9a60();
L_005d9eca:; BB(0x005d9eca);
    /* 005d9eca: ret  */ FN_RET(0x005d9eb8); r_esp += 4; return;
}

void f_005d9ecc(void) /* sub_5D9ECC */
{
    FN_ENTER(0x005d9ecc);
    /* 005d9ecc: mov eax, dword ptr [ecx + 0x1f0] */ r_eax = R32((u32)(r_ecx+0x1f0u));
    /* 005d9ed2: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d9ed5: jle 0x5d9ede */ if ((fZ||fS!=fO)) goto L_005d9ede;
L_005d9ed7:; BB(0x005d9ed7);
    /* 005d9ed7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ed9: call 0x5d9a60 */ r_esp -= 4; W32(r_esp, 0x5d9edeu); f_005d9a60();
L_005d9ede:; BB(0x005d9ede);
    /* 005d9ede: ret  */ FN_RET(0x005d9ecc); r_esp += 4; return;
}

void f_005d9ee0(void) /* sub_5D9EE0 */
{
    FN_ENTER(0x005d9ee0);
    /* 005d9ee0: fld dword ptr [ecx + 0x1ec] */ FPUSH(R_F32((u32)(r_ecx+0x1ecu)));
    /* 005d9ee6: fcom dword ptr [0x92cb28] */ fx_compare(ST(0), R_F32((u32)(0x92cb28u))); 
    /* 005d9eec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d9eee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d9eef: jbe 0x5d9eff */ if ((fC||fZ)) goto L_005d9eff;
L_005d9ef1:; BB(0x005d9ef1);
    /* 005d9ef1: fld dword ptr [0x92cb24] */ FPUSH(R_F32((u32)(0x92cb24u)));
    /* 005d9ef7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d9ef9: fst dword ptr [ecx + 0x1ec] */ W_F32((u32)(r_ecx+0x1ecu), ST(0));
L_005d9eff:; BB(0x005d9eff);
    /* 005d9eff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d9f01: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005d9f04: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f09: jne 0x5d9f3a */ if (!fZ) goto L_005d9f3a;
L_005d9f0b:; BB(0x005d9f0b);
    /* 005d9f0b: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 005d9f11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f13: je 0x5d9f22 */ if (fZ) goto L_005d9f22;
L_005d9f15:; BB(0x005d9f15);
    /* 005d9f15: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9f19: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d9f1e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005d9f22:; BB(0x005d9f22);
    /* 005d9f22: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 005d9f28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9f2a: je 0x5d9f68 */ if (fZ) goto L_005d9f68;
L_005d9f2c:; BB(0x005d9f2c);
    /* 005d9f2c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9f30: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9f35: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d9f39: ret  */ FN_RET(0x005d9ee0); r_esp += 4; return;
L_005d9f3a:; BB(0x005d9f3a);
    /* 005d9f3a: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 005d9f40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f42: je 0x5d9f51 */ if (fZ) goto L_005d9f51;
L_005d9f44:; BB(0x005d9f44);
    /* 005d9f44: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9f48: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d9f4d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005d9f51:; BB(0x005d9f51);
    /* 005d9f51: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 005d9f57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9f59: je 0x5d9f68 */ if (fZ) goto L_005d9f68;
L_005d9f5b:; BB(0x005d9f5b);
    /* 005d9f5b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d9f5f: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9f64: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005d9f68:; BB(0x005d9f68);
    /* 005d9f68: ret  */ FN_RET(0x005d9ee0); r_esp += 4; return;
}

void f_005d9f6c(void) /* sub_5D9F6C */
{
    FN_ENTER(0x005d9f6c);
    /* 005d9f6c: call 0x5d91b4 */ r_esp -= 4; W32(r_esp, 0x5d9f71u); f_005d91b4();
    /* 005d9f71: ret  */ FN_RET(0x005d9f6c); r_esp += 4; return;
}

void f_005d9f74(void) /* sub_5D9F74 */
{
    FN_ENTER(0x005d9f74);
    /* 005d9f74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f75: mov esi, ecx */ r_esi = r_ecx;
    /* 005d9f77: lea ecx, [esi + 0x1bc] */ r_ecx = (u32)(r_esi+0x1bcu);
    /* 005d9f7d: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5d9f82u); f_005dbdb8();
    /* 005d9f82: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005d9f85: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9f8a: jg 0x5da000 */ if ((!fZ&&fS==fO)) goto L_005da000;
L_005d9f8c:; BB(0x005d9f8c);
    /* 005d9f8c: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d9f91: movsx ecx, word ptr [esi + 0x1c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c0u));
    /* 005d9f98: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9f9a: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9f9d: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9fa0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9fa2: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d9fa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d9fa7: jl 0x5da000 */ if ((fS!=fO)) goto L_005da000;
L_005d9fa9:; BB(0x005d9fa9);
    /* 005d9fa9: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d9fae: movsx ecx, word ptr [esi + 0x1c2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c2u));
    /* 005d9fb5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9fb7: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9fba: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9fbd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9fbf: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d9fc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d9fc4: jl 0x5da000 */ if ((fS!=fO)) goto L_005da000;
L_005d9fc6:; BB(0x005d9fc6);
    /* 005d9fc6: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d9fcb: movsx ecx, word ptr [esi + 0x1c4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c4u));
    /* 005d9fd2: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9fd4: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9fd7: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9fda: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9fdc: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d9fdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d9fe1: jl 0x5da000 */ if ((fS!=fO)) goto L_005da000;
L_005d9fe3:; BB(0x005d9fe3);
    /* 005d9fe3: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d9fe8: movsx ecx, word ptr [esi + 0x1c6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c6u));
    /* 005d9fef: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d9ff1: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d9ff4: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d9ff7: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d9ff9: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d9ffc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d9ffe: jge 0x5da007 */ if ((fS==fO)) goto L_005da007;
L_005da000:; BB(0x005da000);
    /* 005da000: mov ecx, esi */ r_ecx = r_esi;
    /* 005da002: call 0x5c3550 */ r_esp -= 4; W32(r_esp, 0x5da007u); f_005c3550();
L_005da007:; BB(0x005da007);
    /* 005da007: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da008: ret  */ FN_RET(0x005d9f74); r_esp += 4; return;
}

