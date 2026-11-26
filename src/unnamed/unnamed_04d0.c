#include "protos.h"

void f_004d0000(void)
{
    FN_ENTER(0x004d0000);
    /* 004d0000: je 0x4d0026 */ if (fZ) goto L_004d0026;
L_004d0002:; BB(0x004d0002);
    /* 004d0002: adc al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0004: iretd  */ UNSUP(0x004d0004, "iretd ");
    /* 004d0005: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d000au); f_008193cc();
    /* 004d000a: mov dword ptr [edi], 0xafc068 */ W32((u32)(r_edi), 0xafc068u);
    /* 004d0010: mov eax, dword ptr [0x9ac91c] */ r_eax = R32((u32)(0x9ac91cu));
    /* 004d0015: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004d0018: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004d001b: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004d001e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004d0021: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004d0024: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
L_004d0026:; BB(0x004d0026);
    /* 004d0026: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d0027: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0029: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 004d002c: mov dword ptr [edi + 0x24], ebp */ W32((u32)(r_edi+0x24u), r_ebp);
    /* 004d002f: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 004d0036: mov word ptr [edi + 0x30], ax */ W16((u32)(r_edi+0x30u), (u16)r_eax);
    /* 004d003a: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004d0041: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d0046u); f_008587a5();
    /* 004d0046: mov edx, dword ptr [0xa486d8] */ r_edx = R32((u32)(0xa486d8u));
    /* 004d004c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d004f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d0052: fdiv dword ptr [0x908b30] */ ST(0) = ST(0) / R_F32((u32)(0x908b30u));
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d0000); r_esp += 20; return;
}

void f_004d0025(void)
{
    FN_ENTER(0x004d0025);
    /* 004d0025: mov bh, 0x44 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x44u) & 0xffu) << 8);
    /* 004d0027: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0029: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 004d002c: mov dword ptr [edi + 0x24], ebp */ W32((u32)(r_edi+0x24u), r_ebp);
    /* 004d002f: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 004d0036: mov word ptr [edi + 0x30], ax */ W16((u32)(r_edi+0x30u), (u16)r_eax);
    /* 004d003a: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004d0041: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d0046u); f_008587a5();
    /* 004d0046: mov edx, dword ptr [0xa486d8] */ r_edx = R32((u32)(0xa486d8u));
    /* 004d004c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d004f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d0052: fdiv dword ptr [0x908b30] */ ST(0) = ST(0) / R_F32((u32)(0x908b30u));
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d0025); r_esp += 20; return;
}

void f_004d002c(void)
{
    FN_ENTER(0x004d002c);
    /* 004d002c: mov dword ptr [edi + 0x24], ebp */ W32((u32)(r_edi+0x24u), r_ebp);
    /* 004d002f: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 004d0036: mov word ptr [edi + 0x30], ax */ W16((u32)(r_edi+0x30u), (u16)r_eax);
    /* 004d003a: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004d0041: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d0046u); f_008587a5();
    /* 004d0046: mov edx, dword ptr [0xa486d8] */ r_edx = R32((u32)(0xa486d8u));
    /* 004d004c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d004f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d0052: fdiv dword ptr [0x908b30] */ ST(0) = ST(0) / R_F32((u32)(0x908b30u));
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d002c); r_esp += 20; return;
}

