#include "protos.h"

void f_004b18a0(void)
{
    FN_ENTER(0x004b18a0);
    /* 004b18a0: xor al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004b18a2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b18a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b18a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b18a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b18a8: ret 0xc */ FN_RET(0x004b18a0); r_esp += 16; return;
}

void f_004b192c(void)
{
    FN_ENTER(0x004b192c);
    goto L_004b192c;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b192c); r_esp += 16; return;
L_004b190a:; BB(0x004b190a);
    /* 004b190a: lea esi, [ebp + 1] */ r_esi = (u32)(r_ebp+0x1u);
    /* 004b190d: mov dword ptr [ebx + 0x6bc], esi */ W32((u32)(r_ebx+0x6bcu), r_esi);
    /* 004b1913: mov ebp, dword ptr [eax + ebp*8 + 8] */ r_ebp = R32((u32)(r_eax+r_ebp*8+0x8u));
    /* 004b1917: lea esi, [ebp - 0x1e] */ r_esi = (u32)(r_ebp+0xffffffe2u);
    /* 004b191a: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b191d: ja 0x4b1a04 */ if ((!fC&&!fZ)) goto L_004b1a04;
L_004b1923:; BB(0x004b1923);
    /* 004b1923: mov esi, dword ptr [esi*4 + 0x904e40] */ r_esi = R32((u32)(r_esi*4+0x904e40u));
    /* 004b192a: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b192c:; BB(0x004b192c);
    /* 004b192c: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004b1931: jmp 0x4b190a */ goto L_004b190a;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1933(void)
{
    FN_ENTER(0x004b1933);
    goto L_004b1933;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1933); r_esp += 16; return;
L_004b1933:; BB(0x004b1933);
    /* 004b1933: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1935: jne 0x4b1941 */ if (!fZ) goto L_004b1941;
L_004b1937:; BB(0x004b1937);
    /* 004b1937: mov ebp, 0x15 */ r_ebp = 0x15u;
    /* 004b193c: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1941:; BB(0x004b1941);
    /* 004b1941: mov ebp, 0x16 */ r_ebp = 0x16u;
    /* 004b1946: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b194b(void)
{
    FN_ENTER(0x004b194b);
    goto L_004b194b;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b194b); r_esp += 16; return;
L_004b194b:; BB(0x004b194b);
    /* 004b194b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b194d: jne 0x4b1959 */ if (!fZ) goto L_004b1959;
L_004b194f:; BB(0x004b194f);
    /* 004b194f: mov ebp, 0x13 */ r_ebp = 0x13u;
    /* 004b1954: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1959:; BB(0x004b1959);
    /* 004b1959: mov ebp, 0x14 */ r_ebp = 0x14u;
    /* 004b195e: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1963(void)
{
    FN_ENTER(0x004b1963);
    goto L_004b1963;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1963); r_esp += 16; return;
L_004b1963:; BB(0x004b1963);
    /* 004b1963: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1965: jne 0x4b1971 */ if (!fZ) goto L_004b1971;
L_004b1967:; BB(0x004b1967);
    /* 004b1967: mov ebp, 0x11 */ r_ebp = 0x11u;
    /* 004b196c: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1971:; BB(0x004b1971);
    /* 004b1971: mov ebp, 0x12 */ r_ebp = 0x12u;
    /* 004b1976: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b197b(void)
{
    FN_ENTER(0x004b197b);
    goto L_004b197b;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b197b); r_esp += 16; return;
L_004b197b:; BB(0x004b197b);
    /* 004b197b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b197d: jne 0x4b1989 */ if (!fZ) goto L_004b1989;
L_004b197f:; BB(0x004b197f);
    /* 004b197f: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 004b1984: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1989:; BB(0x004b1989);
    /* 004b1989: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 004b198e: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1990(void)
{
    FN_ENTER(0x004b1990);
    goto L_004b1990;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1990); r_esp += 16; return;
L_004b1990:; BB(0x004b1990);
    /* 004b1990: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1992: jne 0x4b199b */ if (!fZ) goto L_004b199b;
L_004b1994:; BB(0x004b1994);
    /* 004b1994: mov ebp, 4 */ r_ebp = 0x4u;
    /* 004b1999: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b199b:; BB(0x004b199b);
    /* 004b199b: mov ebp, 0xa */ r_ebp = 0xau;
    /* 004b19a0: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b19a2(void)
{
    FN_ENTER(0x004b19a2);
    goto L_004b19a2;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b19a2); r_esp += 16; return;
L_004b19a2:; BB(0x004b19a2);
    /* 004b19a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b19a4: jne 0x4b19ad */ if (!fZ) goto L_004b19ad;
L_004b19a6:; BB(0x004b19a6);
    /* 004b19a6: mov ebp, 3 */ r_ebp = 0x3u;
    /* 004b19ab: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b19ad:; BB(0x004b19ad);
    /* 004b19ad: mov ebp, 0xb */ r_ebp = 0xbu;
    /* 004b19b2: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b19b4(void)
{
    FN_ENTER(0x004b19b4);
    goto L_004b19b4;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b19b4); r_esp += 16; return;
L_004b19b4:; BB(0x004b19b4);
    /* 004b19b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b19b6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b19bbu); f_00520bf4();
    /* 004b19bb: fcomp dword ptr [0x906fc8] */ fx_compare(ST(0), R_F32((u32)(0x906fc8u))); FPOP();
    /* 004b19c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b19c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b19c4: jbe 0x4b19cd */ if ((fC||fZ)) goto L_004b19cd;
L_004b19c6:; BB(0x004b19c6);
    /* 004b19c6: mov ebp, 0xc */ r_ebp = 0xcu;
    /* 004b19cb: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b19cd:; BB(0x004b19cd);
    /* 004b19cd: mov ebp, 0xe */ r_ebp = 0xeu;
    /* 004b19d2: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b19d4(void)
{
    FN_ENTER(0x004b19d4);
    goto L_004b19d4;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b19d4); r_esp += 16; return;
L_004b19d4:; BB(0x004b19d4);
    /* 004b19d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b19d6: jne 0x4b19df */ if (!fZ) goto L_004b19df;
L_004b19d8:; BB(0x004b19d8);
    /* 004b19d8: mov ebp, 5 */ r_ebp = 0x5u;
    /* 004b19dd: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b19df:; BB(0x004b19df);
    /* 004b19df: mov ebp, 9 */ r_ebp = 0x9u;
    /* 004b19e4: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b19e6(void)
{
    FN_ENTER(0x004b19e6);
    goto L_004b19e6;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b19e6); r_esp += 16; return;
L_004b19e6:; BB(0x004b19e6);
    /* 004b19e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b19e8: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b19edu); f_00520bf4();
    /* 004b19ed: fcomp dword ptr [0x906fc8] */ fx_compare(ST(0), R_F32((u32)(0x906fc8u))); FPOP();
    /* 004b19f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b19f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b19f6: jbe 0x4b19ff */ if ((fC||fZ)) goto L_004b19ff;
L_004b19f8:; BB(0x004b19f8);
    /* 004b19f8: mov ebp, 8 */ r_ebp = 0x8u;
    /* 004b19fd: jmp 0x4b1a04 */ goto L_004b1a04;
