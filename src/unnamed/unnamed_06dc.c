#include "protos.h"

void f_006dc1e4(void) /* sub_6DC1E4 */
{
    FN_ENTER(0x006dc1e4);
    /* 006dc1e4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006dc1e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc1ea: je 0x6dc1f2 */ if (fZ) goto L_006dc1f2;
L_006dc1ec:; BB(0x006dc1ec);
    /* 006dc1ec: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x6dc1f1u); f_005d24b0();
    /* 006dc1f1: ret  */ FN_RET(0x006dc1e4); r_esp += 4; return;
L_006dc1f2:; BB(0x006dc1f2);
    /* 006dc1f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc1f4: ret  */ FN_RET(0x006dc1e4); r_esp += 4; return;
}

void f_006dc1f8(void) /* sub_6DC1F8 */
{
    FN_ENTER(0x006dc1f8);
    /* 006dc1f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006dc1fc: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 006dc1ff: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc202: je 0x6dc339 */ if (fZ) goto L_006dc339;
L_006dc208:; BB(0x006dc208);
    /* 006dc208: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc20b: je 0x6dc32a */ if (fZ) goto L_006dc32a;
L_006dc211:; BB(0x006dc211);
    /* 006dc211: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc213: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc219:; BB(0x006dc219);
    /* 006dc219: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 006dc21d: lea edx, [ecx - 2] */ r_edx = (u32)(r_ecx+0xfffffffeu);
    /* 006dc220: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006dc223: ja 0x6dc327 */ if ((!fC&&!fZ)) goto L_006dc327;
L_006dc229:; BB(0x006dc229);
    /* 006dc229: mov edx, dword ptr [ecx*4 + 0x96c7d8] */ r_edx = R32((u32)(r_ecx*4+0x96c7d8u));
    /* 006dc230: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc1f8); r_esp += 4; return;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc1f8); r_esp += 4; return;
L_006dc32a:; BB(0x006dc32a);
    /* 006dc32a: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 006dc32e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc331: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc333:; BB(0x006dc333);
    /* 006dc333: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc338: ret  */ FN_RET(0x006dc1f8); r_esp += 4; return;
L_006dc339:; BB(0x006dc339);
    /* 006dc339: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 006dc33d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc340: je 0x6dc23e */ if (fZ) goto L_006dc23e;
L_006dc346:; BB(0x006dc346);
    /* 006dc346: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc349: jl 0x6dc354 */ if ((fS!=fO)) goto L_006dc354;
L_006dc34b:; BB(0x006dc34b);
    /* 006dc34b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc34e: jle 0x6dc23e */ if ((fZ||fS!=fO)) goto L_006dc23e;
L_006dc354:; BB(0x006dc354);
    /* 006dc354: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc356: ret  */ FN_RET(0x006dc1f8); r_esp += 4; return;
}

void f_006dc232(void)
{
    FN_ENTER(0x006dc232);
    /* 006dc232: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc238: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc232); r_esp += 4; return;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc232); r_esp += 4; return;
}

void f_006dc244(void)
{
    FN_ENTER(0x006dc244);
    /* 006dc244: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc24a: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc250:; BB(0x006dc250);
    /* 006dc250: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc255: ret  */ FN_RET(0x006dc244); r_esp += 4; return;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc244); r_esp += 4; return;
}

void f_006dc256(void)
{
    FN_ENTER(0x006dc256);
    /* 006dc256: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc25a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc25c: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc262:; BB(0x006dc262);
    /* 006dc262: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc267: ret  */ FN_RET(0x006dc256); r_esp += 4; return;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc256); r_esp += 4; return;
}

void f_006dc268(void)
{
    FN_ENTER(0x006dc268);
    /* 006dc268: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc26c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc26e: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc274:; BB(0x006dc274);
    /* 006dc274: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc279: ret  */ FN_RET(0x006dc268); r_esp += 4; return;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc268); r_esp += 4; return;
}

void f_006dc27a(void)
{
    FN_ENTER(0x006dc27a);
    /* 006dc27a: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc27e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc280: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc286:; BB(0x006dc286);
    /* 006dc286: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc28b: ret  */ FN_RET(0x006dc27a); r_esp += 4; return;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc27a); r_esp += 4; return;
}

void f_006dc28c(void)
{
    FN_ENTER(0x006dc28c);
    /* 006dc28c: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc292: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc298:; BB(0x006dc298);
    /* 006dc298: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc29d: ret  */ FN_RET(0x006dc28c); r_esp += 4; return;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc28c); r_esp += 4; return;
}

void f_006dc29e(void)
{
    FN_ENTER(0x006dc29e);
    goto L_006dc29e;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc29e); r_esp += 4; return;
L_006dc29e:; BB(0x006dc29e);
    /* 006dc29e: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc2a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc2a5: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc2ab:; BB(0x006dc2ab);
    /* 006dc2ab: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc29e); r_esp += 4; return;
}

void f_006dc2ad(void)
{
    FN_ENTER(0x006dc2ad);
    goto L_006dc2ad;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc2ad); r_esp += 4; return;
L_006dc2ad:; BB(0x006dc2ad);
    /* 006dc2ad: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc2b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc2b4: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc2b6:; BB(0x006dc2b6);
    /* 006dc2b6: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc2ad); r_esp += 4; return;
}

void f_006dc2b8(void)
{
    FN_ENTER(0x006dc2b8);
    goto L_006dc2b8;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc2b8); r_esp += 4; return;
L_006dc2b8:; BB(0x006dc2b8);
    /* 006dc2b8: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc2bc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc2bf: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc2c1:; BB(0x006dc2c1);
    /* 006dc2c1: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc2b8); r_esp += 4; return;
}

void f_006dc2c6(void)
{
    FN_ENTER(0x006dc2c6);
    goto L_006dc2c6;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc2c6); r_esp += 4; return;
L_006dc2c6:; BB(0x006dc2c6);
    /* 006dc2c6: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc2ca: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc2cd: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc2cf:; BB(0x006dc2cf);
    /* 006dc2cf: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc2c6); r_esp += 4; return;
}

void f_006dc2d4(void)
{
    FN_ENTER(0x006dc2d4);
    goto L_006dc2d4;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc2d4); r_esp += 4; return;
L_006dc2d4:; BB(0x006dc2d4);
    /* 006dc2d4: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc2d8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc2db: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc2dd:; BB(0x006dc2dd);
    /* 006dc2dd: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc2d4); r_esp += 4; return;
}

void f_006dc2e2(void)
{
    FN_ENTER(0x006dc2e2);
    goto L_006dc2e2;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc2e2); r_esp += 4; return;
L_006dc2e2:; BB(0x006dc2e2);
    /* 006dc2e2: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc2e6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc2e9: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc2eb:; BB(0x006dc2eb);
    /* 006dc2eb: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc2e2); r_esp += 4; return;
}

void f_006dc2f0(void)
{
    FN_ENTER(0x006dc2f0);
    goto L_006dc2f0;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc2f0); r_esp += 4; return;
L_006dc2f0:; BB(0x006dc2f0);
    /* 006dc2f0: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc2f4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc2f7: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc2f9:; BB(0x006dc2f9);
    /* 006dc2f9: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc2f0); r_esp += 4; return;
}

void f_006dc2fe(void)
{
    FN_ENTER(0x006dc2fe);
    goto L_006dc2fe;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc2fe); r_esp += 4; return;
L_006dc2fe:; BB(0x006dc2fe);
    /* 006dc2fe: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc302: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc305: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc307:; BB(0x006dc307);
    /* 006dc307: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc2fe); r_esp += 4; return;
}

void f_006dc30c(void)
{
    FN_ENTER(0x006dc30c);
    goto L_006dc30c;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc30c); r_esp += 4; return;
L_006dc30c:; BB(0x006dc30c);
    /* 006dc30c: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc310: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc313: jne 0x6dc327 */ if (!fZ) goto L_006dc327;
L_006dc315:; BB(0x006dc315);
    /* 006dc315: jmp 0x6dc23e */ goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc30c); r_esp += 4; return;
}

void f_006dc31a(void)
{
    FN_ENTER(0x006dc31a);
    goto L_006dc31a;
L_006dc23e:; BB(0x006dc23e);
    /* 006dc23e: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc243: ret  */ FN_RET(0x006dc31a); r_esp += 4; return;
L_006dc31a:; BB(0x006dc31a);
    /* 006dc31a: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 006dc31e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc321: je 0x6dc23e */ if (fZ) goto L_006dc23e;
L_006dc327:; BB(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc31a); r_esp += 4; return;
}

void f_006dc327(void)
{
    FN_ENTER(0x006dc327);
    /* 006dc327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc329: ret  */ FN_RET(0x006dc327); r_esp += 4; return;
}

