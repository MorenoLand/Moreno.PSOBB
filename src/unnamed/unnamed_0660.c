#include "protos.h"

void f_00660000(void)
{
    FN_ENTER(0x00660000);
    goto L_00660000;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x00660000); r_esp += 8; return;
L_00660000:; BB(0x00660000);
    /* 00660000: je 0x660060 */ if (fZ) goto L_00660060;
L_00660002:; BB(0x00660002);
    /* 00660002: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00660009: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660010: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660013: push dword ptr [eax + 0xb4] */ { u32 v = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660019: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066001c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066001f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660020: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x660025u); f_006bc800();
    /* 00660025: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00660028: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066002f:; BB(0x0066002f);
    /* 0066002f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660032: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 00660038: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066003f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660041: je 0x66004e */ if (fZ) goto L_0066004e;
L_00660043:; BB(0x00660043);
    /* 00660043: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660049: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x66004eu); f_008172d4();
L_0066004e:; BB(0x0066004e);
    /* 0066004e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660051: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
L_00660060:; BB(0x00660060);
    /* 00660060: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00660062: jmp 0x66002f */ goto L_0066002f;
}

void f_00660020(void)
{
    FN_ENTER(0x00660020);
    goto L_00660020;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x00660020); r_esp += 8; return;
L_00660020:; BB(0x00660020);
    /* 00660020: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x660025u); f_006bc800();
    /* 00660025: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00660028: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0066002f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660032: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 00660038: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066003f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660041: je 0x66004e */ if (fZ) goto L_0066004e;
L_00660043:; BB(0x00660043);
    /* 00660043: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660049: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x66004eu); f_008172d4();
L_0066004e:; BB(0x0066004e);
    /* 0066004e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660051: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
}

void f_00660025(void)
{
    FN_ENTER(0x00660025);
    goto L_00660025;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x00660025); r_esp += 8; return;
L_00660025:; BB(0x00660025);
    /* 00660025: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00660028: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0066002f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660032: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 00660038: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066003f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660041: je 0x66004e */ if (fZ) goto L_0066004e;
L_00660043:; BB(0x00660043);
    /* 00660043: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660049: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x66004eu); f_008172d4();
L_0066004e:; BB(0x0066004e);
    /* 0066004e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660051: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
}

void f_0066002f(void)
{
    FN_ENTER(0x0066002f);
    goto L_0066002f;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x0066002f); r_esp += 8; return;
L_0066002f:; BB(0x0066002f);
    /* 0066002f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660032: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 00660038: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066003f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660041: je 0x66004e */ if (fZ) goto L_0066004e;
L_00660043:; BB(0x00660043);
    /* 00660043: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660049: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x66004eu); f_008172d4();
L_0066004e:; BB(0x0066004e);
    /* 0066004e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660051: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
}

void f_00660041(void)
{
    FN_ENTER(0x00660041);
    goto L_00660041;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x00660041); r_esp += 8; return;
L_00660041:; BB(0x00660041);
    /* 00660041: je 0x66004e */ if (fZ) goto L_0066004e;
L_00660043:; BB(0x00660043);
    /* 00660043: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660049: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x66004eu); f_008172d4();
L_0066004e:; BB(0x0066004e);
    /* 0066004e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660051: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
}

void f_00660045(void)
{
    FN_ENTER(0x00660045);
    goto L_00660045;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x00660045); r_esp += 8; return;
L_00660045:; BB(0x00660045);
    /* 00660045: test byte ptr [ebx - 0x7917ff54], ah */ {  u32 a = R8((u32)(r_ebx+0x86e800acu)); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fC = 0; }
    /* 0066004b: jb 0x660068 */ if (fC) goto L_00660068;