void f_004d002e(void)
{
    FN_ENTER(0x004d002e);
    /* 004d002e: and al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0030: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d0031: and byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 004d0033: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0035: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0038: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d0039: xor bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004d003b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d003c: sub byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 004d003e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0040: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0042: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d0043: xchg dword ptr [eax], edi */ { u32 x = R32((u32)(r_eax)); u32 y = r_edi; W32((u32)(r_eax), y); r_edi = x; }
    /* 004d0045: add byte ptr [ebx - 0x5b7927eb], cl */ { u32 ad = (u32)(r_ebx+0xa486d815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d004b: add byte ptr [ecx + 0x4db2404], cl */ { u32 ad = (u32)(r_ecx+0x4db2404u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0051: and al, 0xd8 */ {  u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0053: xor eax, 0x908b30 */ {  u32 a = r_eax; u32 b = 0x908b30u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d002e); r_esp += 20; return;
}

void f_004d0035(void)
{
    FN_ENTER(0x004d0035);
    /* 004d0035: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0038: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d0039: xor bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004d003b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004d003c: sub byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 004d003e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0040: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0042: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d0043: xchg dword ptr [eax], edi */ { u32 x = R32((u32)(r_eax)); u32 y = r_edi; W32((u32)(r_eax), y); r_edi = x; }
    /* 004d0045: add byte ptr [ebx - 0x5b7927eb], cl */ { u32 ad = (u32)(r_ebx+0xa486d815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d004b: add byte ptr [ecx + 0x4db2404], cl */ { u32 ad = (u32)(r_ecx+0x4db2404u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0051: and al, 0xd8 */ {  u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0053: xor eax, 0x908b30 */ {  u32 a = r_eax; u32 b = 0x908b30u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d0035); r_esp += 20; return;
}

void f_004d0045(void)
{
    FN_ENTER(0x004d0045);
    /* 004d0045: add byte ptr [ebx - 0x5b7927eb], cl */ { u32 ad = (u32)(r_ebx+0xa486d815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d004b: add byte ptr [ecx + 0x4db2404], cl */ { u32 ad = (u32)(r_ecx+0x4db2404u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d0051: and al, 0xd8 */ {  u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0053: xor eax, 0x908b30 */ {  u32 a = r_eax; u32 b = 0x908b30u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d0045); r_esp += 20; return;
}

void f_004d004c(void)
{
    FN_ENTER(0x004d004c);
    /* 004d004c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d004f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d0052: fdiv dword ptr [0x908b30] */ ST(0) = ST(0) / R_F32((u32)(0x908b30u));
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d004c); r_esp += 20; return;
}

void f_004d0052(void)
{
    FN_ENTER(0x004d0052);
    /* 004d0052: fdiv dword ptr [0x908b30] */ ST(0) = ST(0) / R_F32((u32)(0x908b30u));
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d0052); r_esp += 20; return;
}

void f_004d0056(void)
{
    FN_ENTER(0x004d0056);
    /* 004d0056: nop  */ ;
    /* 004d0057: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d0059: or eax, 0x908b2c */ {  u32 a = r_eax; u32 b = 0x908b2cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004d0056); r_esp += 20; return;
}

void f_004d0080(void) /* sub_4D0080 */
{
    FN_ENTER(0x004d0080);
    /* 004d0080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d0081: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d0084: mov edi, ecx */ r_edi = r_ecx;
    /* 004d0086: movzx eax, word ptr [edi + 0x30] */ r_eax = (u32)R16((u32)(r_edi+0x30u));
    /* 004d008a: fld dword ptr [0x908b28] */ FPUSH(R_F32((u32)(0x908b28u)));
    /* 004d0090: fadd dword ptr [edi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x28u));
    /* 004d0093: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0097: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4d009cu); f_00786b3c();
    /* 004d009c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d009d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d009f: je 0x4d00b2 */ if (fZ) goto L_004d00b2;
L_004d00a1:; BB(0x004d00a1);
    /* 004d00a1: push dword ptr [0xa486dc] */ { u32 v = R32((u32)(0xa486dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d00a7: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 004d00aa: mov ecx, eax */ r_ecx = r_eax;
    /* 004d00ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d00ad: call 0x4cd344 */ r_esp -= 4; W32(r_esp, 0x4d00b2u); f_004cd344();
L_004d00b2:; BB(0x004d00b2);
    /* 004d00b2: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 004d00b5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004d00b8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d00bb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d00be: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d00c1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d00c4: fadd dword ptr [eax*4 + 0x908b18] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908b18u));
    /* 004d00cb: fcom dword ptr [edi + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x28u))); 
    /* 004d00ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d00d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d00d1: ja 0x4d00e3 */ if ((!fC&&!fZ)) goto L_004d00e3;
L_004d00d3:; BB(0x004d00d3);
    /* 004d00d3: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004d00d7: fst dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0));
    /* 004d00da: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d00df: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_004d00e3:; BB(0x004d00e3);
    /* 004d00e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d00e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d00e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d00e9: ret  */ FN_RET(0x004d0080); r_esp += 4; return;
}

void f_004d00ec(void) /* sub_4D00EC */
{
    FN_ENTER(0x004d00ec);
    /* 004d00ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d00ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d00ee: mov esi, ecx */ r_esi = r_ecx;
    /* 004d00f0: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x4d00f5u); f_0067e408();
    /* 004d00f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d00f7: je 0x4d00fc */ if (fZ) goto L_004d00fc;
L_004d00f9:; BB(0x004d00f9);
    /* 004d00f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d00fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d00fb: ret  */ FN_RET(0x004d00ec); r_esp += 4; return;
L_004d00fc:; BB(0x004d00fc);
    /* 004d00fc: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x4d0101u); f_00482a20();
    /* 004d0101: mov edx, dword ptr [0xa486d8] */ r_edx = R32((u32)(0xa486d8u));
    /* 004d0107: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004d010a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d010c: jne 0x4d0119 */ if (!fZ) goto L_004d0119;
L_004d010e:; BB(0x004d010e);
    /* 004d010e: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004d0114: mov ebp, dword ptr [eax + 0x28] */ r_ebp = R32((u32)(r_eax+0x28u));
    /* 004d0117: jmp 0x4d0122 */ goto L_004d0122;
L_004d0119:; BB(0x004d0119);
    /* 004d0119: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 004d011f: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
L_004d0122:; BB(0x004d0122);
    /* 004d0122: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004d0125: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4d012au); f_00829cc8();
    /* 004d012a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d012fu); f_0082d7b0();
    /* 004d012f: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 004d0132: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4d0137u); f_0082d838();
    /* 004d0137: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d013c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0141: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0146: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d0148: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4d014du); f_0082fa0c();
    /* 004d014d: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x4d0152u); f_00835068();
    /* 004d0152: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0155: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 004d0158: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d015a: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x4d015fu); f_00835574();
    /* 004d015f: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x4d0164u); f_00835078();
    /* 004d0164: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d0169u); f_0082da80();
    /* 004d0169: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x4d016eu); f_007a9044();
    /* 004d016e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d016f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d0170: ret  */ FN_RET(0x004d00ec); r_esp += 4; return;
}

void f_004d0174(void) /* sub_4D0174 */
{
    FN_ENTER(0x004d0174);
    /* 004d0174: mov dword ptr [0xa486dc], 0x41c80000 */ W32((u32)(0xa486dcu), 0x41c80000u);
    /* 004d017e: ret  */ FN_RET(0x004d0174); r_esp += 4; return;
}

void f_004d0180(void) /* sub_4D0180 */
{
    FN_ENTER(0x004d0180);
    /* 004d0180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0181: mov ebp, esp */ r_ebp = r_esp;
    /* 004d0183: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d0185: push 0x8d1a58 */ { u32 v = 0x8d1a58u; r_esp -= 4; W32(r_esp, v); }
    /* 004d018a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d0190: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0191: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d0198: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d019b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d019e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d01a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d01a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d01a7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004d01ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d01b3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4d01b8u); f_008581c5();
    /* 004d01b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d01b9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d01bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d01be: je 0x4d0210 */ if (fZ) goto L_004d0210;
L_004d01c0:; BB(0x004d01c0);
    /* 004d01c0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d01c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d01ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d01d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d01d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d01d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d01d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d01d6: push 0x9ac90c */ { u32 v = 0x9ac90cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d01db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004d01dd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4d01e2u); f_005b7a84();
    /* 004d01e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d01e5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d01ec:; BB(0x004d01ec);
    /* 004d01ec: mov dword ptr [0xa486d8], ecx */ W32((u32)(0xa486d8u), r_ecx);
    /* 004d01f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d01f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d01fb: je 0x4d0202 */ if (fZ) goto L_004d0202;
L_004d01fd:; BB(0x004d01fd);
    /* 004d01fd: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x4d0202u); f_005b90d0();
L_004d0202:; BB(0x004d0202);
    /* 004d0202: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d0205: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d020c: mov esp, ebp */ r_esp = r_ebp;
    /* 004d020e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d020f: ret  */ FN_RET(0x004d0180); r_esp += 4; return;
L_004d0210:; BB(0x004d0210);
    /* 004d0210: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d0212: jmp 0x4d01ec */ goto L_004d01ec;
}

void f_004d0214(void) /* sub_4D0214 */
{
    FN_ENTER(0x004d0214);
    /* 004d0214: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0215: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d0217: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0219: call 0x4d0238 */ r_esp -= 4; W32(r_esp, 0x4d021eu); f_004d0238();
    /* 004d021e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d0222: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0224: jne 0x4d022a */ if (!fZ) goto L_004d022a;
L_004d0226:; BB(0x004d0226);
    /* 004d0226: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0227: ret 4 */ FN_RET(0x004d0214); r_esp += 8; return;
L_004d022a:; BB(0x004d022a);
    /* 004d022a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d022b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d0230u); f_005c2f74();
    /* 004d0230: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d0231: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0232: ret 4 */ FN_RET(0x004d0214); r_esp += 8; return;
}

void f_004d0238(void) /* sub_4D0238 */
{
    FN_ENTER(0x004d0238);
    /* 004d0238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0239: mov ebp, esp */ r_ebp = r_esp;
    /* 004d023b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d023d: push 0x8d1a74 */ { u32 v = 0x8d1a74u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0242: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d0248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0249: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d0250: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d0253: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d0256: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d0259: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d025c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d025f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d0262: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d0269: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d026c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004d026f: mov dword ptr [ecx], 0xafc0c8 */ W32((u32)(r_ecx), 0xafc0c8u);
    /* 004d0275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0277: je 0x4d028a */ if (fZ) goto L_004d028a;
L_004d0279:; BB(0x004d0279);
    /* 004d0279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d027a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4d027fu); f_00857e98();
    /* 004d027f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d0280: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0283: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_004d028a:; BB(0x004d028a);
    /* 004d028a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d0291: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d0296u); f_008171e8();
    /* 004d0296: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d0299: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d02a0: mov esp, ebp */ r_esp = r_ebp;
    /* 004d02a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d02a3: ret  */ FN_RET(0x004d0238); r_esp += 4; return;
}

void f_004d02a4(void) /* sub_4D02A4 */
{
    FN_ENTER(0x004d02a4);
    /* 004d02a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d02a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d02a6: mov edi, ecx */ r_edi = r_ecx;
    /* 004d02a8: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004d02ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d02b0: mov ecx, edi */ r_ecx = r_edi;
    /* 004d02b2: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d02b7u); f_008193cc();
    /* 004d02b7: mov dword ptr [edi], 0xafc0c8 */ W32((u32)(r_edi), 0xafc0c8u);
    /* 004d02bd: mov edx, dword ptr [0x9ac920] */ r_edx = R32((u32)(0x9ac920u));
    /* 004d02c3: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004d02c6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004d02c8: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004d02cb: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 004d02ce: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004d02d1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004d02d6: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 004d02d9: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004d02dc: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 004d02e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d02e5: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 004d02e8: mov word ptr [edi + 0x2c], ax */ W16((u32)(r_edi+0x2cu), (u16)r_eax);
    /* 004d02ec: mov dword ptr [edi + 0x34], 0x908c00 */ W32((u32)(r_edi+0x34u), 0x908c00u);
    /* 004d02f3: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 004d02f6: mov eax, edi */ r_eax = r_edi;
    /* 004d02f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d02f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d02fa: ret 0x10 */ FN_RET(0x004d02a4); r_esp += 20; return;
}

void f_004d0300(void) /* sub_4D0300 */
{
    FN_ENTER(0x004d0300);
    /* 004d0300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0301: mov ebp, esp */ r_ebp = r_esp;
    /* 004d0303: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d0305: push 0x8d1a9c */ { u32 v = 0x8d1a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d030a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d0310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0311: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d0318: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d031b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d031e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d0321: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d0324: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d0327: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 004d032a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004d032d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d032f: je 0x4d0371 */ if (fZ) goto L_004d0371;
L_004d0331:; BB(0x004d0331);
    /* 004d0331: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0334: je 0x4d0371 */ if (fZ) goto L_004d0371;
L_004d0336:; BB(0x004d0336);
    /* 004d0336: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0339: je 0x4d0371 */ if (fZ) goto L_004d0371;
L_004d033b:; BB(0x004d033b);
    /* 004d033b: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d033e: je 0x4d0371 */ if (fZ) goto L_004d0371;
L_004d0340:; BB(0x004d0340);
    /* 004d0340: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 004d0343: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 004d0346: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d0349: jle 0x4d035a */ if ((fZ||fS!=fO)) goto L_004d035a;
L_004d034b:; BB(0x004d034b);
    /* 004d034b: mov edx, ecx */ r_edx = r_ecx;
    /* 004d034d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004d0351: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0356: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004d035a:; BB(0x004d035a);
    /* 004d035a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d035d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d0360: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d0363: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d0366: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d036d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d036f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0370: ret  */ FN_RET(0x004d0300); r_esp += 4; return;
L_004d0371:; BB(0x004d0371);
    /* 004d0371: mov edx, ecx */ r_edx = r_ecx;
    /* 004d0373: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 004d0376: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004d0379: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d037f: je 0x4d045d */ if (fZ) goto L_004d045d;
L_004d0385:; BB(0x004d0385);
    /* 004d0385: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d0388: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004d038b: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004d038e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004d0391: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004d0394: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004d0397: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004d039a: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 004d039d: fmul dword ptr [0xa486e8] */ ST(0) = ST(0) * R_F32((u32)(0xa486e8u));
    /* 004d03a3: fadd dword ptr [ebx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1cu));
    /* 004d03a6: fst dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0));
    /* 004d03a9: fild dword ptr [edx] */ FPUSH((long double)(i32)R32((u32)(r_edx)));
    /* 004d03ab: fmul dword ptr [0xa486ec] */ ST(0) = ST(0) * R_F32((u32)(0xa486ecu));
    /* 004d03b1: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 004d03b4: fst dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 004d03b7: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004d03ba: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d03bd: je 0x4d03c8 */ if (fZ) goto L_004d03c8;
L_004d03bf:; BB(0x004d03bf);
    /* 004d03bf: fadd dword ptr [0xa486f0] */ ST(0) = ST(0) + R_F32((u32)(0xa486f0u));
    /* 004d03c5: fst dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0));
L_004d03c8:; BB(0x004d03c8);
    /* 004d03c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d03ca: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004d03cd: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004d03d0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004d03d3: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004d03d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d03d7: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4d03dcu); f_007828e4();
    /* 004d03dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d03dd: fld dword ptr [0x908d74] */ FPUSH(R_F32((u32)(0x908d74u)));
    /* 004d03e3: fsub dword ptr [0xa486e4] */ ST(0) = ST(0) - R_F32((u32)(0xa486e4u));
    /* 004d03e9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004d03eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d03ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d03ee: jb 0x4d043f */ if (fC) goto L_004d043f;
L_004d03f0:; BB(0x004d03f0);
    /* 004d03f0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004d03f7: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004d03f9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d03feu); f_005caba4();
    /* 004d03fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d03ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004d0402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0404: je 0x4d0438 */ if (fZ) goto L_004d0438;
L_004d0406:; BB(0x004d0406);
    /* 004d0406: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004d040d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d0414: mov edx, ebx */ r_edx = r_ebx;
    /* 004d0416: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 004d0419: movzx ebx, word ptr [edx + 0x2c] */ r_ebx = (u32)R16((u32)(r_edx+0x2cu));
    /* 004d041d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d041e: mov ecx, eax */ r_ecx = r_eax;
    /* 004d0420: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0425: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d0426: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d042c: call 0x4cfff4 */ r_esp -= 4; W32(r_esp, 0x4d0431u); f_004cfff4();
    /* 004d0431: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004d0438:; BB(0x004d0438);
    /* 004d0438: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004d043f:; BB(0x004d043f);
    /* 004d043f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d0442: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004d0445: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d0448: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 004d044b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004d044e: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0454: jne 0x4d0385 */ if (!fZ) goto L_004d0385;
L_004d045a:; BB(0x004d045a);
    /* 004d045a: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_004d045d:; BB(0x004d045d);
    /* 004d045d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d0460: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d0463: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004d0466: jmp 0x4d0340 */ goto L_004d0340;
}

void f_004d0498(void) /* sub_4D0498 */
{
    FN_ENTER(0x004d0498);
    /* 004d0498: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0499: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d049b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d049d: call 0x4d04bc */ r_esp -= 4; W32(r_esp, 0x4d04a2u); f_004d04bc();
    /* 004d04a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d04a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d04a8: jne 0x4d04ae */ if (!fZ) goto L_004d04ae;
L_004d04aa:; BB(0x004d04aa);
    /* 004d04aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d04ab: ret 4 */ FN_RET(0x004d0498); r_esp += 8; return;
L_004d04ae:; BB(0x004d04ae);
    /* 004d04ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d04af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d04b4u); f_005c2f74();
    /* 004d04b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d04b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d04b6: ret 4 */ FN_RET(0x004d0498); r_esp += 8; return;
}

void f_004d04bc(void) /* sub_4D04BC */
{
    FN_ENTER(0x004d04bc);
    /* 004d04bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d04bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004d04bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d04c1: push 0x8d1ab8 */ { u32 v = 0x8d1ab8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d04c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d04cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d04cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d04d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d04d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d04da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d04dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d04e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d04e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d04e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d04e9: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 004d04ec: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004d04ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d04f1: mov dword ptr [ecx], 0xafc298 */ W32((u32)(r_ecx), 0xafc298u);
    /* 004d04f7: mov dword ptr [eax*4 + 0xa486f8], 0 */ W32((u32)(r_eax*4+0xa486f8u), 0x0u);
    /* 004d0502: je 0x4d0514 */ if (fZ) goto L_004d0514;
L_004d0504:; BB(0x004d0504);
    /* 004d0504: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0507: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004d050b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0510: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004d0514:; BB(0x004d0514);
    /* 004d0514: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 004d051b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d0522: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d0527u); f_008171e8();
    /* 004d0527: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d052a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d0531: mov esp, ebp */ r_esp = r_ebp;
    /* 004d0533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0534: ret  */ FN_RET(0x004d04bc); r_esp += 4; return;
}

void f_004d0538(void) /* sub_4D0538 */
{
    FN_ENTER(0x004d0538);
    /* 004d0538: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0539: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d053b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d053d: call 0x4d055c */ r_esp -= 4; W32(r_esp, 0x4d0542u); f_004d055c();
    /* 004d0542: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d0546: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0548: jne 0x4d054e */ if (!fZ) goto L_004d054e;
L_004d054a:; BB(0x004d054a);
    /* 004d054a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d054b: ret 4 */ FN_RET(0x004d0538); r_esp += 8; return;
L_004d054e:; BB(0x004d054e);
    /* 004d054e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d054f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d0554u); f_005c2f74();
    /* 004d0554: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d0555: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0556: ret 4 */ FN_RET(0x004d0538); r_esp += 8; return;
}

void f_004d055c(void) /* sub_4D055C */
{
    FN_ENTER(0x004d055c);
    /* 004d055c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d055d: mov ebp, esp */ r_ebp = r_esp;
    /* 004d055f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d0561: push 0x8d1ad4 */ { u32 v = 0x8d1ad4u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0566: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d056c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d056d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d0574: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d0577: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d057a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d057d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d0580: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d0583: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d0586: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0589: mov dword ptr [ecx], 0xafc2a8 */ W32((u32)(r_ecx), 0xafc2a8u);
    /* 004d058f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d0596: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x4d059bu); f_007ba1f0();
    /* 004d059b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d059e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d05a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004d05a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d05a8: ret  */ FN_RET(0x004d055c); r_esp += 4; return;
}

void f_004d05ac(void) /* sub_4D05AC */
{
    FN_ENTER(0x004d05ac);
    /* 004d05ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d05ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d05af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d05b1: call 0x4d0644 */ r_esp -= 4; W32(r_esp, 0x4d05b6u); f_004d0644();
    /* 004d05b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d05ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d05bc: jne 0x4d05c2 */ if (!fZ) goto L_004d05c2;
L_004d05be:; BB(0x004d05be);
    /* 004d05be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d05bf: ret 4 */ FN_RET(0x004d05ac); r_esp += 8; return;
L_004d05c2:; BB(0x004d05c2);
    /* 004d05c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d05c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d05c8u); f_005c2f74();
    /* 004d05c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d05c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d05ca: ret 4 */ FN_RET(0x004d05ac); r_esp += 8; return;
}

void f_004d05d0(void) /* sub_4D05D0 */
{
    FN_ENTER(0x004d05d0);
    /* 004d05d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d05d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d05d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d05d5: call 0x4d05f4 */ r_esp -= 4; W32(r_esp, 0x4d05dau); f_004d05f4();
    /* 004d05da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d05de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d05e0: jne 0x4d05e6 */ if (!fZ) goto L_004d05e6;
L_004d05e2:; BB(0x004d05e2);
    /* 004d05e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d05e3: ret 4 */ FN_RET(0x004d05d0); r_esp += 8; return;
L_004d05e6:; BB(0x004d05e6);
    /* 004d05e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d05e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d05ecu); f_005c2f74();
    /* 004d05ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d05ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d05ee: ret 4 */ FN_RET(0x004d05d0); r_esp += 8; return;
}

void f_004d05f4(void) /* sub_4D05F4 */
{
    FN_ENTER(0x004d05f4);
    /* 004d05f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d05f5: mov ebp, esp */ r_ebp = r_esp;
    /* 004d05f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d05f9: push 0x8d1af0 */ { u32 v = 0x8d1af0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d05fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d0604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0605: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d060c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d060f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d0612: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d0615: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d0618: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d061b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d061e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0621: mov dword ptr [ecx], 0xafc2e4 */ W32((u32)(r_ecx), 0xafc2e4u);
    /* 004d0627: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d062e: call 0x4d0644 */ r_esp -= 4; W32(r_esp, 0x4d0633u); f_004d0644();
    /* 004d0633: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d0636: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d063d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d063f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0640: ret  */ FN_RET(0x004d05f4); r_esp += 4; return;
}

void f_004d0644(void) /* sub_4D0644 */
{
    FN_ENTER(0x004d0644);
    /* 004d0644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0645: mov ebp, esp */ r_ebp = r_esp;
    /* 004d0647: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d0649: push 0x8d1b0c */ { u32 v = 0x8d1b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d064e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d0654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0655: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d065c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d065f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d0662: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d0665: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d0668: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d066b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d066e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0671: mov dword ptr [ecx], 0xafc2d4 */ W32((u32)(r_ecx), 0xafc2d4u);
    /* 004d0677: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d067e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d0683u); f_008171e8();
    /* 004d0683: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d0686: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d068d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d068f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0690: ret  */ FN_RET(0x004d0644); r_esp += 4; return;
}

void f_004d0694(void) /* sub_4D0694 */
{
    FN_ENTER(0x004d0694);
    /* 004d0694: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0695: mov ebp, esp */ r_ebp = r_esp;
    /* 004d0697: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d0699: push 0x8d1b42 */ { u32 v = 0x8d1b42u; r_esp -= 4; W32(r_esp, v); }
    /* 004d069e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d06a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d06a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d06ac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d06af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d06b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d06b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d06b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d06bb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d06be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004d06c1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d06c6u); f_008193cc();
    /* 004d06c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d06cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d06d0: mov dword ptr [ecx], 0xafc298 */ W32((u32)(r_ecx), 0xafc298u);
    /* 004d06d6: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d06d9: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x4d06deu); f_00763030();
    /* 004d06de: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d06e1: mov eax, dword ptr [0x9ac948] */ r_eax = R32((u32)(0x9ac948u));
    /* 004d06e6: mov ebx, dword ptr [0xa486fc] */ r_ebx = R32((u32)(0xa486fcu));
    /* 004d06ec: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 004d06f1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004d06f4: mov dword ptr [ebx*4 + 0xa486f8], ecx */ W32((u32)(r_ebx*4+0xa486f8u), r_ecx);
    /* 004d06fb: mov dword ptr [ecx + 0x20], 1 */ W32((u32)(r_ecx+0x20u), 0x1u);
    /* 004d0702: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 004d0709: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004d070c: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 004d070f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004d0711: mov dword ptr [0xa486fc], edx */ W32((u32)(0xa486fcu), r_edx);
    /* 004d0717: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 004d071e: mov word ptr [ecx + 0x1c], di */ W16((u32)(r_ecx+0x1cu), (u16)r_edi);
    /* 004d0722: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 004d0729: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d072a: mov word ptr [ecx + 0x1e], di */ W16((u32)(r_ecx+0x1eu), (u16)r_edi);
    /* 004d072e: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 004d0735: mov word ptr [ecx + 0x24], si */ W16((u32)(r_ecx+0x24u), (u16)r_esi);
    /* 004d0739: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 004d073c: mov dword ptr [ecx + 0x2c], edi */ W32((u32)(r_ecx+0x2cu), r_edi);
    /* 004d073f: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 004d0746: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 004d074d: mov dword ptr [ecx + 0x48], 0x3f800000 */ W32((u32)(r_ecx+0x48u), 0x3f800000u);
    /* 004d0754: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d0757: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x4d075cu); f_0084c390();
    /* 004d075c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d075e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0764: call 0x8115f0 */ r_esp -= 4; W32(r_esp, 0x4d0769u); f_008115f0();
    /* 004d0769: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d076c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d076e: jne 0x4d07af */ if (!fZ) goto L_004d07af;
L_004d0770:; BB(0x004d0770);
    /* 004d0770: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d0773: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 004d077a: mov eax, 5 */ r_eax = 0x5u;
    /* 004d077f: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 004d0783: mov dword ptr [ecx + 0x38], 0x431b0000 */ W32((u32)(r_ecx+0x38u), 0x431b0000u);
    /* 004d078a: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004d078f: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 004d0793: mov dword ptr [ecx + 0x3c], 0xc4318000 */ W32((u32)(r_ecx+0x3cu), 0xc4318000u);
    /* 004d079a: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 004d07a1: mov dword ptr [ecx + 0x44], 0x431b0000 */ W32((u32)(r_ecx+0x44u), 0x431b0000u);
    /* 004d07a8: mov dword ptr [ecx + 0x48], 0xc4340000 */ W32((u32)(r_ecx+0x48u), 0xc4340000u);
L_004d07af:; BB(0x004d07af);
    /* 004d07af: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004d07b6: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d07b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d07bdu); f_005caba4();
    /* 004d07bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d07c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d07c3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004d07c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d07c8: je 0x4d0829 */ if (fZ) goto L_004d0829;
L_004d07ca:; BB(0x004d07ca);
    /* 004d07ca: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004d07d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004d07d8: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004d07dd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d07e0: mov ebx, dword ptr [eax + 0x4c] */ r_ebx = R32((u32)(r_eax+0x4cu));
    /* 004d07e3: lea edx, [eax + 0x34] */ r_edx = (u32)(r_eax+0x34u);
    /* 004d07e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d07e9: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d07ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d07ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d07ee: push dword ptr [ebx*4 + 0x908e14] */ { u32 v = R32((u32)(r_ebx*4+0x908e14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d07f5: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d07fb: call 0x502434 */ r_esp -= 4; W32(r_esp, 0x4d0800u); f_00502434();
    /* 004d0800: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004d0807:; BB(0x004d0807);
    /* 004d0807: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d080a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d080d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0810: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d0813: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d0816: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 004d0819: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d081c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d0823: mov esp, ebp */ r_esp = r_ebp;
    /* 004d0825: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0826: ret 4 */ FN_RET(0x004d0694); r_esp += 8; return;
L_004d0829:; BB(0x004d0829);
    /* 004d0829: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d082b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d082e: jmp 0x4d0807 */ goto L_004d0807;
}

void f_004d0830(void) /* sub_4D0830 */
{
    FN_ENTER(0x004d0830);
    /* 004d0830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0831: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d0833: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0835: call 0x4d0860 */ r_esp -= 4; W32(r_esp, 0x4d083au); f_004d0860();
    /* 004d083a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d083c: call 0x4d08a8 */ r_esp -= 4; W32(r_esp, 0x4d0841u); f_004d08a8();
    /* 004d0841: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0843: call 0x4d0b18 */ r_esp -= 4; W32(r_esp, 0x4d0848u); f_004d0b18();
    /* 004d0848: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 004d084b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d084d: je 0x4d085e */ if (fZ) goto L_004d085e;
L_004d084f:; BB(0x004d084f);
    /* 004d084f: lea eax, [ebx + 0x34] */ r_eax = (u32)(r_ebx+0x34u);
    /* 004d0852: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d0855: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0856: mov ecx, edx */ r_ecx = r_edx;
    /* 004d0858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0859: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x4d085eu); f_00502604();
L_004d085e:; BB(0x004d085e);
    /* 004d085e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d085f: ret  */ FN_RET(0x004d0830); r_esp += 4; return;
}

void f_004d0860(void) /* sub_4D0860 */
{
    FN_ENTER(0x004d0860);
    /* 004d0860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0861: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d0863: call 0x4ce8b8 */ r_esp -= 4; W32(r_esp, 0x4d0868u); f_004ce8b8();
    /* 004d0868: cmp eax, dword ptr [ebp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d086b: jg 0x4d0877 */ if ((!fZ&&fS==fO)) goto L_004d0877;
L_004d086d:; BB(0x004d086d);
    /* 004d086d: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004d0870: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d0873: jne 0x4d0891 */ if (!fZ) goto L_004d0891;
L_004d0875:; BB(0x004d0875);
    /* 004d0875: jmp 0x4d0893 */ goto L_004d0893;
L_004d0877:; BB(0x004d0877);
    /* 004d0877: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004d087a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d087c: jne 0x4d0891 */ if (!fZ) goto L_004d0891;
L_004d087e:; BB(0x004d087e);
    /* 004d087e: mov ecx, dword ptr [ebp + 0x50] */ r_ecx = R32((u32)(r_ebp+0x50u));
    /* 004d0881: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0883: je 0x4d088a */ if (fZ) goto L_004d088a;
L_004d0885:; BB(0x004d0885);
    /* 004d0885: call 0x502498 */ r_esp -= 4; W32(r_esp, 0x4d088au); f_00502498();
L_004d088a:; BB(0x004d088a);
    /* 004d088a: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
L_004d0891:; BB(0x004d0891);
    /* 004d0891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0892: ret  */ FN_RET(0x004d0860); r_esp += 4; return;
L_004d0893:; BB(0x004d0893);
    /* 004d0893: mov ecx, dword ptr [ebp + 0x50] */ r_ecx = R32((u32)(r_ebp+0x50u));
    /* 004d0896: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0898: je 0x4d089f */ if (fZ) goto L_004d089f;
L_004d089a:; BB(0x004d089a);
    /* 004d089a: call 0x502488 */ r_esp -= 4; W32(r_esp, 0x4d089fu); f_00502488();
L_004d089f:; BB(0x004d089f);
    /* 004d089f: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 004d08a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d08a7: ret  */ FN_RET(0x004d0860); r_esp += 4; return;
}

void f_004d08a8(void) /* sub_4D08A8 */
{
    FN_ENTER(0x004d08a8);
    /* 004d08a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d08a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d08aa: mov edi, ecx */ r_edi = r_ecx;
    /* 004d08ac: movsx eax, word ptr [edi + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x1cu));
    /* 004d08b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d08b2: je 0x4d09a9 */ if (fZ) goto L_004d09a9;
L_004d08b8:; BB(0x004d08b8);
    /* 004d08b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d08bb: je 0x4d0a42 */ if (fZ) goto L_004d0a42;
L_004d08c1:; BB(0x004d08c1);
    /* 004d08c1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d08c4: je 0x4d09ac */ if (fZ) goto L_004d09ac;
L_004d08ca:; BB(0x004d08ca);
    /* 004d08ca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d08cd: je 0x4d0900 */ if (fZ) goto L_004d0900;
L_004d08cf:; BB(0x004d08cf);
    /* 004d08cf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d08d2: jne 0x4d09a9 */ if (!fZ) goto L_004d09a9;
L_004d08d8:; BB(0x004d08d8);
    /* 004d08d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d08da: call 0x4cec1c */ r_esp -= 4; W32(r_esp, 0x4d08dfu); f_004cec1c();
    /* 004d08df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d08e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d08e2: je 0x4d09a9 */ if (fZ) goto L_004d09a9;
L_004d08e8:; BB(0x004d08e8);
    /* 004d08e8: mov ecx, eax */ r_ecx = r_eax;
    /* 004d08ea: call 0x4ccb80 */ r_esp -= 4; W32(r_esp, 0x4d08efu); f_004ccb80();
    /* 004d08ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d08f1: je 0x4d09a9 */ if (fZ) goto L_004d09a9;
L_004d08f7:; BB(0x004d08f7);
    /* 004d08f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d08f9: mov word ptr [edi + 0x1e], ax */ W16((u32)(r_edi+0x1eu), (u16)r_eax);
    /* 004d08fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d08fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d08ff: ret  */ FN_RET(0x004d08a8); r_esp += 4; return;
L_004d0900:; BB(0x004d0900);
    /* 004d0900: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 004d0904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0905: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4d090au); f_00786b3c();
    /* 004d090a: mov ebp, eax */ r_ebp = r_eax;
    /* 004d090c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d090f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0911: je 0x4d09a9 */ if (fZ) goto L_004d09a9;
L_004d0917:; BB(0x004d0917);
    /* 004d0917: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004d091a: fcomp dword ptr [0x908e10] */ fx_compare(ST(0), R_F32((u32)(0x908e10u))); FPOP();
    /* 004d0920: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d0922: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d0923: jb 0x4d09a9 */ if (fC) goto L_004d09a9;
L_004d0929:; BB(0x004d0929);
    /* 004d0929: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d092c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d0931u); f_0082dcbc();
    /* 004d0931: fld dword ptr [0x908dfc] */ FPUSH(R_F32((u32)(0x908dfcu)));
    /* 004d0937: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0939: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004d093c: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d093f: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 004d0942: fld dword ptr [0x908df8] */ FPUSH(R_F32((u32)(0x908df8u)));
    /* 004d0948: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004d094b: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 004d094e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d0953u); f_0082ddd8();
    /* 004d0953: fld dword ptr [0x908dfc] */ FPUSH(R_F32((u32)(0x908dfcu)));
    /* 004d0959: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d095b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004d095e: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d0961: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004d0964: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d0969u); f_0082dcbc();
    /* 004d0969: fld dword ptr [0x908df4] */ FPUSH(R_F32((u32)(0x908df4u)));
    /* 004d096f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0971: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004d0974: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d0977: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 004d097a: fld dword ptr [0x908df0] */ FPUSH(R_F32((u32)(0x908df0u)));
    /* 004d0980: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004d0983: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 004d0986: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d098bu); f_0082ddd8();
    /* 004d098b: fld dword ptr [0x908df4] */ FPUSH(R_F32((u32)(0x908df4u)));
    /* 004d0991: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0993: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004d0996: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 004d0999: mov ecx, edi */ r_ecx = r_edi;
    /* 004d099b: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004d099e: add eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d09a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d09a4: call 0x4d0aac */ r_esp -= 4; W32(r_esp, 0x4d09a9u); f_004d0aac();
L_004d09a9:; BB(0x004d09a9);
    /* 004d09a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d09aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d09ab: ret  */ FN_RET(0x004d08a8); r_esp += 4; return;
L_004d09ac:; BB(0x004d09ac);
    /* 004d09ac: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 004d09b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d09b1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d09b6u); f_0068d5a8();
    /* 004d09b6: mov ebp, eax */ r_ebp = r_eax;
    /* 004d09b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d09bb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d09bd: je 0x4d09a9 */ if (fZ) goto L_004d09a9;
L_004d09bf:; BB(0x004d09bf);
    /* 004d09bf: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d09c2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d09c7u); f_0082dcbc();
    /* 004d09c7: fld dword ptr [0x908e0c] */ FPUSH(R_F32((u32)(0x908e0cu)));
    /* 004d09cd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d09cf: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004d09d2: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d09d5: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 004d09d8: fld dword ptr [0x908e08] */ FPUSH(R_F32((u32)(0x908e08u)));
    /* 004d09de: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004d09e1: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 004d09e4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d09e9u); f_0082ddd8();
    /* 004d09e9: fld dword ptr [0x908e0c] */ FPUSH(R_F32((u32)(0x908e0cu)));
    /* 004d09ef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d09f1: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004d09f4: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d09f7: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004d09fa: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d09ffu); f_0082dcbc();
    /* 004d09ff: fld dword ptr [0x908e04] */ FPUSH(R_F32((u32)(0x908e04u)));
    /* 004d0a05: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0a07: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004d0a0a: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d0a0d: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 004d0a10: fld dword ptr [0x908e00] */ FPUSH(R_F32((u32)(0x908e00u)));
    /* 004d0a16: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004d0a19: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 004d0a1c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d0a21u); f_0082ddd8();
    /* 004d0a21: fld dword ptr [0x908e04] */ FPUSH(R_F32((u32)(0x908e04u)));
    /* 004d0a27: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0a29: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004d0a2c: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 004d0a2f: mov ecx, edi */ r_ecx = r_edi;
    /* 004d0a31: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004d0a34: add eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d0a39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0a3a: call 0x4d0aac */ r_esp -= 4; W32(r_esp, 0x4d0a3fu); f_004d0aac();
    /* 004d0a3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0a40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d0a41: ret  */ FN_RET(0x004d08a8); r_esp += 4; return;
L_004d0a42:; BB(0x004d0a42);
    /* 004d0a42: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 004d0a46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0a47: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d0a4cu); f_0068d5a8();
    /* 004d0a4c: mov ebp, eax */ r_ebp = r_eax;
    /* 004d0a4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d0a51: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0a53: je 0x4d09a9 */ if (fZ) goto L_004d09a9;
L_004d0a59:; BB(0x004d0a59);
    /* 004d0a59: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d0a5c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d0a61u); f_0082dcbc();
    /* 004d0a61: fld dword ptr [0x908dec] */ FPUSH(R_F32((u32)(0x908decu)));
    /* 004d0a67: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0a69: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004d0a6c: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 004d0a6f: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 004d0a72: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004d0a75: fadd dword ptr [edi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30u));
    /* 004d0a78: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 004d0a7b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d0a80u); f_0082ddd8();
    /* 004d0a80: fld dword ptr [0x908dec] */ FPUSH(R_F32((u32)(0x908decu)));
    /* 004d0a86: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0a88: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004d0a8b: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004d0a8e: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004d0a91: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 004d0a94: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004d0a97: fadd dword ptr [edi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30u));
    /* 004d0a9a: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 004d0a9d: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004d0aa0: mov ebp, dword ptr [edi + 0x2c] */ r_ebp = R32((u32)(r_edi+0x2cu));
    /* 004d0aa3: add dword ptr [edi + 0x28], ebp */ { u32 ad = (u32)(r_edi+0x28u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0aa6: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004d0aa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0aaa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d0aab: ret  */ FN_RET(0x004d08a8); r_esp += 4; return;
}

void f_004d0aac(void) /* sub_4D0AAC */
{
    FN_ENTER(0x004d0aac);
    /* 004d0aac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d0aad: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d0ab0: mov esi, ecx */ r_esi = r_ecx;
    /* 004d0ab2: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0ab6: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0ab9: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4d0abeu); f_007a900c();
    /* 004d0abe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0ac2: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0ac6: fmul dword ptr [0x908de8] */ ST(0) = ST(0) * R_F32((u32)(0x908de8u));
    /* 004d0acc: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0ad0: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0ad5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0ada: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0ade: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0ae2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0ae6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0aea: mov eax, 0x280 */ r_eax = 0x280u;
    /* 004d0aef: mov edx, 0xfffffd80 */ r_edx = 0xfffffd80u;
    /* 004d0af4: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004d0af8: cmp ecx, 0x280 */ {  u32 a = r_ecx; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d0afe: jl 0x4d0b02 */ if ((fS!=fO)) goto L_004d0b02;
L_004d0b00:; BB(0x004d0b00);
    /* 004d0b00: mov ecx, eax */ r_ecx = r_eax;
L_004d0b02:; BB(0x004d0b02);
    /* 004d0b02: cmp ecx, 0xfffffd80 */ {  u32 a = r_ecx; u32 b = 0xfffffd80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d0b08: jg 0x4d0b0c */ if ((!fZ&&fS==fO)) goto L_004d0b0c;
L_004d0b0a:; BB(0x004d0b0a);
    /* 004d0b0a: mov ecx, edx */ r_ecx = r_edx;
L_004d0b0c:; BB(0x004d0b0c);
    /* 004d0b0c: add dword ptr [esi + 0x28], ecx */ { u32 ad = (u32)(r_esi+0x28u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004d0b0f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0b12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d0b13: ret 4 */ FN_RET(0x004d0aac); r_esp += 8; return;
}

void f_004d0b18(void) /* sub_4D0B18 */
{
    FN_ENTER(0x004d0b18);
    /* 004d0b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0b19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0b1a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d0b1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d0b1f: movsx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 004d0b23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d0b25: jl 0x4d0dc7 */ if ((fS!=fO)) goto L_004d0dc7;
L_004d0b2b:; BB(0x004d0b2b);
    /* 004d0b2b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d0b2e: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 004d0b32: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004d0b35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d0b37: jle 0x4d0b3f */ if ((fZ||fS!=fO)) goto L_004d0b3f;
L_004d0b39:; BB(0x004d0b39);
    /* 004d0b39: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0b3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0b3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0b3e: ret  */ FN_RET(0x004d0b18); r_esp += 4; return;
L_004d0b3f:; BB(0x004d0b3f);
    /* 004d0b3f: lea ebx, [ebp + 0x54] */ r_ebx = (u32)(r_ebp+0x54u);
    /* 004d0b42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0b44: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0b49u); f_00763498();
    /* 004d0b49: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0b4c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d0b4f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d0b52: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0b55: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0b5c: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0b62: fcom dword ptr [0x908dc0] */ fx_compare(ST(0), R_F32((u32)(0x908dc0u))); 
    /* 004d0b68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d0b6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d0b6b: jae 0x4d0b7f */ if (!fC) goto L_004d0b7f;
L_004d0b6d:; BB(0x004d0b6d);
    /* 004d0b6d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d0b6f: mov eax, 1 */ r_eax = 0x1u;
    /* 004d0b74: mov edx, 1 */ r_edx = 0x1u;
    /* 004d0b79: mov word ptr [ebp + 0x1c], dx */ W16((u32)(r_ebp+0x1cu), (u16)r_edx);
    /* 004d0b7d: jmp 0x4d0bc5 */ goto L_004d0bc5;
L_004d0b7f:; BB(0x004d0b7f);
    /* 004d0b7f: fcom dword ptr [0xa48700] */ fx_compare(ST(0), R_F32((u32)(0xa48700u))); 
    /* 004d0b85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d0b87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d0b88: jae 0x4d0b9c */ if (!fC) goto L_004d0b9c;
L_004d0b8a:; BB(0x004d0b8a);
    /* 004d0b8a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d0b8c: mov eax, 2 */ r_eax = 0x2u;
    /* 004d0b91: mov edx, 2 */ r_edx = 0x2u;
    /* 004d0b96: mov word ptr [ebp + 0x1c], dx */ W16((u32)(r_ebp+0x1cu), (u16)r_edx);
    /* 004d0b9a: jmp 0x4d0bc5 */ goto L_004d0bc5;
L_004d0b9c:; BB(0x004d0b9c);
    /* 004d0b9c: fcomp dword ptr [0xa48704] */ fx_compare(ST(0), R_F32((u32)(0xa48704u))); FPOP();
    /* 004d0ba2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d0ba4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d0ba5: jae 0x4d0bb7 */ if (!fC) goto L_004d0bb7;
L_004d0ba7:; BB(0x004d0ba7);
    /* 004d0ba7: mov eax, 3 */ r_eax = 0x3u;
    /* 004d0bac: mov edx, 3 */ r_edx = 0x3u;
    /* 004d0bb1: mov word ptr [ebp + 0x1c], dx */ W16((u32)(r_ebp+0x1cu), (u16)r_edx);
    /* 004d0bb5: jmp 0x4d0bc5 */ goto L_004d0bc5;
L_004d0bb7:; BB(0x004d0bb7);
    /* 004d0bb7: mov eax, 4 */ r_eax = 0x4u;
    /* 004d0bbc: mov edx, 4 */ r_edx = 0x4u;
    /* 004d0bc1: mov word ptr [ebp + 0x1c], dx */ W16((u32)(r_ebp+0x1cu), (u16)r_edx);
L_004d0bc5:; BB(0x004d0bc5);
    /* 004d0bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0bc7: je 0x4d0dc7 */ if (fZ) goto L_004d0dc7;
L_004d0bcd:; BB(0x004d0bcd);
    /* 004d0bcd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0bd0: je 0x4d0dcd */ if (fZ) goto L_004d0dcd;
L_004d0bd6:; BB(0x004d0bd6);
    /* 004d0bd6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0bd9: je 0x4d0d54 */ if (fZ) goto L_004d0d54;
L_004d0bdf:; BB(0x004d0bdf);
    /* 004d0bdf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0be2: jne 0x4d0c67 */ if (!fZ) goto L_004d0c67;
L_004d0be8:; BB(0x004d0be8);
    /* 004d0be8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0bea: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0befu); f_00763498();
    /* 004d0bef: fld dword ptr [0x908dd4] */ FPUSH(R_F32((u32)(0x908dd4u)));
    /* 004d0bf5: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0bf8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0bfc: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0c00: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0c03: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0c0a: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0c10: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d0c12: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d0c14: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0c18: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0c1d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0c22: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0c26: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0c2a: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0c2e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0c32: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004d0c36: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 004d0c3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0c3c: call 0x4cec00 */ r_esp -= 4; W32(r_esp, 0x4d0c41u); f_004cec00();
    /* 004d0c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0c42: mov word ptr [ebp + 0x24], ax */ W16((u32)(r_ebp+0x24u), (u16)r_eax);
    /* 004d0c46: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4d0c4bu); f_00786b3c();
    /* 004d0c4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d0c4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0c50: je 0x4d0dc7 */ if (fZ) goto L_004d0dc7;
L_004d0c56:; BB(0x004d0c56);
    /* 004d0c56: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 004d0c59: add eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d0c5e: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 004d0c61: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0c64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0c65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0c66: ret  */ FN_RET(0x004d0b18); r_esp += 4; return;
L_004d0c67:; BB(0x004d0c67);
    /* 004d0c67: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0c6a: jne 0x4d0dc7 */ if (!fZ) goto L_004d0dc7;
L_004d0c70:; BB(0x004d0c70);
    /* 004d0c70: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0c72: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0c77u); f_00763498();
    /* 004d0c77: fld dword ptr [0x908de0] */ FPUSH(R_F32((u32)(0x908de0u)));
    /* 004d0c7d: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0c80: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0c84: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0c88: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0c8b: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0c92: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0c98: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d0c9a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0c9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d0c9e: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0ca2: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0ca7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0cac: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0cb0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0cb4: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0cb8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0cbc: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004d0cc0: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 004d0cc4: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0cc9u); f_00763498();
    /* 004d0cc9: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0ccc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0cd0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0cd4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0cd7: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0cde: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0ce4: fmul dword ptr [0x908ddc] */ ST(0) = ST(0) * R_F32((u32)(0x908ddcu));
    /* 004d0cea: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0cee: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0cf3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0cf8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0cfc: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0d00: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0d04: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0d08: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 004d0d0c: mov dword ptr [ebp + 0x28], ecx */ W32((u32)(r_ebp+0x28u), r_ecx);
    /* 004d0d0f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d0d14u); f_0082dcbc();
    /* 004d0d14: fld dword ptr [0x908dbc] */ FPUSH(R_F32((u32)(0x908dbcu)));
    /* 004d0d1a: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 004d0d1d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0d1f: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 004d0d22: mov dword ptr [ebp + 0x38], 0x437a0000 */ W32((u32)(r_ebp+0x38u), 0x437a0000u);
    /* 004d0d29: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d0d2eu); f_0082ddd8();
    /* 004d0d2e: fld dword ptr [0x908dbc] */ FPUSH(R_F32((u32)(0x908dbcu)));
    /* 004d0d34: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d0d36: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004d0d39: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 004d0d40: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 004d0d47: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
    /* 004d0d4e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0d51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0d52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0d53: ret  */ FN_RET(0x004d0b18); r_esp += 4; return;
L_004d0d54:; BB(0x004d0d54);
    /* 004d0d54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0d56: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0d5bu); f_00763498();
    /* 004d0d5b: fld dword ptr [0x908dd0] */ FPUSH(R_F32((u32)(0x908dd0u)));
    /* 004d0d61: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 004d0d68: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0d6b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0d6f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0d73: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0d76: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0d7d: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0d83: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d0d85: mov word ptr [ebp + 0x24], dx */ W16((u32)(r_ebp+0x24u), (u16)r_edx);
    /* 004d0d89: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d0d8b: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0d8f: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0d94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0d99: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0d9d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0da1: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0da5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0da9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004d0dad: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 004d0db1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0db2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d0db7u); f_0068d5a8();
    /* 004d0db7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d0db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0dba: je 0x4d0dc7 */ if (fZ) goto L_004d0dc7;
L_004d0dbc:; BB(0x004d0dbc);
    /* 004d0dbc: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 004d0dbf: add eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d0dc4: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
L_004d0dc7:; BB(0x004d0dc7);
    /* 004d0dc7: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0dca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0dcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0dcc: ret  */ FN_RET(0x004d0b18); r_esp += 4; return;
L_004d0dcd:; BB(0x004d0dcd);
    /* 004d0dcd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0dcf: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0dd4u); f_00763498();
    /* 004d0dd4: fld dword ptr [0x908dd0] */ FPUSH(R_F32((u32)(0x908dd0u)));
    /* 004d0dda: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004d0de0: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0de3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0de7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0deb: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0dee: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0df5: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0dfb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d0dfd: mov word ptr [ebp + 0x24], dx */ W16((u32)(r_ebp+0x24u), (u16)r_edx);
    /* 004d0e01: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d0e03: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0e07: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0e0c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0e11: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0e15: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0e19: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0e1d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0e21: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004d0e25: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 004d0e29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0e2b: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0e30u); f_00763498();
    /* 004d0e30: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0e33: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0e37: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0e3b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0e3e: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0e45: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0e4b: fmul dword ptr [0x908ddc] */ ST(0) = ST(0) * R_F32((u32)(0x908ddcu));
    /* 004d0e51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0e53: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0e57: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0e5c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0e61: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0e65: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0e69: fistp dword ptr [ebp + 0x28] */ W32((u32)(r_ebp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0e6c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0e70: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0e75u); f_00763498();
    /* 004d0e75: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0e78: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0e7c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0e80: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0e83: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0e8a: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0e90: fadd dword ptr [0x908dc8] */ ST(0) = ST(0) + R_F32((u32)(0x908dc8u));
    /* 004d0e96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d0e98: fmul dword ptr [0x908dcc] */ ST(0) = ST(0) * R_F32((u32)(0x908dccu));
    /* 004d0e9e: fmul dword ptr [0x908dc4] */ ST(0) = ST(0) * R_F32((u32)(0x908dc4u));
    /* 004d0ea4: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 004d0ea8: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 004d0ead: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d0eb2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004d0eb6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d0eba: fistp dword ptr [ebp + 0x2c] */ W32((u32)(r_ebp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004d0ebd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d0ec1: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x4d0ec6u); f_00763498();
    /* 004d0ec6: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0ec9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d0ecd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004d0ed1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d0ed4: fadd dword ptr [eax*4 + 0x908d80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x908d80u));
    /* 004d0edb: fdiv dword ptr [0x908de4] */ ST(0) = ST(0) / R_F32((u32)(0x908de4u));
    /* 004d0ee1: fmul dword ptr [0x908db0] */ ST(0) = ST(0) * R_F32((u32)(0x908db0u));
    /* 004d0ee7: fadd dword ptr [0x908db4] */ ST(0) = ST(0) + R_F32((u32)(0x908db4u));
    /* 004d0eed: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 004d0ef0: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0ef3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d0ef4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0ef5: ret  */ FN_RET(0x004d0b18); r_esp += 4; return;
}

void f_004d0ef8(void)
{
    FN_ENTER(0x004d0ef8);
    /* 004d0ef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0ef9: mov ebp, esp */ r_ebp = r_esp;
    /* 004d0efb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d0efd: push 0x8d1b68 */ { u32 v = 0x8d1b68u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0f02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d0f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0f09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d0f10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d0f13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d0f16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d0f19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d0f1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d0f1f: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0f24: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d0f2b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d0f30u); f_005caba4();
    /* 004d0f30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d0f31: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d0f34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d0f36: je 0x4d0f6f */ if (fZ) goto L_004d0f6f;
L_004d0f38:; BB(0x004d0f38);
    /* 004d0f38: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d0f3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d0f46: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0f49: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0f4f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0f52: call 0x4d0f74 */ r_esp -= 4; W32(r_esp, 0x4d0f57u); f_004d0f74();
    /* 004d0f57: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d0f5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d0f61:; BB(0x004d0f61);
    /* 004d0f61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d0f64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d0f6b: mov esp, ebp */ r_esp = r_ebp;
    /* 004d0f6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0f6e: ret  */ FN_RET(0x004d0ef8); r_esp += 4; return;
L_004d0f6f:; BB(0x004d0f6f);
    /* 004d0f6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0f71: jmp 0x4d0f61 */ goto L_004d0f61;
}

void f_004d0f74(void) /* sub_4D0F74 */
{
    FN_ENTER(0x004d0f74);
    /* 004d0f74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d0f75: mov ebp, esp */ r_ebp = r_esp;
    /* 004d0f77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d0f79: push 0x8d1b84 */ { u32 v = 0x8d1b84u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0f7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d0f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d0f85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d0f8c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d0f8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d0f92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d0f95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d0f98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d0f9b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004d0f9e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0fa1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004d0fa4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d0fa7: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x4d0facu); f_007ba278();
    /* 004d0fac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d0fb3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d0fb6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d0fb9: mov dword ptr [ecx], 0xafc2a8 */ W32((u32)(r_ecx), 0xafc2a8u);
    /* 004d0fbf: mov eax, dword ptr [0x9ac94c] */ r_eax = R32((u32)(0x9ac94cu));
    /* 004d0fc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d0fc5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004d0fc8: call dword ptr [0xafc2bc] */ { u32 t = R32((u32)(0xafc2bcu)); r_esp -= 4; W32(r_esp, 0x4d0fceu); call_ind(t); }
    /* 004d0fce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d0fd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d0fd4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d0fdb: mov esp, ebp */ r_esp = r_ebp;
    /* 004d0fdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0fde: ret 8 */ FN_RET(0x004d0f74); r_esp += 12; return;
}

void f_004d0fe4(void) /* sub_4D0FE4 */
{
    FN_ENTER(0x004d0fe4);
    /* 004d0fe4: mov ecx, dword ptr [0xa48708] */ r_ecx = R32((u32)(0xa48708u));
    /* 004d0fea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d0fec: je 0x4d1001 */ if (fZ) goto L_004d1001;
L_004d0fee:; BB(0x004d0fee);
    /* 004d0fee: je 0x4d0ff7 */ if (fZ) goto L_004d0ff7;
L_004d0ff0:; BB(0x004d0ff0);
    /* 004d0ff0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d0ff2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4d0ff7u); f_004066a8();
L_004d0ff7:; BB(0x004d0ff7);
    /* 004d0ff7: mov dword ptr [0xa48708], 0 */ W32((u32)(0xa48708u), 0x0u);
L_004d1001:; BB(0x004d1001);
    /* 004d1001: ret  */ FN_RET(0x004d0fe4); r_esp += 4; return;
}

