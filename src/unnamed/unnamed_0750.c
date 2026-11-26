#include "protos.h"

void f_00750000(void)
{
    FN_ENTER(0x00750000);
    /* 00750000: push 0x20558920 */ { u32 v = 0x20558920u; r_esp -= 4; W32(r_esp, v); }
    /* 00750005: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 00750008: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0075000b: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 0075000e: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00750011: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00750014: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750017: je 0x750057 */ if (fZ) goto L_00750057;
L_00750019:; BB(0x00750019);
    /* 00750019: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075001c: je 0x75004b */ if (fZ) goto L_0075004b;
L_0075001e:; BB(0x0075001e);
    /* 0075001e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750021: jne 0x750037 */ if (!fZ) goto L_00750037;
L_00750023:; BB(0x00750023);
    /* 00750023: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00750025: push 0x973c0c */ { u32 v = 0x973c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075002a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75002fu); f_0072db60();
    /* 0075002f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750032: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750034: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750035: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00750036: ret  */ FN_RET(0x00750000); r_esp += 4; return;
L_00750037:; BB(0x00750037);
    /* 00750037: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00750039: push 0x973c14 */ { u32 v = 0x973c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0075003e: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x750043u); f_0072db60();
    /* 00750043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075004a: ret  */ FN_RET(0x00750000); r_esp += 4; return;
L_0075004b:; BB(0x0075004b);
    /* 0075004b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0075004d: push 0x973c04 */ { u32 v = 0x973c04u; r_esp -= 4; W32(r_esp, v); }
    /* 00750052: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x750057u); f_0072db60();
L_00750057:; BB(0x00750057);
    /* 00750057: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075005a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075005b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075005c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075005d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075005e: ret  */ FN_RET(0x00750000); r_esp += 4; return;
}

void f_00750047(void)
{
    FN_ENTER(0x00750047);
    /* 00750047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075004a: ret  */ FN_RET(0x00750047); r_esp += 4; return;
}

void f_0075004a(void)
{
    FN_ENTER(0x0075004a);
    /* 0075004a: ret  */ FN_RET(0x0075004a); r_esp += 4; return;
}