void f_006dc358(void) /* sub_6DC358 */
{
    FN_ENTER(0x006dc358);
    /* 006dc358: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc35a: ret  */ FN_RET(0x006dc358); r_esp += 4; return;
}

void f_006dc35c(void) /* sub_6DC35C */
{
    FN_ENTER(0x006dc35c);
    /* 006dc35c: mov dword ptr [0xa96344], 0x3f800000 */ W32((u32)(0xa96344u), 0x3f800000u);
    /* 006dc366: mov dword ptr [0xa96348], 0x41000000 */ W32((u32)(0xa96348u), 0x41000000u);
    /* 006dc370: mov dword ptr [0xa9634c], 0x3fc00000 */ W32((u32)(0xa9634cu), 0x3fc00000u);
    /* 006dc37a: ret  */ FN_RET(0x006dc35c); r_esp += 4; return;
}

void f_006dc37c(void) /* sub_6DC37C */
{
    FN_ENTER(0x006dc37c);
    /* 006dc37c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc37d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dc37f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dc381: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6dc386u); f_006dc3a0();
    /* 006dc386: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006dc38a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc38c: jne 0x6dc392 */ if (!fZ) goto L_006dc392;
L_006dc38e:; BB(0x006dc38e);
    /* 006dc38e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc38f: ret 4 */ FN_RET(0x006dc37c); r_esp += 8; return;
L_006dc392:; BB(0x006dc392);
    /* 006dc392: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc393: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6dc398u); f_005c2f74();
    /* 006dc398: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc399: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc39a: ret 4 */ FN_RET(0x006dc37c); r_esp += 8; return;
}

