#include "protos.h"

void f_00530020(void)
{
    FN_ENTER(0x00530020);
    /* 00530020: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530022: je 0x53014e */ if (fZ) goto L_0053014e;
L_00530028:; BB(0x00530028);
    /* 00530028: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0053002e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530030: je 0x53012f */ if (fZ) goto L_0053012f;
L_00530036:; BB(0x00530036);
    /* 00530036: mov dword ptr [edi + 0x3ac], 0x23 */ W32((u32)(r_edi+0x3acu), 0x23u);
    /* 00530040: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00530043: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530048: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530020); r_esp += 4; return;
L_0053012f:; BB(0x0053012f);
    /* 0053012f: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00530134: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0053013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053013b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x530140u); f_00509590();
    /* 00530140: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530143: mov dword ptr [edi + 0x424], eax */ W32((u32)(r_edi+0x424u), r_eax);
    /* 00530149: jmp 0x530036 */ goto L_00530036;
L_0053014e:; BB(0x0053014e);
    /* 0053014e: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00530153: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 00530159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053015a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x53015fu); f_00509590();
    /* 0053015f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530162: mov dword ptr [edi + 0x420], eax */ W32((u32)(r_edi+0x420u), r_eax);
    /* 00530168: jmp 0x530028 */ goto L_00530028;
}

void f_00530028(void)
{
    FN_ENTER(0x00530028);
    /* 00530028: mov eax, dword ptr [edi + 0x424] */ r_eax = R32((u32)(r_edi+0x424u));
    /* 0053002e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530030: je 0x53012f */ if (fZ) goto L_0053012f;
L_00530036:; BB(0x00530036);
    /* 00530036: mov dword ptr [edi + 0x3ac], 0x23 */ W32((u32)(r_edi+0x3acu), 0x23u);
    /* 00530040: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00530043: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530048: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530028); r_esp += 4; return;
L_0053012f:; BB(0x0053012f);
    /* 0053012f: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00530134: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0053013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053013b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x530140u); f_00509590();
    /* 00530140: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530143: mov dword ptr [edi + 0x424], eax */ W32((u32)(r_edi+0x424u), r_eax);
    /* 00530149: jmp 0x530036 */ goto L_00530036;
}