void f_00750053(void)
{
    FN_ENTER(0x00750053);
    /* 00750053: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fC = 0; }
    /* 00750055: std  */ rt_df = 1;
    /* 00750056: inc dword ptr [ebx + 0x5d5b08c4] */ { u32 ad = (u32)(r_ebx+0x5d5b08c4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075005c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075005d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075005e: ret  */ FN_RET(0x00750053); r_esp += 4; return;
}

void f_00750067(void)
{
    FN_ENTER(0x00750067);
    goto L_00750067;
L_0074fff9:; BB(0x0074fff9);
    /* 0074fff9: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0074fffc: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ffff: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 00750002: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00750005: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 00750008: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0075000b: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 0075000e: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00750011: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00750014: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750017: je 0x750057 */ if (fZ) goto L_00750057;
L_00750019:; BB(0x00750019);
    /* 00750019: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075001c: je 0x75004b */ if (fZ) goto L_0075004b;
L_0075001e:; BB(0x0075001e);
    /* 0075001e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750021: jne 0x750037 */ if (!fZ) goto L_00750037;
L_00750023:; BB(0x00750023);
    /* 00750023: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00750025: push 0x973c0c */ { u32 v = 0x973c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075002a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75002fu); f_0072db60();
    /* 0075002f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750032: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750034: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750035: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00750036: ret  */ FN_RET(0x00750067); r_esp += 4; return;
L_00750037:; BB(0x00750037);
    /* 00750037: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00750039: push 0x973c14 */ { u32 v = 0x973c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0075003e: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x750043u); f_0072db60();
    /* 00750043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075004a: ret  */ FN_RET(0x00750067); r_esp += 4; return;
L_0075004b:; BB(0x0075004b);
    /* 0075004b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0075004d: push 0x973c04 */ { u32 v = 0x973c04u; r_esp -= 4; W32(r_esp, v); }
    /* 00750052: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x750057u); f_0072db60();
L_00750057:; BB(0x00750057);
    /* 00750057: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075005a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075005b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075005c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075005d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075005e: ret  */ FN_RET(0x00750067); r_esp += 4; return;
L_00750067:; BB(0x00750067);
    /* 00750067: and al, 0x8d */ {  u32 a = (u8)r_eax; u32 b = 0x8du; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fS = ((r >> 7) & 1); fO = 0; }
    /* 00750069: jge 0x75006c */ if ((fS==fO)) goto L_0075006c;
L_0075006b:; BB(0x0075006b);
    /* 0075006b: jmp 0x74fff9 */ goto L_0074fff9;
L_0075006c:; BB(0x0075006c);
    /* 0075006c: mov word ptr [eax + 0x418b9090], ss */ W16((u32)(r_eax+0x418b9090u), 0x2bu);
    /* 00750072: movsx edx, byte ptr fs:[eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+TEB));
    /* 00750076: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750078: je 0x750080 */ if (fZ) goto L_00750080;
L_0075007a:; BB(0x0075007a);
    /* 0075007a: call 0x74fde0 */ r_esp -= 4; W32(r_esp, 0x75007fu); f_0074fde0();
    /* 0075007f: ret  */ FN_RET(0x00750067); r_esp += 4; return;
L_00750080:; BB(0x00750080);
    /* 00750080: call 0x74fec8 */ r_esp -= 4; W32(r_esp, 0x750085u); f_0074fec8();
    /* 00750085: ret  */ FN_RET(0x00750067); r_esp += 4; return;
}

void f_0075006c(void)
{
    FN_ENTER(0x0075006c);
    /* 0075006c: mov word ptr [eax + 0x418b9090], ss */ W16((u32)(r_eax+0x418b9090u), 0x2bu);
    /* 00750072: movsx edx, byte ptr fs:[eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+TEB));
    /* 00750076: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750078: je 0x750080 */ if (fZ) goto L_00750080;
L_0075007a:; BB(0x0075007a);
    /* 0075007a: call 0x74fde0 */ r_esp -= 4; W32(r_esp, 0x75007fu); f_0074fde0();
    /* 0075007f: ret  */ FN_RET(0x0075006c); r_esp += 4; return;
L_00750080:; BB(0x00750080);
    /* 00750080: call 0x74fec8 */ r_esp -= 4; W32(r_esp, 0x750085u); f_0074fec8();
    /* 00750085: ret  */ FN_RET(0x0075006c); r_esp += 4; return;
}

void f_0075006f(void)
{
    FN_ENTER(0x0075006f);
    /* 0075006f: nop  */ ;
    /* 00750070: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00750073: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00750076: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750078: je 0x750080 */ if (fZ) goto L_00750080;
L_0075007a:; BB(0x0075007a);
    /* 0075007a: call 0x74fde0 */ r_esp -= 4; W32(r_esp, 0x75007fu); f_0074fde0();
    /* 0075007f: ret  */ FN_RET(0x0075006f); r_esp += 4; return;
L_00750080:; BB(0x00750080);
    /* 00750080: call 0x74fec8 */ r_esp -= 4; W32(r_esp, 0x750085u); f_0074fec8();
    /* 00750085: ret  */ FN_RET(0x0075006f); r_esp += 4; return;
}

void f_00750070(void) /* sub_750070 */
{
    FN_ENTER(0x00750070);
    /* 00750070: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00750073: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00750076: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750078: je 0x750080 */ if (fZ) goto L_00750080;
L_0075007a:; BB(0x0075007a);
    /* 0075007a: call 0x74fde0 */ r_esp -= 4; W32(r_esp, 0x75007fu); f_0074fde0();
    /* 0075007f: ret  */ FN_RET(0x00750070); r_esp += 4; return;
L_00750080:; BB(0x00750080);
    /* 00750080: call 0x74fec8 */ r_esp -= 4; W32(r_esp, 0x750085u); f_0074fec8();
    /* 00750085: ret  */ FN_RET(0x00750070); r_esp += 4; return;
}

void f_00750073(void)
{
    FN_ENTER(0x00750073);
    /* 00750073: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00750076: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750078: je 0x750080 */ if (fZ) goto L_00750080;
L_0075007a:; BB(0x0075007a);
    /* 0075007a: call 0x74fde0 */ r_esp -= 4; W32(r_esp, 0x75007fu); f_0074fde0();
    /* 0075007f: ret  */ FN_RET(0x00750073); r_esp += 4; return;
L_00750080:; BB(0x00750080);
    /* 00750080: call 0x74fec8 */ r_esp -= 4; W32(r_esp, 0x750085u); f_0074fec8();
    /* 00750085: ret  */ FN_RET(0x00750073); r_esp += 4; return;
}

void f_00750074(void)
{
    FN_ENTER(0x00750074);
    /* 00750074: mov esi, 0x74d28510 */ r_esi = 0x74d28510u;
    /* 00750079: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075007a: call 0x74fde0 */ r_esp -= 4; W32(r_esp, 0x75007fu); f_0074fde0();
    /* 0075007f: ret  */ FN_RET(0x00750074); r_esp += 4; return;
}

void f_00750088(void) /* sub_750088 */
{
    FN_ENTER(0x00750088);
    /* 00750088: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750089: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075008b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075008d: call 0x7500ac */ r_esp -= 4; W32(r_esp, 0x750092u); f_007500ac();
    /* 00750092: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00750096: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750098: jne 0x75009e */ if (!fZ) goto L_0075009e;
L_0075009a:; BB(0x0075009a);
    /* 0075009a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075009b: ret 4 */ FN_RET(0x00750088); r_esp += 8; return;
L_0075009e:; BB(0x0075009e);
    /* 0075009e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075009f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7500a4u); f_005c2f74();
    /* 007500a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007500a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007500a6: ret 4 */ FN_RET(0x00750088); r_esp += 8; return;
}

void f_007500ac(void) /* sub_7500AC */
{
    FN_ENTER(0x007500ac);
    /* 007500ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007500ad: mov ebp, esp */ r_ebp = r_esp;
    /* 007500af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007500b1: push 0x8f2b78 */ { u32 v = 0x8f2b78u; r_esp -= 4; W32(r_esp, v); }
    /* 007500b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007500bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007500bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007500c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007500c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007500ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007500cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007500d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007500d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007500d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007500dd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007500e0: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007500e3: mov dword ptr [eax], 0xb42210 */ W32((u32)(r_eax), 0xb42210u);
    /* 007500e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007500eb: je 0x750104 */ if (fZ) goto L_00750104;
L_007500ed:; BB(0x007500ed);
    /* 007500ed: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007500f1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007500f6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007500fa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007500fd: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_00750104:; BB(0x00750104);
    /* 00750104: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00750107: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750109: je 0x75011a */ if (fZ) goto L_0075011a;
L_0075010b:; BB(0x0075010b);
    /* 0075010b: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x750110u); f_0073d160();
    /* 00750110: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750113: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075011a:; BB(0x0075011a);
    /* 0075011a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075011d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075011f: je 0x750130 */ if (fZ) goto L_00750130;
L_00750121:; BB(0x00750121);
    /* 00750121: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750126u); f_007127b0();
    /* 00750126: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750129: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_00750130:; BB(0x00750130);
    /* 00750130: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00750133: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750135: je 0x750146 */ if (fZ) goto L_00750146;
L_00750137:; BB(0x00750137);
    /* 00750137: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75013cu); f_007127b0();
    /* 0075013c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075013f: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_00750146:; BB(0x00750146);
    /* 00750146: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00750149: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075014b: je 0x75015c */ if (fZ) goto L_0075015c;
L_0075014d:; BB(0x0075014d);
    /* 0075014d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750152u); f_007127b0();
    /* 00750152: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750155: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0075015c:; BB(0x0075015c);
    /* 0075015c: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075015f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750160: call 0x78e0ec */ r_esp -= 4; W32(r_esp, 0x750165u); f_0078e0ec();
    /* 00750165: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00750166: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075016d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750170: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x750175u); f_008171e8();
    /* 00750175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750178: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075017f: mov esp, ebp */ r_esp = r_ebp;
    /* 00750181: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750182: ret  */ FN_RET(0x007500ac); r_esp += 4; return;
}

void f_0075010a(void)
{
    FN_ENTER(0x0075010a);
    /* 0075010a: psubsb mm2, qword ptr [eax - 0x30] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_eax+0xffffffd0u)); MM64 r; r.b[0] = (u8)(i8)rt_sat8((i32)(i8)a.b[0] - (i32)(i8)b.b[0]); r.b[1] = (u8)(i8)rt_sat8((i32)(i8)a.b[1] - (i32)(i8)b.b[1]); r.b[2] = (u8)(i8)rt_sat8((i32)(i8)a.b[2] - (i32)(i8)b.b[2]); r.b[3] = (u8)(i8)rt_sat8((i32)(i8)a.b[3] - (i32)(i8)b.b[3]); r.b[4] = (u8)(i8)rt_sat8((i32)(i8)a.b[4] - (i32)(i8)b.b[4]); r.b[5] = (u8)(i8)rt_sat8((i32)(i8)a.b[5] - (i32)(i8)b.b[5]); r.b[6] = (u8)(i8)rt_sat8((i32)(i8)a.b[6] - (i32)(i8)b.b[6]); r.b[7] = (u8)(i8)rt_sat8((i32)(i8)a.b[7] - (i32)(i8)b.b[7]); fpr[2] = (long double)(i64)(r.q); }
    UNSUP(0x0075010e, "falls out of decoded code");
}

void f_00750184(void) /* sub_750184 */
{
    FN_ENTER(0x00750184);
    /* 00750184: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00750185: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750186: mov esi, ecx */ r_esi = r_ecx;
    /* 00750188: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0075018c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075018d: mov ecx, esi */ r_ecx = r_esi;
    /* 0075018f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x750194u); f_008193cc();
    /* 00750194: mov dword ptr [esi], 0xb42210 */ W32((u32)(r_esi), 0xb42210u);
    /* 0075019a: mov eax, 8 */ r_eax = 0x8u;
    /* 0075019f: mov word ptr [esi + 0x40], ax */ W16((u32)(r_esi+0x40u), (u16)r_eax);
    /* 007501a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007501a5: mov dword ptr [esi + 0x24], 0xffffffff */ W32((u32)(r_esi+0x24u), 0xffffffffu);
    /* 007501ac: mov byte ptr [esi + 0x42], dl */ W8((u32)(r_esi+0x42u), (u8)r_edx);
    /* 007501af: mov byte ptr [esi + 0x43], dl */ W8((u32)(r_esi+0x43u), (u8)r_edx);
    /* 007501b2: mov eax, dword ptr [0x9f4400] */ r_eax = R32((u32)(0x9f4400u));
    /* 007501b7: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 007501ba: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007501bd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007501c1: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007501c4: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 007501c7: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 007501ca: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 007501cd: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 007501d0: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 007501d3: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 007501d6: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 007501d9: mov eax, esi */ r_eax = r_esi;
    /* 007501db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007501dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007501dd: ret 8 */ FN_RET(0x00750184); r_esp += 12; return;
}

void f_007501e0(void) /* sub_7501E0 */
{
    FN_ENTER(0x007501e0);
    /* 007501e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007501e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007501e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007501e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007501e6: mov edi, ecx */ r_edi = r_ecx;
    /* 007501e8: movzx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)R8((u32)(r_edi+0x1cu));
    /* 007501ec: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007501ef: ja 0x7503f8 */ if ((!fC&&!fZ)) goto L_007503f8;
L_007501f5:; BB(0x007501f5);
    /* 007501f5: mov eax, dword ptr [eax*4 + 0x973c2c] */ r_eax = R32((u32)(r_eax*4+0x973c2cu));
    /* 007501fc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x007501e0); r_esp += 4; return;
}

void f_007501fe(void)
{
    FN_ENTER(0x007501fe);
    /* 007501fe: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00750201: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750203: je 0x750219 */ if (fZ) goto L_00750219;
L_00750205:; BB(0x00750205);
    /* 00750205: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00750209: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075020e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00750212: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
L_00750219:; BB(0x00750219);
    /* 00750219: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075021d: jmp 0x7503f8 */ goto L_007503f8;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x007501fe); r_esp += 4; return;
}

void f_00750222(void)
{
    FN_ENTER(0x00750222);
    /* 00750222: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00750225: jmp 0x750249 */ goto L_00750249;
L_00750249:; BB(0x00750249);
    /* 00750249: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x75024eu); f_0078ed20();
    /* 0075024e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750250: je 0x75025d */ if (fZ) goto L_0075025d;
L_00750252:; BB(0x00750252);
    /* 00750252: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 00750256: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750259: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075025a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075025b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075025c: ret  */ FN_RET(0x00750222); r_esp += 4; return;
L_0075025d:; BB(0x0075025d);
    /* 0075025d: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00750260: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x750265u); f_0078ed14();
    /* 00750265: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750267: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_0075026d:; BB(0x0075026d);
    /* 0075026d: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00750270: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x750275u); f_0078ed4c();
    /* 00750275: mov ebx, eax */ r_ebx = r_eax;
    /* 00750277: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750278: call 0x78e000 */ r_esp -= 4; W32(r_esp, 0x75027du); f_0078e000();
    /* 0075027d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075027e: call 0x78e070 */ r_esp -= 4; W32(r_esp, 0x750283u); f_0078e070();
    /* 00750283: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750284: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x750289u); f_00857e98();
    /* 00750289: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075028a: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 0075028e: jmp 0x7503f8 */ goto L_007503f8;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x00750222); r_esp += 4; return;
}

void f_00750227(void)
{
    FN_ENTER(0x00750227);
    /* 00750227: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0075022a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075022c: je 0x75023a */ if (fZ) goto L_0075023a;
L_0075022e:; BB(0x0075022e);
    /* 0075022e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750233u); f_007127b0();
    /* 00750233: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
L_0075023a:; BB(0x0075023a);
    /* 0075023a: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0075023d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075023f: je 0x7503ff */ if (fZ) goto L_007503ff;
L_00750245:; BB(0x00750245);
    /* 00750245: mov byte ptr [edi + 0x1c], 0xa */ W8((u32)(r_edi+0x1cu), 0xau);
    /* 00750249: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x75024eu); f_0078ed20();
    /* 0075024e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750250: je 0x75025d */ if (fZ) goto L_0075025d;
L_00750252:; BB(0x00750252);
    /* 00750252: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 00750256: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750259: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075025a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075025b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075025c: ret  */ FN_RET(0x00750227); r_esp += 4; return;
L_0075025d:; BB(0x0075025d);
    /* 0075025d: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00750260: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x750265u); f_0078ed14();
    /* 00750265: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750267: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_0075026d:; BB(0x0075026d);
    /* 0075026d: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00750270: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x750275u); f_0078ed4c();
    /* 00750275: mov ebx, eax */ r_ebx = r_eax;
    /* 00750277: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750278: call 0x78e000 */ r_esp -= 4; W32(r_esp, 0x75027du); f_0078e000();
    /* 0075027d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075027e: call 0x78e070 */ r_esp -= 4; W32(r_esp, 0x750283u); f_0078e070();
    /* 00750283: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750284: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x750289u); f_00857e98();
    /* 00750289: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075028a: mov byte ptr [edi + 0x1c], 0xb */ W8((u32)(r_edi+0x1cu), 0xbu);
    /* 0075028e: jmp 0x7503f8 */ goto L_007503f8;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x00750227); r_esp += 4; return;
L_007503ff:; BB(0x007503ff);
    /* 007503ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00750401: call 0x750514 */ r_esp -= 4; W32(r_esp, 0x750406u); f_00750514();
    /* 00750406: mov ecx, eax */ r_ecx = r_eax;
    /* 00750408: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 0075040b: jmp 0x750245 */ goto L_00750245;
}

void f_00750293(void)
{
    FN_ENTER(0x00750293);
    /* 00750293: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00750296: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750298: je 0x7502a6 */ if (fZ) goto L_007502a6;
L_0075029a:; BB(0x0075029a);
    /* 0075029a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75029fu); f_007127b0();
    /* 0075029f: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_007502a6:; BB(0x007502a6);
    /* 007502a6: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 007502aa: jmp 0x7503f8 */ goto L_007503f8;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x00750293); r_esp += 4; return;
}

void f_007502af(void)
{
    FN_ENTER(0x007502af);
    /* 007502af: mov ebx, dword ptr [edi + 0x30] */ r_ebx = R32((u32)(r_edi+0x30u));
    /* 007502b2: jmp 0x7502ce */ goto L_007502ce;
L_007502ce:; BB(0x007502ce);
    /* 007502ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007502d0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7502d5u); f_007365f4();
    /* 007502d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007502d6: mov ecx, edi */ r_ecx = r_edi;
    /* 007502d8: call 0x7505e8 */ r_esp -= 4; W32(r_esp, 0x7502ddu); f_007505e8();
    /* 007502dd: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007502e0: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007502e7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007502ea: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_007502f0:; BB(0x007502f0);
    /* 007502f0: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 007502f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007502f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007502f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007502f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007502fa: ret  */ FN_RET(0x007502af); r_esp += 4; return;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x007502af); r_esp += 4; return;
}

