#include "protos.h"

void f_006a0000(void)
{
    FN_ENTER(0x006a0000);
    /* 006a0000: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006a0003: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 006a0007: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a000cu); f_008003e0();
    /* 006a000c: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a000f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0010: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0011: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0012: ret 4 */ FN_RET(0x006a0000); r_esp += 8; return;
}

void f_006a0015(void)
{
    FN_ENTER(0x006a0015);
    /* 006a0015: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0017: call 0x6a0084 */ r_esp -= 4; W32(r_esp, 0x6a001cu); f_006a0084();
    /* 006a001c: jmp 0x6a0078 */ goto L_006a0078;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x006a0015); r_esp += 8; return;
}

void f_006a001e(void)
{
    FN_ENTER(0x006a001e);
    /* 006a001e: mov edx, dword ptr [ebp + 0x634] */ r_edx = R32((u32)(r_ebp+0x634u));
    /* 006a0024: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a0026: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a002c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a002e: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a0034: je 0x6a0078 */ if (fZ) goto L_006a0078;
L_006a0036:; BB(0x006a0036);
    /* 006a0036: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 006a003c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a003e: je 0x6a0047 */ if (fZ) goto L_006a0047;
L_006a0040:; BB(0x006a0040);
    /* 006a0040: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0045: jmp 0x6a0049 */ goto L_006a0049;
L_006a0047:; BB(0x006a0047);
    /* 006a0047: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a0049:; BB(0x006a0049);
    /* 006a0049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a004b: jne 0x6a0078 */ if (!fZ) goto L_006a0078;
L_006a004d:; BB(0x006a004d);
    /* 006a004d: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a0052: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0057: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a005cu); f_0070a60c();
    /* 006a005c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a005f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0062: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0063: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0064: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0065: ret 4 */ FN_RET(0x006a001e); r_esp += 8; return;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x006a001e); r_esp += 8; return;
}

void f_006a0020(void)
{
    FN_ENTER(0x006a0020);
    /* 006a0020: xor al, 6 */ {  u32 a = (u8)r_eax; u32 b = 0x6u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006a0022: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006a0024: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a0026: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a002c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a002e: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a0034: je 0x6a0078 */ if (fZ) goto L_006a0078;
L_006a0036:; BB(0x006a0036);
    /* 006a0036: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 006a003c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a003e: je 0x6a0047 */ if (fZ) goto L_006a0047;
L_006a0040:; BB(0x006a0040);
    /* 006a0040: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0045: jmp 0x6a0049 */ goto L_006a0049;
L_006a0047:; BB(0x006a0047);
    /* 006a0047: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a0049:; BB(0x006a0049);
    /* 006a0049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a004b: jne 0x6a0078 */ if (!fZ) goto L_006a0078;
L_006a004d:; BB(0x006a004d);
    /* 006a004d: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a0052: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0057: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a005cu); f_0070a60c();
    /* 006a005c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a005f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0062: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0063: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0064: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0065: ret 4 */ FN_RET(0x006a0020); r_esp += 8; return;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x006a0020); r_esp += 8; return;
}

