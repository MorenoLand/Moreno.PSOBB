#include "protos.h"

void f_00560000(void) /* sub_560000 */
{
    FN_ENTER(0x00560000);
    /* 00560000: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560001: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00560002: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560005: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00560007: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0056000b: mov edi, dword ptr [ebx + 0xbc] */ r_edi = R32((u32)(r_ebx+0xbcu));
    /* 00560011: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00560013: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00560017: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0056001c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00560023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560025: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560029: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056002b: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056002e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x560031u); call_ind(t); }
    /* 00560031: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00560033: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00560037: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056003c: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00560040: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560043: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00560044: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560045: ret 4 */ FN_RET(0x00560000); r_esp += 8; return;
}

void f_00560005(void)
{
    FN_ENTER(0x00560005);
    /* 00560005: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00560007: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0056000b: mov edi, dword ptr [ebx + 0xbc] */ r_edi = R32((u32)(r_ebx+0xbcu));
    /* 00560011: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00560013: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00560017: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0056001c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00560023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560025: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560029: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056002b: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056002e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x560031u); call_ind(t); }
    /* 00560031: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00560033: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00560037: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056003c: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00560040: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560043: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00560044: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560045: ret 4 */ FN_RET(0x00560005); r_esp += 8; return;
}

void f_00560048(void)
{
    FN_ENTER(0x00560048);
    /* 00560048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560049: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056004b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x560050u); f_00807ac0();
    /* 00560050: lea edx, [ebp + 0x6c] */ r_edx = (u32)(r_ebp+0x6cu);
    /* 00560053: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560056: je 0x560076 */ if (fZ) goto L_00560076;
L_00560058:; BB(0x00560058);
    /* 00560058: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056005a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056005b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056005c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056005d: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 00560062: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560067u); f_00814298();
    /* 00560067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0056006a:; BB(0x0056006a);
    /* 0056006a: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00560074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560075: ret  */ FN_RET(0x00560048); r_esp += 4; return;
L_00560076:; BB(0x00560076);
    /* 00560076: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056007a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056007b: push 0x2f4 */ { u32 v = 0x2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00560080: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560085u); f_00814298();
    /* 00560085: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560088: jmp 0x56006a */ goto L_0056006a;
}

void f_0056004c(void)
{
    FN_ENTER(0x0056004c);
    /* 0056004c: jo 0x5600c8 */ if (fO) goto L_005600c8;
L_0056004e:; BB(0x0056004e);
    /* 0056004e: sub al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00560050: lea edx, [ebp + 0x6c] */ r_edx = (u32)(r_ebp+0x6cu);
    /* 00560053: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560056: je 0x560076 */ if (fZ) goto L_00560076;
L_00560058:; BB(0x00560058);
    /* 00560058: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056005a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056005b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056005c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056005d: push 0x254 */ { u32 v = 0x254u; r_esp -= 4; W32(r_esp, v); }
    /* 00560062: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560067u); f_00814298();
    /* 00560067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0056006a:; BB(0x0056006a);
    /* 0056006a: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00560074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560075: ret  */ FN_RET(0x0056004c); r_esp += 4; return;
L_00560076:; BB(0x00560076);
    /* 00560076: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056007a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056007b: push 0x2f4 */ { u32 v = 0x2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00560080: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560085u); f_00814298();
    /* 00560085: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560088: jmp 0x56006a */ goto L_0056006a;
L_005600c8:; BB(0x005600c8);
    /* 005600c8: jmp dword ptr [esi - 0x77] */ { u32 t = R32((u32)(r_esi+0xffffff89u)); jmp_ind(t); return; }
}