L_0066004d:; BB(0x0066004d);
    /* 0066004d: add byte ptr [ebx - 0x7f3813bb], cl */ { u32 ad = (u32)(r_ebx+0x80c7ec45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00660053: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 00660055: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00660057: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00660059: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
L_00660068:; BB(0x00660068);
    /* 00660068: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00660069: call 0x660088 */ r_esp -= 4; W32(r_esp, 0x66006eu); f_00660088();
    /* 0066006e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00660072: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660074: jne 0x66007a */ if (!fZ) goto L_0066007a;
L_00660076:; BB(0x00660076);
    /* 00660076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660077: ret 4 */ FN_RET(0x00660045); r_esp += 8; return;
L_0066007a:; BB(0x0066007a);
    /* 0066007a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066007b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x660080u); f_005c2f74();
    /* 00660080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660082: ret 4 */ FN_RET(0x00660045); r_esp += 8; return;
}

void f_00660061(void)
{
    FN_ENTER(0x00660061);
    goto L_00660061;
L_0065ffce:; BB(0x0065ffce);
    /* 0065ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ffdb: ret 4 */ FN_RET(0x00660061); r_esp += 8; return;
L_0066002f:; BB(0x0066002f);
    /* 0066002f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660032: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 00660038: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066003f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660041: je 0x66004e */ if (fZ) goto L_0066004e;
L_00660043:; BB(0x00660043);
    /* 00660043: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660049: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x66004eu); f_008172d4();
L_0066004e:; BB(0x0066004e);
    /* 0066004e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00660051: mov dword ptr [eax + 0xb0], 1 */ W32((u32)(r_eax+0xb0u), 0x1u);
    /* 0066005b: jmp 0x65ffce */ goto L_0065ffce;
L_00660061:; BB(0x00660061);
    /* 00660061: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00660062: jmp 0x66002f */ goto L_0066002f;
}

void f_00660064(void) /* sub_660064 */
{
    FN_ENTER(0x00660064);
    /* 00660064: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660065: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00660067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00660069: call 0x660088 */ r_esp -= 4; W32(r_esp, 0x66006eu); f_00660088();
    /* 0066006e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00660072: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660074: jne 0x66007a */ if (!fZ) goto L_0066007a;
L_00660076:; BB(0x00660076);
    /* 00660076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660077: ret 4 */ FN_RET(0x00660064); r_esp += 8; return;
L_0066007a:; BB(0x0066007a);
    /* 0066007a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066007b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x660080u); f_005c2f74();
    /* 00660080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660082: ret 4 */ FN_RET(0x00660064); r_esp += 8; return;
}

void f_00660066(void)
{
    FN_ENTER(0x00660066);
}

void f_0066006f(void)
{
    FN_ENTER(0x0066006f);
    /* 0066006f: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660070: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00660072: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660074: jne 0x66007a */ if (!fZ) goto L_0066007a;
L_00660076:; BB(0x00660076);
    /* 00660076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660077: ret 4 */ FN_RET(0x0066006f); r_esp += 8; return;
L_0066007a:; BB(0x0066007a);
    /* 0066007a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066007b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x660080u); f_005c2f74();
    /* 00660080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660082: ret 4 */ FN_RET(0x0066006f); r_esp += 8; return;
}

void f_00660078(void)
{
    FN_ENTER(0x00660078);
    /* 00660078: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0066007a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066007b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x660080u); f_005c2f74();
    /* 00660080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660082: ret 4 */ FN_RET(0x00660078); r_esp += 8; return;
}

void f_00660088(void) /* sub_660088 */
{
    FN_ENTER(0x00660088);
    /* 00660088: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660089: mov ebp, esp */ r_ebp = r_esp;
    /* 0066008b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066008d: push 0x8e7c48 */ { u32 v = 0x8e7c48u; r_esp -= 4; W32(r_esp, v); }
    /* 00660092: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660099: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006600a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006600a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006600a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006600a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006600ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006600af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006600b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006600b5: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 006600bb: mov dword ptr [ecx], 0xb336e0 */ W32((u32)(r_ecx), 0xb336e0u);
    /* 006600c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006600c3: je 0x6600df */ if (fZ) goto L_006600df;
L_006600c5:; BB(0x006600c5);
    /* 006600c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006600c8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006600cc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006600d1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006600d5: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_006600df:; BB(0x006600df);
    /* 006600df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006600e6: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6600ebu); f_007ba1f0();
    /* 006600eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006600ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006600f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006600f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006600f8: ret  */ FN_RET(0x00660088); r_esp += 4; return;
}

void f_006600fc(void) /* sub_6600FC */
{
    FN_ENTER(0x006600fc);
    /* 006600fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006600fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006600ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660101: push 0x8e7c70 */ { u32 v = 0x8e7c70u; r_esp -= 4; W32(r_esp, v); }
    /* 00660106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066010c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066010d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00660114: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066011a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066011d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00660120: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00660123: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00660128: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066012f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x660134u); f_005caba4();
    /* 00660134: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660135: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00660138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066013a: je 0x660170 */ if (fZ) goto L_00660170;
L_0066013c:; BB(0x0066013c);
    /* 0066013c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00660143: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066014a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066014d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660150: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660153: call 0x660174 */ r_esp -= 4; W32(r_esp, 0x660158u); f_00660174();
    /* 00660158: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066015b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00660162:; BB(0x00660162);
    /* 00660162: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660165: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066016c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066016e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066016f: ret  */ FN_RET(0x006600fc); r_esp += 4; return;
L_00660170:; BB(0x00660170);
    /* 00660170: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660172: jmp 0x660162 */ goto L_00660162;
}

void f_00660174(void) /* sub_660174 */
{
    FN_ENTER(0x00660174);
    /* 00660174: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660175: mov ebp, esp */ r_ebp = r_esp;
    /* 00660177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660179: push 0x8e7c8c */ { u32 v = 0x8e7c8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066017e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660185: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066018c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066018f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00660192: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00660195: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00660198: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066019b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066019e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006601a1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006601a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006601a7: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6601acu); f_007ba278();
    /* 006601ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006601b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006601b6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006601b9: mov dword ptr [ecx], 0xb336e0 */ W32((u32)(r_ecx), 0xb336e0u);
    /* 006601bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006601c1: mov eax, dword ptr [0x9c87e4] */ r_eax = R32((u32)(0x9c87e4u));
    /* 006601c6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006601c9: je 0x6601d7 */ if (fZ) goto L_006601d7;
L_006601cb:; BB(0x006601cb);
    /* 006601cb: mov eax, edx */ r_eax = r_edx;
    /* 006601cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006601ce: call dword ptr [0xb336f4] */ { u32 t = R32((u32)(0xb336f4u)); r_esp -= 4; W32(r_esp, 0x6601d4u); call_ind(t); }
    /* 006601d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_006601d7:; BB(0x006601d7);
    /* 006601d7: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 006601dc: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006601e1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006601e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006601e5: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6601eau); f_0050981c();
    /* 006601ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006601ed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006601f0: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 006601f6: mov eax, edx */ r_eax = r_edx;
    /* 006601f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006601fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660202: mov esp, ebp */ r_esp = r_ebp;
    /* 00660204: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660205: ret 8 */ FN_RET(0x00660174); r_esp += 12; return;
}

void f_00660208(void) /* sub_660208 */
{
    FN_ENTER(0x00660208);
    /* 00660208: call 0x660210 */ r_esp -= 4; W32(r_esp, 0x66020du); f_00660210();
    /* 0066020d: ret  */ FN_RET(0x00660208); r_esp += 4; return;
}

void f_00660210(void) /* sub_660210 */
{
    FN_ENTER(0x00660210);
    /* 00660210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660211: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660214: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00660216: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0066021b: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00660222: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0066022a: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 00660232: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x660237u); f_0082d990();
    /* 00660237: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0066023c: push dword ptr [eax + 0x198] */ { u32 v = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660242: push dword ptr [eax + 0x194] */ { u32 v = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660248: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 0066024e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00660250: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x660255u); f_0082df5c();
    /* 00660255: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00660258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660259: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0066025d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066025f: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x660264u); f_0082eab8();
    /* 00660264: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x660269u); f_0082da80();
    /* 00660269: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0066026c: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x660271u); f_0082df08();
    /* 00660271: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00660273: fld dword ptr [0x938e80] */ FPUSH(R_F32((u32)(0x938e80u)));
    /* 00660279: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0066027c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0066027e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00660282: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00660286: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0066028c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066028e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00660290: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00660292: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00660294: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00660296: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00660299: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066029b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066029f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006602a3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006602a6: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006602ac: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x6602b1u); f_0082ebac();
    /* 006602b1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006602b4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006602b8: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 006602bb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006602bf: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 006602c2: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 006602c5: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 006602cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006602cd: je 0x6602da */ if (fZ) goto L_006602da;
L_006602cf:; BB(0x006602cf);
    /* 006602cf: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006602d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006602d3: mov ecx, eax */ r_ecx = r_eax;
    /* 006602d5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6602dau); f_00508db8();
L_006602da:; BB(0x006602da);
    /* 006602da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006602dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006602de: ret  */ FN_RET(0x00660210); r_esp += 4; return;
}

void f_006602e0(void) /* sub_6602E0 */
{
    FN_ENTER(0x006602e0);
    /* 006602e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006602e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006602e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006602e5: call 0x660304 */ r_esp -= 4; W32(r_esp, 0x6602eau); f_00660304();
    /* 006602ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006602ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006602f0: jne 0x6602f6 */ if (!fZ) goto L_006602f6;
L_006602f2:; BB(0x006602f2);
    /* 006602f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006602f3: ret 4 */ FN_RET(0x006602e0); r_esp += 8; return;
L_006602f6:; BB(0x006602f6);
    /* 006602f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006602f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6602fcu); f_005c2f74();
    /* 006602fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006602fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006602fe: ret 4 */ FN_RET(0x006602e0); r_esp += 8; return;
}

void f_00660304(void) /* sub_660304 */
{
    FN_ENTER(0x00660304);
    /* 00660304: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660305: mov ebp, esp */ r_ebp = r_esp;
    /* 00660307: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660309: push 0x8e7ca8 */ { u32 v = 0x8e7ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066030e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660315: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066031c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066031f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00660322: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00660325: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00660328: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066032b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066032e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660335: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660338: mov dword ptr [eax], 0xb337b0 */ W32((u32)(r_eax), 0xb337b0u);
    /* 0066033e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066033f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x660344u); f_007b4e84();
    /* 00660344: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660345: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660348: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x66034du); f_007b9c8c();
    /* 0066034d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00660354: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660357: call 0x65fda0 */ r_esp -= 4; W32(r_esp, 0x66035cu); f_0065fda0();
    /* 0066035c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066035f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660366: mov esp, ebp */ r_esp = r_ebp;
    /* 00660368: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660369: ret  */ FN_RET(0x00660304); r_esp += 4; return;
}

void f_0066036c(void) /* sub_66036C */
{
    FN_ENTER(0x0066036c);
    /* 0066036c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066036d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066036e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00660370: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00660373: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00660377: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0066037d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00660380: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00660386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660387: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660388: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66038du); f_0078ea50();
    /* 0066038d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00660390: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00660393: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00660395: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00660397: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00660399: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066039a: jbe 0x6603a6 */ if ((fC||fZ)) goto L_006603a6;
L_0066039c:; BB(0x0066039c);
    /* 0066039c: mov eax, 1 */ r_eax = 0x1u;
    /* 006603a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006603a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006603a3: ret 8 */ FN_RET(0x0066036c); r_esp += 12; return;
L_006603a6:; BB(0x006603a6);
    /* 006603a6: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006603aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006603ac: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006603b0: call 0x7ba468 */ r_esp -= 4; W32(r_esp, 0x6603b5u); f_007ba468();
    /* 006603b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006603b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006603b7: ret 8 */ FN_RET(0x0066036c); r_esp += 12; return;
}

void f_006603bc(void) /* sub_6603BC */
{
    FN_ENTER(0x006603bc);
    /* 006603bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006603bd: mov edi, ecx */ r_edi = r_ecx;
    /* 006603bf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006603c1: mov ecx, edi */ r_ecx = r_edi;
    /* 006603c3: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 006603c8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006603cd: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6603d0u); call_ind(t); }
    /* 006603d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006603d2: je 0x66041d */ if (fZ) goto L_0066041d;
L_006603d4:; BB(0x006603d4);
    /* 006603d4: mov ecx, dword ptr [0xa8fa38] */ r_ecx = R32((u32)(0xa8fa38u));
    /* 006603da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006603dc: je 0x66041d */ if (fZ) goto L_0066041d;
L_006603de:; BB(0x006603de);
    /* 006603de: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6603e3u); f_00829cc8();
    /* 006603e3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6603e8u); f_0082d7b0();
    /* 006603e8: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006603eb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6603f0u); f_0082d838();
    /* 006603f0: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006603f3: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006603f6: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 006603f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006603fb: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x660400u); f_0083a314();
    /* 00660400: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00660406: mov ecx, dword ptr [0xa8fa3c] */ r_ecx = R32((u32)(0xa8fa3cu));
    /* 0066040c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x660411u); f_005b8610();
    /* 00660411: mov ecx, eax */ r_ecx = r_eax;
    /* 00660413: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x660418u); f_00831758();
    /* 00660418: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66041du); f_0082da80();
L_0066041d:; BB(0x0066041d);
    /* 0066041d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066041e: ret  */ FN_RET(0x006603bc); r_esp += 4; return;
}

void f_00660420(void) /* sub_660420 */
{
    FN_ENTER(0x00660420);
    /* 00660420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660421: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660424: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00660426: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00660428: call 0x65feec */ r_esp -= 4; W32(r_esp, 0x66042du); f_0065feec();
    /* 0066042d: push dword ptr [ebp + 0x68] */ { u32 v = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660430: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x660435u); f_0082e900();
    /* 00660435: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00660438: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0066043c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00660441: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00660445: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00660449: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066044d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00660450: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00660454: push 0x9314c8 */ { u32 v = 0x9314c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660459: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066045e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00660461: mov edx, dword ptr [eax*4 + 0x938e98] */ r_edx = R32((u32)(r_eax*4+0x938e98u));
    /* 00660468: mov dword ptr [ebp + 0xbc], edx */ W32((u32)(r_ebp+0xbcu), r_edx);
    /* 0066046e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x660473u); f_0061cdb0();
    /* 00660473: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00660476: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660477: ret  */ FN_RET(0x00660420); r_esp += 4; return;
}

void f_00660478(void) /* sub_660478 */
{
    FN_ENTER(0x00660478);
    /* 00660478: mov ecx, dword ptr [0xa8fa38] */ r_ecx = R32((u32)(0xa8fa38u));
    /* 0066047e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660480: je 0x66049d */ if (fZ) goto L_0066049d;
L_00660482:; BB(0x00660482);
    /* 00660482: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x660487u); f_00829de0();
    /* 00660487: push dword ptr [0xa8fa38] */ { u32 v = R32((u32)(0xa8fa38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066048d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x660492u); f_0082e960();
    /* 00660492: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660493: mov dword ptr [0xa8fa38], 0 */ W32((u32)(0xa8fa38u), 0x0u);
L_0066049d:; BB(0x0066049d);
    /* 0066049d: mov ecx, dword ptr [0xa8fa3c] */ r_ecx = R32((u32)(0xa8fa3cu));
    /* 006604a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006604a5: je 0x6604ba */ if (fZ) goto L_006604ba;
L_006604a7:; BB(0x006604a7);
    /* 006604a7: je 0x6604b0 */ if (fZ) goto L_006604b0;
L_006604a9:; BB(0x006604a9);
    /* 006604a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006604ab: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6604b0u); f_004066a8();
L_006604b0:; BB(0x006604b0);
    /* 006604b0: mov dword ptr [0xa8fa3c], 0 */ W32((u32)(0xa8fa3cu), 0x0u);
L_006604ba:; BB(0x006604ba);
    /* 006604ba: ret  */ FN_RET(0x00660478); r_esp += 4; return;
}

void f_006604bc(void)
{
    FN_ENTER(0x006604bc);
    /* 006604bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006604bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006604bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006604c1: push 0x8e7cd0 */ { u32 v = 0x8e7cd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006604c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006604cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006604cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006604d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006604d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006604da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006604dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006604e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006604e3: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006604e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006604ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6604f4u); f_005caba4();
    /* 006604f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006604f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006604f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006604fa: je 0x660533 */ if (fZ) goto L_00660533;
L_006604fc:; BB(0x006604fc);
    /* 006604fc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00660503: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066050a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066050d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660513: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660516: call 0x660538 */ r_esp -= 4; W32(r_esp, 0x66051bu); f_00660538();
    /* 0066051b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066051e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00660525:; BB(0x00660525);
    /* 00660525: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660528: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066052f: mov esp, ebp */ r_esp = r_ebp;
    /* 00660531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660532: ret  */ FN_RET(0x006604bc); r_esp += 4; return;
L_00660533:; BB(0x00660533);
    /* 00660533: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660535: jmp 0x660525 */ goto L_00660525;
}

void f_00660538(void) /* sub_660538 */
{
    FN_ENTER(0x00660538);
    /* 00660538: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660539: mov ebp, esp */ r_ebp = r_esp;
    /* 0066053b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066053d: push 0x8e7cec */ { u32 v = 0x8e7cecu; r_esp -= 4; W32(r_esp, v); }
    /* 00660542: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660549: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00660550: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660553: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00660556: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00660559: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066055c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066055f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00660562: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660565: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00660568: call 0x65fe18 */ r_esp -= 4; W32(r_esp, 0x66056du); f_0065fe18();
    /* 0066056d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660574: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00660577: push dword ptr [edx + 0x68] */ { u32 v = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066057a: mov dword ptr [edx], 0xb337b0 */ W32((u32)(r_edx), 0xb337b0u);
    /* 00660580: mov eax, dword ptr [0x9c8804] */ r_eax = R32((u32)(0x9c8804u));
    /* 00660585: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00660588: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x66058du); f_0082e900();
    /* 0066058d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00660590: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 00660593: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 00660597: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066059c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0066059f: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 006605a2: fistp dword ptr [ebp - 0x24] */ W32((u32)(r_ebp+0xffffffdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 006605a5: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 006605a8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006605ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006605ad: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006605b0: mov edx, dword ptr [eax*4 + 0x938e98] */ r_edx = R32((u32)(r_eax*4+0x938e98u));
    /* 006605b7: push 0x9c8808 */ { u32 v = 0x9c8808u; r_esp -= 4; W32(r_esp, v); }
    /* 006605bc: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 006605c2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6605c7u); f_007b9a88();
    /* 006605c7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006605ca: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006605cd: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006605d2: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006605d5: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6605dau); f_007b4f54();
    /* 006605da: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006605dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006605e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006605e7: mov esp, ebp */ r_esp = r_ebp;
    /* 006605e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006605ea: ret 8 */ FN_RET(0x00660538); r_esp += 12; return;
}

void f_006605f0(void) /* sub_6605F0 */
{
    FN_ENTER(0x006605f0);
    /* 006605f0: mov dword ptr [0xa8fa28], 0x3f800000 */ W32((u32)(0xa8fa28u), 0x3f800000u);
    /* 006605fa: mov dword ptr [0xa8fa2c], 0x41000000 */ W32((u32)(0xa8fa2cu), 0x41000000u);
    /* 00660604: mov dword ptr [0xa8fa30], 0x3fc00000 */ W32((u32)(0xa8fa30u), 0x3fc00000u);
    /* 0066060e: ret  */ FN_RET(0x006605f0); r_esp += 4; return;
}

void f_00660610(void) /* sub_660610 */
{
    FN_ENTER(0x00660610);
    /* 00660610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660611: mov ebp, esp */ r_ebp = r_esp;
    /* 00660613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660615: push 0x8e7d14 */ { u32 v = 0x8e7d14u; r_esp -= 4; W32(r_esp, v); }
    /* 0066061a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660621: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00660628: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066062b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066062e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00660631: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00660634: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00660637: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0066063c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00660643: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x660648u); f_008581c5();
    /* 00660648: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660649: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066064c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066064e: je 0x6606f4 */ if (fZ) goto L_006606f4;
L_00660654:; BB(0x00660654);
    /* 00660654: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066065b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660662: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660665: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00660667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066066a: push 0x9c87f4 */ { u32 v = 0x9c87f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066066f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00660671: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x660676u); f_005b7a84();
    /* 00660676: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660679: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00660680:; BB(0x00660680);
    /* 00660680: mov dword ptr [0xa8fa3c], eax */ W32((u32)(0xa8fa3cu), r_eax);
    /* 00660685: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066068c: push 0x938ee4 */ { u32 v = 0x938ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 00660691: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x660696u); f_008009dc();
    /* 00660696: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660697: mov ecx, dword ptr [0xa8fa3c] */ r_ecx = R32((u32)(0xa8fa3cu));
    /* 0066069d: mov dword ptr [0xa8fa38], eax */ W32((u32)(0xa8fa38u), r_eax);
    /* 006606a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006606a4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6606a9u); f_005b8610();
    /* 006606a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006606ab: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006606b0: push dword ptr [0xa8fa38] */ { u32 v = R32((u32)(0xa8fa38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006606b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006606b7: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006606b9: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x6606beu); f_006086e8();
    /* 006606be: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006606c1: mov ecx, dword ptr [0xa8fa3c] */ r_ecx = R32((u32)(0xa8fa3cu));
    /* 006606c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006606c9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6606ceu); f_005b8610();
    /* 006606ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006606d0: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006606d5: push dword ptr [0xa8fa38] */ { u32 v = R32((u32)(0xa8fa38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006606db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006606dc: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 006606de: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x6606e3u); f_006086e8();
    /* 006606e3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006606e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006606e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006606f0: mov esp, ebp */ r_esp = r_ebp;
    /* 006606f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006606f3: ret  */ FN_RET(0x00660610); r_esp += 4; return;
L_006606f4:; BB(0x006606f4);
    /* 006606f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006606f6: jmp 0x660680 */ goto L_00660680;
}

void f_006606f8(void) /* sub_6606F8 */
{
    FN_ENTER(0x006606f8);
    /* 006606f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006606f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006606fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006606fd: call 0x660790 */ r_esp -= 4; W32(r_esp, 0x660702u); f_00660790();
    /* 00660702: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00660706: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660708: jne 0x66070e */ if (!fZ) goto L_0066070e;
L_0066070a:; BB(0x0066070a);
    /* 0066070a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066070b: ret 4 */ FN_RET(0x006606f8); r_esp += 8; return;
L_0066070e:; BB(0x0066070e);
    /* 0066070e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066070f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x660714u); f_005c2f74();
    /* 00660714: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660715: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660716: ret 4 */ FN_RET(0x006606f8); r_esp += 8; return;
}

void f_0066071c(void) /* sub_66071C */
{
    FN_ENTER(0x0066071c);
    /* 0066071c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066071d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066071f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00660721: call 0x660740 */ r_esp -= 4; W32(r_esp, 0x660726u); f_00660740();
    /* 00660726: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066072a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066072c: jne 0x660732 */ if (!fZ) goto L_00660732;
L_0066072e:; BB(0x0066072e);
    /* 0066072e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066072f: ret 4 */ FN_RET(0x0066071c); r_esp += 8; return;
L_00660732:; BB(0x00660732);
    /* 00660732: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660733: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x660738u); f_005c2f74();
    /* 00660738: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660739: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066073a: ret 4 */ FN_RET(0x0066071c); r_esp += 8; return;
}

void f_00660740(void) /* sub_660740 */
{
    FN_ENTER(0x00660740);
    /* 00660740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660741: mov ebp, esp */ r_ebp = r_esp;
    /* 00660743: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660745: push 0x8e7d30 */ { u32 v = 0x8e7d30u; r_esp -= 4; W32(r_esp, v); }
    /* 0066074a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660751: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00660758: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066075b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066075e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00660761: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00660764: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00660767: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066076a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066076d: mov dword ptr [ecx], 0xb339a0 */ W32((u32)(r_ecx), 0xb339a0u);
    /* 00660773: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066077a: call 0x660790 */ r_esp -= 4; W32(r_esp, 0x66077fu); f_00660790();
    /* 0066077f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660782: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660789: mov esp, ebp */ r_esp = r_ebp;
    /* 0066078b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066078c: ret  */ FN_RET(0x00660740); r_esp += 4; return;
}

void f_00660790(void) /* sub_660790 */
{
    FN_ENTER(0x00660790);
    /* 00660790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660791: mov ebp, esp */ r_ebp = r_esp;
    /* 00660793: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660795: push 0x8e7d4c */ { u32 v = 0x8e7d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066079a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006607a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006607a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006607a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006607ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006607ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006607b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006607b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006607b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006607ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006607bd: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 006607c3: mov dword ptr [ecx], 0xb33940 */ W32((u32)(r_ecx), 0xb33940u);
    /* 006607c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006607cb: je 0x6607e7 */ if (fZ) goto L_006607e7;
L_006607cd:; BB(0x006607cd);
    /* 006607cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006607d0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006607d4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006607d9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006607dd: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_006607e7:; BB(0x006607e7);
    /* 006607e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006607ee: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6607f3u); f_007ba1f0();
    /* 006607f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006607f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006607fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006607ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660800: ret  */ FN_RET(0x00660790); r_esp += 4; return;
}

void f_00660804(void) /* sub_660804 */
{
    FN_ENTER(0x00660804);
    /* 00660804: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660805: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00660807: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00660809: call 0x660828 */ r_esp -= 4; W32(r_esp, 0x66080eu); f_00660828();
    /* 0066080e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00660812: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660814: jne 0x66081a */ if (!fZ) goto L_0066081a;
L_00660816:; BB(0x00660816);
    /* 00660816: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660817: ret 4 */ FN_RET(0x00660804); r_esp += 8; return;
L_0066081a:; BB(0x0066081a);
    /* 0066081a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066081b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x660820u); f_005c2f74();
    /* 00660820: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660821: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660822: ret 4 */ FN_RET(0x00660804); r_esp += 8; return;
}

void f_00660828(void) /* sub_660828 */
{
    FN_ENTER(0x00660828);
    /* 00660828: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660829: mov ebp, esp */ r_ebp = r_esp;
    /* 0066082b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066082d: push 0x8e7d68 */ { u32 v = 0x8e7d68u; r_esp -= 4; W32(r_esp, v); }
    /* 00660832: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660839: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00660840: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660843: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00660846: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00660849: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066084c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066084f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00660852: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660855: mov dword ptr [ecx], 0xb33970 */ W32((u32)(r_ecx), 0xb33970u);
    /* 0066085b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00660862: call 0x660790 */ r_esp -= 4; W32(r_esp, 0x660867u); f_00660790();
    /* 00660867: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066086a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660871: mov esp, ebp */ r_esp = r_ebp;
    /* 00660873: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660874: ret  */ FN_RET(0x00660828); r_esp += 4; return;
}

void f_00660878(void) /* sub_660878 */
{
    FN_ENTER(0x00660878);
    /* 00660878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660879: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066087b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066087d: call 0x66089c */ r_esp -= 4; W32(r_esp, 0x660882u); f_0066089c();
    /* 00660882: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00660886: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660888: jne 0x66088e */ if (!fZ) goto L_0066088e;
L_0066088a:; BB(0x0066088a);
    /* 0066088a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066088b: ret 4 */ FN_RET(0x00660878); r_esp += 8; return;
L_0066088e:; BB(0x0066088e);
    /* 0066088e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066088f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x660894u); f_00857e98();
    /* 00660894: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660895: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660896: ret 4 */ FN_RET(0x00660878); r_esp += 8; return;
}

void f_0066089c(void) /* sub_66089C */
{
    FN_ENTER(0x0066089c);
    /* 0066089c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066089d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066089f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 006608a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006608a4: mov dword ptr [ebx], 0xb339d0 */ W32((u32)(r_ebx), 0xb339d0u);
    /* 006608aa: je 0x6608ba */ if (fZ) goto L_006608ba;
L_006608ac:; BB(0x006608ac);
    /* 006608ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006608ad: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6608b2u); f_00857e98();
    /* 006608b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006608b3: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
L_006608ba:; BB(0x006608ba);
    /* 006608ba: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006608bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006608bf: je 0x6608cf */ if (fZ) goto L_006608cf;
L_006608c1:; BB(0x006608c1);
    /* 006608c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006608c2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6608c7u); f_00857e98();
    /* 006608c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006608c8: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
L_006608cf:; BB(0x006608cf);
    /* 006608cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006608d0: ret  */ FN_RET(0x0066089c); r_esp += 4; return;
}

void f_006608d4(void) /* sub_6608D4 */
{
    FN_ENTER(0x006608d4);
    /* 006608d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006608d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006608d6: mov edi, ecx */ r_edi = r_ecx;
    /* 006608d8: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006608dd: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 006608e0: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006608e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006608e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006608e7: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x6608ecu); f_0078ea2c();
    /* 006608ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006608ef: fcomp dword ptr [edi + 0x94] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x94u))); FPOP();
    /* 006608f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006608f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006608f8: ja 0x66091c */ if ((!fC&&!fZ)) goto L_0066091c;
L_006608fa:; BB(0x006608fa);
    /* 006608fa: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 00660900: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660902: je 0x660919 */ if (fZ) goto L_00660919;
L_00660904:; BB(0x00660904);
    /* 00660904: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660905: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x66090au); f_00508db8();
    /* 0066090a: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 00660910: lea eax, [edi + 0x5c] */ r_eax = (u32)(r_edi+0x5cu);
    /* 00660913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660914: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x660919u); f_00508dd0();
L_00660919:; BB(0x00660919);
    /* 00660919: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066091a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066091b: ret  */ FN_RET(0x006608d4); r_esp += 4; return;
L_0066091c:; BB(0x0066091c);
    /* 0066091c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00660920: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660925: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00660929: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066092a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066092b: ret  */ FN_RET(0x006608d4); r_esp += 4; return;
}

void f_0066092c(void) /* sub_66092C */
{
    FN_ENTER(0x0066092c);
    /* 0066092c: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x660931u); f_008173b4();
    /* 00660931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660933: je 0x660935 */ if (fZ) goto L_00660935;
L_00660935:; BB(0x00660935);
    /* 00660935: ret  */ FN_RET(0x0066092c); r_esp += 4; return;
}

void f_00660938(void)
{
    FN_ENTER(0x00660938);
    /* 00660938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660939: mov ebp, esp */ r_ebp = r_esp;
    /* 0066093b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066093d: push 0x8e7d90 */ { u32 v = 0x8e7d90u; r_esp -= 4; W32(r_esp, v); }
    /* 00660942: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660949: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00660950: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660953: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00660956: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00660959: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066095c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066095f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00660964: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066096b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x660970u); f_005caba4();
    /* 00660970: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00660971: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00660974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660976: je 0x6609af */ if (fZ) goto L_006609af;
L_00660978:; BB(0x00660978);
    /* 00660978: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066097f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660986: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660989: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066098f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660992: call 0x6609b4 */ r_esp -= 4; W32(r_esp, 0x660997u); f_006609b4();
    /* 00660997: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066099a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006609a1:; BB(0x006609a1);
    /* 006609a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006609a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006609ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006609ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006609ae: ret  */ FN_RET(0x00660938); r_esp += 4; return;
L_006609af:; BB(0x006609af);
    /* 006609af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006609b1: jmp 0x6609a1 */ goto L_006609a1;
}

void f_006609b4(void) /* sub_6609B4 */
{
    FN_ENTER(0x006609b4);
    /* 006609b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006609b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006609b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006609b9: push 0x8e7dac */ { u32 v = 0x8e7dacu; r_esp -= 4; W32(r_esp, v); }
    /* 006609be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006609c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006609c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006609cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006609cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006609d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006609d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006609d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006609db: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006609de: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006609e1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006609e4: call 0x660a1c */ r_esp -= 4; W32(r_esp, 0x6609e9u); f_00660a1c();
    /* 006609e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006609f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006609f3: mov dword ptr [ecx], 0xb339a0 */ W32((u32)(r_ecx), 0xb339a0u);
    /* 006609f9: mov eax, dword ptr [0x9c8838] */ r_eax = R32((u32)(0x9c8838u));
    /* 006609fe: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00660a01: call 0x660aac */ r_esp -= 4; W32(r_esp, 0x660a06u); f_00660aac();
    /* 00660a06: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00660a09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660a0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660a13: mov esp, ebp */ r_esp = r_ebp;
    /* 00660a15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660a16: ret 8 */ FN_RET(0x006609b4); r_esp += 12; return;
}

void f_00660a1c(void) /* sub_660A1C */
{
    FN_ENTER(0x00660a1c);
    /* 00660a1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660a1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00660a1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660a21: push 0x8e7dc8 */ { u32 v = 0x8e7dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660a26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00660a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660a2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00660a34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660a37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00660a3a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00660a3d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00660a40: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00660a43: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00660a46: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660a49: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00660a4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00660a4f: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x660a54u); f_007ba278();
    /* 00660a54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660a5b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00660a5e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00660a61: mov dword ptr [ecx], 0xb33940 */ W32((u32)(r_ecx), 0xb33940u);
    /* 00660a67: mov eax, dword ptr [0x9c8834] */ r_eax = R32((u32)(0x9c8834u));
    /* 00660a6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660a6d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00660a70: call dword ptr [0xb33954] */ { u32 t = R32((u32)(0xb33954u)); r_esp -= 4; W32(r_esp, 0x660a76u); call_ind(t); }
    /* 00660a76: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00660a79: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00660a7d: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660a83: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 00660a8d: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00660a91: mov dword ptr [eax + 0x94], 0x481c4000 */ W32((u32)(r_eax+0x94u), 0x481c4000u);
    /* 00660a9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660a9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00660aa5: mov esp, ebp */ r_esp = r_ebp;
    /* 00660aa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660aa8: ret 8 */ FN_RET(0x00660a1c); r_esp += 12; return;
}

void f_00660aac(void) /* sub_660AAC */
{
    FN_ENTER(0x00660aac);
    /* 00660aac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00660aad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660aae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660aaf: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660ab2: mov edi, ecx */ r_edi = r_ecx;
    /* 00660ab4: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 00660ab7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00660aba: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00660abe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00660ac3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00660ac7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00660acb: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00660acf: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00660ad2: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00660ad6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660ad7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00660ad9: mov ecx, edi */ r_ecx = r_edi;
    /* 00660adb: call 0x660ce4 */ r_esp -= 4; W32(r_esp, 0x660ae0u); f_00660ce4();
    /* 00660ae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660ae2: je 0x660cc7 */ if (fZ) goto L_00660cc7;
L_00660ae8:; BB(0x00660ae8);
    /* 00660ae8: fld dword ptr [edi + 0x70] */ FPUSH(R_F32((u32)(r_edi+0x70u)));
    /* 00660aeb: fcom dword ptr [0x938f44] */ fx_compare(ST(0), R_F32((u32)(0x938f44u))); 
    /* 00660af1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00660af3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00660af4: jae 0x660b37 */ if (!fC) goto L_00660b37;
L_00660af6:; BB(0x00660af6);
    /* 00660af6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00660af8: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00660afe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b01: je 0x660be3 */ if (fZ) goto L_00660be3;
L_00660b07:; BB(0x00660b07);
    /* 00660b07: mov ebp, 2 */ r_ebp = 0x2u;
L_00660b0c:; BB(0x00660b0c);
    /* 00660b0c: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 00660b12: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b15: jne 0x660b1d */ if (!fZ) goto L_00660b1d;
L_00660b17:; BB(0x00660b17);
    /* 00660b17: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00660b1d:; BB(0x00660b1d);
    /* 00660b1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660b1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660b1f: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00660b22: lea eax, [edi + 0x5c] */ r_eax = (u32)(r_edi+0x5cu);
    /* 00660b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660b26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660b27: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x660b2cu); f_00509dc4();
    /* 00660b2c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660b2f: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00660b35: jmp 0x660bb2 */ goto L_00660bb2;
L_00660b37:; BB(0x00660b37);
    /* 00660b37: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00660b3a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00660b3e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00660b43: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00660b47: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00660b4b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00660b4f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00660b52: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00660b56: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b59: je 0x660c82 */ if (fZ) goto L_00660c82;
L_00660b5f:; BB(0x00660b5f);
    /* 00660b5f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b62: je 0x660c3d */ if (fZ) goto L_00660c3d;
L_00660b68:; BB(0x00660b68);
    /* 00660b68: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00660b6e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b71: jne 0x660b78 */ if (!fZ) goto L_00660b78;
L_00660b73:; BB(0x00660b73);
    /* 00660b73: mov ebp, 0x40 */ r_ebp = 0x40u;
L_00660b78:; BB(0x00660b78);
    /* 00660b78: mov edx, dword ptr [edi + 0x88] */ r_edx = R32((u32)(r_edi+0x88u));
    /* 00660b7e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b81: jne 0x660b89 */ if (!fZ) goto L_00660b89;
L_00660b83:; BB(0x00660b83);
    /* 00660b83: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00660b89:; BB(0x00660b89);
    /* 00660b89: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b8c: je 0x660c20 */ if (fZ) goto L_00660c20;
L_00660b92:; BB(0x00660b92);
    /* 00660b92: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b95: je 0x660c20 */ if (fZ) goto L_00660c20;
L_00660b9b:; BB(0x00660b9b);
    /* 00660b9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660b9c: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00660b9f: lea eax, [edi + 0x5c] */ r_eax = (u32)(r_edi+0x5cu);
    /* 00660ba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660ba3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660ba4: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x660ba9u); f_00509b24();
    /* 00660ba9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660bac: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
L_00660bb2:; BB(0x00660bb2);
    /* 00660bb2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x660bb7u); f_00807ac0();
    /* 00660bb7: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660bba: je 0x660c09 */ if (fZ) goto L_00660c09;
L_00660bbc:; BB(0x00660bbc);
    /* 00660bbc: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00660bc2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660bc5: je 0x660c09 */ if (fZ) goto L_00660c09;
L_00660bc7:; BB(0x00660bc7);
    /* 00660bc7: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
L_00660bcd:; BB(0x00660bcd);
    /* 00660bcd: mov dword ptr [edi + 0x94], 0x481c4000 */ W32((u32)(r_edi+0x94u), 0x481c4000u);
L_00660bd7:; BB(0x00660bd7);
    /* 00660bd7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660bda: je 0x660bed */ if (fZ) goto L_00660bed;
L_00660bdc:; BB(0x00660bdc);
    /* 00660bdc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00660bdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660be0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660be1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00660be2: ret  */ FN_RET(0x00660aac); r_esp += 4; return;
L_00660be3:; BB(0x00660be3);
    /* 00660be3: mov ebp, 0x42 */ r_ebp = 0x42u;
    /* 00660be8: jmp 0x660b0c */ goto L_00660b0c;
L_00660bed:; BB(0x00660bed);
    /* 00660bed: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00660bf3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660bf6: jne 0x660bdc */ if (!fZ) goto L_00660bdc;
L_00660bf8:; BB(0x00660bf8);
    /* 00660bf8: mov dword ptr [edi + 0x94], 0x4cbebc20 */ W32((u32)(r_edi+0x94u), 0x4cbebc20u);
    /* 00660c02: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00660c05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00660c06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660c07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00660c08: ret  */ FN_RET(0x00660aac); r_esp += 4; return;
L_00660c09:; BB(0x00660c09);
    /* 00660c09: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 00660c0f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c12: je 0x660bcd */ if (fZ) goto L_00660bcd;
L_00660c14:; BB(0x00660c14);
    /* 00660c14: mov dword ptr [edi + 0x94], 0x4a095440 */ W32((u32)(r_edi+0x94u), 0x4a095440u);
    /* 00660c1e: jmp 0x660bd7 */ goto L_00660bd7;
L_00660c20:; BB(0x00660c20);
    /* 00660c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660c21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660c22: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00660c25: lea eax, [edi + 0x5c] */ r_eax = (u32)(r_edi+0x5cu);
    /* 00660c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660c2a: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x660c2fu); f_00509dc4();
    /* 00660c2f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660c32: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00660c38: jmp 0x660bb2 */ goto L_00660bb2;
L_00660c3d:; BB(0x00660c3d);
    /* 00660c3d: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00660c43: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c46: je 0x660c7b */ if (fZ) goto L_00660c7b;
L_00660c48:; BB(0x00660c48);
    /* 00660c48: mov ebp, 4 */ r_ebp = 0x4u;
L_00660c4d:; BB(0x00660c4d);
    /* 00660c4d: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 00660c53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c56: jne 0x660c5e */ if (!fZ) goto L_00660c5e;
L_00660c58:; BB(0x00660c58);
    /* 00660c58: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00660c5e:; BB(0x00660c5e);
    /* 00660c5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660c5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660c60: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00660c63: lea eax, [edi + 0x5c] */ r_eax = (u32)(r_edi+0x5cu);
    /* 00660c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660c67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660c68: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x660c6du); f_00509dc4();
    /* 00660c6d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660c70: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00660c76: jmp 0x660bb2 */ goto L_00660bb2;
L_00660c7b:; BB(0x00660c7b);
    /* 00660c7b: mov ebp, 0x44 */ r_ebp = 0x44u;
    /* 00660c80: jmp 0x660c4d */ goto L_00660c4d;
L_00660c82:; BB(0x00660c82);
    /* 00660c82: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00660c88: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c8b: je 0x660cc0 */ if (fZ) goto L_00660cc0;
L_00660c8d:; BB(0x00660c8d);
    /* 00660c8d: mov ebp, 8 */ r_ebp = 0x8u;
L_00660c92:; BB(0x00660c92);
    /* 00660c92: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 00660c98: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660c9b: jne 0x660ca3 */ if (!fZ) goto L_00660ca3;
L_00660c9d:; BB(0x00660c9d);
    /* 00660c9d: or ebp, 0x2000 */ {  u32 a = r_ebp; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_00660ca3:; BB(0x00660ca3);
    /* 00660ca3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660ca4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660ca5: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00660ca8: lea eax, [edi + 0x5c] */ r_eax = (u32)(r_edi+0x5cu);
    /* 00660cab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660cac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660cad: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x660cb2u); f_00509dc4();
    /* 00660cb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660cb5: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00660cbb: jmp 0x660bb2 */ goto L_00660bb2;
L_00660cc0:; BB(0x00660cc0);
    /* 00660cc0: mov ebp, 0x48 */ r_ebp = 0x48u;
    /* 00660cc5: jmp 0x660c92 */ goto L_00660c92;
L_00660cc7:; BB(0x00660cc7);
    /* 00660cc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660cc8: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00660ccd: push 0x938f70 */ { u32 v = 0x938f70u; r_esp -= 4; W32(r_esp, v); }
    /* 00660cd2: push 0x938f4c */ { u32 v = 0x938f4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660cd7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x660cdcu); f_0061cdb0();
    /* 00660cdc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660cdf: jmp 0x660ae8 */ goto L_00660ae8;
}

void f_00660ce4(void) /* sub_660CE4 */
{
    FN_ENTER(0x00660ce4);
    /* 00660ce4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00660ce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00660cea: jl 0x660cf3 */ if ((fS!=fO)) goto L_00660cf3;
L_00660cec:; BB(0x00660cec);
    /* 00660cec: cmp eax, 0x240 */ {  u32 a = r_eax; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00660cf1: jl 0x660cf8 */ if ((fS!=fO)) goto L_00660cf8;
L_00660cf3:; BB(0x00660cf3);
    /* 00660cf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660cf5: ret 4 */ FN_RET(0x00660ce4); r_esp += 8; return;
L_00660cf8:; BB(0x00660cf8);
    /* 00660cf8: mov eax, 1 */ r_eax = 0x1u;
    /* 00660cfd: ret 4 */ FN_RET(0x00660ce4); r_esp += 8; return;
}

void f_00660d00(void) /* sub_660D00 */
{
    FN_ENTER(0x00660d00);
    /* 00660d00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00660d01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660d02: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660d05: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00660d07: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 00660d0a: mov edx, dword ptr [ebp + 0x90] */ r_edx = R32((u32)(r_ebp+0x90u));
    /* 00660d10: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00660d13: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00660d16: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00660d1c: push dword ptr [ebp + 0x70] */ { u32 v = R32((u32)(r_ebp+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660d1f: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x660d24u); f_00508dac();
    /* 00660d24: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 00660d2a: test eax, 0x40000001 */ {  u32 a = r_eax; u32 b = 0x40000001u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660d2f: je 0x660d3d */ if (fZ) goto L_00660d3d;
L_00660d31:; BB(0x00660d31);
    /* 00660d31: mov dword ptr [ebp + 0x94], 0x4a095440 */ W32((u32)(r_ebp+0x94u), 0x4a095440u);
    /* 00660d3b: jmp 0x660d4c */ goto L_00660d4c;
L_00660d3d:; BB(0x00660d3d);
    /* 00660d3d: movzx eax, byte ptr [ebp + 0x84] */ r_eax = (u32)R8((u32)(r_ebp+0x84u));
    /* 00660d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660d45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00660d47: call 0x660ec4 */ r_esp -= 4; W32(r_esp, 0x660d4cu); f_00660ec4();
L_00660d4c:; BB(0x00660d4c);
    /* 00660d4c: fld dword ptr [0x938f30] */ FPUSH(R_F32((u32)(0x938f30u)));
    /* 00660d52: fld dword ptr [0x938f2c] */ FPUSH(R_F32((u32)(0x938f2cu)));
    /* 00660d58: mov edi, dword ptr [ebp + 0x84] */ r_edi = R32((u32)(r_ebp+0x84u));
    /* 00660d5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00660d60: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00660d64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00660d66: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00660d6a: mov edx, edi */ r_edx = r_edi;
    /* 00660d6c: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00660d6f: and edx, 0xfff */ {  u32 a = r_edx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00660d75: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00660d78: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00660d7b: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00660d7d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00660d7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00660d81: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00660d82: je 0x660e84 */ if (fZ) goto L_00660e84;
L_00660d88:; BB(0x00660d88);
    /* 00660d88: mov edx, dword ptr [ebp + 0x90] */ r_edx = R32((u32)(r_ebp+0x90u));
    /* 00660d8e: movzx eax, word ptr [edx + 0x2e] */ r_eax = (u32)R16((u32)(r_edx+0x2eu));
    /* 00660d92: fstp dword ptr [edx + 0x64] */ W_F32((u32)(r_edx+0x64u), ST(0)); FPOP();
    /* 00660d95: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00660d9a: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 00660d9e: mov edi, dword ptr [ebp + 0x84] */ r_edi = R32((u32)(r_ebp+0x84u));
L_00660da4:; BB(0x00660da4);
    /* 00660da4: sar edi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00660da7: and edi, 0xfff */ {  u32 a = r_edi; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00660dad: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00660db1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00660db5: fdiv dword ptr [esp + 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x10u));
    /* 00660db9: fcom dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); 
    /* 00660dbd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00660dbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00660dc0: jbe 0x660dd5 */ if ((fC||fZ)) goto L_00660dd5;
L_00660dc2:; BB(0x00660dc2);
    /* 00660dc2: fcom dword ptr [0x938f28] */ fx_compare(ST(0), R_F32((u32)(0x938f28u))); 
    /* 00660dc8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00660dca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00660dcb: jae 0x660dd5 */ if (!fC) goto L_00660dd5;
L_00660dcd:; BB(0x00660dcd);
    /* 00660dcd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00660dcf: fld dword ptr [0x938f28] */ FPUSH(R_F32((u32)(0x938f28u)));
L_00660dd5:; BB(0x00660dd5);
    /* 00660dd5: fcom dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); 
    /* 00660dd9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00660ddb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00660ddc: je 0x660e65 */ if (fZ) goto L_00660e65;
L_00660de2:; BB(0x00660de2);
    /* 00660de2: mov edx, dword ptr [ebp + 0x90] */ r_edx = R32((u32)(r_ebp+0x90u));
    /* 00660de8: movzx eax, word ptr [edx + 0x2e] */ r_eax = (u32)R16((u32)(r_edx+0x2eu));
    /* 00660dec: fstp dword ptr [edx + 0x68] */ W_F32((u32)(r_edx+0x68u), ST(0)); FPOP();
    /* 00660def: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00660df4: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
L_00660df8:; BB(0x00660df8);
    /* 00660df8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00660dfa: call 0x660f20 */ r_esp -= 4; W32(r_esp, 0x660dffu); f_00660f20();
    /* 00660dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660e01: jne 0x660e0a */ if (!fZ) goto L_00660e0a;
L_00660e03:; BB(0x00660e03);
    /* 00660e03: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00660e05: call 0x660f38 */ r_esp -= 4; W32(r_esp, 0x660e0au); f_00660f38();
L_00660e0a:; BB(0x00660e0a);
    /* 00660e0a: mov edi, dword ptr [ebp + 0x8c] */ r_edi = R32((u32)(r_ebp+0x8cu));
    /* 00660e10: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660e13: je 0x660e4f */ if (fZ) goto L_00660e4f;
L_00660e15:; BB(0x00660e15);
    /* 00660e15: mov eax, edi */ r_eax = r_edi;
    /* 00660e17: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00660e1a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00660e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660e1f: jne 0x660e30 */ if (!fZ) goto L_00660e30;
L_00660e21:; BB(0x00660e21);
    /* 00660e21: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e23: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00660e29: call 0x508f38 */ r_esp -= 4; W32(r_esp, 0x660e2eu); f_00508f38();
    /* 00660e2e: jmp 0x660e3d */ goto L_00660e3d;
L_00660e30:; BB(0x00660e30);
    /* 00660e30: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e32: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00660e38: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x660e3du); f_00508f08();
L_00660e3d:; BB(0x00660e3d);
    /* 00660e3d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00660e3e: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00660e44: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x660e49u); f_00508ee4();
    /* 00660e49: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00660e4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660e4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00660e4e: ret  */ FN_RET(0x00660d00); r_esp += 4; return;
L_00660e4f:; BB(0x00660e4f);
    /* 00660e4f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e54: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00660e5a: call 0x508f28 */ r_esp -= 4; W32(r_esp, 0x660e5fu); f_00508f28();
    /* 00660e5f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00660e62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660e63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00660e64: ret  */ FN_RET(0x00660d00); r_esp += 4; return;
L_00660e65:; BB(0x00660e65);
    /* 00660e65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00660e67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00660e69: call 0x660f20 */ r_esp -= 4; W32(r_esp, 0x660e6eu); f_00660f20();
    /* 00660e6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660e70: je 0x660df8 */ if (fZ) goto L_00660df8;
L_00660e72:; BB(0x00660e72);
    /* 00660e72: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e74: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00660e7a: call 0x508f38 */ r_esp -= 4; W32(r_esp, 0x660e7fu); f_00508f38();
    /* 00660e7f: jmp 0x660df8 */ goto L_00660df8;
L_00660e84:; BB(0x00660e84);
    /* 00660e84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00660e86: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00660e88: call 0x660f20 */ r_esp -= 4; W32(r_esp, 0x660e8du); f_00660f20();
    /* 00660e8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660e8f: je 0x660da4 */ if (fZ) goto L_00660da4;
L_00660e95:; BB(0x00660e95);
    /* 00660e95: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660e97: mov ecx, dword ptr [ebp + 0x90] */ r_ecx = R32((u32)(r_ebp+0x90u));
    /* 00660e9d: call 0x508f38 */ r_esp -= 4; W32(r_esp, 0x660ea2u); f_00508f38();
    /* 00660ea2: fld dword ptr [0x938f30] */ FPUSH(R_F32((u32)(0x938f30u)));
    /* 00660ea8: fld dword ptr [0x938f2c] */ FPUSH(R_F32((u32)(0x938f2cu)));
    /* 00660eae: mov edi, dword ptr [ebp + 0x84] */ r_edi = R32((u32)(r_ebp+0x84u));
    /* 00660eb4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00660eb6: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00660eba: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00660ebe: jmp 0x660da4 */ goto L_00660da4;
}

void f_00660ec4(void) /* sub_660EC4 */
{
    FN_ENTER(0x00660ec4);
    /* 00660ec4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00660ec8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00660ecb: je 0x660f10 */ if (fZ) goto L_00660f10;
L_00660ecd:; BB(0x00660ecd);
    /* 00660ecd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00660ed0: je 0x660f03 */ if (fZ) goto L_00660f03;
L_00660ed2:; BB(0x00660ed2);
    /* 00660ed2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00660ed5: jne 0x660ee4 */ if (!fZ) goto L_00660ee4;
L_00660ed7:; BB(0x00660ed7);
    /* 00660ed7: mov dword ptr [ecx + 0x94], 0x471c4000 */ W32((u32)(r_ecx+0x94u), 0x471c4000u);
    /* 00660ee1: ret 4 */ FN_RET(0x00660ec4); r_esp += 8; return;
L_00660ee4:; BB(0x00660ee4);
    /* 00660ee4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00660ee7: jne 0x660ef6 */ if (!fZ) goto L_00660ef6;
L_00660ee9:; BB(0x00660ee9);
    /* 00660ee9: mov dword ptr [ecx + 0x94], 0x461c4000 */ W32((u32)(r_ecx+0x94u), 0x461c4000u);
    /* 00660ef3: ret 4 */ FN_RET(0x00660ec4); r_esp += 8; return;
L_00660ef6:; BB(0x00660ef6);
    /* 00660ef6: mov dword ptr [ecx + 0x94], 0x481c4000 */ W32((u32)(r_ecx+0x94u), 0x481c4000u);
    /* 00660f00: ret 4 */ FN_RET(0x00660ec4); r_esp += 8; return;
L_00660f03:; BB(0x00660f03);
    /* 00660f03: mov dword ptr [ecx + 0x94], 0x4cbebc20 */ W32((u32)(r_ecx+0x94u), 0x4cbebc20u);
    /* 00660f0d: ret 4 */ FN_RET(0x00660ec4); r_esp += 8; return;
L_00660f10:; BB(0x00660f10);
    /* 00660f10: mov dword ptr [ecx + 0x94], 0x4a095440 */ W32((u32)(r_ecx+0x94u), 0x4a095440u);
    /* 00660f1a: ret 4 */ FN_RET(0x00660ec4); r_esp += 8; return;
}

void f_00660f20(void) /* sub_660F20 */
{
    FN_ENTER(0x00660f20);
    /* 00660f20: mov eax, dword ptr [ecx + 0x9c] */ r_eax = R32((u32)(r_ecx+0x9cu));
    /* 00660f26: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660f2b: je 0x660f33 */ if (fZ) goto L_00660f33;
L_00660f2d:; BB(0x00660f2d);
    /* 00660f2d: mov eax, 1 */ r_eax = 0x1u;
    /* 00660f32: ret  */ FN_RET(0x00660f20); r_esp += 4; return;
L_00660f33:; BB(0x00660f33);
    /* 00660f33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660f35: ret  */ FN_RET(0x00660f20); r_esp += 4; return;
}

void f_00660f38(void) /* sub_660F38 */
{
    FN_ENTER(0x00660f38);
    /* 00660f38: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 00660f3e: mov edx, eax */ r_edx = r_eax;
    /* 00660f40: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00660f43: mov word ptr [ecx + 0x98], dx */ W16((u32)(r_ecx+0x98u), (u16)r_edx);
    /* 00660f4a: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00660f50: test edx, 0x40000001 */ {  u32 a = r_edx; u32 b = 0x40000001u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660f56: je 0x660f60 */ if (fZ) goto L_00660f60;
L_00660f58:; BB(0x00660f58);
    /* 00660f58: mov word ptr [ecx + 0x9a], ax */ W16((u32)(r_ecx+0x9au), (u16)r_eax);
    /* 00660f5f: ret  */ FN_RET(0x00660f38); r_esp += 4; return;
L_00660f60:; BB(0x00660f60);
    /* 00660f60: mov word ptr [ecx + 0x9a], ax */ W16((u32)(r_ecx+0x9au), (u16)r_eax);
    /* 00660f67: ret  */ FN_RET(0x00660f38); r_esp += 4; return;
}

void f_00660f68(void) /* sub_660F68 */
{
    FN_ENTER(0x00660f68);
    /* 00660f68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00660f69: mov edi, ecx */ r_edi = r_ecx;
    /* 00660f6b: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 00660f71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660f73: je 0x660fbb */ if (fZ) goto L_00660fbb;
L_00660f75:; BB(0x00660f75);
    /* 00660f75: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x660f7au); f_008173b4();
    /* 00660f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660f7c: je 0x660fbb */ if (fZ) goto L_00660fbb;
L_00660f7e:; BB(0x00660f7e);
    /* 00660f7e: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 00660f84: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00660f87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660f88: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x660f8du); f_00508db8();
    /* 00660f8d: mov ecx, dword ptr [edi + 0x90] */ r_ecx = R32((u32)(r_edi+0x90u));
    /* 00660f93: lea eax, [edi + 0x5c] */ r_eax = (u32)(r_edi+0x5cu);
    /* 00660f96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660f97: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x660f9cu); f_00508dd0();
    /* 00660f9c: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 00660fa2: test eax, 0x40000001 */ {  u32 a = r_eax; u32 b = 0x40000001u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660fa7: je 0x660fb2 */ if (fZ) goto L_00660fb2;
L_00660fa9:; BB(0x00660fa9);
    /* 00660fa9: mov ecx, edi */ r_ecx = r_edi;
    /* 00660fab: call 0x6610a0 */ r_esp -= 4; W32(r_esp, 0x660fb0u); f_006610a0();
    /* 00660fb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00660fb1: ret  */ FN_RET(0x00660f68); r_esp += 4; return;
L_00660fb2:; BB(0x00660fb2);
    /* 00660fb2: mov ecx, edi */ r_ecx = r_edi;
    /* 00660fb4: call 0x660fd4 */ r_esp -= 4; W32(r_esp, 0x660fb9u); f_00660fd4();
    /* 00660fb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00660fba: ret  */ FN_RET(0x00660f68); r_esp += 4; return;
L_00660fbb:; BB(0x00660fbb);
    /* 00660fbb: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00660fbf: mov dword ptr [edi + 0x90], 0 */ W32((u32)(r_edi+0x90u), 0x0u);
    /* 00660fc9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00660fce: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00660fd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00660fd3: ret  */ FN_RET(0x00660f68); r_esp += 4; return;
}

void f_00660fd4(void) /* sub_660FD4 */
{
    FN_ENTER(0x00660fd4);
    /* 00660fd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00660fd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00660fd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00660fd9: call 0x660f20 */ r_esp -= 4; W32(r_esp, 0x660fdeu); f_00660f20();
    /* 00660fde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660fe0: jne 0x661026 */ if (!fZ) goto L_00661026;
L_00660fe2:; BB(0x00660fe2);
    /* 00660fe2: push dword ptr [ebx + 0x94] */ { u32 v = R32((u32)(r_ebx+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00660fe8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x660fedu); f_0082dc9c();
    /* 00660fed: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00660fef: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660ff2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00660ff5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00660ff7: mov dword ptr [esp + 4], 0x42480000 */ W32((u32)(r_esp+0x4u), 0x42480000u);
    /* 00660fff: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x661002u); call_ind(t); }
    /* 00661002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661004: jne 0x661026 */ if (!fZ) goto L_00661026;
L_00661006:; BB(0x00661006);
    /* 00661006: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 0066100d: mov word ptr [ebx + 0x98], ax */ W16((u32)(r_ebx+0x98u), (u16)r_eax);
    /* 00661014: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00661016: mov word ptr [ebx + 0x9a], dx */ W16((u32)(r_ebx+0x9au), (u16)r_edx);
    /* 0066101d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066101f: call 0x66167c */ r_esp -= 4; W32(r_esp, 0x661024u); f_0066167c();
    /* 00661024: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661025: ret  */ FN_RET(0x00660fd4); r_esp += 4; return;
L_00661026:; BB(0x00661026);
    /* 00661026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00661028: call 0x661054 */ r_esp -= 4; W32(r_esp, 0x66102du); f_00661054();
    /* 0066102d: movzx eax, word ptr [ebx + 0x9a] */ r_eax = (u32)R16((u32)(r_ebx+0x9au));
    /* 00661034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661036: je 0x661044 */ if (fZ) goto L_00661044;
L_00661038:; BB(0x00661038);
    /* 00661038: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066103b: mov word ptr [ebx + 0x9a], ax */ W16((u32)(r_ebx+0x9au), (u16)r_eax);
    /* 00661042: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661043: ret  */ FN_RET(0x00660fd4); r_esp += 4; return;
L_00661044:; BB(0x00661044);
    /* 00661044: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00661046: call 0x660f38 */ r_esp -= 4; W32(r_esp, 0x66104bu); f_00660f38();
    /* 0066104b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066104d: call 0x66107c */ r_esp -= 4; W32(r_esp, 0x661052u); f_0066107c();
    /* 00661052: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00661053: ret  */ FN_RET(0x00660fd4); r_esp += 4; return;
}