void f_006a004a(void)
{
    FN_ENTER(0x006a004a);
    /* 006a004a: sal byte ptr [ebp + 0x2b], 0x68 */ { u32 ad = (u32)(r_ebp+0x2bu); u32 c = (8u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 006a004e: sub al, 0x43 */ {  u32 a = (u8)r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006a0050: test eax, 0x43306800 */ {  u32 a = r_eax; u32 b = 0x43306800u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006a0055: test eax, 0xa5b0e800 */ {  u32 a = r_eax; u32 b = 0xa5b0e800u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006a005a: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006a005b: add byte ptr [ebx - 0x3b7cf73c], al */ { u32 ad = (u32)(r_ebx+0xc48308c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006a0061: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006a0062: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0063: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0064: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0065: ret 4 */ FN_RET(0x006a004a); r_esp += 8; return;
}

void f_006a005f(void)
{
    FN_ENTER(0x006a005f);
    /* 006a005f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0062: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0063: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0064: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0065: ret 4 */ FN_RET(0x006a005f); r_esp += 8; return;
}

void f_006a0068(void)
{
    FN_ENTER(0x006a0068);
    /* 006a0068: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a006a: call 0x6a00ac */ r_esp -= 4; W32(r_esp, 0x6a006fu); f_006a00ac();
    /* 006a006f: jmp 0x6a0078 */ goto L_006a0078;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x006a0068); r_esp += 8; return;
}

void f_006a0071(void)
{
    FN_ENTER(0x006a0071);
    /* 006a0071: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0073: call 0x6a03f0 */ r_esp -= 4; W32(r_esp, 0x6a0078u); f_006a03f0();
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x006a0071); r_esp += 8; return;
}

void f_006a0078(void)
{
    FN_ENTER(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x006a0078); r_esp += 8; return;
}

void f_006a0084(void) /* sub_6A0084 */
{
    FN_ENTER(0x006a0084);
    /* 006a0084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0085: mov esi, ecx */ r_esi = r_ecx;
    /* 006a0087: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 006a008e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a0091: je 0x6a0095 */ if (fZ) goto L_006a0095;
L_006a0093:; BB(0x006a0093);
    /* 006a0093: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0094: ret  */ FN_RET(0x006a0084); r_esp += 4; return;
L_006a0095:; BB(0x006a0095);
    /* 006a0095: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0097: call 0x7aa484 */ r_esp -= 4; W32(r_esp, 0x6a009cu); f_007aa484();
    /* 006a009c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a009e: je 0x6a0093 */ if (fZ) goto L_006a0093;
L_006a00a0:; BB(0x006a00a0);
    /* 006a00a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a00a2: mov ecx, esi */ r_ecx = r_esi;
    /* 006a00a4: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a00a9u); f_006a1ac0();
    /* 006a00a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a00aa: ret  */ FN_RET(0x006a0084); r_esp += 4; return;
}

void f_006a00ac(void) /* sub_6A00AC */
{
    FN_ENTER(0x006a00ac);
    /* 006a00ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a00ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a00ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a00af: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a00b2: mov edi, ecx */ r_edi = r_ecx;
    /* 006a00b4: push dword ptr [edi + 0x3fc] */ { u32 v = R32((u32)(r_edi+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a00ba: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a00bd: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x6a00c2u); f_007a8cb8();
    /* 006a00c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a00c3: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 006a00c6: call 0x6ac778 */ r_esp -= 4; W32(r_esp, 0x6a00cbu); f_006ac778();
    /* 006a00cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a00ce: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 006a00d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00d7: je 0x6a0258 */ if (fZ) goto L_006a0258;
L_006a00dd:; BB(0x006a00dd);
    /* 006a00dd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00e0: je 0x6a01c3 */ if (fZ) goto L_006a01c3;
L_006a00e6:; BB(0x006a00e6);
    /* 006a00e6: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00e9: je 0x6a014c */ if (fZ) goto L_006a014c;
L_006a00eb:; BB(0x006a00eb);
    /* 006a00eb: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00ee: je 0x6a0108 */ if (fZ) goto L_006a0108;
L_006a00f0:; BB(0x006a00f0);
    /* 006a00f0: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00f3: jne 0x6a0108 */ if (!fZ) goto L_006a0108;
L_006a00f5:; BB(0x006a00f5);
    /* 006a00f5: mov eax, dword ptr [edi + 0x46c] */ r_eax = R32((u32)(r_edi+0x46cu));
    /* 006a00fb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a00fe: mov dword ptr [edi + 0x46c], eax */ W32((u32)(r_edi+0x46cu), r_eax);
    /* 006a0104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a0106: jl 0x6a0121 */ if ((fS!=fO)) goto L_006a0121;
L_006a0108:; BB(0x006a0108);
    /* 006a0108: mov ecx, edi */ r_ecx = r_edi;
    /* 006a010a: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x6a010fu); f_00693844();
    /* 006a010f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0111: jne 0x6a011a */ if (!fZ) goto L_006a011a;
L_006a0113:; BB(0x006a0113);
    /* 006a0113: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0115: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x6a011au); f_00777724();
L_006a011a:; BB(0x006a011a);
    /* 006a011a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a011d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a011e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a011f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0120: ret  */ FN_RET(0x006a00ac); r_esp += 4; return;
L_006a0121:; BB(0x006a0121);
    /* 006a0121: mov eax, 5 */ r_eax = 0x5u;
    /* 006a0126: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a012d: mov ecx, edi */ r_ecx = r_edi;
    /* 006a012f: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a0134u); f_0069d1bc();
    /* 006a0134: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 006a013b: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a0141: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a0144: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006a014a: jmp 0x6a0108 */ goto L_006a0108;
L_006a014c:; BB(0x006a014c);
    /* 006a014c: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 006a014f: mov eax, dword ptr [edi + 0x324] */ r_eax = R32((u32)(r_edi+0x324u));
    /* 006a0155: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0157: je 0x6a016f */ if (fZ) goto L_006a016f;
L_006a0159:; BB(0x006a0159);
    /* 006a0159: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006a015d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a015f: jle 0x6a016f */ if ((fZ||fS!=fO)) goto L_006a016f;
L_006a0161:; BB(0x006a0161);
    /* 006a0161: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006a0164: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006a0167: fmul dword ptr [0x93d9d8] */ ST(0) = ST(0) * R_F32((u32)(0x93d9d8u));
    /* 006a016d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_006a016f:; BB(0x006a016f);
    /* 006a016f: fcomp dword ptr [edi + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xc0u))); FPOP();
    /* 006a0175: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a0177: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a0178: ja 0x6a0108 */ if ((!fC&&!fZ)) goto L_006a0108;
L_006a017a:; BB(0x006a017a);
    /* 006a017a: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 006a0180: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 006a0186: movsx esi, word ptr [edi + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006a018d: mov eax, 3 */ r_eax = 0x3u;
    /* 006a0192: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a0199: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a019f: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 006a01a5: or ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006a01a8: mov dword ptr [edi + 0xb0], ebp */ W32((u32)(r_edi+0xb0u), r_ebp);
    /* 006a01ae: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a01b1: je 0x6a0108 */ if (fZ) goto L_006a0108;
L_006a01b7:; BB(0x006a01b7);
    /* 006a01b7: mov ecx, edi */ r_ecx = r_edi;
    /* 006a01b9: call 0x6a031c */ r_esp -= 4; W32(r_esp, 0x6a01beu); f_006a031c();
    /* 006a01be: jmp 0x6a0108 */ goto L_006a0108;
L_006a01c3:; BB(0x006a01c3);
    /* 006a01c3: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a01c9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a01cb: je 0x6a01d5 */ if (fZ) goto L_006a01d5;
L_006a01cd:; BB(0x006a01cd);
    /* 006a01cd: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 006a01d3: jmp 0x6a0227 */ goto L_006a0227;
L_006a01d5:; BB(0x006a01d5);
    /* 006a01d5: fld dword ptr [0x93d9d4] */ FPUSH(R_F32((u32)(0x93d9d4u)));
    /* 006a01db: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a01de: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006a01e4: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 006a01ea: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 006a01ed: fadd dword ptr [edi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc0u));
    /* 006a01f3: fst dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0));
    /* 006a01f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a01fb: fcom dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); 
    /* 006a01fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a0200: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a0201: jae 0x6a0219 */ if (!fC) goto L_006a0219;
L_006a0203:; BB(0x006a0203);
    /* 006a0203: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a0205: fcomp dword ptr [0x93d9cc] */ fx_compare(ST(0), R_F32((u32)(0x93d9ccu))); FPOP();
    /* 006a020b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a020d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a020e: jb 0x6a0227 */ if (fC) goto L_006a0227;
L_006a0210:; BB(0x006a0210);
    /* 006a0210: mov dword ptr [edx + 0x14], 0xbd4ccccd */ W32((u32)(r_edx+0x14u), 0xbd4ccccdu);
    /* 006a0217: jmp 0x6a0227 */ goto L_006a0227;
L_006a0219:; BB(0x006a0219);
    /* 006a0219: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006a021b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a021d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a021e: jbe 0x6a0227 */ if ((fC||fZ)) goto L_006a0227;
L_006a0220:; BB(0x006a0220);
    /* 006a0220: mov dword ptr [edx + 0x14], 0x3d4ccccd */ W32((u32)(r_edx+0x14u), 0x3d4ccccdu);
L_006a0227:; BB(0x006a0227);
    /* 006a0227: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006a022a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a022d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006a0230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a0232: jge 0x6a0108 */ if ((fS==fO)) goto L_006a0108;
L_006a0238:; BB(0x006a0238);
    /* 006a0238: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 006a023e: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0243: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a024a: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a024d: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 006a0253: jmp 0x6a0108 */ goto L_006a0108;
L_006a0258:; BB(0x006a0258);
    /* 006a0258: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 006a025e: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0263: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a026a: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a0270: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 006a0276: lea esi, [edi + 0x460] */ r_esi = (u32)(r_edi+0x460u);
    /* 006a027c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a027e: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x6a0283u); f_006acf24();
    /* 006a0283: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0284: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0288: call 0x6e104c */ r_esp -= 4; W32(r_esp, 0x6a028du); f_006e104c();
    /* 006a028d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a0290: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0292: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x6a0297u); f_006acf24();
    /* 006a0297: mov ebp, eax */ r_ebp = r_eax;
    /* 006a0299: mov ecx, esi */ r_ecx = r_esi;
    /* 006a029b: call 0x6ace74 */ r_esp -= 4; W32(r_esp, 0x6a02a0u); f_006ace74();
    /* 006a02a0: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a02a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a02a5: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006a02a8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006a02ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a02ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a02ad: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6a02b2u); f_006ded14();
    /* 006a02b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a02b5: movsx edx, word ptr [eax + 0x12] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x12u));
    /* 006a02b9: mov eax, dword ptr [edi + 0x324] */ r_eax = R32((u32)(r_edi+0x324u));
    /* 006a02bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a02c1: je 0x6a0306 */ if (fZ) goto L_006a0306;
L_006a02c3:; BB(0x006a02c3);
    /* 006a02c3: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006a02c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a02c9: jle 0x6a0306 */ if ((fZ||fS!=fO)) goto L_006a0306;
L_006a02cb:; BB(0x006a02cb);
    /* 006a02cb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006a02cf: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006a02d3: fmul dword ptr [0x93d9d8] */ ST(0) = ST(0) * R_F32((u32)(0x93d9d8u));
    /* 006a02d9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006a02dd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006a02e1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a02e3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006a02e7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006a02ec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a02f1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006a02f5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006a02f9: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 006a02fd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006a0301: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
L_006a0306:; BB(0x006a0306);
    /* 006a0306: mov dword ptr [edi + 0x474], 0x3d4ccccd */ W32((u32)(r_edi+0x474u), 0x3d4ccccdu);
    /* 006a0310: mov dword ptr [edi + 0x46c], edx */ W32((u32)(r_edi+0x46cu), r_edx);
    /* 006a0316: jmp 0x6a0108 */ goto L_006a0108;
}

void f_006a00c9(void)
{
    FN_ENTER(0x006a00c9);
    /* 006a00c9: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006a00cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a00ce: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 006a00d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00d7: je 0x6a0258 */ if (fZ) goto L_006a0258;
L_006a00dd:; BB(0x006a00dd);
    /* 006a00dd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00e0: je 0x6a01c3 */ if (fZ) goto L_006a01c3;
L_006a00e6:; BB(0x006a00e6);
    /* 006a00e6: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00e9: je 0x6a014c */ if (fZ) goto L_006a014c;
L_006a00eb:; BB(0x006a00eb);
    /* 006a00eb: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00ee: je 0x6a0108 */ if (fZ) goto L_006a0108;
L_006a00f0:; BB(0x006a00f0);
    /* 006a00f0: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a00f3: jne 0x6a0108 */ if (!fZ) goto L_006a0108;
L_006a00f5:; BB(0x006a00f5);
    /* 006a00f5: mov eax, dword ptr [edi + 0x46c] */ r_eax = R32((u32)(r_edi+0x46cu));
    /* 006a00fb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a00fe: mov dword ptr [edi + 0x46c], eax */ W32((u32)(r_edi+0x46cu), r_eax);
    /* 006a0104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a0106: jl 0x6a0121 */ if ((fS!=fO)) goto L_006a0121;
L_006a0108:; BB(0x006a0108);
    /* 006a0108: mov ecx, edi */ r_ecx = r_edi;
    /* 006a010a: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x6a010fu); f_00693844();
    /* 006a010f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0111: jne 0x6a011a */ if (!fZ) goto L_006a011a;
L_006a0113:; BB(0x006a0113);
    /* 006a0113: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0115: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x6a011au); f_00777724();
L_006a011a:; BB(0x006a011a);
    /* 006a011a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a011d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a011e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a011f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0120: ret  */ FN_RET(0x006a00c9); r_esp += 4; return;
L_006a0121:; BB(0x006a0121);
    /* 006a0121: mov eax, 5 */ r_eax = 0x5u;
    /* 006a0126: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a012d: mov ecx, edi */ r_ecx = r_edi;
    /* 006a012f: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a0134u); f_0069d1bc();
    /* 006a0134: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 006a013b: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a0141: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a0144: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006a014a: jmp 0x6a0108 */ goto L_006a0108;
L_006a014c:; BB(0x006a014c);
    /* 006a014c: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 006a014f: mov eax, dword ptr [edi + 0x324] */ r_eax = R32((u32)(r_edi+0x324u));
    /* 006a0155: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0157: je 0x6a016f */ if (fZ) goto L_006a016f;
L_006a0159:; BB(0x006a0159);
    /* 006a0159: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006a015d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a015f: jle 0x6a016f */ if ((fZ||fS!=fO)) goto L_006a016f;
L_006a0161:; BB(0x006a0161);
    /* 006a0161: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006a0164: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006a0167: fmul dword ptr [0x93d9d8] */ ST(0) = ST(0) * R_F32((u32)(0x93d9d8u));
    /* 006a016d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_006a016f:; BB(0x006a016f);
    /* 006a016f: fcomp dword ptr [edi + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xc0u))); FPOP();
    /* 006a0175: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a0177: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a0178: ja 0x6a0108 */ if ((!fC&&!fZ)) goto L_006a0108;
L_006a017a:; BB(0x006a017a);
    /* 006a017a: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 006a0180: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 006a0186: movsx esi, word ptr [edi + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006a018d: mov eax, 3 */ r_eax = 0x3u;
    /* 006a0192: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a0199: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a019f: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 006a01a5: or ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006a01a8: mov dword ptr [edi + 0xb0], ebp */ W32((u32)(r_edi+0xb0u), r_ebp);
    /* 006a01ae: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a01b1: je 0x6a0108 */ if (fZ) goto L_006a0108;
L_006a01b7:; BB(0x006a01b7);
    /* 006a01b7: mov ecx, edi */ r_ecx = r_edi;
    /* 006a01b9: call 0x6a031c */ r_esp -= 4; W32(r_esp, 0x6a01beu); f_006a031c();
    /* 006a01be: jmp 0x6a0108 */ goto L_006a0108;
L_006a01c3:; BB(0x006a01c3);
    /* 006a01c3: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a01c9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a01cb: je 0x6a01d5 */ if (fZ) goto L_006a01d5;
L_006a01cd:; BB(0x006a01cd);
    /* 006a01cd: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 006a01d3: jmp 0x6a0227 */ goto L_006a0227;
L_006a01d5:; BB(0x006a01d5);
    /* 006a01d5: fld dword ptr [0x93d9d4] */ FPUSH(R_F32((u32)(0x93d9d4u)));
    /* 006a01db: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a01de: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006a01e4: lea edx, [edi + 0x460] */ r_edx = (u32)(r_edi+0x460u);
    /* 006a01ea: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 006a01ed: fadd dword ptr [edi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc0u));
    /* 006a01f3: fst dword ptr [edi + 0xc0] */ W_F32((u32)(r_edi+0xc0u), ST(0));
    /* 006a01f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a01fb: fcom dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); 
    /* 006a01fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a0200: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a0201: jae 0x6a0219 */ if (!fC) goto L_006a0219;
L_006a0203:; BB(0x006a0203);
    /* 006a0203: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a0205: fcomp dword ptr [0x93d9cc] */ fx_compare(ST(0), R_F32((u32)(0x93d9ccu))); FPOP();
    /* 006a020b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a020d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a020e: jb 0x6a0227 */ if (fC) goto L_006a0227;
L_006a0210:; BB(0x006a0210);
    /* 006a0210: mov dword ptr [edx + 0x14], 0xbd4ccccd */ W32((u32)(r_edx+0x14u), 0xbd4ccccdu);
    /* 006a0217: jmp 0x6a0227 */ goto L_006a0227;
L_006a0219:; BB(0x006a0219);
    /* 006a0219: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006a021b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a021d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a021e: jbe 0x6a0227 */ if ((fC||fZ)) goto L_006a0227;
L_006a0220:; BB(0x006a0220);
    /* 006a0220: mov dword ptr [edx + 0x14], 0x3d4ccccd */ W32((u32)(r_edx+0x14u), 0x3d4ccccdu);
L_006a0227:; BB(0x006a0227);
    /* 006a0227: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006a022a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a022d: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006a0230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a0232: jge 0x6a0108 */ if ((fS==fO)) goto L_006a0108;
L_006a0238:; BB(0x006a0238);
    /* 006a0238: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 006a023e: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0243: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a024a: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a024d: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 006a0253: jmp 0x6a0108 */ goto L_006a0108;
L_006a0258:; BB(0x006a0258);
    /* 006a0258: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 006a025e: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0263: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a026a: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a0270: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 006a0276: lea esi, [edi + 0x460] */ r_esi = (u32)(r_edi+0x460u);
    /* 006a027c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a027e: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x6a0283u); f_006acf24();
    /* 006a0283: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0284: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0288: call 0x6e104c */ r_esp -= 4; W32(r_esp, 0x6a028du); f_006e104c();
    /* 006a028d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a0290: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0292: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x6a0297u); f_006acf24();
    /* 006a0297: mov ebp, eax */ r_ebp = r_eax;
    /* 006a0299: mov ecx, esi */ r_ecx = r_esi;
    /* 006a029b: call 0x6ace74 */ r_esp -= 4; W32(r_esp, 0x6a02a0u); f_006ace74();
    /* 006a02a0: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a02a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a02a5: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 006a02a8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006a02ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a02ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a02ad: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6a02b2u); f_006ded14();
    /* 006a02b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a02b5: movsx edx, word ptr [eax + 0x12] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x12u));
    /* 006a02b9: mov eax, dword ptr [edi + 0x324] */ r_eax = R32((u32)(r_edi+0x324u));
    /* 006a02bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a02c1: je 0x6a0306 */ if (fZ) goto L_006a0306;
L_006a02c3:; BB(0x006a02c3);
    /* 006a02c3: movsx eax, word ptr [eax + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006a02c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a02c9: jle 0x6a0306 */ if ((fZ||fS!=fO)) goto L_006a0306;
L_006a02cb:; BB(0x006a02cb);
    /* 006a02cb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006a02cf: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006a02d3: fmul dword ptr [0x93d9d8] */ ST(0) = ST(0) * R_F32((u32)(0x93d9d8u));
    /* 006a02d9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006a02dd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006a02e1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a02e3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006a02e7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006a02ec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a02f1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006a02f5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006a02f9: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 006a02fd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006a0301: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
L_006a0306:; BB(0x006a0306);
    /* 006a0306: mov dword ptr [edi + 0x474], 0x3d4ccccd */ W32((u32)(r_edi+0x474u), 0x3d4ccccdu);
    /* 006a0310: mov dword ptr [edi + 0x46c], edx */ W32((u32)(r_edi+0x46cu), r_edx);
    /* 006a0316: jmp 0x6a0108 */ goto L_006a0108;
}

void f_006a031c(void) /* sub_6A031C */
{
    FN_ENTER(0x006a031c);
    /* 006a031c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a031d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a031e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a031f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a0322: mov edi, ecx */ r_edi = r_ecx;
    /* 006a0324: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0326: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x6a032bu); f_0068a3fc();
    /* 006a032b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a032d: je 0x6a03e6 */ if (fZ) goto L_006a03e6;
L_006a0333:; BB(0x006a0333);
    /* 006a0333: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0335: je 0x6a034a */ if (fZ) goto L_006a034a;
L_006a0337:; BB(0x006a0337);
    /* 006a0337: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006a033e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0341: jne 0x6a034a */ if (!fZ) goto L_006a034a;
L_006a0343:; BB(0x006a0343);
    /* 006a0343: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0346: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0347: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0348: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0349: ret  */ FN_RET(0x006a031c); r_esp += 4; return;
L_006a034a:; BB(0x006a034a);
    /* 006a034a: mov eax, 4 */ r_eax = 0x4u;
    /* 006a034f: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a0356: lea esi, [edi + 0x460] */ r_esi = (u32)(r_edi+0x460u);
    /* 006a035c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a035e: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x6a0363u); f_006acf24();
    /* 006a0363: mov ebx, eax */ r_ebx = r_eax;
    /* 006a0365: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0367: call 0x6ace74 */ r_esp -= 4; W32(r_esp, 0x6a036cu); f_006ace74();
    /* 006a036c: mov ecx, eax */ r_ecx = r_eax;
    /* 006a036e: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a0372: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0373: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 006a0376: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006a0379: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a037a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a037b: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6a0380u); f_006ded14();
    /* 006a0380: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a0383: movzx edx, word ptr [eax + 0x10] */ r_edx = (u32)R16((u32)(r_eax+0x10u));
    /* 006a0387: movzx eax, word ptr [edi + 0x336] */ r_eax = (u32)R16((u32)(r_edi+0x336u));
    /* 006a038e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a0390: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0393: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a0395: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a0397: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0399: jg 0x6a039d */ if ((!fZ&&fS==fO)) goto L_006a039d;
L_006a039b:; BB(0x006a039b);
    /* 006a039b: mov eax, edx */ r_eax = r_edx;
L_006a039d:; BB(0x006a039d);
    /* 006a039d: mov word ptr [edi + 0x336], ax */ W16((u32)(r_edi+0x336u), (u16)r_eax);
    /* 006a03a4: call 0x6ace74 */ r_esp -= 4; W32(r_esp, 0x6a03a9u); f_006ace74();
    /* 006a03a9: lea esi, [esp + 4] */ r_esi = (u32)(r_esp+0x4u);
    /* 006a03ad: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006a03b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a03b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a03b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a03b3: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x6a03b8u); f_006ad238();
    /* 006a03b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a03bb: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006a03c0: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a03c4: mov byte ptr [esp + 8], 0x48 */ W8((u32)(r_esp+0x8u), 0x48u);
    /* 006a03c9: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 006a03ce: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 006a03d3: mov word ptr [esp + 0xc], bx */ W16((u32)(r_esp+0xcu), (u16)r_ebx);
    /* 006a03d8: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 006a03dd: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 006a03e1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a03e6u); f_008003e0();
L_006a03e6:; BB(0x006a03e6);
    /* 006a03e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a03e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a03ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a03eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a03ec: ret  */ FN_RET(0x006a031c); r_esp += 4; return;
}

void f_006a03f0(void) /* sub_6A03F0 */
{
    FN_ENTER(0x006a03f0);
    /* 006a03f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a03f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a03f2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a03f4: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 006a03fb: mov dword ptr [ebp + 0x348], 8 */ W32((u32)(r_ebp+0x348u), 0x8u);
    /* 006a0405: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a0408: ja 0x6a0533 */ if ((!fC&&!fZ)) goto L_006a0533;
L_006a040e:; BB(0x006a040e);
    /* 006a040e: mov eax, dword ptr [eax*4 + 0x93d500] */ r_eax = R32((u32)(r_eax*4+0x93d500u));
    /* 006a0415: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a03f0); r_esp += 4; return;
}

void f_006a0417(void)
{
    FN_ENTER(0x006a0417);
    /* 006a0417: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0419: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a041b: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x6a0420u); f_0069bdf0();
    /* 006a0420: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0417); r_esp += 4; return;
}

void f_006a0425(void)
{
    FN_ENTER(0x006a0425);
    /* 006a0425: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0427: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0429: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x6a042eu); f_0069c6c0();
    /* 006a042e: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0425); r_esp += 4; return;
}

void f_006a0433(void)
{
    FN_ENTER(0x006a0433);
    /* 006a0433: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0435: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0437: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x6a043cu); f_0069c988();
    /* 006a043c: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0433); r_esp += 4; return;
}

void f_006a0441(void)
{
    FN_ENTER(0x006a0441);
    /* 006a0441: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0443: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0445: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x6a044au); f_0069cd20();
    /* 006a044a: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0441); r_esp += 4; return;
}

void f_006a044f(void)
{
    FN_ENTER(0x006a044f);
    /* 006a044f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0451: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0453: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x6a0458u); f_0069d1e4();
    /* 006a0458: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a044f); r_esp += 4; return;
}

void f_006a045d(void)
{
    FN_ENTER(0x006a045d);
    /* 006a045d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a045f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0461: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x6a0466u); f_0069d43c();
    /* 006a0466: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a045d); r_esp += 4; return;
}

void f_006a046b(void)
{
    FN_ENTER(0x006a046b);
    /* 006a046b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a046d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a046f: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x6a0474u); f_0069d8f4();
    /* 006a0474: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a046b); r_esp += 4; return;
}

void f_006a0479(void)
{
    FN_ENTER(0x006a0479);
    /* 006a0479: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a047b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a047d: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x6a0482u); f_0069dd60();
    /* 006a0482: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0479); r_esp += 4; return;
}

void f_006a0487(void)
{
    FN_ENTER(0x006a0487);
    /* 006a0487: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0489: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a048b: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x6a0490u); f_0069e15c();
    /* 006a0490: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0487); r_esp += 4; return;
}

void f_006a0495(void)
{
    FN_ENTER(0x006a0495);
    /* 006a0495: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0497: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0499: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x6a049eu); f_0069e718();
    /* 006a049e: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0495); r_esp += 4; return;
}

void f_006a04a3(void)
{
    FN_ENTER(0x006a04a3);
    /* 006a04a3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04a7: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x6a04acu); f_0069ebc8();
    /* 006a04ac: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04a3); r_esp += 4; return;
}

void f_006a04b1(void)
{
    FN_ENTER(0x006a04b1);
    /* 006a04b1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04b5: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x6a04bau); f_0069ef04();
    /* 006a04ba: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04b1); r_esp += 4; return;
}

void f_006a04bc(void)
{
    FN_ENTER(0x006a04bc);
    /* 006a04bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04c0: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x6a04c5u); f_0069f148();
    /* 006a04c5: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04bc); r_esp += 4; return;
}

void f_006a04c7(void)
{
    FN_ENTER(0x006a04c7);
    /* 006a04c7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04cb: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x6a04d0u); f_0069f384();
    /* 006a04d0: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04c7); r_esp += 4; return;
}

void f_006a04d2(void)
{
    FN_ENTER(0x006a04d2);
    /* 006a04d2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04d6: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x6a04dbu); f_0069f648();
    /* 006a04db: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04d2); r_esp += 4; return;
}

void f_006a04dd(void)
{
    FN_ENTER(0x006a04dd);
    /* 006a04dd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04e1: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x6a04e6u); f_0069fe2c();
    /* 006a04e6: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04dd); r_esp += 4; return;
}

void f_006a04e8(void)
{
    FN_ENTER(0x006a04e8);
    /* 006a04e8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04ec: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a04f1u); f_006a0624();
    /* 006a04f1: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04e8); r_esp += 4; return;
}

void f_006a04f3(void)
{
    FN_ENTER(0x006a04f3);
    /* 006a04f3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a04f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a04f7: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a04fcu); f_006a0994();
    /* 006a04fc: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04f3); r_esp += 4; return;
}

void f_006a04fe(void)
{
    FN_ENTER(0x006a04fe);
    /* 006a04fe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0500: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0502: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x6a0507u); f_006a0eb8();
    /* 006a0507: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a04fe); r_esp += 4; return;
}

void f_006a0509(void)
{
    FN_ENTER(0x006a0509);
    /* 006a0509: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a050b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a050d: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a0512u); f_006a139c();
    /* 006a0512: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0509); r_esp += 4; return;
}

void f_006a0514(void)
{
    FN_ENTER(0x006a0514);
    /* 006a0514: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0516: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0518: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x6a051du); f_006a1a60();
    /* 006a051d: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0514); r_esp += 4; return;
}

void f_006a051f(void)
{
    FN_ENTER(0x006a051f);
    /* 006a051f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0521: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0523: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a0528u); f_0069b93c();
    /* 006a0528: jmp 0x6a0533 */ goto L_006a0533;
L_006a0533:; BB(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a051f); r_esp += 4; return;
}

void f_006a052a(void)
{
    FN_ENTER(0x006a052a);
    /* 006a052a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a052c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a052e: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a0533u); f_006a1ac0();
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a052a); r_esp += 4; return;
}

void f_006a0533(void)
{
    FN_ENTER(0x006a0533);
    /* 006a0533: movzx esi, word ptr [ebp + 0x480] */ r_esi = (u32)R16((u32)(r_ebp+0x480u));
    /* 006a053a: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0540: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 006a0546: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a054c:; BB(0x006a054c);
    /* 006a054c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a0550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0552: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0554:; BB(0x006a0554);
    /* 006a0554: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x6a0559u); f_006ad204();
    /* 006a0559: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a055e: je 0x6a05cc */ if (fZ) goto L_006a05cc;
L_006a0560:; BB(0x006a0560);
    /* 006a0560: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0561: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a0566u); f_007b4d18();
    /* 006a0566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0569: jne 0x6a0579 */ if (!fZ) goto L_006a0579;
L_006a056b:; BB(0x006a056b);
    /* 006a056b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a0570: mov word ptr [ebp + 0x480], ax */ W16((u32)(r_ebp+0x480u), (u16)r_eax);
    /* 006a0577: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a0579:; BB(0x006a0579);
    /* 006a0579: movsx esi, word ptr [ebp + 0x482] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 006a0580: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006a0583: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0585: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0587: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0589: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a058b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a058d: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 006a0593: mov eax, dword ptr [esi + edx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edx*4+0x1cu));
    /* 006a0597: mov dword ptr [ebp + 0x820], eax */ W32((u32)(r_ebp+0x820u), r_eax);
    /* 006a059d: mov eax, dword ptr [esi + edx*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edx*4+0x20u));
    /* 006a05a1: mov dword ptr [ebp + 0x824], eax */ W32((u32)(r_ebp+0x824u), r_eax);
    /* 006a05a7: mov eax, dword ptr [esi + edx*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edx*4+0x24u));
    /* 006a05ab: mov dword ptr [ebp + 0x828], eax */ W32((u32)(r_ebp+0x828u), r_eax);
    /* 006a05b1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a05b4: lea eax, [ebp + 0x820] */ r_eax = (u32)(r_ebp+0x820u);
    /* 006a05ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a05bc: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a05c1u); f_007a90a8();
    /* 006a05c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a05c4: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a05ca: jmp 0x6a05d5 */ goto L_006a05d5;
L_006a05cc:; BB(0x006a05cc);
    /* 006a05cc: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006a05cf: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
L_006a05d5:; BB(0x006a05d5);
    /* 006a05d5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 006a05d8: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a05dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006a05e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a05e2: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a05e7u); f_0077774c();
    /* 006a05e7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a05ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a05f0: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 006a05f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a05fa: jne 0x6a0608 */ if (!fZ) goto L_006a0608;
L_006a05fc:; BB(0x006a05fc);
    /* 006a05fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a0601: mov word ptr [ebp + 0xba], ax */ W16((u32)(r_ebp+0xbau), (u16)r_eax);
L_006a0608:; BB(0x006a0608);
    /* 006a0608: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a060e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0610: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6a0613u); call_ind(t); }
    /* 006a0613: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0617: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0619: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a061b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0620u); f_00694390();
    /* 006a0620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0621: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0622: ret  */ FN_RET(0x006a0533); r_esp += 4; return;
}

void f_006a0624(void) /* sub_6A0624 */
{
    FN_ENTER(0x006a0624);
    /* 006a0624: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006a0629: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a062c: ja 0x6a06a3 */ if ((!fC&&!fZ)) goto L_006a06a3;
L_006a062e:; BB(0x006a062e);
    /* 006a062e: mov eax, dword ptr [eax*4 + 0x93d564] */ r_eax = R32((u32)(r_eax*4+0x93d564u));
    /* 006a0635: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a06a3:; BB(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a0624); r_esp += 8; return;
}

void f_006a0637(void)
{
    FN_ENTER(0x006a0637);
    /* 006a0637: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x6a063cu); f_0069b720();
    /* 006a063c: jmp 0x6a06a3 */ goto L_006a06a3;
L_006a06a3:; BB(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a0637); r_esp += 8; return;
}

void f_006a063e(void)
{
    FN_ENTER(0x006a063e);
    /* 006a063e: call 0x6a2dc4 */ r_esp -= 4; W32(r_esp, 0x6a0643u); f_006a2dc4();
    /* 006a0643: jmp 0x6a06a3 */ goto L_006a06a3;
L_006a06a3:; BB(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a063e); r_esp += 8; return;
}

void f_006a0645(void)
{
    FN_ENTER(0x006a0645);
    /* 006a0645: call 0x6a06a8 */ r_esp -= 4; W32(r_esp, 0x6a064au); f_006a06a8();
    /* 006a064a: jmp 0x6a06a3 */ goto L_006a06a3;
L_006a06a3:; BB(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a0645); r_esp += 8; return;
}

void f_006a064c(void)
{
    FN_ENTER(0x006a064c);
    /* 006a064c: call 0x6a0770 */ r_esp -= 4; W32(r_esp, 0x6a0651u); f_006a0770();
    /* 006a0651: jmp 0x6a06a3 */ goto L_006a06a3;
L_006a06a3:; BB(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a064c); r_esp += 8; return;
}

void f_006a0653(void)
{
    FN_ENTER(0x006a0653);
    /* 006a0653: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 006a0659: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a065b: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a0661: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0663: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a0669: je 0x6a06a3 */ if (fZ) goto L_006a06a3;
L_006a066b:; BB(0x006a066b);
    /* 006a066b: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 006a0671: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a0673: je 0x6a067c */ if (fZ) goto L_006a067c;
L_006a0675:; BB(0x006a0675);
    /* 006a0675: mov eax, 1 */ r_eax = 0x1u;
    /* 006a067a: jmp 0x6a067e */ goto L_006a067e;
L_006a067c:; BB(0x006a067c);
    /* 006a067c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a067e:; BB(0x006a067e);
    /* 006a067e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0680: jne 0x6a06a3 */ if (!fZ) goto L_006a06a3;
L_006a0682:; BB(0x006a0682);
    /* 006a0682: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a0687: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a068c: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a0691u); f_0070a60c();
    /* 006a0691: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0694: ret 4 */ FN_RET(0x006a0653); r_esp += 8; return;
L_006a06a3:; BB(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a0653); r_esp += 8; return;
}

void f_006a0697(void)
{
    FN_ENTER(0x006a0697);
    /* 006a0697: call 0x698fa8 */ r_esp -= 4; W32(r_esp, 0x6a069cu); f_00698fa8();
    /* 006a069c: jmp 0x6a06a3 */ goto L_006a06a3;
L_006a06a3:; BB(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a0697); r_esp += 8; return;
}

void f_006a069e(void)
{
    FN_ENTER(0x006a069e);
    /* 006a069e: call 0x6a07d8 */ r_esp -= 4; W32(r_esp, 0x6a06a3u); f_006a07d8();
    /* 006a06a3: ret 4 */ FN_RET(0x006a069e); r_esp += 8; return;
}

void f_006a06a3(void)
{
    FN_ENTER(0x006a06a3);
    /* 006a06a3: ret 4 */ FN_RET(0x006a06a3); r_esp += 8; return;
}

void f_006a06a8(void) /* sub_6A06A8 */
{
    FN_ENTER(0x006a06a8);
    /* 006a06a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a06a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a06aa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a06ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a06af: mov eax, dword ptr [ebx + 0x45c] */ r_eax = R32((u32)(r_ebx+0x45cu));
    /* 006a06b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a06b7: je 0x6a0769 */ if (fZ) goto L_006a0769;
L_006a06bd:; BB(0x006a06bd);
    /* 006a06bd: movzx edx, word ptr [eax + 0x1098] */ r_edx = (u32)R16((u32)(r_eax+0x1098u));
    /* 006a06c4: movsx eax, word ptr [eax + 0x109a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x109au));
    /* 006a06cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a06cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a06cd: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x6a06d2u); f_007b9df0();
    /* 006a06d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a06d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a06d7: je 0x6a0710 */ if (fZ) goto L_006a0710;
L_006a06d9:; BB(0x006a06d9);
    /* 006a06d9: mov edi, dword ptr [ebx + 0x45c] */ r_edi = R32((u32)(r_ebx+0x45cu));
    /* 006a06df: movsx edi, word ptr [edi + 0x109a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x109au));
    /* 006a06e6: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006a06ec: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006a06ef: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 006a06f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a06f4: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a06f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a06f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a06fa: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a06fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a06fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0700: lea eax, [edx + eax + 0x1c] */ r_eax = (u32)(r_edx+r_eax+0x1cu);
    /* 006a0704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0705: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0706: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a070bu); f_007a90a8();
    /* 006a070b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a070e: jmp 0x6a0713 */ goto L_006a0713;
L_006a0710:; BB(0x006a0710);
    /* 006a0710: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
L_006a0713:; BB(0x006a0713);
    /* 006a0713: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0714: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0716: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x6a071bu); f_0068c038();
    /* 006a071b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a071d: je 0x6a0731 */ if (fZ) goto L_006a0731;
L_006a071f:; BB(0x006a071f);
    /* 006a071f: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 006a0726: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0729: jne 0x6a0731 */ if (!fZ) goto L_006a0731;
L_006a072b:; BB(0x006a072b);
    /* 006a072b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a072e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a072f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0730: ret  */ FN_RET(0x006a06a8); r_esp += 4; return;
L_006a0731:; BB(0x006a0731);
    /* 006a0731: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006a0735: mov byte ptr [esp], 0x45 */ W8((u32)(r_esp), 0x45u);
    /* 006a0739: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a073b: add ebx, 0x8a4 */ {  u32 a = r_ebx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a0741: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006a0746: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0748: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006a074d: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 006a0752: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006a0757: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a075cu); f_006a2ea4();
    /* 006a075c: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006a0761: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a0764: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a0769u); f_008003e0();
L_006a0769:; BB(0x006a0769);
    /* 006a0769: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a076c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a076d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a076e: ret  */ FN_RET(0x006a06a8); r_esp += 4; return;
}

void f_006a0770(void) /* sub_6A0770 */
{
    FN_ENTER(0x006a0770);
    /* 006a0770: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0771: mov edi, ecx */ r_edi = r_ecx;
    /* 006a0773: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 006a077a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a077d: je 0x6a07c0 */ if (fZ) goto L_006a07c0;
L_006a077f:; BB(0x006a077f);
    /* 006a077f: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a0785: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0787: je 0x6a07be */ if (fZ) goto L_006a07be;
L_006a0789:; BB(0x006a0789);
    /* 006a0789: mov eax, dword ptr [edi + 0x8ac] */ r_eax = R32((u32)(r_edi+0x8acu));
    /* 006a078f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0791: je 0x6a07be */ if (fZ) goto L_006a07be;
L_006a0793:; BB(0x006a0793);
    /* 006a0793: mov eax, 4 */ r_eax = 0x4u;
    /* 006a0798: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 006a079f: mov ecx, edi */ r_ecx = r_edi;
    /* 006a07a1: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a07a6u); f_0069d1bc();
    /* 006a07a6: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 006a07ad: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a07b3: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a07b6: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006a07bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a07bd: ret  */ FN_RET(0x006a0770); r_esp += 4; return;
L_006a07be:; BB(0x006a07be);
    /* 006a07be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a07bf: ret  */ FN_RET(0x006a0770); r_esp += 4; return;
L_006a07c0:; BB(0x006a07c0);
    /* 006a07c0: mov ecx, edi */ r_ecx = r_edi;
    /* 006a07c2: call 0x7aa484 */ r_esp -= 4; W32(r_esp, 0x6a07c7u); f_007aa484();
    /* 006a07c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a07c9: je 0x6a07be */ if (fZ) goto L_006a07be;
L_006a07cb:; BB(0x006a07cb);
    /* 006a07cb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a07cd: mov ecx, edi */ r_ecx = r_edi;
    /* 006a07cf: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a07d4u); f_006a1ac0();
    /* 006a07d4: jmp 0x6a07be */ goto L_006a07be;
}

void f_006a07d8(void) /* sub_6A07D8 */
{
    FN_ENTER(0x006a07d8);
    /* 006a07d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a07d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a07da: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a07dc: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 006a07e3: mov dword ptr [ebp + 0x348], 7 */ W32((u32)(r_ebp+0x348u), 0x7u);
    /* 006a07ed: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a07f0: ja 0x6a091b */ if ((!fC&&!fZ)) goto L_006a091b;
L_006a07f6:; BB(0x006a07f6);
    /* 006a07f6: mov eax, dword ptr [eax*4 + 0x93d5a0] */ r_eax = R32((u32)(r_eax*4+0x93d5a0u));
    /* 006a07fd: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a07d8); r_esp += 4; return;
}

void f_006a07ff(void)
{
    FN_ENTER(0x006a07ff);
    /* 006a07ff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0801: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0803: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x6a0808u); f_0069bdf0();
    /* 006a0808: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a07ff); r_esp += 4; return;
}

void f_006a080d(void)
{
    FN_ENTER(0x006a080d);
    /* 006a080d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a080f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0811: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x6a0816u); f_0069c6c0();
    /* 006a0816: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a080d); r_esp += 4; return;
}

void f_006a081b(void)
{
    FN_ENTER(0x006a081b);
    /* 006a081b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a081d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a081f: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x6a0824u); f_0069c988();
    /* 006a0824: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a081b); r_esp += 4; return;
}

void f_006a0829(void)
{
    FN_ENTER(0x006a0829);
    /* 006a0829: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a082b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a082d: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x6a0832u); f_0069cd20();
    /* 006a0832: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0829); r_esp += 4; return;
}

void f_006a0837(void)
{
    FN_ENTER(0x006a0837);
    /* 006a0837: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0839: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a083b: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x6a0840u); f_0069d1e4();
    /* 006a0840: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0837); r_esp += 4; return;
}

void f_006a0845(void)
{
    FN_ENTER(0x006a0845);
    /* 006a0845: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0847: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0849: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x6a084eu); f_0069d43c();
    /* 006a084e: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0845); r_esp += 4; return;
}

void f_006a0853(void)
{
    FN_ENTER(0x006a0853);
    /* 006a0853: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0855: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0857: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x6a085cu); f_0069d8f4();
    /* 006a085c: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0853); r_esp += 4; return;
}

void f_006a0861(void)
{
    FN_ENTER(0x006a0861);
    /* 006a0861: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0863: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0865: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x6a086au); f_0069dd60();
    /* 006a086a: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0861); r_esp += 4; return;
}

void f_006a086f(void)
{
    FN_ENTER(0x006a086f);
    /* 006a086f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0871: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0873: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x6a0878u); f_0069e15c();
    /* 006a0878: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a086f); r_esp += 4; return;
}

void f_006a087d(void)
{
    FN_ENTER(0x006a087d);
    /* 006a087d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a087f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0881: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x6a0886u); f_0069e718();
    /* 006a0886: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a087d); r_esp += 4; return;
}

void f_006a088b(void)
{
    FN_ENTER(0x006a088b);
    /* 006a088b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a088d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a088f: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x6a0894u); f_0069ebc8();
    /* 006a0894: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a088b); r_esp += 4; return;
}

void f_006a0899(void)
{
    FN_ENTER(0x006a0899);
    /* 006a0899: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a089b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a089d: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x6a08a2u); f_0069ef04();
    /* 006a08a2: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0899); r_esp += 4; return;
}

void f_006a08a4(void)
{
    FN_ENTER(0x006a08a4);
    /* 006a08a4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08a8: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x6a08adu); f_0069f148();
    /* 006a08ad: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08a4); r_esp += 4; return;
}

void f_006a08af(void)
{
    FN_ENTER(0x006a08af);
    /* 006a08af: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08b3: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x6a08b8u); f_0069f384();
    /* 006a08b8: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08af); r_esp += 4; return;
}

void f_006a08ba(void)
{
    FN_ENTER(0x006a08ba);
    /* 006a08ba: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08be: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x6a08c3u); f_0069f648();
    /* 006a08c3: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08ba); r_esp += 4; return;
}

void f_006a08c5(void)
{
    FN_ENTER(0x006a08c5);
    /* 006a08c5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08c9: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x6a08ceu); f_0069fe2c();
    /* 006a08ce: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08c5); r_esp += 4; return;
}

void f_006a08d0(void)
{
    FN_ENTER(0x006a08d0);
    /* 006a08d0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08d4: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a08d9u); f_006a0624();
    /* 006a08d9: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08d0); r_esp += 4; return;
}

void f_006a08db(void)
{
    FN_ENTER(0x006a08db);
    /* 006a08db: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08dd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08df: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a08e4u); f_006a0994();
    /* 006a08e4: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08db); r_esp += 4; return;
}

void f_006a08e6(void)
{
    FN_ENTER(0x006a08e6);
    /* 006a08e6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08ea: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x6a08efu); f_006a0eb8();
    /* 006a08ef: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08e6); r_esp += 4; return;
}

void f_006a08f1(void)
{
    FN_ENTER(0x006a08f1);
    /* 006a08f1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08f3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a08f5: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a08fau); f_006a139c();
    /* 006a08fa: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08f1); r_esp += 4; return;
}

void f_006a08fc(void)
{
    FN_ENTER(0x006a08fc);
    /* 006a08fc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a08fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0900: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x6a0905u); f_006a1a60();
    /* 006a0905: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a08fc); r_esp += 4; return;
}

void f_006a0907(void)
{
    FN_ENTER(0x006a0907);
    /* 006a0907: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0909: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a090b: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a0910u); f_0069b93c();
    /* 006a0910: jmp 0x6a091b */ goto L_006a091b;
L_006a091b:; BB(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0907); r_esp += 4; return;
}

void f_006a0912(void)
{
    FN_ENTER(0x006a0912);
    /* 006a0912: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0914: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0916: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a091bu); f_006a1ac0();
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a0912); r_esp += 4; return;
}

void f_006a091b(void)
{
    FN_ENTER(0x006a091b);
    /* 006a091b: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0923: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0928u); f_006a2ea4();
    /* 006a0928: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a092f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0931: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0936u); f_006a2e8c();
    /* 006a0936: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a093c: mov eax, 2 */ r_eax = 0x2u;
    /* 006a0941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0946: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a094bu); f_006a2f54();
    /* 006a094b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a094d: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0952u); f_006a2d44();
    /* 006a0952: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a095a: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6a095du); call_ind(t); }
    /* 006a095d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0961: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0965: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a096au); f_00694390();
    /* 006a096a: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0971: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0977: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0979: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a097d: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0989: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a098eu); f_00690300();
    /* 006a098e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a098f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0990: ret  */ FN_RET(0x006a091b); r_esp += 4; return;
}

void f_006a0994(void) /* sub_6A0994 */
{
    FN_ENTER(0x006a0994);
    /* 006a0994: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0995: mov edi, ecx */ r_edi = r_ecx;
    /* 006a0997: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 006a099c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a099f: ja 0x6a0a2e */ if ((!fC&&!fZ)) goto L_006a0a2e;
L_006a09a5:; BB(0x006a09a5);
    /* 006a09a5: mov eax, dword ptr [eax*4 + 0x93d604] */ r_eax = R32((u32)(r_eax*4+0x93d604u));
    /* 006a09ac: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a0a2e:; BB(0x006a0a2e);
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a0994); r_esp += 8; return;
}

void f_006a09ae(void)
{
    FN_ENTER(0x006a09ae);
    /* 006a09ae: mov ecx, edi */ r_ecx = r_edi;
    /* 006a09b0: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x6a09b5u); f_0069b720();
    /* 006a09b5: jmp 0x6a0a2e */ goto L_006a0a2e;
L_006a0a2e:; BB(0x006a0a2e);
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a09ae); r_esp += 8; return;
}

void f_006a09b7(void)
{
    FN_ENTER(0x006a09b7);
    /* 006a09b7: mov ecx, edi */ r_ecx = r_edi;
    /* 006a09b9: call 0x6a2dc4 */ r_esp -= 4; W32(r_esp, 0x6a09beu); f_006a2dc4();
    /* 006a09be: jmp 0x6a0a2e */ goto L_006a0a2e;
L_006a0a2e:; BB(0x006a0a2e);
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a09b7); r_esp += 8; return;
}

void f_006a09c0(void)
{
    FN_ENTER(0x006a09c0);
    /* 006a09c0: mov ecx, edi */ r_ecx = r_edi;
    /* 006a09c2: call 0x6a0a34 */ r_esp -= 4; W32(r_esp, 0x6a09c7u); f_006a0a34();
    /* 006a09c7: jmp 0x6a0a2e */ goto L_006a0a2e;
L_006a0a2e:; BB(0x006a0a2e);
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a09c0); r_esp += 8; return;
}

void f_006a09c9(void)
{
    FN_ENTER(0x006a09c9);
    /* 006a09c9: mov ecx, edi */ r_ecx = r_edi;
    /* 006a09cb: call 0x6a0afc */ r_esp -= 4; W32(r_esp, 0x6a09d0u); f_006a0afc();
    /* 006a09d0: jmp 0x6a0a2e */ goto L_006a0a2e;
L_006a0a2e:; BB(0x006a0a2e);
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a09c9); r_esp += 8; return;
}

void f_006a09d2(void)
{
    FN_ENTER(0x006a09d2);
    /* 006a09d2: mov edx, dword ptr [edi + 0x634] */ r_edx = R32((u32)(r_edi+0x634u));
    /* 006a09d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a09da: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a09e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a09e2: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a09e8: je 0x6a0a13 */ if (fZ) goto L_006a0a13;
L_006a09ea:; BB(0x006a09ea);
    /* 006a09ea: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006a09f0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a09f2: je 0x6a09fb */ if (fZ) goto L_006a09fb;
L_006a09f4:; BB(0x006a09f4);
    /* 006a09f4: mov eax, 1 */ r_eax = 0x1u;
    /* 006a09f9: jmp 0x6a09fd */ goto L_006a09fd;
L_006a09fb:; BB(0x006a09fb);
    /* 006a09fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a09fd:; BB(0x006a09fd);
    /* 006a09fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a09ff: jne 0x6a0a13 */ if (!fZ) goto L_006a0a13;
L_006a0a01:; BB(0x006a0a01);
    /* 006a0a01: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a06: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a0b: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a0a10u); f_0070a60c();
    /* 006a0a10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a0a13:; BB(0x006a0a13);
    /* 006a0a13: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0a15: call 0x6a0b88 */ r_esp -= 4; W32(r_esp, 0x6a0a1au); f_006a0b88();
    /* 006a0a1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a1b: ret 4 */ FN_RET(0x006a09d2); r_esp += 8; return;
}

void f_006a0a1e(void)
{
    FN_ENTER(0x006a0a1e);
    /* 006a0a1e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0a20: call 0x698fa8 */ r_esp -= 4; W32(r_esp, 0x6a0a25u); f_00698fa8();
    /* 006a0a25: jmp 0x6a0a2e */ goto L_006a0a2e;
L_006a0a2e:; BB(0x006a0a2e);
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a0a1e); r_esp += 8; return;
}

void f_006a0a27(void)
{
    FN_ENTER(0x006a0a27);
    /* 006a0a27: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0a29: call 0x6a0cfc */ r_esp -= 4; W32(r_esp, 0x6a0a2eu); f_006a0cfc();
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a0a27); r_esp += 8; return;
}

void f_006a0a2e(void)
{
    FN_ENTER(0x006a0a2e);
    /* 006a0a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0a2f: ret 4 */ FN_RET(0x006a0a2e); r_esp += 8; return;
}

void f_006a0a34(void) /* sub_6A0A34 */
{
    FN_ENTER(0x006a0a34);
    /* 006a0a34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a36: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a0a39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a0a3b: mov eax, dword ptr [ebx + 0x45c] */ r_eax = R32((u32)(r_ebx+0x45cu));
    /* 006a0a41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0a43: je 0x6a0af5 */ if (fZ) goto L_006a0af5;
L_006a0a49:; BB(0x006a0a49);
    /* 006a0a49: movzx edx, word ptr [eax + 0x1098] */ r_edx = (u32)R16((u32)(r_eax+0x1098u));
    /* 006a0a50: movsx eax, word ptr [eax + 0x109a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x109au));
    /* 006a0a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a59: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x6a0a5eu); f_007b9df0();
    /* 006a0a5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a0a61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0a63: je 0x6a0a9c */ if (fZ) goto L_006a0a9c;
L_006a0a65:; BB(0x006a0a65);
    /* 006a0a65: mov edi, dword ptr [ebx + 0x45c] */ r_edi = R32((u32)(r_ebx+0x45cu));
    /* 006a0a6b: movsx edi, word ptr [edi + 0x109a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x109au));
    /* 006a0a72: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006a0a78: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006a0a7b: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 006a0a7e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0a80: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0a82: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0a84: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0a86: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a0a88: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0a8a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0a8c: lea eax, [edx + eax + 0x1c] */ r_eax = (u32)(r_edx+r_eax+0x1cu);
    /* 006a0a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0a92: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a0a97u); f_007a90a8();
    /* 006a0a97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a0a9a: jmp 0x6a0a9f */ goto L_006a0a9f;
L_006a0a9c:; BB(0x006a0a9c);
    /* 006a0a9c: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
L_006a0a9f:; BB(0x006a0a9f);
    /* 006a0a9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0aa0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0aa2: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x6a0aa7u); f_0068c038();
    /* 006a0aa7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0aa9: je 0x6a0abd */ if (fZ) goto L_006a0abd;
L_006a0aab:; BB(0x006a0aab);
    /* 006a0aab: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 006a0ab2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0ab5: jne 0x6a0abd */ if (!fZ) goto L_006a0abd;
L_006a0ab7:; BB(0x006a0ab7);
    /* 006a0ab7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0aba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0abb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0abc: ret  */ FN_RET(0x006a0a34); r_esp += 4; return;
L_006a0abd:; BB(0x006a0abd);
    /* 006a0abd: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006a0ac1: mov byte ptr [esp], 0x44 */ W8((u32)(r_esp), 0x44u);
    /* 006a0ac5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a0ac7: add ebx, 0x8a4 */ {  u32 a = r_ebx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a0acd: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006a0ad2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0ad4: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006a0ad9: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 006a0ade: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006a0ae3: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0ae8u); f_006a2ea4();
    /* 006a0ae8: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006a0aed: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a0af0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a0af5u); f_008003e0();
L_006a0af5:; BB(0x006a0af5);
    /* 006a0af5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0af8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0af9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0afa: ret  */ FN_RET(0x006a0a34); r_esp += 4; return;
}

void f_006a0afc(void) /* sub_6A0AFC */
{
    FN_ENTER(0x006a0afc);
    /* 006a0afc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0afd: mov esi, ecx */ r_esi = r_ecx;
    /* 006a0aff: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 006a0b06: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0b09: je 0x6a0b71 */ if (fZ) goto L_006a0b71;
L_006a0b0b:; BB(0x006a0b0b);
    /* 006a0b0b: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a0b11: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0b13: je 0x6a0b6f */ if (fZ) goto L_006a0b6f;
L_006a0b15:; BB(0x006a0b15);
    /* 006a0b15: mov eax, dword ptr [esi + 0x8ac] */ r_eax = R32((u32)(r_esi+0x8acu));
    /* 006a0b1b: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a0b21: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0b23: je 0x6a0b6f */ if (fZ) goto L_006a0b6f;
L_006a0b25:; BB(0x006a0b25);
    /* 006a0b25: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x6a0b2au); f_006a3250();
    /* 006a0b2a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0b2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0b2f: jl 0x6a0b6f */ if ((fS!=fO)) goto L_006a0b6f;
L_006a0b31:; BB(0x006a0b31);
    /* 006a0b31: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a0b34: jg 0x6a0b61 */ if ((!fZ&&fS==fO)) goto L_006a0b61;
L_006a0b36:; BB(0x006a0b36);
    /* 006a0b36: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 006a0b3c: mov eax, 4 */ r_eax = 0x4u;
    /* 006a0b41: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 006a0b48: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a0b4b: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 006a0b51: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0b53: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a0b58u); f_0069d1bc();
    /* 006a0b58: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 006a0b5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0b60: ret  */ FN_RET(0x006a0afc); r_esp += 4; return;
L_006a0b61:; BB(0x006a0b61);
    /* 006a0b61: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a0b64: jne 0x6a0b6f */ if (!fZ) goto L_006a0b6f;
L_006a0b66:; BB(0x006a0b66);
    /* 006a0b66: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0b68: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0b6a: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a0b6fu); f_006a0624();
L_006a0b6f:; BB(0x006a0b6f);
    /* 006a0b6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0b70: ret  */ FN_RET(0x006a0afc); r_esp += 4; return;
L_006a0b71:; BB(0x006a0b71);
    /* 006a0b71: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0b73: call 0x7aa484 */ r_esp -= 4; W32(r_esp, 0x6a0b78u); f_007aa484();
    /* 006a0b78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a0b7a: je 0x6a0b6f */ if (fZ) goto L_006a0b6f;
L_006a0b7c:; BB(0x006a0b7c);
    /* 006a0b7c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0b7e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0b80: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a0b85u); f_006a1ac0();
    /* 006a0b85: jmp 0x6a0b6f */ goto L_006a0b6f;
}

void f_006a0b88(void) /* sub_6A0B88 */
{
    FN_ENTER(0x006a0b88);
    /* 006a0b88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0b89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0b8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0b8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0b8c: mov edi, ecx */ r_edi = r_ecx;
    /* 006a0b8e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x6a0b93u); f_00791b48();
    /* 006a0b93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0b95: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 006a0b9a: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0b9c: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a0ba1u); f_0068aa04();
    /* 006a0ba1: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a0ba4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0ba7: je 0x6a0cd8 */ if (fZ) goto L_006a0cd8;
L_006a0bad:; BB(0x006a0bad);
    /* 006a0bad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0baf: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0bb1: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a0bb6u); f_0068aa04();
    /* 006a0bb6: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a0bb9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0bbc: je 0x6a0c99 */ if (fZ) goto L_006a0c99;
L_006a0bc2:; BB(0x006a0bc2);
    /* 006a0bc2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0bc4: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0bc6: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a0bcbu); f_0068aa04();
    /* 006a0bcb: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a0bce: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0bd1: je 0x6a0c6d */ if (fZ) goto L_006a0c6d;
L_006a0bd7:; BB(0x006a0bd7);
    /* 006a0bd7: mov eax, 0x23 */ r_eax = 0x23u;
    /* 006a0bdc: mov ebx, 4 */ r_ebx = 0x4u;
    /* 006a0be1: mov ebp, eax */ r_ebp = r_eax;
L_006a0be3:; BB(0x006a0be3);
    /* 006a0be3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0be4: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0be6: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a0bebu); f_0068aa04();
    /* 006a0beb: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006a0bee: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0bf1: je 0x6a0c35 */ if (fZ) goto L_006a0c35;
L_006a0bf3:; BB(0x006a0bf3);
    /* 006a0bf3: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a0bf6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a0bf9: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a0bfc: jle 0x6a0be3 */ if ((fZ||fS!=fO)) goto L_006a0be3;
L_006a0bfe:; BB(0x006a0bfe);
    /* 006a0bfe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0bff: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0c01: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x6a0c06u); f_0068aa6c();
    /* 006a0c06: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a0c09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c0a: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0c0c: call 0x6994d4 */ r_esp -= 4; W32(r_esp, 0x6a0c11u); f_006994d4();
    /* 006a0c11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0c13: jne 0x6a0c1a */ if (!fZ) goto L_006a0c1a;
L_006a0c15:; BB(0x006a0c15);
    /* 006a0c15: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_006a0c1a:; BB(0x006a0c1a);
    /* 006a0c1a: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a0c1d: je 0x6a0c30 */ if (fZ) goto L_006a0c30;
L_006a0c1f:; BB(0x006a0c1f);
    /* 006a0c1f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c22: lea eax, [edi + 0x8a4] */ r_eax = (u32)(r_edi+0x8a4u);
    /* 006a0c28: mov ecx, eax */ r_ecx = r_eax;
    /* 006a0c2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c2b: call 0x6a31b0 */ r_esp -= 4; W32(r_esp, 0x6a0c30u); f_006a31b0();
L_006a0c30:; BB(0x006a0c30);
    /* 006a0c30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0c32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0c33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0c34: ret  */ FN_RET(0x006a0b88); r_esp += 4; return;
L_006a0c35:; BB(0x006a0c35);
    /* 006a0c35: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x6a0c3au); f_007c00c4();
    /* 006a0c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0c3c: jne 0x6a0bf3 */ if (!fZ) goto L_006a0bf3;
L_006a0c3e:; BB(0x006a0c3e);
    /* 006a0c3e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x6a0c43u); f_007c00d0();
    /* 006a0c43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0c45: jne 0x6a0bf3 */ if (!fZ) goto L_006a0bf3;
L_006a0c47:; BB(0x006a0c47);
    /* 006a0c47: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x6a0c4cu); f_007c00dc();
    /* 006a0c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0c4e: jne 0x6a0bf3 */ if (!fZ) goto L_006a0bf3;
L_006a0c50:; BB(0x006a0c50);
    /* 006a0c50: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x6a0c55u); f_00791b48();
    /* 006a0c55: mov edx, ebp */ r_edx = r_ebp;
    /* 006a0c57: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a0c5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c5e: mov ecx, eax */ r_ecx = r_eax;
    /* 006a0c60: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x6a0c65u); f_0078fd68();
    /* 006a0c65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0c67: je 0x6a0bf3 */ if (fZ) goto L_006a0bf3;
L_006a0c69:; BB(0x006a0c69);
    /* 006a0c69: mov esi, ebx */ r_esi = r_ebx;
    /* 006a0c6b: jmp 0x6a0bf3 */ goto L_006a0bf3;
L_006a0c6d:; BB(0x006a0c6d);
    /* 006a0c6d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a0c71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c72: lea ebx, [edi + 0x628] */ r_ebx = (u32)(r_edi+0x628u);
    /* 006a0c78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0c7a: call 0x6a7cc4 */ r_esp -= 4; W32(r_esp, 0x6a0c7fu); f_006a7cc4();
    /* 006a0c7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0c82: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a0c87u); f_006a7c24();
    /* 006a0c87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0c89: je 0x6a0bd7 */ if (fZ) goto L_006a0bd7;
L_006a0c8f:; BB(0x006a0c8f);
    /* 006a0c8f: mov esi, 3 */ r_esi = 0x3u;
    /* 006a0c94: jmp 0x6a0bd7 */ goto L_006a0bd7;
L_006a0c99:; BB(0x006a0c99);
    /* 006a0c99: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a0c9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0c9e: lea ebx, [edi + 0x628] */ r_ebx = (u32)(r_edi+0x628u);
    /* 006a0ca4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0ca6: call 0x6a7cec */ r_esp -= 4; W32(r_esp, 0x6a0cabu); f_006a7cec();
    /* 006a0cab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0cac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0cae: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a0cb3u); f_006a7c24();
    /* 006a0cb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0cb5: je 0x6a0bc2 */ if (fZ) goto L_006a0bc2;
L_006a0cbb:; BB(0x006a0cbb);
    /* 006a0cbb: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a0cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0cc0: call 0x6a9f60 */ r_esp -= 4; W32(r_esp, 0x6a0cc5u); f_006a9f60();
    /* 006a0cc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a0cc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0cc8: jne 0x6a0bc2 */ if (!fZ) goto L_006a0bc2;
L_006a0cce:; BB(0x006a0cce);
    /* 006a0cce: mov esi, 2 */ r_esi = 0x2u;
    /* 006a0cd3: jmp 0x6a0bc2 */ goto L_006a0bc2;
L_006a0cd8:; BB(0x006a0cd8);
    /* 006a0cd8: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a0cde: lea ecx, [edi + 0x628] */ r_ecx = (u32)(r_edi+0x628u);
    /* 006a0ce4: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a0ce9u); f_006a7c24();
    /* 006a0ce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0ceb: je 0x6a0bad */ if (fZ) goto L_006a0bad;
L_006a0cf1:; BB(0x006a0cf1);
    /* 006a0cf1: mov esi, 1 */ r_esi = 0x1u;
    /* 006a0cf6: jmp 0x6a0bad */ goto L_006a0bad;
}

void f_006a0cfc(void) /* sub_6A0CFC */
{
    FN_ENTER(0x006a0cfc);
    /* 006a0cfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0cfd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0cfe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a0d00: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 006a0d07: mov dword ptr [ebp + 0x348], 6 */ W32((u32)(r_ebp+0x348u), 0x6u);
    /* 006a0d11: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a0d14: ja 0x6a0e3f */ if ((!fC&&!fZ)) goto L_006a0e3f;
L_006a0d1a:; BB(0x006a0d1a);
    /* 006a0d1a: mov eax, dword ptr [eax*4 + 0x93d640] */ r_eax = R32((u32)(r_eax*4+0x93d640u));
    /* 006a0d21: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0cfc); r_esp += 4; return;
}

void f_006a0d23(void)
{
    FN_ENTER(0x006a0d23);
    /* 006a0d23: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d27: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x6a0d2cu); f_0069bdf0();
    /* 006a0d2c: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d23); r_esp += 4; return;
}

void f_006a0d31(void)
{
    FN_ENTER(0x006a0d31);
    /* 006a0d31: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d35: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x6a0d3au); f_0069c6c0();
    /* 006a0d3a: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d31); r_esp += 4; return;
}

void f_006a0d3f(void)
{
    FN_ENTER(0x006a0d3f);
    /* 006a0d3f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d43: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x6a0d48u); f_0069c988();
    /* 006a0d48: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d3f); r_esp += 4; return;
}

void f_006a0d4d(void)
{
    FN_ENTER(0x006a0d4d);
    /* 006a0d4d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d51: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x6a0d56u); f_0069cd20();
    /* 006a0d56: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d4d); r_esp += 4; return;
}

void f_006a0d5b(void)
{
    FN_ENTER(0x006a0d5b);
    /* 006a0d5b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d5f: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x6a0d64u); f_0069d1e4();
    /* 006a0d64: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d5b); r_esp += 4; return;
}

void f_006a0d69(void)
{
    FN_ENTER(0x006a0d69);
    /* 006a0d69: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d6d: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x6a0d72u); f_0069d43c();
    /* 006a0d72: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d69); r_esp += 4; return;
}

void f_006a0d77(void)
{
    FN_ENTER(0x006a0d77);
    /* 006a0d77: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d7b: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x6a0d80u); f_0069d8f4();
    /* 006a0d80: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d77); r_esp += 4; return;
}

void f_006a0d85(void)
{
    FN_ENTER(0x006a0d85);
    /* 006a0d85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d89: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x6a0d8eu); f_0069dd60();
    /* 006a0d8e: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d85); r_esp += 4; return;
}

void f_006a0d93(void)
{
    FN_ENTER(0x006a0d93);
    /* 006a0d93: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0d95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0d97: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x6a0d9cu); f_0069e15c();
    /* 006a0d9c: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0d93); r_esp += 4; return;
}

void f_006a0da1(void)
{
    FN_ENTER(0x006a0da1);
    /* 006a0da1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0da3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0da5: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x6a0daau); f_0069e718();
    /* 006a0daa: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0da1); r_esp += 4; return;
}

void f_006a0daf(void)
{
    FN_ENTER(0x006a0daf);
    /* 006a0daf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0db1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0db3: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x6a0db8u); f_0069ebc8();
    /* 006a0db8: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0daf); r_esp += 4; return;
}

void f_006a0dbd(void)
{
    FN_ENTER(0x006a0dbd);
    /* 006a0dbd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0dbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0dc1: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x6a0dc6u); f_0069ef04();
    /* 006a0dc6: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0dbd); r_esp += 4; return;
}

void f_006a0dc8(void)
{
    FN_ENTER(0x006a0dc8);
    /* 006a0dc8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0dca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0dcc: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x6a0dd1u); f_0069f148();
    /* 006a0dd1: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0dc8); r_esp += 4; return;
}

void f_006a0dd3(void)
{
    FN_ENTER(0x006a0dd3);
    /* 006a0dd3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0dd5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0dd7: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x6a0ddcu); f_0069f384();
    /* 006a0ddc: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0dd3); r_esp += 4; return;
}

void f_006a0dde(void)
{
    FN_ENTER(0x006a0dde);
    /* 006a0dde: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0de0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0de2: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x6a0de7u); f_0069f648();
    /* 006a0de7: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0dde); r_esp += 4; return;
}

void f_006a0de9(void)
{
    FN_ENTER(0x006a0de9);
    /* 006a0de9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0deb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ded: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x6a0df2u); f_0069fe2c();
    /* 006a0df2: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0de9); r_esp += 4; return;
}

void f_006a0df4(void)
{
    FN_ENTER(0x006a0df4);
    /* 006a0df4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0df6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0df8: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a0dfdu); f_006a0624();
    /* 006a0dfd: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0df4); r_esp += 4; return;
}

void f_006a0dff(void)
{
    FN_ENTER(0x006a0dff);
    /* 006a0dff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e01: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e03: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a0e08u); f_006a0994();
    /* 006a0e08: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0dff); r_esp += 4; return;
}

void f_006a0e0a(void)
{
    FN_ENTER(0x006a0e0a);
    /* 006a0e0a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e0e: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x6a0e13u); f_006a0eb8();
    /* 006a0e13: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0e0a); r_esp += 4; return;
}

void f_006a0e15(void)
{
    FN_ENTER(0x006a0e15);
    /* 006a0e15: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e19: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a0e1eu); f_006a139c();
    /* 006a0e1e: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0e15); r_esp += 4; return;
}

void f_006a0e20(void)
{
    FN_ENTER(0x006a0e20);
    /* 006a0e20: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e24: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x6a0e29u); f_006a1a60();
    /* 006a0e29: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0e20); r_esp += 4; return;
}

void f_006a0e2b(void)
{
    FN_ENTER(0x006a0e2b);
    /* 006a0e2b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e2f: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a0e34u); f_0069b93c();
    /* 006a0e34: jmp 0x6a0e3f */ goto L_006a0e3f;
L_006a0e3f:; BB(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0e2b); r_esp += 4; return;
}

void f_006a0e36(void)
{
    FN_ENTER(0x006a0e36);
    /* 006a0e36: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e3a: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a0e3fu); f_006a1ac0();
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0e36); r_esp += 4; return;
}

void f_006a0e3f(void)
{
    FN_ENTER(0x006a0e3f);
    /* 006a0e3f: lea ebx, [ebp + 0x8a4] */ r_ebx = (u32)(r_ebp+0x8a4u);
    /* 006a0e45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e47: call 0x6a2ea4 */ r_esp -= 4; W32(r_esp, 0x6a0e4cu); f_006a2ea4();
    /* 006a0e4c: mov word ptr [ebp + 0x8a4], ax */ W16((u32)(r_ebp+0x8a4u), (u16)r_eax);
    /* 006a0e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e55: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0e5au); f_006a2e8c();
    /* 006a0e5a: mov byte ptr [ebp + 0x355], al */ W8((u32)(r_ebp+0x355u), (u8)r_eax);
    /* 006a0e60: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a0e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e6a: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a0e6fu); f_006a2f54();
    /* 006a0e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e71: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a0e76u); f_006a2d44();
    /* 006a0e76: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 006a0e7c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a0e7e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6a0e81u); call_ind(t); }
    /* 006a0e81: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e85: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0e87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0e89: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a0e8eu); f_00694390();
    /* 006a0e8e: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006a0e95: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 006a0e9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a0e9d: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a0ea1: fmul dword ptr [ebp + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8a8u));
    /* 006a0ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0ea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a0eab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0ead: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a0eb2u); f_00690300();
    /* 006a0eb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0eb4: ret  */ FN_RET(0x006a0e3f); r_esp += 4; return;
}

void f_006a0eb8(void) /* sub_6A0EB8 */
{
    FN_ENTER(0x006a0eb8);
    /* 006a0eb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0eb9: mov edi, ecx */ r_edi = r_ecx;
    /* 006a0ebb: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 006a0ec0: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a0ec3: ja 0x6a0f52 */ if ((!fC&&!fZ)) goto L_006a0f52;
L_006a0ec9:; BB(0x006a0ec9);
    /* 006a0ec9: mov eax, dword ptr [eax*4 + 0x93d6a4] */ r_eax = R32((u32)(r_eax*4+0x93d6a4u));
    /* 006a0ed0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a0f52:; BB(0x006a0f52);
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0eb8); r_esp += 8; return;
}

void f_006a0ed2(void)
{
    FN_ENTER(0x006a0ed2);
    /* 006a0ed2: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0ed4: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x6a0ed9u); f_0069b720();
    /* 006a0ed9: jmp 0x6a0f52 */ goto L_006a0f52;
L_006a0f52:; BB(0x006a0f52);
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0ed2); r_esp += 8; return;
}