void f_006dc3a0(void) /* sub_6DC3A0 */
{
    FN_ENTER(0x006dc3a0);
    /* 006dc3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dc3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006dc3a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dc3a5: push 0x8ee424 */ { u32 v = 0x8ee424u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc3aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dc3b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc3b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dc3b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dc3bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dc3be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dc3c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dc3c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dc3c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dc3ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dc3d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dc3d4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006dc3d7: mov dword ptr [eax], 0xb3cb88 */ W32((u32)(r_eax), 0xb3cb88u);
    /* 006dc3dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc3df: je 0x6dc3f3 */ if (fZ) goto L_006dc3f3;
L_006dc3e1:; BB(0x006dc3e1);
    /* 006dc3e1: je 0x6dc3ec */ if (fZ) goto L_006dc3ec;
L_006dc3e3:; BB(0x006dc3e3);
    /* 006dc3e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc3e5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006dc3e7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6dc3e9u); call_ind(t); }
    /* 006dc3e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006dc3ec:; BB(0x006dc3ec);
    /* 006dc3ec: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_006dc3f3:; BB(0x006dc3f3);
    /* 006dc3f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dc3fa: mov ecx, eax */ r_ecx = r_eax;
    /* 006dc3fc: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6dc401u); f_006dc848();
    /* 006dc401: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dc404: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dc40b: mov esp, ebp */ r_esp = r_ebp;
    /* 006dc40d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dc40e: ret  */ FN_RET(0x006dc3a0); r_esp += 4; return;
}

void f_006dc410(void) /* sub_6DC410 */
{
    FN_ENTER(0x006dc410);
    /* 006dc410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dc411: mov ebp, esp */ r_ebp = r_esp;
    /* 006dc413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dc415: push 0x8ee45a */ { u32 v = 0x8ee45au; r_esp -= 4; W32(r_esp, v); }
    /* 006dc41a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dc420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc421: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dc428: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dc42b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dc42e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dc431: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dc434: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dc437: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc43a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dc43d: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6dc442u); f_006dc898();
    /* 006dc442: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dc449: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dc44c: mov dword ptr [edx], 0xb3cb88 */ W32((u32)(r_edx), 0xb3cb88u);
    /* 006dc452: mov eax, dword ptr [0x9cf230] */ r_eax = R32((u32)(0x9cf230u));
    /* 006dc457: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006dc45e: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc463: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006dc466: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6dc46bu); f_008581c5();
    /* 006dc46b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc46c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006dc46f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc471: je 0x6dc4a9 */ if (fZ) goto L_006dc4a9;
L_006dc473:; BB(0x006dc473);
    /* 006dc473: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006dc47a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006dc481: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dc484: call 0x6daefc */ r_esp -= 4; W32(r_esp, 0x6dc489u); f_006daefc();
    /* 006dc489: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dc48c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006dc493:; BB(0x006dc493);
    /* 006dc493: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dc496: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 006dc499: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dc49c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dc4a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006dc4a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dc4a6: ret 4 */ FN_RET(0x006dc410); r_esp += 8; return;
L_006dc4a9:; BB(0x006dc4a9);
    /* 006dc4a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc4ab: jmp 0x6dc493 */ goto L_006dc493;
}

void f_006dc4b0(void) /* sub_6DC4B0 */
{
    FN_ENTER(0x006dc4b0);
    /* 006dc4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dc4b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc4b2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006dc4b4: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 006dc4b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc4b9: je 0x6dc4fc */ if (fZ) goto L_006dc4fc;
L_006dc4bb:; BB(0x006dc4bb);
    /* 006dc4bb: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006dc4bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc4c0: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6dc4c5u); f_00717ed8();
    /* 006dc4c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc4c6: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6dc4cbu); f_006dc358();
    /* 006dc4cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc4ce: je 0x6dc4f4 */ if (fZ) goto L_006dc4f4;
L_006dc4d0:; BB(0x006dc4d0);
    /* 006dc4d0: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006dc4d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006dc4d5: mov edi, eax */ r_edi = r_eax;
L_006dc4d7:; BB(0x006dc4d7);
    /* 006dc4d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc4d8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6dc4ddu); f_0068d5a8();
    /* 006dc4dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc4de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc4e0: je 0x6dc4e9 */ if (fZ) goto L_006dc4e9;
L_006dc4e2:; BB(0x006dc4e2);
    /* 006dc4e2: mov ecx, eax */ r_ecx = r_eax;
    /* 006dc4e4: call 0x693240 */ r_esp -= 4; W32(r_esp, 0x6dc4e9u); f_00693240();
L_006dc4e9:; BB(0x006dc4e9);
    /* 006dc4e9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dc4ec: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc4ef: jl 0x6dc4d7 */ if ((fS!=fO)) goto L_006dc4d7;
L_006dc4f1:; BB(0x006dc4f1);
    /* 006dc4f1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006dc4f4:; BB(0x006dc4f4);
    /* 006dc4f4: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006dc4f7: call 0x694308 */ r_esp -= 4; W32(r_esp, 0x6dc4fcu); f_00694308();
L_006dc4fc:; BB(0x006dc4fc);
    /* 006dc4fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc4fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dc4fe: ret  */ FN_RET(0x006dc4b0); r_esp += 4; return;
}

void f_006dc500(void) /* sub_6DC500 */
{
    FN_ENTER(0x006dc500);
    /* 006dc500: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006dc505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc507: je 0x6dc511 */ if (fZ) goto L_006dc511;
L_006dc509:; BB(0x006dc509);
    /* 006dc509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc50b: call 0x6a758c */ r_esp -= 4; W32(r_esp, 0x6dc510u); f_006a758c();
    /* 006dc510: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006dc511:; BB(0x006dc511);
    /* 006dc511: ret  */ FN_RET(0x006dc500); r_esp += 4; return;
}

void f_006dc514(void) /* sub_6DC514 */
{
    FN_ENTER(0x006dc514);
    /* 006dc514: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc515: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dc517: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 006dc51a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc51c: je 0x6dc537 */ if (fZ) goto L_006dc537;
L_006dc51e:; BB(0x006dc51e);
    /* 006dc51e: call 0x6daf34 */ r_esp -= 4; W32(r_esp, 0x6dc523u); f_006daf34();
    /* 006dc523: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 006dc526: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc528: je 0x6dc530 */ if (fZ) goto L_006dc530;
L_006dc52a:; BB(0x006dc52a);
    /* 006dc52a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc52c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006dc52e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6dc530u); call_ind(t); }
L_006dc530:; BB(0x006dc530);
    /* 006dc530: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
L_006dc537:; BB(0x006dc537);
    /* 006dc537: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc538: ret  */ FN_RET(0x006dc514); r_esp += 4; return;
}

void f_006dc53c(void) /* sub_6DC53C */
{
    FN_ENTER(0x006dc53c);
    /* 006dc53c: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006dc53f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc541: je 0x6dc550 */ if (fZ) goto L_006dc550;
L_006dc543:; BB(0x006dc543);
    /* 006dc543: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc547: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc54b: call 0x6daf54 */ r_esp -= 4; W32(r_esp, 0x6dc550u); f_006daf54();
L_006dc550:; BB(0x006dc550);
    /* 006dc550: ret 8 */ FN_RET(0x006dc53c); r_esp += 12; return;
}

void f_006dc554(void) /* sub_6DC554 */
{
    FN_ENTER(0x006dc554);
    /* 006dc554: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006dc557: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc559: je 0x6dc568 */ if (fZ) goto L_006dc568;
L_006dc55b:; BB(0x006dc55b);
    /* 006dc55b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc55f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc563: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6dc568u); f_006db5d4();
L_006dc568:; BB(0x006dc568);
    /* 006dc568: ret 8 */ FN_RET(0x006dc554); r_esp += 12; return;
}

void f_006dc56c(void) /* sub_6DC56C */
{
    FN_ENTER(0x006dc56c);
    /* 006dc56c: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006dc56f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc571: je 0x6dc580 */ if (fZ) goto L_006dc580;
L_006dc573:; BB(0x006dc573);
    /* 006dc573: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc577: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc57b: call 0x6db13c */ r_esp -= 4; W32(r_esp, 0x6dc580u); f_006db13c();
L_006dc580:; BB(0x006dc580);
    /* 006dc580: ret 8 */ FN_RET(0x006dc56c); r_esp += 12; return;
}

void f_006dc584(void) /* sub_6DC584 */
{
    FN_ENTER(0x006dc584);
    /* 006dc584: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006dc587: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc589: je 0x6dc598 */ if (fZ) goto L_006dc598;
L_006dc58b:; BB(0x006dc58b);
    /* 006dc58b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc58f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc593: call 0x6db170 */ r_esp -= 4; W32(r_esp, 0x6dc598u); f_006db170();
L_006dc598:; BB(0x006dc598);
    /* 006dc598: ret 8 */ FN_RET(0x006dc584); r_esp += 12; return;
}

void f_006dc59c(void) /* sub_6DC59C */
{
    FN_ENTER(0x006dc59c);
    /* 006dc59c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006dc5a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc5a2: je 0x6dc5ec */ if (fZ) goto L_006dc5ec;
L_006dc5a4:; BB(0x006dc5a4);
    /* 006dc5a4: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006dc5a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc5a9: je 0x6dc5f7 */ if (fZ) goto L_006dc5f7;
L_006dc5ab:; BB(0x006dc5ab);
    /* 006dc5ab: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006dc5b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc5b3: jne 0x6dc5c5 */ if (!fZ) goto L_006dc5c5;
L_006dc5b5:; BB(0x006dc5b5);
    /* 006dc5b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5b7: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc5bb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5bd: call 0x6db358 */ r_esp -= 4; W32(r_esp, 0x6dc5c2u); f_006db358();
    /* 006dc5c2: ret 0x10 */ FN_RET(0x006dc59c); r_esp += 20; return;
L_006dc5c5:; BB(0x006dc5c5);
    /* 006dc5c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc5c8: jne 0x6dc5db */ if (!fZ) goto L_006dc5db;
L_006dc5ca:; BB(0x006dc5ca);
    /* 006dc5ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5cc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006dc5d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5d1: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5d3: call 0x6db358 */ r_esp -= 4; W32(r_esp, 0x6dc5d8u); f_006db358();
    /* 006dc5d8: ret 0x10 */ FN_RET(0x006dc59c); r_esp += 20; return;
L_006dc5db:; BB(0x006dc5db);
    /* 006dc5db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5dd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006dc5e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5e2: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5e4: call 0x6db358 */ r_esp -= 4; W32(r_esp, 0x6dc5e9u); f_006db358();
    /* 006dc5e9: ret 0x10 */ FN_RET(0x006dc59c); r_esp += 20; return;
L_006dc5ec:; BB(0x006dc5ec);
    /* 006dc5ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc5ee: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc5f2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006dc5f4: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x6dc5f7u); call_ind(t); }
L_006dc5f7:; BB(0x006dc5f7);
    /* 006dc5f7: ret 0x10 */ FN_RET(0x006dc59c); r_esp += 20; return;
}

void f_006dc5fc(void) /* sub_6DC5FC */
{
    FN_ENTER(0x006dc5fc);
    /* 006dc5fc: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006dc5ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc601: je 0x6dc614 */ if (fZ) goto L_006dc614;
L_006dc603:; BB(0x006dc603);
    /* 006dc603: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc607: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc60b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc60f: call 0x6db548 */ r_esp -= 4; W32(r_esp, 0x6dc614u); f_006db548();
L_006dc614:; BB(0x006dc614);
    /* 006dc614: ret 0xc */ FN_RET(0x006dc5fc); r_esp += 16; return;
}

void f_006dc618(void) /* sub_6DC618 */
{
    FN_ENTER(0x006dc618);
    /* 006dc618: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 006dc61b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc61d: je 0x6dc625 */ if (fZ) goto L_006dc625;
L_006dc61f:; BB(0x006dc61f);
    /* 006dc61f: call 0x6db7b8 */ r_esp -= 4; W32(r_esp, 0x6dc624u); f_006db7b8();
    /* 006dc624: ret  */ FN_RET(0x006dc618); r_esp += 4; return;
L_006dc625:; BB(0x006dc625);
    /* 006dc625: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc62a: ret  */ FN_RET(0x006dc618); r_esp += 4; return;
}

void f_006dc62c(void) /* sub_6DC62C */
{
    FN_ENTER(0x006dc62c);
    /* 006dc62c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006dc630: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 006dc635: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc638: jne 0x6dc64a */ if (!fZ) goto L_006dc64a;
L_006dc63a:; BB(0x006dc63a);
    /* 006dc63a: push dword ptr [edx*4 + 0x96c890] */ { u32 v = R32((u32)(r_edx*4+0x96c890u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc641: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x6dc646u); f_004d5ff0();
    /* 006dc646: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc647: ret 4 */ FN_RET(0x006dc62c); r_esp += 8; return;
L_006dc64a:; BB(0x006dc64a);
    /* 006dc64a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc64d: jne 0x6dc65f */ if (!fZ) goto L_006dc65f;
L_006dc64f:; BB(0x006dc64f);
    /* 006dc64f: push dword ptr [edx*4 + 0x96c8b0] */ { u32 v = R32((u32)(r_edx*4+0x96c8b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc656: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x6dc65bu); f_004d5ff0();
    /* 006dc65b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc65c: ret 4 */ FN_RET(0x006dc62c); r_esp += 8; return;
L_006dc65f:; BB(0x006dc65f);
    /* 006dc65f: push dword ptr [edx*4 + 0x96c8b0] */ { u32 v = R32((u32)(r_edx*4+0x96c8b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc666: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x6dc66bu); f_004d5ff0();
    /* 006dc66b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc66c: ret 4 */ FN_RET(0x006dc62c); r_esp += 8; return;
}

void f_006dc670(void) /* sub_6DC670 */
{
    FN_ENTER(0x006dc670);
    /* 006dc670: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dc673: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6dc678u); f_006dc358();
    /* 006dc678: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc67b: je 0x6dc681 */ if (fZ) goto L_006dc681;
L_006dc67d:; BB(0x006dc67d);
    /* 006dc67d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dc680: ret  */ FN_RET(0x006dc670); r_esp += 4; return;
L_006dc681:; BB(0x006dc681);
    /* 006dc681: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc683: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x6dc688u); f_004d30cc();
    /* 006dc688: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc689: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006dc68d: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006dc691: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006dc694: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dc696: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006dc699: mov ebx, eax */ r_ebx = r_eax;
    /* 006dc69b: mov esi, edx */ r_esi = r_edx;
L_006dc69d:; BB(0x006dc69d);
    /* 006dc69d: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc69f: jne 0x6dc6b6 */ if (!fZ) goto L_006dc6b6;
L_006dc6a1:; BB(0x006dc6a1);
    /* 006dc6a1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dc6a4: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc6a7: jl 0x6dc69d */ if ((fS!=fO)) goto L_006dc69d;
L_006dc6a9:; BB(0x006dc6a9);
    /* 006dc6a9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006dc6ad: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006dc6b1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006dc6b4: jmp 0x6dc67d */ goto L_006dc67d;
L_006dc6b6:; BB(0x006dc6b6);
    /* 006dc6b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc6b7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6dc6bcu); f_0068d5a8();
    /* 006dc6bc: mov edi, eax */ r_edi = r_eax;
    /* 006dc6be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dc6c1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc6c3: je 0x6dc6a1 */ if (fZ) goto L_006dc6a1;
L_006dc6c5:; BB(0x006dc6c5);
    /* 006dc6c5: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006dc6cb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006dc6cd: je 0x6dc6d6 */ if (fZ) goto L_006dc6d6;
L_006dc6cf:; BB(0x006dc6cf);
    /* 006dc6cf: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc6d4: jmp 0x6dc6d8 */ goto L_006dc6d8;
L_006dc6d6:; BB(0x006dc6d6);
    /* 006dc6d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006dc6d8:; BB(0x006dc6d8);
    /* 006dc6d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc6da: jne 0x6dc6a1 */ if (!fZ) goto L_006dc6a1;
L_006dc6dc:; BB(0x006dc6dc);
    /* 006dc6dc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dc6de: mov ecx, edi */ r_ecx = r_edi;
    /* 006dc6e0: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6dc6e5u); f_006854a8();
    /* 006dc6e5: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006dc6e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc6ea: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x6dc6efu); f_007181b8();
    /* 006dc6ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc6f0: jmp 0x6dc6a1 */ goto L_006dc6a1;
}

void f_006dc6f4(void) /* sub_6DC6F4 */
{
    FN_ENTER(0x006dc6f4);
    /* 006dc6f4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dc6f7: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6dc6fcu); f_006dc358();
    /* 006dc6fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc6ff: je 0x6dc705 */ if (fZ) goto L_006dc705;
L_006dc701:; BB(0x006dc701);
    /* 006dc701: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dc704: ret  */ FN_RET(0x006dc6f4); r_esp += 4; return;
L_006dc705:; BB(0x006dc705);
    /* 006dc705: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc707: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x6dc70cu); f_004d30cc();
    /* 006dc70c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc70d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006dc711: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006dc715: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006dc718: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dc71a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006dc71d: mov ebx, eax */ r_ebx = r_eax;
    /* 006dc71f: mov esi, edx */ r_esi = r_edx;
L_006dc721:; BB(0x006dc721);
    /* 006dc721: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc723: jne 0x6dc73a */ if (!fZ) goto L_006dc73a;
L_006dc725:; BB(0x006dc725);
    /* 006dc725: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dc728: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc72b: jl 0x6dc721 */ if ((fS!=fO)) goto L_006dc721;
L_006dc72d:; BB(0x006dc72d);
    /* 006dc72d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006dc731: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006dc735: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006dc738: jmp 0x6dc701 */ goto L_006dc701;
L_006dc73a:; BB(0x006dc73a);
    /* 006dc73a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc73b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6dc740u); f_0068d5a8();
    /* 006dc740: mov edi, eax */ r_edi = r_eax;
    /* 006dc742: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dc745: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc747: je 0x6dc725 */ if (fZ) goto L_006dc725;
L_006dc749:; BB(0x006dc749);
    /* 006dc749: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006dc74f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006dc751: je 0x6dc75a */ if (fZ) goto L_006dc75a;
L_006dc753:; BB(0x006dc753);
    /* 006dc753: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc758: jmp 0x6dc75c */ goto L_006dc75c;
L_006dc75a:; BB(0x006dc75a);
    /* 006dc75a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006dc75c:; BB(0x006dc75c);
    /* 006dc75c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc75e: je 0x6dc725 */ if (fZ) goto L_006dc725;
L_006dc760:; BB(0x006dc760);
    /* 006dc760: mov ecx, edi */ r_ecx = r_edi;
    /* 006dc762: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6dc767u); f_00685514();
    /* 006dc767: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006dc76b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc76c: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6dc771u); f_00718108();
    /* 006dc771: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc772: jmp 0x6dc725 */ goto L_006dc725;
}

void f_006dc774(void) /* sub_6DC774 */
{
    FN_ENTER(0x006dc774);
    /* 006dc774: mov dword ptr [0xa96354], 0x3f800000 */ W32((u32)(0xa96354u), 0x3f800000u);
    /* 006dc77e: mov dword ptr [0xa96358], 0x41000000 */ W32((u32)(0xa96358u), 0x41000000u);
    /* 006dc788: mov dword ptr [0xa9635c], 0x3fc00000 */ W32((u32)(0xa9635cu), 0x3fc00000u);
    /* 006dc792: ret  */ FN_RET(0x006dc774); r_esp += 4; return;
}

void f_006dc794(void) /* sub_6DC794 */
{
    FN_ENTER(0x006dc794);
    /* 006dc794: mov eax, ecx */ r_eax = r_ecx;
    /* 006dc796: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006dc799: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc79b: je 0x6dc7cd */ if (fZ) goto L_006dc7cd;
L_006dc79d:; BB(0x006dc79d);
    /* 006dc79d: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 006dc7a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc7a2: je 0x6dc7bb */ if (fZ) goto L_006dc7bb;
L_006dc7a4:; BB(0x006dc7a4);
    /* 006dc7a4: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006dc7a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7a9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006dc7ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7ae: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006dc7b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7b3: call 0x6dbc80 */ r_esp -= 4; W32(r_esp, 0x6dc7b8u); f_006dbc80();
    /* 006dc7b8: ret 8 */ FN_RET(0x006dc794); r_esp += 12; return;
L_006dc7bb:; BB(0x006dc7bb);
    /* 006dc7bb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006dc7bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7c0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006dc7c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7c5: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6dc7cau); f_006dbcf0();
    /* 006dc7ca: ret 8 */ FN_RET(0x006dc794); r_esp += 12; return;
L_006dc7cd:; BB(0x006dc7cd);
    /* 006dc7cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc7cf: ret 8 */ FN_RET(0x006dc794); r_esp += 12; return;
}

void f_006dc7d4(void) /* sub_6DC7D4 */
{
    FN_ENTER(0x006dc7d4);
    /* 006dc7d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7d6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006dc7d8: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006dc7db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc7dd: je 0x6dc820 */ if (fZ) goto L_006dc820;
L_006dc7df:; BB(0x006dc7df);
    /* 006dc7df: call 0x6942cc */ r_esp -= 4; W32(r_esp, 0x6dc7e4u); f_006942cc();
    /* 006dc7e4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6dc7e9u); f_006dc358();
    /* 006dc7e9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc7ec: je 0x6dc812 */ if (fZ) goto L_006dc812;
L_006dc7ee:; BB(0x006dc7ee);
    /* 006dc7ee: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006dc7f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006dc7f3: mov edi, eax */ r_edi = r_eax;
L_006dc7f5:; BB(0x006dc7f5);
    /* 006dc7f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc7f6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6dc7fbu); f_0068d5a8();
    /* 006dc7fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc7fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc7fe: je 0x6dc807 */ if (fZ) goto L_006dc807;
L_006dc800:; BB(0x006dc800);
    /* 006dc800: mov ecx, eax */ r_ecx = r_eax;
    /* 006dc802: call 0x692804 */ r_esp -= 4; W32(r_esp, 0x6dc807u); f_00692804();
L_006dc807:; BB(0x006dc807);
    /* 006dc807: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dc80a: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc80d: jl 0x6dc7f5 */ if ((fS!=fO)) goto L_006dc7f5;
L_006dc80f:; BB(0x006dc80f);
    /* 006dc80f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006dc812:; BB(0x006dc812);
    /* 006dc812: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 006dc815: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006dc819: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc81a: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6dc81fu); f_00717f08();
    /* 006dc81f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006dc820:; BB(0x006dc820);
    /* 006dc820: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc821: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dc822: ret  */ FN_RET(0x006dc7d4); r_esp += 4; return;
}

void f_006dc824(void) /* sub_6DC824 */
{
    FN_ENTER(0x006dc824);
    /* 006dc824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc825: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dc827: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dc829: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6dc82eu); f_006dc848();
    /* 006dc82e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006dc832: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc834: jne 0x6dc83a */ if (!fZ) goto L_006dc83a;
L_006dc836:; BB(0x006dc836);
    /* 006dc836: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc837: ret 4 */ FN_RET(0x006dc824); r_esp += 8; return;
L_006dc83a:; BB(0x006dc83a);
    /* 006dc83a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc83b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6dc840u); f_005c2f74();
    /* 006dc840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dc841: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc842: ret 4 */ FN_RET(0x006dc824); r_esp += 8; return;
}

void f_006dc848(void) /* sub_6DC848 */
{
    FN_ENTER(0x006dc848);
    /* 006dc848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dc849: mov ebp, esp */ r_ebp = r_esp;
    /* 006dc84b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dc84d: push 0x8ee474 */ { u32 v = 0x8ee474u; r_esp -= 4; W32(r_esp, v); }
    /* 006dc852: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dc858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dc859: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dc860: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dc863: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dc866: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dc869: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dc86c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dc86f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dc872: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dc875: mov dword ptr [ecx], 0xb3cbe0 */ W32((u32)(r_ecx), 0xb3cbe0u);
    /* 006dc87b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dc882: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6dc887u); f_008171e8();
    /* 006dc887: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dc88a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dc891: mov esp, ebp */ r_esp = r_ebp;
    /* 006dc893: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dc894: ret  */ FN_RET(0x006dc848); r_esp += 4; return;
}

void f_006dc898(void) /* sub_6DC898 */
{
    FN_ENTER(0x006dc898);
    /* 006dc898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc899: mov edi, ecx */ r_edi = r_ecx;
    /* 006dc89b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc89f: mov ecx, edi */ r_ecx = r_edi;
    /* 006dc8a1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6dc8a6u); f_008193cc();
    /* 006dc8a6: mov dword ptr [edi], 0xb3cbe0 */ W32((u32)(r_edi), 0xb3cbe0u);
    /* 006dc8ac: mov edx, dword ptr [0x9cf234] */ r_edx = R32((u32)(0x9cf234u));
    /* 006dc8b2: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006dc8b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc8b7: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006dc8ba: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006dc8bd: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006dc8c0: mov eax, edi */ r_eax = r_edi;
    /* 006dc8c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dc8c3: ret 4 */ FN_RET(0x006dc898); r_esp += 8; return;
}

void f_006dc8c8(void) /* sub_6DC8C8 */
{
    FN_ENTER(0x006dc8c8);
    /* 006dc8c8: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006dc8cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc8cf: je 0x6dc8d2 */ if (fZ) goto L_006dc8d2;
L_006dc8d1:; BB(0x006dc8d1);
    /* 006dc8d1: ret  */ FN_RET(0x006dc8c8); r_esp += 4; return;
L_006dc8d2:; BB(0x006dc8d2);
    /* 006dc8d2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006dc8d4: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6dc8d7u); call_ind(t); }
    /* 006dc8d7: ret  */ FN_RET(0x006dc8c8); r_esp += 4; return;
}

void f_006dc8d8(void) /* sub_6DC8D8 */
{
    FN_ENTER(0x006dc8d8);
    /* 006dc8d8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6dc8ddu); f_006dc358();
    /* 006dc8dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc8e0: je 0x6dc8e9 */ if (fZ) goto L_006dc8e9;
L_006dc8e2:; BB(0x006dc8e2);
    /* 006dc8e2: fld dword ptr [0x96c8e8] */ FPUSH(R_F32((u32)(0x96c8e8u)));
    /* 006dc8e8: ret  */ FN_RET(0x006dc8d8); r_esp += 4; return;
L_006dc8e9:; BB(0x006dc8e9);
    /* 006dc8e9: mov eax, dword ptr [0xa0f45c] */ r_eax = R32((u32)(0xa0f45cu));
    /* 006dc8ee: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dc8f1: jle 0x6dc8e2 */ if ((fZ||fS!=fO)) goto L_006dc8e2;
L_006dc8f3:; BB(0x006dc8f3);
    /* 006dc8f3: fld dword ptr [0x96c8ec] */ FPUSH(R_F32((u32)(0x96c8ecu)));
    /* 006dc8f9: ret  */ FN_RET(0x006dc8d8); r_esp += 4; return;
}

void f_006dc8fc(void) /* sub_6DC8FC */
{
    FN_ENTER(0x006dc8fc);
    /* 006dc8fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dc8fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dc8ff: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006dc902: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6dc907u); f_00694780();
    /* 006dc907: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc90d: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006dc910: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc912: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc914: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc916: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006dc91d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6dc922u); f_007c1160();
    /* 006dc922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc924: jne 0x6dc94d */ if (!fZ) goto L_006dc94d;
L_006dc926:; BB(0x006dc926);
    /* 006dc926: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006dc929: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6dc92eu); f_00694780();
    /* 006dc92e: push dword ptr [0xa0f698] */ { u32 v = R32((u32)(0xa0f698u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc934: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006dc937: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc939: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc93b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc93d: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006dc944: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6dc949u); f_007c1160();
    /* 006dc949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc94b: je 0x6dc954 */ if (fZ) goto L_006dc954;
L_006dc94d:; BB(0x006dc94d);
    /* 006dc94d: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc952: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc953: ret  */ FN_RET(0x006dc8fc); r_esp += 4; return;
L_006dc954:; BB(0x006dc954);
    /* 006dc954: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006dc957: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6dc95cu); f_00694780();
    /* 006dc95c: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc962: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006dc965: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc967: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc969: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc96b: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006dc972: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6dc977u); f_007c1160();
    /* 006dc977: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc979: je 0x6dc982 */ if (fZ) goto L_006dc982;
L_006dc97b:; BB(0x006dc97b);
    /* 006dc97b: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc980: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc981: ret  */ FN_RET(0x006dc8fc); r_esp += 4; return;
L_006dc982:; BB(0x006dc982);
    /* 006dc982: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc984: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc985: ret  */ FN_RET(0x006dc8fc); r_esp += 4; return;
}

void f_006dc988(void) /* sub_6DC988 */
{
    FN_ENTER(0x006dc988);
    /* 006dc988: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dc989: mov esi, ecx */ r_esi = r_ecx;
    /* 006dc98b: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006dc98e: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6dc993u); f_00694780();
    /* 006dc993: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc999: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006dc99c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc99e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc9a0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc9a2: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006dc9a9: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6dc9aeu); f_007c1160();
    /* 006dc9ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc9b0: je 0x6dc9b9 */ if (fZ) goto L_006dc9b9;
L_006dc9b2:; BB(0x006dc9b2);
    /* 006dc9b2: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc9b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dc9b8: ret  */ FN_RET(0x006dc988); r_esp += 4; return;
L_006dc9b9:; BB(0x006dc9b9);
    /* 006dc9b9: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006dc9bc: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6dc9c1u); f_00694780();
    /* 006dc9c1: push dword ptr [0xa0f698] */ { u32 v = R32((u32)(0xa0f698u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dc9c7: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006dc9ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc9cc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc9ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dc9d0: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006dc9d7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6dc9dcu); f_007c1160();
    /* 006dc9dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc9de: je 0x6dc9e7 */ if (fZ) goto L_006dc9e7;
L_006dc9e0:; BB(0x006dc9e0);
    /* 006dc9e0: mov eax, 1 */ r_eax = 0x1u;
    /* 006dc9e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dc9e6: ret  */ FN_RET(0x006dc988); r_esp += 4; return;
L_006dc9e7:; BB(0x006dc9e7);
    /* 006dc9e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc9e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dc9ea: ret  */ FN_RET(0x006dc988); r_esp += 4; return;
}

void f_006dc9ec(void) /* sub_6DC9EC */
{
    FN_ENTER(0x006dc9ec);
    /* 006dc9ec: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 006dc9ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc9f1: je 0x6dc9f8 */ if (fZ) goto L_006dc9f8;
L_006dc9f3:; BB(0x006dc9f3);
    /* 006dc9f3: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006dc9f7: ret  */ FN_RET(0x006dc9ec); r_esp += 4; return;
L_006dc9f8:; BB(0x006dc9f8);
    /* 006dc9f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dc9fa: ret  */ FN_RET(0x006dc9ec); r_esp += 4; return;
}

void f_006dc9fc(void) /* sub_6DC9FC */
{
    FN_ENTER(0x006dc9fc);
    /* 006dc9fc: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 006dc9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dca01: je 0x6dca12 */ if (fZ) goto L_006dca12;
L_006dca03:; BB(0x006dca03);
    /* 006dca03: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006dca07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dca08: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6dca0du); f_006dc358();
    /* 006dca0d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006dca10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dca11: ret  */ FN_RET(0x006dc9fc); r_esp += 4; return;
L_006dca12:; BB(0x006dca12);
    /* 006dca12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dca14: ret  */ FN_RET(0x006dc9fc); r_esp += 4; return;
}

void f_006dca18(void) /* sub_6DCA18 */
{
    FN_ENTER(0x006dca18);
    /* 006dca18: mov dword ptr [0xa96364], 0x3f800000 */ W32((u32)(0xa96364u), 0x3f800000u);
    /* 006dca22: mov dword ptr [0xa96368], 0x41000000 */ W32((u32)(0xa96368u), 0x41000000u);
    /* 006dca2c: mov dword ptr [0xa9636c], 0x3fc00000 */ W32((u32)(0xa9636cu), 0x3fc00000u);
    /* 006dca36: ret  */ FN_RET(0x006dca18); r_esp += 4; return;
}

void f_006dca38(void) /* sub_6DCA38 */
{
    FN_ENTER(0x006dca38);
    /* 006dca38: mov eax, dword ptr [0xa96388] */ r_eax = R32((u32)(0xa96388u));
    /* 006dca3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dca3f: je 0x6dca52 */ if (fZ) goto L_006dca52;
L_006dca41:; BB(0x006dca41);
    /* 006dca41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dca42: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6dca47u); f_00857e98();
    /* 006dca47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dca48: mov dword ptr [0xa96388], 0 */ W32((u32)(0xa96388u), 0x0u);
L_006dca52:; BB(0x006dca52);
    /* 006dca52: ret  */ FN_RET(0x006dca38); r_esp += 4; return;
}

void f_006dca54(void) /* sub_6DCA54 */
{
    FN_ENTER(0x006dca54);
    /* 006dca54: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006dca58: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006dca5c: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 006dca5f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dca61: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dca63: add edx, dword ptr [0xa96388] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa96388u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dca69: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006dca6b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006dca6d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006dca70: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006dca73: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006dca76: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 006dca79: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006dca7c: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006dca7f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006dca82: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006dca85: ret  */ FN_RET(0x006dca54); r_esp += 4; return;
}

void f_006dca88(void) /* sub_6DCA88 */
{
    FN_ENTER(0x006dca88);
    /* 006dca88: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006dca8c: mov eax, dword ptr [0xa96388] */ r_eax = R32((u32)(0xa96388u));
    /* 006dca91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dca93: jl 0x6dcaae */ if ((fS!=fO)) goto L_006dcaae;
L_006dca95:; BB(0x006dca95);
    /* 006dca95: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dca98: jg 0x6dcaae */ if ((!fZ&&fS==fO)) goto L_006dcaae;
L_006dca9a:; BB(0x006dca9a);
    /* 006dca9a: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 006dca9d: mov edx, dword ptr [eax + ecx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x10u));
    /* 006dcaa1: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dcaa4: je 0x6dcaae */ if (fZ) goto L_006dcaae;
L_006dcaa6:; BB(0x006dcaa6);
    /* 006dcaa6: mov dword ptr [eax + ecx*4 + 0x10], 0xffffffff */ W32((u32)(r_eax+r_ecx*4+0x10u), 0xffffffffu);
L_006dcaae:; BB(0x006dcaae);
    /* 006dcaae: ret  */ FN_RET(0x006dca88); r_esp += 4; return;
}

void f_006dcab0(void) /* sub_6DCAB0 */
{
    FN_ENTER(0x006dcab0);
    /* 006dcab0: mov dword ptr [0xa96394], 0 */ W32((u32)(0xa96394u), 0x0u);
    /* 006dcaba: ret  */ FN_RET(0x006dcab0); r_esp += 4; return;
}

void f_006dcabc(void) /* sub_6DCABC */
{
    FN_ENTER(0x006dcabc);
    /* 006dcabc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dcabd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dcabe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dcabf: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006dcac3: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006dcac7: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dcaca: jg 0x6dcb86 */ if ((!fZ&&fS==fO)) goto L_006dcb86;
L_006dcad0:; BB(0x006dcad0);
    /* 006dcad0: mov ecx, dword ptr [0xa96388] */ r_ecx = R32((u32)(0xa96388u));
    /* 006dcad6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dcad8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcada: jle 0x6dcb7c */ if ((fZ||fS!=fO)) goto L_006dcb7c;
L_006dcae0:; BB(0x006dcae0);
    /* 006dcae0: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dcae3: jl 0x6dcb53 */ if ((fS!=fO)) goto L_006dcb53;
L_006dcae5:; BB(0x006dcae5);
    /* 006dcae5: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006dcae8: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
L_006dcaeb:; BB(0x006dcaeb);
    /* 006dcaeb: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 006dcaed: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 006dcaef: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 006dcaf2: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 006dcaf5: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 006dcaf8: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 006dcafb: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 006dcafe: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 006dcb01: mov ebp, dword ptr [esi + 0x10] */ r_ebp = R32((u32)(r_esi+0x10u));
    /* 006dcb04: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 006dcb07: mov ebp, dword ptr [esi + 0x14] */ r_ebp = R32((u32)(r_esi+0x14u));
    /* 006dcb0a: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 006dcb0d: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 006dcb10: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 006dcb13: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 006dcb16: mov dword ptr [ecx + 0x1c], ebp */ W32((u32)(r_ecx+0x1cu), r_ebp);
    /* 006dcb19: mov ebp, dword ptr [esi + 0x20] */ r_ebp = R32((u32)(r_esi+0x20u));
    /* 006dcb1c: mov dword ptr [ecx + 0x20], ebp */ W32((u32)(r_ecx+0x20u), r_ebp);
    /* 006dcb1f: mov ebp, dword ptr [esi + 0x24] */ r_ebp = R32((u32)(r_esi+0x24u));
    /* 006dcb22: mov dword ptr [ecx + 0x24], ebp */ W32((u32)(r_ecx+0x24u), r_ebp);
    /* 006dcb25: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 006dcb28: mov dword ptr [ecx + 0x28], ebp */ W32((u32)(r_ecx+0x28u), r_ebp);
    /* 006dcb2b: mov ebp, dword ptr [esi + 0x2c] */ r_ebp = R32((u32)(r_esi+0x2cu));
    /* 006dcb2e: mov dword ptr [ecx + 0x2c], ebp */ W32((u32)(r_ecx+0x2cu), r_ebp);
    /* 006dcb31: mov ebp, dword ptr [esi + 0x30] */ r_ebp = R32((u32)(r_esi+0x30u));
    /* 006dcb34: mov dword ptr [ecx + 0x30], ebp */ W32((u32)(r_ecx+0x30u), r_ebp);
    /* 006dcb37: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 006dcb3a: mov dword ptr [ecx + 0x34], ebp */ W32((u32)(r_ecx+0x34u), r_ebp);
    /* 006dcb3d: mov ebp, dword ptr [esi + 0x38] */ r_ebp = R32((u32)(r_esi+0x38u));
    /* 006dcb40: mov dword ptr [ecx + 0x38], ebp */ W32((u32)(r_ecx+0x38u), r_ebp);
    /* 006dcb43: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dcb46: add esi, 0x3c */ {  u32 a = r_esi; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dcb49: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dcb4c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dcb4e: jle 0x6dcaeb */ if ((fZ||fS!=fO)) goto L_006dcaeb;
L_006dcb50:; BB(0x006dcb50);
    /* 006dcb50: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006dcb53:; BB(0x006dcb53);
    /* 006dcb53: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006dcb55: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006dcb57: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006dcb5a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006dcb5d: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006dcb60: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006dcb63: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006dcb66: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006dcb69: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006dcb6c: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006dcb6f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dcb72: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dcb75: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dcb78: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dcb7a: jl 0x6dcb53 */ if ((fS!=fO)) goto L_006dcb53;
L_006dcb7c:; BB(0x006dcb7c);
    /* 006dcb7c: mov dword ptr [0xa96390], ebx */ W32((u32)(0xa96390u), r_ebx);
    /* 006dcb82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcb83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcb84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dcb85: ret  */ FN_RET(0x006dcabc); r_esp += 4; return;
L_006dcb86:; BB(0x006dcb86);
    /* 006dcb86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcb87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcb88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dcb89: ret  */ FN_RET(0x006dcabc); r_esp += 4; return;
}

void f_006dcb8c(void) /* sub_6DCB8C */
{
    FN_ENTER(0x006dcb8c);
    /* 006dcb8c: mov dword ptr [0xa96378], 0x3f800000 */ W32((u32)(0xa96378u), 0x3f800000u);
    /* 006dcb96: mov dword ptr [0xa9637c], 0x41000000 */ W32((u32)(0xa9637cu), 0x41000000u);
    /* 006dcba0: mov dword ptr [0xa96380], 0x3fc00000 */ W32((u32)(0xa96380u), 0x3fc00000u);
    /* 006dcbaa: ret  */ FN_RET(0x006dcb8c); r_esp += 4; return;
}

void f_006dcbac(void) /* sub_6DCBAC */
{
    FN_ENTER(0x006dcbac);
    /* 006dcbac: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 006dcbb1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6dcbb6u); f_008581c5();
    /* 006dcbb6: mov dword ptr [0xa96388], eax */ W32((u32)(0xa96388u), r_eax);
    /* 006dcbbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcbbd: mov dword ptr [0xa96384], eax */ W32((u32)(0xa96384u), r_eax);
    /* 006dcbc2: mov dword ptr [0xa96390], eax */ W32((u32)(0xa96390u), r_eax);
    /* 006dcbc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcbc8: ret  */ FN_RET(0x006dcbac); r_esp += 4; return;
}

void f_006dcbcc(void) /* sub_6DCBCC */
{
    FN_ENTER(0x006dcbcc);
    /* 006dcbcc: mov eax, dword ptr [0xa963b4] */ r_eax = R32((u32)(0xa963b4u));
    /* 006dcbd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcbd3: je 0x6dcbe6 */ if (fZ) goto L_006dcbe6;
L_006dcbd5:; BB(0x006dcbd5);
    /* 006dcbd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dcbd6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6dcbdbu); f_00857e98();
    /* 006dcbdb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcbdc: mov dword ptr [0xa963b4], 0 */ W32((u32)(0xa963b4u), 0x0u);
L_006dcbe6:; BB(0x006dcbe6);
    /* 006dcbe6: ret  */ FN_RET(0x006dcbcc); r_esp += 4; return;
}

void f_006dcbe8(void) /* sub_6DCBE8 */
{
    FN_ENTER(0x006dcbe8);
    /* 006dcbe8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006dcbec: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006dcbf0: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 006dcbf3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dcbf5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dcbf7: add edx, dword ptr [0xa963b4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa963b4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dcbfd: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006dcbff: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006dcc01: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006dcc04: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006dcc07: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006dcc0a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 006dcc0d: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006dcc10: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006dcc13: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006dcc16: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006dcc19: ret  */ FN_RET(0x006dcbe8); r_esp += 4; return;
}

void f_006dcc1c(void) /* sub_6DCC1C */
{
    FN_ENTER(0x006dcc1c);
    /* 006dcc1c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006dcc20: mov eax, dword ptr [0xa963b4] */ r_eax = R32((u32)(0xa963b4u));
    /* 006dcc25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcc27: jl 0x6dcc42 */ if ((fS!=fO)) goto L_006dcc42;
L_006dcc29:; BB(0x006dcc29);
    /* 006dcc29: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dcc2c: jg 0x6dcc42 */ if ((!fZ&&fS==fO)) goto L_006dcc42;
L_006dcc2e:; BB(0x006dcc2e);
    /* 006dcc2e: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 006dcc31: mov edx, dword ptr [eax + ecx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x10u));
    /* 006dcc35: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dcc38: je 0x6dcc42 */ if (fZ) goto L_006dcc42;
L_006dcc3a:; BB(0x006dcc3a);
    /* 006dcc3a: mov dword ptr [eax + ecx*4 + 0x10], 0xffffffff */ W32((u32)(r_eax+r_ecx*4+0x10u), 0xffffffffu);
L_006dcc42:; BB(0x006dcc42);
    /* 006dcc42: ret  */ FN_RET(0x006dcc1c); r_esp += 4; return;
}

void f_006dcc44(void) /* sub_6DCC44 */
{
    FN_ENTER(0x006dcc44);
    /* 006dcc44: mov dword ptr [0xa963b8], 0 */ W32((u32)(0xa963b8u), 0x0u);
    /* 006dcc4e: ret  */ FN_RET(0x006dcc44); r_esp += 4; return;
}

void f_006dcc50(void) /* sub_6DCC50 */
{
    FN_ENTER(0x006dcc50);
    /* 006dcc50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dcc51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dcc52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dcc53: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006dcc57: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006dcc5b: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dcc5e: jg 0x6dcd1a */ if ((!fZ&&fS==fO)) goto L_006dcd1a;
L_006dcc64:; BB(0x006dcc64);
    /* 006dcc64: mov ecx, dword ptr [0xa963b4] */ r_ecx = R32((u32)(0xa963b4u));
    /* 006dcc6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dcc6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcc6e: jle 0x6dcd10 */ if ((fZ||fS!=fO)) goto L_006dcd10;
L_006dcc74:; BB(0x006dcc74);
    /* 006dcc74: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dcc77: jl 0x6dcce7 */ if ((fS!=fO)) goto L_006dcce7;
L_006dcc79:; BB(0x006dcc79);
    /* 006dcc79: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006dcc7c: lea eax, [ebx - 4] */ r_eax = (u32)(r_ebx+0xfffffffcu);
L_006dcc7f:; BB(0x006dcc7f);
    /* 006dcc7f: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 006dcc81: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 006dcc83: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 006dcc86: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 006dcc89: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 006dcc8c: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 006dcc8f: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 006dcc92: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 006dcc95: mov ebp, dword ptr [esi + 0x10] */ r_ebp = R32((u32)(r_esi+0x10u));
    /* 006dcc98: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 006dcc9b: mov ebp, dword ptr [esi + 0x14] */ r_ebp = R32((u32)(r_esi+0x14u));
    /* 006dcc9e: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 006dcca1: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 006dcca4: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 006dcca7: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 006dccaa: mov dword ptr [ecx + 0x1c], ebp */ W32((u32)(r_ecx+0x1cu), r_ebp);
    /* 006dccad: mov ebp, dword ptr [esi + 0x20] */ r_ebp = R32((u32)(r_esi+0x20u));
    /* 006dccb0: mov dword ptr [ecx + 0x20], ebp */ W32((u32)(r_ecx+0x20u), r_ebp);
    /* 006dccb3: mov ebp, dword ptr [esi + 0x24] */ r_ebp = R32((u32)(r_esi+0x24u));
    /* 006dccb6: mov dword ptr [ecx + 0x24], ebp */ W32((u32)(r_ecx+0x24u), r_ebp);
    /* 006dccb9: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 006dccbc: mov dword ptr [ecx + 0x28], ebp */ W32((u32)(r_ecx+0x28u), r_ebp);
    /* 006dccbf: mov ebp, dword ptr [esi + 0x2c] */ r_ebp = R32((u32)(r_esi+0x2cu));
    /* 006dccc2: mov dword ptr [ecx + 0x2c], ebp */ W32((u32)(r_ecx+0x2cu), r_ebp);
    /* 006dccc5: mov ebp, dword ptr [esi + 0x30] */ r_ebp = R32((u32)(r_esi+0x30u));
    /* 006dccc8: mov dword ptr [ecx + 0x30], ebp */ W32((u32)(r_ecx+0x30u), r_ebp);
    /* 006dcccb: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 006dccce: mov dword ptr [ecx + 0x34], ebp */ W32((u32)(r_ecx+0x34u), r_ebp);
    /* 006dccd1: mov ebp, dword ptr [esi + 0x38] */ r_ebp = R32((u32)(r_esi+0x38u));
    /* 006dccd4: mov dword ptr [ecx + 0x38], ebp */ W32((u32)(r_ecx+0x38u), r_ebp);
    /* 006dccd7: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dccda: add esi, 0x3c */ {  u32 a = r_esi; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dccdd: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dcce0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dcce2: jle 0x6dcc7f */ if ((fZ||fS!=fO)) goto L_006dcc7f;
L_006dcce4:; BB(0x006dcce4);
    /* 006dcce4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006dcce7:; BB(0x006dcce7);
    /* 006dcce7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006dcce9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006dcceb: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006dccee: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006dccf1: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006dccf4: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006dccf7: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006dccfa: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006dccfd: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006dcd00: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006dcd03: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dcd06: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dcd09: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dcd0c: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dcd0e: jl 0x6dcce7 */ if ((fS!=fO)) goto L_006dcce7;
L_006dcd10:; BB(0x006dcd10);
    /* 006dcd10: mov dword ptr [0xa963ac], ebx */ W32((u32)(0xa963acu), r_ebx);
    /* 006dcd16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcd17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcd18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dcd19: ret  */ FN_RET(0x006dcc50); r_esp += 4; return;
L_006dcd1a:; BB(0x006dcd1a);
    /* 006dcd1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcd1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcd1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dcd1d: ret  */ FN_RET(0x006dcc50); r_esp += 4; return;
}

void f_006dcd20(void) /* sub_6DCD20 */
{
    FN_ENTER(0x006dcd20);
    /* 006dcd20: mov dword ptr [0xa9639c], 0x3f800000 */ W32((u32)(0xa9639cu), 0x3f800000u);
    /* 006dcd2a: mov dword ptr [0xa963a0], 0x41000000 */ W32((u32)(0xa963a0u), 0x41000000u);
    /* 006dcd34: mov dword ptr [0xa963a4], 0x3fc00000 */ W32((u32)(0xa963a4u), 0x3fc00000u);
    /* 006dcd3e: ret  */ FN_RET(0x006dcd20); r_esp += 4; return;
}

void f_006dcd40(void) /* sub_6DCD40 */
{
    FN_ENTER(0x006dcd40);
    /* 006dcd40: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006dcd45: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6dcd4au); f_008581c5();
    /* 006dcd4a: mov dword ptr [0xa963b4], eax */ W32((u32)(0xa963b4u), r_eax);
    /* 006dcd4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcd51: mov dword ptr [0xa963a8], eax */ W32((u32)(0xa963a8u), r_eax);
    /* 006dcd56: mov dword ptr [0xa963ac], eax */ W32((u32)(0xa963acu), r_eax);
    /* 006dcd5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcd5c: ret  */ FN_RET(0x006dcd40); r_esp += 4; return;
}

void f_006dcd60(void) /* sub_6DCD60 */
{
    FN_ENTER(0x006dcd60);
    /* 006dcd60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dcd61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dcd63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dcd65: call 0x6dcd84 */ r_esp -= 4; W32(r_esp, 0x6dcd6au); f_006dcd84();
    /* 006dcd6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006dcd6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcd70: jne 0x6dcd76 */ if (!fZ) goto L_006dcd76;
L_006dcd72:; BB(0x006dcd72);
    /* 006dcd72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcd73: ret 4 */ FN_RET(0x006dcd60); r_esp += 8; return;
L_006dcd76:; BB(0x006dcd76);
    /* 006dcd76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dcd77: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6dcd7cu); f_005c2f74();
    /* 006dcd7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcd7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcd7e: ret 4 */ FN_RET(0x006dcd60); r_esp += 8; return;
}

void f_006dcd84(void) /* sub_6DCD84 */
{
    FN_ENTER(0x006dcd84);
    /* 006dcd84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dcd85: mov ebp, esp */ r_ebp = r_esp;
    /* 006dcd87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dcd89: push 0x8ee490 */ { u32 v = 0x8ee490u; r_esp -= 4; W32(r_esp, v); }
    /* 006dcd8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dcd94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dcd95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dcd9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dcd9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dcda2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dcda5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dcda8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dcdab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dcdae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dcdb1: mov dword ptr [ecx], 0xb3cd30 */ W32((u32)(r_ecx), 0xb3cd30u);
    /* 006dcdb7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dcdbe: call 0x6ebcf0 */ r_esp -= 4; W32(r_esp, 0x6dcdc3u); f_006ebcf0();
    /* 006dcdc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dcdc6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dcdcd: mov esp, ebp */ r_esp = r_ebp;
    /* 006dcdcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dcdd0: ret  */ FN_RET(0x006dcd84); r_esp += 4; return;
}

void f_006dcdd4(void) /* sub_6DCDD4 */
{
    FN_ENTER(0x006dcdd4);
    /* 006dcdd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dcdd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dcdd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dcdd9: call 0x6dcdf8 */ r_esp -= 4; W32(r_esp, 0x6dcddeu); f_006dcdf8();
    /* 006dcdde: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006dcde2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dcde4: jne 0x6dcdea */ if (!fZ) goto L_006dcdea;
L_006dcde6:; BB(0x006dcde6);
    /* 006dcde6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcde7: ret 4 */ FN_RET(0x006dcdd4); r_esp += 8; return;
L_006dcdea:; BB(0x006dcdea);
    /* 006dcdea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dcdeb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6dcdf0u); f_005c2f74();
    /* 006dcdf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dcdf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dcdf2: ret 4 */ FN_RET(0x006dcdd4); r_esp += 8; return;
}

void f_006dcdf8(void) /* sub_6DCDF8 */
{
    FN_ENTER(0x006dcdf8);
    /* 006dcdf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dcdf9: mov ebp, esp */ r_ebp = r_esp;
    /* 006dcdfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dcdfd: push 0x8ee4ac */ { u32 v = 0x8ee4acu; r_esp -= 4; W32(r_esp, v); }
    /* 006dce02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dce08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dce09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dce10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dce13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dce16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dce19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dce1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dce1f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dce22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dce25: mov dword ptr [ecx], 0xb3cd48 */ W32((u32)(r_ecx), 0xb3cd48u);
    /* 006dce2b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dce32: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6dce37u); f_008171e8();
    /* 006dce37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dce3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dce41: mov esp, ebp */ r_esp = r_ebp;
    /* 006dce43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dce44: ret  */ FN_RET(0x006dcdf8); r_esp += 4; return;
}

void f_006dce48(void) /* sub_6DCE48 */
{
    FN_ENTER(0x006dce48);
    /* 006dce48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dce49: mov ebp, esp */ r_ebp = r_esp;
    /* 006dce4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dce4d: push 0x8ee4d4 */ { u32 v = 0x8ee4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006dce52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dce58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dce59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dce60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dce63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dce66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dce69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dce6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dce6f: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006dce74: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006dce7b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dce80u); f_005caba4();
    /* 006dce80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dce81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006dce84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dce86: je 0x6dceae */ if (fZ) goto L_006dceae;
L_006dce88:; BB(0x006dce88);
    /* 006dce88: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006dce8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dce96: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dce99: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dce9c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dce9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dcea2: call 0x6dcebc */ r_esp -= 4; W32(r_esp, 0x6dcea7u); f_006dcebc();
    /* 006dcea7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006dceae:; BB(0x006dceae);
    /* 006dceae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dceb1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dceb8: mov esp, ebp */ r_esp = r_ebp;
    /* 006dceba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dcebb: ret  */ FN_RET(0x006dce48); r_esp += 4; return;
}

void f_006dcebc(void) /* sub_6DCEBC */
{
    FN_ENTER(0x006dcebc);
    /* 006dcebc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dcebd: mov ebp, esp */ r_ebp = r_esp;
    /* 006dcebf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dcec1: push 0x8ee4f0 */ { u32 v = 0x8ee4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dcec6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dcecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dcecd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dced4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dced7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dceda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dcedd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dcee0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dcee3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dcee6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dcee9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dceec: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dceef: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6dcef4u); f_006ebd58();
    /* 006dcef4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dcefb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dcefe: mov dword ptr [eax], 0xb3cd30 */ W32((u32)(r_eax), 0xb3cd30u);
    /* 006dcf04: lea esi, [eax + 0xe4] */ r_esi = (u32)(r_eax+0xe4u);
    /* 006dcf0a: mov edi, 0xb */ r_edi = 0xbu;
    /* 006dcf0f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006dcf11:; BB(0x006dcf11);
    /* 006dcf11: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006dcf16: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 006dcf19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006dcf1b: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 006dcf1f: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006dcf22: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006dcf25: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006dcf28: jne 0x6dcf11 */ if (!fZ) goto L_006dcf11;
L_006dcf2a:; BB(0x006dcf2a);
    /* 006dcf2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dcf2c: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 006dcf32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dcf35: mov eax, dword ptr [0x9cf2a0] */ r_eax = R32((u32)(0x9cf2a0u));
    /* 006dcf3a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006dcf3d: mov dword ptr [ecx + 0x13c], edx */ W32((u32)(r_ecx+0x13cu), r_edx);
    /* 006dcf43: mov ebx, dword ptr [0x9cf680] */ r_ebx = R32((u32)(0x9cf680u));
    /* 006dcf49: mov dword ptr [ecx + 0x74], ebx */ W32((u32)(r_ecx+0x74u), r_ebx);
    /* 006dcf4c: mov esi, dword ptr [0x9cf684] */ r_esi = R32((u32)(0x9cf684u));
    /* 006dcf52: mov dword ptr [ecx + 0x78], esi */ W32((u32)(r_ecx+0x78u), r_esi);
    /* 006dcf55: mov edi, dword ptr [0x9cf688] */ r_edi = R32((u32)(0x9cf688u));
    /* 006dcf5b: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 006dcf5e: mov eax, dword ptr [0x9cf68c] */ r_eax = R32((u32)(0x9cf68cu));
    /* 006dcf63: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 006dcf69: mov eax, dword ptr [0x9cf690] */ r_eax = R32((u32)(0x9cf690u));
    /* 006dcf6e: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 006dcf74: mov eax, dword ptr [0x9cf694] */ r_eax = R32((u32)(0x9cf694u));
    /* 006dcf79: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 006dcf7f: mov eax, dword ptr [0x9cf698] */ r_eax = R32((u32)(0x9cf698u));
    /* 006dcf84: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 006dcf8a: mov eax, dword ptr [0x9cf69c] */ r_eax = R32((u32)(0x9cf69cu));
    /* 006dcf8f: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 006dcf95: mov eax, dword ptr [0x9cf6a0] */ r_eax = R32((u32)(0x9cf6a0u));
    /* 006dcf9a: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 006dcfa0: mov eax, dword ptr [0x9cf6a4] */ r_eax = R32((u32)(0x9cf6a4u));
    /* 006dcfa5: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 006dcfab: mov eax, dword ptr [0x9cf6a8] */ r_eax = R32((u32)(0x9cf6a8u));
    /* 006dcfb0: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 006dcfb6: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 006dcfbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dcfbe: je 0x6dcfd5 */ if (fZ) goto L_006dcfd5;
L_006dcfc0:; BB(0x006dcfc0);
    /* 006dcfc0: fld dword ptr [0x96c920] */ FPUSH(R_F32((u32)(0x96c920u)));
    /* 006dcfc6: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 006dcfc9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dcfcc: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006dcfd2: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006dcfd5:; BB(0x006dcfd5);
    /* 006dcfd5: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006dcfd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dcfda: je 0x6dcfe7 */ if (fZ) goto L_006dcfe7;
L_006dcfdc:; BB(0x006dcfdc);
    /* 006dcfdc: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006dcfe0: mov word ptr [ecx + 0xa8], ax */ W16((u32)(r_ecx+0xa8u), (u16)r_eax);
L_006dcfe7:; BB(0x006dcfe7);
    /* 006dcfe7: call 0x6dd010 */ r_esp -= 4; W32(r_esp, 0x6dcfecu); f_006dd010();
    /* 006dcfec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dcfef: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6dcff4u); f_006ec06c();
    /* 006dcff4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dcff7: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dcffa: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dcffd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd000: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd003: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd00a: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd00c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd00d: ret 0xc */ FN_RET(0x006dcebc); r_esp += 16; return;
}