void f_007502b4(void)
{
    FN_ENTER(0x007502b4);
    /* 007502b4: mov ebx, dword ptr [edi + 0x30] */ r_ebx = R32((u32)(r_edi+0x30u));
    /* 007502b7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007502b9: je 0x750422 */ if (fZ) goto L_00750422;
L_007502bf:; BB(0x007502bf);
    /* 007502bf: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 007502c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007502c4: je 0x750410 */ if (fZ) goto L_00750410;
L_007502ca:; BB(0x007502ca);
    /* 007502ca: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 007502ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007502d0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7502d5u); f_007365f4();
    /* 007502d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007502d6: mov ecx, edi */ r_ecx = r_edi;
    /* 007502d8: call 0x7505e8 */ r_esp -= 4; W32(r_esp, 0x7502ddu); f_007505e8();
    /* 007502dd: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007502e0: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007502e7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007502ea: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_007502f0:; BB(0x007502f0);
    /* 007502f0: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 007502f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007502f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007502f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007502f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007502fa: ret  */ FN_RET(0x007502b4); r_esp += 4; return;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x007502b4); r_esp += 4; return;
L_00750410:; BB(0x00750410);
    /* 00750410: mov ecx, edi */ r_ecx = r_edi;
    /* 00750412: call 0x750634 */ r_esp -= 4; W32(r_esp, 0x750417u); f_00750634();
    /* 00750417: mov ebx, dword ptr [edi + 0x30] */ r_ebx = R32((u32)(r_edi+0x30u));
    /* 0075041a: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 0075041d: jmp 0x7502ca */ goto L_007502ca;
L_00750422:; BB(0x00750422);
    /* 00750422: call 0x78e104 */ r_esp -= 4; W32(r_esp, 0x750427u); f_0078e104();
    /* 00750427: mov esi, eax */ r_esi = r_eax;
    /* 00750429: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075042b: je 0x7504ee */ if (fZ) goto L_007504ee;
L_00750431:; BB(0x00750431);
    /* 00750431: push 0xad */ { u32 v = 0xadu; r_esp -= 4; W32(r_esp, v); }
    /* 00750436: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75043bu); f_0073ec50();
    /* 0075043b: mov ebx, eax */ r_ebx = r_eax;
    /* 0075043d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0075043f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x750444u); f_0079317c();
    /* 00750444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750445: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00750447: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750448: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75044du); f_00735460();
    /* 0075044d: mov ebx, eax */ r_ebx = r_eax;
    /* 0075044f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750452: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00750455: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 00750458: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0075045a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075045c: jle 0x75049d */ if ((fZ||fS!=fO)) goto L_0075049d;
L_0075045e:; BB(0x0075045e);
    /* 0075045e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00750461: mov edi, edx */ r_edi = r_edx;
    /* 00750463: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00750467: mov ebp, eax */ r_ebp = r_eax;
L_00750469:; BB(0x00750469);
    /* 00750469: movzx eax, word ptr [ebp + 0x20] */ r_eax = (u32)R16((u32)(r_ebp+0x20u));
    /* 0075046d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075046f: je 0x75047e */ if (fZ) goto L_0075047e;
L_00750471:; BB(0x00750471);
    /* 00750471: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00750472: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00750474: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750476: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00750477: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75047cu); f_00735c90();
    /* 0075047c: jmp 0x750489 */ goto L_00750489;
L_0075047e:; BB(0x0075047e);
    /* 0075047e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075047f: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00750481: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750483: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00750484: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x750489u); f_00735ee0();
L_00750489:; BB(0x00750489);
    /* 00750489: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075048c: add ebp, 0x178 */ {  u32 a = r_ebp; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00750492: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00750494: jl 0x750469 */ if ((fS!=fO)) goto L_00750469;
L_00750496:; BB(0x00750496);
    /* 00750496: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00750499: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0075049d:; BB(0x0075049d);
    /* 0075049d: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 007504a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007504a6: jle 0x7504d5 */ if ((fZ||fS!=fO)) goto L_007504d5;
L_007504a8:; BB(0x007504a8);
    /* 007504a8: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 007504ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007504af: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 007504b6: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007504bc: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 007504c3: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007504c8: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7504cdu); f_007361d0();
L_007504cd:; BB(0x007504cd);
    /* 007504cd: mov dword ptr [edi + 0x30], ebx */ W32((u32)(r_edi+0x30u), r_ebx);
    /* 007504d0: jmp 0x7502bf */ goto L_007502bf;
L_007504d5:; BB(0x007504d5);
    /* 007504d5: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 007504da: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7504dfu); f_0079317c();
    /* 007504df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007504e0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007504e2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007504e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007504e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007504e7: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x7504ecu); f_00735ee0();
    /* 007504ec: jmp 0x7504a8 */ goto L_007504a8;
L_007504ee:; BB(0x007504ee);
    /* 007504ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007504f0: jmp 0x7504cd */ goto L_007504cd;
}

void f_007502fb(void)
{
    FN_ENTER(0x007502fb);
    /* 007502fb: lea eax, [edi + 0x40] */ r_eax = (u32)(r_edi+0x40u);
    /* 007502fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007502ff: call 0x78e0ec */ r_esp -= 4; W32(r_esp, 0x750304u); f_0078e0ec();
    /* 00750304: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00750305: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 00750309: jmp 0x7503f8 */ goto L_007503f8;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x007502fb); r_esp += 4; return;
}

void f_0075030e(void)
{
    FN_ENTER(0x0075030e);
    /* 0075030e: lea eax, [edi + 0x40] */ r_eax = (u32)(r_edi+0x40u);
    /* 00750311: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750312: call 0x78e0b0 */ r_esp -= 4; W32(r_esp, 0x750317u); f_0078e0b0();
    /* 00750317: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00750318: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075031c: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00750321: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00750323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750324: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00750329: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75032eu); f_007c1160();
    /* 0075032e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750330: je 0x750348 */ if (fZ) goto L_00750348;
L_00750332:; BB(0x00750332);
    /* 00750332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00750334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750337: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075033c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750341u); f_00814298();
    /* 00750341: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750344: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
L_00750348:; BB(0x00750348);
    /* 00750348: call 0x78e104 */ r_esp -= 4; W32(r_esp, 0x75034du); f_0078e104();
    /* 0075034d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075034f: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_00750355:; BB(0x00750355);
    /* 00750355: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 00750359: jmp 0x7503f8 */ goto L_007503f8;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x0075030e); r_esp += 4; return;
}

void f_0075031c(void)
{
    FN_ENTER(0x0075031c);
    /* 0075031c: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00750321: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00750323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750324: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00750329: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75032eu); f_007c1160();
    /* 0075032e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750330: je 0x750348 */ if (fZ) goto L_00750348;
L_00750332:; BB(0x00750332);
    /* 00750332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00750334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750337: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075033c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750341u); f_00814298();
    /* 00750341: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750344: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
L_00750348:; BB(0x00750348);
    /* 00750348: call 0x78e104 */ r_esp -= 4; W32(r_esp, 0x75034du); f_0078e104();
    /* 0075034d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075034f: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_00750355:; BB(0x00750355);
    /* 00750355: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 00750359: jmp 0x7503f8 */ goto L_007503f8;
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x0075031c); r_esp += 4; return;
}

void f_0075035e(void)
{
    FN_ENTER(0x0075035e);
    /* 0075035e: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00750361: mov dword ptr [edi + 0x24], 0xffffffff */ W32((u32)(r_edi+0x24u), 0xffffffffu);
    /* 00750368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075036a: je 0x750504 */ if (fZ) goto L_00750504;
L_00750370:; BB(0x00750370);
    /* 00750370: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 00750373: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750375: je 0x7504f2 */ if (fZ) goto L_007504f2;
L_0075037b:; BB(0x0075037b);
    /* 0075037b: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00750382: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00750388: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0075038b: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00750392: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750394: je 0x75039d */ if (fZ) goto L_0075039d;
L_00750396:; BB(0x00750396);
    /* 00750396: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750398: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75039du); f_00760acc();
L_0075039d:; BB(0x0075039d);
    /* 0075039d: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 007503a1: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 007503a4: movsx edx, word ptr [eax + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 007503ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007503ac: mov ecx, edi */ r_ecx = r_edi;
    /* 007503ae: call 0x75065c */ r_esp -= 4; W32(r_esp, 0x7503b3u); f_0075065c();
    /* 007503b3: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 007503b6: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007503bd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007503bf: je 0x7503d4 */ if (fZ) goto L_007503d4;
L_007503c1:; BB(0x007503c1);
    /* 007503c1: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 007503c4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007503c6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x7503c9u); call_ind(t); }
    /* 007503c9: mov byte ptr [edi + 0x1c], 0xc */ W8((u32)(r_edi+0x1cu), 0xcu);
    /* 007503cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503d3: ret  */ FN_RET(0x0075035e); r_esp += 4; return;
L_007503d4:; BB(0x007503d4);
    /* 007503d4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007503d6: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_007503d8:; BB(0x007503d8);
    /* 007503d8: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 007503db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007503dd: je 0x7503ee */ if (fZ) goto L_007503ee;
L_007503df:; BB(0x007503df);
    /* 007503df: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7503e4u); f_007127b0();
    /* 007503e4: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 007503e7: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_007503ee:; BB(0x007503ee);
    /* 007503ee: mov ecx, edx */ r_ecx = r_edx;
    /* 007503f0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7503f5u); f_007365f4();
    /* 007503f5: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x0075035e); r_esp += 4; return;
L_007504f2:; BB(0x007504f2);
    /* 007504f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007504f4: call 0x750730 */ r_esp -= 4; W32(r_esp, 0x7504f9u); f_00750730();
    /* 007504f9: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 007504fc: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 007504ff: jmp 0x75037b */ goto L_0075037b;
L_00750504:; BB(0x00750504);
    /* 00750504: mov ecx, edi */ r_ecx = r_edi;
    /* 00750506: call 0x750690 */ r_esp -= 4; W32(r_esp, 0x75050bu); f_00750690();
    /* 0075050b: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0075050e: jmp 0x750370 */ goto L_00750370;
}