void f_00560069(void)
{
    FN_ENTER(0x00560069);
    /* 00560069: adc bh, al */ { u32 c = fC; u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b + c) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_0056006a:; BB(0x0056006a);
    /* 0056006a: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 0056006b: test dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;   }
    /* 00560071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00560073: add byte ptr [ebp - 0x3d], bl */ { u32 ad = (u32)(r_ebp+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00560074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560075: ret  */ FN_RET(0x00560069); r_esp += 4; return;
    /* 00560076: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056007a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056007b: push 0x2f4 */ { u32 v = 0x2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00560080: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560085u); f_00814298();
    /* 00560085: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560088: jmp 0x56006a */ goto L_0056006a;
}

void f_00560083(void)
{
    FN_ENTER(0x00560083);
    goto L_00560083;
L_0056006a:; BB(0x0056006a);
    /* 0056006a: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00560074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560075: ret  */ FN_RET(0x00560083); r_esp += 4; return;
L_00560083:; BB(0x00560083);
    /* 00560083: sub eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00560085: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560088: jmp 0x56006a */ goto L_0056006a;
}

void f_0056008c(void) /* sub_56008C */
{
    FN_ENTER(0x0056008c);
    /* 0056008c: mov dword ptr [0xa73c9c], 0x3f800000 */ W32((u32)(0xa73c9cu), 0x3f800000u);
    /* 00560096: mov dword ptr [0xa73ca0], 0x41000000 */ W32((u32)(0xa73ca0u), 0x41000000u);
    /* 005600a0: mov dword ptr [0xa73ca4], 0x3fc00000 */ W32((u32)(0xa73ca4u), 0x3fc00000u);
    /* 005600aa: ret  */ FN_RET(0x0056008c); r_esp += 4; return;
}

void f_005600ac(void)
{
    FN_ENTER(0x005600ac);
    /* 005600ac: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 005600b2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005600b5: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 005600bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005600bd: jle 0x5600c0 */ if ((fZ||fS!=fO)) goto L_005600c0;
L_005600bf:; BB(0x005600bf);
    /* 005600bf: ret  */ FN_RET(0x005600ac); r_esp += 4; return;
L_005600c0:; BB(0x005600c0);
    /* 005600c0: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005600c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005600c9: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 005600cd: ret  */ FN_RET(0x005600ac); r_esp += 4; return;
}

void f_005600b1(void)
{
    FN_ENTER(0x005600b1);
    /* 005600b1: add byte ptr [ebx - 0x7e760040], al */ { u32 ad = (u32)(r_ebx+0x8189ffc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005600b7: rol byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 005600ba: add byte ptr [ebp - 0x3cfe8140], al */ { u32 ad = (u32)(r_ebp+0xc3017ec0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005600c0: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005600c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005600c9: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 005600cd: ret  */ FN_RET(0x005600b1); r_esp += 4; return;
}

void f_005600c4(void)
{
    FN_ENTER(0x005600c4);
    /* 005600c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005600c9: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 005600cd: ret  */ FN_RET(0x005600c4); r_esp += 4; return;
}

void f_005600d0(void) /* sub_5600D0 */
{
    FN_ENTER(0x005600d0);
    /* 005600d0: call 0x55cb5c */ r_esp -= 4; W32(r_esp, 0x5600d5u); f_0055cb5c();
    /* 005600d5: mov dword ptr [0xa73ca8], eax */ W32((u32)(0xa73ca8u), r_eax);
    /* 005600da: ret  */ FN_RET(0x005600d0); r_esp += 4; return;
}

void f_005600dc(void) /* sub_5600DC */
{
    FN_ENTER(0x005600dc);
    /* 005600dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005600dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005600df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005600e1: call 0x560100 */ r_esp -= 4; W32(r_esp, 0x5600e6u); f_00560100();
    /* 005600e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005600ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005600ec: jne 0x5600f2 */ if (!fZ) goto L_005600f2;
L_005600ee:; BB(0x005600ee);
    /* 005600ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005600ef: ret 4 */ FN_RET(0x005600dc); r_esp += 8; return;
L_005600f2:; BB(0x005600f2);
    /* 005600f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005600f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5600f8u); f_005c2f74();
    /* 005600f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005600f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005600fa: ret 4 */ FN_RET(0x005600dc); r_esp += 8; return;
}

void f_00560100(void) /* sub_560100 */
{
    FN_ENTER(0x00560100);
    /* 00560100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560101: mov ebp, esp */ r_ebp = r_esp;
    /* 00560103: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560105: push 0x8d6710 */ { u32 v = 0x8d6710u; r_esp -= 4; W32(r_esp, v); }
    /* 0056010a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00560110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560111: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00560118: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056011b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056011e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00560121: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00560124: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00560127: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056012a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00560131: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00560134: mov ecx, dword ptr [eax + 0x3bc] */ r_ecx = R32((u32)(r_eax+0x3bcu));
    /* 0056013a: mov dword ptr [eax], 0xb054e0 */ W32((u32)(r_eax), 0xb054e0u);
    /* 00560140: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560142: je 0x560169 */ if (fZ) goto L_00560169;
L_00560144:; BB(0x00560144);
    /* 00560144: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x560149u); f_007b9c8c();
    /* 00560149: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056014c: mov ecx, dword ptr [eax + 0x3bc] */ r_ecx = R32((u32)(r_eax+0x3bcu));
    /* 00560152: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560154: je 0x56015f */ if (fZ) goto L_0056015f;
L_00560156:; BB(0x00560156);
    /* 00560156: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00560158: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056015a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x56015cu); call_ind(t); }
    /* 0056015c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0056015f:; BB(0x0056015f);
    /* 0056015f: mov dword ptr [eax + 0x3bc], 0 */ W32((u32)(r_eax+0x3bcu), 0x0u);
L_00560169:; BB(0x00560169);
    /* 00560169: mov ecx, dword ptr [eax + 0x3c0] */ r_ecx = R32((u32)(r_eax+0x3c0u));
    /* 0056016f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560171: je 0x560198 */ if (fZ) goto L_00560198;
L_00560173:; BB(0x00560173);
    /* 00560173: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x560178u); f_007b9c8c();
    /* 00560178: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056017b: mov ecx, dword ptr [eax + 0x3c0] */ r_ecx = R32((u32)(r_eax+0x3c0u));
    /* 00560181: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560183: je 0x56018e */ if (fZ) goto L_0056018e;
L_00560185:; BB(0x00560185);
    /* 00560185: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00560187: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00560189: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x56018bu); call_ind(t); }
    /* 0056018b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0056018e:; BB(0x0056018e);
    /* 0056018e: mov dword ptr [eax + 0x3c0], 0 */ W32((u32)(r_eax+0x3c0u), 0x0u);
L_00560198:; BB(0x00560198);
    /* 00560198: mov ecx, eax */ r_ecx = r_eax;
    /* 0056019a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x56019fu); f_007b9c8c();
    /* 0056019f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005601a6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005601ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005601ae: add eax, 0x3e4 */ {  u32 a = r_eax; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005601b3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005601b5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005601b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005601b8: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5601bdu); f_008586d6();
    /* 005601bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005601c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005601c7: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005601cd: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5601d2u); f_005769f8();
    /* 005601d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005601d5: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5601dau); f_0078638c();
    /* 005601da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005601dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005601e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005601e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005601e7: ret  */ FN_RET(0x00560100); r_esp += 4; return;
}

void f_005601e8(void) /* sub_5601E8 */
{
    FN_ENTER(0x005601e8);
    /* 005601e8: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005601ee: mov eax, ecx */ r_eax = r_ecx;
    /* 005601f0: ret  */ FN_RET(0x005601e8); r_esp += 4; return;
}

void f_005601f4(void) /* sub_5601F4 */
{
    FN_ENTER(0x005601f4);
    /* 005601f4: mov eax, dword ptr [0xa73cf8] */ r_eax = R32((u32)(0xa73cf8u));
    /* 005601f9: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005601fc: je 0x560207 */ if (fZ) goto L_00560207;
L_005601fe:; BB(0x005601fe);
    /* 005601fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560201: mov dword ptr [0xa73cf8], eax */ W32((u32)(0xa73cf8u), r_eax);
    /* 00560206: ret  */ FN_RET(0x005601f4); r_esp += 4; return;
L_00560207:; BB(0x00560207);
    /* 00560207: mov edx, dword ptr [0xa73cf4] */ r_edx = R32((u32)(0xa73cf4u));
    /* 0056020d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056020f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x560214u); f_0082e9e4();
    /* 00560214: mov eax, dword ptr [0xa73cf8] */ r_eax = R32((u32)(0xa73cf8u));
    /* 00560219: jmp 0x5601fe */ goto L_005601fe;
}

void f_0056021c(void) /* sub_56021C */
{
    FN_ENTER(0x0056021c);
    /* 0056021c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056021d: mov edi, ecx */ r_edi = r_ecx;
    /* 0056021f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x560224u); f_004f7c84();
    /* 00560224: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00560227: je 0x560333 */ if (fZ) goto L_00560333;
L_0056022d:; BB(0x0056022d);
    /* 0056022d: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00560234: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00560237: ja 0x5602ac */ if ((!fC&&!fZ)) goto L_005602ac;
L_00560239:; BB(0x00560239);
    /* 00560239: mov eax, dword ptr [eax*4 + 0x9258ac] */ r_eax = R32((u32)(r_eax*4+0x9258acu));
    /* 00560240: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x0056021c); r_esp += 4; return;
L_00560333:; BB(0x00560333);
    /* 00560333: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560334: ret  */ FN_RET(0x0056021c); r_esp += 4; return;
}

void f_00560242(void)
{
    FN_ENTER(0x00560242);
    /* 00560242: mov ecx, edi */ r_ecx = r_edi;
    /* 00560244: call 0x560338 */ r_esp -= 4; W32(r_esp, 0x560249u); f_00560338();
    /* 00560249: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x00560242); r_esp += 4; return;
}

void f_0056024b(void)
{
    FN_ENTER(0x0056024b);
    /* 0056024b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056024d: call 0x560534 */ r_esp -= 4; W32(r_esp, 0x560252u); f_00560534();
    /* 00560252: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x0056024b); r_esp += 4; return;
}

void f_00560254(void)
{
    FN_ENTER(0x00560254);
    /* 00560254: mov ecx, edi */ r_ecx = r_edi;
    /* 00560256: call 0x5606d4 */ r_esp -= 4; W32(r_esp, 0x56025bu); f_005606d4();
    /* 0056025b: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x00560254); r_esp += 4; return;
}

void f_0056025d(void)
{
    FN_ENTER(0x0056025d);
    /* 0056025d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056025f: call 0x5607fc */ r_esp -= 4; W32(r_esp, 0x560264u); f_005607fc();
    /* 00560264: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x0056025d); r_esp += 4; return;
}

void f_00560266(void)
{
    FN_ENTER(0x00560266);
    /* 00560266: mov ecx, edi */ r_ecx = r_edi;
    /* 00560268: call 0x56097c */ r_esp -= 4; W32(r_esp, 0x56026du); f_0056097c();
    /* 0056026d: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x00560266); r_esp += 4; return;
}

void f_0056026f(void)
{
    FN_ENTER(0x0056026f);
    /* 0056026f: mov ecx, edi */ r_ecx = r_edi;
    /* 00560271: call 0x560be8 */ r_esp -= 4; W32(r_esp, 0x560276u); f_00560be8();
    /* 00560276: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x0056026f); r_esp += 4; return;
}

void f_00560278(void)
{
    FN_ENTER(0x00560278);
    /* 00560278: mov ecx, edi */ r_ecx = r_edi;
    /* 0056027a: call 0x56135c */ r_esp -= 4; W32(r_esp, 0x56027fu); f_0056135c();
    /* 0056027f: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x00560278); r_esp += 4; return;
}

void f_00560281(void)
{
    FN_ENTER(0x00560281);
    /* 00560281: mov ecx, edi */ r_ecx = r_edi;
    /* 00560283: call 0x561798 */ r_esp -= 4; W32(r_esp, 0x560288u); f_00561798();
    /* 00560288: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x00560281); r_esp += 4; return;
}

void f_0056028a(void)
{
    FN_ENTER(0x0056028a);
    /* 0056028a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056028c: call 0x562754 */ r_esp -= 4; W32(r_esp, 0x560291u); f_00562754();
    /* 00560291: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x0056028a); r_esp += 4; return;
}

void f_00560293(void)
{
    FN_ENTER(0x00560293);
    /* 00560293: mov ecx, edi */ r_ecx = r_edi;
    /* 00560295: call 0x562a98 */ r_esp -= 4; W32(r_esp, 0x56029au); f_00562a98();
    /* 0056029a: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x00560293); r_esp += 4; return;
}

void f_0056029c(void)
{
    FN_ENTER(0x0056029c);
    /* 0056029c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056029e: call 0x562d24 */ r_esp -= 4; W32(r_esp, 0x5602a3u); f_00562d24();
    /* 005602a3: jmp 0x5602ac */ goto L_005602ac;
L_005602ac:; BB(0x005602ac);
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x0056029c); r_esp += 4; return;
}

void f_005602a5(void)
{
    FN_ENTER(0x005602a5);
    /* 005602a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005602a7: call 0x54fcf0 */ r_esp -= 4; W32(r_esp, 0x5602acu); f_0054fcf0();
    /* 005602ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ae: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5602b3u); f_00770738();
    /* 005602b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602b5: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602b7:; BB(0x005602b7);
    /* 005602b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005602ba: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005602bf: je 0x5602ef */ if (fZ) goto L_005602ef;
L_005602c1:; BB(0x005602c1);
    /* 005602c1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005602c4: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 005602ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005602cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005602cd: mov word ptr [edi + 0x386], cx */ W16((u32)(r_edi+0x386u), (u16)r_ecx);
    /* 005602d4: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005602d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005602dc: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005602e2: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 005602e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005602ea: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5602efu); f_007706b0();
L_005602ef:; BB(0x005602ef);
    /* 005602ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f1: call 0x562dc4 */ r_esp -= 4; W32(r_esp, 0x5602f6u); f_00562dc4();
    /* 005602f6: mov ecx, edi */ r_ecx = r_edi;
    /* 005602f8: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x5602fdu); f_005369c4();
    /* 005602fd: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00560303: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00560309: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 0056030c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00560312: mov dword ptr [edi + 0x78], edx */ W32((u32)(r_edi+0x78u), r_edx);
    /* 00560315: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00560318: mov ecx, edi */ r_ecx = r_edi;
    /* 0056031a: call 0x562e0c */ r_esp -= 4; W32(r_esp, 0x56031fu); f_00562e0c();
    /* 0056031f: fld dword ptr [0x925b38] */ FPUSH(R_F32((u32)(0x925b38u)));
    /* 00560325: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0056032b: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 00560331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560332: ret  */ FN_RET(0x005602a5); r_esp += 4; return;
}

void f_00560338(void) /* sub_560338 */
{
    FN_ENTER(0x00560338);
    /* 00560338: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560339: mov edi, ecx */ r_edi = r_ecx;
    /* 0056033b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056033d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x560342u); f_007aa094();
    /* 00560342: mov ecx, edi */ r_ecx = r_edi;
    /* 00560344: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x560349u); f_00770738();
    /* 00560349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056034b: je 0x560392 */ if (fZ) goto L_00560392;
L_0056034d:; BB(0x0056034d);
    /* 0056034d: mov eax, 3 */ r_eax = 0x3u;
    /* 00560352: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00560359: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056035c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056035e: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 00560365: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0056036b: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560370: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00560373: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00560379: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056037e: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00560381: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00560387: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0056038a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056038d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00560390: jmp 0x5603a1 */ goto L_005603a1;
L_00560392:; BB(0x00560392);
    /* 00560392: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00560398: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056039b: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
L_005603a1:; BB(0x005603a1);
    /* 005603a1: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005603a7: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005603aa: mov ecx, edi */ r_ecx = r_edi;
    /* 005603ac: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005603b1: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005603b6: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005603b9: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x5603beu); f_00772054();
    /* 005603be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005603c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005603c1: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5603c6u); f_007b999c();
    /* 005603c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005603c7: mov ecx, edi */ r_ecx = r_edi;
    /* 005603c9: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5603ceu); f_007b6894();
    /* 005603ce: mov ecx, edi */ r_ecx = r_edi;
    /* 005603d0: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5603d5u); f_007b798c();
    /* 005603d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005603d7: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5603dcu); f_007b7e9c();
    /* 005603dc: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005603df: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005603e4: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005603e7: mov ecx, edi */ r_ecx = r_edi;
    /* 005603e9: call 0x560410 */ r_esp -= 4; W32(r_esp, 0x5603eeu); f_00560410();
    /* 005603ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005603f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005603f2: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005603f5: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005603fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005603fb: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x560400u); f_00805608();
    /* 00560400: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560402: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560403: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x560408u); f_006946a8();
    /* 00560408: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056040b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056040c: ret  */ FN_RET(0x00560338); r_esp += 4; return;
}

void f_00560410(void) /* sub_560410 */
{
    FN_ENTER(0x00560410);
    /* 00560410: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560411: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00560412: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560413: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00560414: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560417: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00560419: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056041b: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00560420: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x560425u); f_007aaa30();
    /* 00560425: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560427: jne 0x56043d */ if (!fZ) goto L_0056043d;
L_00560429:; BB(0x00560429);
    /* 00560429: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056042e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00560430: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x560435u); f_007aaa30();
    /* 00560435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560437: je 0x56052b */ if (fZ) goto L_0056052b;
L_0056043d:; BB(0x0056043d);
    /* 0056043d: fld dword ptr [0x925b28] */ FPUSH(R_F32((u32)(0x925b28u)));
    /* 00560443: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00560446: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00560449: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056044c: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0056044f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00560453: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00560457: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 0056045a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0056045e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00560462: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00560465: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00560467: add ebp, 0x128 */ {  u32 a = r_ebp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056046d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056046e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056046f: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x560474u); f_007806dc();
    /* 00560474: mov edi, eax */ r_edi = r_eax;
    /* 00560476: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560479: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056047b: je 0x560519 */ if (fZ) goto L_00560519;
L_00560481:; BB(0x00560481);
    /* 00560481: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00560483: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00560486: je 0x560519 */ if (fZ) goto L_00560519;
L_0056048c:; BB(0x0056048c);
    /* 0056048c: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0056048e: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00560491: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00560494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00560495: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56049au); f_0050b510();
    /* 0056049a: mov esi, eax */ r_esi = r_eax;
    /* 0056049c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056049f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005604a1: je 0x5604e4 */ if (fZ) goto L_005604e4;
L_005604a3:; BB(0x005604a3);
    /* 005604a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005604a5: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5604aau); f_0050c094();
    /* 005604aa: mov ebp, eax */ r_ebp = r_eax;
    /* 005604ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005604af: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5604b4u); f_0050c08c();
    /* 005604b4: movzx edx, word ptr [esi + 0x2c] */ r_edx = (u32)R16((u32)(r_esi+0x2cu));
    /* 005604b8: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 005604bf: mov dword ptr [esi + 0x50], ebp */ W32((u32)(r_esi+0x50u), r_ebp);
    /* 005604c2: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 005604c5: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 005604cc: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005604d2: mov word ptr [esi + 0x2c], dx */ W16((u32)(r_esi+0x2cu), (u16)r_edx);
    /* 005604d6: mov dword ptr [esi + 0x44], 0x40400000 */ W32((u32)(r_esi+0x44u), 0x40400000u);
    /* 005604dd: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
L_005604e4:; BB(0x005604e4);
    /* 005604e4: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005604e9: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005604ec: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005604ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005604f0: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5604f5u); f_0050b510();
    /* 005604f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005604f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005604fa: je 0x56050a */ if (fZ) goto L_0056050a;
L_005604fc:; BB(0x005604fc);
    /* 005604fc: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 00560503: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
L_0056050a:; BB(0x0056050a);
    /* 0056050a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056050b: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x560510u); f_00578bac();
    /* 00560510: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00560511: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560514: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00560515: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560516: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00560517: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560518: ret  */ FN_RET(0x00560410); r_esp += 4; return;
L_00560519:; BB(0x00560519);
    /* 00560519: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056051b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056051c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056051d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056051e: push 0x238 */ { u32 v = 0x238u; r_esp -= 4; W32(r_esp, v); }
    /* 00560523: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560528u); f_00814298();
    /* 00560528: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056052b:; BB(0x0056052b);
    /* 0056052b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056052e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056052f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560530: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00560531: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560532: ret  */ FN_RET(0x00560410); r_esp += 4; return;
}

void f_00560534(void) /* sub_560534 */
{
    FN_ENTER(0x00560534);
    /* 00560534: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560536: mov edi, ecx */ r_edi = r_ecx;
    /* 00560538: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056053b: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 00560541: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560546: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056054b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0056054e: and edx, 0xfffffef8 */ {  u32 a = r_edx; u32 b = 0xfffffef8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00560554: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 0056055a: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00560560: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00560563: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560566: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00560569: mov ecx, edi */ r_ecx = r_edi;
    /* 0056056b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x560570u); f_007aa094();
    /* 00560570: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 00560577: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056057a: je 0x560654 */ if (fZ) goto L_00560654;
L_00560580:; BB(0x00560580);
    /* 00560580: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560583: jne 0x5605c7 */ if (!fZ) goto L_005605c7;
L_00560585:; BB(0x00560585);
    /* 00560585: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0056058b: lea ecx, [edi + 0x3c8] */ r_ecx = (u32)(r_edi+0x3c8u);
    /* 00560591: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x560594u); call_ind(t); }
    /* 00560594: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560597: je 0x5606c0 */ if (fZ) goto L_005606c0;
L_0056059d:; BB(0x0056059d);
    /* 0056059d: fld dword ptr [0x925b0c] */ FPUSH(R_F32((u32)(0x925b0cu)));
    /* 005605a3: fld dword ptr [edi + 0x398] */ FPUSH(R_F32((u32)(r_edi+0x398u)));
    /* 005605a9: fld dword ptr [edi + 0x394] */ FPUSH(R_F32((u32)(r_edi+0x394u)));
    /* 005605af: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005605b1: fstp dword ptr [edi + 0x394] */ W_F32((u32)(r_edi+0x394u), ST(0)); FPOP();
    /* 005605b7: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005605b9: fstp dword ptr [edi + 0x398] */ W_F32((u32)(r_edi+0x398u), ST(0)); FPOP();
    /* 005605bf: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 005605c2: jmp 0x5606ab */ goto L_005606ab;
L_005605c7:; BB(0x005605c7);
    /* 005605c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005605ca: jne 0x560616 */ if (!fZ) goto L_00560616;
L_005605cc:; BB(0x005605cc);
    /* 005605cc: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 005605cf: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 005605d2: mov ebp, dword ptr [edi + 0x58] */ r_ebp = R32((u32)(r_edi+0x58u));
    /* 005605d5: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005605d8: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 005605db: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 005605de: mov ecx, edi */ r_ecx = r_edi;
    /* 005605e0: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5605e5u); f_0078730c();
    /* 005605e5: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 005605eb: mov dword ptr [edi + 0x70], 0x3f800000 */ W32((u32)(r_edi+0x70u), 0x3f800000u);
    /* 005605f2: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005605f7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005605fa: mov dword ptr [edi + 0x6c], 0x3f800000 */ W32((u32)(r_edi+0x6cu), 0x3f800000u);
    /* 00560601: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00560607: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0056060a: mov dword ptr [edi + 0x68], 0x3f800000 */ W32((u32)(r_edi+0x68u), 0x3f800000u);
    /* 00560611: jmp 0x5606ab */ goto L_005606ab;
L_00560616:; BB(0x00560616);
    /* 00560616: mov ebp, dword ptr [0xa73cb0] */ r_ebp = R32((u32)(0xa73cb0u));
    /* 0056061c: mov dword ptr [edi + 0x394], 0 */ W32((u32)(r_edi+0x394u), 0x0u);
    /* 00560626: mov eax, 1 */ r_eax = 0x1u;
    /* 0056062b: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00560632: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560634: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560636: mov edx, 5 */ r_edx = 0x5u;
    /* 0056063b: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00560642: mov dword ptr [edi + 0x398], ebp */ W32((u32)(r_edi+0x398u), r_ebp);
    /* 00560648: mov ecx, edi */ r_ecx = r_edi;
    /* 0056064a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56064fu); f_00772b44();
    /* 0056064f: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00560652: jmp 0x5606ab */ goto L_005606ab;
L_00560654:; BB(0x00560654);
    /* 00560654: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00560659: mov ecx, edi */ r_ecx = r_edi;
    /* 0056065b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x560660u); f_007aaa30();
    /* 00560660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560662: jne 0x560669 */ if (!fZ) goto L_00560669;
L_00560664:; BB(0x00560664);
    /* 00560664: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00560667: jmp 0x5606a0 */ goto L_005606a0;
L_00560669:; BB(0x00560669);
    /* 00560669: mov eax, 2 */ r_eax = 0x2u;
    /* 0056066e: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00560675: mov ecx, edi */ r_ecx = r_edi;
    /* 00560677: call 0x561214 */ r_esp -= 4; W32(r_esp, 0x56067cu); f_00561214();
    /* 0056067c: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0056067f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560682: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560683: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00560684: push 0x23c */ { u32 v = 0x23cu; r_esp -= 4; W32(r_esp, v); }
    /* 00560689: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56068eu); f_00814298();
    /* 0056068e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560691: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00560697: lea ecx, [edi + 0x3c8] */ r_ecx = (u32)(r_edi+0x3c8u);
    /* 0056069d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5606a0u); call_ind(t); }
L_005606a0:; BB(0x005606a0);
    /* 005606a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005606a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005606a4: mov ecx, edi */ r_ecx = r_edi;
    /* 005606a6: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5606abu); f_00772b44();
L_005606ab:; BB(0x005606ab);
    /* 005606ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005606ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005606af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005606b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005606b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5606bau); f_00805608();
    /* 005606ba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005606bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005606be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005606bf: ret  */ FN_RET(0x00560534); r_esp += 4; return;
L_005606c0:; BB(0x005606c0);
    /* 005606c0: mov eax, 3 */ r_eax = 0x3u;
    /* 005606c5: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005606cc: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 005606cf: jmp 0x5606ab */ goto L_005606ab;
}

void f_005606d4(void) /* sub_5606D4 */
{
    FN_ENTER(0x005606d4);
    /* 005606d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005606d5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005606d8: mov edi, ecx */ r_edi = r_ecx;
    /* 005606da: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 005606e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005606e3: je 0x5607c0 */ if (fZ) goto L_005607c0;
L_005606e9:; BB(0x005606e9);
    /* 005606e9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005606ec: je 0x56074c */ if (fZ) goto L_0056074c;
L_005606ee:; BB(0x005606ee);
    /* 005606ee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005606f1: jne 0x560731 */ if (!fZ) goto L_00560731;
L_005606f3:; BB(0x005606f3);
    /* 005606f3: fld dword ptr [0x925b04] */ FPUSH(R_F32((u32)(0x925b04u)));
    /* 005606f9: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005606fc: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005606fe: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 00560704: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00560706: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00560709: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0056070b: fcom dword ptr [0x925b00] */ fx_compare(ST(0), R_F32((u32)(0x925b00u))); 
    /* 00560711: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00560713: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
    /* 00560719: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056071a: jbe 0x5607bb */ if ((fC||fZ)) goto L_005607bb;
L_00560720:; BB(0x00560720);
    /* 00560720: mov eax, 3 */ r_eax = 0x3u;
    /* 00560725: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0056072c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056072f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560730: ret  */ FN_RET(0x005606d4); r_esp += 4; return;
L_00560731:; BB(0x00560731);
    /* 00560731: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560734: jne 0x5607bb */ if (!fZ) goto L_005607bb;
L_0056073a:; BB(0x0056073a);
    /* 0056073a: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056073e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00560743: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00560747: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056074a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056074b: ret  */ FN_RET(0x005606d4); r_esp += 4; return;
L_0056074c:; BB(0x0056074c);
    /* 0056074c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056074e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x560753u); f_007aa094();
    /* 00560753: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00560759: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056075b: je 0x5607bb */ if (fZ) goto L_005607bb;
L_0056075d:; BB(0x0056075d);
    /* 0056075d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00560764: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00560768: mov eax, 4 */ r_eax = 0x4u;
    /* 0056076d: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00560774: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0056077c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056077f: mov dword ptr [esp + 8], 0xc1200000 */ W32((u32)(r_esp+0x8u), 0xc1200000u);
    /* 00560787: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056078a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056078b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056078c: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x560791u); f_00782b64();
    /* 00560791: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560794: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00560797: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056079a: mov edx, edi */ r_edx = r_edi;
    /* 0056079c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5607a1u); f_0082ebac();
    /* 005607a1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005607a4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005607a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005607a7: call 0x578148 */ r_esp -= 4; W32(r_esp, 0x5607acu); f_00578148();
    /* 005607ac: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005607b0: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005607b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005607b3: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x5607b8u); f_00578778();
    /* 005607b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005607bb:; BB(0x005607bb);
    /* 005607bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005607be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005607bf: ret  */ FN_RET(0x005606d4); r_esp += 4; return;
L_005607c0:; BB(0x005607c0);
    /* 005607c0: mov dword ptr [edi + 0x3a8], 0 */ W32((u32)(r_edi+0x3a8u), 0x0u);
    /* 005607ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005607cc: mov eax, 1 */ r_eax = 0x1u;
    /* 005607d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005607d3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005607da: mov ecx, edi */ r_ecx = r_edi;
    /* 005607dc: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5607e1u); f_00772b44();
    /* 005607e1: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005607e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005607e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005607e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005607e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005607e9: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005607ee: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5607f3u); f_00814298();
    /* 005607f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005607f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005607f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005607fa: ret  */ FN_RET(0x005606d4); r_esp += 4; return;
}

void f_005607fc(void) /* sub_5607FC */
{
    FN_ENTER(0x005607fc);
    /* 005607fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005607fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005607fe: mov edi, ecx */ r_edi = r_ecx;
    /* 00560800: mov ecx, edi */ r_ecx = r_edi;
    /* 00560802: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x560807u); f_007aa094();
    /* 00560807: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560809: push dword ptr [edi + 0x3c4] */ { u32 v = R32((u32)(r_edi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056080f: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x560814u); f_007a8cb8();
    /* 00560814: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560817: mov dword ptr [edi + 0x3c4], eax */ W32((u32)(r_edi+0x3c4u), r_eax);
    /* 0056081d: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 00560824: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560826: je 0x560912 */ if (fZ) goto L_00560912;
L_0056082c:; BB(0x0056082c);
    /* 0056082c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056082f: jne 0x560877 */ if (!fZ) goto L_00560877;
L_00560831:; BB(0x00560831);
    /* 00560831: mov dword ptr [edi + 0x314], 0 */ W32((u32)(r_edi+0x314u), 0x0u);
    /* 0056083b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056083d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056083f: mov dword ptr [edi + 0x30c], 0 */ W32((u32)(r_edi+0x30cu), 0x0u);
    /* 00560849: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056084b: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x560850u); f_00772b44();
    /* 00560850: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00560856: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560859: je 0x56086f */ if (fZ) goto L_0056086f;
L_0056085b:; BB(0x0056085b);
    /* 0056085b: mov eax, 3 */ r_eax = 0x3u;
    /* 00560860: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00560867: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0056086a: jmp 0x56093e */ goto L_0056093e;
L_0056086f:; BB(0x0056086f);
    /* 0056086f: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00560872: jmp 0x56093e */ goto L_0056093e;
L_00560877:; BB(0x00560877);
    /* 00560877: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056087a: jne 0x56090d */ if (!fZ) goto L_0056090d;
L_00560880:; BB(0x00560880);
    /* 00560880: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00560883: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560888: jne 0x560898 */ if (!fZ) goto L_00560898;
L_0056088a:; BB(0x0056088a);
    /* 0056088a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056088c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056088e: mov ecx, edi */ r_ecx = r_edi;
    /* 00560890: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x560895u); f_00772b44();
    /* 00560895: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_00560898:; BB(0x00560898);
    /* 00560898: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0056089e: and eax, 0xfffff9ff */ {  u32 a = r_eax; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005608a3: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005608a6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005608a9: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005608ae: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005608b1: movzx esi, word ptr [edi + 0x334] */ r_esi = (u32)R16((u32)(r_edi+0x334u));
    /* 005608b8: mov word ptr [edi + 0x346], si */ W16((u32)(r_edi+0x346u), (u16)r_esi);
    /* 005608bf: mov ecx, edi */ r_ecx = r_edi;
    /* 005608c1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5608c6u); f_007751b0();
    /* 005608c6: fcomp dword ptr [edi + 0x3a0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3a0u))); FPOP();
    /* 005608cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005608ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005608cf: jae 0x560908 */ if (!fC) goto L_00560908;
L_005608d1:; BB(0x005608d1);
    /* 005608d1: mov eax, 6 */ r_eax = 0x6u;
    /* 005608d6: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005608dd: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 005608e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005608e5: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 005608ec: mov esi, 4 */ r_esi = 0x4u;
    /* 005608f1: mov word ptr [edi + 0xb8], si */ W16((u32)(r_edi+0xb8u), (u16)r_esi);
    /* 005608f8: or eax, 0x90 */ {  u32 a = r_eax; u32 b = 0x90u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005608fd: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00560903: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00560906: jmp 0x56093e */ goto L_0056093e;
L_00560908:; BB(0x00560908);
    /* 00560908: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0056090b: jmp 0x56093e */ goto L_0056093e;
L_0056090d:; BB(0x0056090d);
    /* 0056090d: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00560910: jmp 0x56093e */ goto L_0056093e;
L_00560912:; BB(0x00560912);
    /* 00560912: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560916: mov eax, 1 */ r_eax = 0x1u;
    /* 0056091b: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00560922: mov ecx, edi */ r_ecx = r_edi;
    /* 00560924: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x560929u); f_00772b44();
    /* 00560929: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0056092c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056092e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056092f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560930: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00560931: push 0x241 */ { u32 v = 0x241u; r_esp -= 4; W32(r_esp, v); }
    /* 00560936: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56093bu); f_00814298();
    /* 0056093b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056093e:; BB(0x0056093e);
    /* 0056093e: mov ecx, edi */ r_ecx = r_edi;
    /* 00560940: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x560945u); f_007b6894();
    /* 00560945: mov ecx, edi */ r_ecx = r_edi;
    /* 00560947: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x56094cu); f_007b798c();
    /* 0056094c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056094e: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x560953u); f_007b7e9c();
    /* 00560953: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560955: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00560957: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056095c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056095d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x560962u); f_00805608();
    /* 00560962: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560965: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x56096au); f_006946a8();
    /* 0056096a: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056096d: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560972: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00560975: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560978: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00560979: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056097a: ret  */ FN_RET(0x005607fc); r_esp += 4; return;
}

void f_0056097c(void) /* sub_56097C */
{
    FN_ENTER(0x0056097c);
    /* 0056097c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056097d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056097e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560981: mov esi, ecx */ r_esi = r_ecx;
    /* 00560983: mov ecx, esi */ r_ecx = r_esi;
    /* 00560985: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56098au); f_007aa094();
    /* 0056098a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056098c: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560992: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x560997u); f_007a8cb8();
    /* 00560997: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056099a: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 005609a0: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005609a3: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005609a8: jne 0x5609b5 */ if (!fZ) goto L_005609b5;
L_005609aa:; BB(0x005609aa);
    /* 005609aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005609ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005609ae: mov ecx, esi */ r_ecx = r_esi;
    /* 005609b0: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5609b5u); f_00772b44();
L_005609b5:; BB(0x005609b5);
    /* 005609b5: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005609bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005609be: jne 0x560a7e */ if (!fZ) goto L_00560a7e;
L_005609c4:; BB(0x005609c4);
    /* 005609c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005609c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005609c8: mov eax, 1 */ r_eax = 0x1u;
    /* 005609cd: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005609d4: mov ecx, esi */ r_ecx = r_esi;
    /* 005609d6: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5609dbu); f_00772b44();
    /* 005609db: mov ecx, dword ptr [esi + 0x3b8] */ r_ecx = R32((u32)(r_esi+0x3b8u));
    /* 005609e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005609e3: je 0x560a58 */ if (fZ) goto L_00560a58;
L_005609e5:; BB(0x005609e5);
    /* 005609e5: movsx edi, word ptr [ecx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x2ccu));
    /* 005609ec: mov eax, dword ptr [ecx + 0x31c] */ r_eax = R32((u32)(r_ecx+0x31cu));
    /* 005609f2: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 005609f5: movsx ecx, word ptr [ecx + 0x2ce] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2ceu));
    /* 005609fc: movsx eax, word ptr [esi + 0x390] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x390u));
    /* 00560a03: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00560a05: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00560a08: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00560a0b: movsx eax, word ptr [esi + 0x2d2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2d2u));
    /* 00560a12: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00560a14: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00560a16: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00560a1a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00560a1e: fmul dword ptr [0x925ae8] */ ST(0) = ST(0) * R_F32((u32)(0x925ae8u));
    /* 00560a24: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00560a26: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00560a2a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00560a2f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00560a34: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00560a38: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00560a3c: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00560a40: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00560a44: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 00560a49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00560a4b: jle 0x560b5d */ if ((fZ||fS!=fO)) goto L_00560b5d;
L_00560a51:; BB(0x00560a51);
    /* 00560a51: mov word ptr [esi + 0x390], ax */ W16((u32)(r_esi+0x390u), (u16)r_eax);
L_00560a58:; BB(0x00560a58);
    /* 00560a58: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 00560a5b: or edi, 0x4000000 */ {  u32 a = r_edi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00560a61: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 00560a64: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00560a67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560a6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560a6b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560a6c: push 0x23d */ { u32 v = 0x23du; r_esp -= 4; W32(r_esp, v); }
    /* 00560a71: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560a76u); f_00814298();
    /* 00560a76: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560a79: jmp 0x560b28 */ goto L_00560b28;
L_00560a7e:; BB(0x00560a7e);
    /* 00560a7e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560a81: jne 0x560b0b */ if (!fZ) goto L_00560b0b;
L_00560a87:; BB(0x00560a87);
    /* 00560a87: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00560a8c: mov ecx, esi */ r_ecx = r_esi;
    /* 00560a8e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x560a93u); f_007aaa30();
    /* 00560a93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560a95: je 0x560aa1 */ if (fZ) goto L_00560aa1;
L_00560a97:; BB(0x00560a97);
    /* 00560a97: mov dword ptr [esi + 0x388], 0x107 */ W32((u32)(r_esi+0x388u), 0x107u);
L_00560aa1:; BB(0x00560aa1);
    /* 00560aa1: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00560aa6: mov ecx, esi */ r_ecx = r_esi;
    /* 00560aa8: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x560aadu); f_007aaa30();
    /* 00560aad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560aaf: jne 0x560ab6 */ if (!fZ) goto L_00560ab6;
L_00560ab1:; BB(0x00560ab1);
    /* 00560ab1: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00560ab4: jmp 0x560b28 */ goto L_00560b28;
L_00560ab6:; BB(0x00560ab6);
    /* 00560ab6: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00560ab9: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00560abf: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00560ac1: and eax, 0xfbfffeff */ {  u32 a = r_eax; u32 b = 0xfbfffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560ac6: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00560ac9: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00560acc: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 00560ad2: mov ecx, esi */ r_ecx = r_esi;
    /* 00560ad4: call dword ptr [edi + 0x84] */ { u32 t = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, 0x560adau); call_ind(t); }
    /* 00560ada: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560adc: je 0x560af3 */ if (fZ) goto L_00560af3;
L_00560ade:; BB(0x00560ade);
    /* 00560ade: mov dword ptr [esi + 0xc0], 0 */ W32((u32)(r_esi+0xc0u), 0x0u);
    /* 00560ae8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560aea: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00560af1: jmp 0x560aff */ goto L_00560aff;
L_00560af3:; BB(0x00560af3);
    /* 00560af3: mov eax, 3 */ r_eax = 0x3u;
    /* 00560af8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_00560aff:; BB(0x00560aff);
    /* 00560aff: mov ecx, esi */ r_ecx = r_esi;
    /* 00560b01: call 0x560b7c */ r_esp -= 4; W32(r_esp, 0x560b06u); f_00560b7c();
    /* 00560b06: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00560b09: jmp 0x560b28 */ goto L_00560b28;
L_00560b0b:; BB(0x00560b0b);
    /* 00560b0b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00560b0e: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00560b14: and eax, 0xfbfffeff */ {  u32 a = r_eax; u32 b = 0xfbfffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560b19: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00560b1c: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00560b1f: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 00560b25: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
L_00560b28:; BB(0x00560b28);
    /* 00560b28: mov ecx, esi */ r_ecx = r_esi;
    /* 00560b2a: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x560b2fu); f_007b6894();
    /* 00560b2f: mov ecx, esi */ r_ecx = r_esi;
    /* 00560b31: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x560b36u); f_007b798c();
    /* 00560b36: mov ecx, esi */ r_ecx = r_esi;
    /* 00560b38: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x560b3du); f_007b7e9c();
    /* 00560b3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560b3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00560b41: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00560b46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560b47: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x560b4cu); f_00805608();
    /* 00560b4c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00560b4f: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560b54: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00560b57: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560b5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00560b5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00560b5c: ret  */ FN_RET(0x0056097c); r_esp += 4; return;
L_00560b5d:; BB(0x00560b5d);
    /* 00560b5d: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00560b63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560b65: mov word ptr [esi + 0x390], ax */ W16((u32)(r_esi+0x390u), (u16)r_eax);
    /* 00560b6c: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00560b6f: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 00560b75: jmp 0x560a58 */ goto L_00560a58;
}

void f_00560b7c(void) /* sub_560B7C */
{
    FN_ENTER(0x00560b7c);
    /* 00560b7c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560b7f: movsx eax, word ptr [ecx + 0x392] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x392u));
    /* 00560b86: movsx edx, word ptr [ecx + 0x390] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x390u));
    /* 00560b8d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560b8f: jne 0x560b9f */ if (!fZ) goto L_00560b9f;
L_00560b91:; BB(0x00560b91);
    /* 00560b91: mov dword ptr [ecx + 0x388], 0x101 */ W32((u32)(r_ecx+0x388u), 0x101u);
    /* 00560b9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560b9e: ret  */ FN_RET(0x00560b7c); r_esp += 4; return;
L_00560b9f:; BB(0x00560b9f);
    /* 00560b9f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00560ba2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00560ba5: fmul dword ptr [0x925ae4] */ ST(0) = ST(0) * R_F32((u32)(0x925ae4u));
    /* 00560bab: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00560baf: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00560bb3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00560bb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00560bb7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00560bb8: jbe 0x560bc8 */ if ((fC||fZ)) goto L_00560bc8;
L_00560bba:; BB(0x00560bba);
    /* 00560bba: mov dword ptr [ecx + 0x388], 0x102 */ W32((u32)(r_ecx+0x388u), 0x102u);
    /* 00560bc4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560bc7: ret  */ FN_RET(0x00560b7c); r_esp += 4; return;
L_00560bc8:; BB(0x00560bc8);
    /* 00560bc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00560bca: jle 0x560bda */ if ((fZ||fS!=fO)) goto L_00560bda;
L_00560bcc:; BB(0x00560bcc);
    /* 00560bcc: mov dword ptr [ecx + 0x388], 0x103 */ W32((u32)(r_ecx+0x388u), 0x103u);
    /* 00560bd6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560bd9: ret  */ FN_RET(0x00560b7c); r_esp += 4; return;
L_00560bda:; BB(0x00560bda);
    /* 00560bda: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 00560be4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00560be7: ret  */ FN_RET(0x00560b7c); r_esp += 4; return;
}

void f_00560be8(void) /* sub_560BE8 */
{
    FN_ENTER(0x00560be8);
    /* 00560be8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00560be9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00560bea: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00560bed: mov esi, ecx */ r_esi = r_ecx;
    /* 00560bef: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 00560bf6: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560bfb: jl 0x560c2c */ if ((fS!=fO)) goto L_00560c2c;
L_00560bfd:; BB(0x00560bfd);
    /* 00560bfd: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560c02: jge 0x560c15 */ if ((fS==fO)) goto L_00560c15;
L_00560c04:; BB(0x00560c04);
    /* 00560c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560c05: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x560c0au); f_00786b3c();
    /* 00560c0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00560c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560c0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00560c0e: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x560c13u); f_007706b0();
    /* 00560c13: jmp 0x560c58 */ goto L_00560c58;
L_00560c15:; BB(0x00560c15);
    /* 00560c15: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00560c1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560c1c: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 00560c23: mov ecx, esi */ r_ecx = r_esi;
    /* 00560c25: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x560c2au); f_007706b0();
    /* 00560c2a: jmp 0x560c58 */ goto L_00560c58;
L_00560c2c:; BB(0x00560c2c);
    /* 00560c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560c2d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x560c32u); f_0068d5a8();
    /* 00560c32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00560c33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560c35: je 0x560c4f */ if (fZ) goto L_00560c4f;
L_00560c37:; BB(0x00560c37);
    /* 00560c37: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00560c3d: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560c43: jne 0x560c4f */ if (!fZ) goto L_00560c4f;
L_00560c45:; BB(0x00560c45);
    /* 00560c45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560c46: mov ecx, esi */ r_ecx = r_esi;
    /* 00560c48: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x560c4du); f_007706b0();
    /* 00560c4d: jmp 0x560c58 */ goto L_00560c58;
L_00560c4f:; BB(0x00560c4f);
    /* 00560c4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560c51: mov ecx, esi */ r_ecx = r_esi;
    /* 00560c53: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x560c58u); f_007706b0();
L_00560c58:; BB(0x00560c58);
    /* 00560c58: mov ecx, esi */ r_ecx = r_esi;
    /* 00560c5a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x560c5fu); f_007aa094();
    /* 00560c5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560c61: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560c67: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x560c6cu); f_007a8cb8();
    /* 00560c6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560c6f: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00560c75: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00560c7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560c7e: je 0x5610f5 */ if (fZ) goto L_005610f5;
L_00560c84:; BB(0x00560c84);
    /* 00560c84: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560c87: je 0x560f21 */ if (fZ) goto L_00560f21;
L_00560c8d:; BB(0x00560c8d);
    /* 00560c8d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560c90: jne 0x560e73 */ if (!fZ) goto L_00560e73;
L_00560c96:; BB(0x00560c96);
    /* 00560c96: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00560c9c: fcomp dword ptr [0x925ad4] */ fx_compare(ST(0), R_F32((u32)(0x925ad4u))); FPOP();
    /* 00560ca2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00560ca4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00560ca5: jb 0x560cf1 */ if (fC) goto L_00560cf1;
L_00560ca7:; BB(0x00560ca7);
    /* 00560ca7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00560ca9: mov ecx, esi */ r_ecx = r_esi;
    /* 00560cab: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x560caeu); call_ind(t); }
    /* 00560cae: fld dword ptr [esi + 0x398] */ FPUSH(R_F32((u32)(r_esi+0x398u)));
    /* 00560cb4: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 00560cba: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00560cbc: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00560cc2: fcomp dword ptr [0x925ad0] */ fx_compare(ST(0), R_F32((u32)(0x925ad0u))); FPOP();
    /* 00560cc8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00560cca: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 00560cd0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00560cd1: jb 0x560ce3 */ if (fC) goto L_00560ce3;
L_00560cd3:; BB(0x00560cd3);
    /* 00560cd3: fld dword ptr [0x925b0c] */ FPUSH(R_F32((u32)(0x925b0cu)));
    /* 00560cd9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00560cdb: fstp dword ptr [esi + 0x398] */ W_F32((u32)(r_esi+0x398u), ST(0)); FPOP();
    /* 00560ce1: jmp 0x560cf1 */ goto L_00560cf1;
L_00560ce3:; BB(0x00560ce3);
    /* 00560ce3: fld dword ptr [0x925acc] */ FPUSH(R_F32((u32)(0x925accu)));
    /* 00560ce9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00560ceb: fstp dword ptr [esi + 0x398] */ W_F32((u32)(r_esi+0x398u), ST(0)); FPOP();
L_00560cf1:; BB(0x00560cf1);
    /* 00560cf1: fld dword ptr [0x925adc] */ FPUSH(R_F32((u32)(0x925adcu)));
    /* 00560cf7: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 00560cfd: fsub dword ptr [esi + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xc8u));
    /* 00560d03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560d04: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00560d07: mov ecx, esi */ r_ecx = r_esi;
    /* 00560d09: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x560d0eu); f_007aaa30();
    /* 00560d0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560d10: jne 0x560d1a */ if (!fZ) goto L_00560d1a;
L_00560d12:; BB(0x00560d12);
    /* 00560d12: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00560d15: jmp 0x5610d8 */ goto L_005610d8;
L_00560d1a:; BB(0x00560d1a);
    /* 00560d1a: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 00560d20: mov dword ptr [esi + 0x394], 0 */ W32((u32)(r_esi+0x394u), 0x0u);
    /* 00560d2a: mov eax, 3 */ r_eax = 0x3u;
    /* 00560d2f: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00560d36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560d38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00560d3a: jle 0x5610ed */ if ((fZ||fS!=fO)) goto L_005610ed;
L_00560d40:; BB(0x00560d40);
    /* 00560d40: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00560d44: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00560d48: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00560d4b: mov ebp, eax */ r_ebp = r_eax;
L_00560d4d:; BB(0x00560d4d);
    /* 00560d4d: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00560d54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560d55: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x560d5au); f_006ea71c();
    /* 00560d5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00560d5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560d5d: je 0x560df5 */ if (fZ) goto L_00560df5;
L_00560d63:; BB(0x00560d63);
    /* 00560d63: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00560d67: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560d6d: jge 0x560df5 */ if ((fS==fO)) goto L_00560df5;
L_00560d73:; BB(0x00560d73);
    /* 00560d73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00560d74: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00560d7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00560d7b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x560d80u); f_007a9180();
    /* 00560d80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560d83: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 00560d89: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00560d8c: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00560d8f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00560d91: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00560d93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00560d95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00560d96: jb 0x560df5 */ if (fC) goto L_00560df5;
L_00560d98:; BB(0x00560d98);
    /* 00560d98: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00560d9b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00560d9e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00560da1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00560da3: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00560da7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00560da9: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00560dae: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00560db2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00560db4: mov ecx, edi */ r_ecx = r_edi;
    /* 00560db6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00560db7: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560dbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560dbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00560dbe: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x560dc1u); call_ind(t); }
    /* 00560dc1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00560dc5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00560dc7: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560dca: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00560dce: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00560dd2: mov ecx, edi */ r_ecx = r_edi;
    /* 00560dd4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00560dd7: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x560ddau); call_ind(t); }
    /* 00560dda: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00560dde: fcomp dword ptr [0x925ae0] */ fx_compare(ST(0), R_F32((u32)(0x925ae0u))); FPOP();
    /* 00560de4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00560de6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00560de7: jbe 0x560df5 */ if ((fC||fZ)) goto L_00560df5;
L_00560de9:; BB(0x00560de9);
    /* 00560de9: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00560dec: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00560df2: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_00560df5:; BB(0x00560df5);
    /* 00560df5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00560df8: cmp ebp, dword ptr [0xaae16c] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaae16cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560dfe: jl 0x560d4d */ if ((fS!=fO)) goto L_00560d4d;
L_00560e04:; BB(0x00560e04);
    /* 00560e04: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00560e08: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00560e0c:; BB(0x00560e0c);
    /* 00560e0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00560e0e: call 0x561214 */ r_esp -= 4; W32(r_esp, 0x560e13u); f_00561214();
    /* 00560e13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560e15: jne 0x560e20 */ if (!fZ) goto L_00560e20;
L_00560e17:; BB(0x00560e17);
    /* 00560e17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00560e18: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x560e1du); f_00578bac();
    /* 00560e1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00560e1e: jmp 0x560e32 */ goto L_00560e32;
L_00560e20:; BB(0x00560e20);
    /* 00560e20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00560e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560e23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00560e24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00560e25: push 0x23f */ { u32 v = 0x23fu; r_esp -= 4; W32(r_esp, v); }
    /* 00560e2a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x560e2fu); f_00814298();
    /* 00560e2f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00560e32:; BB(0x00560e32);
    /* 00560e32: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00560e35: and eax, 0xf9ffffff */ {  u32 a = r_eax; u32 b = 0xf9ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560e3a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00560e3d: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00560e43: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00560e46: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00560e49: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00560e4c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00560e52: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560e55: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00560e5b: mov eax, 6 */ r_eax = 0x6u;
    /* 00560e60: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00560e67: mov ecx, esi */ r_ecx = r_esi;
    /* 00560e69: call 0x5611c8 */ r_esp -= 4; W32(r_esp, 0x560e6eu); f_005611c8();
    /* 00560e6e: jmp 0x5610d8 */ goto L_005610d8;
L_00560e73:; BB(0x00560e73);
    /* 00560e73: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560e76: jne 0x560f19 */ if (!fZ) goto L_00560f19;
L_00560e7c:; BB(0x00560e7c);
    /* 00560e7c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00560e7f: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560e84: jne 0x560e91 */ if (!fZ) goto L_00560e91;
L_00560e86:; BB(0x00560e86);
    /* 00560e86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560e8a: mov ecx, esi */ r_ecx = r_esi;
    /* 00560e8c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x560e91u); f_00772b44();
L_00560e91:; BB(0x00560e91);
    /* 00560e91: fld dword ptr [0x925adc] */ FPUSH(R_F32((u32)(0x925adcu)));
    /* 00560e97: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 00560e9d: fsub dword ptr [esi + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xc8u));
    /* 00560ea3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560ea4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00560ea7: mov ecx, esi */ r_ecx = r_esi;
    /* 00560ea9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x560eaeu); f_007aaa30();
    /* 00560eae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560eb0: je 0x560f06 */ if (fZ) goto L_00560f06;
L_00560eb2:; BB(0x00560eb2);
    /* 00560eb2: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560eb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00560eb7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00560eba: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00560ebc: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560ec1: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00560ec4: mov ecx, esi */ r_ecx = r_esi;
    /* 00560ec6: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x560ec9u); call_ind(t); }
    /* 00560ec9: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00560ecf: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560ed4: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00560eda: mov edx, 3 */ r_edx = 0x3u;
    /* 00560edf: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
    /* 00560ee6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00560ee8: mov word ptr [esi + 0x330], bx */ W16((u32)(r_esi+0x330u), (u16)r_ebx);
    /* 00560eef: mov eax, 1 */ r_eax = 0x1u;
    /* 00560ef4: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00560efb: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00560efe: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00560f03: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00560f06:; BB(0x00560f06);
    /* 00560f06: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00560f08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00560f09: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x560f0eu); f_006946a8();
    /* 00560f0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560f11: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00560f14: jmp 0x5610d8 */ goto L_005610d8;
L_00560f19:; BB(0x00560f19);
    /* 00560f19: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00560f1c: jmp 0x5610d8 */ goto L_005610d8;
L_00560f21:; BB(0x00560f21);
    /* 00560f21: mov eax, dword ptr [esi + 0x3ac] */ r_eax = R32((u32)(r_esi+0x3acu));
    /* 00560f27: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00560f2a: cmp eax, dword ptr [esi + 0x3b0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x3b0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00560f30: mov dword ptr [esi + 0x3ac], eax */ W32((u32)(r_esi+0x3acu), r_eax);
    /* 00560f36: jge 0x560f40 */ if ((fS==fO)) goto L_00560f40;
L_00560f38:; BB(0x00560f38);
    /* 00560f38: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00560f3b: jmp 0x5610cd */ goto L_005610cd;
L_00560f40:; BB(0x00560f40);
    /* 00560f40: mov ecx, esi */ r_ecx = r_esi;
    /* 00560f42: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x560f47u); f_00770738();
    /* 00560f47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560f49: je 0x56107a */ if (fZ) goto L_0056107a;
L_00560f4f:; BB(0x00560f4f);
    /* 00560f4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00560f51: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560f57: mov ecx, esi */ r_ecx = r_esi;
    /* 00560f59: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560f5f: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560f65: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x560f6au); f_00771c8c();
    /* 00560f6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560f6c: je 0x56107a */ if (fZ) goto L_0056107a;
L_00560f72:; BB(0x00560f72);
    /* 00560f72: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560f78: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560f7e: mov eax, 1 */ r_eax = 0x1u;
    /* 00560f83: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00560f89: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00560f90: mov ecx, esi */ r_ecx = r_esi;
    /* 00560f92: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x560f97u); f_00771f1c();
    /* 00560f97: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00560f9b: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 00560fa1: mov ebx, dword ptr [esi + 0x2a8] */ r_ebx = R32((u32)(r_esi+0x2a8u));
    /* 00560fa7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00560fab: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 00560fb1: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00560fb5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00560fb9: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00560fbf: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x560fc4u); f_0082f9c4();
    /* 00560fc4: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00560fc8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00560fca: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00560fce: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00560fd0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00560fd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00560fd3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00560fd6: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x560fdbu); f_0082dc9c();
    /* 00560fdb: fld dword ptr [0x925ac8] */ FPUSH(R_F32((u32)(0x925ac8u)));
    /* 00560fe1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00560fe3: fmul dword ptr [0xa73cb4] */ ST(0) = ST(0) * R_F32((u32)(0xa73cb4u));
    /* 00560fe9: mov eax, dword ptr [esi + 0x298] */ r_eax = R32((u32)(r_esi+0x298u));
    /* 00560fef: mov edx, dword ptr [esi + 0x29c] */ r_edx = R32((u32)(r_esi+0x29cu));
    /* 00560ff5: mov ebx, dword ptr [esi + 0x2a0] */ r_ebx = R32((u32)(r_esi+0x2a0u));
    /* 00560ffb: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00560ffe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00561001: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00561005: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 0056100b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0056100f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00561013: mov ecx, esi */ r_ecx = r_esi;
    /* 00561015: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00561019: mov eax, dword ptr [esi + 0x2a8] */ r_eax = R32((u32)(r_esi+0x2a8u));
    /* 0056101f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00561023: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 00561029: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0056102d: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x561032u); f_00771f5c();
    /* 00561032: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00561035: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00561037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561039: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056103a: push 0x23c */ { u32 v = 0x23cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056103f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x561044u); f_00814298();
    /* 00561044: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561047: mov eax, dword ptr [0xa73cb8] */ r_eax = R32((u32)(0xa73cb8u));
    /* 0056104c: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00561052: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00561055: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056105a: mov edx, 5 */ r_edx = 0x5u;
    /* 0056105f: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00561066: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0056106c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056106f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00561072: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00561075: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00561078: jmp 0x5610c6 */ goto L_005610c6;
L_0056107a:; BB(0x0056107a);
    /* 0056107a: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056107d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056107f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00561081: mov ecx, esi */ r_ecx = r_esi;
    /* 00561083: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x561086u); call_ind(t); }
    /* 00561086: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0056108c: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00561091: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00561097: mov edx, 3 */ r_edx = 0x3u;
    /* 0056109c: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
    /* 005610a3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005610a5: mov word ptr [esi + 0x330], bx */ W16((u32)(r_esi+0x330u), (u16)r_ebx);
    /* 005610ac: mov eax, 1 */ r_eax = 0x1u;
    /* 005610b1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005610b8: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005610bb: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005610c0: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005610c3: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
L_005610c6:; BB(0x005610c6);
    /* 005610c6: mov ecx, esi */ r_ecx = r_esi;
    /* 005610c8: call 0x561214 */ r_esp -= 4; W32(r_esp, 0x5610cdu); f_00561214();
L_005610cd:; BB(0x005610cd);
    /* 005610cd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005610cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005610d0: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5610d5u); f_006946a8();
    /* 005610d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005610d8:; BB(0x005610d8);
    /* 005610d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005610da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005610dc: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005610e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005610e2: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5610e7u); f_00805608();
    /* 005610e7: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005610ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005610eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005610ec: ret  */ FN_RET(0x00560be8); r_esp += 4; return;
L_005610ed:; BB(0x005610ed);
    /* 005610ed: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005610f0: jmp 0x560e0c */ goto L_00560e0c;
L_005610f5:; BB(0x005610f5);
    /* 005610f5: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005610f8: mov dword ptr [esi + 0x394], 0 */ W32((u32)(r_esi+0x394u), 0x0u);
    /* 00561102: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561107: jne 0x561115 */ if (!fZ) goto L_00561115;
L_00561109:; BB(0x00561109);
    /* 00561109: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056110b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056110d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056110e: mov ecx, esi */ r_ecx = r_esi;
    /* 00561110: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x561115u); f_00772b44();
L_00561115:; BB(0x00561115);
    /* 00561115: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0056111b: mov dword ptr [esi + 0x3ac], 0 */ W32((u32)(r_esi+0x3acu), 0x0u);
    /* 00561125: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056112a: je 0x56115e */ if (fZ) goto L_0056115e;
L_0056112c:; BB(0x0056112c);
    /* 0056112c: mov edx, dword ptr [0xa73ce4] */ r_edx = R32((u32)(0xa73ce4u));
    /* 00561132: fld dword ptr [0x925ad8] */ FPUSH(R_F32((u32)(0x925ad8u)));
    /* 00561138: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 0056113b: mov dword ptr [esi + 0x3b0], ebx */ W32((u32)(r_esi+0x3b0u), r_ebx);
    /* 00561141: mov eax, dword ptr [0xa73ce4] */ r_eax = R32((u32)(0xa73ce4u));
    /* 00561146: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00561149: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0056114b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056114d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056114e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00561150: jae 0x561154 */ if (!fC) goto L_00561154;
L_00561152:; BB(0x00561152);
    /* 00561152: fst st(1) */ ST(1) = ST(0);
L_00561154:; BB(0x00561154);
    /* 00561154: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00561156: fstp dword ptr [0x9be1e8] */ W_F32((u32)(0x9be1e8u), ST(0)); FPOP();
    /* 0056115c: jmp 0x56118e */ goto L_0056118e;
L_0056115e:; BB(0x0056115e);
    /* 0056115e: mov edx, dword ptr [0xa73ce4] */ r_edx = R32((u32)(0xa73ce4u));
    /* 00561164: fld dword ptr [0x925ad8] */ FPUSH(R_F32((u32)(0x925ad8u)));
    /* 0056116a: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 0056116d: mov dword ptr [esi + 0x3b0], ebx */ W32((u32)(r_esi+0x3b0u), r_ebx);
    /* 00561173: mov eax, dword ptr [0xa73ce4] */ r_eax = R32((u32)(0xa73ce4u));
    /* 00561178: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0056117b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0056117d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056117f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00561180: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00561182: jae 0x561186 */ if (!fC) goto L_00561186;
L_00561184:; BB(0x00561184);
    /* 00561184: fst st(1) */ ST(1) = ST(0);
L_00561186:; BB(0x00561186);
    /* 00561186: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00561188: fstp dword ptr [0x9be1e8] */ W_F32((u32)(0x9be1e8u), ST(0)); FPOP();
L_0056118e:; BB(0x0056118e);
    /* 0056118e: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00561191: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
    /* 00561197: mov eax, 4 */ r_eax = 0x4u;
    /* 0056119c: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005611a3: and edx, 0xf9ffffff */ {  u32 a = r_edx; u32 b = 0xf9ffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005611a9: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005611ac: and ebx, 0xffffff7f */ {  u32 a = r_ebx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005611b2: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005611b8: mov dword ptr [esi + 0x37c], ebx */ W32((u32)(r_esi+0x37cu), r_ebx);
    /* 005611be: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005611c1: jmp 0x5610d8 */ goto L_005610d8;
}