void f_006a0edb(void)
{
    FN_ENTER(0x006a0edb);
    /* 006a0edb: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0edd: call 0x6a2dc4 */ r_esp -= 4; W32(r_esp, 0x6a0ee2u); f_006a2dc4();
    /* 006a0ee2: jmp 0x6a0f52 */ goto L_006a0f52;
L_006a0f52:; BB(0x006a0f52);
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0edb); r_esp += 8; return;
}

void f_006a0ee4(void)
{
    FN_ENTER(0x006a0ee4);
    /* 006a0ee4: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0ee6: call 0x6a0f58 */ r_esp -= 4; W32(r_esp, 0x6a0eebu); f_006a0f58();
    /* 006a0eeb: jmp 0x6a0f52 */ goto L_006a0f52;
L_006a0f52:; BB(0x006a0f52);
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0ee4); r_esp += 8; return;
}

void f_006a0eed(void)
{
    FN_ENTER(0x006a0eed);
    /* 006a0eed: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0eef: call 0x6a1000 */ r_esp -= 4; W32(r_esp, 0x6a0ef4u); f_006a1000();
    /* 006a0ef4: jmp 0x6a0f52 */ goto L_006a0f52;
L_006a0f52:; BB(0x006a0f52);
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0eed); r_esp += 8; return;
}