void f_007503a1(void)
{
    FN_ENTER(0x007503a1);
    /* 007503a1: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 007503a4: movsx edx, word ptr [eax + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 007503ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007503ac: mov ecx, edi */ r_ecx = r_edi;
    /* 007503ae: call 0x75065c */ r_esp -= 4; W32(r_esp, 0x7503b3u); f_0075065c();
    /* 007503b3: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 007503b6: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007503bd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007503bf: je 0x7503d4 */ if (fZ) goto L_007503d4;
L_007503c1:; BB(0x007503c1);
    /* 007503c1: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 007503c4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007503c6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x7503c9u); call_ind(t); }
    /* 007503c9: mov byte ptr [edi + 0x1c], 0xc */ W8((u32)(r_edi+0x1cu), 0xcu);
    /* 007503cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503d3: ret  */ FN_RET(0x007503a1); r_esp += 4; return;
L_007503d4:; BB(0x007503d4);
    /* 007503d4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007503d6: je 0x7503f8 */ if (fZ) goto L_007503f8;
L_007503d8:; BB(0x007503d8);
    /* 007503d8: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 007503db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007503dd: je 0x7503ee */ if (fZ) goto L_007503ee;
L_007503df:; BB(0x007503df);
    /* 007503df: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7503e4u); f_007127b0();
    /* 007503e4: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 007503e7: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_007503ee:; BB(0x007503ee);
    /* 007503ee: mov ecx, edx */ r_ecx = r_edx;
    /* 007503f0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7503f5u); f_007365f4();
    /* 007503f5: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
L_007503f8:; BB(0x007503f8);
    /* 007503f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007503fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007503fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007503fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007503fe: ret  */ FN_RET(0x007503a1); r_esp += 4; return;
}

void f_00750514(void) /* sub_750514 */
{
    FN_ENTER(0x00750514);
    /* 00750514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00750515: mov ebp, esp */ r_ebp = r_esp;
    /* 00750517: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00750519: push 0x8f2ba0 */ { u32 v = 0x8f2ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075051e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00750524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750525: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075052c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075052f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00750532: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00750535: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00750538: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0075053b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075053e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00750545: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00750547: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75054cu); f_005caba4();
    /* 0075054c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075054d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00750550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750552: je 0x7505e1 */ if (fZ) goto L_007505e1;
L_00750558:; BB(0x00750558);
    /* 00750558: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0075055f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00750566: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075056c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075056f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00750572: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00750574: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00750576: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075057b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075057c: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x750581u); f_0078eba4();
    /* 00750581: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00750584: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0075058b:; BB(0x0075058b);
    /* 0075058b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00750592: call 0x78e050 */ r_esp -= 4; W32(r_esp, 0x750597u); f_0078e050();
    /* 00750597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750598: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075059a: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x75059fu); f_0078ed74();
    /* 0075059f: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 007505a4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7505a9u); f_0073ec50();
    /* 007505a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007505aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007505ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007505ad: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x7505b2u); f_0078ed84();
    /* 007505b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007505b4: call 0x78ee8c */ r_esp -= 4; W32(r_esp, 0x7505b9u); f_0078ee8c();
    /* 007505b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007505bb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7505c0u); f_0061cdb0();
    /* 007505c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007505c2: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x7505c7u); f_0078ee34();
    /* 007505c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007505c9: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x7505ceu); f_0078ee74();
    /* 007505ce: mov eax, ebx */ r_eax = r_ebx;
    /* 007505d0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007505d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007505d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007505dd: mov esp, ebp */ r_esp = r_ebp;
    /* 007505df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007505e0: ret  */ FN_RET(0x00750514); r_esp += 4; return;
L_007505e1:; BB(0x007505e1);
    /* 007505e1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007505e3: jmp 0x75058b */ goto L_0075058b;
}

void f_007505e8(void) /* sub_7505E8 */
{
    FN_ENTER(0x007505e8);
    /* 007505e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007505e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007505ea: mov esi, ecx */ r_esi = r_ecx;
    /* 007505ec: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007505f0: cmp ebx, dword ptr [esi + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007505f3: je 0x75062f */ if (fZ) goto L_0075062f;
L_007505f5:; BB(0x007505f5);
    /* 007505f5: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007505f8: je 0x75062f */ if (fZ) goto L_0075062f;
L_007505fa:; BB(0x007505fa);
    /* 007505fa: call 0x78e104 */ r_esp -= 4; W32(r_esp, 0x7505ffu); f_0078e104();
    /* 007505ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750601: je 0x75062f */ if (fZ) goto L_0075062f;
L_00750603:; BB(0x00750603);
    /* 00750603: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00750606: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075060b: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 0075060e: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00750611: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750613: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00750615: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750617: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750619: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075061b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075061d: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075061f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750621: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750623: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750625: lea eax, [edx + eax + 0x28] */ r_eax = (u32)(r_edx+r_eax+0x28u);
    /* 00750629: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075062a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75062fu); f_0073ae38();
L_0075062f:; BB(0x0075062f);
    /* 0075062f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750630: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750631: ret 4 */ FN_RET(0x007505e8); r_esp += 8; return;
}

void f_00750634(void) /* sub_750634 */
{
    FN_ENTER(0x00750634);
    /* 00750634: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750635: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00750637: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 0075063c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x750641u); f_0073ec50();
    /* 00750641: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750643: push 0x973c5c */ { u32 v = 0x973c5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00750648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750649: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75064eu); f_0073a8dc();
    /* 0075064e: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00750655: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750658: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750659: ret  */ FN_RET(0x00750634); r_esp += 4; return;
}