L_004b19ff:; BB(0x004b19ff);
    /* 004b19ff: mov ebp, 6 */ r_ebp = 0x6u;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1a04(void)
{
    FN_ENTER(0x004b1a04);
    goto L_004b1a04;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1a04); r_esp += 16; return;
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1a45(void)
{
    FN_ENTER(0x004b1a45);
    goto L_004b1a45;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1a45); r_esp += 16; return;
L_004b1a23:; BB(0x004b1a23);
    /* 004b1a23: lea ebp, [edx + 1] */ r_ebp = (u32)(r_edx+0x1u);
    /* 004b1a26: mov dword ptr [ebx + 0x6bc], ebp */ W32((u32)(r_ebx+0x6bcu), r_ebp);
    /* 004b1a2c: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b1a30: lea ebp, [edx - 0x1e] */ r_ebp = (u32)(r_edx+0xffffffe2u);
    /* 004b1a33: cmp ebp, 0x27 */ {  u32 a = r_ebp; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b1a36: ja 0x4b1b4a */ if ((!fC&&!fZ)) goto L_004b1b4a;
L_004b1a3c:; BB(0x004b1a3c);
    /* 004b1a3c: mov ebp, dword ptr [ebp*4 + 0x904ee0] */ r_ebp = R32((u32)(r_ebp*4+0x904ee0u));
    /* 004b1a43: jmp ebp */ { u32 t = r_ebp; jmp_ind(t); return; }
L_004b1a45:; BB(0x004b1a45);
    /* 004b1a45: mov edx, 1 */ r_edx = 0x1u;
    /* 004b1a4a: jmp 0x4b1a23 */ goto L_004b1a23;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1a4c(void)
{
    FN_ENTER(0x004b1a4c);
    goto L_004b1a4c;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1a4c); r_esp += 16; return;
L_004b1a4c:; BB(0x004b1a4c);
    /* 004b1a4c: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1a52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1a54: jne 0x4b1a60 */ if (!fZ) goto L_004b1a60;
L_004b1a56:; BB(0x004b1a56);
    /* 004b1a56: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004b1a5b: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1a60:; BB(0x004b1a60);
    /* 004b1a60: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004b1a65: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1a6a(void)
{
    FN_ENTER(0x004b1a6a);
    goto L_004b1a6a;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1a6a); r_esp += 16; return;
L_004b1a6a:; BB(0x004b1a6a);
    /* 004b1a6a: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1a70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1a72: jne 0x4b1a7e */ if (!fZ) goto L_004b1a7e;
L_004b1a74:; BB(0x004b1a74);
    /* 004b1a74: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004b1a79: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1a7e:; BB(0x004b1a7e);
    /* 004b1a7e: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004b1a83: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1a88(void)
{
    FN_ENTER(0x004b1a88);
    goto L_004b1a88;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1a88); r_esp += 16; return;
L_004b1a88:; BB(0x004b1a88);
    /* 004b1a88: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1a8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1a90: jne 0x4b1a9c */ if (!fZ) goto L_004b1a9c;
L_004b1a92:; BB(0x004b1a92);
    /* 004b1a92: mov edx, 0x11 */ r_edx = 0x11u;
    /* 004b1a97: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1a9c:; BB(0x004b1a9c);
    /* 004b1a9c: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004b1aa1: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1aa6(void)
{
    FN_ENTER(0x004b1aa6);
    goto L_004b1aa6;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1aa6); r_esp += 16; return;
L_004b1aa6:; BB(0x004b1aa6);
    /* 004b1aa6: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1aac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1aae: jne 0x4b1aba */ if (!fZ) goto L_004b1aba;
L_004b1ab0:; BB(0x004b1ab0);
    /* 004b1ab0: mov edx, 0xf */ r_edx = 0xfu;
    /* 004b1ab5: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1aba:; BB(0x004b1aba);
    /* 004b1aba: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004b1abf: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1ac4(void)
{
    FN_ENTER(0x004b1ac4);
    goto L_004b1ac4;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1ac4); r_esp += 16; return;
L_004b1ac4:; BB(0x004b1ac4);
    /* 004b1ac4: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1aca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1acc: jne 0x4b1ad5 */ if (!fZ) goto L_004b1ad5;
L_004b1ace:; BB(0x004b1ace);
    /* 004b1ace: mov edx, 4 */ r_edx = 0x4u;
    /* 004b1ad3: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1ad5:; BB(0x004b1ad5);
    /* 004b1ad5: mov edx, 0xa */ r_edx = 0xau;
    /* 004b1ada: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1adc(void)
{
    FN_ENTER(0x004b1adc);
    goto L_004b1adc;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1adc); r_esp += 16; return;
L_004b1adc:; BB(0x004b1adc);
    /* 004b1adc: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1ae2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1ae4: jne 0x4b1aed */ if (!fZ) goto L_004b1aed;
L_004b1ae6:; BB(0x004b1ae6);
    /* 004b1ae6: mov edx, 3 */ r_edx = 0x3u;
    /* 004b1aeb: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1aed:; BB(0x004b1aed);
    /* 004b1aed: mov edx, 0xb */ r_edx = 0xbu;
    /* 004b1af2: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1af4(void)
{
    FN_ENTER(0x004b1af4);
    goto L_004b1af4;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1af4); r_esp += 16; return;
L_004b1af4:; BB(0x004b1af4);
    /* 004b1af4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1af6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b1afbu); f_00520bf4();
    /* 004b1afb: fcomp dword ptr [0x906fc8] */ fx_compare(ST(0), R_F32((u32)(0x906fc8u))); FPOP();
    /* 004b1b01: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1b03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1b04: jbe 0x4b1b0d */ if ((fC||fZ)) goto L_004b1b0d;
L_004b1b06:; BB(0x004b1b06);
    /* 004b1b06: mov edx, 0xc */ r_edx = 0xcu;
    /* 004b1b0b: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b0d:; BB(0x004b1b0d);
    /* 004b1b0d: mov edx, 0xe */ r_edx = 0xeu;
    /* 004b1b12: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1b14(void)
{
    FN_ENTER(0x004b1b14);
    goto L_004b1b14;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1b14); r_esp += 16; return;
L_004b1b14:; BB(0x004b1b14);
    /* 004b1b14: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1b1c: jne 0x4b1b25 */ if (!fZ) goto L_004b1b25;
L_004b1b1e:; BB(0x004b1b1e);
    /* 004b1b1e: mov edx, 5 */ r_edx = 0x5u;
    /* 004b1b23: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b25:; BB(0x004b1b25);
    /* 004b1b25: mov edx, 9 */ r_edx = 0x9u;
    /* 004b1b2a: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1b2c(void)
{
    FN_ENTER(0x004b1b2c);
    goto L_004b1b2c;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1b2c); r_esp += 16; return;
L_004b1b2c:; BB(0x004b1b2c);
    /* 004b1b2c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b2e: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b1b33u); f_00520bf4();
    /* 004b1b33: fcomp dword ptr [0x906fc8] */ fx_compare(ST(0), R_F32((u32)(0x906fc8u))); FPOP();
    /* 004b1b39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1b3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1b3c: jbe 0x4b1b45 */ if ((fC||fZ)) goto L_004b1b45;
L_004b1b3e:; BB(0x004b1b3e);
    /* 004b1b3e: mov edx, 8 */ r_edx = 0x8u;
    /* 004b1b43: jmp 0x4b1b4a */ goto L_004b1b4a;
L_004b1b45:; BB(0x004b1b45);
    /* 004b1b45: mov edx, 6 */ r_edx = 0x6u;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1b4a(void)
{
    FN_ENTER(0x004b1b4a);
    goto L_004b1b4a;
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b1b4a); r_esp += 16; return;
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
}