void f_0053003a(void)
{
    FN_ENTER(0x0053003a);
    /* 0053003a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053003c: and eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053003e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00530040: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00530043: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530048: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x0053003a); r_esp += 4; return;
}

void f_00530041(void)
{
    FN_ENTER(0x00530041);
    /* 00530041: ja 0x53007b */ if ((!fC&&!fZ)) goto L_0053007b;
L_00530043:; BB(0x00530043);
    /* 00530043: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530048: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530041); r_esp += 4; return;
L_0053007b:; BB(0x0053007b);
    /* 0053007b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053007d: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053007e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00530080: add byte ptr [eax + 3], bh */ { u32 ad = (u32)(r_eax+0x3u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00530086: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0053008d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053008f: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00530096: mov ecx, edi */ r_ecx = r_edi;
    /* 00530098: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x53009du); f_0053140c();
    /* 0053009d: jmp 0x53005a */ goto L_0053005a;
}

void f_00530043(void)
{
    FN_ENTER(0x00530043);
    /* 00530043: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530048: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530043); r_esp += 4; return;
}

void f_00530045(void)
{
    FN_ENTER(0x00530045);
    /* 00530045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530047: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530048: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530045); r_esp += 4; return;
}

void f_00530049(void)
{
    FN_ENTER(0x00530049);
    /* 00530049: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 0053004b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0053004d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530052u); f_00814298();
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530049); r_esp += 4; return;
}

void f_0053004e(void)
{
    FN_ENTER(0x0053004e);
    /* 0053004e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053004f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00530050: add byte ptr cs:[ebx + 0x3eb10c4], al */ { u32 ad = (u32)(r_ebx+0x3eb10c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00530057: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x0053004e); r_esp += 4; return;
}

void f_00530050(void)
{
    FN_ENTER(0x00530050);
    /* 00530050: add byte ptr cs:[ebx + 0x3eb10c4], al */ { u32 ad = (u32)(r_ebx+0x3eb10c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00530057: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530050); r_esp += 4; return;
}

void f_00530052(void)
{
    FN_ENTER(0x00530052);
    /* 00530052: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530052); r_esp += 4; return;
}

void f_00530053(void)
{
    FN_ENTER(0x00530053);
    /* 00530053: les edx, ptr [eax] */ UNSUP(0x00530053, "les edx, ptr [eax]");
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530053); r_esp += 4; return;
}

void f_00530054(void)
{
    FN_ENTER(0x00530054);
    /* 00530054: adc bl, ch */ { u32 c = fC; u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b + c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00530056: add ecx, dword ptr [ebp - 0x3074c789] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcf8b3877u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530054); r_esp += 4; return;
}

void f_00530055(void)
{
    FN_ENTER(0x00530055);
    /* 00530055: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530055); r_esp += 4; return;
}

void f_0053006e(void)
{
    FN_ENTER(0x0053006e);
    /* 0053006e: sub eax, 0x38c48300 */ {  u32 a = r_eax; u32 b = 0x38c48300u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x0053006e); r_esp += 4; return;
}

void f_00530074(void)
{
    FN_ENTER(0x00530074);
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x00530074); r_esp += 4; return;
}

void f_005301f0(void) /* sub_5301F0 */
{
    FN_ENTER(0x005301f0);
    /* 005301f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005301f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005301f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005301f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005301f4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005301f7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005301f9: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005301fc: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 00530202: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00530207: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0053020a: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0053020d: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00530210: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00530213: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00530217: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00530219: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53021eu); f_007aa094();
    /* 0053021e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00530220: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x530225u); f_00770738();
    /* 00530225: mov ebp, eax */ r_ebp = r_eax;
    /* 00530227: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530229: je 0x530446 */ if (fZ) goto L_00530446;
L_0053022f:; BB(0x0053022f);
    /* 0053022f: movsx edx, word ptr [ebx + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 00530236: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530238: je 0x5302de */ if (fZ) goto L_005302de;
L_0053023e:; BB(0x0053023e);
    /* 0053023e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530241: jne 0x5302d5 */ if (!fZ) goto L_005302d5;
L_00530247:; BB(0x00530247);
    /* 00530247: fld dword ptr [0x922594] */ FPUSH(R_F32((u32)(0x922594u)));
    /* 0053024d: fadd dword ptr [ebx + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x304u));
    /* 00530253: fstp dword ptr [ebx + 0x304] */ W_F32((u32)(r_ebx+0x304u), ST(0)); FPOP();
    /* 00530259: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053025b: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530261: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530267: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053026d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053026e: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00530273: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00530274: call 0x7726d0 */ r_esp -= 4; W32(r_esp, 0x530279u); f_007726d0();
    /* 00530279: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053027b: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00530281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530282: lea edx, [ebx + 0x2a4] */ r_edx = (u32)(r_ebx+0x2a4u);
    /* 00530288: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00530289: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x53028eu); f_007a9180();
    /* 0053028e: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00530292: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530295: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00530299: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0053029d: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 005302a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005302a5: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 005302a8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005302aa: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005302ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005302ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005302af: jbe 0x5303ba */ if ((fC||fZ)) goto L_005303ba;
L_005302b5:; BB(0x005302b5);
    /* 005302b5: movzx eax, word ptr [ebx + 0x340] */ r_eax = (u32)R16((u32)(r_ebx+0x340u));
    /* 005302bc: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005302c1: je 0x530438 */ if (fZ) goto L_00530438;
L_005302c7:; BB(0x005302c7);
    /* 005302c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005302c9: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005302d0: jmp 0x5303ba */ goto L_005303ba;
L_005302d5:; BB(0x005302d5);
    /* 005302d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005302d7: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
L_005302de:; BB(0x005302de);
    /* 005302de: fld dword ptr [0x922594] */ FPUSH(R_F32((u32)(0x922594u)));
    /* 005302e4: fadd dword ptr [ebx + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x304u));
    /* 005302ea: fstp dword ptr [ebx + 0x304] */ W_F32((u32)(r_ebx+0x304u), ST(0)); FPOP();
    /* 005302f0: mov edx, dword ptr [ebp + 0x300] */ r_edx = R32((u32)(r_ebp+0x300u));
    /* 005302f6: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005302f9: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005302fd: fmul dword ptr [0x92258c] */ ST(0) = ST(0) * R_F32((u32)(0x92258cu));
    /* 00530303: mov edi, dword ptr [ebp + 0x308] */ r_edi = R32((u32)(r_ebp+0x308u));
    /* 00530309: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053030c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00530314: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00530318: mov esi, dword ptr [ebp + 0x304] */ r_esi = R32((u32)(r_ebp+0x304u));
    /* 0053031e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00530322: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00530326: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00530328: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0053032c: call 0x772aa0 */ r_esp -= 4; W32(r_esp, 0x530331u); f_00772aa0();
    /* 00530331: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00530335: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00530338: mov esi, dword ptr [ebp + 0x300] */ r_esi = R32((u32)(r_ebp+0x300u));
    /* 0053033e: mov edi, dword ptr [ebp + 0x304] */ r_edi = R32((u32)(r_ebp+0x304u));
    /* 00530344: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 0053034a: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 00530350: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00530353: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00530357: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053035b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x530360u); f_0082f9c4();
    /* 00530360: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00530363: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00530367: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00530369: fmul qword ptr [0x9224f8] */ ST(0) = ST(0) * R_F64((u32)(0x9224f8u));
    /* 0053036f: fdiv qword ptr [0x9224f0] */ ST(0) = ST(0) / R_F64((u32)(0x9224f0u));
    /* 00530375: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00530379: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0053037e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00530383: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00530387: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0053038b: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0053038f: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00530393: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00530397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530398: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053039b: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5303a0u); f_007a9018();
    /* 005303a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005303a3: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 005303a9: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005303ac: jge 0x5303ba */ if ((fS==fO)) goto L_005303ba;
L_005303ae:; BB(0x005303ae);
    /* 005303ae: mov eax, 2 */ r_eax = 0x2u;
    /* 005303b3: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
L_005303ba:; BB(0x005303ba);
    /* 005303ba: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 005303c0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005303c2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005303c4: fcomp dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); FPOP();
    /* 005303c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005303ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005303cb: jae 0x5303d6 */ if (!fC) goto L_005303d6;
L_005303cd:; BB(0x005303cd);
    /* 005303cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005303cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005303d1: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5303d6u); f_007706b0();
L_005303d6:; BB(0x005303d6);
    /* 005303d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005303d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005303da: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5303dfu); f_007aaa30();
    /* 005303df: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 005303e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005303e4: je 0x5303f8 */ if (fZ) goto L_005303f8;
L_005303e6:; BB(0x005303e6);
    /* 005303e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005303e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005303e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005303ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005303eb: push 0x2d8 */ { u32 v = 0x2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005303f0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5303f5u); f_00814298();
    /* 005303f5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005303f8:; BB(0x005303f8);
    /* 005303f8: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005303fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005303ff: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x530404u); f_007aaa30();
    /* 00530404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530406: je 0x53041a */ if (fZ) goto L_0053041a;
L_00530408:; BB(0x00530408);
    /* 00530408: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053040a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053040b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053040c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053040d: push 0x2d8 */ { u32 v = 0x2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00530412: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x530417u); f_00814298();
    /* 00530417: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053041a:; BB(0x0053041a);
    /* 0053041a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053041c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530421u); f_007b6880();
    /* 00530421: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530423: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530425: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053042a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053042b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530430u); f_00805608();
    /* 00530430: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530433: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00530434: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530435: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530436: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530437: ret  */ FN_RET(0x005301f0); r_esp += 4; return;
L_00530438:; BB(0x00530438);
    /* 00530438: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053043a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053043c: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x530441u); f_007706b0();
    /* 00530441: jmp 0x5303ba */ goto L_005303ba;
L_00530446:; BB(0x00530446);
    /* 00530446: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 00530449: jmp 0x53041a */ goto L_0053041a;
}

void f_0053044c(void) /* sub_53044C */
{
    FN_ENTER(0x0053044c);
    /* 0053044c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053044d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00530450: mov esi, ecx */ r_esi = r_ecx;
    /* 00530452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530454: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0053045b: mov ecx, esi */ r_ecx = r_esi;
    /* 0053045d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x530462u); f_007aa094();
    /* 00530462: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00530465: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0053046d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00530472: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00530477: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0053047e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00530481: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00530489: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x53048eu); f_0082d990();
    /* 0053048e: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00530491: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00530493: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x530498u); f_0082d8bc();
    /* 00530498: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053049b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053049c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005304a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005304a2: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5304a7u); f_0082eab8();
    /* 005304a7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005304ac: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5304b1u); f_0082eb80();
    /* 005304b1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005304b4: lea edx, [esi + 0x50] */ r_edx = (u32)(r_esi+0x50u);
    /* 005304b7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5304bcu); f_0082ebac();
    /* 005304bc: fld dword ptr [0x922578] */ FPUSH(R_F32((u32)(0x922578u)));
    /* 005304c2: fadd dword ptr [esi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x304u));
    /* 005304c8: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005304ce: fstp dword ptr [esi + 0x304] */ W_F32((u32)(r_esi+0x304u), ST(0)); FPOP();
    /* 005304d4: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005304d7: fmul dword ptr [0x922574] */ ST(0) = ST(0) * R_F32((u32)(0x922574u));
    /* 005304dd: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005304e0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005304e4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005304e8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005304eb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005304ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005304f1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005304f5: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005304f9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005304fd: call 0x772a14 */ r_esp -= 4; W32(r_esp, 0x530502u); f_00772a14();
    /* 00530502: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00530508: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0053050b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0053050d: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0053050f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00530511: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00530513: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00530515: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00530516: jb 0x530525 */ if (fC) goto L_00530525;
L_00530518:; BB(0x00530518);
    /* 00530518: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053051a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053051c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053051d: ja 0x530525 */ if ((!fC&&!fZ)) goto L_00530525;
L_0053051f:; BB(0x0053051f);
    /* 0053051f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00530521: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00530523: jmp 0x530532 */ goto L_00530532;
L_00530525:; BB(0x00530525);
    /* 00530525: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00530527: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00530529: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053052b: mov ecx, esi */ r_ecx = r_esi;
    /* 0053052d: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x530532u); f_007706b0();
L_00530532:; BB(0x00530532);
    /* 00530532: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530534: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530536: mov ecx, esi */ r_ecx = r_esi;
    /* 00530538: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x53053du); f_00772b44();
    /* 0053053d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053053f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530541: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00530544: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00530549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053054a: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x53054fu); f_00805608();
    /* 0053054f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530552: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530553: ret  */ FN_RET(0x0053044c); r_esp += 4; return;
}

void f_00530554(void) /* sub_530554 */
{
    FN_ENTER(0x00530554);
    /* 00530554: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530555: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00530556: mov esi, ecx */ r_esi = r_ecx;
    /* 00530558: mov ecx, esi */ r_ecx = r_esi;
    /* 0053055a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53055fu); f_007aa094();
    /* 0053055f: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00530566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530568: je 0x53065f */ if (fZ) goto L_0053065f;
L_0053056e:; BB(0x0053056e);
    /* 0053056e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530571: jne 0x53059e */ if (!fZ) goto L_0053059e;
L_00530573:; BB(0x00530573);
    /* 00530573: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00530576: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053057b: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00530581: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00530584: lea ecx, [esi + 0x37c] */ r_ecx = (u32)(r_esi+0x37cu);
    /* 0053058a: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x53058du); call_ind(t); }
    /* 0053058d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530590: je 0x5306ab */ if (fZ) goto L_005306ab;
L_00530596:; BB(0x00530596);
    /* 00530596: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00530599: jmp 0x53068b */ goto L_0053068b;
L_0053059e:; BB(0x0053059e);
    /* 0053059e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005305a1: jne 0x530633 */ if (!fZ) goto L_00530633;
L_005305a7:; BB(0x005305a7);
    /* 005305a7: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 005305aa: and ebx, 0xfbfbffff */ {  u32 a = r_ebx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005305b0: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 005305b3: mov eax, 1 */ r_eax = 0x1u;
    /* 005305b8: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005305bf: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005305c2: lea edx, [esi + 0x50] */ r_edx = (u32)(r_esi+0x50u);
    /* 005305c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005305c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005305c7: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5305ccu); f_007a9180();
    /* 005305cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005305cf: fcomp dword ptr [0x92255c] */ fx_compare(ST(0), R_F32((u32)(0x92255cu))); FPOP();
    /* 005305d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005305d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005305d8: jbe 0x5305e3 */ if ((fC||fZ)) goto L_005305e3;
L_005305da:; BB(0x005305da);
    /* 005305da: mov ecx, esi */ r_ecx = r_esi;
    /* 005305dc: call 0x5306d4 */ r_esp -= 4; W32(r_esp, 0x5305e1u); f_005306d4();
    /* 005305e1: jmp 0x53062a */ goto L_0053062a;
L_005305e3:; BB(0x005305e3);
    /* 005305e3: fld dword ptr [0x92256c] */ FPUSH(R_F32((u32)(0x92256cu)));
    /* 005305e9: fadd dword ptr [esi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x304u));
    /* 005305ef: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005305f5: fstp dword ptr [esi + 0x304] */ W_F32((u32)(r_esi+0x304u), ST(0)); FPOP();
    /* 005305fb: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 005305fe: fmul dword ptr [0x922560] */ ST(0) = ST(0) * R_F32((u32)(0x922560u));
    /* 00530604: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530607: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053060a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053060d: mov dword ptr [esp + 4], 0x42c80000 */ W32((u32)(r_esp+0x4u), 0x42c80000u);
    /* 00530615: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00530619: mov ecx, esi */ r_ecx = r_esi;
    /* 0053061b: mov dword ptr [esp + 8], 0x42480000 */ W32((u32)(r_esp+0x8u), 0x42480000u);
    /* 00530623: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x530628u); f_00772054();
    /* 00530628: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0053062a:; BB(0x0053062a);
    /* 0053062a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053062b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x530630u); f_007b999c();
    /* 00530630: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00530631: jmp 0x53068b */ goto L_0053068b;
L_00530633:; BB(0x00530633);
    /* 00530633: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00530636: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053063c: mov eax, 0 */ r_eax = 0x0u;
    /* 00530641: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00530648: je 0x53064f */ if (fZ) goto L_0053064f;
L_0053064a:; BB(0x0053064a);
    /* 0053064a: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0053064d: jmp 0x53068b */ goto L_0053068b;
L_0053064f:; BB(0x0053064f);
    /* 0053064f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530651: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530653: mov ecx, esi */ r_ecx = r_esi;
    /* 00530655: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x53065au); f_00772b44();
    /* 0053065a: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0053065d: jmp 0x53068b */ goto L_0053068b;
L_0053065f:; BB(0x0053065f);
    /* 0053065f: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00530662: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00530667: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0053066a: lea ecx, [esi + 0x37c] */ r_ecx = (u32)(r_esi+0x37cu);
    /* 00530670: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x530675u); f_00576c48();
    /* 00530675: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00530678: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00530679: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x53067eu); f_00578a20();
    /* 0053067e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053067f: mov eax, 1 */ r_eax = 0x1u;
    /* 00530684: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_0053068b:; BB(0x0053068b);
    /* 0053068b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053068d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053068f: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00530694: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00530695: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x53069au); f_00805608();
    /* 0053069a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0053069d: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005306a2: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005306a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005306a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005306a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005306aa: ret  */ FN_RET(0x00530554); r_esp += 4; return;
L_005306ab:; BB(0x005306ab);
    /* 005306ab: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 005306b5: mov eax, 2 */ r_eax = 0x2u;
    /* 005306ba: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005306c1: mov edx, 1 */ r_edx = 0x1u;
    /* 005306c6: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 005306cd: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005306d0: jmp 0x53068b */ goto L_0053068b;
}

void f_005306d4(void) /* sub_5306D4 */
{
    FN_ENTER(0x005306d4);
    /* 005306d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005306d5: mov ebx, esp */ r_ebx = r_esp;
    /* 005306d7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005306da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005306db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005306dc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005306df: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005306e1: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 005306e4: mov esi, dword ptr [ebp + 0x54] */ r_esi = R32((u32)(r_ebp+0x54u));
    /* 005306e7: mov edx, dword ptr [ebp + 0x58] */ r_edx = R32((u32)(r_ebp+0x58u));
    /* 005306ea: mov ecx, dword ptr [ebp + 0x300] */ r_ecx = R32((u32)(r_ebp+0x300u));
    /* 005306f0: mov dword ptr [ebp + 0x2a4], eax */ W32((u32)(r_ebp+0x2a4u), r_eax);
    /* 005306f6: mov dword ptr [ebp + 0x2a8], esi */ W32((u32)(r_ebp+0x2a8u), r_esi);
    /* 005306fc: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 00530701: mov dword ptr [0xaab4f4], esi */ W32((u32)(0xaab4f4u), r_esi);
    /* 00530707: mov dword ptr [0xaab4f8], edx */ W32((u32)(0xaab4f8u), r_edx);
    /* 0053070d: mov dword ptr [ebp + 0x2ac], edx */ W32((u32)(r_ebp+0x2acu), r_edx);
    /* 00530713: mov dword ptr [ebp + 0x298], ecx */ W32((u32)(r_ebp+0x298u), r_ecx);
    /* 00530719: mov ecx, dword ptr [ebp + 0x304] */ r_ecx = R32((u32)(r_ebp+0x304u));
    /* 0053071f: mov dword ptr [ebp + 0x29c], ecx */ W32((u32)(r_ebp+0x29cu), r_ecx);
    /* 00530725: mov ecx, dword ptr [ebp + 0x308] */ r_ecx = R32((u32)(r_ebp+0x308u));
    /* 0053072b: mov dword ptr [ebp + 0x2a0], ecx */ W32((u32)(r_ebp+0x2a0u), r_ecx);
    /* 00530731: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00530734: mov dword ptr [ebp + 0x44], ecx */ W32((u32)(r_ebp+0x44u), r_ecx);
    /* 00530737: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 0053073a: mov dword ptr [ebp + 0x48], ecx */ W32((u32)(r_ebp+0x48u), r_ecx);
    /* 0053073d: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00530740: mov dword ptr [ebp + 0x4c], ecx */ W32((u32)(r_ebp+0x4cu), r_ecx);
    /* 00530743: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00530746: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 0053074b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x530750u); f_0082f9c4();
    /* 00530750: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 00530756: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0053075c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0053075e: fmul qword ptr [0x9224e8] */ ST(0) = ST(0) * R_F64((u32)(0x9224e8u));
    /* 00530764: fdiv qword ptr [0x9224e0] */ ST(0) = ST(0) / R_F64((u32)(0x9224e0u));
    /* 0053076a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053076d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00530771: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00530776: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053077a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053077e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00530782: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00530785: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00530787: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0053078b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053078c: call 0x530a00 */ r_esp -= 4; W32(r_esp, 0x530791u); f_00530a00();
    /* 00530791: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530794: je 0x5309be */ if (fZ) goto L_005309be;
L_0053079a:; BB(0x0053079a);
    /* 0053079a: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005307a0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5307a5u); f_0082e900();
    /* 005307a5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005307a9: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005307af: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5307b4u); f_0082e900();
    /* 005307b4: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005307b8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005307ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005307bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005307bd: jae 0x5307fa */ if (!fC) goto L_005307fa;
L_005307bf:; BB(0x005307bf);
    /* 005307bf: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005307c5: fld qword ptr [0x9224d8] */ FPUSH(R_F64((u32)(0x9224d8u)));
    /* 005307cb: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005307cd: fmul qword ptr [0x9224e8] */ ST(0) = ST(0) * R_F64((u32)(0x9224e8u));
    /* 005307d3: fdiv qword ptr [0x9224e0] */ ST(0) = ST(0) / R_F64((u32)(0x9224e0u));
    /* 005307d9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005307dc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005307e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005307e5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005307e9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005307ed: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005307f1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005307f4: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005307f8: jmp 0x530833 */ goto L_00530833;
L_005307fa:; BB(0x005307fa);
    /* 005307fa: fld qword ptr [0x9224d8] */ FPUSH(R_F64((u32)(0x9224d8u)));
    /* 00530800: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00530806: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00530808: fmul qword ptr [0x9224e8] */ ST(0) = ST(0) * R_F64((u32)(0x9224e8u));
    /* 0053080e: fdiv qword ptr [0x9224e0] */ ST(0) = ST(0) / R_F64((u32)(0x9224e0u));
    /* 00530814: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00530817: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053081b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00530820: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00530824: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00530828: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053082c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053082f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00530833:; BB(0x00530833);
    /* 00530833: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530834: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00530836: call 0x530a00 */ r_esp -= 4; W32(r_esp, 0x53083bu); f_00530a00();
    /* 0053083b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053083e: je 0x53097c */ if (fZ) goto L_0053097c;
L_00530844:; BB(0x00530844);
    /* 00530844: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053084a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x53084fu); f_0082e900();
    /* 0053084f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00530853: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530859: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x53085eu); f_0082e900();
    /* 0053085e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00530862: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00530864: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00530866: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00530867: jae 0x5308a4 */ if (!fC) goto L_005308a4;
L_00530869:; BB(0x00530869);
    /* 00530869: fld qword ptr [0x9224d8] */ FPUSH(R_F64((u32)(0x9224d8u)));
    /* 0053086f: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00530875: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00530877: fmul qword ptr [0x9224e8] */ ST(0) = ST(0) * R_F64((u32)(0x9224e8u));
    /* 0053087d: fdiv qword ptr [0x9224e0] */ ST(0) = ST(0) / R_F64((u32)(0x9224e0u));
    /* 00530883: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00530886: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053088a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053088f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00530893: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00530897: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053089b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053089e: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005308a2: jmp 0x5308dd */ goto L_005308dd;
L_005308a4:; BB(0x005308a4);
    /* 005308a4: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005308aa: fld qword ptr [0x9224d8] */ FPUSH(R_F64((u32)(0x9224d8u)));
    /* 005308b0: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005308b2: fmul qword ptr [0x9224e8] */ ST(0) = ST(0) * R_F64((u32)(0x9224e8u));
    /* 005308b8: fdiv qword ptr [0x9224e0] */ ST(0) = ST(0) / R_F64((u32)(0x9224e0u));
    /* 005308be: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005308c1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005308c5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005308ca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005308ce: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005308d2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005308d6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005308d9: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_005308dd:; BB(0x005308dd);
    /* 005308dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005308de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005308e0: call 0x530a00 */ r_esp -= 4; W32(r_esp, 0x5308e5u); f_00530a00();
    /* 005308e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005308e8: je 0x53093a */ if (fZ) goto L_0053093a;
L_005308ea:; BB(0x005308ea);
    /* 005308ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005308ec: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_005308f3:; BB(0x005308f3);
    /* 005308f3: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 005308f9: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005308fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005308fe: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x530903u); f_00772358();
    /* 00530903: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530906: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00530909: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 0053090f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00530911: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530914: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x530917u); call_ind(t); }
    /* 00530917: fld dword ptr [0x922558] */ FPUSH(R_F32((u32)(0x922558u)));
    /* 0053091d: fadd dword ptr [ebp + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x304u));
    /* 00530923: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00530926: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 0053092c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053092e: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x530931u); call_ind(t); }
    /* 00530931: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530934: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530935: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530936: mov esp, ebx */ r_esp = r_ebx;
    /* 00530938: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00530939: ret  */ FN_RET(0x005306d4); r_esp += 4; return;
L_0053093a:; BB(0x0053093a);
    /* 0053093a: mov edx, dword ptr [0xaab4e4] */ r_edx = R32((u32)(0xaab4e4u));
    /* 00530940: mov eax, 1 */ r_eax = 0x1u;
    /* 00530945: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0053094c: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00530951: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00530954: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 00530957: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 0053095c: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0053095f: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 00530965: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530968: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530969: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053096c: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x530971u); f_007a8c74();
    /* 00530971: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530974: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00530977: jmp 0x5308f3 */ goto L_005308f3;
L_0053097c:; BB(0x0053097c);
    /* 0053097c: mov edx, dword ptr [0xaab4e4] */ r_edx = R32((u32)(0xaab4e4u));
    /* 00530982: mov eax, 1 */ r_eax = 0x1u;
    /* 00530987: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0053098e: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00530993: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00530996: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 00530999: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 0053099e: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 005309a1: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 005309a7: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005309aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005309ab: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005309ae: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5309b3u); f_007a8c74();
    /* 005309b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005309b6: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 005309b9: jmp 0x5308f3 */ goto L_005308f3;
L_005309be:; BB(0x005309be);
    /* 005309be: mov edx, dword ptr [0xaab4e4] */ r_edx = R32((u32)(0xaab4e4u));
    /* 005309c4: mov eax, 1 */ r_eax = 0x1u;
    /* 005309c9: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005309d0: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 005309d5: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 005309d8: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 005309db: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 005309e0: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 005309e3: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 005309e9: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005309ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005309ed: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005309f0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5309f5u); f_007a8c74();
    /* 005309f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005309f8: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 005309fb: jmp 0x5308f3 */ goto L_005308f3;
}

void f_00530a00(void) /* sub_530A00 */
{
    FN_ENTER(0x00530a00);
    /* 00530a00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00530a01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00530a03: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 00530a09: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00530a0e: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 00530a18: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00530a22: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00530a25: mov dword ptr [0xaab4ec], edx */ W32((u32)(0xaab4ecu), r_edx);
    /* 00530a2b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x530a30u); f_0082d990();
    /* 00530a30: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00530a34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00530a36: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x530a3bu); f_0082d8bc();
    /* 00530a3b: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00530a40: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00530a42: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00530a47: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x530a4cu); f_0082eab8();
    /* 00530a4c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00530a51: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x530a56u); f_0082eb80();
    /* 00530a56: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00530a59: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00530a5e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x530a63u); f_0082ebac();
    /* 00530a63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530a65: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00530a6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00530a6c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x530a71u); f_007b4c58();
    /* 00530a71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00530a72: ret 4 */ FN_RET(0x00530a00); r_esp += 8; return;
}

void f_00530a78(void) /* sub_530A78 */
{
    FN_ENTER(0x00530a78);
    /* 00530a78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530a79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530a7a: mov esi, ecx */ r_esi = r_ecx;
    /* 00530a7c: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00530a81: mov ecx, esi */ r_ecx = r_esi;
    /* 00530a83: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00530a85: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00530a8a: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00530a8f: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x530a92u); call_ind(t); }
    /* 00530a92: mov dword ptr [esi + 0x3b0], eax */ W32((u32)(r_esi+0x3b0u), r_eax);
    /* 00530a98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530a9a: je 0x530c1b */ if (fZ) goto L_00530c1b;
L_00530aa0:; BB(0x00530aa0);
    /* 00530aa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530aa1: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x530aa6u); f_00794548();
    /* 00530aa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00530aa7: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00530aaa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x530aafu); f_00829cc8();
    /* 00530aaf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x530ab4u); f_0082d7b0();
    /* 00530ab4: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00530ab7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x530abcu); f_0082d838();
    /* 00530abc: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00530abf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00530ac1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x530ac6u); f_0082d8bc();
    /* 00530ac6: push dword ptr [esi + 0x70] */ { u32 v = R32((u32)(r_esi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530ac9: push dword ptr [esi + 0x6c] */ { u32 v = R32((u32)(r_esi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00530acc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00530ace: push dword ptr [esi + 0x68] */ { u32 v = R32((u32)(r_esi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530ad1: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x530ad6u); f_0082fa0c();
    /* 00530ad6: mov dword ptr [0xa733b0], 0 */ W32((u32)(0xa733b0u), 0x0u);
    /* 00530ae0: mov ecx, 0x52e278 */ r_ecx = 0x52e278u;
    /* 00530ae5: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x530aeau); f_0082fac4();
    /* 00530aea: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00530af0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530af2: je 0x530afd */ if (fZ) goto L_00530afd;
L_00530af4:; BB(0x00530af4);
    /* 00530af4: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x530af9u); f_004f7c84();
    /* 00530af9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530afb: je 0x530b15 */ if (fZ) goto L_00530b15;
L_00530afd:; BB(0x00530afd);
    /* 00530afd: mov eax, dword ptr [esi + 0x3b0] */ r_eax = R32((u32)(r_esi+0x3b0u));
    /* 00530b03: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530b06: je 0x530c1e */ if (fZ) goto L_00530c1e;
L_00530b0c:; BB(0x00530b0c);
    /* 00530b0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00530b0e: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x530b13u); f_007aa7b8();
    /* 00530b13: jmp 0x530b89 */ goto L_00530b89;
L_00530b15:; BB(0x00530b15);
    /* 00530b15: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00530b1b: lea ebp, [esi + 0x37c] */ r_ebp = (u32)(r_esi+0x37cu);
    /* 00530b21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00530b23: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x530b26u); call_ind(t); }
    /* 00530b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530b28: je 0x530b89 */ if (fZ) goto L_00530b89;
L_00530b2a:; BB(0x00530b2a);
    /* 00530b2a: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00530b2f: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00530b35: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00530b3a: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 00530b3f: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00530b45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00530b47: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 00530b4c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00530b52: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x530b55u); call_ind(t); }
    /* 00530b55: mov ecx, esi */ r_ecx = r_esi;
    /* 00530b57: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x530b5cu); f_007aa668();
    /* 00530b5c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00530b62: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00530b64: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x530b67u); call_ind(t); }
    /* 00530b67: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00530b6c: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00530b72: mov ebp, dword ptr [0xaab518] */ r_ebp = R32((u32)(0xaab518u));
    /* 00530b78: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00530b7d: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00530b83: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
L_00530b89:; BB(0x00530b89);
    /* 00530b89: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00530b8b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x530b90u); f_0082fac4();
    /* 00530b90: mov eax, dword ptr [0xa733a4] */ r_eax = R32((u32)(0xa733a4u));
    /* 00530b95: mov edx, dword ptr [0xa733a8] */ r_edx = R32((u32)(0xa733a8u));
    /* 00530b9b: mov ebp, dword ptr [0xa733ac] */ r_ebp = R32((u32)(0xa733acu));
    /* 00530ba1: mov dword ptr [esi + 0x3b8], eax */ W32((u32)(r_esi+0x3b8u), r_eax);
    /* 00530ba7: mov eax, dword ptr [0xa73398] */ r_eax = R32((u32)(0xa73398u));
    /* 00530bac: mov dword ptr [esi + 0x3bc], edx */ W32((u32)(r_esi+0x3bcu), r_edx);
    /* 00530bb2: mov dword ptr [esi + 0x3c0], ebp */ W32((u32)(r_esi+0x3c0u), r_ebp);
    /* 00530bb8: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00530bbe: mov eax, dword ptr [0xa7339c] */ r_eax = R32((u32)(0xa7339cu));
    /* 00530bc3: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 00530bc9: mov eax, dword ptr [0xa733a0] */ r_eax = R32((u32)(0xa733a0u));
    /* 00530bce: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 00530bd4: mov eax, dword ptr [0xa7338c] */ r_eax = R32((u32)(0xa7338cu));
    /* 00530bd9: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 00530bdf: mov eax, dword ptr [0xa73390] */ r_eax = R32((u32)(0xa73390u));
    /* 00530be4: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00530bea: mov eax, dword ptr [0xa73394] */ r_eax = R32((u32)(0xa73394u));
    /* 00530bef: mov dword ptr [esi + 0x3d8], eax */ W32((u32)(r_esi+0x3d8u), r_eax);
    /* 00530bf5: mov eax, dword ptr [0xa73380] */ r_eax = R32((u32)(0xa73380u));
    /* 00530bfa: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 00530c00: mov eax, dword ptr [0xa73384] */ r_eax = R32((u32)(0xa73384u));
    /* 00530c05: mov dword ptr [esi + 0x3e0], eax */ W32((u32)(r_esi+0x3e0u), r_eax);
    /* 00530c0b: mov eax, dword ptr [0xa73388] */ r_eax = R32((u32)(0xa73388u));
    /* 00530c10: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 00530c16: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x530c1bu); f_0082da80();
L_00530c1b:; BB(0x00530c1b);
    /* 00530c1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530c1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530c1d: ret  */ FN_RET(0x00530a78); r_esp += 4; return;
L_00530c1e:; BB(0x00530c1e);
    /* 00530c1e: mov ecx, esi */ r_ecx = r_esi;
    /* 00530c20: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x530c25u); f_007aa668();
    /* 00530c25: jmp 0x530b89 */ goto L_00530b89;
}

void f_00530c2c(void) /* sub_530C2C */
{
    FN_ENTER(0x00530c2c);
    /* 00530c2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00530c2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00530c2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00530c31: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x530c36u); f_00777d10();
    /* 00530c36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530c38: je 0x530c72 */ if (fZ) goto L_00530c72;
L_00530c3a:; BB(0x00530c3a);
    /* 00530c3a: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00530c41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530c43: jne 0x530c6b */ if (!fZ) goto L_00530c6b;
L_00530c45:; BB(0x00530c45);
    /* 00530c45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530c47: mov dword ptr [ebx + 0x398], eax */ W32((u32)(r_ebx+0x398u), r_eax);
    /* 00530c4d: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00530c54: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00530c57: mov edx, 1 */ r_edx = 0x1u;
    /* 00530c5c: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00530c63: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530c68: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_00530c6b:; BB(0x00530c6b);
    /* 00530c6b: mov eax, 1 */ r_eax = 0x1u;
    /* 00530c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00530c71: ret  */ FN_RET(0x00530c2c); r_esp += 4; return;
L_00530c72:; BB(0x00530c72);
    /* 00530c72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530c74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00530c75: ret  */ FN_RET(0x00530c2c); r_esp += 4; return;
}

void f_00530c78(void) /* sub_530C78 */
{
    FN_ENTER(0x00530c78);
    /* 00530c78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00530c79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00530c7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00530c7d: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x530c82u); f_007780a8();
    /* 00530c82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530c84: je 0x530cbe */ if (fZ) goto L_00530cbe;
L_00530c86:; BB(0x00530c86);
    /* 00530c86: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00530c8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530c8f: jne 0x530cb7 */ if (!fZ) goto L_00530cb7;
L_00530c91:; BB(0x00530c91);
    /* 00530c91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530c93: mov dword ptr [ebx + 0x398], eax */ W32((u32)(r_ebx+0x398u), r_eax);
    /* 00530c99: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00530ca0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00530ca3: mov edx, 1 */ r_edx = 0x1u;
    /* 00530ca8: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00530caf: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530cb4: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_00530cb7:; BB(0x00530cb7);
    /* 00530cb7: mov eax, 1 */ r_eax = 0x1u;
    /* 00530cbc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00530cbd: ret  */ FN_RET(0x00530c78); r_esp += 4; return;
L_00530cbe:; BB(0x00530cbe);
    /* 00530cbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530cc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00530cc1: ret  */ FN_RET(0x00530c78); r_esp += 4; return;
}

void f_00530cc4(void) /* sub_530CC4 */
{
    FN_ENTER(0x00530cc4);
    /* 00530cc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00530cc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530cc6: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00530cc9: mov esi, ecx */ r_esi = r_ecx;
    /* 00530ccb: mov ecx, esi */ r_ecx = r_esi;
    /* 00530ccd: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x530cd2u); f_00770738();
    /* 00530cd2: mov ebp, eax */ r_ebp = r_eax;
    /* 00530cd4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530cd6: je 0x530e56 */ if (fZ) goto L_00530e56;
L_00530cdc:; BB(0x00530cdc);
    /* 00530cdc: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 00530ce2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530ce4: je 0x530e56 */ if (fZ) goto L_00530e56;
L_00530cea:; BB(0x00530cea);
    /* 00530cea: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00530ced: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530cf3: jne 0x530e56 */ if (!fZ) goto L_00530e56;
L_00530cf9:; BB(0x00530cf9);
    /* 00530cf9: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00530cfc: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530d02: je 0x530d2a */ if (fZ) goto L_00530d2a;
L_00530d04:; BB(0x00530d04);
    /* 00530d04: mov dword ptr [esi + 0x39c], 3 */ W32((u32)(r_esi+0x39cu), 0x3u);
    /* 00530d0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530d10: mov ecx, esi */ r_ecx = r_esi;
    /* 00530d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530d13: push dword ptr [0xa73364] */ { u32 v = R32((u32)(0xa73364u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530d19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530d1a: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x530d1fu); f_007868f8();
    /* 00530d1f: mov eax, 1 */ r_eax = 0x1u;
    /* 00530d24: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530d27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530d28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530d29: ret  */ FN_RET(0x00530cc4); r_esp += 4; return;
L_00530d2a:; BB(0x00530d2a);
    /* 00530d2a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00530d2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00530d2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00530d2f: mov ecx, esi */ r_ecx = r_esi;
    /* 00530d31: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x530d36u); f_00771458();
    /* 00530d36: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00530d3a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00530d3d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00530d41: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00530d43: fmul qword ptr [0x9224d0] */ ST(0) = ST(0) * R_F64((u32)(0x9224d0u));
    /* 00530d49: fdiv qword ptr [0x9224c8] */ ST(0) = ST(0) / R_F64((u32)(0x9224c8u));
    /* 00530d4f: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00530d53: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00530d58: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00530d5d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00530d61: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00530d65: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00530d69: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00530d6d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00530d71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00530d72: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530d75: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x530d7au); f_007a9018();
    /* 00530d7a: mov ecx, eax */ r_ecx = r_eax;
    /* 00530d7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00530d7f: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00530d85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530d87: je 0x530ed2 */ if (fZ) goto L_00530ed2;
L_00530d8d:; BB(0x00530d8d);
    /* 00530d8d: fld dword ptr [0x922540] */ FPUSH(R_F32((u32)(0x922540u)));
    /* 00530d93: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
L_00530d96:; BB(0x00530d96);
    /* 00530d96: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00530d9a: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530da0: jl 0x530dfe */ if ((fS!=fO)) goto L_00530dfe;
L_00530da2:; BB(0x00530da2);
    /* 00530da2: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530da8: jl 0x530db1 */ if ((fS!=fO)) goto L_00530db1;
L_00530daa:; BB(0x00530daa);
    /* 00530daa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00530dac: jmp 0x530e56 */ goto L_00530e56;
L_00530db1:; BB(0x00530db1);
    /* 00530db1: mov edx, dword ptr [0xa73358] */ r_edx = R32((u32)(0xa73358u));
    /* 00530db7: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00530dbb: mov dword ptr [esi + 0x31c], edx */ W32((u32)(r_esi+0x31cu), r_edx);
    /* 00530dc1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00530dc3: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00530dc6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00530dc8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00530dca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00530dcc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00530dcd: jb 0x530e56 */ if (fC) goto L_00530e56;
L_00530dd3:; BB(0x00530dd3);
    /* 00530dd3: cmp ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530dd6: jg 0x530e56 */ if ((!fZ&&fS==fO)) goto L_00530e56;
L_00530ddc:; BB(0x00530ddc);
    /* 00530ddc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530ddf: push dword ptr [0xa73358] */ { u32 v = R32((u32)(0xa73358u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530de5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530de6: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 00530dec: mov ecx, esi */ r_ecx = r_esi;
    /* 00530dee: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x530df3u); f_007868f8();
    /* 00530df3: mov eax, 1 */ r_eax = 0x1u;
    /* 00530df8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530dfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530dfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530dfd: ret  */ FN_RET(0x00530cc4); r_esp += 4; return;
L_00530dfe:; BB(0x00530dfe);
    /* 00530dfe: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 00530e04: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00530e07: je 0x530e10 */ if (fZ) goto L_00530e10;
L_00530e09:; BB(0x00530e09);
    /* 00530e09: mov edx, 1 */ r_edx = 0x1u;
    /* 00530e0e: jmp 0x530e12 */ goto L_00530e12;
L_00530e10:; BB(0x00530e10);
    /* 00530e10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00530e12:; BB(0x00530e12);
    /* 00530e12: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530e15: je 0x530e8d */ if (fZ) goto L_00530e8d;
L_00530e17:; BB(0x00530e17);
    /* 00530e17: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 00530e1d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530e20: je 0x530e85 */ if (fZ) goto L_00530e85;
L_00530e22:; BB(0x00530e22);
    /* 00530e22: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00530e26: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00530e28:; BB(0x00530e28);
    /* 00530e28: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00530e2a: mov ebp, dword ptr [edx*4 + 0xa73358] */ r_ebp = R32((u32)(r_edx*4+0xa73358u));
    /* 00530e31: mov dword ptr [esi + 0x31c], ebp */ W32((u32)(r_esi+0x31cu), r_ebp);
    /* 00530e37: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 00530e3a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00530e3c: mov ebp, dword ptr [ebp + 0xc] */ r_ebp = R32((u32)(r_ebp+0xcu));
    /* 00530e3f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00530e41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00530e43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00530e44: jb 0x530e4a */ if (fC) goto L_00530e4a;
L_00530e46:; BB(0x00530e46);
    /* 00530e46: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530e48: jle 0x530e5e */ if ((fZ||fS!=fO)) goto L_00530e5e;
L_00530e4a:; BB(0x00530e4a);
    /* 00530e4a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00530e4d: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530e50: jl 0x530e28 */ if ((fS!=fO)) goto L_00530e28;
L_00530e52:; BB(0x00530e52);
    /* 00530e52: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00530e54: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00530e56:; BB(0x00530e56);
    /* 00530e56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530e58: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530e5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530e5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530e5d: ret  */ FN_RET(0x00530cc4); r_esp += 4; return;
L_00530e5e:; BB(0x00530e5e);
    /* 00530e5e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00530e60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00530e62: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 00530e68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530e6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530e6b: mov ecx, esi */ r_ecx = r_esi;
    /* 00530e6d: push dword ptr [edx*4 + 0xa73358] */ { u32 v = R32((u32)(r_edx*4+0xa73358u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530e75: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x530e7au); f_007868f8();
    /* 00530e7a: mov eax, 1 */ r_eax = 0x1u;
    /* 00530e7f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530e82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530e83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530e84: ret  */ FN_RET(0x00530cc4); r_esp += 4; return;
L_00530e85:; BB(0x00530e85);
    /* 00530e85: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00530e88: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00530e8b: je 0x530e22 */ if (fZ) goto L_00530e22;
L_00530e8d:; BB(0x00530e8d);
    /* 00530e8d: mov edx, dword ptr [0xa73358] */ r_edx = R32((u32)(0xa73358u));
    /* 00530e93: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00530e97: mov dword ptr [esi + 0x31c], edx */ W32((u32)(r_esi+0x31cu), r_edx);
    /* 00530e9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00530e9f: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 00530ea2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00530ea4: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00530ea6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00530ea8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00530ea9: jb 0x530e56 */ if (fC) goto L_00530e56;
L_00530eab:; BB(0x00530eab);
    /* 00530eab: cmp ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530eae: jg 0x530e56 */ if ((!fZ&&fS==fO)) goto L_00530e56;
L_00530eb0:; BB(0x00530eb0);
    /* 00530eb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530eb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530eb3: push dword ptr [0xa73358] */ { u32 v = R32((u32)(0xa73358u)); r_esp -= 4; W32(r_esp, v); }
    /* 00530eb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530eba: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 00530ec0: mov ecx, esi */ r_ecx = r_esi;
    /* 00530ec2: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x530ec7u); f_007868f8();
    /* 00530ec7: mov eax, 1 */ r_eax = 0x1u;
    /* 00530ecc: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530ecf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530ed0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530ed1: ret  */ FN_RET(0x00530cc4); r_esp += 4; return;
L_00530ed2:; BB(0x00530ed2);
    /* 00530ed2: fld dword ptr [0x922544] */ FPUSH(R_F32((u32)(0x922544u)));
    /* 00530ed8: jmp 0x530d96 */ goto L_00530d96;
}

void f_00530ee0(void) /* sub_530EE0 */
{
    FN_ENTER(0x00530ee0);
    /* 00530ee0: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00530ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530ee9: jne 0x530f1c */ if (!fZ) goto L_00530f1c;
L_00530eeb:; BB(0x00530eeb);
    /* 00530eeb: movsx eax, word ptr [ecx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x330u));
    /* 00530ef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00530ef4: jl 0x530efb */ if ((fS!=fO)) goto L_00530efb;
L_00530ef6:; BB(0x00530ef6);
    /* 00530ef6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00530ef9: jle 0x530f57 */ if ((fZ||fS!=fO)) goto L_00530f57;
L_00530efb:; BB(0x00530efb);
    /* 00530efb: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 00530f01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530f03: jne 0x530f12 */ if (!fZ) goto L_00530f12;
L_00530f05:; BB(0x00530f05);
    /* 00530f05: mov eax, 2 */ r_eax = 0x2u;
    /* 00530f0a: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00530f11: ret  */ FN_RET(0x00530ee0); r_esp += 4; return;
L_00530f12:; BB(0x00530f12);
    /* 00530f12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00530f14: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00530f1b: ret  */ FN_RET(0x00530ee0); r_esp += 4; return;
L_00530f1c:; BB(0x00530f1c);
    /* 00530f1c: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 00530f22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530f24: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00530f2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530f2d: je 0x530f3a */ if (fZ) goto L_00530f3a;
L_00530f2f:; BB(0x00530f2f);
    /* 00530f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530f31: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00530f38: jmp 0x530f46 */ goto L_00530f46;
L_00530f3a:; BB(0x00530f3a);
    /* 00530f3a: mov eax, 2 */ r_eax = 0x2u;
    /* 00530f3f: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
L_00530f46:; BB(0x00530f46);
    /* 00530f46: mov eax, 1 */ r_eax = 0x1u;
    /* 00530f4b: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00530f52: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x530f57u); f_0053140c();
L_00530f57:; BB(0x00530f57);
    /* 00530f57: ret  */ FN_RET(0x00530ee0); r_esp += 4; return;
}

void f_00530f58(void) /* sub_530F58 */
{
    FN_ENTER(0x00530f58);
    /* 00530f58: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00530f5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00530f61: jle 0x530f68 */ if ((fZ||fS!=fO)) goto L_00530f68;
L_00530f63:; BB(0x00530f63);
    /* 00530f63: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00530f66: jle 0x530f99 */ if ((fZ||fS!=fO)) goto L_00530f99;
L_00530f68:; BB(0x00530f68);
    /* 00530f68: mov eax, 1 */ r_eax = 0x1u;
    /* 00530f6d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00530f74: mov edx, 2 */ r_edx = 0x2u;
    /* 00530f79: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00530f80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530f82: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00530f89: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00530f8c: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00530f91: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00530f94: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x530f99u); f_0053140c();
L_00530f99:; BB(0x00530f99);
    /* 00530f99: ret  */ FN_RET(0x00530f58); r_esp += 4; return;
}

void f_00530f9c(void) /* sub_530F9C */
{
    FN_ENTER(0x00530f9c);
    /* 00530f9c: mov eax, dword ptr [ecx + 0x39c] */ r_eax = R32((u32)(r_ecx+0x39cu));
    /* 00530fa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00530fa4: jl 0x53101d */ if ((fS!=fO)) goto L_0053101d;
L_00530fa6:; BB(0x00530fa6);
    /* 00530fa6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530fa9: jle 0x531027 */ if ((fZ||fS!=fO)) goto L_00531027;
L_00530fab:; BB(0x00530fab);
    /* 00530fab: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530fae: jne 0x530fd3 */ if (!fZ) goto L_00530fd3;
L_00530fb0:; BB(0x00530fb0);
    /* 00530fb0: mov eax, 5 */ r_eax = 0x5u;
    /* 00530fb5: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00530fbc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00530fbe: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00530fc5: mov eax, 1 */ r_eax = 0x1u;
    /* 00530fca: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00530fd1: jmp 0x531048 */ goto L_00531048;
L_00530fd3:; BB(0x00530fd3);
    /* 00530fd3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530fd6: jne 0x53101d */ if (!fZ) goto L_0053101d;
L_00530fd8:; BB(0x00530fd8);
    /* 00530fd8: mov dword ptr [ecx + 0x3b4], 0 */ W32((u32)(r_ecx+0x3b4u), 0x0u);
    /* 00530fe2: mov eax, 4 */ r_eax = 0x4u;
    /* 00530fe7: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00530fee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00530ff0: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 00530ff7: mov edx, 7 */ r_edx = 0x7u;
    /* 00530ffc: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00531003: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 00531009: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 0053100f: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00531015: mov dword ptr [ecx + 0x3f4], eax */ W32((u32)(r_ecx+0x3f4u), r_eax);
    /* 0053101b: jmp 0x531048 */ goto L_00531048;
L_0053101d:; BB(0x0053101d);
    /* 0053101d: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
L_00531027:; BB(0x00531027);
    /* 00531027: mov eax, 3 */ r_eax = 0x3u;
    /* 0053102c: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00531033: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00531035: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 0053103c: mov eax, 1 */ r_eax = 0x1u;
    /* 00531041: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
L_00531048:; BB(0x00531048);
    /* 00531048: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0053104b: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531050: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00531055: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00531058: ret  */ FN_RET(0x00530f9c); r_esp += 4; return;
}