void f_0075065c(void) /* sub_75065C */
{
    FN_ENTER(0x0075065c);
    /* 0075065c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075065d: mov edi, ecx */ r_edi = r_ecx;
    /* 0075065f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00750663: cmp eax, dword ptr [edi + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00750666: jne 0x75066c */ if (!fZ) goto L_0075066c;
L_00750668:; BB(0x00750668);
    /* 00750668: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00750669: ret 4 */ FN_RET(0x0075065c); r_esp += 8; return;
L_0075066c:; BB(0x0075066c);
    /* 0075066c: push dword ptr [eax*4 + 0x973c64] */ { u32 v = R32((u32)(r_eax*4+0x973c64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750673: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00750676: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75067bu); f_0079317c();
    /* 0075067b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075067c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00750681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750682: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00750685: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75068au); f_0073ae38();
    /* 0075068a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075068b: ret 4 */ FN_RET(0x0075065c); r_esp += 8; return;
}

void f_00750690(void) /* sub_750690 */
{
    FN_ENTER(0x00750690);
    /* 00750690: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00750691: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 00750696: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75069bu); f_0073ec50();
    /* 0075069b: mov esi, eax */ r_esi = r_eax;
    /* 0075069d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0075069f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7506a4u); f_0079317c();
    /* 007506a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007506a5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007506a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007506a8: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x7506adu); f_00735460();
    /* 007506ad: mov esi, eax */ r_esi = r_eax;
    /* 007506af: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007506b2: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7506b7u); f_007a61a4();
    /* 007506b7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007506ba: je 0x750715 */ if (fZ) goto L_00750715;
L_007506bc:; BB(0x007506bc);
    /* 007506bc: push 0x141 */ { u32 v = 0x141u; r_esp -= 4; W32(r_esp, v); }
    /* 007506c1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7506c6u); f_0079317c();
    /* 007506c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007506c7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007506c9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007506cb: mov ecx, esi */ r_ecx = r_esi;
    /* 007506cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007506ce: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x7506d3u); f_00735ee0();
L_007506d3:; BB(0x007506d3);
    /* 007506d3: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 007506d8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7506ddu); f_0079317c();
    /* 007506dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007506de: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007506e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007506e2: mov ecx, esi */ r_ecx = r_esi;
    /* 007506e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007506e5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7506eau); f_00735c90();
    /* 007506ea: push 0x43330000 */ { u32 v = 0x43330000u; r_esp -= 4; W32(r_esp, v); }
    /* 007506ef: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007506f6: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007506fc: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00750703: mov ecx, esi */ r_ecx = r_esi;
    /* 00750705: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x75070au); f_00736138();
    /* 0075070a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075070c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x750711u); f_00736458();
    /* 00750711: mov eax, esi */ r_eax = r_esi;
    /* 00750713: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750714: ret  */ FN_RET(0x00750690); r_esp += 4; return;
L_00750715:; BB(0x00750715);
    /* 00750715: push 0x141 */ { u32 v = 0x141u; r_esp -= 4; W32(r_esp, v); }
    /* 0075071a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75071fu); f_0079317c();
    /* 0075071f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00750720: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00750722: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00750724: mov ecx, esi */ r_ecx = r_esi;
    /* 00750726: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750727: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75072cu); f_00735c90();
    /* 0075072c: jmp 0x7506d3 */ goto L_007506d3;
}

void f_00750730(void) /* sub_750730 */
{
    FN_ENTER(0x00750730);
    /* 00750730: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750731: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00750733: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00750738: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75073du); f_0073ec50();
    /* 0075073d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075073f: push 0x973c6c */ { u32 v = 0x973c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00750744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750745: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75074au); f_0073a8dc();
    /* 0075074a: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00750751: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750754: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750755: ret  */ FN_RET(0x00750730); r_esp += 4; return;
}

void f_00750758(void) /* sub_750758 */
{
    FN_ENTER(0x00750758);
    /* 00750758: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750759: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075075b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075075d: call 0x75077c */ r_esp -= 4; W32(r_esp, 0x750762u); f_0075077c();
    /* 00750762: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00750766: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750768: jne 0x75076e */ if (!fZ) goto L_0075076e;
L_0075076a:; BB(0x0075076a);
    /* 0075076a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075076b: ret 4 */ FN_RET(0x00750758); r_esp += 8; return;
L_0075076e:; BB(0x0075076e);
    /* 0075076e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075076f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x750774u); f_005c2f74();
    /* 00750774: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00750775: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750776: ret 4 */ FN_RET(0x00750758); r_esp += 8; return;
}

void f_0075077c(void) /* sub_75077C */
{
    FN_ENTER(0x0075077c);
    /* 0075077c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075077d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075077f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00750781: push 0x8f2bbc */ { u32 v = 0x8f2bbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00750786: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075078c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075078d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00750794: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00750797: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075079a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075079d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007507a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007507a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007507a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007507ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007507b0: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 007507b3: mov dword ptr [ecx], 0xb422c0 */ W32((u32)(r_ecx), 0xb422c0u);
    /* 007507b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007507bb: je 0x7507d9 */ if (fZ) goto L_007507d9;
L_007507bd:; BB(0x007507bd);
    /* 007507bd: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007507c0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7507c5u); f_0068d5a8();
    /* 007507c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007507c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007507c8: je 0x7507d6 */ if (fZ) goto L_007507d6;
L_007507ca:; BB(0x007507ca);
    /* 007507ca: mov ecx, eax */ r_ecx = r_eax;
    /* 007507cc: call 0x68fbf4 */ r_esp -= 4; W32(r_esp, 0x7507d1u); f_0068fbf4();
    /* 007507d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007507d4: jmp 0x7507d9 */ goto L_007507d9;
L_007507d6:; BB(0x007507d6);
    /* 007507d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_007507d9:; BB(0x007507d9);
    /* 007507d9: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 007507dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007507de: je 0x7507f1 */ if (fZ) goto L_007507f1;
L_007507e0:; BB(0x007507e0);
    /* 007507e0: mov ecx, eax */ r_ecx = r_eax;
    /* 007507e2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7507e7u); f_007127b0();
    /* 007507e7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007507ea: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_007507f1:; BB(0x007507f1);
    /* 007507f1: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 007507f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007507f6: je 0x750809 */ if (fZ) goto L_00750809;
L_007507f8:; BB(0x007507f8);
    /* 007507f8: mov ecx, eax */ r_ecx = r_eax;
    /* 007507fa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7507ffu); f_007127b0();
    /* 007507ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750802: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_00750809:; BB(0x00750809);
    /* 00750809: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0075080c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075080e: je 0x750821 */ if (fZ) goto L_00750821;
L_00750810:; BB(0x00750810);
    /* 00750810: mov ecx, eax */ r_ecx = r_eax;
    /* 00750812: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750817u); f_007127b0();
    /* 00750817: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075081a: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_00750821:; BB(0x00750821);
    /* 00750821: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 00750824: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750826: je 0x750839 */ if (fZ) goto L_00750839;
L_00750828:; BB(0x00750828);
    /* 00750828: mov ecx, eax */ r_ecx = r_eax;
    /* 0075082a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75082fu); f_007127b0();
    /* 0075082f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750832: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00750839:; BB(0x00750839);
    /* 00750839: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0075083c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075083e: je 0x750851 */ if (fZ) goto L_00750851;
L_00750840:; BB(0x00750840);
    /* 00750840: mov ecx, eax */ r_ecx = r_eax;
    /* 00750842: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750847u); f_007127b0();
    /* 00750847: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075084a: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_00750851:; BB(0x00750851);
    /* 00750851: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00750858: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x75085du); f_008171e8();
    /* 0075085d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750860: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750867: mov esp, ebp */ r_esp = r_ebp;
    /* 00750869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075086a: ret  */ FN_RET(0x0075077c); r_esp += 4; return;
}

void f_0075086c(void) /* sub_75086C */
{
    FN_ENTER(0x0075086c);
    /* 0075086c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075086d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075086f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00750871: push 0x8f2bd8 */ { u32 v = 0x8f2bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00750876: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075087c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075087d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00750884: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00750887: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075088a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0075088d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00750890: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00750893: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00750896: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00750899: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0075089c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075089d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007508a0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007508a3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7508a8u); f_008193cc();
    /* 007508a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007508af: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007508b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007508b5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007508b8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007508ba: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 007508bd: mov dword ptr [ebx], 0xb422c0 */ W32((u32)(r_ebx), 0xb422c0u);
    /* 007508c3: mov eax, dword ptr [0x9f4404] */ r_eax = R32((u32)(0x9f4404u));
    /* 007508c8: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 007508cb: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 007508ce: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7508d3u); f_0073ec50();
    /* 007508d3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007508d6: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007508d9: push 0x973ca0 */ { u32 v = 0x973ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 007508de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007508df: call 0x75198c */ r_esp -= 4; W32(r_esp, 0x7508e4u); f_0075198c();
    /* 007508e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007508e7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007508ea: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 007508ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007508ef: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 007508f2: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7508f7u); f_007336fc();
    /* 007508f7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007508fa: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007508fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007508fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00750901: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x750906u); f_00712624();
    /* 00750906: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00750909: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0075090c: movzx ecx, word ptr [eax + 0x84] */ r_ecx = (u32)R16((u32)(r_eax+0x84u));
    /* 00750913: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00750919: mov word ptr [eax + 0x84], cx */ W16((u32)(r_eax+0x84u), (u16)r_ecx);
    /* 00750920: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00750923: mov dword ptr [eax + 0x20], 0xffffffff */ W32((u32)(r_eax+0x20u), 0xffffffffu);
    /* 0075092a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075092c: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 0075092f: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 00750932: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 00750935: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 00750938: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 0075093b: mov dword ptr [eax + 0x2c], ebx */ W32((u32)(r_eax+0x2cu), r_ebx);
    /* 0075093e: mov byte ptr [eax + 0x1c], bl */ W8((u32)(r_eax+0x1cu), (u8)r_ebx);
    /* 00750941: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750944: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750947: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075094e: mov esp, ebp */ r_esp = r_ebp;
    /* 00750950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750951: ret 8 */ FN_RET(0x0075086c); r_esp += 12; return;
}

void f_00750954(void) /* sub_750954 */
{
    FN_ENTER(0x00750954);
    /* 00750954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00750955: mov ebp, esp */ r_ebp = r_esp;
    /* 00750957: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00750959: push 0x8f2c00 */ { u32 v = 0x8f2c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0075095e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00750964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750965: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075096c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075096f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00750972: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00750975: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00750978: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075097b: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075097e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00750981: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x750986u); f_0068d5a8();
    /* 00750986: mov ebx, eax */ r_ebx = r_eax;
    /* 00750988: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075098b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075098d: je 0x750a58 */ if (fZ) goto L_00750a58;
L_00750993:; BB(0x00750993);
    /* 00750993: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750996: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750999: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x75099eu); f_00719140();
    /* 0075099e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075099f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007509a2: movzx edx, byte ptr [edx + 0x1c] */ r_edx = (u32)R8((u32)(r_edx+0x1cu));
    /* 007509a6: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007509a9: ja 0x75111b */ if ((!fC&&!fZ)) goto L_0075111b;
L_007509af:; BB(0x007509af);
    /* 007509af: mov edx, dword ptr [edx*4 + 0x973cc0] */ r_edx = R32((u32)(r_edx*4+0x973cc0u));
    /* 007509b6: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00750a58:; BB(0x00750a58);
    /* 00750a58: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750a5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750a5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750a65: mov esp, ebp */ r_esp = r_ebp;
    /* 00750a67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750a68: ret  */ FN_RET(0x00750954); r_esp += 4; return;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750954); r_esp += 4; return;
}

void f_007509b8(void)
{
    FN_ENTER(0x007509b8);
    /* 007509b8: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 007509be: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007509c0: jne 0x75111b */ if (!fZ) goto L_0075111b;
L_007509c6:; BB(0x007509c6);
    /* 007509c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007509c9: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007509cd: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x007509b8); r_esp += 4; return;
}

void f_007509d2(void)
{
    FN_ENTER(0x007509d2);
    /* 007509d2: mov esi, dword ptr [0xa0f678] */ r_esi = R32((u32)(0xa0f678u));
    /* 007509d8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007509db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007509dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007509df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007509e1: or esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007509e3: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007509ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007509eb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7509f0u); f_007c1160();
    /* 007509f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007509f2: je 0x750a0d */ if (fZ) goto L_00750a0d;
L_007509f4:; BB(0x007509f4);
    /* 007509f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007509f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007509f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007509f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007509f9: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007509fe: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750a03u); f_00814298();
    /* 00750a03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750a06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750a09: mov byte ptr [edx + 0x1c], 3 */ W8((u32)(r_edx+0x1cu), 0x3u);
L_00750a0d:; BB(0x00750a0d);
    /* 00750a0d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750a0f: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x750a14u); f_0068fb00();
    /* 00750a14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750a16: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750a1c:; BB(0x00750a1c);
    /* 00750a1c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750a1f: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750a22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750a24: call 0x68db00 */ r_esp -= 4; W32(r_esp, 0x750a29u); f_0068db00();
    /* 00750a29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750a2c: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 00750a30: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x007509d2); r_esp += 4; return;
}

void f_00750a35(void)
{
    FN_ENTER(0x00750a35);
    /* 00750a35: mov eax, dword ptr [ebx + 0x2b4] */ r_eax = R32((u32)(r_ebx+0x2b4u));
    /* 00750a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750a3d: je 0x751245 */ if (fZ) goto L_00751245;
L_00750a43:; BB(0x00750a43);
    /* 00750a43: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00750a46: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00750a49: jg 0x750a69 */ if ((!fZ&&fS==fO)) goto L_00750a69;
L_00750a4b:; BB(0x00750a4b);
    /* 00750a4b: je 0x75112f */ if (fZ) goto L_0075112f;
L_00750a51:; BB(0x00750a51);
    /* 00750a51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750a54: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
L_00750a58:; BB(0x00750a58);
    /* 00750a58: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750a5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750a5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750a65: mov esp, ebp */ r_esp = r_ebp;
    /* 00750a67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750a68: ret  */ FN_RET(0x00750a35); r_esp += 4; return;
L_00750a69:; BB(0x00750a69);
    /* 00750a69: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750a6c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00750a6f: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x750a74u); f_0073600c();
    /* 00750a74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750a77: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00750a7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750a7c: je 0x751142 */ if (fZ) goto L_00751142;
L_00750a82:; BB(0x00750a82);
    /* 00750a82: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 00750a86: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00750a8b: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 00750a8e: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
    /* 00750a92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750a94: je 0x750a9d */ if (fZ) goto L_00750a9d;
L_00750a96:; BB(0x00750a96);
    /* 00750a96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750a98: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750a9du); f_00760acc();
L_00750a9d:; BB(0x00750a9d);
    /* 00750a9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750aa0: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 00750aa4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750aa7: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00750aaa: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 00750aae: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750ab0: je 0x750abd */ if (fZ) goto L_00750abd;
L_00750ab2:; BB(0x00750ab2);
    /* 00750ab2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ab5: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00750ab9: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_00750abd:; BB(0x00750abd);
    /* 00750abd: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750abf: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750ac5:; BB(0x00750ac5);
    /* 00750ac5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00750ac8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750acb: mov byte ptr [edx + 0x1c], 0x15 */ W8((u32)(r_edx+0x1cu), 0x15u);
    /* 00750acf: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00750ad2: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750a35); r_esp += 4; return;
L_0075112f:; BB(0x0075112f);
    /* 0075112f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751132: mov dword ptr [eax + 0x28], 1 */ W32((u32)(r_eax+0x28u), 0x1u);
    /* 00751139: mov byte ptr [eax + 0x1c], 0x15 */ W8((u32)(r_eax+0x1cu), 0x15u);
    /* 0075113d: jmp 0x750a58 */ goto L_00750a58;
L_00751142:; BB(0x00751142);
    /* 00751142: mov ecx, eax */ r_ecx = r_eax;
    /* 00751144: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00751145: call 0x751794 */ r_esp -= 4; W32(r_esp, 0x75114au); f_00751794();
    /* 0075114a: mov edx, eax */ r_edx = r_eax;
    /* 0075114c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075114f: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00751152: jmp 0x750a82 */ goto L_00750a82;
L_00751245:; BB(0x00751245);
    /* 00751245: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751248: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075124b: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 0075124f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751252: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00751259: mov esp, ebp */ r_esp = r_ebp;
    /* 0075125b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075125c: ret  */ FN_RET(0x00750a35); r_esp += 4; return;
}

void f_00750aa4(void)
{
    FN_ENTER(0x00750aa4);
    /* 00750aa4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750aa7: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00750aaa: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 00750aae: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750ab0: je 0x750abd */ if (fZ) goto L_00750abd;
L_00750ab2:; BB(0x00750ab2);
    /* 00750ab2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ab5: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00750ab9: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_00750abd:; BB(0x00750abd);
    /* 00750abd: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750abf: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750ac5:; BB(0x00750ac5);
    /* 00750ac5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00750ac8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750acb: mov byte ptr [edx + 0x1c], 0x15 */ W8((u32)(r_edx+0x1cu), 0x15u);
    /* 00750acf: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00750ad2: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750aa4); r_esp += 4; return;
}

void f_00750ad7(void)
{
    FN_ENTER(0x00750ad7);
    /* 00750ad7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ada: mov byte ptr [edx + 0x1c], 0x12 */ W8((u32)(r_edx+0x1cu), 0x12u);
    /* 00750ade: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00750ae4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00750ae7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750aeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750aed: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00750aef: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00750af6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750af7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x750afcu); f_007c1160();
    /* 00750afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750afe: je 0x750b19 */ if (fZ) goto L_00750b19;
L_00750b00:; BB(0x00750b00);
    /* 00750b00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00750b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b05: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00750b0a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750b0fu); f_00814298();
    /* 00750b0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750b12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750b15: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00750b19:; BB(0x00750b19);
    /* 00750b19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750b1c: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750b1f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x750b24u); f_0068d5a8();
    /* 00750b24: mov ebx, eax */ r_ebx = r_eax;
    /* 00750b26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750b29: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750b2b: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750b31:; BB(0x00750b31);
    /* 00750b31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750b33: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x750b38u); f_0068fb00();
    /* 00750b38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750b3a: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750b40:; BB(0x00750b40);
    /* 00750b40: call 0x6b08b8 */ r_esp -= 4; W32(r_esp, 0x750b45u); f_006b08b8();
    /* 00750b45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750b47: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750b4d:; BB(0x00750b4d);
    /* 00750b4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750b4f: add ebx, 0x8a0 */ {  u32 a = r_ebx; u32 b = 0x8a0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00750b55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750b57: call 0x697968 */ r_esp -= 4; W32(r_esp, 0x750b5cu); f_00697968();
    /* 00750b5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750b5f: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00750b63: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750ad7); r_esp += 4; return;
}

void f_00750ade(void)
{
    FN_ENTER(0x00750ade);
    /* 00750ade: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00750ae4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00750ae7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750ae9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750aeb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750aed: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00750aef: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00750af6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750af7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x750afcu); f_007c1160();
    /* 00750afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750afe: je 0x750b19 */ if (fZ) goto L_00750b19;
L_00750b00:; BB(0x00750b00);
    /* 00750b00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00750b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b05: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00750b0a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750b0fu); f_00814298();
    /* 00750b0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750b12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750b15: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00750b19:; BB(0x00750b19);
    /* 00750b19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750b1c: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750b1f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x750b24u); f_0068d5a8();
    /* 00750b24: mov ebx, eax */ r_ebx = r_eax;
    /* 00750b26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750b29: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750b2b: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750b31:; BB(0x00750b31);
    /* 00750b31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750b33: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x750b38u); f_0068fb00();
    /* 00750b38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750b3a: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750b40:; BB(0x00750b40);
    /* 00750b40: call 0x6b08b8 */ r_esp -= 4; W32(r_esp, 0x750b45u); f_006b08b8();
    /* 00750b45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750b47: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750b4d:; BB(0x00750b4d);
    /* 00750b4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750b4f: add ebx, 0x8a0 */ {  u32 a = r_ebx; u32 b = 0x8a0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00750b55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750b57: call 0x697968 */ r_esp -= 4; W32(r_esp, 0x750b5cu); f_00697968();
    /* 00750b5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750b5f: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00750b63: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750ade); r_esp += 4; return;
}

void f_00750b68(void)
{
    FN_ENTER(0x00750b68);
    /* 00750b68: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750b6b: mov byte ptr [edx + 0x1c], 0x10 */ W8((u32)(r_edx+0x1cu), 0x10u);
    /* 00750b6f: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00750b75: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00750b78: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750b7a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750b7c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750b7e: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00750b80: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00750b87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750b88: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x750b8du); f_007c1160();
    /* 00750b8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750b8f: je 0x750baa */ if (fZ) goto L_00750baa;
L_00750b91:; BB(0x00750b91);
    /* 00750b91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00750b93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b96: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00750b9b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750ba0u); f_00814298();
    /* 00750ba0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750ba3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ba6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00750baa:; BB(0x00750baa);
    /* 00750baa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750bad: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750bb0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x750bb5u); f_0068d5a8();
    /* 00750bb5: mov ebx, eax */ r_ebx = r_eax;
    /* 00750bb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750bba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750bbc: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750bc2:; BB(0x00750bc2);
    /* 00750bc2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750bc4: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x750bc9u); f_0068fb00();
    /* 00750bc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750bcb: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750bd1:; BB(0x00750bd1);
    /* 00750bd1: jmp 0x751157 */ goto L_00751157;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750b68); r_esp += 4; return;
L_00751157:; BB(0x00751157);
    /* 00751157: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075115a: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075115d: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x751162u); f_00719200();
    /* 00751162: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751165: je 0x75111b */ if (fZ) goto L_0075111b;
L_00751167:; BB(0x00751167);
    /* 00751167: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075116a: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0075116d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x751172u); f_00737d90();
    /* 00751172: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00751175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751176: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751178: call 0x6959c0 */ r_esp -= 4; W32(r_esp, 0x75117du); f_006959c0();
    /* 0075117d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751180: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00751184: jmp 0x75111b */ goto L_0075111b;
}

void f_00750b6f(void)
{
    FN_ENTER(0x00750b6f);
    /* 00750b6f: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00750b75: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00750b78: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750b7a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750b7c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00750b7e: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00750b80: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00750b87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750b88: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x750b8du); f_007c1160();
    /* 00750b8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750b8f: je 0x750baa */ if (fZ) goto L_00750baa;
L_00750b91:; BB(0x00750b91);
    /* 00750b91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00750b93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750b96: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00750b9b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750ba0u); f_00814298();
    /* 00750ba0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750ba3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ba6: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00750baa:; BB(0x00750baa);
    /* 00750baa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750bad: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750bb0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x750bb5u); f_0068d5a8();
    /* 00750bb5: mov ebx, eax */ r_ebx = r_eax;
    /* 00750bb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750bba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750bbc: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750bc2:; BB(0x00750bc2);
    /* 00750bc2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750bc4: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x750bc9u); f_0068fb00();
    /* 00750bc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750bcb: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750bd1:; BB(0x00750bd1);
    /* 00750bd1: jmp 0x751157 */ goto L_00751157;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750b6f); r_esp += 4; return;
L_00751157:; BB(0x00751157);
    /* 00751157: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075115a: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075115d: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x751162u); f_00719200();
    /* 00751162: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00751163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751165: je 0x75111b */ if (fZ) goto L_0075111b;
L_00751167:; BB(0x00751167);
    /* 00751167: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075116a: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0075116d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x751172u); f_00737d90();
    /* 00751172: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00751175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751176: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00751178: call 0x6959c0 */ r_esp -= 4; W32(r_esp, 0x75117du); f_006959c0();
    /* 0075117d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00751180: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00751184: jmp 0x75111b */ goto L_0075111b;
}

void f_00750bd6(void)
{
    FN_ENTER(0x00750bd6);
    /* 00750bd6: mov esi, dword ptr [0xa0f678] */ r_esi = R32((u32)(0xa0f678u));
    /* 00750bdc: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00750bdf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750be1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750be3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750be5: or esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00750be7: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00750bee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00750bef: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x750bf4u); f_007c1160();
    /* 00750bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750bf6: je 0x750c11 */ if (fZ) goto L_00750c11;
L_00750bf8:; BB(0x00750bf8);
    /* 00750bf8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00750bfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750bfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750bfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750bfd: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00750c02: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750c07u); f_00814298();
    /* 00750c07: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750c0a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c0d: mov byte ptr [edx + 0x1c], 3 */ W8((u32)(r_edx+0x1cu), 0x3u);
L_00750c11:; BB(0x00750c11);
    /* 00750c11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750c13: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x750c18u); f_0068fb00();
    /* 00750c18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750c1a: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750c20:; BB(0x00750c20);
    /* 00750c20: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c23: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00750c26: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x750c2bu); f_00737d90();
    /* 00750c2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c2e: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750c31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750c32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750c34: call 0x68d878 */ r_esp -= 4; W32(r_esp, 0x750c39u); f_0068d878();
    /* 00750c39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c3c: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 00750c40: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750bd6); r_esp += 4; return;
}

void f_00750c45(void)
{
    FN_ENTER(0x00750c45);
    /* 00750c45: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c48: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750c4b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x750c50u); f_00737d90();
    /* 00750c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750c51: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x750c56u); f_005c5528();
    /* 00750c56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00750c57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00750c59: mov ecx, eax */ r_ecx = r_eax;
    /* 00750c5b: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x750c61u); call_ind(t); }
    /* 00750c61: mov ebx, eax */ r_ebx = r_eax;
    /* 00750c63: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00750c66: jg 0x750c87 */ if ((!fZ&&fS==fO)) goto L_00750c87;
L_00750c68:; BB(0x00750c68);
    /* 00750c68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c6b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750c6e: mov dword ptr [eax + 0x28], 1 */ W32((u32)(r_eax+0x28u), 0x1u);
    /* 00750c75: mov byte ptr [eax + 0x1c], 0xe */ W8((u32)(r_eax+0x1cu), 0xeu);
    /* 00750c79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750c7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750c83: mov esp, ebp */ r_esp = r_ebp;
    /* 00750c85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750c86: ret  */ FN_RET(0x00750c45); r_esp += 4; return;
L_00750c87:; BB(0x00750c87);
    /* 00750c87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c8a: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00750c8d: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x750c92u); f_0073600c();
    /* 00750c92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750c95: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 00750c98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750c9a: je 0x751186 */ if (fZ) goto L_00751186;
L_00750ca0:; BB(0x00750ca0);
    /* 00750ca0: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 00750ca4: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00750ca9: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 00750cac: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
    /* 00750cb0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750cb2: je 0x750cbb */ if (fZ) goto L_00750cbb;
L_00750cb4:; BB(0x00750cb4);
    /* 00750cb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750cb6: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750cbbu); f_00760acc();
L_00750cbb:; BB(0x00750cbb);
    /* 00750cbb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750cbe: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 00750cc2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750cc5: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00750cc8: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 00750ccc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750cce: je 0x750cdb */ if (fZ) goto L_00750cdb;
L_00750cd0:; BB(0x00750cd0);
    /* 00750cd0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750cd3: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00750cd7: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_00750cdb:; BB(0x00750cdb);
    /* 00750cdb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750cdd: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750ce3:; BB(0x00750ce3);
    /* 00750ce3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00750ce6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ce9: mov byte ptr [edx + 0x1c], 0xe */ W8((u32)(r_edx+0x1cu), 0xeu);
    /* 00750ced: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00750cf0: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750c45); r_esp += 4; return;
L_00751186:; BB(0x00751186);
    /* 00751186: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00751189: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075118a: call 0x751794 */ r_esp -= 4; W32(r_esp, 0x75118fu); f_00751794();
    /* 0075118f: mov edx, eax */ r_edx = r_eax;
    /* 00751191: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00751194: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00751197: jmp 0x750ca0 */ goto L_00750ca0;
}

void f_00750cc2(void)
{
    FN_ENTER(0x00750cc2);
    /* 00750cc2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750cc5: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00750cc8: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 00750ccc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750cce: je 0x750cdb */ if (fZ) goto L_00750cdb;
L_00750cd0:; BB(0x00750cd0);
    /* 00750cd0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750cd3: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00750cd7: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_00750cdb:; BB(0x00750cdb);
    /* 00750cdb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750cdd: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750ce3:; BB(0x00750ce3);
    /* 00750ce3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00750ce6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ce9: mov byte ptr [edx + 0x1c], 0xe */ W8((u32)(r_edx+0x1cu), 0xeu);
    /* 00750ced: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00750cf0: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750cc2); r_esp += 4; return;
}

void f_00750cf5(void)
{
    FN_ENTER(0x00750cf5);
    /* 00750cf5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750cf8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750cfb: call 0x751c80 */ r_esp -= 4; W32(r_esp, 0x750d00u); f_00751c80();
    /* 00750d00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d03: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750d06: call 0x751bd4 */ r_esp -= 4; W32(r_esp, 0x750d0bu); f_00751bd4();
    /* 00750d0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d0e: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00750d11: movzx eax, word ptr [edx + 0x88] */ r_eax = (u32)R16((u32)(r_edx+0x88u));
    /* 00750d18: mov word ptr [edx + 0x94], ax */ W16((u32)(r_edx+0x94u), (u16)r_eax);
    /* 00750d1f: mov esi, dword ptr [ecx + 0x34] */ r_esi = R32((u32)(r_ecx+0x34u));
    /* 00750d22: movzx ebx, word ptr [esi + 0x84] */ r_ebx = (u32)R16((u32)(r_esi+0x84u));
    /* 00750d29: and ebx, 0xfffd */ {  u32 a = r_ebx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00750d2f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00750d32: mov word ptr [esi + 0x84], bx */ W16((u32)(r_esi+0x84u), (u16)r_ebx);
    /* 00750d39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750d3b: je 0x750d44 */ if (fZ) goto L_00750d44;
L_00750d3d:; BB(0x00750d3d);
    /* 00750d3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750d3f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750d44u); f_00760acc();
L_00750d44:; BB(0x00750d44);
    /* 00750d44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d47: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 00750d4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d4e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00750d51: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00750d58: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750d5a: je 0x750d77 */ if (fZ) goto L_00750d77;
L_00750d5c:; BB(0x00750d5c);
    /* 00750d5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d5f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750d62: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750d65: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 00750d69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750d6c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750d73: mov esp, ebp */ r_esp = r_ebp;
    /* 00750d75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750d76: ret  */ FN_RET(0x00750cf5); r_esp += 4; return;
L_00750d77:; BB(0x00750d77);
    /* 00750d77: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750d79: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750d7f:; BB(0x00750d7f);
    /* 00750d7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d82: call 0x751754 */ r_esp -= 4; W32(r_esp, 0x750d87u); f_00751754();
    /* 00750d87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d8a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750d8d: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00750d94: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00750d9a: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00750da1: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00750da4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750da6: je 0x750daf */ if (fZ) goto L_00750daf;
L_00750da8:; BB(0x00750da8);
    /* 00750da8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750daa: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750dafu); f_00760acc();
L_00750daf:; BB(0x00750daf);
    /* 00750daf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750db2: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 00750db6: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750cf5); r_esp += 4; return;
}

void f_00750d4b(void)
{
    FN_ENTER(0x00750d4b);
    /* 00750d4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d4e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00750d51: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00750d58: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750d5a: je 0x750d77 */ if (fZ) goto L_00750d77;
L_00750d5c:; BB(0x00750d5c);
    /* 00750d5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d5f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00750d62: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750d65: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 00750d69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750d6c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750d73: mov esp, ebp */ r_esp = r_ebp;
    /* 00750d75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750d76: ret  */ FN_RET(0x00750d4b); r_esp += 4; return;
L_00750d77:; BB(0x00750d77);
    /* 00750d77: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750d79: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750d7f:; BB(0x00750d7f);
    /* 00750d7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d82: call 0x751754 */ r_esp -= 4; W32(r_esp, 0x750d87u); f_00751754();
    /* 00750d87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750d8a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750d8d: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00750d94: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00750d9a: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00750da1: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00750da4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750da6: je 0x750daf */ if (fZ) goto L_00750daf;
L_00750da8:; BB(0x00750da8);
    /* 00750da8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750daa: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750dafu); f_00760acc();
L_00750daf:; BB(0x00750daf);
    /* 00750daf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750db2: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 00750db6: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750d4b); r_esp += 4; return;
}

void f_00750dbb(void)
{
    FN_ENTER(0x00750dbb);
    /* 00750dbb: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750dbe: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00750dc1: movzx ebx, word ptr [ecx + 0x88] */ r_ebx = (u32)R16((u32)(r_ecx+0x88u));
    /* 00750dc8: call 0x751ae0 */ r_esp -= 4; W32(r_esp, 0x750dcdu); f_00751ae0();
    /* 00750dcd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750dd0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750dd3: call 0x751c80 */ r_esp -= 4; W32(r_esp, 0x750dd8u); f_00751c80();
    /* 00750dd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ddb: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750dde: call 0x751bd4 */ r_esp -= 4; W32(r_esp, 0x750de3u); f_00751bd4();
    /* 00750de3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750de6: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00750de9: mov word ptr [eax + 0x88], bx */ W16((u32)(r_eax+0x88u), (u16)r_ebx);
    /* 00750df0: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00750df3: movzx ecx, word ptr [ebx + 0x84] */ r_ecx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00750dfa: and ecx, 0xfffd */ {  u32 a = r_ecx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00750e00: mov word ptr [ebx + 0x84], cx */ W16((u32)(r_ebx+0x84u), (u16)r_ecx);
    /* 00750e07: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00750e0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750e0c: je 0x750e15 */ if (fZ) goto L_00750e15;
L_00750e0e:; BB(0x00750e0e);
    /* 00750e0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750e10: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750e15u); f_00760acc();
L_00750e15:; BB(0x00750e15);
    /* 00750e15: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e18: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00750e1b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00750e20: mov word ptr [edx + 0x94], ax */ W16((u32)(r_edx+0x94u), (u16)r_eax);
    /* 00750e27: mov byte ptr [ecx + 0x1c], 9 */ W8((u32)(r_ecx+0x1cu), 0x9u);
    /* 00750e2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e2e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00750e31: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00750e38: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750e3a: je 0x750e5f */ if (fZ) goto L_00750e5f;
L_00750e3c:; BB(0x00750e3c);
    /* 00750e3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e3f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00750e42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00750e44: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x750e47u); call_ind(t); }
    /* 00750e47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e4a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750e4d: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 00750e51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750e54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750e5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00750e5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750e5e: ret  */ FN_RET(0x00750dbb); r_esp += 4; return;
L_00750e5f:; BB(0x00750e5f);
    /* 00750e5f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750e61: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750e67:; BB(0x00750e67);
    /* 00750e67: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00750e6c: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00750e6f: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00750e76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750e78: je 0x750e81 */ if (fZ) goto L_00750e81;
L_00750e7a:; BB(0x00750e7a);
    /* 00750e7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750e7c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750e81u); f_00760acc();
L_00750e81:; BB(0x00750e81);
    /* 00750e81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e84: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00750e88: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750dbb); r_esp += 4; return;
}

void f_00750e00(void)
{
    FN_ENTER(0x00750e00);
    /* 00750e00: mov word ptr [ebx + 0x84], cx */ W16((u32)(r_ebx+0x84u), (u16)r_ecx);
    /* 00750e07: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00750e0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750e0c: je 0x750e15 */ if (fZ) goto L_00750e15;
L_00750e0e:; BB(0x00750e0e);
    /* 00750e0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750e10: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750e15u); f_00760acc();
L_00750e15:; BB(0x00750e15);
    /* 00750e15: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e18: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00750e1b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00750e20: mov word ptr [edx + 0x94], ax */ W16((u32)(r_edx+0x94u), (u16)r_eax);
    /* 00750e27: mov byte ptr [ecx + 0x1c], 9 */ W8((u32)(r_ecx+0x1cu), 0x9u);
    /* 00750e2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e2e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00750e31: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00750e38: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750e3a: je 0x750e5f */ if (fZ) goto L_00750e5f;
L_00750e3c:; BB(0x00750e3c);
    /* 00750e3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e3f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00750e42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00750e44: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x750e47u); call_ind(t); }
    /* 00750e47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e4a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750e4d: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 00750e51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750e54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750e5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00750e5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750e5e: ret  */ FN_RET(0x00750e00); r_esp += 4; return;
L_00750e5f:; BB(0x00750e5f);
    /* 00750e5f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750e61: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750e67:; BB(0x00750e67);
    /* 00750e67: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00750e6c: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00750e6f: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00750e76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750e78: je 0x750e81 */ if (fZ) goto L_00750e81;
L_00750e7a:; BB(0x00750e7a);
    /* 00750e7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750e7c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750e81u); f_00760acc();
L_00750e81:; BB(0x00750e81);
    /* 00750e81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e84: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00750e88: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750e00); r_esp += 4; return;
}

void f_00750e2b(void)
{
    FN_ENTER(0x00750e2b);
    /* 00750e2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e2e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00750e31: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00750e38: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750e3a: je 0x750e5f */ if (fZ) goto L_00750e5f;
L_00750e3c:; BB(0x00750e3c);
    /* 00750e3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e3f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00750e42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00750e44: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x750e47u); call_ind(t); }
    /* 00750e47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e4a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00750e4d: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 00750e51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00750e54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00750e5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00750e5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750e5e: ret  */ FN_RET(0x00750e2b); r_esp += 4; return;
L_00750e5f:; BB(0x00750e5f);
    /* 00750e5f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750e61: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750e67:; BB(0x00750e67);
    /* 00750e67: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00750e6c: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00750e6f: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00750e76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750e78: je 0x750e81 */ if (fZ) goto L_00750e81;
L_00750e7a:; BB(0x00750e7a);
    /* 00750e7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750e7c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750e81u); f_00760acc();
L_00750e81:; BB(0x00750e81);
    /* 00750e81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e84: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00750e88: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750e2b); r_esp += 4; return;
}

void f_00750e8d(void)
{
    FN_ENTER(0x00750e8d);
    /* 00750e8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e90: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 00750e93: jmp 0x750eb2 */ goto L_00750eb2;
L_00750eb2:; BB(0x00750eb2);
    /* 00750eb2: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00750eb9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750ebc: je 0x750ecc */ if (fZ) goto L_00750ecc;
L_00750ebe:; BB(0x00750ebe);
    /* 00750ebe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ec1: mov byte ptr [edx + 0x1c], 3 */ W8((u32)(r_edx+0x1cu), 0x3u);
    /* 00750ec5: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_00750ecc:; BB(0x00750ecc);
    /* 00750ecc: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750ecf: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750ed5:; BB(0x00750ed5);
    /* 00750ed5: mov ecx, eax */ r_ecx = r_eax;
    /* 00750ed7: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x750edcu); f_007365f4();
    /* 00750edc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750edf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750ee0: call 0x7516f0 */ r_esp -= 4; W32(r_esp, 0x750ee5u); f_007516f0();
    /* 00750ee5: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750e8d); r_esp += 4; return;
}

void f_00750e95(void)
{
    FN_ENTER(0x00750e95);
    /* 00750e95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750e98: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00750e9b: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x750ea0u); f_0073600c();
    /* 00750ea0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ea3: call 0x751660 */ r_esp -= 4; W32(r_esp, 0x750ea8u); f_00751660();
    /* 00750ea8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750eab: mov byte ptr [edx + 0x1c], 7 */ W8((u32)(r_edx+0x1cu), 0x7u);
    /* 00750eaf: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00750eb2: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00750eb9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00750ebc: je 0x750ecc */ if (fZ) goto L_00750ecc;
L_00750ebe:; BB(0x00750ebe);
    /* 00750ebe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ec1: mov byte ptr [edx + 0x1c], 3 */ W8((u32)(r_edx+0x1cu), 0x3u);
    /* 00750ec5: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
L_00750ecc:; BB(0x00750ecc);
    /* 00750ecc: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750ecf: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750ed5:; BB(0x00750ed5);
    /* 00750ed5: mov ecx, eax */ r_ecx = r_eax;
    /* 00750ed7: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x750edcu); f_007365f4();
    /* 00750edc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750edf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750ee0: call 0x7516f0 */ r_esp -= 4; W32(r_esp, 0x750ee5u); f_007516f0();
    /* 00750ee5: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750e95); r_esp += 4; return;
}

void f_00750eea(void)
{
    FN_ENTER(0x00750eea);
    /* 00750eea: mov esi, dword ptr [0xa0f678] */ r_esi = R32((u32)(0xa0f678u));
    /* 00750ef0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00750ef3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750ef5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750ef7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00750ef9: or esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00750efb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00750f02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00750f03: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x750f08u); f_007c1160();
    /* 00750f08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750f0a: je 0x750f25 */ if (fZ) goto L_00750f25;
L_00750f0c:; BB(0x00750f0c);
    /* 00750f0c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00750f0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750f0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750f10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00750f11: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00750f16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x750f1bu); f_00814298();
    /* 00750f1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00750f1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f21: mov byte ptr [edx + 0x1c], 3 */ W8((u32)(r_edx+0x1cu), 0x3u);
L_00750f25:; BB(0x00750f25);
    /* 00750f25: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00750f27: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x750f2cu); f_0068fb00();
    /* 00750f2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00750f2e: je 0x75111b */ if (fZ) goto L_0075111b;
L_00750f34:; BB(0x00750f34);
    /* 00750f34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f37: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750f3a: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x750f3fu); f_00737d90();
    /* 00750f3f: mov ebx, eax */ r_ebx = r_eax;
    /* 00750f41: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f44: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00750f47: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x750f4cu); f_007365f4();
    /* 00750f4c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750f50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00750f51: call 0x7515c4 */ r_esp -= 4; W32(r_esp, 0x750f56u); f_007515c4();
    /* 00750f56: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750eea); r_esp += 4; return;
}

void f_00750f5b(void)
{
    FN_ENTER(0x00750f5b);
    /* 00750f5b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f5e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00750f61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750f63: je 0x750f74 */ if (fZ) goto L_00750f74;
L_00750f65:; BB(0x00750f65);
    /* 00750f65: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750f6au); f_007127b0();
    /* 00750f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f6d: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_00750f74:; BB(0x00750f74);
    /* 00750f74: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00750f77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750f79: je 0x750f8a */ if (fZ) goto L_00750f8a;
L_00750f7b:; BB(0x00750f7b);
    /* 00750f7b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750f80u); f_007127b0();
    /* 00750f80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f83: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_00750f8a:; BB(0x00750f8a);
    /* 00750f8a: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00750f8d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750f8f: je 0x750fa0 */ if (fZ) goto L_00750fa0;
L_00750f91:; BB(0x00750f91);
    /* 00750f91: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x750f96u); f_007127b0();
    /* 00750f96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750f99: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_00750fa0:; BB(0x00750fa0);
    /* 00750fa0: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00750fa3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750fa5: je 0x75119c */ if (fZ) goto L_0075119c;
L_00750fab:; BB(0x00750fab);
    /* 00750fab: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00750fb2: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00750fb7: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00750fba: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00750fc1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750fc3: je 0x750fcc */ if (fZ) goto L_00750fcc;
L_00750fc5:; BB(0x00750fc5);
    /* 00750fc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00750fc7: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x750fccu); f_00760acc();
L_00750fcc:; BB(0x00750fcc);
    /* 00750fcc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750fcf: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00750fd2: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x750fd7u); f_0073605c();
    /* 00750fd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750fda: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00750fde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750fe1: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00750fe4: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x750fe9u); f_007365f4();
    /* 00750fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750feb: jne 0x751007 */ if (!fZ) goto L_00751007;
L_00750fed:; BB(0x00750fed);
    /* 00750fed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ff0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750ff3: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x750ff8u); f_00737d90();
    /* 00750ff8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ffb: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750ffe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750fff: call 0x741c00 */ r_esp -= 4; W32(r_esp, 0x751004u); f_00741c00();
    /* 00751004: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00751007:; BB(0x00751007);
    /* 00751007: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075100a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075100d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00751014: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00751016: je 0x751026 */ if (fZ) goto L_00751026;
L_00751018:; BB(0x00751018);
    /* 00751018: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075101b: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075101f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
L_00751026:; BB(0x00751026);
    /* 00751026: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751028: je 0x75111b */ if (fZ) goto L_0075111b;
L_0075102e:; BB(0x0075102e);
    /* 0075102e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x751033u); f_007365f4();
    /* 00751033: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00751036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751037: call 0x75158c */ r_esp -= 4; W32(r_esp, 0x75103cu); f_0075158c();
    /* 0075103c: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750f5b); r_esp += 4; return;
L_0075119c:; BB(0x0075119c);
    /* 0075119c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075119f: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7511a4u); f_00737d90();
    /* 007511a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007511a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007511a8: call 0x751284 */ r_esp -= 4; W32(r_esp, 0x7511adu); f_00751284();
    /* 007511ad: mov edx, eax */ r_edx = r_eax;
    /* 007511af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007511b2: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 007511b5: jmp 0x750fab */ goto L_00750fab;
}

void f_00750fde(void)
{
    FN_ENTER(0x00750fde);
    /* 00750fde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750fe1: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00750fe4: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x750fe9u); f_007365f4();
    /* 00750fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750feb: jne 0x751007 */ if (!fZ) goto L_00751007;
L_00750fed:; BB(0x00750fed);
    /* 00750fed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ff0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00750ff3: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x750ff8u); f_00737d90();
    /* 00750ff8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00750ffb: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00750ffe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00750fff: call 0x741c00 */ r_esp -= 4; W32(r_esp, 0x751004u); f_00741c00();
    /* 00751004: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00751007:; BB(0x00751007);
    /* 00751007: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075100a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075100d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00751014: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00751016: je 0x751026 */ if (fZ) goto L_00751026;
L_00751018:; BB(0x00751018);
    /* 00751018: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075101b: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075101f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
L_00751026:; BB(0x00751026);
    /* 00751026: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00751028: je 0x75111b */ if (fZ) goto L_0075111b;
L_0075102e:; BB(0x0075102e);
    /* 0075102e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x751033u); f_007365f4();
    /* 00751033: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00751036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00751037: call 0x75158c */ r_esp -= 4; W32(r_esp, 0x75103cu); f_0075158c();
    /* 0075103c: jmp 0x75111b */ goto L_0075111b;
L_0075111b:; BB(0x0075111b);
    /* 0075111b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075111e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00751121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00751124: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075112b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075112d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075112e: ret  */ FN_RET(0x00750fde); r_esp += 4; return;
}