void f_006a0ef6(void)
{
    FN_ENTER(0x006a0ef6);
    /* 006a0ef6: mov edx, dword ptr [edi + 0x634] */ r_edx = R32((u32)(r_edi+0x634u));
    /* 006a0efc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a0efe: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a0f04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0f06: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a0f0c: je 0x6a0f37 */ if (fZ) goto L_006a0f37;
L_006a0f0e:; BB(0x006a0f0e);
    /* 006a0f0e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006a0f14: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a0f16: je 0x6a0f1f */ if (fZ) goto L_006a0f1f;
L_006a0f18:; BB(0x006a0f18);
    /* 006a0f18: mov eax, 1 */ r_eax = 0x1u;
    /* 006a0f1d: jmp 0x6a0f21 */ goto L_006a0f21;
L_006a0f1f:; BB(0x006a0f1f);
    /* 006a0f1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a0f21:; BB(0x006a0f21);
    /* 006a0f21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0f23: jne 0x6a0f37 */ if (!fZ) goto L_006a0f37;
L_006a0f25:; BB(0x006a0f25);
    /* 006a0f25: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f2a: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f2f: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a0f34u); f_0070a60c();
    /* 006a0f34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a0f37:; BB(0x006a0f37);
    /* 006a0f37: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0f39: call 0x6a1088 */ r_esp -= 4; W32(r_esp, 0x6a0f3eu); f_006a1088();
    /* 006a0f3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f3f: ret 4 */ FN_RET(0x006a0ef6); r_esp += 8; return;
}