void f_004b1c94(void) /* sub_4B1C94 */
{
    FN_ENTER(0x004b1c94);
    /* 004b1c94: fld dword ptr [0x906f60] */ FPUSH(R_F32((u32)(0x906f60u)));
    /* 004b1c9a: fld dword ptr [ecx + 0x6f8] */ FPUSH(R_F32((u32)(r_ecx+0x6f8u)));
    /* 004b1ca0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b1ca2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1ca4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1ca5: jbe 0x4b1cb8 */ if ((fC||fZ)) goto L_004b1cb8;
L_004b1ca7:; BB(0x004b1ca7);
    /* 004b1ca7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b1ca9: fld dword ptr [0x906f5c] */ FPUSH(R_F32((u32)(0x906f5cu)));
    /* 004b1caf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b1cb1: fstp dword ptr [ecx + 0x6f8] */ W_F32((u32)(r_ecx+0x6f8u), ST(0)); FPOP();
    /* 004b1cb7: ret  */ FN_RET(0x004b1c94); r_esp += 4; return;
L_004b1cb8:; BB(0x004b1cb8);
    /* 004b1cb8: fcom dword ptr [0x906f5c] */ fx_compare(ST(0), R_F32((u32)(0x906f5cu))); 
    /* 004b1cbe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1cc0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1cc1: jae 0x4b1ccc */ if (!fC) goto L_004b1ccc;
L_004b1cc3:; BB(0x004b1cc3);
    /* 004b1cc3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b1cc5: fstp dword ptr [ecx + 0x6f8] */ W_F32((u32)(r_ecx+0x6f8u), ST(0)); FPOP();
    /* 004b1ccb: ret  */ FN_RET(0x004b1c94); r_esp += 4; return;
L_004b1ccc:; BB(0x004b1ccc);
    /* 004b1ccc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b1cce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b1cd0: mov dword ptr [ecx + 0x6f8], 0 */ W32((u32)(r_ecx+0x6f8u), 0x0u);
    /* 004b1cda: ret  */ FN_RET(0x004b1c94); r_esp += 4; return;
}

void f_004b1cdc(void) /* sub_4B1CDC */
{
    FN_ENTER(0x004b1cdc);
    /* 004b1cdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1cdd: mov ebx, esp */ r_ebx = r_esp;
    /* 004b1cdf: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004b1ce2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b1ce3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b1ce6: mov edi, ecx */ r_edi = r_ecx;
    /* 004b1ce8: mov eax, dword ptr [edi + 0x7b8] */ r_eax = R32((u32)(r_edi+0x7b8u));
    /* 004b1cee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1cf0: je 0x4b1dd9 */ if (fZ) goto L_004b1dd9;
L_004b1cf6:; BB(0x004b1cf6);
    /* 004b1cf6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b1cf9: mov eax, dword ptr [edi + 0x7bc] */ r_eax = R32((u32)(r_edi+0x7bcu));
    /* 004b1cff: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b1d02: mov eax, dword ptr [edi + 0x7c0] */ r_eax = R32((u32)(r_edi+0x7c0u));
    /* 004b1d08: lea edx, [edi + 0x7c8] */ r_edx = (u32)(r_edi+0x7c8u);
    /* 004b1d0e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004b1d12: mov eax, dword ptr [edi + 0x7c4] */ r_eax = R32((u32)(r_edi+0x7c4u));
    /* 004b1d18: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004b1d1c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4b1d21u); f_0082f9c4();
    /* 004b1d21: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004b1d24: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004b1d26: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004b1d2a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004b1d2c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b1d2e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b1d2f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b1d32: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4b1d37u); f_0082dc9c();
    /* 004b1d37: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004b1d3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b1d3d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004b1d3f: fmul qword ptr [0x906ba8] */ ST(0) = ST(0) * R_F64((u32)(0x906ba8u));
    /* 004b1d45: fdiv qword ptr [0x906ba0] */ ST(0) = ST(0) / R_F64((u32)(0x906ba0u));
    /* 004b1d4b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004b1d4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b1d51: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004b1d55: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004b1d5a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b1d5f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004b1d63: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004b1d67: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b1d6b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004b1d6f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004b1d72: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004b1d76: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b1d78: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b1d7d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004b1d81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b1d83: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004b1d85: mov ecx, dword ptr [edi + 0x7b8] */ r_ecx = R32((u32)(r_edi+0x7b8u));
    /* 004b1d8b: fmul qword ptr [0x906ba8] */ ST(0) = ST(0) * R_F64((u32)(0x906ba8u));
    /* 004b1d91: fdiv qword ptr [0x906ba0] */ ST(0) = ST(0) / R_F64((u32)(0x906ba0u));
    /* 004b1d97: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004b1d9b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004b1da0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b1da5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004b1da9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004b1dad: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b1db1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004b1db5: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004b1dbd: lea eax, [edi + 0x7bc] */ r_eax = (u32)(r_edi+0x7bcu);
    /* 004b1dc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b1dc4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4b1dc9u); f_00508db8();
    /* 004b1dc9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004b1dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b1dce: mov ecx, dword ptr [edi + 0x7b8] */ r_ecx = R32((u32)(r_edi+0x7b8u));
    /* 004b1dd4: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4b1dd9u); f_00508dd0();
L_004b1dd9:; BB(0x004b1dd9);
    /* 004b1dd9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1ddc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b1ddd: mov esp, ebx */ r_esp = r_ebx;
    /* 004b1ddf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1de0: ret  */ FN_RET(0x004b1cdc); r_esp += 4; return;
}

void f_004b1de4(void) /* sub_4B1DE4 */
{
    FN_ENTER(0x004b1de4);
    /* 004b1de4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b1de5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b1de8: mov edi, ecx */ r_edi = r_ecx;
    /* 004b1dea: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004b1def: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004b1df6: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004b1dfe: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004b1e06: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4b1e0bu); f_0082d990();
    /* 004b1e0b: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e10: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e15: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b1e1c: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4b1e21u); f_0082fa0c();
    /* 004b1e21: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b1e27: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 004b1e2d: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x4b1e32u); f_008304c8();
    /* 004b1e32: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 004b1e35: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x4b1e3au); f_008305ec();
    /* 004b1e3a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004b1e3d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b1e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e42: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x4b1e47u); f_00835c3c();
    /* 004b1e47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b1e4a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4b1e4fu); f_0082da80();
    /* 004b1e4f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004b1e53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1e56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b1e57: ret  */ FN_RET(0x004b1de4); r_esp += 4; return;
}

