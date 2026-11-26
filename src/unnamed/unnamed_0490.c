#include "protos.h"

void f_00490000(void)
{
    FN_ENTER(0x00490000);
    /* 00490000: mov dword ptr [0xb8e800ac], eax */ W32((u32)(0xb8e800acu), r_eax);
    /* 00490005: std  */ rt_df = 1;
    UNSUP(0x00490006, "falls out of decoded code");
}

void f_00490001(void)
{
    FN_ENTER(0x00490001);
    /* 00490001: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 00490002: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00490004: mov eax, 0xc7fffffd */ r_eax = 0xc7fffffdu;
    /* 00490009: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049000a: aam 0 */ UNSUP(0x0049000a, "aam 0");
    /* 0049000c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0049000e: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00490010: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00490011: cld  */ rt_df = 0;
    UNSUP(0x00490012, "falls out of decoded code");
}

void f_00490002(void)
{
    FN_ENTER(0x00490002);
    /* 00490002: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00490004: mov eax, 0xc7fffffd */ r_eax = 0xc7fffffdu;
    /* 00490009: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049000a: aam 0 */ UNSUP(0x0049000a, "aam 0");
    /* 0049000c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0049000e: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00490010: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00490011: cld  */ rt_df = 0;
    UNSUP(0x00490012, "falls out of decoded code");
}