void f_006a0f42(void)
{
    FN_ENTER(0x006a0f42);
    /* 006a0f42: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0f44: call 0x698fa8 */ r_esp -= 4; W32(r_esp, 0x6a0f49u); f_00698fa8();
    /* 006a0f49: jmp 0x6a0f52 */ goto L_006a0f52;
L_006a0f52:; BB(0x006a0f52);
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0f42); r_esp += 8; return;
}

void f_006a0f4b(void)
{
    FN_ENTER(0x006a0f4b);
    /* 006a0f4b: mov ecx, edi */ r_ecx = r_edi;
    /* 006a0f4d: call 0x6a11fc */ r_esp -= 4; W32(r_esp, 0x6a0f52u); f_006a11fc();
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0f4b); r_esp += 8; return;
}

void f_006a0f52(void)
{
    FN_ENTER(0x006a0f52);
    /* 006a0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0f53: ret 4 */ FN_RET(0x006a0f52); r_esp += 8; return;
}

void f_006a0f58(void) /* sub_6A0F58 */
{
    FN_ENTER(0x006a0f58);
    /* 006a0f58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f5a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a0f5d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a0f5f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0f61: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x6a0f66u); f_0068a3fc();
    /* 006a0f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0f68: jne 0x6a0f70 */ if (!fZ) goto L_006a0f70;
L_006a0f6a:; BB(0x006a0f6a);
    /* 006a0f6a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0f6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0f6f: ret  */ FN_RET(0x006a0f58); r_esp += 4; return;
L_006a0f70:; BB(0x006a0f70);
    /* 006a0f70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f71: lea ebp, [esi + 0x8a4] */ r_ebp = (u32)(r_esi+0x8a4u);
    /* 006a0f77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0f79: call 0x6a3004 */ r_esp -= 4; W32(r_esp, 0x6a0f7eu); f_006a3004();
    /* 006a0f7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0f80: je 0x6a0ff8 */ if (fZ) goto L_006a0ff8;
L_006a0f82:; BB(0x006a0f82);
    /* 006a0f82: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006a0f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f86: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0f88: call 0x6a3124 */ r_esp -= 4; W32(r_esp, 0x6a0f8du); f_006a3124();
    /* 006a0f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0f8f: jne 0x6a0f96 */ if (!fZ) goto L_006a0f96;
L_006a0f91:; BB(0x006a0f91);
    /* 006a0f91: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 006a0f94: jmp 0x6a0fa6 */ goto L_006a0fa6;
L_006a0f96:; BB(0x006a0f96);
    /* 006a0f96: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006a0f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f9a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006a0f9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a0f9e: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a0fa3u); f_007a90a8();
    /* 006a0fa3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a0fa6:; BB(0x006a0fa6);
    /* 006a0fa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a0fa7: mov ecx, esi */ r_ecx = r_esi;
    /* 006a0fa9: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x6a0faeu); f_0068c038();
    /* 006a0fae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0fb0: je 0x6a0fc4 */ if (fZ) goto L_006a0fc4;
L_006a0fb2:; BB(0x006a0fb2);
    /* 006a0fb2: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 006a0fb9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a0fbc: jne 0x6a0fc4 */ if (!fZ) goto L_006a0fc4;
L_006a0fbe:; BB(0x006a0fbe);
    /* 006a0fbe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0fc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0fc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0fc3: ret  */ FN_RET(0x006a0f58); r_esp += 4; return;
L_006a0fc4:; BB(0x006a0fc4);
    /* 006a0fc4: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 006a0fc8: mov word ptr [esp + 0xe], si */ W16((u32)(r_esp+0xeu), (u16)r_esi);
    /* 006a0fcd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a0fcf: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 006a0fd4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a0fd6: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 006a0fdb: mov byte ptr [esp + 0xc], 0x43 */ W8((u32)(r_esp+0xcu), 0x43u);
    /* 006a0fe0: mov byte ptr [esp + 0xd], 2 */ W8((u32)(r_esp+0xdu), 0x2u);
    /* 006a0fe5: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6a0feau); f_006a2e8c();
    /* 006a0fea: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 006a0fef: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006a0ff3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a0ff8u); f_008003e0();
L_006a0ff8:; BB(0x006a0ff8);
    /* 006a0ff8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a0ffb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0ffc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a0ffd: ret  */ FN_RET(0x006a0f58); r_esp += 4; return;
}