void f_004b1e58(void) /* sub_4B1E58 */
{
    FN_ENTER(0x004b1e58);
    /* 004b1e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e59: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004b1e5d: mov dword ptr [ecx + 0x6f8], 0 */ W32((u32)(r_ecx+0x6f8u), 0x0u);
    /* 004b1e67: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004b1e6a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1e6c: mov edi, dword ptr [eax + edx*8 + 0xa47780] */ r_edi = R32((u32)(r_eax+r_edx*8+0xa47780u));
    /* 004b1e73: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 004b1e76: mov edi, dword ptr [eax + edx*8 + 0xa47784] */ r_edi = R32((u32)(r_eax+r_edx*8+0xa47784u));
    /* 004b1e7d: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 004b1e80: mov eax, dword ptr [eax + edx*8 + 0xa47788] */ r_eax = R32((u32)(r_eax+r_edx*8+0xa47788u));
    /* 004b1e87: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 004b1e8e: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 004b1e91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b1e92: ret 4 */ FN_RET(0x004b1e58); r_esp += 8; return;
}

void f_004b1e98(void) /* sub_4B1E98 */
{
    FN_ENTER(0x004b1e98);
    /* 004b1e98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1e9a: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b1e9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b1e9f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004b1ea3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1ea6: je 0x4b23ad */ if (fZ) goto L_004b23ad;
L_004b1eac:; BB(0x004b1eac);
    /* 004b1eac: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1eaf: je 0x4b2358 */ if (fZ) goto L_004b2358;
L_004b1eb5:; BB(0x004b1eb5);
    /* 004b1eb5: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1eb8: je 0x4b2034 */ if (fZ) goto L_004b2034;
L_004b1ebe:; BB(0x004b1ebe);
    /* 004b1ebe: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1ec1: je 0x4b2007 */ if (fZ) goto L_004b2007;
L_004b1ec7:; BB(0x004b1ec7);
    /* 004b1ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1ec9: je 0x4b1ef1 */ if (fZ) goto L_004b1ef1;
L_004b1ecb:; BB(0x004b1ecb);
    /* 004b1ecb: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1ece: je 0x4b2007 */ if (fZ) goto L_004b2007;
L_004b1ed4:; BB(0x004b1ed4);
    /* 004b1ed4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1ed7: jne 0x4b2007 */ if (!fZ) goto L_004b2007;
L_004b1edd:; BB(0x004b1edd);
    /* 004b1edd: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b1ee3: mov dword ptr [ebx + 0x6c8], eax */ W32((u32)(r_ebx+0x6c8u), r_eax);
    /* 004b1ee9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1eec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1eed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1eee: ret 0xc */ FN_RET(0x004b1e98); r_esp += 16; return;
L_004b1ef1:; BB(0x004b1ef1);
    /* 004b1ef1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1ef3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b1ef8u); f_007aa094();
    /* 004b1ef8: mov eax, dword ptr [ebx + 0x734] */ r_eax = R32((u32)(r_ebx+0x734u));
    /* 004b1efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1f00: je 0x4b2029 */ if (fZ) goto L_004b2029;
L_004b1f06:; BB(0x004b1f06);
    /* 004b1f06: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1f09: je 0x4b200f */ if (fZ) goto L_004b200f;
L_004b1f0f:; BB(0x004b1f0f);
    /* 004b1f0f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1f12: je 0x4b1fa0 */ if (fZ) goto L_004b1fa0;
L_004b1f18:; BB(0x004b1f18);
    /* 004b1f18: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1f1b: jne 0x4b1f3a */ if (!fZ) goto L_004b1f3a;
L_004b1f1d:; BB(0x004b1f1d);
    /* 004b1f1d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1f1f: call 0x4b2954 */ r_esp -= 4; W32(r_esp, 0x4b1f24u); f_004b2954();
    /* 004b1f24: mov esi, eax */ r_esi = r_eax;
    /* 004b1f26: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b1f2c: fsub dword ptr [ebx + 0x690] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x690u));
    /* 004b1f32: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b1f35: jmp 0x4b1fb8 */ goto L_004b1fb8;
L_004b1f3a:; BB(0x004b1f3a);
    /* 004b1f3a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1f3d: jne 0x4b1fc6 */ if (!fZ) goto L_004b1fc6;
L_004b1f43:; BB(0x004b1f43);
    /* 004b1f43: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004b1f45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1f47: call 0x4b2904 */ r_esp -= 4; W32(r_esp, 0x4b1f4cu); f_004b2904();
    /* 004b1f4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1f4e: je 0x4b1f74 */ if (fZ) goto L_004b1f74;
L_004b1f50:; BB(0x004b1f50);
    /* 004b1f50: fld dword ptr [0x906f0c] */ FPUSH(R_F32((u32)(0x906f0cu)));
    /* 004b1f56: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 004b1f5c: fcom dword ptr [0x906f08] */ fx_compare(ST(0), R_F32((u32)(0x906f08u))); 
    /* 004b1f62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1f64: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 004b1f6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1f6b: jbe 0x4b1f8f */ if ((fC||fZ)) goto L_004b1f8f;
L_004b1f6d:; BB(0x004b1f6d);
    /* 004b1f6d: mov esi, 1 */ r_esi = 0x1u;
    /* 004b1f72: jmp 0x4b1f8f */ goto L_004b1f8f;
L_004b1f74:; BB(0x004b1f74);
    /* 004b1f74: fld dword ptr [ebx + 0x760] */ FPUSH(R_F32((u32)(r_ebx+0x760u)));
    /* 004b1f7a: fcomp dword ptr [0x906f48] */ fx_compare(ST(0), R_F32((u32)(0x906f48u))); FPOP();
    /* 004b1f80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1f82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1f83: jae 0x4b1f8f */ if (!fC) goto L_004b1f8f;
L_004b1f85:; BB(0x004b1f85);
    /* 004b1f85: mov dword ptr [ebx + 0xc8], 0x3e99999a */ W32((u32)(r_ebx+0xc8u), 0x3e99999au);
L_004b1f8f:; BB(0x004b1f8f);
    /* 004b1f8f: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b1f95: fsub dword ptr [ebx + 0x690] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x690u));
    /* 004b1f9b: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b1f9e: jmp 0x4b1fb8 */ goto L_004b1fb8;
L_004b1fa0:; BB(0x004b1fa0);
    /* 004b1fa0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1fa2: call 0x4b2a24 */ r_esp -= 4; W32(r_esp, 0x4b1fa7u); f_004b2a24();
    /* 004b1fa7: mov esi, eax */ r_esi = r_eax;
    /* 004b1fa9: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b1faf: fsub dword ptr [ebx + 0x690] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x690u));
    /* 004b1fb5: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_004b1fb8:; BB(0x004b1fb8);
    /* 004b1fb8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1fba: je 0x4b1fc6 */ if (fZ) goto L_004b1fc6;
L_004b1fbc:; BB(0x004b1fbc);
    /* 004b1fbc: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
L_004b1fc6:; BB(0x004b1fc6);
    /* 004b1fc6: fld dword ptr [ebx + 0x650] */ FPUSH(R_F32((u32)(r_ebx+0x650u)));
    /* 004b1fcc: fmul dword ptr [ebx + 0x754] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x754u));
    /* 004b1fd2: fadd dword ptr [ebx + 0x74c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x74cu));
    /* 004b1fd8: fld dword ptr [ebx + 0x670] */ FPUSH(R_F32((u32)(r_ebx+0x670u)));
    /* 004b1fde: fmul dword ptr [ebx + 0x760] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x760u));
    /* 004b1fe4: fadd dword ptr [ebx + 0x75c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x75cu));
    /* 004b1fea: fld dword ptr [ebx + 0x690] */ FPUSH(R_F32((u32)(r_ebx+0x690u)));
    /* 004b1ff0: fmul dword ptr [ebx + 0x758] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x758u));
    /* 004b1ff6: fadd dword ptr [ebx + 0x750] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x750u));
    /* 004b1ffc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b1ffe: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004b2001: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004b2004: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b1e98); r_esp += 16; return;
L_004b200f:; BB(0x004b200f);
    /* 004b200f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2011: call 0x4b2b14 */ r_esp -= 4; W32(r_esp, 0x4b2016u); f_004b2b14();
    /* 004b2016: mov esi, eax */ r_esi = r_eax;
    /* 004b2018: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b201e: fadd dword ptr [ebx + 0x690] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x690u));
    /* 004b2024: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b2027: jmp 0x4b1fb8 */ goto L_004b1fb8;
L_004b2029:; BB(0x004b2029);
    /* 004b2029: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b202b: call 0x4b2bd4 */ r_esp -= 4; W32(r_esp, 0x4b2030u); f_004b2bd4();
    /* 004b2030: mov esi, eax */ r_esi = r_eax;
    /* 004b2032: jmp 0x4b1fb8 */ goto L_004b1fb8;
L_004b2034:; BB(0x004b2034);
    /* 004b2034: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b203a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b203d: jne 0x4b2007 */ if (!fZ) goto L_004b2007;
L_004b203f:; BB(0x004b203f);
    /* 004b203f: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b2045: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b204a: je 0x4b2212 */ if (fZ) goto L_004b2212;
L_004b2050:; BB(0x004b2050);
    /* 004b2050: mov esi, dword ptr [ebx + 0x6cc] */ r_esi = R32((u32)(r_ebx+0x6ccu));
    /* 004b2056: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b205b: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b2061: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2063: jne 0x4b20ac */ if (!fZ) goto L_004b20ac;
L_004b2065:; BB(0x004b2065);
    /* 004b2065: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2067: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b2069: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b206b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b206d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b2073u); call_ind(t); }
    /* 004b2073: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b2077: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b207d: mov byte ptr [esp + 0x20], 0xa9 */ W8((u32)(r_esp+0x20u), 0xa9u);
    /* 004b2082: mov edx, 0xf */ r_edx = 0xfu;
    /* 004b2087: mov byte ptr [esp + 0x21], 2 */ W8((u32)(r_esp+0x21u), 0x2u);
    /* 004b208c: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 004b2091: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 004b2096: mov word ptr [esp + 0x26], bx */ W16((u32)(r_esp+0x26u), (u16)r_ebx);
    /* 004b209b: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004b209f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b20a4u); f_008003e0();
    /* 004b20a4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b20a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b20a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b20a9: ret 0xc */ FN_RET(0x004b1e98); r_esp += 16; return;
L_004b20ac:; BB(0x004b20ac);
    /* 004b20ac: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b20af: jne 0x4b20f8 */ if (!fZ) goto L_004b20f8;
L_004b20b1:; BB(0x004b20b1);
    /* 004b20b1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b20b3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004b20b5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b20b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b20b9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b20bfu); call_ind(t); }
    /* 004b20bf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b20c3: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b20c9: mov byte ptr [esp + 0x18], 0xa9 */ W8((u32)(r_esp+0x18u), 0xa9u);
    /* 004b20ce: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004b20d3: mov byte ptr [esp + 0x19], 2 */ W8((u32)(r_esp+0x19u), 0x2u);
    /* 004b20d8: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004b20dd: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004b20e2: mov word ptr [esp + 0x1e], bx */ W16((u32)(r_esp+0x1eu), (u16)r_ebx);
    /* 004b20e7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004b20eb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b20f0u); f_008003e0();
    /* 004b20f0: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b20f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b20f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b20f5: ret 0xc */ FN_RET(0x004b1e98); r_esp += 16; return;
L_004b20f8:; BB(0x004b20f8);
    /* 004b20f8: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b20fe: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b2105: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b210b: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b210e: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b2114: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b2118: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b211b: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b211e: ja 0x4b2205 */ if ((!fC&&!fZ)) goto L_004b2205;
L_004b2124:; BB(0x004b2124);
    /* 004b2124: mov ecx, dword ptr [ecx*4 + 0x904f80] */ r_ecx = R32((u32)(r_ecx*4+0x904f80u));
    /* 004b212b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
L_004b2212:; BB(0x004b2212);
    /* 004b2212: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004b2217: mov eax, dword ptr [eax*4 + 0x9abc68] */ r_eax = R32((u32)(r_eax*4+0x9abc68u));
    /* 004b221e: mov edx, dword ptr [ebx + 0x6bc] */ r_edx = R32((u32)(r_ebx+0x6bcu));
    /* 004b2224: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 004b2227: mov dword ptr [ebx + 0x6bc], esi */ W32((u32)(r_ebx+0x6bcu), r_esi);
    /* 004b222d: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b2231: lea esi, [edx - 0x1e] */ r_esi = (u32)(r_edx+0xffffffe2u);
    /* 004b2234: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b2237: ja 0x4b234b */ if ((!fC&&!fZ)) goto L_004b234b;
L_004b223d:; BB(0x004b223d);
    /* 004b223d: mov esi, dword ptr [esi*4 + 0x905020] */ r_esi = R32((u32)(r_esi*4+0x905020u));
    /* 004b2244: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
L_004b2358:; BB(0x004b2358);
    /* 004b2358: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b235e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2361: jne 0x4b2007 */ if (!fZ) goto L_004b2007;
L_004b2367:; BB(0x004b2367);
    /* 004b2367: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2369: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b236b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b236d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b236f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b2375u); call_ind(t); }
    /* 004b2375: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b2379: mov edx, dword ptr [ebx + 0x6bc] */ r_edx = R32((u32)(r_ebx+0x6bcu));
    /* 004b237f: mov byte ptr [esp + 0x28], 0xa9 */ W8((u32)(r_esp+0x28u), 0xa9u);
    /* 004b2384: mov eax, 2 */ r_eax = 0x2u;
    /* 004b2389: mov byte ptr [esp + 0x29], al */ W8((u32)(r_esp+0x29u), (u8)r_eax);
    /* 004b238d: mov word ptr [esp + 0x2a], si */ W16((u32)(r_esp+0x2au), (u16)r_esi);
    /* 004b2392: mov word ptr [esp + 0x2c], ax */ W16((u32)(r_esp+0x2cu), (u16)r_eax);
    /* 004b2397: mov word ptr [esp + 0x2e], dx */ W16((u32)(r_esp+0x2eu), (u16)r_edx);
    /* 004b239c: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004b23a0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b23a5u); f_008003e0();
    /* 004b23a5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b23a8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b23a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b23aa: ret 0xc */ FN_RET(0x004b1e98); r_esp += 16; return;
L_004b23ad:; BB(0x004b23ad);
    /* 004b23ad: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b23af: mov eax, 1 */ r_eax = 0x1u;
    /* 004b23b4: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b23bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b23bd: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b23c3u); call_ind(t); }
    /* 004b23c3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b23c5:; BB(0x004b23c5);
    /* 004b23c5: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b23cc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b23ce: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b23d4u); call_ind(t); }
    /* 004b23d4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b23d7: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b23da: jl 0x4b23c5 */ if ((fS!=fO)) goto L_004b23c5;
L_004b23dc:; BB(0x004b23dc);
    /* 004b23dc: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 004b23e0: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 004b23e4: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b23ea: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b23ed: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b23f2: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b23f8: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004b23fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b23fd: mov dword ptr [ebx + 0x6c8], edx */ W32((u32)(r_ebx+0x6c8u), r_edx);
    /* 004b2403: mov dword ptr [ebx + 0x6cc], esi */ W32((u32)(r_ebx+0x6ccu), r_esi);
    /* 004b2409: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b240b: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b2410u); f_004b1e58();
    /* 004b2410: fld dword ptr [0x906f48] */ FPUSH(R_F32((u32)(0x906f48u)));
    /* 004b2416: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004b2419: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 004b241c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004b241f: mov ecx, dword ptr [ebx + 0x6c8] */ r_ecx = R32((u32)(r_ebx+0x6c8u));
    /* 004b2425: mov dword ptr [ebx + 0x74c], edx */ W32((u32)(r_ebx+0x74cu), r_edx);
    /* 004b242b: mov edx, dword ptr [ebx + 0x6cc] */ r_edx = R32((u32)(r_ebx+0x6ccu));
    /* 004b2431: mov dword ptr [ebx + 0x730], 0 */ W32((u32)(r_ebx+0x730u), 0x0u);
    /* 004b243b: mov dword ptr [ebx + 0x75c], esi */ W32((u32)(r_ebx+0x75cu), r_esi);
    /* 004b2441: mov dword ptr [ebx + 0x750], eax */ W32((u32)(r_ebx+0x750u), r_eax);
    /* 004b2447: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004b244a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b244c: fld dword ptr [eax + edx*8 + 0xa47780] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0xa47780u)));
    /* 004b2453: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 004b2456: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b2458: fsub dword ptr [esi + ecx*8 + 0xa47780] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_ecx*8+0xa47780u));
    /* 004b245f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b2461: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2463: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2464: jbe 0x4b2474 */ if ((fC||fZ)) goto L_004b2474;
L_004b2466:; BB(0x004b2466);
    /* 004b2466: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b2468: mov dword ptr [ebx + 0x754], 0x3f800000 */ W32((u32)(r_ebx+0x754u), 0x3f800000u);
    /* 004b2472: jmp 0x4b248f */ goto L_004b248f;
L_004b2474:; BB(0x004b2474);
    /* 004b2474: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004b2476: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2478: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2479: jae 0x4b2487 */ if (!fC) goto L_004b2487;
L_004b247b:; BB(0x004b247b);
    /* 004b247b: mov dword ptr [ebx + 0x754], 0xbf800000 */ W32((u32)(r_ebx+0x754u), 0xbf800000u);
    /* 004b2485: jmp 0x4b248f */ goto L_004b248f;
L_004b2487:; BB(0x004b2487);
    /* 004b2487: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b2489: mov dword ptr [ebx + 0x754], eax */ W32((u32)(r_ebx+0x754u), r_eax);
L_004b248f:; BB(0x004b248f);
    /* 004b248f: mov esi, dword ptr [ebx + 0x6cc] */ r_esi = R32((u32)(r_ebx+0x6ccu));
    /* 004b2495: mov ecx, dword ptr [ebx + 0x6c8] */ r_ecx = R32((u32)(r_ebx+0x6c8u));
    /* 004b249b: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 004b249e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b24a0: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004b24a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b24a5: fld dword ptr [edx + esi*8 + 0xa47784] */ FPUSH(R_F32((u32)(r_edx+r_esi*8+0xa47784u)));
    /* 004b24ac: fsub dword ptr [eax + ecx*8 + 0xa47784] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_ecx*8+0xa47784u));
    /* 004b24b3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b24b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b24b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b24b8: jbe 0x4b24c8 */ if ((fC||fZ)) goto L_004b24c8;
L_004b24ba:; BB(0x004b24ba);
    /* 004b24ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b24bc: mov dword ptr [ebx + 0x760], 0x3f800000 */ W32((u32)(r_ebx+0x760u), 0x3f800000u);
    /* 004b24c6: jmp 0x4b24e3 */ goto L_004b24e3;
L_004b24c8:; BB(0x004b24c8);
    /* 004b24c8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004b24ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b24cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b24cd: jae 0x4b24db */ if (!fC) goto L_004b24db;
L_004b24cf:; BB(0x004b24cf);
    /* 004b24cf: mov dword ptr [ebx + 0x760], 0xbf800000 */ W32((u32)(r_ebx+0x760u), 0xbf800000u);
    /* 004b24d9: jmp 0x4b24e3 */ goto L_004b24e3;
L_004b24db:; BB(0x004b24db);
    /* 004b24db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b24dd: mov dword ptr [ebx + 0x760], eax */ W32((u32)(r_ebx+0x760u), r_eax);
L_004b24e3:; BB(0x004b24e3);
    /* 004b24e3: mov esi, dword ptr [ebx + 0x6cc] */ r_esi = R32((u32)(r_ebx+0x6ccu));
    /* 004b24e9: mov ecx, dword ptr [ebx + 0x6c8] */ r_ecx = R32((u32)(r_ebx+0x6c8u));
    /* 004b24ef: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 004b24f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b24f4: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004b24f7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b24f9: fld dword ptr [edx + esi*8 + 0xa47788] */ FPUSH(R_F32((u32)(r_edx+r_esi*8+0xa47788u)));
    /* 004b2500: fsub dword ptr [eax + ecx*8 + 0xa47788] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_ecx*8+0xa47788u));
    /* 004b2507: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b2509: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b250b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b250c: jbe 0x4b2522 */ if ((fC||fZ)) goto L_004b2522;
L_004b250e:; BB(0x004b250e);
    /* 004b250e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b2510: fld dword ptr [0x906f40] */ FPUSH(R_F32((u32)(0x906f40u)));
    /* 004b2516: mov dword ptr [ebx + 0x758], 0x3f800000 */ W32((u32)(r_ebx+0x758u), 0x3f800000u);
    /* 004b2520: jmp 0x4b2549 */ goto L_004b2549;
L_004b2522:; BB(0x004b2522);
    /* 004b2522: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004b2524: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2526: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2527: jae 0x4b253b */ if (!fC) goto L_004b253b;
L_004b2529:; BB(0x004b2529);
    /* 004b2529: fld dword ptr [0x906f44] */ FPUSH(R_F32((u32)(0x906f44u)));
    /* 004b252f: mov dword ptr [ebx + 0x758], 0xbf800000 */ W32((u32)(r_ebx+0x758u), 0xbf800000u);
    /* 004b2539: jmp 0x4b2549 */ goto L_004b2549;
L_004b253b:; BB(0x004b253b);
    /* 004b253b: fld dword ptr [0x906f48] */ FPUSH(R_F32((u32)(0x906f48u)));
    /* 004b2541: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b2543: mov dword ptr [ebx + 0x758], eax */ W32((u32)(r_ebx+0x758u), r_eax);
L_004b2549:; BB(0x004b2549);
    /* 004b2549: mov edx, dword ptr [ebx + 0x6cc] */ r_edx = R32((u32)(r_ebx+0x6ccu));
    /* 004b254f: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2552: jge 0x4b25b6 */ if ((fS==fO)) goto L_004b25b6;
L_004b2554:; BB(0x004b2554);
    /* 004b2554: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004b2556: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2558: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2559: fld dword ptr [0x906f28] */ FPUSH(R_F32((u32)(0x906f28u)));
    /* 004b255f: fld dword ptr [0x906f24] */ FPUSH(R_F32((u32)(0x906f24u)));
    /* 004b2565: fld dword ptr [0x906f28] */ FPUSH(R_F32((u32)(0x906f28u)));
    /* 004b256b: fld dword ptr [0x906f24] */ FPUSH(R_F32((u32)(0x906f24u)));
    /* 004b2571: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b2573: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004b2577: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b2579: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b257c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004b2580: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b2584: jbe 0x4b259e */ if ((fC||fZ)) goto L_004b259e;
L_004b2586:; BB(0x004b2586);
    /* 004b2586: fld dword ptr [0x906f18] */ FPUSH(R_F32((u32)(0x906f18u)));
    /* 004b258c: fld dword ptr [0x906f24] */ FPUSH(R_F32((u32)(0x906f24u)));
    /* 004b2592: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b2594: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b2598: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004b259c: jmp 0x4b2616 */ goto L_004b2616;
L_004b259e:; BB(0x004b259e);
    /* 004b259e: fld dword ptr [0x906f20] */ FPUSH(R_F32((u32)(0x906f20u)));
    /* 004b25a4: fld dword ptr [0x906f1c] */ FPUSH(R_F32((u32)(0x906f1cu)));
    /* 004b25aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b25ac: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b25b0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004b25b4: jmp 0x4b2616 */ goto L_004b2616;
L_004b25b6:; BB(0x004b25b6);
    /* 004b25b6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004b25b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b25ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b25bb: fld dword ptr [0x906f3c] */ FPUSH(R_F32((u32)(0x906f3cu)));
    /* 004b25c1: fld dword ptr [0x906f38] */ FPUSH(R_F32((u32)(0x906f38u)));
    /* 004b25c7: fld dword ptr [0x906f3c] */ FPUSH(R_F32((u32)(0x906f3cu)));
    /* 004b25cd: fld dword ptr [0x906f38] */ FPUSH(R_F32((u32)(0x906f38u)));
    /* 004b25d3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b25d5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004b25d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b25db: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b25de: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004b25e2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b25e6: jbe 0x4b2600 */ if ((fC||fZ)) goto L_004b2600;
L_004b25e8:; BB(0x004b25e8);
    /* 004b25e8: fld dword ptr [0x906f2c] */ FPUSH(R_F32((u32)(0x906f2cu)));
    /* 004b25ee: fld dword ptr [0x906f38] */ FPUSH(R_F32((u32)(0x906f38u)));
    /* 004b25f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b25f6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b25fa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004b25fe: jmp 0x4b2616 */ goto L_004b2616;
L_004b2600:; BB(0x004b2600);
    /* 004b2600: fld dword ptr [0x906f34] */ FPUSH(R_F32((u32)(0x906f34u)));
    /* 004b2606: fld dword ptr [0x906f30] */ FPUSH(R_F32((u32)(0x906f30u)));
    /* 004b260c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b260e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b2612: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_004b2616:; BB(0x004b2616);
    /* 004b2616: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b2617: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004b261a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b261c: fld dword ptr [eax + edx*8 + 0xa47780] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0xa47780u)));
    /* 004b2623: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 004b2626: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b2629: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b262eu); f_0082e900();
    /* 004b262e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2631: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004b2635: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004b2639: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b263b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b263e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b2640: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b2644: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b2648: lea ecx, [ebx + 0x638] */ r_ecx = (u32)(r_ebx+0x638u);
    /* 004b264e: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x4b2653u); f_00434afc();
    /* 004b2653: mov edx, dword ptr [ebx + 0x6cc] */ r_edx = R32((u32)(r_ebx+0x6ccu));
    /* 004b2659: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b265a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004b265d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b265f: fld dword ptr [eax + edx*8 + 0xa47784] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0xa47784u)));
    /* 004b2666: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 004b2669: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b266c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b2671u); f_0082e900();
    /* 004b2671: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2674: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004b2678: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004b267c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b267e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b2681: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b2683: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b2687: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b268b: lea ecx, [ebx + 0x658] */ r_ecx = (u32)(r_ebx+0x658u);
    /* 004b2691: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x4b2696u); f_00434afc();
    /* 004b2696: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b269c: fcomp dword ptr [0x906f48] */ fx_compare(ST(0), R_F32((u32)(0x906f48u))); FPOP();
    /* 004b26a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b26a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b26a5: jbe 0x4b26ec */ if ((fC||fZ)) goto L_004b26ec;
L_004b26a7:; BB(0x004b26a7);
    /* 004b26a7: mov edx, dword ptr [ebx + 0x6cc] */ r_edx = R32((u32)(r_ebx+0x6ccu));
    /* 004b26ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b26ae: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004b26b1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b26b3: fld dword ptr [eax + edx*8 + 0xa47788] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0xa47788u)));
    /* 004b26ba: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004b26bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b26c0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b26c5u); f_0082e900();
    /* 004b26c5: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b26cb: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b26ce: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004b26d2: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004b26d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b26d8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b26db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b26dd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b26e1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b26e5: call 0x434afc */ r_esp -= 4; W32(r_esp, 0x4b26eau); f_00434afc();
    /* 004b26ea: jmp 0x4b2737 */ goto L_004b2737;
L_004b26ec:; BB(0x004b26ec);
    /* 004b26ec: mov edx, dword ptr [ebx + 0x6cc] */ r_edx = R32((u32)(r_ebx+0x6ccu));
    /* 004b26f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b26f3: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004b26f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b26f8: fld dword ptr [eax + edx*8 + 0xa47788] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0xa47788u)));
    /* 004b26ff: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004b2702: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b2705: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b270au); f_0082e900();
    /* 004b270a: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b2710: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b2713: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004b2717: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004b271b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b271d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b2720: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b2722: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b2726: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b272a: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 004b2732: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x4b2737u); f_00434ac4();
L_004b2737:; BB(0x004b2737);
    /* 004b2737: fld dword ptr [0x906f48] */ FPUSH(R_F32((u32)(0x906f48u)));
    /* 004b273d: fcom dword ptr [ebx + 0x758] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x758u))); 
    /* 004b2743: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2745: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2746: je 0x4b28f2 */ if (fZ) goto L_004b28f2;
L_004b274c:; BB(0x004b274c);
    /* 004b274c: mov dword ptr [ebx + 0x6d0], 0 */ W32((u32)(r_ebx+0x6d0u), 0x0u);
L_004b2756:; BB(0x004b2756);
    /* 004b2756: fcom dword ptr [ebx + 0x758] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x758u))); 
    /* 004b275c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b275e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b275f: mov dword ptr [ebx + 0x6d4], 0 */ W32((u32)(r_ebx+0x6d4u), 0x0u);
    /* 004b2769: jae 0x4b2786 */ if (!fC) goto L_004b2786;
L_004b276b:; BB(0x004b276b);
    /* 004b276b: fcom dword ptr [ebx + 0x754] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x754u))); 
    /* 004b2771: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2773: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2774: je 0x4b2853 */ if (fZ) goto L_004b2853;
L_004b277a:; BB(0x004b277a);
    /* 004b277a: mov dword ptr [ebx + 0x6d8], 1 */ W32((u32)(r_ebx+0x6d8u), 0x1u);
    /* 004b2784: jmp 0x4b279f */ goto L_004b279f;
L_004b2786:; BB(0x004b2786);
    /* 004b2786: fcom dword ptr [ebx + 0x754] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x754u))); 
    /* 004b278c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b278e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b278f: je 0x4b28e3 */ if (fZ) goto L_004b28e3;
L_004b2795:; BB(0x004b2795);
    /* 004b2795: mov dword ptr [ebx + 0x6d8], 0 */ W32((u32)(r_ebx+0x6d8u), 0x0u);
L_004b279f:; BB(0x004b279f);
    /* 004b279f: fcom dword ptr [ebx + 0x760] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x760u))); 
    /* 004b27a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b27a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b27a8: je 0x4b2862 */ if (fZ) goto L_004b2862;
L_004b27ae:; BB(0x004b27ae);
    /* 004b27ae: fcomp dword ptr [ebx + 0x760] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x760u))); FPOP();
    /* 004b27b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b27b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b27b7: mov dword ptr [ebx + 0x734], 4 */ W32((u32)(r_ebx+0x734u), 0x4u);
    /* 004b27c1: jb 0x4b280b */ if (fC) goto L_004b280b;
L_004b27c3:; BB(0x004b27c3);
    /* 004b27c3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b27c5:; BB(0x004b27c5);
    /* 004b27c5: mov ecx, dword ptr [ebx + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x6e4u));
    /* 004b27cc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b27cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b27d1: je 0x4b27d8 */ if (fZ) goto L_004b27d8;
L_004b27d3:; BB(0x004b27d3);
    /* 004b27d3: call 0x4bd23c */ r_esp -= 4; W32(r_esp, 0x4b27d8u); f_004bd23c();
L_004b27d8:; BB(0x004b27d8);
    /* 004b27d8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b27db: jl 0x4b27c5 */ if ((fS!=fO)) goto L_004b27c5;
L_004b27dd:; BB(0x004b27dd);
    /* 004b27dd: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b27e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b27e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b27e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b27e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b27e8: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b27ed: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b27f2u); f_00814298();
    /* 004b27f2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b27f5: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b27fb: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b2800: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b2806: jmp 0x4b2358 */ goto L_004b2358;
L_004b280b:; BB(0x004b280b);
    /* 004b280b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b280d:; BB(0x004b280d);
    /* 004b280d: mov ecx, dword ptr [ebx + esi*4 + 0x6e4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x6e4u));
    /* 004b2814: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b2817: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2819: je 0x4b2820 */ if (fZ) goto L_004b2820;
L_004b281b:; BB(0x004b281b);
    /* 004b281b: call 0x4bd230 */ r_esp -= 4; W32(r_esp, 0x4b2820u); f_004bd230();
L_004b2820:; BB(0x004b2820);
    /* 004b2820: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2823: jl 0x4b280d */ if ((fS!=fO)) goto L_004b280d;
L_004b2825:; BB(0x004b2825);
    /* 004b2825: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b282b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b282d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b282e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b282f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2830: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2835: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b283au); f_00814298();
    /* 004b283a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b283d: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b2843: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b2848: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b284e: jmp 0x4b2358 */ goto L_004b2358;
L_004b2853:; BB(0x004b2853);
    /* 004b2853: mov dword ptr [ebx + 0x6d8], 3 */ W32((u32)(r_ebx+0x6d8u), 0x3u);
    /* 004b285d: jmp 0x4b279f */ goto L_004b279f;
L_004b2862:; BB(0x004b2862);
    /* 004b2862: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b2864: mov eax, dword ptr [ebx + 0x6c8] */ r_eax = R32((u32)(r_ebx+0x6c8u));
    /* 004b286a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b286d: je 0x4b28d4 */ if (fZ) goto L_004b28d4;
L_004b286f:; BB(0x004b286f);
    /* 004b286f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2872: je 0x4b28d4 */ if (fZ) goto L_004b28d4;
L_004b2874:; BB(0x004b2874);
    /* 004b2874: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2877: je 0x4b287e */ if (fZ) goto L_004b287e;
L_004b2879:; BB(0x004b2879);
    /* 004b2879: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b287c: jne 0x4b288d */ if (!fZ) goto L_004b288d;
L_004b287e:; BB(0x004b287e);
    /* 004b287e: mov dword ptr [ebx + 0x734], 0 */ W32((u32)(r_ebx+0x734u), 0x0u);
    /* 004b2888: jmp 0x4b2358 */ goto L_004b2358;
L_004b288d:; BB(0x004b288d);
    /* 004b288d: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b2893: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2896: je 0x4b28c5 */ if (fZ) goto L_004b28c5;
L_004b2898:; BB(0x004b2898);
    /* 004b2898: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b289b: je 0x4b28c5 */ if (fZ) goto L_004b28c5;
L_004b289d:; BB(0x004b289d);
    /* 004b289d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b28a0: je 0x4b28a7 */ if (fZ) goto L_004b28a7;
L_004b28a2:; BB(0x004b28a2);
    /* 004b28a2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b28a5: jne 0x4b28b6 */ if (!fZ) goto L_004b28b6;
L_004b28a7:; BB(0x004b28a7);
    /* 004b28a7: mov dword ptr [ebx + 0x734], 3 */ W32((u32)(r_ebx+0x734u), 0x3u);
    /* 004b28b1: jmp 0x4b2358 */ goto L_004b2358;
L_004b28b6:; BB(0x004b28b6);
    /* 004b28b6: mov dword ptr [ebx + 0x734], 3 */ W32((u32)(r_ebx+0x734u), 0x3u);
    /* 004b28c0: jmp 0x4b2358 */ goto L_004b2358;
L_004b28c5:; BB(0x004b28c5);
    /* 004b28c5: mov dword ptr [ebx + 0x734], 1 */ W32((u32)(r_ebx+0x734u), 0x1u);
    /* 004b28cf: jmp 0x4b2358 */ goto L_004b2358;
L_004b28d4:; BB(0x004b28d4);
    /* 004b28d4: mov dword ptr [ebx + 0x734], 2 */ W32((u32)(r_ebx+0x734u), 0x2u);
    /* 004b28de: jmp 0x4b2358 */ goto L_004b2358;
L_004b28e3:; BB(0x004b28e3);
    /* 004b28e3: mov dword ptr [ebx + 0x6d8], 2 */ W32((u32)(r_ebx+0x6d8u), 0x2u);
    /* 004b28ed: jmp 0x4b279f */ goto L_004b279f;
L_004b28f2:; BB(0x004b28f2);
    /* 004b28f2: mov dword ptr [ebx + 0x6d0], 1 */ W32((u32)(r_ebx+0x6d0u), 0x1u);
    /* 004b28fc: jmp 0x4b2756 */ goto L_004b2756;
}