void f_00490022(void)
{
    FN_ENTER(0x00490022);
    /* 00490022: add byte ptr [ebx + 0x558901c2], al */ { u32 ad = (u32)(r_ebx+0x558901c2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490028: call 0x7c69fab0 */ r_esp -= 4; W32(r_esp, 0x49002du); f_7c69fab0();
    /* 0049002d: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0049002e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00490031: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490034: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00490037: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049003a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490041: mov esp, ebp */ r_esp = r_ebp;
    /* 00490043: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490044: ret  */ FN_RET(0x00490022); r_esp += 4; return;
}

void f_00490040(void)
{
    FN_ENTER(0x00490040);
    /* 00490040: add byte ptr [ebx + 0x33c35de5], cl */ { u32 ad = (u32)(r_ebx+0x33c35de5u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490046: ror byte ptr [ecx - 0x3c1413bb], 0xc7 */ { u32 ad = (u32)(r_ecx+0xc3ebec45u); u32 c = (7u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0049004d: add eax, 0xa471dc */ {  u32 a = r_eax; u32 b = 0xa471dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490052: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00490056: ret  */ FN_RET(0x00490040); r_esp += 4; return;
}

void f_00490044(void)
{
    FN_ENTER(0x00490044);
    /* 00490044: ret  */ FN_RET(0x00490044); r_esp += 4; return;
}

void f_00490046(void)
{
    FN_ENTER(0x00490046);
    /* 00490046: ror byte ptr [ecx - 0x3c1413bb], 0xc7 */ { u32 ad = (u32)(r_ecx+0xc3ebec45u); u32 c = (7u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0049004d: add eax, 0xa471dc */ {  u32 a = r_eax; u32 b = 0xa471dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490052: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00490056: ret  */ FN_RET(0x00490046); r_esp += 4; return;
}

void f_00490048(void)
{
    FN_ENTER(0x00490048);
    goto L_00490048;
L_0048ffca:; BB(0x0048ffca);
    /* 0048ffca: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0048ffd1: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ffd6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48ffdbu); f_005caba4();
    /* 0048ffdb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048ffde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ffe1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048ffe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ffe6: je 0x490045 */ if (fZ) goto L_00490045;
L_0048ffe8:; BB(0x0048ffe8);
    /* 0048ffe8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0048ffef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048fff6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048fff9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048fffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fffd: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00490003: call 0x48fdc0 */ r_esp -= 4; W32(r_esp, 0x490008u); f_0048fdc0();
    /* 00490008: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0049000f:; BB(0x0049000f);
    /* 0049000f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00490016: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00490019: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049001c: mov dword ptr [edx*4 + 0xa47140], eax */ W32((u32)(r_edx*4+0xa47140u), r_eax);
    /* 00490023: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00490026: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00490029: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049002c: jl 0x48ffca */ if ((fS!=fO)) goto L_0048ffca;
L_0049002e:; BB(0x0049002e);
    /* 0049002e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00490031: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490034: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00490037: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049003a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490041: mov esp, ebp */ r_esp = r_ebp;
    /* 00490043: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490044: ret  */ FN_RET(0x00490048); r_esp += 4; return;
L_00490045:; BB(0x00490045);
    /* 00490045: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490047: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00490048:; BB(0x00490048);
    /* 00490048: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00490049: in al, dx */ UNSUP(0x00490049, "in al, dx");
    /* 0049004a: jmp 0x49000f */ goto L_0049000f;
}

void f_0049004c(void) /* sub_49004C */
{
    FN_ENTER(0x0049004c);
    /* 0049004c: mov dword ptr [0xa471dc], 0 */ W32((u32)(0xa471dcu), 0x0u);
    /* 00490056: ret  */ FN_RET(0x0049004c); r_esp += 4; return;
}

void f_0049004d(void)
{
    FN_ENTER(0x0049004d);
    /* 0049004d: add eax, 0xa471dc */ {  u32 a = r_eax; u32 b = 0xa471dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490052: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00490056: ret  */ FN_RET(0x0049004d); r_esp += 4; return;
}

void f_0049004e(void)
{
    FN_ENTER(0x0049004e);
    /* 0049004e: fdiv qword ptr [ecx - 0x5c] */ ST(0) = ST(0) / R_F64((u32)(r_ecx+0xffffffa4u));
    /* 00490051: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490053: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490055: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00490057: nop  */ ;
    /* 00490058: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049005c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049005e: jl 0x49008f */ if ((fS!=fO)) goto L_0049008f;
L_00490060:; BB(0x00490060);
    /* 00490060: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00490063: jge 0x49008f */ if ((fS==fO)) goto L_0049008f;
L_00490065:; BB(0x00490065);
    /* 00490065: mov ecx, dword ptr [eax*4 + 0xa47140] */ r_ecx = R32((u32)(r_eax*4+0xa47140u));
    /* 0049006c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049006e: je 0x49008f */ if (fZ) goto L_0049008f;
L_00490070:; BB(0x00490070);
    /* 00490070: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00490074: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00490078: mov dword ptr [ecx + 0xc8], 2 */ W32((u32)(r_ecx+0xc8u), 0x2u);
    /* 00490082: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00490088: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 0049008e: ret  */ FN_RET(0x0049004e); r_esp += 4; return;
L_0049008f:; BB(0x0049008f);
    /* 0049008f: ret  */ FN_RET(0x0049004e); r_esp += 4; return;
}

void f_00490050(void)
{
    FN_ENTER(0x00490050);
    /* 00490050: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00490051: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490053: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490055: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00490057: nop  */ ;
    /* 00490058: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049005c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049005e: jl 0x49008f */ if ((fS!=fO)) goto L_0049008f;
L_00490060:; BB(0x00490060);
    /* 00490060: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00490063: jge 0x49008f */ if ((fS==fO)) goto L_0049008f;
L_00490065:; BB(0x00490065);
    /* 00490065: mov ecx, dword ptr [eax*4 + 0xa47140] */ r_ecx = R32((u32)(r_eax*4+0xa47140u));
    /* 0049006c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049006e: je 0x49008f */ if (fZ) goto L_0049008f;
L_00490070:; BB(0x00490070);
    /* 00490070: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00490074: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00490078: mov dword ptr [ecx + 0xc8], 2 */ W32((u32)(r_ecx+0xc8u), 0x2u);
    /* 00490082: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00490088: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 0049008e: ret  */ FN_RET(0x00490050); r_esp += 4; return;
L_0049008f:; BB(0x0049008f);
    /* 0049008f: ret  */ FN_RET(0x00490050); r_esp += 4; return;
}

void f_00490052(void)
{
    FN_ENTER(0x00490052);
    /* 00490052: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00490056: ret  */ FN_RET(0x00490052); r_esp += 4; return;
}

void f_00490053(void)
{
    FN_ENTER(0x00490053);
    /* 00490053: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00490055: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00490057: nop  */ ;
    /* 00490058: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049005c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049005e: jl 0x49008f */ if ((fS!=fO)) goto L_0049008f;
L_00490060:; BB(0x00490060);
    /* 00490060: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00490063: jge 0x49008f */ if ((fS==fO)) goto L_0049008f;
L_00490065:; BB(0x00490065);
    /* 00490065: mov ecx, dword ptr [eax*4 + 0xa47140] */ r_ecx = R32((u32)(r_eax*4+0xa47140u));
    /* 0049006c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049006e: je 0x49008f */ if (fZ) goto L_0049008f;
L_00490070:; BB(0x00490070);
    /* 00490070: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00490074: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00490078: mov dword ptr [ecx + 0xc8], 2 */ W32((u32)(r_ecx+0xc8u), 0x2u);
    /* 00490082: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00490088: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 0049008e: ret  */ FN_RET(0x00490053); r_esp += 4; return;
L_0049008f:; BB(0x0049008f);
    /* 0049008f: ret  */ FN_RET(0x00490053); r_esp += 4; return;
}

void f_00490054(void)
{
    FN_ENTER(0x00490054);
    /* 00490054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00490056: ret  */ FN_RET(0x00490054); r_esp += 4; return;
}

void f_00490058(void) /* sub_490058 */
{
    FN_ENTER(0x00490058);
    /* 00490058: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049005c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049005e: jl 0x49008f */ if ((fS!=fO)) goto L_0049008f;
L_00490060:; BB(0x00490060);
    /* 00490060: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00490063: jge 0x49008f */ if ((fS==fO)) goto L_0049008f;
L_00490065:; BB(0x00490065);
    /* 00490065: mov ecx, dword ptr [eax*4 + 0xa47140] */ r_ecx = R32((u32)(r_eax*4+0xa47140u));
    /* 0049006c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049006e: je 0x49008f */ if (fZ) goto L_0049008f;
L_00490070:; BB(0x00490070);
    /* 00490070: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00490074: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00490078: mov dword ptr [ecx + 0xc8], 2 */ W32((u32)(r_ecx+0xc8u), 0x2u);
    /* 00490082: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00490088: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 0049008e: ret  */ FN_RET(0x00490058); r_esp += 4; return;
L_0049008f:; BB(0x0049008f);
    /* 0049008f: ret  */ FN_RET(0x00490058); r_esp += 4; return;
}

void f_00490080(void)
{
    FN_ENTER(0x00490080);
    /* 00490080: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00490082: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00490088: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 0049008e: ret  */ FN_RET(0x00490080); r_esp += 4; return;
}

void f_00490090(void) /* sub_490090 */
{
    FN_ENTER(0x00490090);
    /* 00490090: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00490094: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00490096: jl 0x4900b3 */ if ((fS!=fO)) goto L_004900b3;
L_00490098:; BB(0x00490098);
    /* 00490098: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049009b: jge 0x4900b3 */ if ((fS==fO)) goto L_004900b3;
L_0049009d:; BB(0x0049009d);
    /* 0049009d: mov eax, dword ptr [eax*4 + 0xa47140] */ r_eax = R32((u32)(r_eax*4+0xa47140u));
    /* 004900a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004900a6: je 0x4900b3 */ if (fZ) goto L_004900b3;
L_004900a8:; BB(0x004900a8);
    /* 004900a8: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 004900b2: ret  */ FN_RET(0x00490090); r_esp += 4; return;
L_004900b3:; BB(0x004900b3);
    /* 004900b3: ret  */ FN_RET(0x00490090); r_esp += 4; return;
}

void f_004900a0(void)
{
    FN_ENTER(0x004900a0);
    goto L_004900a0;
L_0048ffca:; BB(0x0048ffca);
    /* 0048ffca: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0048ffd1: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ffd6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48ffdbu); f_005caba4();
    /* 0048ffdb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048ffde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ffe1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048ffe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ffe6: je 0x490045 */ if (fZ) goto L_00490045;
L_0048ffe8:; BB(0x0048ffe8);
    /* 0048ffe8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0048ffef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048fff6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048fff9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048fffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fffd: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00490003: call 0x48fdc0 */ r_esp -= 4; W32(r_esp, 0x490008u); f_0048fdc0();
    /* 00490008: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0049000f:; BB(0x0049000f);
    /* 0049000f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00490016: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00490019: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049001c: mov dword ptr [edx*4 + 0xa47140], eax */ W32((u32)(r_edx*4+0xa47140u), r_eax);
    /* 00490023: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00490026: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00490029: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049002c: jl 0x48ffca */ if ((fS!=fO)) goto L_0048ffca;
L_0049002e:; BB(0x0049002e);
    /* 0049002e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00490031: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490034: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00490037: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049003a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490041: mov esp, ebp */ r_esp = r_ebp;
    /* 00490043: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490044: ret  */ FN_RET(0x004900a0); r_esp += 4; return;
L_00490045:; BB(0x00490045);
    /* 00490045: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00490047:; BB(0x00490047);
    /* 00490047: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049004a: jmp 0x49000f */ goto L_0049000f;
L_004900a0:; BB(0x004900a0);
    /* 004900a0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 004900a1: jno 0x490047 */ if (!fO) goto L_00490047;
L_004900a3:; BB(0x004900a3);
    /* 004900a3: add byte ptr [ebp - 0x38f48b40], al */ { u32 ad = (u32)(r_ebp+0xc70b74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004900a9: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004900ac: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004900ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004900b0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004900b2: ret  */ FN_RET(0x004900a0); r_esp += 4; return;
}

void f_004900b4(void) /* sub_4900B4 */
{
    FN_ENTER(0x004900b4);
    /* 004900b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004900b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004900ba: jl 0x4900d7 */ if ((fS!=fO)) goto L_004900d7;
L_004900bc:; BB(0x004900bc);
    /* 004900bc: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004900bf: jge 0x4900d7 */ if ((fS==fO)) goto L_004900d7;
L_004900c1:; BB(0x004900c1);
    /* 004900c1: mov edx, dword ptr [eax*4 + 0xa47140] */ r_edx = R32((u32)(r_eax*4+0xa47140u));
    /* 004900c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004900ca: je 0x4900d7 */ if (fZ) goto L_004900d7;
L_004900cc:; BB(0x004900cc);
    /* 004900cc: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 004900d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004900d5: je 0x4900d8 */ if (fZ) goto L_004900d8;
L_004900d7:; BB(0x004900d7);
    /* 004900d7: ret  */ FN_RET(0x004900b4); r_esp += 4; return;
L_004900d8:; BB(0x004900d8);
    /* 004900d8: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 004900e2: ret  */ FN_RET(0x004900b4); r_esp += 4; return;
}

void f_004900e4(void) /* sub_4900E4 */
{
    FN_ENTER(0x004900e4);
    /* 004900e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004900e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004900ea: jl 0x49010e */ if ((fS!=fO)) goto L_0049010e;
L_004900ec:; BB(0x004900ec);
    /* 004900ec: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004900ef: jge 0x49010e */ if ((fS==fO)) goto L_0049010e;
L_004900f1:; BB(0x004900f1);
    /* 004900f1: mov eax, dword ptr [eax*4 + 0xa47140] */ r_eax = R32((u32)(r_eax*4+0xa47140u));
    /* 004900f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004900fa: je 0x49010e */ if (fZ) goto L_0049010e;
L_004900fc:; BB(0x004900fc);
    /* 004900fc: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00490102: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00490105: mov eax, 0 */ r_eax = 0x0u;
    /* 0049010a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0049010d: ret  */ FN_RET(0x004900e4); r_esp += 4; return;
L_0049010e:; BB(0x0049010e);
    /* 0049010e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00490110: ret  */ FN_RET(0x004900e4); r_esp += 4; return;
}

void f_00490114(void) /* sub_490114 */
{
    FN_ENTER(0x00490114);
    /* 00490114: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00490115: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00490116: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0049011a: mov eax, edi */ r_eax = r_edi;
    /* 0049011c: call 0x48fd68 */ r_esp -= 4; W32(r_esp, 0x490121u); f_0048fd68();
    /* 00490121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490123: jne 0x49012a */ if (!fZ) goto L_0049012a;
L_00490125:; BB(0x00490125);
    /* 00490125: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00490127: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490128: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00490129: ret  */ FN_RET(0x00490114); r_esp += 4; return;
L_0049012a:; BB(0x0049012a);
    /* 0049012a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0049012e: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00490131: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00490133: mov eax, dword ptr [edx + edi*8 + 0xa46fc0] */ r_eax = R32((u32)(r_edx+r_edi*8+0xa46fc0u));
    /* 0049013a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0049013c: mov eax, dword ptr [edx + edi*8 + 0xa46fc4] */ r_eax = R32((u32)(r_edx+r_edi*8+0xa46fc4u));
    /* 00490143: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00490146: mov edx, dword ptr [edx + edi*8 + 0xa46fc8] */ r_edx = R32((u32)(r_edx+r_edi*8+0xa46fc8u));
    /* 0049014d: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00490150: mov eax, edi */ r_eax = r_edi;
    /* 00490152: call 0x48fd98 */ r_esp -= 4; W32(r_esp, 0x490157u); f_0048fd98();
    /* 00490157: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0049015b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0049015e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00490160: mov eax, 1 */ r_eax = 0x1u;
    /* 00490165: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490166: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00490167: ret  */ FN_RET(0x00490114); r_esp += 4; return;
}

void f_00490168(void) /* sub_490168 */
{
    FN_ENTER(0x00490168);
    /* 00490168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00490169: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049016a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049016b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049016e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00490172: fld dword ptr [0x901f88] */ FPUSH(R_F32((u32)(0x901f88u)));
    /* 00490178: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 0049017c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00490180: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00490182: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490184: mov ebx, eax */ r_ebx = r_eax;
    /* 00490186: mov esi, edx */ r_esi = r_edx;
    /* 00490188: mov edi, ecx */ r_edi = r_ecx;
L_0049018a:; BB(0x0049018a);
    /* 0049018a: lea edx, [ebx + 0xa46fc0] */ r_edx = (u32)(r_ebx+0xa46fc0u);
    /* 00490190: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00490193: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00490195: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00490198: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0049019b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0049019f: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004901a2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004901a6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4901abu); f_0082f9c4();
    /* 004901ab: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004901b3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004901b6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4901bbu); f_0083173c();
    /* 004901bb: fcom dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); 
    /* 004901bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004901c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004901c2: jb 0x4901c8 */ if (fC) goto L_004901c8;
L_004901c4:; BB(0x004901c4);
    /* 004901c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004901c6: jmp 0x49020b */ goto L_0049020b;
L_004901c8:; BB(0x004901c8);
    /* 004901c8: fcomp dword ptr [0x901fe4] */ fx_compare(ST(0), R_F32((u32)(0x901fe4u))); FPOP();
    /* 004901ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004901d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004901d1: ja 0x4901da */ if ((!fC&&!fZ)) goto L_004901da;
L_004901d3:; BB(0x004901d3);
    /* 004901d3: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
L_004901da:; BB(0x004901da);
    /* 004901da: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004901dd: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4901e2u); f_0082df08();
    /* 004901e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004901e4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004901e7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004901eb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004901ed: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004901f1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004901f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004901f5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004901f8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004901fc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004901ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00490201: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x490206u); f_0082ebac();
    /* 00490206: mov esi, 1 */ r_esi = 0x1u;
L_0049020b:; BB(0x0049020b);
    /* 0049020b: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049020e: cmp ebx, 0x180 */ {  u32 a = r_ebx; u32 b = 0x180u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490214: jl 0x49018a */ if ((fS!=fO)) goto L_0049018a;
L_0049021a:; BB(0x0049021a);
    /* 0049021a: mov edx, esi */ r_edx = r_esi;
    /* 0049021c: mov eax, edx */ r_eax = r_edx;
    /* 0049021e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00490221: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490222: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00490223: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00490224: ret  */ FN_RET(0x00490168); r_esp += 4; return;
}

void f_00490228(void) /* sub_490228 */
{
    FN_ENTER(0x00490228);
    /* 00490228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00490229: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049022a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049022b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049022e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00490232: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00490236: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00490238: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049023a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049023c: mov ebx, eax */ r_ebx = r_eax;
    /* 0049023e: mov esi, edx */ r_esi = r_edx;
    /* 00490240: mov edi, ecx */ r_edi = r_ecx;
L_00490242:; BB(0x00490242);
    /* 00490242: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00490244: jl 0x49024b */ if ((fS!=fO)) goto L_0049024b;
L_00490246:; BB(0x00490246);
    /* 00490246: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490249: jl 0x49024f */ if ((fS!=fO)) goto L_0049024f;
L_0049024b:; BB(0x0049024b);
    /* 0049024b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049024d: jmp 0x490268 */ goto L_00490268;
L_0049024f:; BB(0x0049024f);
    /* 0049024f: mov eax, dword ptr [esi*4 + 0xa47140] */ r_eax = R32((u32)(r_esi*4+0xa47140u));
    /* 00490256: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
    /* 0049025c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0049025f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490261: lea ecx, [eax + eax + 0x901f8c] */ r_ecx = (u32)(r_eax+r_eax+0x901f8cu);
L_00490268:; BB(0x00490268);
    /* 00490268: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049026a: je 0x490320 */ if (fZ) goto L_00490320;
L_00490270:; BB(0x00490270);
    /* 00490270: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00490272: jl 0x490320 */ if ((fS!=fO)) goto L_00490320;
L_00490278:; BB(0x00490278);
    /* 00490278: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049027b: jge 0x490320 */ if ((fS==fO)) goto L_00490320;
L_00490281:; BB(0x00490281);
    /* 00490281: mov eax, dword ptr [esi*4 + 0xa47140] */ r_eax = R32((u32)(r_esi*4+0xa47140u));
    /* 00490288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049028a: je 0x490320 */ if (fZ) goto L_00490320;
L_00490290:; BB(0x00490290);
    /* 00490290: mov eax, dword ptr [eax + 0xc8] */ r_eax = R32((u32)(r_eax+0xc8u));
    /* 00490296: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490299: jne 0x4902a2 */ if (!fZ) goto L_004902a2;
L_0049029b:; BB(0x0049029b);
    /* 0049029b: mov eax, 1 */ r_eax = 0x1u;
    /* 004902a0: jmp 0x4902a4 */ goto L_004902a4;
L_004902a2:; BB(0x004902a2);
    /* 004902a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004902a4:; BB(0x004902a4);
    /* 004902a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004902a6: je 0x490320 */ if (fZ) goto L_00490320;
L_004902a8:; BB(0x004902a8);
    /* 004902a8: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 004902ab: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004902af: fcomp dword ptr [edi + 4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x4u))); FPOP();
    /* 004902b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004902b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004902b5: jb 0x490320 */ if (fC) goto L_00490320;
L_004902b7:; BB(0x004902b7);
    /* 004902b7: mov eax, dword ptr [ebx + 0xa46fc0] */ r_eax = R32((u32)(r_ebx+0xa46fc0u));
    /* 004902bd: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 004902c0: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004902c4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004902c8: mov edx, edi */ r_edx = r_edi;
    /* 004902ca: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004902cd: mov eax, dword ptr [ebx + 0xa46fc4] */ r_eax = R32((u32)(r_ebx+0xa46fc4u));
    /* 004902d3: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004902d7: mov eax, dword ptr [ebx + 0xa46fc8] */ r_eax = R32((u32)(r_ebx+0xa46fc8u));
    /* 004902dd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004902e1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004902e4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4902e9u); f_0082f9c4();
    /* 004902e9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004902f1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004902f4: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4902f9u); f_0083173c();
    /* 004902f9: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 004902fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004902ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00490300: ja 0x490320 */ if ((!fC&&!fZ)) goto L_00490320;
L_00490302:; BB(0x00490302);
    /* 00490302: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00490304: jl 0x490320 */ if ((fS!=fO)) goto L_00490320;
L_00490306:; BB(0x00490306);
    /* 00490306: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490309: jge 0x490320 */ if ((fS==fO)) goto L_00490320;
L_0049030b:; BB(0x0049030b);
    /* 0049030b: mov eax, dword ptr [esi*4 + 0xa47140] */ r_eax = R32((u32)(r_esi*4+0xa47140u));
    /* 00490312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490314: je 0x490320 */ if (fZ) goto L_00490320;
L_00490316:; BB(0x00490316);
    /* 00490316: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
L_00490320:; BB(0x00490320);
    /* 00490320: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00490323: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00490326: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490329: jl 0x490242 */ if ((fS!=fO)) goto L_00490242;
L_0049032f:; BB(0x0049032f);
    /* 0049032f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00490332: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490333: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00490334: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00490335: ret  */ FN_RET(0x00490228); r_esp += 4; return;
}

void f_00490338(void) /* sub_490338 */
{
    FN_ENTER(0x00490338);
    /* 00490338: mov eax, dword ptr [0xa471d8] */ r_eax = R32((u32)(0xa471d8u));
    /* 0049033d: ret  */ FN_RET(0x00490338); r_esp += 4; return;
}

void f_00490340(void) /* sub_490340 */
{
    FN_ENTER(0x00490340);
    /* 00490340: mov eax, dword ptr [0xa471d4] */ r_eax = R32((u32)(0xa471d4u));
    /* 00490345: ret  */ FN_RET(0x00490340); r_esp += 4; return;
}

void f_00490348(void) /* sub_490348 */
{
    FN_ENTER(0x00490348);
    /* 00490348: mov eax, dword ptr [0xa471dc] */ r_eax = R32((u32)(0xa471dcu));
    /* 0049034d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049034f: je 0x490352 */ if (fZ) goto L_00490352;
L_00490351:; BB(0x00490351);
    /* 00490351: ret  */ FN_RET(0x00490348); r_esp += 4; return;
L_00490352:; BB(0x00490352);
    /* 00490352: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00490356: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0049035d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00490362: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00490366: ret  */ FN_RET(0x00490348); r_esp += 4; return;
}

void f_00490368(void) /* sub_490368 */
{
    FN_ENTER(0x00490368);
    /* 00490368: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00490369: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049036a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049036d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049036f: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00490372: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490374: jne 0x49037c */ if (!fZ) goto L_0049037c;
L_00490376:; BB(0x00490376);
    /* 00490376: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00490379: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049037a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049037b: ret  */ FN_RET(0x00490368); r_esp += 4; return;
L_0049037c:; BB(0x0049037c);
    /* 0049037c: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0049037f: fsub dword ptr [0x901f78] */ ST(0) = ST(0) - R_F32((u32)(0x901f78u));
    /* 00490385: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00490389: lea ebp, [esi + 0x20] */ r_ebp = (u32)(r_esi+0x20u);
    /* 0049038c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0049038f: call 0x48e630 */ r_esp -= 4; W32(r_esp, 0x490394u); f_0048e630();
    /* 00490394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490396: jne 0x49039e */ if (!fZ) goto L_0049039e;
L_00490398:; BB(0x00490398);
    /* 00490398: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049039b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049039c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049039d: ret  */ FN_RET(0x00490368); r_esp += 4; return;
L_0049039e:; BB(0x0049039e);
    /* 0049039e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4903a3u); f_0082d7b0();
    /* 004903a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004903a5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4903aau); f_0082d838();
    /* 004903aa: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 004903ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004903af: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4903b4u); f_0082d8bc();
    /* 004903b4: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004903b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004903b9: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4903beu); f_0082e9e4();
    /* 004903be: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004903c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004903c3: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4903c8u); f_00830c04();
    /* 004903c8: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 004903cb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4903d0u); f_00829cc8();
    /* 004903d0: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004903d5: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x4903dau); f_0048e3a4();
    /* 004903da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004903db: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004903de: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x4903e3u); f_00831758();
    /* 004903e3: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x4903e8u); f_005963d0();
    /* 004903e8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4903edu); f_0082da80();
    /* 004903ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004903f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004903f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004903f2: ret  */ FN_RET(0x00490368); r_esp += 4; return;
}

void f_00490428(void) /* sub_490428 */
{
    FN_ENTER(0x00490428);
    /* 00490428: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490429: mov ebp, esp */ r_ebp = r_esp;
    /* 0049042b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049042d: push 0x8d0088 */ { u32 v = 0x8d0088u; r_esp -= 4; W32(r_esp, v); }
    /* 00490432: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00490438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490439: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00490440: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490443: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00490446: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00490449: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0049044c: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0049044f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00490454: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0049045b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x490460u); f_008581c5();
    /* 00490460: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00490463: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490466: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00490469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049046b: je 0x4906d8 */ if (fZ) goto L_004906d8;
L_00490471:; BB(0x00490471);
    /* 00490471: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00490478: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049047f: mov ecx, eax */ r_ecx = r_eax;
    /* 00490481: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490486: push 0x9a6d40 */ { u32 v = 0x9a6d40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049048b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0049048d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x490492u); f_005b7a84();
    /* 00490492: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00490499:; BB(0x00490499);
    /* 00490499: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049049c: mov dword ptr [0xa471d8], eax */ W32((u32)(0xa471d8u), r_eax);
    /* 004904a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004904a8: push 0x9020f4 */ { u32 v = 0x9020f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004904ad: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x4904b2u); f_008009dc();
    /* 004904b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004904b3: mov dword ptr [0xa471d4], eax */ W32((u32)(0xa471d4u), r_eax);
    /* 004904b8: mov eax, dword ptr [0xa471d8] */ r_eax = R32((u32)(0xa471d8u));
    /* 004904bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004904bf: je 0x4906c1 */ if (fZ) goto L_004906c1;
L_004904c5:; BB(0x004904c5);
    /* 004904c5: mov eax, dword ptr [0xa471d4] */ r_eax = R32((u32)(0xa471d4u));
    /* 004904ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004904cc: je 0x4906c1 */ if (fZ) goto L_004906c1;
L_004904d2:; BB(0x004904d2);
    /* 004904d2: movzx eax, byte ptr [0xa471c0] */ r_eax = (u32)R8((u32)(0xa471c0u));
    /* 004904d9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004904db: jne 0x490535 */ if (!fZ) goto L_00490535;
L_004904dd:; BB(0x004904dd);
    /* 004904dd: fld dword ptr [0x90331c] */ FPUSH(R_F32((u32)(0x90331cu)));
    /* 004904e3: fld dword ptr [0x901fbc] */ FPUSH(R_F32((u32)(0x901fbcu)));
    /* 004904e9: fld dword ptr [0x901fc0] */ FPUSH(R_F32((u32)(0x901fc0u)));
    /* 004904ef: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004904f1: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004904f3: fld dword ptr [0x901fb8] */ FPUSH(R_F32((u32)(0x901fb8u)));
    /* 004904f9: fld dword ptr [0x901fb4] */ FPUSH(R_F32((u32)(0x901fb4u)));
    /* 004904ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490501: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00490503: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00490505: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490507: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00490509: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0049050b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049050d: fstp dword ptr [0x9a6d58] */ W_F32((u32)(0x9a6d58u), ST(0)); FPOP();
    /* 00490513: fstp dword ptr [0x9a6d60] */ W_F32((u32)(0x9a6d60u), ST(0)); FPOP();
    /* 00490519: fstp dword ptr [0x9a6d68] */ W_F32((u32)(0x9a6d68u), ST(0)); FPOP();
    /* 0049051f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490521: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00490523: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00490525: fstp dword ptr [0x9a6d70] */ W_F32((u32)(0x9a6d70u), ST(0)); FPOP();
    /* 0049052b: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490530: mov byte ptr [0xa471c0], al */ W8((u32)(0xa471c0u), (u8)r_eax);
L_00490535:; BB(0x00490535);
    /* 00490535: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00490537: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490539: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0049053c:; BB(0x0049053c);
    /* 0049053c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049053f: fld dword ptr [esi*8 + 0x9a6d58] */ FPUSH(R_F32((u32)(r_esi*8+0x9a6d58u)));
    /* 00490546: mov ecx, dword ptr [esi*8 + 0x9a6d5c] */ r_ecx = R32((u32)(r_esi*8+0x9a6d5cu));
    /* 0049054d: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00490550: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00490553: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 00490558: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049055a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0049055a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0049055a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0049055c: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0049055f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00490562: mov edi, eax */ r_edi = r_eax;
    /* 00490564: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00490567: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00490569: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0049056b: imul esi, edi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0049056e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00490570: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00490572: jle 0x4905d4 */ if ((fZ||fS!=fO)) goto L_004905d4;
L_00490574:; BB(0x00490574);
    /* 00490574: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490577: jge 0x4905e6 */ if ((fS==fO)) goto L_004905e6;
L_00490579:; BB(0x00490579);
    /* 00490579: mov ecx, esi */ r_ecx = r_esi;
    /* 0049057b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x490580u); f_0082dcbc();
    /* 00490580: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00490583: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00490586: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00490589: fadd dword ptr [0x903310] */ ST(0) = ST(0) + R_F32((u32)(0x903310u));
    /* 0049058f: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00490592: mov ecx, esi */ r_ecx = r_esi;
    /* 00490594: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x490599u); f_0082ddd8();
    /* 00490599: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0049059c: fadd dword ptr [0x903318] */ ST(0) = ST(0) + R_F32((u32)(0x903318u));
    /* 004905a2: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 004905a5: add esi, dword ptr [ebp - 0x20] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004905a8: mov eax, dword ptr [0x903314] */ r_eax = R32((u32)(0x903314u));
    /* 004905ad: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004905b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004905b2: fstp dword ptr [edx + ebx*8 + 0xa46fc0] */ W_F32((u32)(r_edx+r_ebx*8+0xa46fc0u), ST(0)); FPOP();
    /* 004905b9: fstp dword ptr [edx + ebx*8 + 0xa46fc8] */ W_F32((u32)(r_edx+r_ebx*8+0xa46fc8u), ST(0)); FPOP();
    /* 004905c0: mov dword ptr [edx + ebx*8 + 0xa46fc4], eax */ W32((u32)(r_edx+r_ebx*8+0xa46fc4u), r_eax);
    /* 004905c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004905ca: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004905cd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004905d0: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004905d2: jl 0x490574 */ if ((fS!=fO)) goto L_00490574;
L_004905d4:; BB(0x004905d4);
    /* 004905d4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004905d7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004905da: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004905dd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004905e0: jl 0x49053c */ if ((fS!=fO)) goto L_0049053c;
L_004905e6:; BB(0x004905e6);
    /* 004905e6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004905e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004905ea: mov dword ptr [0xa47140], eax */ W32((u32)(0xa47140u), r_eax);
    /* 004905ef: mov dword ptr [0xa47144], eax */ W32((u32)(0xa47144u), r_eax);
    /* 004905f4: mov dword ptr [0xa47148], eax */ W32((u32)(0xa47148u), r_eax);
    /* 004905f9: mov dword ptr [0xa4714c], eax */ W32((u32)(0xa4714cu), r_eax);
    /* 004905fe: mov dword ptr [0xa47150], eax */ W32((u32)(0xa47150u), r_eax);
    /* 00490603: mov dword ptr [0xa47154], eax */ W32((u32)(0xa47154u), r_eax);
    /* 00490608: mov dword ptr [0xa47158], eax */ W32((u32)(0xa47158u), r_eax);
    /* 0049060d: mov dword ptr [0xa4715c], eax */ W32((u32)(0xa4715cu), r_eax);
    /* 00490612: mov dword ptr [0xa47160], eax */ W32((u32)(0xa47160u), r_eax);
    /* 00490617: mov dword ptr [0xa47164], eax */ W32((u32)(0xa47164u), r_eax);
    /* 0049061c: mov dword ptr [0xa47168], eax */ W32((u32)(0xa47168u), r_eax);
    /* 00490621: mov dword ptr [0xa4716c], eax */ W32((u32)(0xa4716cu), r_eax);
    /* 00490626: mov dword ptr [0xa47170], eax */ W32((u32)(0xa47170u), r_eax);
    /* 0049062b: mov dword ptr [0xa47174], eax */ W32((u32)(0xa47174u), r_eax);
    /* 00490630: mov dword ptr [0xa47178], eax */ W32((u32)(0xa47178u), r_eax);
    /* 00490635: mov dword ptr [0xa4717c], eax */ W32((u32)(0xa4717cu), r_eax);
    /* 0049063a: mov dword ptr [0xa47180], eax */ W32((u32)(0xa47180u), r_eax);
    /* 0049063f: mov dword ptr [0xa47184], eax */ W32((u32)(0xa47184u), r_eax);
    /* 00490644: mov dword ptr [0xa47188], eax */ W32((u32)(0xa47188u), r_eax);
    /* 00490649: mov dword ptr [0xa4718c], eax */ W32((u32)(0xa4718cu), r_eax);
    /* 0049064e: mov dword ptr [0xa47190], eax */ W32((u32)(0xa47190u), r_eax);
    /* 00490653: mov dword ptr [0xa47194], eax */ W32((u32)(0xa47194u), r_eax);
    /* 00490658: mov dword ptr [0xa47198], eax */ W32((u32)(0xa47198u), r_eax);
    /* 0049065d: mov dword ptr [0xa4719c], eax */ W32((u32)(0xa4719cu), r_eax);
    /* 00490662: mov dword ptr [0xa471a0], eax */ W32((u32)(0xa471a0u), r_eax);
    /* 00490667: mov dword ptr [0xa471a4], eax */ W32((u32)(0xa471a4u), r_eax);
    /* 0049066c: mov dword ptr [0xa471a8], eax */ W32((u32)(0xa471a8u), r_eax);
    /* 00490671: mov dword ptr [0xa471ac], eax */ W32((u32)(0xa471acu), r_eax);
    /* 00490676: mov dword ptr [0xa471b0], eax */ W32((u32)(0xa471b0u), r_eax);
    /* 0049067b: mov dword ptr [0xa471b4], eax */ W32((u32)(0xa471b4u), r_eax);
    /* 00490680: mov dword ptr [0xa471b8], eax */ W32((u32)(0xa471b8u), r_eax);
    /* 00490685: mov dword ptr [0xa471bc], eax */ W32((u32)(0xa471bcu), r_eax);
    /* 0049068a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x49068fu); f_0077a6cc();
    /* 0049068f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490690: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00490693: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00490696: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0049069a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049069f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004906a2: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004906a5: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 004906a8: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 004906ab: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004906ae: mov dword ptr [0xa471d0], eax */ W32((u32)(0xa471d0u), r_eax);
    /* 004906b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004906b5: jg 0x4906c1 */ if ((!fZ&&fS==fO)) goto L_004906c1;
L_004906b7:; BB(0x004906b7);
    /* 004906b7: mov dword ptr [0xa471d0], 0x14 */ W32((u32)(0xa471d0u), 0x14u);
L_004906c1:; BB(0x004906c1);
    /* 004906c1: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004906c4: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004906c7: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004906ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004906cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004906d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004906d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004906d7: ret  */ FN_RET(0x00490428); r_esp += 4; return;
L_004906d8:; BB(0x004906d8);
    /* 004906d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004906da: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004906dd: jmp 0x490499 */ goto L_00490499;
}

void f_004906e4(void) /* sub_4906E4 */
{
    FN_ENTER(0x004906e4);
    /* 004906e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004906e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004906e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004906e9: call 0x490708 */ r_esp -= 4; W32(r_esp, 0x4906eeu); f_00490708();
    /* 004906ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004906f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004906f4: jne 0x4906fa */ if (!fZ) goto L_004906fa;
L_004906f6:; BB(0x004906f6);
    /* 004906f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004906f7: ret 4 */ FN_RET(0x004906e4); r_esp += 8; return;
L_004906fa:; BB(0x004906fa);
    /* 004906fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004906fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x490700u); f_005c2f74();
    /* 00490700: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490701: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490702: ret 4 */ FN_RET(0x004906e4); r_esp += 8; return;
}

void f_00490708(void) /* sub_490708 */
{
    FN_ENTER(0x00490708);
    /* 00490708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490709: mov ebp, esp */ r_ebp = r_esp;
    /* 0049070b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049070d: push 0x8d00a4 */ { u32 v = 0x8d00a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00490712: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00490718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490719: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00490720: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490723: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00490726: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00490729: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0049072c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0049072f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00490732: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490735: mov dword ptr [ecx], 0xaf9548 */ W32((u32)(r_ecx), 0xaf9548u);
    /* 0049073b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00490742: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x490747u); f_007b4aec();
    /* 00490747: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049074a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490751: mov esp, ebp */ r_esp = r_ebp;
    /* 00490753: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490754: ret  */ FN_RET(0x00490708); r_esp += 4; return;
}

void f_00490758(void) /* sub_490758 */
{
    FN_ENTER(0x00490758);
    /* 00490758: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00490759: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049075a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049075b: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049075e: mov esi, ecx */ r_esi = r_ecx;
    /* 00490760: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x490765u); f_00520db8();
    /* 00490765: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490767: jne 0x49095b */ if (!fZ) goto L_0049095b;
L_0049076d:; BB(0x0049076d);
    /* 0049076d: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00490773: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00490775: jle 0x490787 */ if ((fZ||fS!=fO)) goto L_00490787;
L_00490777:; BB(0x00490777);
    /* 00490777: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049077a: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 00490780: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00490783: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490784: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00490785: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00490786: ret  */ FN_RET(0x00490758); r_esp += 4; return;
L_00490787:; BB(0x00490787);
    /* 00490787: fld dword ptr [0xa47210] */ FPUSH(R_F32((u32)(0xa47210u)));
    /* 0049078d: fadd dword ptr [esi + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb8u));
    /* 00490793: fld dword ptr [0xa4720c] */ FPUSH(R_F32((u32)(0xa4720cu)));
    /* 00490799: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049079b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049079d: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 004907a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004907a4: jb 0x4907a8 */ if (fC) goto L_004907a8;
L_004907a6:; BB(0x004907a6);
    /* 004907a6: fst st(1) */ ST(1) = ST(0);
L_004907a8:; BB(0x004907a8);
    /* 004907a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004907aa: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004907ad: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004907af: fcom dword ptr [0x90216c] */ fx_compare(ST(0), R_F32((u32)(0x90216cu))); 
    /* 004907b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004907b7: add dword ptr [esi + 0x60], edx */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004907ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004907bb: ja 0x49094b */ if ((!fC&&!fZ)) goto L_0049094b;
L_004907c1:; BB(0x004907c1);
    /* 004907c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004907c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004907c5: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 004907cb: fld dword ptr [edx*8 + 0x902118] */ FPUSH(R_F32((u32)(r_edx*8+0x902118u)));
    /* 004907d2: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004907d6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004907d8: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004907da: mov dword ptr [esi + 0x3c], edi */ W32((u32)(r_esi+0x3cu), r_edi);
    /* 004907dd: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 004907e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004907e5: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 004907eb: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4907f0u); f_0077a6cc();
    /* 004907f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004907f1: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 004907f4: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 004907f8: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 004907fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490802: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00490806: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0049080a: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049080e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00490812: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00490816: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00490818: jg 0x49081f */ if ((!fZ&&fS==fO)) goto L_0049081f;
L_0049081a:; BB(0x0049081a);
    /* 0049081a: mov edx, 0x14 */ r_edx = 0x14u;
L_0049081f:; BB(0x0049081f);
    /* 0049081f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490821: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00490823: jle 0x490962 */ if ((fZ||fS!=fO)) goto L_00490962;
L_00490829:; BB(0x00490829);
    /* 00490829: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0049082d: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00490831: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00490835: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00490838: mov esi, eax */ r_esi = r_eax;
L_0049083a:; BB(0x0049083a);
    /* 0049083a: mov ebp, dword ptr [esi*4 + 0xaad720] */ r_ebp = R32((u32)(r_esi*4+0xaad720u));
    /* 00490841: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490842: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x490847u); f_0048e100();
    /* 00490847: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049084a: je 0x4908cf */ if (fZ) goto L_004908cf;
L_00490850:; BB(0x00490850);
    /* 00490850: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00490853: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00490856: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00490859: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0049085c: mov edx, ebx */ r_edx = r_ebx;
    /* 0049085e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00490862: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00490865: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00490869: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49086eu); f_0082f9c4();
    /* 0049086e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00490876: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00490879: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49087eu); f_0083173c();
    /* 0049087e: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 00490882: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00490884: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00490885: ja 0x4908cf */ if ((!fC&&!fZ)) goto L_004908cf;
L_00490887:; BB(0x00490887);
    /* 00490887: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049088c: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00490890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490891: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x490896u); f_0048e9d4();
    /* 00490896: mov edx, eax */ r_edx = r_eax;
    /* 00490898: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049089b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0049089f: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004908a3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004908a6: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004908aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004908ac: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004908b1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004908b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004908b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004908b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004908b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004908ba: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004908be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004908c0: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004908c4: push dword ptr [eax + 0xac] */ { u32 v = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 004908ca: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4908cdu); call_ind(t); }
    /* 004908cd: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004908cf:; BB(0x004908cf);
    /* 004908cf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004908d2: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004908d4: jl 0x49083a */ if ((fS!=fO)) goto L_0049083a;
L_004908da:; BB(0x004908da);
    /* 004908da: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 004908de: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
L_004908e2:; BB(0x004908e2);
    /* 004908e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004908e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004908e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004908e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004908e7: push 0x5ae */ { u32 v = 0x5aeu; r_esp -= 4; W32(r_esp, v); }
    /* 004908ec: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4908f1u); f_00814298();
    /* 004908f1: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 004908f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004908f7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4908fcu); f_0050b510();
    /* 004908fc: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 00490901: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490902: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x490907u); f_0050b510();
    /* 00490907: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00490909: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049090e: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00490913: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490914: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x490919u); f_0048e41c();
    /* 00490919: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049091f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490920: call 0x483a38 */ r_esp -= 4; W32(r_esp, 0x490925u); f_00483a38();
    /* 00490925: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490929: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049092a: push 0x5af */ { u32 v = 0x5afu; r_esp -= 4; W32(r_esp, v); }
    /* 0049092f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x490934u); f_00814298();
    /* 00490934: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00490938: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049093d: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00490941: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00490947: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490948: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00490949: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049094a: ret  */ FN_RET(0x00490758); r_esp += 4; return;
L_0049094b:; BB(0x0049094b);
    /* 0049094b: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0049094e: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 00490954: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00490957: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00490959: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049095a: ret  */ FN_RET(0x00490758); r_esp += 4; return;
L_0049095b:; BB(0x0049095b);
    /* 0049095b: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049095e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049095f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00490960: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00490961: ret  */ FN_RET(0x00490758); r_esp += 4; return;
L_00490962:; BB(0x00490962);
    /* 00490962: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00490965: jmp 0x4908e2 */ goto L_004908e2;
}

void f_0049096c(void) /* sub_49096C */
{
    FN_ENTER(0x0049096c);
    /* 0049096c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049096d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049096f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x490974u); f_0082d7b0();
    /* 00490974: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00490977: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x49097cu); f_0082d838();
    /* 0049097c: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0049097f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00490981: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x490986u); f_0082d8bc();
    /* 00490986: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 00490989: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049098b: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x490990u); f_0082e9e4();
    /* 00490990: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 00490993: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00490995: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x49099au); f_00830c04();
    /* 0049099a: mov ecx, dword ptr [ebx + 0xc4] */ r_ecx = R32((u32)(r_ebx+0xc4u));
    /* 004909a0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4909a5u); f_00829cc8();
    /* 004909a5: mov ecx, dword ptr [ebx + 0xc0] */ r_ecx = R32((u32)(r_ebx+0xc0u));
    /* 004909ab: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x4909b0u); f_00831758();
    /* 004909b0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4909b5u); f_0082da80();
    /* 004909b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004909b6: ret  */ FN_RET(0x0049096c); r_esp += 4; return;
}

void f_004909b8(void) /* sub_4909B8 */
{
    FN_ENTER(0x004909b8);
    /* 004909b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004909b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004909bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004909bd: push 0x8d00cc */ { u32 v = 0x8d00ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004909c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004909c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004909c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004909d0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004909d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004909d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004909d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004909dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004909df: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004909e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004909e4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004909e7: mov dword ptr [ebp - 0x38], 0x43e10000 */ W32((u32)(r_ebp+0xffffffc8u), 0x43e10000u);
    /* 004909ee: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004909f1: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004909f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004909f6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004909f9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4909feu); f_008587a5();
    /* 004909fe: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00490a01: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00490a04: fdiv dword ptr [0x902158] */ ST(0) = ST(0) / R_F32((u32)(0x902158u));
    /* 00490a0a: fcomp dword ptr [0x902154] */ fx_compare(ST(0), R_F32((u32)(0x902154u))); FPOP();
    /* 00490a10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00490a12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00490a13: jae 0x490a1d */ if (!fC) goto L_00490a1d;
L_00490a15:; BB(0x00490a15);
    /* 00490a15: mov eax, 1 */ r_eax = 0x1u;
    /* 00490a1a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00490a1d:; BB(0x00490a1d);
    /* 00490a1d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00490a24: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00490a29: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x490a2eu); f_005caba4();
    /* 00490a2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490a2f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00490a32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490a34: je 0x490a6f */ if (fZ) goto L_00490a6f;
L_00490a36:; BB(0x00490a36);
    /* 00490a36: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00490a3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00490a44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00490a47: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00490a4a: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00490a4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490a4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00490a4f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00490a52: call 0x490a74 */ r_esp -= 4; W32(r_esp, 0x490a57u); f_00490a74();
    /* 00490a57: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00490a5a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00490a61:; BB(0x00490a61);
    /* 00490a61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490a64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490a6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00490a6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490a6e: ret  */ FN_RET(0x004909b8); r_esp += 4; return;
L_00490a6f:; BB(0x00490a6f);
    /* 00490a6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00490a71: jmp 0x490a61 */ goto L_00490a61;
}

void f_00490a74(void) /* sub_490A74 */
{
    FN_ENTER(0x00490a74);
    /* 00490a74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490a75: mov ebp, esp */ r_ebp = r_esp;
    /* 00490a77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00490a79: push 0x8d00e8 */ { u32 v = 0x8d00e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00490a7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00490a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490a85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00490a8c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490a8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00490a92: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00490a95: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00490a98: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00490a9b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00490a9e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00490aa1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00490aa4: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00490aa7: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00490aaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490aab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00490aae: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00490ab1: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x490ab6u); f_007b4b48();
    /* 00490ab6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00490abd: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490ac0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00490ac3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00490ac6: mov dword ptr [ebx + 0xac], edx */ W32((u32)(r_ebx+0xacu), r_edx);
    /* 00490acc: mov dword ptr [ebx + 0xb0], ecx */ W32((u32)(r_ebx+0xb0u), r_ecx);
    /* 00490ad2: mov dword ptr [ebx], 0xaf9548 */ W32((u32)(r_ebx), 0xaf9548u);
    /* 00490ad8: mov eax, dword ptr [0x9a6d78] */ r_eax = R32((u32)(0x9a6d78u));
    /* 00490add: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00490ae0: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x490ae5u); f_008587a5();
    /* 00490ae5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490ae8: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00490aeb: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00490aee: fdiv dword ptr [0x90214c] */ ST(0) = ST(0) / R_F32((u32)(0x90214cu));
    /* 00490af4: fmul dword ptr [0x902150] */ ST(0) = ST(0) * R_F32((u32)(0x902150u));
    /* 00490afa: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00490afd: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00490b01: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490b06: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00490b09: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00490b0c: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00490b0f: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00490b12: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00490b15: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 00490b1b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x490b20u); f_008587a5();
    /* 00490b20: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490b23: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00490b26: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00490b29: fdiv dword ptr [0x90214c] */ ST(0) = ST(0) / R_F32((u32)(0x90214cu));
    /* 00490b2f: fadd dword ptr [0x902144] */ ST(0) = ST(0) + R_F32((u32)(0x902144u));
    /* 00490b35: fmul dword ptr [0x902148] */ ST(0) = ST(0) * R_F32((u32)(0x902148u));
    /* 00490b3b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00490b3e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00490b42: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490b47: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00490b4a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00490b4d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00490b50: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00490b53: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00490b56: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00490b59: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x490b5eu); f_008587a5();
    /* 00490b5e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490b61: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00490b64: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00490b67: fdiv dword ptr [0x90214c] */ ST(0) = ST(0) / R_F32((u32)(0x90214cu));
    /* 00490b6d: fmul dword ptr [0x902140] */ ST(0) = ST(0) * R_F32((u32)(0x902140u));
    /* 00490b73: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00490b76: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00490b7a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490b7f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00490b82: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00490b85: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00490b88: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00490b8b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00490b8e: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00490b91: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x490b96u); f_008587a5();
    /* 00490b96: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490b99: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00490b9c: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00490b9f: fdiv dword ptr [0x90214c] */ ST(0) = ST(0) / R_F32((u32)(0x90214cu));
    /* 00490ba5: fadd dword ptr [0x902144] */ ST(0) = ST(0) + R_F32((u32)(0x902144u));
    /* 00490bab: fmul dword ptr [0x902148] */ ST(0) = ST(0) * R_F32((u32)(0x902148u));
    /* 00490bb1: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00490bb4: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00490bb8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490bbd: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00490bc0: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00490bc3: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00490bc6: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00490bc9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00490bcc: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00490bcf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x490bd4u); f_008587a5();
    /* 00490bd4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490bd7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00490bda: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 00490be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00490be7: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00490bea: fdiv dword ptr [0x90214c] */ ST(0) = ST(0) / R_F32((u32)(0x90214cu));
    /* 00490bf0: fadd dword ptr [0x902144] */ ST(0) = ST(0) + R_F32((u32)(0x902144u));
    /* 00490bf6: fmul dword ptr [0x90213c] */ ST(0) = ST(0) * R_F32((u32)(0x90213cu));
    /* 00490bfc: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00490bff: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00490c03: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490c08: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00490c0b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00490c0e: fistp dword ptr [edx + 0xbc] */ W32((u32)(r_edx+0xbcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00490c14: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00490c17: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00490c19: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00490c1c: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00490c1f: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 00490c22: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00490c25: mov dword ptr [edx + 0x40], esi */ W32((u32)(r_edx+0x40u), r_esi);
    /* 00490c28: call 0x490338 */ r_esp -= 4; W32(r_esp, 0x490c2du); f_00490338();
    /* 00490c2d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00490c30: push dword ptr [edx*8 + 0x902114] */ { u32 v = R32((u32)(r_edx*8+0x902114u)); r_esp -= 4; W32(r_esp, v); }
    /* 00490c37: mov ecx, eax */ r_ecx = r_eax;
    /* 00490c39: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x490c3eu); f_005b8610();
    /* 00490c3e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490c41: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 00490c47: call 0x490340 */ r_esp -= 4; W32(r_esp, 0x490c4cu); f_00490340();
    /* 00490c4c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00490c4f: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00490c52: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490c55: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00490c5b: mov eax, edx */ r_eax = r_edx;
    /* 00490c5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490c60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490c67: mov esp, ebp */ r_esp = r_ebp;
    /* 00490c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490c6a: ret 0xc */ FN_RET(0x00490a74); r_esp += 16; return;
}

void f_00490ca4(void) /* sub_490CA4 */
{
    FN_ENTER(0x00490ca4);
    /* 00490ca4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490ca5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00490ca7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00490ca9: call 0x490cc8 */ r_esp -= 4; W32(r_esp, 0x490caeu); f_00490cc8();
    /* 00490cae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00490cb2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00490cb4: jne 0x490cba */ if (!fZ) goto L_00490cba;
L_00490cb6:; BB(0x00490cb6);
    /* 00490cb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490cb7: ret 4 */ FN_RET(0x00490ca4); r_esp += 8; return;
L_00490cba:; BB(0x00490cba);
    /* 00490cba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490cbb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x490cc0u); f_005c2f74();
    /* 00490cc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490cc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490cc2: ret 4 */ FN_RET(0x00490ca4); r_esp += 8; return;
}

void f_00490cc8(void) /* sub_490CC8 */
{
    FN_ENTER(0x00490cc8);
    /* 00490cc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490cc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00490ccb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00490ccd: push 0x8d0104 */ { u32 v = 0x8d0104u; r_esp -= 4; W32(r_esp, v); }
    /* 00490cd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00490cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490cd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00490ce0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490ce3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00490ce6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00490ce9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00490cec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00490cef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00490cf2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490cf5: mov dword ptr [ecx], 0xaf9668 */ W32((u32)(r_ecx), 0xaf9668u);
    /* 00490cfb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00490d02: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x490d07u); f_008171e8();
    /* 00490d07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490d0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490d11: mov esp, ebp */ r_esp = r_ebp;
    /* 00490d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490d14: ret  */ FN_RET(0x00490cc8); r_esp += 4; return;
}

void f_00490d18(void) /* sub_490D18 */
{
    FN_ENTER(0x00490d18);
    /* 00490d18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490d19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00490d1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00490d1d: call 0x490d3c */ r_esp -= 4; W32(r_esp, 0x490d22u); f_00490d3c();
    /* 00490d22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00490d26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00490d28: jne 0x490d2e */ if (!fZ) goto L_00490d2e;
L_00490d2a:; BB(0x00490d2a);
    /* 00490d2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490d2b: ret 4 */ FN_RET(0x00490d18); r_esp += 8; return;
L_00490d2e:; BB(0x00490d2e);
    /* 00490d2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490d2f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x490d34u); f_005c2f74();
    /* 00490d34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490d35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490d36: ret 4 */ FN_RET(0x00490d18); r_esp += 8; return;
}

void f_00490d3c(void) /* sub_490D3C */
{
    FN_ENTER(0x00490d3c);
    /* 00490d3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00490d3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00490d3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00490d41: push 0x8d0120 */ { u32 v = 0x8d0120u; r_esp -= 4; W32(r_esp, v); }
    /* 00490d46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00490d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490d4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00490d54: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490d57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00490d5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00490d5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00490d60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00490d63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00490d66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490d69: mov dword ptr [ecx], 0xaf9678 */ W32((u32)(r_ecx), 0xaf9678u);
    /* 00490d6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00490d76: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x490d7bu); f_008171e8();
    /* 00490d7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00490d7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490d85: mov esp, ebp */ r_esp = r_ebp;
    /* 00490d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490d88: ret  */ FN_RET(0x00490d3c); r_esp += 4; return;
}

void f_00490d8c(void) /* sub_490D8C */
{
    FN_ENTER(0x00490d8c);
    /* 00490d8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00490d8d: mov ebx, esp */ r_ebx = r_esp;
    /* 00490d8f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00490d92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00490d93: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00490d99: mov esi, ecx */ r_esi = r_ecx;
    /* 00490d9b: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x490da0u); f_00520db8();
    /* 00490da0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490da2: je 0x490daf */ if (fZ) goto L_00490daf;
L_00490da4:; BB(0x00490da4);
    /* 00490da4: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00490daa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00490dab: mov esp, ebx */ r_esp = r_ebx;
    /* 00490dad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00490dae: ret  */ FN_RET(0x00490d8c); r_esp += 4; return;
L_00490daf:; BB(0x00490daf);
    /* 00490daf: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00490db3: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00490db7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490db9: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 00490dbc: mov edi, eax */ r_edi = r_eax;
    /* 00490dbe: mov ebp, edx */ r_ebp = r_edx;
L_00490dc0:; BB(0x00490dc0);
    /* 00490dc0: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 00490dc4: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00490dc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00490dc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00490dca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00490dcb: call 0x490114 */ r_esp -= 4; W32(r_esp, 0x490dd0u); f_00490114();
    /* 00490dd0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00490dd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490dd5: je 0x491018 */ if (fZ) goto L_00491018;
L_00490ddb:; BB(0x00490ddb);
    /* 00490ddb: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00490ddf: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00490de3: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00490de7: mov edx, ebp */ r_edx = r_ebp;
    /* 00490de9: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00490ded: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00490df1: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00490df5: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00490df9: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x490dfeu); f_0082f9c4();
    /* 00490dfe: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 00490e06: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00490e0a: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x490e0fu); f_0083173c();
    /* 00490e0f: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00490e13: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00490e17: fcomp dword ptr [esi + 0x54] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x54u))); FPOP();
    /* 00490e1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00490e1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00490e1d: jb 0x491018 */ if (fC) goto L_00491018;
L_00490e23:; BB(0x00490e23);
    /* 00490e23: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00490e27: fcomp dword ptr [esi + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x58u))); FPOP();
    /* 00490e2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00490e2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00490e2d: ja 0x491018 */ if ((!fC&&!fZ)) goto L_00491018;
L_00490e33:; BB(0x00490e33);
    /* 00490e33: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00490e37: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00490e3b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00490e3d: fmul qword ptr [0x9021a0] */ ST(0) = ST(0) * R_F64((u32)(0x9021a0u));
    /* 00490e43: fdiv qword ptr [0x902198] */ ST(0) = ST(0) / R_F64((u32)(0x902198u));
    /* 00490e49: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00490e4c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00490e50: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490e55: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00490e59: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00490e5d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00490e61: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00490e64: mov edx, 1 */ r_edx = 0x1u;
    /* 00490e69: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00490e6d: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00490e70: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00490e73: mov eax, ecx */ r_eax = r_ecx;
    /* 00490e75: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00490e78: shr eax, 0x1b */ { u32 c = (27u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00490e7b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00490e7d: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00490e80: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00490e83: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00490e85: mov ecx, dword ptr [esi + eax*4 + 0x34] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x34u));
    /* 00490e89: test edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00490e8b: je 0x491018 */ if (fZ) goto L_00491018;
L_00490e91:; BB(0x00490e91);
    /* 00490e91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00490e92: not edx */ r_edx = ~r_edx;
    /* 00490e94: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00490e96: mov dword ptr [esi + eax*4 + 0x34], ecx */ W32((u32)(r_esi+r_eax*4+0x34u), r_ecx);
    /* 00490e9a: call 0x4900b4 */ r_esp -= 4; W32(r_esp, 0x490e9fu); f_004900b4();
    /* 00490e9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00490ea0: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00490ea4: fcomp dword ptr [0x90222c] */ fx_compare(ST(0), R_F32((u32)(0x90222cu))); FPOP();
    /* 00490eaa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00490eac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00490ead: jbe 0x491018 */ if ((fC||fZ)) goto L_00491018;
L_00490eb3:; BB(0x00490eb3);
    /* 00490eb3: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00490eb7: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00490ebb: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 00490ec3: fchs  */ ST(0) = -ST(0);
    /* 00490ec5: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00490ec9: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 00490ecd: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 00490ed1: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x490ed6u); f_0082df08();
    /* 00490ed6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00490ed8: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00490edc: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 00490ee0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00490ee2: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00490ee6: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00490eea: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00490eec: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00490ef0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00490ef4: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00490ef8: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00490efc: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00490f00: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00490f04: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 00490f08: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 00490f0c: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00490f10: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x490f15u); f_0082ebac();
    /* 00490f15: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 00490f19: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00490f1d: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00490f21: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 00490f25: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00490f29: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 00490f2d: lea ecx, [esp + 0x74] */ r_ecx = (u32)(r_esp+0x74u);
    /* 00490f31: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00490f35: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x490f3au); f_0082f9c4();
    /* 00490f3a: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00490f3e: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 00490f42: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00490f45: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00490f48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490f4a: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00490f4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490f50: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00490f54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490f56: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00490f58: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00490f5a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00490f5c: fmul qword ptr [0x9021a0] */ ST(0) = ST(0) * R_F64((u32)(0x9021a0u));
    /* 00490f62: fdiv qword ptr [0x902198] */ ST(0) = ST(0) / R_F64((u32)(0x902198u));
    /* 00490f68: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00490f6c: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 00490f70: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490f72: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00490f75: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00490f79: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490f7e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00490f82: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00490f86: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00490f8a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00490f8d: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00490f91: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 00490f95: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00490f99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00490f9b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00490f9d: fmul qword ptr [0x9021a0] */ ST(0) = ST(0) * R_F64((u32)(0x9021a0u));
    /* 00490fa3: fdiv qword ptr [0x902198] */ ST(0) = ST(0) / R_F64((u32)(0x902198u));
    /* 00490fa9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00490fac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00490fb0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00490fb5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00490fb9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00490fbd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00490fc1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00490fc4: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00490fc7: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00490fca: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00490fce: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00490fd1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00490fd4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490fd6: jge 0x490fdd */ if ((fS==fO)) goto L_00490fdd;
L_00490fd8:; BB(0x00490fd8);
    /* 00490fd8: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00490fdd:; BB(0x00490fdd);
    /* 00490fdd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00490fdf: jg 0x491018 */ if ((!fZ&&fS==fO)) goto L_00491018;
L_00490fe1:; BB(0x00490fe1);
    /* 00490fe1: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00490fe5: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_00490fe9:; BB(0x00490fe9);
    /* 00490fe9: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 00490fec: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00490fee: sar ebp, 4 */ { u32 c = (4u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00490ff1: shr ebp, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00490ff4: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00490ff6: sar ebp, 5 */ { u32 c = (5u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00490ff9: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00490ffc: mov edi, 1 */ r_edi = 0x1u;
    /* 00491001: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00491003: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00491006: not edi */ r_edi = ~r_edi;
    /* 00491008: and dword ptr [esi + ebp*4 + 0x34], edi */ { u32 ad = (u32)(r_esi+r_ebp*4+0x34u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0049100c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049100e: jle 0x490fe9 */ if ((fZ||fS!=fO)) goto L_00490fe9;
L_00491010:; BB(0x00491010);
    /* 00491010: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00491014: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_00491018:; BB(0x00491018);
    /* 00491018: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049101b: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049101e: jl 0x490dc0 */ if ((fS!=fO)) goto L_00490dc0;
L_00491024:; BB(0x00491024);
    /* 00491024: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00491028: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0049102e: mov edx, ebp */ r_edx = r_ebp;
    /* 00491030: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00491034: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00491036: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00491038: jle 0x4911df */ if ((fZ||fS!=fO)) goto L_004911df;
L_0049103e:; BB(0x0049103e);
    /* 0049103e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00491042: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00491046: mov esi, eax */ r_esi = r_eax;
    /* 00491048: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0049104c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00491050: mov ebp, ecx */ r_ebp = r_ecx;
L_00491052:; BB(0x00491052);
    /* 00491052: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 00491059: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049105a: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x49105fu); f_0048e100();
    /* 0049105f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491062: je 0x4911c8 */ if (fZ) goto L_004911c8;
L_00491068:; BB(0x00491068);
    /* 00491068: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 0049106f: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00491072: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00491079: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0049107c: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00491083: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00491086: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 0049108d: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00491091: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x491096u); f_0082f9c4();
    /* 00491096: mov dword ptr [esp + 0x84], 0 */ W32((u32)(r_esp+0x84u), 0x0u);
    /* 004910a1: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 004910a8: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4910adu); f_0083173c();
    /* 004910ad: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004910b1: fcom dword ptr [edx + 0x54] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x54u))); 
    /* 004910b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004910b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004910b7: jae 0x4910c0 */ if (!fC) goto L_004910c0;
L_004910b9:; BB(0x004910b9);
    /* 004910b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004910bb: jmp 0x4911c8 */ goto L_004911c8;
L_004910c0:; BB(0x004910c0);
    /* 004910c0: fcomp dword ptr [edx + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x58u))); FPOP();
    /* 004910c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004910c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004910c6: ja 0x4911c8 */ if ((!fC&&!fZ)) goto L_004911c8;
L_004910cc:; BB(0x004910cc);
    /* 004910cc: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 004910d3: fld dword ptr [esp + 0x88] */ FPUSH(R_F32((u32)(r_esp+0x88u)));
    /* 004910da: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004910dc: fmul qword ptr [0x9021a0] */ ST(0) = ST(0) * R_F64((u32)(0x9021a0u));
    /* 004910e2: fdiv qword ptr [0x902198] */ ST(0) = ST(0) / R_F64((u32)(0x902198u));
    /* 004910e8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004910eb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004910ef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004910f4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004910f8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004910fc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00491100: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00491103: mov eax, 1 */ r_eax = 0x1u;
    /* 00491108: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0049110c: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0049110f: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00491112: mov edx, ecx */ r_edx = r_ecx;
    /* 00491114: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00491117: shr edx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0049111a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049111c: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0049111f: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00491122: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00491124: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00491128: test dword ptr [ecx + edx*4 + 0x34], eax */ {  u32 a = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049112c: je 0x4911c8 */ if (fZ) goto L_004911c8;
L_00491132:; BB(0x00491132);
    /* 00491132: mov eax, ecx */ r_eax = r_ecx;
    /* 00491134: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00491137: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0049113a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049113e: call 0x49e2f8 */ r_esp -= 4; W32(r_esp, 0x491143u); f_0049e2f8();
    /* 00491143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491145: je 0x49117d */ if (fZ) goto L_0049117d;
L_00491147:; BB(0x00491147);
    /* 00491147: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0049114b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0049114f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00491153: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00491157: fmul dword ptr [edx + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x64u));
    /* 0049115a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049115d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00491161: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00491166: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049116a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049116e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00491172: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00491175: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00491179: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
L_0049117d:; BB(0x0049117d);
    /* 0049117d: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00491182: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00491186: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00491187: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x49118cu); f_0048e9d4();
    /* 0049118c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049118f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00491193: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00491197: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00491199: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 004911a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004911a2: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004911a7: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 004911ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004911af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004911b0: mov ecx, edi */ r_ecx = r_edi;
    /* 004911b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004911b3: push dword ptr [esp + 0x9c] */ { u32 v = R32((u32)(r_esp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004911ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004911bc: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004911c0: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004911c3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x4911c6u); call_ind(t); }
    /* 004911c6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004911c8:; BB(0x004911c8);
    /* 004911c8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004911cb: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004911cd: jl 0x491052 */ if ((fS!=fO)) goto L_00491052;
L_004911d3:; BB(0x004911d3);
    /* 004911d3: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004911d7: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 004911db: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_004911df:; BB(0x004911df);
    /* 004911df: fld dword ptr [0xa47228] */ FPUSH(R_F32((u32)(0xa47228u)));
    /* 004911e5: fld dword ptr [esi + 0x5c] */ FPUSH(R_F32((u32)(r_esi+0x5cu)));
    /* 004911e8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004911ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004911ec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004911ed: jae 0x49135b */ if (!fC) goto L_0049135b;
L_004911f3:; BB(0x004911f3);
    /* 004911f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004911f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004911f7: fld dword ptr [0x902224] */ FPUSH(R_F32((u32)(0x902224u)));
    /* 004911fd: fmul dword ptr [esi + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x58u));
    /* 00491200: fcom dword ptr [0x90222c] */ fx_compare(ST(0), R_F32((u32)(0x90222cu))); 
    /* 00491206: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491208: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00491209: ja 0x491215 */ if ((!fC&&!fZ)) goto L_00491215;
L_0049120b:; BB(0x0049120b);
    /* 0049120b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049120d: fld dword ptr [0x902220] */ FPUSH(R_F32((u32)(0x902220u)));
    /* 00491213: jmp 0x49121d */ goto L_0049121d;
L_00491215:; BB(0x00491215);
    /* 00491215: fld dword ptr [0xa47224] */ FPUSH(R_F32((u32)(0xa47224u)));
    /* 0049121b: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
L_0049121d:; BB(0x0049121d);
    /* 0049121d: fmul dword ptr [0x90221c] */ ST(0) = ST(0) * R_F32((u32)(0x90221cu));
    /* 00491223: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00491226: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049122a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049122f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00491233: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00491237: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049123b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049123e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00491242: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00491246: mov edi, eax */ r_edi = r_eax;
    /* 00491248: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0049124c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049124e: mov ebp, ecx */ r_ebp = r_ecx;
L_00491250:; BB(0x00491250);
    /* 00491250: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00491252: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00491255: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00491258: mov eax, ecx */ r_eax = r_ecx;
    /* 0049125a: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0049125d: shr eax, 0x1b */ { u32 c = (27u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00491260: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00491262: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00491265: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00491268: mov edx, 1 */ r_edx = 0x1u;
    /* 0049126d: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0049126f: test dword ptr [esi + eax*4 + 0x34], edx */ {  u32 a = R32((u32)(r_esi+r_eax*4+0x34u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491273: je 0x49133c */ if (fZ) goto L_0049133c;
L_00491279:; BB(0x00491279);
    /* 00491279: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0049127c: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 00491283: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 00491286: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00491288: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0049128f: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00491292: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 00491299: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x49129eu); f_0082dcbc();
    /* 0049129e: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 004912a1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004912a3: fadd dword ptr [esp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x94u));
    /* 004912aa: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 004912b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004912b3: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4912b8u); f_0082ddd8();
    /* 004912b8: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 004912bf: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 004912c2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004912c4: fadd dword ptr [esp + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x9cu));
    /* 004912cb: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 004912d2: push 0x9021a8 */ { u32 v = 0x9021a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004912d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004912d8: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4912ddu); f_00836208();
    /* 004912dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004912e0: fcomp dword ptr [0x9021b4] */ fx_compare(ST(0), R_F32((u32)(0x9021b4u))); FPOP();
    /* 004912e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004912e8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004912e9: ja 0x49133c */ if ((!fC&&!fZ)) goto L_0049133c;
L_004912eb:; BB(0x004912eb);
    /* 004912eb: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 004912f2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004912f4: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 004912f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004912fa: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4912ffu); f_0050b7a4();
    /* 004912ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491302: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00491305: call 0x49e2f8 */ r_esp -= 4; W32(r_esp, 0x49130au); f_0049e2f8();
    /* 0049130a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049130c: jne 0x491325 */ if (!fZ) goto L_00491325;
L_0049130e:; BB(0x0049130e);
    /* 0049130e: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00491315: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 0049131a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049131b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x491320u); f_0050b510();
    /* 00491320: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491323: jmp 0x49133c */ goto L_0049133c;
L_00491325:; BB(0x00491325);
    /* 00491325: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 0049132c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049132e: push 0x229 */ { u32 v = 0x229u; r_esp -= 4; W32(r_esp, v); }
    /* 00491333: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00491334: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x491339u); f_0050b7a4();
    /* 00491339: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049133c:; BB(0x0049133c);
    /* 0049133c: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049133e: cmp ebp, 0x10000 */ {  u32 a = r_ebp; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491344: jl 0x491250 */ if ((fS!=fO)) goto L_00491250;
L_0049134a:; BB(0x0049134a);
    /* 0049134a: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0049134e: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00491352: fld dword ptr [0xa47228] */ FPUSH(R_F32((u32)(0xa47228u)));
    /* 00491358: fld dword ptr [esi + 0x5c] */ FPUSH(R_F32((u32)(r_esi+0x5cu)));
L_0049135b:; BB(0x0049135b);
    /* 0049135b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0049135d: fld dword ptr [0x9021b8] */ FPUSH(R_F32((u32)(0x9021b8u)));
    /* 00491363: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00491365: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491367: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00491368: jae 0x491371 */ if (!fC) goto L_00491371;
L_0049136a:; BB(0x0049136a);
    /* 0049136a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0049136c: fstp dword ptr [esi + 0x5c] */ W_F32((u32)(r_esi+0x5cu), ST(0)); FPOP();
    /* 0049136f: jmp 0x491376 */ goto L_00491376;
L_00491371:; BB(0x00491371);
    /* 00491371: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00491373: fstp dword ptr [esi + 0x5c] */ W_F32((u32)(r_esi+0x5cu), ST(0)); FPOP();
L_00491376:; BB(0x00491376);
    /* 00491376: fld dword ptr [0xa4722c] */ FPUSH(R_F32((u32)(0xa4722cu)));
    /* 0049137c: fadd dword ptr [esi + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x58u));
    /* 0049137f: fcom dword ptr [esi + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x2cu))); 
    /* 00491382: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491384: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00491387: fstp dword ptr [esi + 0x58] */ W_F32((u32)(r_esi+0x58u), ST(0)); FPOP();
    /* 0049138a: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 0049138d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049138e: jbe 0x490da4 */ if ((fC||fZ)) goto L_00490da4;
L_00491394:; BB(0x00491394);
    /* 00491394: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00491398: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049139d: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004913a1: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004913a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004913a8: mov esp, ebx */ r_esp = r_ebx;
    /* 004913aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004913ab: ret  */ FN_RET(0x00490d8c); r_esp += 4; return;
}

