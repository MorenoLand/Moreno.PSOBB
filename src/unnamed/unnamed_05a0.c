#include "protos.h"

void f_005a0000(void)
{
    FN_ENTER(0x005a0000);
    /* 005a0000: test byte ptr [edi - 0x7d000000], cl */ {  u32 a = R8((u32)(r_edi+0x83000000u)); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;   }
    /* 005a0006: clc  */ fC = 0;
    /* 005a0007: add dword ptr [ebp + 0x52], esi */ { u32 ad = (u32)(r_ebp+0x52u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005a000a: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a0010: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 005a0016: fcomp dword ptr [0x929cfc] */ fx_compare(ST(0), R_F32((u32)(0x929cfcu))); FPOP();
    /* 005a001c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a001e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a001f: jb 0x5a003c */ if (fC) goto L_005a003c;
L_005a0021:; BB(0x005a0021);
    /* 005a0021: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0023: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
    /* 005a002d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a002f: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x5a0035u); call_ind(t); }
    /* 005a0035: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0037: call 0x5a0304 */ r_esp -= 4; W32(r_esp, 0x5a003cu); f_005a0304();
L_005a003c:; BB(0x005a003c);
    /* 005a003c: push dword ptr [edi + 0x438] */ { u32 v = R32((u32)(r_edi+0x438u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0042: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0048: mov ecx, edi */ r_ecx = r_edi;
    /* 005a004a: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0050: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a0055u); f_005209d4();
    /* 005a0055: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0059: ret 4 */ FN_RET(0x005a0000); r_esp += 8; return;
}

void f_005a0013(void)
{
    FN_ENTER(0x005a0013);
    /* 005a0013: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a0015: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 005a0017: sbb eax, 0x929cfc */ { u32 c = fC; u32 a = r_eax; u32 b = 0x929cfcu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005a001c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a001e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a001f: jb 0x5a003c */ if (fC) goto L_005a003c;
L_005a0021:; BB(0x005a0021);
    /* 005a0021: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0023: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
    /* 005a002d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a002f: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x5a0035u); call_ind(t); }
    /* 005a0035: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0037: call 0x5a0304 */ r_esp -= 4; W32(r_esp, 0x5a003cu); f_005a0304();
L_005a003c:; BB(0x005a003c);
    /* 005a003c: push dword ptr [edi + 0x438] */ { u32 v = R32((u32)(r_edi+0x438u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0042: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0048: mov ecx, edi */ r_ecx = r_edi;
    /* 005a004a: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0050: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a0055u); f_005209d4();
    /* 005a0055: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0059: ret 4 */ FN_RET(0x005a0013); r_esp += 8; return;
}

void f_005a001e(void)
{
    FN_ENTER(0x005a001e);
    /* 005a001e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a001f: jb 0x5a003c */ if (fC) goto L_005a003c;
L_005a0021:; BB(0x005a0021);
    /* 005a0021: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0023: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
    /* 005a002d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a002f: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x5a0035u); call_ind(t); }
    /* 005a0035: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0037: call 0x5a0304 */ r_esp -= 4; W32(r_esp, 0x5a003cu); f_005a0304();
L_005a003c:; BB(0x005a003c);
    /* 005a003c: push dword ptr [edi + 0x438] */ { u32 v = R32((u32)(r_edi+0x438u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0042: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0048: mov ecx, edi */ r_ecx = r_edi;
    /* 005a004a: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0050: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x5a0055u); f_005209d4();
    /* 005a0055: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0059: ret 4 */ FN_RET(0x005a001e); r_esp += 8; return;
}

void f_005a004b(void)
{
    FN_ENTER(0x005a004b);
    /* 005a004b: mov bh, 0xa8 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0xa8u) & 0xffu) << 8);
    /* 005a004d: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a004f: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 005a0051: jg 0x5a005c */ if ((!fZ&&fS==fO)) goto L_005a005c;
L_005a0053:; BB(0x005a0053);
    /* 005a0053: clc  */ fC = 0;
    /* 005a0054: inc dword ptr [ebx - 0x3da0e73c] */ { u32 ad = (u32)(r_ebx+0xc25f18c4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005a005a: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a005c:; BB(0x005a005c);
    /* 005a005c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a005f: jne 0x5a0130 */ if (!fZ) goto L_005a0130;
L_005a0065:; BB(0x005a0065);
    /* 005a0065: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005a006b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a006d: je 0x5a0079 */ if (fZ) goto L_005a0079;
L_005a006f:; BB(0x005a006f);
    /* 005a006f: mov dword ptr [edi + 0x42c], 3 */ W32((u32)(r_edi+0x42cu), 0x3u);
L_005a0079:; BB(0x005a0079);
    /* 005a0079: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a007b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a007d: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0083u); call_ind(t); }
    /* 005a0083: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0085: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0087: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a008du); call_ind(t); }
    /* 005a008d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0091: ret 4 */ FN_RET(0x005a004b); r_esp += 8; return;
L_005a0130:; BB(0x005a0130);
    /* 005a0130: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0133: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0134: ret 4 */ FN_RET(0x005a004b); r_esp += 8; return;
}

void f_005a0059(void)
{
    FN_ENTER(0x005a0059);
    /* 005a0059: ret 4 */ FN_RET(0x005a0059); r_esp += 8; return;
}

void f_005a0078(void)
{
    FN_ENTER(0x005a0078);
    /* 005a0078: add byte ptr [ebx - 0x3074f9], cl */ { u32 ad = (u32)(r_ebx+0xffcf8b07u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a007e: nop  */ ;
    /* 005a007f: mov al, byte ptr [0x8b000001] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8b000001u))) & 0xffu);
    /* 005a0084: pop es */ UNSUP(0x005a0084, "pop es");
    /* 005a0085: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0087: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a008du); call_ind(t); }
    /* 005a008d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0091: ret 4 */ FN_RET(0x005a0078); r_esp += 8; return;
}

void f_005a0096(void)
{
    FN_ENTER(0x005a0096);
    /* 005a0096: xor dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 005a0098: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005a009a: mov bh, 0x34 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x34u) & 0xffu) << 8);
    /* 005a009c: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a009e: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005a00a0: ja 0x5a0102 */ if ((!fC&&!fZ)) goto L_005a0102;
L_005a00a2:; BB(0x005a00a2);
    /* 005a00a2: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a00a7u); f_007a8c74();
    /* 005a00a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a00aa: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a00b0: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 005a00b6: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005a00b9: fcomp dword ptr [0x929cf8] */ fx_compare(ST(0), R_F32((u32)(0x929cf8u))); FPOP();
    /* 005a00bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a00c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a00c2: jb 0x5a00ed */ if (fC) goto L_005a00ed;
L_005a00c4:; BB(0x005a00c4);
    /* 005a00c4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00c6: mov dword ptr [edi + 0x42c], 1 */ W32((u32)(r_edi+0x42cu), 0x1u);
    /* 005a00d0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00d2: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x5a00d8u); call_ind(t); }
    /* 005a00d8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005a00db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a00dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a00de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a00df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a00e0: push 0x242 */ { u32 v = 0x242u; r_esp -= 4; W32(r_esp, v); }
    /* 005a00e5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a00eau); f_00814298();
    /* 005a00ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a00ed:; BB(0x005a00ed);
    /* 005a00ed: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00f1: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a00f7u); call_ind(t); }
    /* 005a00f7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00f9: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00fb: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0101u); call_ind(t); }
    /* 005a0101: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005a0102:; BB(0x005a0102);
    /* 005a0102: les ebx, ptr [eax] */ UNSUP(0x005a0102, "les ebx, ptr [eax]");
    /* 005a0104: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0105: ret 4 */ FN_RET(0x005a0096); r_esp += 8; return;
}

void f_005a00b4(void)
{
    FN_ENTER(0x005a00b4);
    /* 005a00b4: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a00b6: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005a00b9: fcomp dword ptr [0x929cf8] */ fx_compare(ST(0), R_F32((u32)(0x929cf8u))); FPOP();
    /* 005a00bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a00c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a00c2: jb 0x5a00ed */ if (fC) goto L_005a00ed;
L_005a00c4:; BB(0x005a00c4);
    /* 005a00c4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00c6: mov dword ptr [edi + 0x42c], 1 */ W32((u32)(r_edi+0x42cu), 0x1u);
    /* 005a00d0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00d2: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x5a00d8u); call_ind(t); }
    /* 005a00d8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005a00db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a00dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a00de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a00df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a00e0: push 0x242 */ { u32 v = 0x242u; r_esp -= 4; W32(r_esp, v); }
    /* 005a00e5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a00eau); f_00814298();
    /* 005a00ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a00ed:; BB(0x005a00ed);
    /* 005a00ed: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00f1: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a00f7u); call_ind(t); }
    /* 005a00f7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a00f9: mov ecx, edi */ r_ecx = r_edi;
    /* 005a00fb: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0101u); call_ind(t); }
    /* 005a0101: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0104: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0105: ret 4 */ FN_RET(0x005a00b4); r_esp += 8; return;
}

void f_005a0304(void) /* sub_5A0304 */
{
    FN_ENTER(0x005a0304);
    /* 005a0304: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0305: lea edi, [ecx + 0x38] */ r_edi = (u32)(r_ecx+0x38u);
    /* 005a0308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0309: call 0x59ded8 */ r_esp -= 4; W32(r_esp, 0x5a030eu); f_0059ded8();
    /* 005a030e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0310: je 0x5a0326 */ if (fZ) goto L_005a0326;
L_005a0312:; BB(0x005a0312);
    /* 005a0312: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0315: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0316: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0317: push 0x243 */ { u32 v = 0x243u; r_esp -= 4; W32(r_esp, v); }
    /* 005a031c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a0321u); f_00814298();
    /* 005a0321: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0324: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0325: ret  */ FN_RET(0x005a0304); r_esp += 4; return;
L_005a0326:; BB(0x005a0326);
    /* 005a0326: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a032b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a032c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a0331u); f_0050b510();
    /* 005a0331: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0335: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0336: push 0x243 */ { u32 v = 0x243u; r_esp -= 4; W32(r_esp, v); }
    /* 005a033b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a0340u); f_00814298();
    /* 005a0340: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0343: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0344: ret  */ FN_RET(0x005a0304); r_esp += 4; return;
}

void f_005a0348(void) /* sub_5A0348 */
{
    FN_ENTER(0x005a0348);
    /* 005a0348: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0349: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a034c: mov esi, ecx */ r_esi = r_ecx;
    /* 005a034e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005a0352: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0355: je 0x5a0517 */ if (fZ) goto L_005a0517;
L_005a035b:; BB(0x005a035b);
    /* 005a035b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a035e: je 0x5a04fc */ if (fZ) goto L_005a04fc;
L_005a0364:; BB(0x005a0364);
    /* 005a0364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0366: jne 0x5a0510 */ if (!fZ) goto L_005a0510;
L_005a036c:; BB(0x005a036c);
    /* 005a036c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a036e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0373u); f_007aa094();
    /* 005a0373: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005a0379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a037b: jne 0x5a04b1 */ if (!fZ) goto L_005a04b1;
L_005a0381:; BB(0x005a0381);
    /* 005a0381: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a0383: mov ecx, esi */ r_ecx = r_esi;
    /* 005a0385: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x5a038bu); call_ind(t); }
    /* 005a038b: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005a0391: fcomp dword ptr [0x929cf0] */ fx_compare(ST(0), R_F32((u32)(0x929cf0u))); FPOP();
    /* 005a0397: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0399: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a039a: jae 0x5a0429 */ if (!fC) goto L_005a0429;
L_005a03a0:; BB(0x005a03a0);
    /* 005a03a0: mov ecx, esi */ r_ecx = r_esi;
    /* 005a03a2: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5a03a7u); f_00521238();
    /* 005a03a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a03a9: jne 0x5a03b2 */ if (!fZ) goto L_005a03b2;
L_005a03ab:; BB(0x005a03ab);
    /* 005a03ab: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a03ae: mov eax, edx */ r_eax = r_edx;
    /* 005a03b0: jmp 0x5a03fc */ goto L_005a03fc;
L_005a03b2:; BB(0x005a03b2);
    /* 005a03b2: mov ecx, esi */ r_ecx = r_esi;
    /* 005a03b4: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a03b9u); f_005213d8();
    /* 005a03b9: mov ecx, esi */ r_ecx = r_esi;
    /* 005a03bb: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a03c0u); f_00521410();
    /* 005a03c0: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 005a03c6: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 005a03cc: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a03ce: fmul qword ptr [0x929bd8] */ ST(0) = ST(0) * R_F64((u32)(0x929bd8u));
    /* 005a03d4: fdiv qword ptr [0x929bd0] */ ST(0) = ST(0) / R_F64((u32)(0x929bd0u));
    /* 005a03da: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a03dd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005a03e0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005a03e4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a03e9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a03ed: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005a03f1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a03f5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005a03f8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_005a03fc:; BB(0x005a03fc);
    /* 005a03fc: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0402: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0403: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a0408u); f_007a8c74();
    /* 005a0408: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a040b: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005a040e: mov ecx, eax */ r_ecx = r_eax;
    /* 005a0410: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a0415u); f_0082dcbc();
    /* 005a0415: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005a0418: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 005a041e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a0423u); f_0082ddd8();
    /* 005a0423: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
L_005a0429:; BB(0x005a0429);
    /* 005a0429: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a042b: mov ecx, esi */ r_ecx = r_esi;
    /* 005a042d: call dword ptr [eax + 0x1c8] */ { u32 t = R32((u32)(r_eax+0x1c8u)); r_esp -= 4; W32(r_esp, 0x5a0433u); call_ind(t); }
    /* 005a0433: mov ecx, esi */ r_ecx = r_esi;
    /* 005a0435: call 0x5a0560 */ r_esp -= 4; W32(r_esp, 0x5a043au); f_005a0560();
    /* 005a043a: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005a0440: fcom dword ptr [0x929cec] */ fx_compare(ST(0), R_F32((u32)(0x929cecu))); 
    /* 005a0446: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0448: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0449: jb 0x5a047d */ if (fC) goto L_005a047d;
L_005a044b:; BB(0x005a044b);
    /* 005a044b: fcom dword ptr [0x929ce8] */ fx_compare(ST(0), R_F32((u32)(0x929ce8u))); 
    /* 005a0451: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0453: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0454: ja 0x5a047d */ if ((!fC&&!fZ)) goto L_005a047d;
L_005a0456:; BB(0x005a0456);
    /* 005a0456: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a0458: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005a045e: mov edx, dword ptr [eax*4 + 0xa74744] */ r_edx = R32((u32)(r_eax*4+0xa74744u));
    /* 005a0465: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0468: mov ecx, esi */ r_ecx = r_esi;
    /* 005a046a: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0470: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0476: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x5a047bu); f_0052069c();
    /* 005a047b: jmp 0x5a0489 */ goto L_005a0489;
L_005a047d:; BB(0x005a047d);
    /* 005a047d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a047f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a0481: mov ecx, esi */ r_ecx = r_esi;
    /* 005a0483: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0489u); call_ind(t); }
L_005a0489:; BB(0x005a0489);
    /* 005a0489: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005a048f: fcomp dword ptr [0x929ce4] */ fx_compare(ST(0), R_F32((u32)(0x929ce4u))); FPOP();
    /* 005a0495: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0497: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0498: jb 0x5a04eb */ if (fC) goto L_005a04eb;
L_005a049a:; BB(0x005a049a);
    /* 005a049a: mov dword ptr [esi + 0x42c], 1 */ W32((u32)(r_esi+0x42cu), 0x1u);
    /* 005a04a4: mov eax, 0x41c80000 */ r_eax = 0x41c80000u;
    /* 005a04a9: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 005a04af: jmp 0x5a04eb */ goto L_005a04eb;
L_005a04b1:; BB(0x005a04b1);
    /* 005a04b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a04b4: jne 0x5a04eb */ if (!fZ) goto L_005a04eb;
L_005a04b6:; BB(0x005a04b6);
    /* 005a04b6: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005a04bc: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 005a04c2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a04c5: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 005a04cb: mov eax, dword ptr [eax*4 + 0xa74744] */ r_eax = R32((u32)(r_eax*4+0xa74744u));
    /* 005a04d2: cmp edx, dword ptr [eax + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a04d5: jg 0x5a04e1 */ if ((!fZ&&fS==fO)) goto L_005a04e1;
L_005a04d7:; BB(0x005a04d7);
    /* 005a04d7: mov dword ptr [esi + 0xc0], 0x41c80000 */ W32((u32)(r_esi+0xc0u), 0x41c80000u);
L_005a04e1:; BB(0x005a04e1);
    /* 005a04e1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a04e3: mov ecx, esi */ r_ecx = r_esi;
    /* 005a04e5: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a04ebu); call_ind(t); }
L_005a04eb:; BB(0x005a04eb);
    /* 005a04eb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a04ed: mov ecx, esi */ r_ecx = r_esi;
    /* 005a04ef: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a04f5u); call_ind(t); }
    /* 005a04f5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a04f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a04f9: ret 4 */ FN_RET(0x005a0348); r_esp += 8; return;
L_005a04fc:; BB(0x005a04fc);
    /* 005a04fc: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 005a0502: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a0504: je 0x5a0510 */ if (fZ) goto L_005a0510;
L_005a0506:; BB(0x005a0506);
    /* 005a0506: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a0508: mov ecx, esi */ r_ecx = r_esi;
    /* 005a050a: call dword ptr [eax + 0x1b4] */ { u32 t = R32((u32)(r_eax+0x1b4u)); r_esp -= 4; W32(r_esp, 0x5a0510u); call_ind(t); }
L_005a0510:; BB(0x005a0510);
    /* 005a0510: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a0514: ret 4 */ FN_RET(0x005a0348); r_esp += 8; return;
L_005a0517:; BB(0x005a0517);
    /* 005a0517: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0519: mov eax, 7 */ r_eax = 0x7u;
    /* 005a051e: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005a0525: mov ecx, esi */ r_ecx = r_esi;
    /* 005a0527: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a052cu); f_0051f664();
    /* 005a052c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a052e: mov ecx, esi */ r_ecx = r_esi;
    /* 005a0530: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a0536u); call_ind(t); }
    /* 005a0536: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 005a053c: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a053f: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a0544: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 005a054a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a054c: mov dword ptr [esi + 0x42c], edx */ W32((u32)(r_esi+0x42cu), r_edx);
    /* 005a0552: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 005a0558: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a055b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a055c: ret 4 */ FN_RET(0x005a0348); r_esp += 8; return;
}

void f_005a0560(void) /* sub_5A0560 */
{
    FN_ENTER(0x005a0560);
    /* 005a0560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a0561: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a0563: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a0565: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a056a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a056fu); f_007aaa30();
    /* 005a056f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0571: jne 0x5a0583 */ if (!fZ) goto L_005a0583;
L_005a0573:; BB(0x005a0573);
    /* 005a0573: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0578: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a057a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a057fu); f_007aaa30();
    /* 005a057f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a0581: je 0x5a058e */ if (fZ) goto L_005a058e;
L_005a0583:; BB(0x005a0583);
    /* 005a0583: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005a0586: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0587: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a0589: call 0x59ded8 */ r_esp -= 4; W32(r_esp, 0x5a058eu); f_0059ded8();
L_005a058e:; BB(0x005a058e);
    /* 005a058e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a058f: ret  */ FN_RET(0x005a0560); r_esp += 4; return;
}

void f_005a0590(void) /* sub_5A0590 */
{
    FN_ENTER(0x005a0590);
    /* 005a0590: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0591: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0592: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0595: mov edi, ecx */ r_edi = r_ecx;
    /* 005a0597: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005a059b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a059e: je 0x5a0a1e */ if (fZ) goto L_005a0a1e;
L_005a05a4:; BB(0x005a05a4);
    /* 005a05a4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a05a7: je 0x5a08ea */ if (fZ) goto L_005a08ea;
L_005a05ad:; BB(0x005a05ad);
    /* 005a05ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a05af: jne 0x5a08b9 */ if (!fZ) goto L_005a08b9;
L_005a05b5:; BB(0x005a05b5);
    /* 005a05b5: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a05bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a05bd: je 0x5a09d3 */ if (fZ) goto L_005a09d3;
L_005a05c3:; BB(0x005a05c3);
    /* 005a05c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a05c6: je 0x5a0922 */ if (fZ) goto L_005a0922;
L_005a05cc:; BB(0x005a05cc);
    /* 005a05cc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a05cf: je 0x5a0702 */ if (fZ) goto L_005a0702;
L_005a05d5:; BB(0x005a05d5);
    /* 005a05d5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a05d8: jne 0x5a0641 */ if (!fZ) goto L_005a0641;
L_005a05da:; BB(0x005a05da);
    /* 005a05da: mov ecx, edi */ r_ecx = r_edi;
    /* 005a05dc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a05e1u); f_007aa094();
    /* 005a05e1: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a05e7: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 005a05ed: fcomp dword ptr [0x929cbc] */ fx_compare(ST(0), R_F32((u32)(0x929cbcu))); FPOP();
    /* 005a05f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a05f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a05f6: jb 0x5a0613 */ if (fC) goto L_005a0613;
L_005a05f8:; BB(0x005a05f8);
    /* 005a05f8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a05fa: mov dword ptr [edi + 0x42c], 4 */ W32((u32)(r_edi+0x42cu), 0x4u);
    /* 005a0604: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0606: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x5a060cu); call_ind(t); }
    /* 005a060c: mov ecx, edi */ r_ecx = r_edi;
    /* 005a060e: call 0x5a0304 */ r_esp -= 4; W32(r_esp, 0x5a0613u); f_005a0304();
L_005a0613:; BB(0x005a0613);
    /* 005a0613: push dword ptr [edi + 0x43c] */ { u32 v = R32((u32)(r_edi+0x43cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0619: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a061f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0621: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0627: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x5a062cu); f_00520adc();
    /* 005a062c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a062e: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0630: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0636u); call_ind(t); }
    /* 005a0636: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a063c: jmp 0x5a085b */ goto L_005a085b;
L_005a0641:; BB(0x005a0641);
    /* 005a0641: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0644: jne 0x5a085b */ if (!fZ) goto L_005a085b;
L_005a064a:; BB(0x005a064a);
    /* 005a064a: mov ecx, edi */ r_ecx = r_edi;
    /* 005a064c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0651u); f_007aa094();
    /* 005a0651: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0656: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0658: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a065du); f_007aaa30();
    /* 005a065d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a065f: je 0x5a06ba */ if (fZ) goto L_005a06ba;
L_005a0661:; BB(0x005a0661);
    /* 005a0661: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0663: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x5a0668u); f_00521324();
    /* 005a0668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a066a: je 0x5a06a5 */ if (fZ) goto L_005a06a5;
L_005a066c:; BB(0x005a066c);
    /* 005a066c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0671: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0672: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 005a0678: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a067a: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5a067du); call_ind(t); }
    /* 005a067d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a067f: je 0x5a06a5 */ if (fZ) goto L_005a06a5;
L_005a0681:; BB(0x005a0681);
    /* 005a0681: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0686: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0687: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 005a068d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a068f: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5a0692u); call_ind(t); }
    /* 005a0692: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a0694: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0699: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a069a: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 005a06a0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a06a2: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5a06a5u); call_ind(t); }
L_005a06a5:; BB(0x005a06a5);
    /* 005a06a5: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005a06a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a06aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a06ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a06ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a06ad: push 0x245 */ { u32 v = 0x245u; r_esp -= 4; W32(r_esp, v); }
    /* 005a06b2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a06b7u); f_00814298();
    /* 005a06b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a06ba:; BB(0x005a06ba);
    /* 005a06ba: fld dword ptr [edi + 0x43c] */ FPUSH(R_F32((u32)(r_edi+0x43cu)));
    /* 005a06c0: fmul dword ptr [0x929cc8] */ ST(0) = ST(0) * R_F32((u32)(0x929cc8u));
    /* 005a06c6: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 005a06cc: mov edx, dword ptr [edi + 0x3b0] */ r_edx = R32((u32)(r_edi+0x3b0u));
    /* 005a06d2: fst dword ptr [edi + 0x43c] */ W_F32((u32)(r_edi+0x43cu), ST(0));
    /* 005a06d8: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a06db: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a06df: mov ecx, edi */ r_ecx = r_edi;
    /* 005a06e1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a06e4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a06e8: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5a06edu); f_005207c4();
    /* 005a06ed: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a06ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005a06f1: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a06f7u); call_ind(t); }
    /* 005a06f7: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a06fd: jmp 0x5a085b */ goto L_005a085b;
L_005a0702:; BB(0x005a0702);
    /* 005a0702: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0704: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0709u); f_007aa094();
    /* 005a0709: mov ecx, edi */ r_ecx = r_edi;
    /* 005a070b: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5a0710u); f_00521238();
    /* 005a0710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0712: je 0x5a0722 */ if (fZ) goto L_005a0722;
L_005a0714:; BB(0x005a0714);
    /* 005a0714: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0716: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a071bu); f_005213d8();
    /* 005a071b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a071d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a0722u); f_00521410();
L_005a0722:; BB(0x005a0722);
    /* 005a0722: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a0728: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 005a072e: fcomp dword ptr [0x929cb8] */ fx_compare(ST(0), R_F32((u32)(0x929cb8u))); FPOP();
    /* 005a0734: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0736: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0737: jb 0x5a0841 */ if (fC) goto L_005a0841;
L_005a073d:; BB(0x005a073d);
    /* 005a073d: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 005a0740: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 005a0746: fsub dword ptr [0x929df0] */ ST(0) = ST(0) - R_F32((u32)(0x929df0u));
    /* 005a074c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a074f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a0753: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a0756: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0758: call 0x59ddc0 */ r_esp -= 4; W32(r_esp, 0x5a075du); f_0059ddc0();
    /* 005a075d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a075f: je 0x5a0770 */ if (fZ) goto L_005a0770;
L_005a0761:; BB(0x005a0761);
    /* 005a0761: mov dword ptr [edi + 0x42c], 5 */ W32((u32)(r_edi+0x42cu), 0x5u);
    /* 005a076b: jmp 0x5a0841 */ goto L_005a0841;
L_005a0770:; BB(0x005a0770);
    /* 005a0770: fld dword ptr [0x929cc4] */ FPUSH(R_F32((u32)(0x929cc4u)));
    /* 005a0776: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 005a077c: fsub dword ptr [0x929df0] */ ST(0) = ST(0) - R_F32((u32)(0x929df0u));
    /* 005a0782: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005a0785: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005a0788: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 005a078b: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005a0791: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005a0797: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0799: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005a079b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005a079d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005a079f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a07a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a07a4: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005a07a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a07aa: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a07ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a07b0: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005a07b4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a07b8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005a07bc: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 005a07c0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a07c4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a07c7: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005a07c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a07ca: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x5a07cfu); f_00780630();
    /* 005a07cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a07d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a07d4: je 0x5a0837 */ if (fZ) goto L_005a0837;
L_005a07d6:; BB(0x005a07d6);
    /* 005a07d6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a07d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a07da: call 0x807cac */ r_esp -= 4; W32(r_esp, 0x5a07dfu); f_00807cac();
    /* 005a07df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a07e0: movsx edx, word ptr [edi + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 005a07e4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a07e6: je 0x5a07f4 */ if (fZ) goto L_005a07f4;
L_005a07e8:; BB(0x005a07e8);
    /* 005a07e8: mov dword ptr [edi + 0x42c], 5 */ W32((u32)(r_edi+0x42cu), 0x5u);
    /* 005a07f2: jmp 0x5a0841 */ goto L_005a0841;
L_005a07f4:; BB(0x005a07f4);
    /* 005a07f4: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 005a07fa: fsub dword ptr [0x929df0] */ ST(0) = ST(0) - R_F32((u32)(0x929df0u));
    /* 005a0800: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0802: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0804: mov dword ptr [edi + 0x42c], 3 */ W32((u32)(r_edi+0x42cu), 0x3u);
    /* 005a080e: fdiv dword ptr [0xa74718] */ ST(0) = ST(0) / R_F32((u32)(0xa74718u));
    /* 005a0814: fstp dword ptr [edi + 0x43c] */ W_F32((u32)(r_edi+0x43cu), ST(0)); FPOP();
    /* 005a081a: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x5a0820u); call_ind(t); }
    /* 005a0820: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005a0823: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0826: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0827: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a0828: push 0x242 */ { u32 v = 0x242u; r_esp -= 4; W32(r_esp, v); }
    /* 005a082d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a0832u); f_00814298();
    /* 005a0832: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0835: jmp 0x5a0841 */ goto L_005a0841;
L_005a0837:; BB(0x005a0837);
    /* 005a0837: mov dword ptr [edi + 0x42c], 5 */ W32((u32)(r_edi+0x42cu), 0x5u);
L_005a0841:; BB(0x005a0841);
    /* 005a0841: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0843: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0845: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a084bu); call_ind(t); }
    /* 005a084b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a084d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a084f: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0855u); call_ind(t); }
    /* 005a0855: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
L_005a085b:; BB(0x005a085b);
    /* 005a085b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a085d: je 0x5a091a */ if (fZ) goto L_005a091a;
L_005a0863:; BB(0x005a0863);
    /* 005a0863: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0869: mov ecx, dword ptr [0xa74768] */ r_ecx = R32((u32)(0xa74768u));
    /* 005a086f: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5a0874u); f_00579de0();
    /* 005a0874: mov ebx, eax */ r_ebx = r_eax;
    /* 005a0876: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0878: je 0x5a091a */ if (fZ) goto L_005a091a;
L_005a087e:; BB(0x005a087e);
    /* 005a087e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a0883u); f_0082d7b0();
    /* 005a0883: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a0885: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5a088au); f_00830cd8();
    /* 005a088a: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005a088d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a0892u); f_0082d838();
    /* 005a0892: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a0895: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a0897: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a089cu); f_0082d8bc();
    /* 005a089c: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005a08a0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a08a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a08a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a08a5: mov edx, ebx */ r_edx = r_ebx;
    /* 005a08a7: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5a08acu); f_0082f940();
    /* 005a08ac: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a08b1u); f_0082da80();
    /* 005a08b1: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a08b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a08b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a08b6: ret 4 */ FN_RET(0x005a0590); r_esp += 8; return;
L_005a08b9:; BB(0x005a08b9);
    /* 005a08b9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a08bc: jne 0x5a091a */ if (!fZ) goto L_005a091a;
L_005a08be:; BB(0x005a08be);
    /* 005a08be: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 005a08c1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005a08c3: mov dword ptr [edi + 0x3dc], 0 */ W32((u32)(r_edi+0x3dcu), 0x0u);
    /* 005a08cd: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 005a08d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005a08d5: call dword ptr [edx + 0x178] */ { u32 t = R32((u32)(r_edx+0x178u)); r_esp -= 4; W32(r_esp, 0x5a08dbu); call_ind(t); }
    /* 005a08db: mov ecx, edi */ r_ecx = r_edi;
    /* 005a08dd: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5a08e2u); f_00520be8();
    /* 005a08e2: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a08e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a08e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a08e7: ret 4 */ FN_RET(0x005a0590); r_esp += 8; return;
L_005a08ea:; BB(0x005a08ea);
    /* 005a08ea: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a08f0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a08f3: je 0x5a08ff */ if (fZ) goto L_005a08ff;
L_005a08f5:; BB(0x005a08f5);
    /* 005a08f5: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005a08fb: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a08fd: je 0x5a091a */ if (fZ) goto L_005a091a;
L_005a08ff:; BB(0x005a08ff);
    /* 005a08ff: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0901: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0903: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0909u); call_ind(t); }
    /* 005a0909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a090b: je 0x5a0a0d */ if (fZ) goto L_005a0a0d;
L_005a0911:; BB(0x005a0911);
    /* 005a0911: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0913: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0915: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a091au); f_0051f62c();
L_005a091a:; BB(0x005a091a);
    /* 005a091a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a091d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a091e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a091f: ret 4 */ FN_RET(0x005a0590); r_esp += 8; return;
L_005a0922:; BB(0x005a0922);
    /* 005a0922: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0924: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0929u); f_007aa094();
    /* 005a0929: mov ecx, edi */ r_ecx = r_edi;
    /* 005a092b: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5a0930u); f_00521238();
    /* 005a0930: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0932: jne 0x5a093b */ if (!fZ) goto L_005a093b;
L_005a0934:; BB(0x005a0934);
    /* 005a0934: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a0937: mov eax, edx */ r_eax = r_edx;
    /* 005a0939: jmp 0x5a0988 */ goto L_005a0988;
L_005a093b:; BB(0x005a093b);
    /* 005a093b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a093d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a0942u); f_005213d8();
    /* 005a0942: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0944: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a0949u); f_00521410();
    /* 005a0949: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005a094f: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005a0955: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a0957: fmul qword ptr [0x929bc8] */ ST(0) = ST(0) * R_F64((u32)(0x929bc8u));
    /* 005a095d: fdiv qword ptr [0x929bc0] */ ST(0) = ST(0) / R_F64((u32)(0x929bc0u));
    /* 005a0963: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a0966: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 005a096a: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 005a096f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a0974: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005a0978: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 005a097c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a0980: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005a0984: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_005a0988:; BB(0x005a0988);
    /* 005a0988: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a098d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a098e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a098f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a0994u); f_007a8c74();
    /* 005a0994: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a0997: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a099c: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005a099f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a09a1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a09a6u); f_007aaa30();
    /* 005a09a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a09a8: je 0x5a09b4 */ if (fZ) goto L_005a09b4;
L_005a09aa:; BB(0x005a09aa);
    /* 005a09aa: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
L_005a09b4:; BB(0x005a09b4);
    /* 005a09b4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a09b6: mov ecx, edi */ r_ecx = r_edi;
    /* 005a09b8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a09beu); call_ind(t); }
    /* 005a09be: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a09c0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a09c2: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a09c8u); call_ind(t); }
    /* 005a09c8: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a09ce: jmp 0x5a085b */ goto L_005a085b;
L_005a09d3:; BB(0x005a09d3);
    /* 005a09d3: mov ecx, edi */ r_ecx = r_edi;
    /* 005a09d5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a09dau); f_007aa094();
    /* 005a09da: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005a09e0: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a09e2: je 0x5a09ee */ if (fZ) goto L_005a09ee;
L_005a09e4:; BB(0x005a09e4);
    /* 005a09e4: mov dword ptr [edi + 0x42c], 1 */ W32((u32)(r_edi+0x42cu), 0x1u);
L_005a09ee:; BB(0x005a09ee);
    /* 005a09ee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a09f0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a09f2: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a09f8u); call_ind(t); }
    /* 005a09f8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a09fa: mov ecx, edi */ r_ecx = r_edi;
    /* 005a09fc: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0a02u); call_ind(t); }
    /* 005a0a02: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a0a08: jmp 0x5a085b */ goto L_005a085b;
L_005a0a0d:; BB(0x005a0a0d);
    /* 005a0a0d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a0f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0a11: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a0a16u); f_0051f62c();
    /* 005a0a16: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0a19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a0a1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0a1b: ret 4 */ FN_RET(0x005a0590); r_esp += 8; return;
L_005a0a1e:; BB(0x005a0a1e);
    /* 005a0a1e: mov eax, 6 */ r_eax = 0x6u;
    /* 005a0a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a24: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a0a2b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0a2d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a0a32u); f_0051f664();
    /* 005a0a32: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0a34: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0a36: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a0a3cu); call_ind(t); }
    /* 005a0a3c: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005a0a42: mov dword ptr [edi + 0x42c], 0 */ W32((u32)(r_edi+0x42cu), 0x0u);
    /* 005a0a4c: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a0a4f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0a51: mov dword ptr [edi + 0x438], 0 */ W32((u32)(r_edi+0x438u), 0x0u);
    /* 005a0a5b: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a0a60: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005a0a66: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5a0a6bu); f_00520bdc();
    /* 005a0a6b: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0a6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a0a6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0a70: ret 4 */ FN_RET(0x005a0590); r_esp += 8; return;
}

void f_005a0a74(void) /* sub_5A0A74 */
{
    FN_ENTER(0x005a0a74);
    /* 005a0a74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0a76: mov edi, ecx */ r_edi = r_ecx;
    /* 005a0a78: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a0a7c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0a7f: je 0x5a0b9d */ if (fZ) goto L_005a0b9d;
L_005a0a85:; BB(0x005a0a85);
    /* 005a0a85: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0a88: je 0x5a0b40 */ if (fZ) goto L_005a0b40;
L_005a0a8e:; BB(0x005a0a8e);
    /* 005a0a8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a0a90: jne 0x5a0b80 */ if (!fZ) goto L_005a0b80;
L_005a0a96:; BB(0x005a0a96);
    /* 005a0a96: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0a98: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0a9du); f_007aa094();
    /* 005a0a9d: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0aa2: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0aa4: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5a0aa9u); f_00520ea0();
    /* 005a0aa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a0aab: je 0x5a0b80 */ if (fZ) goto L_005a0b80;
L_005a0ab1:; BB(0x005a0ab1);
    /* 005a0ab1: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0ab3: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a0ab8u); f_005213d8();
    /* 005a0ab8: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0aba: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a0abfu); f_00521410();
    /* 005a0abf: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0ac1: call 0x5a0560 */ r_esp -= 4; W32(r_esp, 0x5a0ac6u); f_005a0560();
    /* 005a0ac6: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005a0ac9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a0aceu); f_0082dcbc();
    /* 005a0ace: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a0ad1: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005a0ad4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a0ad9u); f_0082ddd8();
    /* 005a0ad9: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005a0adf: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005a0ae2: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005a0ae8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005a0aea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a0aec: fstp dword ptr [edi + 0x43c] */ W_F32((u32)(r_edi+0x43cu), ST(0)); FPOP();
    /* 005a0af2: mov ecx, 0x1000 */ r_ecx = 0x1000u;
    /* 005a0af7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a0afcu); f_0082ddd8();
    /* 005a0afc: fcomp dword ptr [edi + 0x43c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x43cu))); FPOP();
    /* 005a0b02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0b04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0b05: jbe 0x5a0b1f */ if ((fC||fZ)) goto L_005a0b1f;
L_005a0b07:; BB(0x005a0b07);
    /* 005a0b07: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b0c: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b0e: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x5a0b13u); f_005214cc();
    /* 005a0b13: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0b15: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b17: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0b1du); call_ind(t); }
    /* 005a0b1d: jmp 0x5a0b31 */ goto L_005a0b31;
L_005a0b1f:; BB(0x005a0b1f);
    /* 005a0b1f: push dword ptr [edi + 0x438] */ { u32 v = R32((u32)(r_edi+0x438u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0b25: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b2a: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b2c: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x5a0b31u); f_00521528();
L_005a0b31:; BB(0x005a0b31);
    /* 005a0b31: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0b33: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b35: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0b3bu); call_ind(t); }
    /* 005a0b3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0b3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0b3d: ret 4 */ FN_RET(0x005a0a74); r_esp += 8; return;
L_005a0b40:; BB(0x005a0b40);
    /* 005a0b40: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005a0b46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0b48: je 0x5a0b85 */ if (fZ) goto L_005a0b85;
L_005a0b4a:; BB(0x005a0b4a);
    /* 005a0b4a: push dword ptr [edi + 0x43c] */ { u32 v = R32((u32)(r_edi+0x43cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a0b50: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b52: call 0x5a0bfc */ r_esp -= 4; W32(r_esp, 0x5a0b57u); f_005a0bfc();
    /* 005a0b57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0b59: je 0x5a0b69 */ if (fZ) goto L_005a0b69;
L_005a0b5b:; BB(0x005a0b5b);
    /* 005a0b5b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b5d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b5f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a0b64u); f_0051f62c();
    /* 005a0b64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0b65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0b66: ret 4 */ FN_RET(0x005a0a74); r_esp += 8; return;
L_005a0b69:; BB(0x005a0b69);
    /* 005a0b69: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0b6b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b6d: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5a0b73u); call_ind(t); }
    /* 005a0b73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a0b75: je 0x5a0b80 */ if (fZ) goto L_005a0b80;
L_005a0b77:; BB(0x005a0b77);
    /* 005a0b77: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b79: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b7b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a0b80u); f_0051f62c();
L_005a0b80:; BB(0x005a0b80);
    /* 005a0b80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0b81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0b82: ret 4 */ FN_RET(0x005a0a74); r_esp += 8; return;
L_005a0b85:; BB(0x005a0b85);
    /* 005a0b85: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0b87: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b89: call dword ptr [eax + 0x1c4] */ { u32 t = R32((u32)(r_eax+0x1c4u)); r_esp -= 4; W32(r_esp, 0x5a0b8fu); call_ind(t); }
    /* 005a0b8f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b91: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0b93: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a0b98u); f_0051f62c();
    /* 005a0b98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0b99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0b9a: ret 4 */ FN_RET(0x005a0a74); r_esp += 8; return;
L_005a0b9d:; BB(0x005a0b9d);
    /* 005a0b9d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0b9f: mov eax, 0xa */ r_eax = 0xau;
    /* 005a0ba4: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a0bab: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0bad: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a0bb2u); f_0051f664();
    /* 005a0bb2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0bb4: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0bb6: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a0bbcu); call_ind(t); }
    /* 005a0bbc: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005a0bc2: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 005a0bc8: mov dword ptr [edi + 0x3b4], 0x43960000 */ W32((u32)(r_edi+0x3b4u), 0x43960000u);
    /* 005a0bd2: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a0bd5: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005a0bdb: mov eax, dword ptr [edx*4 + 0xa74744] */ r_eax = R32((u32)(r_edx*4+0xa74744u));
    /* 005a0be2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a0be4: mov dword ptr [edi + 0x438], eax */ W32((u32)(r_edi+0x438u), r_eax);
    /* 005a0bea: mov dword ptr [edi + 0x43c], 0 */ W32((u32)(r_edi+0x43cu), 0x0u);
    /* 005a0bf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0bf5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0bf6: ret 4 */ FN_RET(0x005a0a74); r_esp += 8; return;
}

void f_005a0bfc(void) /* sub_5A0BFC */
{
    FN_ENTER(0x005a0bfc);
    /* 005a0bfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0bfd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a0c00: mov edi, ecx */ r_edi = r_ecx;
    /* 005a0c02: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005a0c08: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005a0c0b: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005a0c0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c0f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a0c12: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5a0c17u); f_0082e900();
    /* 005a0c17: fcomp dword ptr [0x929ca8] */ fx_compare(ST(0), R_F32((u32)(0x929ca8u))); FPOP();
    /* 005a0c1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0c1f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0c20: jae 0x5a0c7b */ if (!fC) goto L_005a0c7b;
L_005a0c22:; BB(0x005a0c22);
    /* 005a0c22: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 005a0c28: fcomp dword ptr [0x929ca4] */ fx_compare(ST(0), R_F32((u32)(0x929ca4u))); FPOP();
    /* 005a0c2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0c30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0c31: jbe 0x5a0c3c */ if ((fC||fZ)) goto L_005a0c3c;
L_005a0c33:; BB(0x005a0c33);
    /* 005a0c33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0c35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0c38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0c39: ret 4 */ FN_RET(0x005a0bfc); r_esp += 8; return;
L_005a0c3c:; BB(0x005a0c3c);
    /* 005a0c3c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005a0c3f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a0c44u); f_0082dcbc();
    /* 005a0c44: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a0c47: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005a0c4a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a0c4fu); f_0082ddd8();
    /* 005a0c4f: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 005a0c55: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005a0c58: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005a0c5e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005a0c60: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a0c62: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a0c66: mov ecx, 0x1e00 */ r_ecx = 0x1e00u;
    /* 005a0c6b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a0c70u); f_0082ddd8();
    /* 005a0c70: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005a0c74: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a0c76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0c78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0c79: jae 0x5a0c84 */ if (!fC) goto L_005a0c84;
L_005a0c7b:; BB(0x005a0c7b);
    /* 005a0c7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0c7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0c80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0c81: ret 4 */ FN_RET(0x005a0bfc); r_esp += 8; return;
L_005a0c84:; BB(0x005a0c84);
    /* 005a0c84: mov eax, 1 */ r_eax = 0x1u;
    /* 005a0c89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a0c8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0c8d: ret 4 */ FN_RET(0x005a0bfc); r_esp += 8; return;
}

void f_005a0c90(void) /* sub_5A0C90 */
{
    FN_ENTER(0x005a0c90);
    /* 005a0c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0c92: mov edi, ecx */ r_edi = r_ecx;
    /* 005a0c94: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a0c98: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0c9b: je 0x5a0e6c */ if (fZ) goto L_005a0e6c;
L_005a0ca1:; BB(0x005a0ca1);
    /* 005a0ca1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0ca4: je 0x5a0e53 */ if (fZ) goto L_005a0e53;
L_005a0caa:; BB(0x005a0caa);
    /* 005a0caa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0cac: jne 0x5a0e30 */ if (!fZ) goto L_005a0e30;
L_005a0cb2:; BB(0x005a0cb2);
    /* 005a0cb2: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a0cb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0cba: je 0x5a0dbd */ if (fZ) goto L_005a0dbd;
L_005a0cc0:; BB(0x005a0cc0);
    /* 005a0cc0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0cc3: jne 0x5a0d78 */ if (!fZ) goto L_005a0d78;
L_005a0cc9:; BB(0x005a0cc9);
    /* 005a0cc9: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0ccb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0cd0u); f_007aa094();
    /* 005a0cd0: fld dword ptr [0x929c9c] */ FPUSH(R_F32((u32)(0x929c9cu)));
    /* 005a0cd6: fld dword ptr [0x929c94] */ FPUSH(R_F32((u32)(0x929c94u)));
    /* 005a0cdc: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a0ce2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005a0ce4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0ce6: fld dword ptr [edi + 0x438] */ FPUSH(R_F32((u32)(r_edi+0x438u)));
    /* 005a0cec: fsub dword ptr [0x929c98] */ ST(0) = ST(0) - R_F32((u32)(0x929c98u));
    /* 005a0cf2: fld dword ptr [edi + 0x3d8] */ FPUSH(R_F32((u32)(r_edi+0x3d8u)));
    /* 005a0cf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0cf9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005a0cfb: fchs  */ ST(0) = -ST(0);
    /* 005a0cfd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a0cff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0d01: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0d03: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005a0d05: jb 0x5a0d09 */ if (fC) goto L_005a0d09;
L_005a0d07:; BB(0x005a0d07);
    /* 005a0d07: fst st(2) */ ST(2) = ST(0);
L_005a0d09:; BB(0x005a0d09);
    /* 005a0d09: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a0d0b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0d0d: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
    /* 005a0d13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0d14: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005a0d16: jb 0x5a0d1a */ if (fC) goto L_005a0d1a;
L_005a0d18:; BB(0x005a0d18);
    /* 005a0d18: fst st(2) */ ST(2) = ST(0);
L_005a0d1a:; BB(0x005a0d1a);
    /* 005a0d1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a0d1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0d1e: fst dword ptr [edi + 0x438] */ W_F32((u32)(r_edi+0x438u), ST(0));
    /* 005a0d24: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a0d26: fstp dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0)); FPOP();
    /* 005a0d2c: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x5a0d31u); f_005944ec();
    /* 005a0d31: fld dword ptr [edi + 0x43c] */ FPUSH(R_F32((u32)(r_edi+0x43cu)));
    /* 005a0d37: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005a0d3a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0d3c: fst dword ptr [edi + 0x43c] */ W_F32((u32)(r_edi+0x43cu), ST(0));
    /* 005a0d42: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005a0d44: fsubr dword ptr [edi + 0x3d8] */ ST(0) = R_F32((u32)(r_edi+0x3d8u)) - ST(0);
    /* 005a0d4a: fcom dword ptr [edi + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3cu))); 
    /* 005a0d4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0d4f: fstp dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0)); FPOP();
    /* 005a0d55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0d56: jae 0x5a0e01 */ if (!fC) goto L_005a0e01;
L_005a0d5c:; BB(0x005a0d5c);
    /* 005a0d5c: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
    /* 005a0d66: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 005a0d6c: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0d6e: call 0x5a0304 */ r_esp -= 4; W32(r_esp, 0x5a0d73u); f_005a0304();
    /* 005a0d73: jmp 0x5a0e01 */ goto L_005a0e01;
L_005a0d78:; BB(0x005a0d78);
    /* 005a0d78: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0d7b: jne 0x5a0e01 */ if (!fZ) goto L_005a0e01;
L_005a0d81:; BB(0x005a0d81);
    /* 005a0d81: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005a0d87: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a0d89: je 0x5a0db4 */ if (fZ) goto L_005a0db4;
L_005a0d8b:; BB(0x005a0d8b);
    /* 005a0d8b: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005a0d8e: mov dword ptr [edi + 0x42c], 3 */ W32((u32)(r_edi+0x42cu), 0x3u);
    /* 005a0d98: mov eax, 9 */ r_eax = 0x9u;
    /* 005a0d9d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a0da4: mov dword ptr [edi + 0x3dc], 0 */ W32((u32)(r_edi+0x3dcu), 0x0u);
    /* 005a0dae: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
L_005a0db4:; BB(0x005a0db4);
    /* 005a0db4: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0db6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0dbbu); f_007aa094();
    /* 005a0dbb: jmp 0x5a0e01 */ goto L_005a0e01;
L_005a0dbd:; BB(0x005a0dbd);
    /* 005a0dbd: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0dbf: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x5a0dc4u); f_005944ec();
    /* 005a0dc4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a0dc7: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0dc9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0dceu); f_007aa094();
    /* 005a0dce: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0dd0: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x5a0dd5u); f_005944ec();
    /* 005a0dd5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a0dd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0dda: fst dword ptr [edi + 0x43c] */ W_F32((u32)(r_edi+0x43cu), ST(0));
    /* 005a0de0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005a0de2: fadd dword ptr [edi + 0x3d8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3d8u));
    /* 005a0de8: fst dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0));
    /* 005a0dee: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005a0df1: fstp dword ptr [edi + 0x3dc] */ W_F32((u32)(r_edi+0x3dcu), ST(0)); FPOP();
    /* 005a0df7: mov dword ptr [edi + 0x42c], 1 */ W32((u32)(r_edi+0x42cu), 0x1u);
L_005a0e01:; BB(0x005a0e01);
    /* 005a0e01: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0e03: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e05: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0e0bu); call_ind(t); }
    /* 005a0e0b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e0d: call 0x5a0ed0 */ r_esp -= 4; W32(r_esp, 0x5a0e12u); f_005a0ed0();
    /* 005a0e12: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0e14: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e16: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0e1cu); call_ind(t); }
    /* 005a0e1c: fld dword ptr [edi + 0x3d8] */ FPUSH(R_F32((u32)(r_edi+0x3d8u)));
    /* 005a0e22: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005a0e25: fstp dword ptr [edi + 0x3dc] */ W_F32((u32)(r_edi+0x3dcu), ST(0)); FPOP();
    /* 005a0e2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0e2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0e2d: ret 4 */ FN_RET(0x005a0c90); r_esp += 8; return;
L_005a0e30:; BB(0x005a0e30);
    /* 005a0e30: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a0e33: jne 0x5a0e67 */ if (!fZ) goto L_005a0e67;
L_005a0e35:; BB(0x005a0e35);
    /* 005a0e35: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005a0e3b: mov dword ptr [edi + 0x3dc], 0 */ W32((u32)(r_edi+0x3dcu), 0x0u);
    /* 005a0e45: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a0e48: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005a0e4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0e4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0e50: ret 4 */ FN_RET(0x005a0c90); r_esp += 8; return;
L_005a0e53:; BB(0x005a0e53);
    /* 005a0e53: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a0e59: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a0e5c: jne 0x5a0e67 */ if (!fZ) goto L_005a0e67;
L_005a0e5e:; BB(0x005a0e5e);
    /* 005a0e5e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e60: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e62: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a0e67u); f_0051f62c();
L_005a0e67:; BB(0x005a0e67);
    /* 005a0e67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0e68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0e69: ret 4 */ FN_RET(0x005a0c90); r_esp += 8; return;
L_005a0e6c:; BB(0x005a0e6c);
    /* 005a0e6c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a0e6e: mov eax, 1 */ r_eax = 0x1u;
    /* 005a0e73: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a0e7a: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e7c: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a0e81u); f_0051f664();
    /* 005a0e81: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0e83: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e85: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a0e8bu); call_ind(t); }
    /* 005a0e8b: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005a0e91: mov dword ptr [edi + 0x42c], 0 */ W32((u32)(r_edi+0x42cu), 0x0u);
    /* 005a0e9b: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a0e9e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a0ea1: mov dword ptr [edi + 0x438], 0 */ W32((u32)(r_edi+0x438u), 0x0u);
    /* 005a0eab: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005a0eb1: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0eb3: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x5a0eb8u); f_00520f04();
    /* 005a0eb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a0eba: je 0x5a0e67 */ if (fZ) goto L_005a0e67;
L_005a0ebc:; BB(0x005a0ebc);
    /* 005a0ebc: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0ebe: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a0ec3u); f_005213d8();
    /* 005a0ec3: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0ec5: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a0ecau); f_00521410();
    /* 005a0eca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0ecb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0ecc: ret 4 */ FN_RET(0x005a0c90); r_esp += 8; return;
}

void f_005a0ce0(void)
{
    FN_ENTER(0x005a0ce0);
    /* 005a0ce0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a0ce2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005a0ce4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0ce6: fld dword ptr [edi + 0x438] */ FPUSH(R_F32((u32)(r_edi+0x438u)));
    /* 005a0cec: fsub dword ptr [0x929c98] */ ST(0) = ST(0) - R_F32((u32)(0x929c98u));
    /* 005a0cf2: fld dword ptr [edi + 0x3d8] */ FPUSH(R_F32((u32)(r_edi+0x3d8u)));
    /* 005a0cf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0cf9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005a0cfb: fchs  */ ST(0) = -ST(0);
    /* 005a0cfd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a0cff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0d01: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0d03: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005a0d05: jb 0x5a0d09 */ if (fC) goto L_005a0d09;
L_005a0d07:; BB(0x005a0d07);
    /* 005a0d07: fst st(2) */ ST(2) = ST(0);
L_005a0d09:; BB(0x005a0d09);
    /* 005a0d09: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a0d0b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0d0d: fstp dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0)); FPOP();
    /* 005a0d13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0d14: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005a0d16: jb 0x5a0d1a */ if (fC) goto L_005a0d1a;
L_005a0d18:; BB(0x005a0d18);
    /* 005a0d18: fst st(2) */ ST(2) = ST(0);
L_005a0d1a:; BB(0x005a0d1a);
    /* 005a0d1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a0d1c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0d1e: fst dword ptr [edi + 0x438] */ W_F32((u32)(r_edi+0x438u), ST(0));
    /* 005a0d24: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a0d26: fstp dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0)); FPOP();
    /* 005a0d2c: call 0x5944ec */ r_esp -= 4; W32(r_esp, 0x5a0d31u); f_005944ec();
    /* 005a0d31: fld dword ptr [edi + 0x43c] */ FPUSH(R_F32((u32)(r_edi+0x43cu)));
    /* 005a0d37: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005a0d3a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a0d3c: fst dword ptr [edi + 0x43c] */ W_F32((u32)(r_edi+0x43cu), ST(0));
    /* 005a0d42: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005a0d44: fsubr dword ptr [edi + 0x3d8] */ ST(0) = R_F32((u32)(r_edi+0x3d8u)) - ST(0);
    /* 005a0d4a: fcom dword ptr [edi + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3cu))); 
    /* 005a0d4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0d4f: fstp dword ptr [edi + 0x3d8] */ W_F32((u32)(r_edi+0x3d8u), ST(0)); FPOP();
    /* 005a0d55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0d56: jae 0x5a0e01 */ if (!fC) goto L_005a0e01;
L_005a0d5c:; BB(0x005a0d5c);
    /* 005a0d5c: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
    /* 005a0d66: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 005a0d6c: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0d6e: call 0x5a0304 */ r_esp -= 4; W32(r_esp, 0x5a0d73u); f_005a0304();
    /* 005a0d73: jmp 0x5a0e01 */ goto L_005a0e01;
L_005a0e01:; BB(0x005a0e01);
    /* 005a0e01: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0e03: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e05: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0e0bu); call_ind(t); }
    /* 005a0e0b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e0d: call 0x5a0ed0 */ r_esp -= 4; W32(r_esp, 0x5a0e12u); f_005a0ed0();
    /* 005a0e12: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0e14: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0e16: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0e1cu); call_ind(t); }
    /* 005a0e1c: fld dword ptr [edi + 0x3d8] */ FPUSH(R_F32((u32)(r_edi+0x3d8u)));
    /* 005a0e22: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005a0e25: fstp dword ptr [edi + 0x3dc] */ W_F32((u32)(r_edi+0x3dcu), ST(0)); FPOP();
    /* 005a0e2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a0e2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0e2d: ret 4 */ FN_RET(0x005a0ce0); r_esp += 8; return;
}

void f_005a0ed0(void) /* sub_5A0ED0 */
{
    FN_ENTER(0x005a0ed0);
    /* 005a0ed0: fld dword ptr [ecx + 0x3d8] */ FPUSH(R_F32((u32)(r_ecx+0x3d8u)));
    /* 005a0ed6: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 005a0ed9: fcomp dword ptr [0x929c8c] */ fx_compare(ST(0), R_F32((u32)(0x929c8cu))); FPOP();
    /* 005a0edf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a0ee1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a0ee2: jbe 0x5a0eed */ if ((fC||fZ)) goto L_005a0eed;
L_005a0ee4:; BB(0x005a0ee4);
    /* 005a0ee4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a0ee6: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x5a0eecu); call_ind(t); }
    /* 005a0eec: ret  */ FN_RET(0x005a0ed0); r_esp += 4; return;
L_005a0eed:; BB(0x005a0eed);
    /* 005a0eed: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a0eef: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x5a0ef5u); call_ind(t); }
    /* 005a0ef5: ret  */ FN_RET(0x005a0ed0); r_esp += 4; return;
}

void f_005a0ef8(void) /* sub_5A0EF8 */
{
    FN_ENTER(0x005a0ef8);
    /* 005a0ef8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a0ef9: mov edi, ecx */ r_edi = r_ecx;
    /* 005a0efb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a0eff: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0f02: je 0x5a1014 */ if (fZ) goto L_005a1014;
L_005a0f08:; BB(0x005a0f08);
    /* 005a0f08: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0f0b: je 0x5a0ffc */ if (fZ) goto L_005a0ffc;
L_005a0f11:; BB(0x005a0f11);
    /* 005a0f11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0f13: jne 0x5a0fdf */ if (!fZ) goto L_005a0fdf;
L_005a0f19:; BB(0x005a0f19);
    /* 005a0f19: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0f1b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a0f20u); f_007aa094();
    /* 005a0f20: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a0f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0f28: je 0x5a0f83 */ if (fZ) goto L_005a0f83;
L_005a0f2a:; BB(0x005a0f2a);
    /* 005a0f2a: mov ecx, dword ptr [edi + 0x430] */ r_ecx = R32((u32)(r_edi+0x430u));
    /* 005a0f30: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 005a0f36: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a0f3c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a0f3f: mov dword ptr [edi + 0x42c], eax */ W32((u32)(r_edi+0x42cu), r_eax);
    /* 005a0f45: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a0f48: mov eax, 0xff */ r_eax = 0xffu;
    /* 005a0f4d: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a0f53: jl 0x5a0f57 */ if ((fS!=fO)) goto L_005a0f57;
L_005a0f55:; BB(0x005a0f55);
    /* 005a0f55: mov ecx, eax */ r_ecx = r_eax;
L_005a0f57:; BB(0x005a0f57);
    /* 005a0f57: mov dword ptr [edi + 0x430], ecx */ W32((u32)(r_edi+0x430u), r_ecx);
    /* 005a0f5d: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a0f60: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005a0f62: mov dword ptr [edi + 0x3f0], ecx */ W32((u32)(r_edi+0x3f0u), r_ecx);
    /* 005a0f68: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0f6a: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5a0f6fu); f_0052126c();
    /* 005a0f6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0f71: jne 0x5a0fb1 */ if (!fZ) goto L_005a0fb1;
L_005a0f73:; BB(0x005a0f73);
    /* 005a0f73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a0f75: mov dword ptr [edi + 0x42c], eax */ W32((u32)(r_edi+0x42cu), r_eax);
    /* 005a0f7b: mov dword ptr [edi + 0x3f0], eax */ W32((u32)(r_edi+0x3f0u), r_eax);
    /* 005a0f81: jmp 0x5a0fb1 */ goto L_005a0fb1;
L_005a0f83:; BB(0x005a0f83);
    /* 005a0f83: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a0f88: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0f8a: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5a0f8fu); f_00520ea0();
    /* 005a0f8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a0f91: je 0x5a0fb1 */ if (fZ) goto L_005a0fb1;
L_005a0f93:; BB(0x005a0f93);
    /* 005a0f93: mov dword ptr [edi + 0x42c], 1 */ W32((u32)(r_edi+0x42cu), 0x1u);
    /* 005a0f9d: mov dword ptr [edi + 0x3f0], 0x1c0000ff */ W32((u32)(r_edi+0x3f0u), 0x1c0000ffu);
    /* 005a0fa7: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
L_005a0fb1:; BB(0x005a0fb1);
    /* 005a0fb1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0fb3: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0fb5: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a0fbbu); call_ind(t); }
    /* 005a0fbb: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0fbd: call 0x5a0ed0 */ r_esp -= 4; W32(r_esp, 0x5a0fc2u); f_005a0ed0();
    /* 005a0fc2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a0fc4: mov ecx, edi */ r_ecx = r_edi;
    /* 005a0fc6: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a0fccu); call_ind(t); }
    /* 005a0fcc: fld dword ptr [edi + 0x3d8] */ FPUSH(R_F32((u32)(r_edi+0x3d8u)));
    /* 005a0fd2: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005a0fd5: fstp dword ptr [edi + 0x3dc] */ W_F32((u32)(r_edi+0x3dcu), ST(0)); FPOP();
    /* 005a0fdb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0fdc: ret 4 */ FN_RET(0x005a0ef8); r_esp += 8; return;
L_005a0fdf:; BB(0x005a0fdf);
    /* 005a0fdf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a0fe2: jne 0x5a1010 */ if (!fZ) goto L_005a1010;
L_005a0fe4:; BB(0x005a0fe4);
    /* 005a0fe4: mov dword ptr [edi + 0x3f0], 0x1c00ffff */ W32((u32)(r_edi+0x3f0u), 0x1c00ffffu);
    /* 005a0fee: mov dword ptr [edi + 0x3dc], 0 */ W32((u32)(r_edi+0x3dcu), 0x0u);
    /* 005a0ff8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a0ff9: ret 4 */ FN_RET(0x005a0ef8); r_esp += 8; return;
L_005a0ffc:; BB(0x005a0ffc);
    /* 005a0ffc: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 005a1002: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a1005: jle 0x5a1010 */ if ((fZ||fS!=fO)) goto L_005a1010;
L_005a1007:; BB(0x005a1007);
    /* 005a1007: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1009: mov ecx, edi */ r_ecx = r_edi;
    /* 005a100b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1010u); f_0051f62c();
L_005a1010:; BB(0x005a1010);
    /* 005a1010: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a1011: ret 4 */ FN_RET(0x005a0ef8); r_esp += 8; return;
L_005a1014:; BB(0x005a1014);
    /* 005a1014: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1016: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1018: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a101f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a1021: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a1026u); f_0051f664();
    /* 005a1026: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a1028: mov ecx, edi */ r_ecx = r_edi;
    /* 005a102a: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5a1030u); call_ind(t); }
    /* 005a1030: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 005a1036: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a1039: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005a103f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a1041: mov dword ptr [edi + 0x42c], edx */ W32((u32)(r_edi+0x42cu), r_edx);
    /* 005a1047: mov dword ptr [edi + 0x430], edx */ W32((u32)(r_edi+0x430u), r_edx);
    /* 005a104d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a104e: ret 4 */ FN_RET(0x005a0ef8); r_esp += 8; return;
}

