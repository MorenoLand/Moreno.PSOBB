#include "protos.h"

void f_004b212d(void)
{
    FN_ENTER(0x004b212d);
    goto L_004b212d;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b212d); r_esp += 16; return;
L_004b210b:; BB(0x004b210b);
    /* 004b210b: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b210e: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b2114: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b2118: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b211b: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b211e: ja 0x4b2205 */ if ((!fC&&!fZ)) goto L_004b2205;
L_004b2124:; BB(0x004b2124);
    /* 004b2124: mov ecx, dword ptr [ecx*4 + 0x904f80] */ r_ecx = R32((u32)(r_ecx*4+0x904f80u));
    /* 004b212b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b212d:; BB(0x004b212d);
    /* 004b212d: mov eax, 1 */ r_eax = 0x1u;
    /* 004b2132: jmp 0x4b210b */ goto L_004b210b;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2134(void)
{
    FN_ENTER(0x004b2134);
    goto L_004b2134;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b2134); r_esp += 16; return;
L_004b2134:; BB(0x004b2134);
    /* 004b2134: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2136: jne 0x4b2142 */ if (!fZ) goto L_004b2142;
L_004b2138:; BB(0x004b2138);
    /* 004b2138: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b213d: jmp 0x4b2205 */ goto L_004b2205;
L_004b2142:; BB(0x004b2142);
    /* 004b2142: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b2147: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b214c(void)
{
    FN_ENTER(0x004b214c);
    goto L_004b214c;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b214c); r_esp += 16; return;
L_004b214c:; BB(0x004b214c);
    /* 004b214c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b214e: jne 0x4b215a */ if (!fZ) goto L_004b215a;
L_004b2150:; BB(0x004b2150);
    /* 004b2150: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b2155: jmp 0x4b2205 */ goto L_004b2205;
L_004b215a:; BB(0x004b215a);
    /* 004b215a: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b215f: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2164(void)
{
    FN_ENTER(0x004b2164);
    goto L_004b2164;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b2164); r_esp += 16; return;
L_004b2164:; BB(0x004b2164);
    /* 004b2164: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2166: jne 0x4b2172 */ if (!fZ) goto L_004b2172;
L_004b2168:; BB(0x004b2168);
    /* 004b2168: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b216d: jmp 0x4b2205 */ goto L_004b2205;
L_004b2172:; BB(0x004b2172);
    /* 004b2172: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b2177: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b217c(void)
{
    FN_ENTER(0x004b217c);
    goto L_004b217c;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b217c); r_esp += 16; return;
L_004b217c:; BB(0x004b217c);
    /* 004b217c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b217e: jne 0x4b218a */ if (!fZ) goto L_004b218a;
L_004b2180:; BB(0x004b2180);
    /* 004b2180: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b2185: jmp 0x4b2205 */ goto L_004b2205;
L_004b218a:; BB(0x004b218a);
    /* 004b218a: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b218f: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2191(void)
{
    FN_ENTER(0x004b2191);
    goto L_004b2191;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b2191); r_esp += 16; return;
L_004b2191:; BB(0x004b2191);
    /* 004b2191: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2193: jne 0x4b219c */ if (!fZ) goto L_004b219c;
L_004b2195:; BB(0x004b2195);
    /* 004b2195: mov eax, 4 */ r_eax = 0x4u;
    /* 004b219a: jmp 0x4b2205 */ goto L_004b2205;
L_004b219c:; BB(0x004b219c);
    /* 004b219c: mov eax, 0xa */ r_eax = 0xau;
    /* 004b21a1: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b21a3(void)
{
    FN_ENTER(0x004b21a3);
    goto L_004b21a3;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b21a3); r_esp += 16; return;
L_004b21a3:; BB(0x004b21a3);
    /* 004b21a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b21a5: jne 0x4b21ae */ if (!fZ) goto L_004b21ae;
L_004b21a7:; BB(0x004b21a7);
    /* 004b21a7: mov eax, 3 */ r_eax = 0x3u;
    /* 004b21ac: jmp 0x4b2205 */ goto L_004b2205;
L_004b21ae:; BB(0x004b21ae);
    /* 004b21ae: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b21b3: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b21b5(void)
{
    FN_ENTER(0x004b21b5);
    goto L_004b21b5;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b21b5); r_esp += 16; return;
L_004b21b5:; BB(0x004b21b5);
    /* 004b21b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b21b7: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b21bcu); f_00520bf4();
    /* 004b21bc: fcomp dword ptr [0x906f48] */ fx_compare(ST(0), R_F32((u32)(0x906f48u))); FPOP();
    /* 004b21c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b21c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b21c5: jbe 0x4b21ce */ if ((fC||fZ)) goto L_004b21ce;
L_004b21c7:; BB(0x004b21c7);
    /* 004b21c7: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b21cc: jmp 0x4b2205 */ goto L_004b2205;
L_004b21ce:; BB(0x004b21ce);
    /* 004b21ce: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b21d3: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b21d5(void)
{
    FN_ENTER(0x004b21d5);
    goto L_004b21d5;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b21d5); r_esp += 16; return;
L_004b21d5:; BB(0x004b21d5);
    /* 004b21d5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b21d7: jne 0x4b21e0 */ if (!fZ) goto L_004b21e0;
L_004b21d9:; BB(0x004b21d9);
    /* 004b21d9: mov eax, 5 */ r_eax = 0x5u;
    /* 004b21de: jmp 0x4b2205 */ goto L_004b2205;
L_004b21e0:; BB(0x004b21e0);
    /* 004b21e0: mov eax, 9 */ r_eax = 0x9u;
    /* 004b21e5: jmp 0x4b2205 */ goto L_004b2205;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b21e7(void)
{
    FN_ENTER(0x004b21e7);
    goto L_004b21e7;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b21e7); r_esp += 16; return;
L_004b21e7:; BB(0x004b21e7);
    /* 004b21e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b21e9: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b21eeu); f_00520bf4();
    /* 004b21ee: fcomp dword ptr [0x906f48] */ fx_compare(ST(0), R_F32((u32)(0x906f48u))); FPOP();
    /* 004b21f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b21f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b21f7: jbe 0x4b2200 */ if ((fC||fZ)) goto L_004b2200;
L_004b21f9:; BB(0x004b21f9);
    /* 004b21f9: mov eax, 8 */ r_eax = 0x8u;
    /* 004b21fe: jmp 0x4b2205 */ goto L_004b2205;
L_004b2200:; BB(0x004b2200);
    /* 004b2200: mov eax, 6 */ r_eax = 0x6u;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2205(void)
{
    FN_ENTER(0x004b2205);
    goto L_004b2205;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b2205); r_esp += 16; return;
L_004b2205:; BB(0x004b2205);
    /* 004b2205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b2208: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b220du); f_004b5150();
    /* 004b220d: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2246(void)
{
    FN_ENTER(0x004b2246);
    goto L_004b2246;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b2246); r_esp += 16; return;
L_004b2224:; BB(0x004b2224);
    /* 004b2224: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 004b2227: mov dword ptr [ebx + 0x6bc], esi */ W32((u32)(r_ebx+0x6bcu), r_esi);
    /* 004b222d: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b2231: lea esi, [edx - 0x1e] */ r_esi = (u32)(r_edx+0xffffffe2u);
    /* 004b2234: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b2237: ja 0x4b234b */ if ((!fC&&!fZ)) goto L_004b234b;
L_004b223d:; BB(0x004b223d);
    /* 004b223d: mov esi, dword ptr [esi*4 + 0x905020] */ r_esi = R32((u32)(r_esi*4+0x905020u));
    /* 004b2244: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b2246:; BB(0x004b2246);
    /* 004b2246: mov edx, 1 */ r_edx = 0x1u;
    /* 004b224b: jmp 0x4b2224 */ goto L_004b2224;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b224d(void)
{
    FN_ENTER(0x004b224d);
    goto L_004b224d;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b224d); r_esp += 16; return;
L_004b224d:; BB(0x004b224d);
    /* 004b224d: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b2253: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2255: jne 0x4b2261 */ if (!fZ) goto L_004b2261;
L_004b2257:; BB(0x004b2257);
    /* 004b2257: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004b225c: jmp 0x4b234b */ goto L_004b234b;
L_004b2261:; BB(0x004b2261);
    /* 004b2261: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004b2266: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b226b(void)
{
    FN_ENTER(0x004b226b);
    goto L_004b226b;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b226b); r_esp += 16; return;
L_004b226b:; BB(0x004b226b);
    /* 004b226b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b2271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2273: jne 0x4b227f */ if (!fZ) goto L_004b227f;
L_004b2275:; BB(0x004b2275);
    /* 004b2275: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004b227a: jmp 0x4b234b */ goto L_004b234b;
L_004b227f:; BB(0x004b227f);
    /* 004b227f: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004b2284: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2289(void)
{
    FN_ENTER(0x004b2289);
    goto L_004b2289;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b2289); r_esp += 16; return;
L_004b2289:; BB(0x004b2289);
    /* 004b2289: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b228f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2291: jne 0x4b229d */ if (!fZ) goto L_004b229d;
L_004b2293:; BB(0x004b2293);
    /* 004b2293: mov edx, 0x11 */ r_edx = 0x11u;
    /* 004b2298: jmp 0x4b234b */ goto L_004b234b;
L_004b229d:; BB(0x004b229d);
    /* 004b229d: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004b22a2: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b22a7(void)
{
    FN_ENTER(0x004b22a7);
    goto L_004b22a7;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b22a7); r_esp += 16; return;
L_004b22a7:; BB(0x004b22a7);
    /* 004b22a7: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b22ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b22af: jne 0x4b22bb */ if (!fZ) goto L_004b22bb;
L_004b22b1:; BB(0x004b22b1);
    /* 004b22b1: mov edx, 0xf */ r_edx = 0xfu;
    /* 004b22b6: jmp 0x4b234b */ goto L_004b234b;
L_004b22bb:; BB(0x004b22bb);
    /* 004b22bb: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004b22c0: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b22c5(void)
{
    FN_ENTER(0x004b22c5);
    goto L_004b22c5;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b22c5); r_esp += 16; return;
L_004b22c5:; BB(0x004b22c5);
    /* 004b22c5: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b22cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b22cd: jne 0x4b22d6 */ if (!fZ) goto L_004b22d6;
L_004b22cf:; BB(0x004b22cf);
    /* 004b22cf: mov edx, 4 */ r_edx = 0x4u;
    /* 004b22d4: jmp 0x4b234b */ goto L_004b234b;
L_004b22d6:; BB(0x004b22d6);
    /* 004b22d6: mov edx, 0xa */ r_edx = 0xau;
    /* 004b22db: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b22dd(void)
{
    FN_ENTER(0x004b22dd);
    goto L_004b22dd;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b22dd); r_esp += 16; return;
L_004b22dd:; BB(0x004b22dd);
    /* 004b22dd: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b22e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b22e5: jne 0x4b22ee */ if (!fZ) goto L_004b22ee;
L_004b22e7:; BB(0x004b22e7);
    /* 004b22e7: mov edx, 3 */ r_edx = 0x3u;
    /* 004b22ec: jmp 0x4b234b */ goto L_004b234b;
L_004b22ee:; BB(0x004b22ee);
    /* 004b22ee: mov edx, 0xb */ r_edx = 0xbu;
    /* 004b22f3: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b22f5(void)
{
    FN_ENTER(0x004b22f5);
    goto L_004b22f5;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b22f5); r_esp += 16; return;
L_004b22f5:; BB(0x004b22f5);
    /* 004b22f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b22f7: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b22fcu); f_00520bf4();
    /* 004b22fc: fcomp dword ptr [0x906f48] */ fx_compare(ST(0), R_F32((u32)(0x906f48u))); FPOP();
    /* 004b2302: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2304: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2305: jbe 0x4b230e */ if ((fC||fZ)) goto L_004b230e;
L_004b2307:; BB(0x004b2307);
    /* 004b2307: mov edx, 0xc */ r_edx = 0xcu;
    /* 004b230c: jmp 0x4b234b */ goto L_004b234b;
L_004b230e:; BB(0x004b230e);
    /* 004b230e: mov edx, 0xe */ r_edx = 0xeu;
    /* 004b2313: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2315(void)
{
    FN_ENTER(0x004b2315);
    goto L_004b2315;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b2315); r_esp += 16; return;
L_004b2315:; BB(0x004b2315);
    /* 004b2315: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b231b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b231d: jne 0x4b2326 */ if (!fZ) goto L_004b2326;
L_004b231f:; BB(0x004b231f);
    /* 004b231f: mov edx, 5 */ r_edx = 0x5u;
    /* 004b2324: jmp 0x4b234b */ goto L_004b234b;
L_004b2326:; BB(0x004b2326);
    /* 004b2326: mov edx, 9 */ r_edx = 0x9u;
    /* 004b232b: jmp 0x4b234b */ goto L_004b234b;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b232d(void)
{
    FN_ENTER(0x004b232d);
    goto L_004b232d;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b232d); r_esp += 16; return;
L_004b232d:; BB(0x004b232d);
    /* 004b232d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b232f: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b2334u); f_00520bf4();
    /* 004b2334: fcomp dword ptr [0x906f48] */ fx_compare(ST(0), R_F32((u32)(0x906f48u))); FPOP();
    /* 004b233a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b233c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b233d: jbe 0x4b2346 */ if ((fC||fZ)) goto L_004b2346;
L_004b233f:; BB(0x004b233f);
    /* 004b233f: mov edx, 8 */ r_edx = 0x8u;
    /* 004b2344: jmp 0x4b234b */ goto L_004b234b;
L_004b2346:; BB(0x004b2346);
    /* 004b2346: mov edx, 6 */ r_edx = 0x6u;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b234b(void)
{
    FN_ENTER(0x004b234b);
    goto L_004b234b;
L_004b2007:; BB(0x004b2007);
    /* 004b2007: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b200b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b200c: ret 0xc */ FN_RET(0x004b234b); r_esp += 16; return;
L_004b234b:; BB(0x004b234b);
    /* 004b234b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b234c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b234e: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2353u); f_004b5150();
    /* 004b2353: jmp 0x4b2007 */ goto L_004b2007;
}

void f_004b2904(void) /* sub_4B2904 */
{
    FN_ENTER(0x004b2904);
    /* 004b2904: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2905: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b2907: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b290d: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2912u); f_0042cdc0();
    /* 004b2912: lea ecx, [ebx + 0x638] */ r_ecx = (u32)(r_ebx+0x638u);
    /* 004b2918: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b291du); f_0042cdc0();
    /* 004b291d: lea ecx, [ebx + 0x658] */ r_ecx = (u32)(r_ebx+0x658u);
    /* 004b2923: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2928u); f_0042cdc0();
    /* 004b2928: mov eax, dword ptr [ebx + 0x638] */ r_eax = R32((u32)(r_ebx+0x638u));
    /* 004b292e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2931: jne 0x4b2949 */ if (!fZ) goto L_004b2949;
L_004b2933:; BB(0x004b2933);
    /* 004b2933: mov eax, dword ptr [ebx + 0x658] */ r_eax = R32((u32)(r_ebx+0x658u));
    /* 004b2939: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b293c: jne 0x4b2949 */ if (!fZ) goto L_004b2949;
L_004b293e:; BB(0x004b293e);
    /* 004b293e: mov eax, dword ptr [ebx + 0x678] */ r_eax = R32((u32)(r_ebx+0x678u));
    /* 004b2944: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b2947: je 0x4b294d */ if (fZ) goto L_004b294d;
L_004b2949:; BB(0x004b2949);
    /* 004b2949: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b294b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b294c: ret  */ FN_RET(0x004b2904); r_esp += 4; return;
L_004b294d:; BB(0x004b294d);
    /* 004b294d: mov eax, 1 */ r_eax = 0x1u;
    /* 004b2952: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b2953: ret  */ FN_RET(0x004b2904); r_esp += 4; return;
}

void f_004b2954(void) /* sub_4B2954 */
{
    FN_ENTER(0x004b2954);
    /* 004b2954: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b2955: mov edi, ecx */ r_edi = r_ecx;
    /* 004b2957: lea ecx, [edi + 0x678] */ r_ecx = (u32)(r_edi+0x678u);
    /* 004b295d: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2962u); f_0042cdc0();
    /* 004b2962: lea ecx, [edi + 0x658] */ r_ecx = (u32)(r_edi+0x658u);
    /* 004b2968: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b296du); f_0042cdc0();
    /* 004b296d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2970: jne 0x4b297c */ if (!fZ) goto L_004b297c;
L_004b2972:; BB(0x004b2972);
    /* 004b2972: mov dword ptr [edi + 0x6d4], 1 */ W32((u32)(r_edi+0x6d4u), 0x1u);
L_004b297c:; BB(0x004b297c);
    /* 004b297c: mov edx, dword ptr [edi + 0x6d0] */ r_edx = R32((u32)(r_edi+0x6d0u));
    /* 004b2982: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2984: jne 0x4b29b2 */ if (!fZ) goto L_004b29b2;
L_004b2986:; BB(0x004b2986);
    /* 004b2986: fld dword ptr [edi + 0x690] */ FPUSH(R_F32((u32)(r_edi+0x690u)));
    /* 004b298c: fcom dword ptr [0x906f00] */ fx_compare(ST(0), R_F32((u32)(0x906f00u))); 
    /* 004b2992: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2994: mov dword ptr [edi + 0xc8], 0x3e99999a */ W32((u32)(r_edi+0xc8u), 0x3e99999au);
    /* 004b299e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b299f: jbe 0x4b29db */ if ((fC||fZ)) goto L_004b29db;
L_004b29a1:; BB(0x004b29a1);
    /* 004b29a1: mov dword ptr [edi + 0x6d0], 1 */ W32((u32)(r_edi+0x6d0u), 0x1u);
    /* 004b29ab: mov edx, 1 */ r_edx = 0x1u;
    /* 004b29b0: jmp 0x4b29db */ goto L_004b29db;
L_004b29b2:; BB(0x004b29b2);
    /* 004b29b2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b29b5: jne 0x4b29d5 */ if (!fZ) goto L_004b29d5;
L_004b29b7:; BB(0x004b29b7);
    /* 004b29b7: lea ecx, [edi + 0x638] */ r_ecx = (u32)(r_edi+0x638u);
    /* 004b29bd: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b29c2u); f_0042cdc0();
    /* 004b29c2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b29c5: je 0x4b29f9 */ if (fZ) goto L_004b29f9;
L_004b29c7:; BB(0x004b29c7);
    /* 004b29c7: mov edx, dword ptr [edi + 0x6d0] */ r_edx = R32((u32)(r_edi+0x6d0u));
    /* 004b29cd: fld dword ptr [edi + 0x690] */ FPUSH(R_F32((u32)(r_edi+0x690u)));
    /* 004b29d3: jmp 0x4b29db */ goto L_004b29db;
L_004b29d5:; BB(0x004b29d5);
    /* 004b29d5: fld dword ptr [edi + 0x690] */ FPUSH(R_F32((u32)(r_edi+0x690u)));
L_004b29db:; BB(0x004b29db);
    /* 004b29db: fcomp dword ptr [0x906f04] */ fx_compare(ST(0), R_F32((u32)(0x906f04u))); FPOP();
    /* 004b29e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b29e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b29e4: jbe 0x4b29f0 */ if ((fC||fZ)) goto L_004b29f0;
L_004b29e6:; BB(0x004b29e6);
    /* 004b29e6: mov dword ptr [edi + 0xc8], 0x3f666666 */ W32((u32)(r_edi+0xc8u), 0x3f666666u);
L_004b29f0:; BB(0x004b29f0);
    /* 004b29f0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b29f3: je 0x4b2a10 */ if (fZ) goto L_004b2a10;
L_004b29f5:; BB(0x004b29f5);
    /* 004b29f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b29f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b29f8: ret  */ FN_RET(0x004b2954); r_esp += 4; return;
L_004b29f9:; BB(0x004b29f9);
    /* 004b29f9: fld dword ptr [edi + 0x690] */ FPUSH(R_F32((u32)(r_edi+0x690u)));
    /* 004b29ff: mov dword ptr [edi + 0x6d0], 2 */ W32((u32)(r_edi+0x6d0u), 0x2u);
    /* 004b2a09: mov edx, 2 */ r_edx = 0x2u;
    /* 004b2a0e: jmp 0x4b29db */ goto L_004b29db;
L_004b2a10:; BB(0x004b2a10);
    /* 004b2a10: mov eax, dword ptr [edi + 0x6d4] */ r_eax = R32((u32)(r_edi+0x6d4u));
    /* 004b2a16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b2a19: jne 0x4b29f5 */ if (!fZ) goto L_004b29f5;
L_004b2a1b:; BB(0x004b2a1b);
    /* 004b2a1b: mov eax, 1 */ r_eax = 0x1u;
    /* 004b2a20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b2a21: ret  */ FN_RET(0x004b2954); r_esp += 4; return;
}

void f_004b2a24(void) /* sub_4B2A24 */
{
    FN_ENTER(0x004b2a24);
    /* 004b2a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b2a25: mov esi, ecx */ r_esi = r_ecx;
    /* 004b2a27: lea ecx, [esi + 0x638] */ r_ecx = (u32)(r_esi+0x638u);
    /* 004b2a2d: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2a32u); f_0042cdc0();
    /* 004b2a32: lea ecx, [esi + 0x658] */ r_ecx = (u32)(r_esi+0x658u);
    /* 004b2a38: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2a3du); f_0042cdc0();
    /* 004b2a3d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2a40: jne 0x4b2a4c */ if (!fZ) goto L_004b2a4c;
L_004b2a42:; BB(0x004b2a42);
    /* 004b2a42: mov dword ptr [esi + 0x6d4], 1 */ W32((u32)(r_esi+0x6d4u), 0x1u);
L_004b2a4c:; BB(0x004b2a4c);
    /* 004b2a4c: mov edx, dword ptr [esi + 0x6d8] */ r_edx = R32((u32)(r_esi+0x6d8u));
    /* 004b2a52: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2a54: je 0x4b2ac7 */ if (fZ) goto L_004b2ac7;
L_004b2a56:; BB(0x004b2a56);
    /* 004b2a56: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2a59: jne 0x4b2a76 */ if (!fZ) goto L_004b2a76;
L_004b2a5b:; BB(0x004b2a5b);
    /* 004b2a5b: mov dword ptr [esi + 0xc8], 0x3e99999a */ W32((u32)(r_esi+0xc8u), 0x3e99999au);
    /* 004b2a65: mov edx, 3 */ r_edx = 0x3u;
    /* 004b2a6a: mov dword ptr [esi + 0x6d8], 3 */ W32((u32)(r_esi+0x6d8u), 0x3u);
    /* 004b2a74: jmp 0x4b2ae7 */ goto L_004b2ae7;
L_004b2a76:; BB(0x004b2a76);
    /* 004b2a76: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2a79: jne 0x4b2ae7 */ if (!fZ) goto L_004b2ae7;
L_004b2a7b:; BB(0x004b2a7b);
    /* 004b2a7b: lea ecx, [esi + 0x678] */ r_ecx = (u32)(r_esi+0x678u);
    /* 004b2a81: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2a86u); f_0042cdc0();
    /* 004b2a86: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2a89: je 0x4b2af0 */ if (fZ) goto L_004b2af0;
L_004b2a8b:; BB(0x004b2a8b);
    /* 004b2a8b: mov edx, dword ptr [esi + 0x6d8] */ r_edx = R32((u32)(r_esi+0x6d8u));
L_004b2a91:; BB(0x004b2a91);
    /* 004b2a91: fld dword ptr [esi + 0x690] */ FPUSH(R_F32((u32)(r_esi+0x690u)));
    /* 004b2a97: fcomp dword ptr [0x906efc] */ fx_compare(ST(0), R_F32((u32)(0x906efcu))); FPOP();
    /* 004b2a9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2a9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2aa0: jbe 0x4b2ae7 */ if ((fC||fZ)) goto L_004b2ae7;
L_004b2aa2:; BB(0x004b2aa2);
    /* 004b2aa2: fld dword ptr [0x906f0c] */ FPUSH(R_F32((u32)(0x906f0cu)));
    /* 004b2aa8: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 004b2aae: fld dword ptr [0x906f08] */ FPUSH(R_F32((u32)(0x906f08u)));
    /* 004b2ab4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b2ab6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2ab8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2ab9: ja 0x4b2abd */ if ((!fC&&!fZ)) goto L_004b2abd;
L_004b2abb:; BB(0x004b2abb);
    /* 004b2abb: fst st(1) */ ST(1) = ST(0);
L_004b2abd:; BB(0x004b2abd);
    /* 004b2abd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b2abf: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 004b2ac5: jmp 0x4b2ae7 */ goto L_004b2ae7;
L_004b2ac7:; BB(0x004b2ac7);
    /* 004b2ac7: fld dword ptr [esi + 0x650] */ FPUSH(R_F32((u32)(r_esi+0x650u)));
    /* 004b2acd: fcomp dword ptr [0x906ef8] */ fx_compare(ST(0), R_F32((u32)(0x906ef8u))); FPOP();
    /* 004b2ad3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2ad5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2ad6: jbe 0x4b2ae7 */ if ((fC||fZ)) goto L_004b2ae7;
L_004b2ad8:; BB(0x004b2ad8);
    /* 004b2ad8: mov dword ptr [esi + 0x6d8], 2 */ W32((u32)(r_esi+0x6d8u), 0x2u);
    /* 004b2ae2: mov edx, 2 */ r_edx = 0x2u;
L_004b2ae7:; BB(0x004b2ae7);
    /* 004b2ae7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2aea: je 0x4b2b01 */ if (fZ) goto L_004b2b01;
L_004b2aec:; BB(0x004b2aec);
    /* 004b2aec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b2aee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b2aef: ret  */ FN_RET(0x004b2a24); r_esp += 4; return;
L_004b2af0:; BB(0x004b2af0);
    /* 004b2af0: mov dword ptr [esi + 0x6d8], 4 */ W32((u32)(r_esi+0x6d8u), 0x4u);
    /* 004b2afa: mov edx, 4 */ r_edx = 0x4u;
    /* 004b2aff: jmp 0x4b2a91 */ goto L_004b2a91;
L_004b2b01:; BB(0x004b2b01);
    /* 004b2b01: mov eax, dword ptr [esi + 0x6d4] */ r_eax = R32((u32)(r_esi+0x6d4u));
    /* 004b2b07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b2b0a: jne 0x4b2aec */ if (!fZ) goto L_004b2aec;
L_004b2b0c:; BB(0x004b2b0c);
    /* 004b2b0c: mov eax, 1 */ r_eax = 0x1u;
    /* 004b2b11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b2b12: ret  */ FN_RET(0x004b2a24); r_esp += 4; return;
}

void f_004b2b14(void) /* sub_4B2B14 */
{
    FN_ENTER(0x004b2b14);
    /* 004b2b14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b2b15: mov edi, ecx */ r_edi = r_ecx;
    /* 004b2b17: lea ecx, [edi + 0x678] */ r_ecx = (u32)(r_edi+0x678u);
    /* 004b2b1d: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2b22u); f_0042cdc0();
    /* 004b2b22: lea ecx, [edi + 0x658] */ r_ecx = (u32)(r_edi+0x658u);
    /* 004b2b28: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2b2du); f_0042cdc0();
    /* 004b2b2d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2b30: jne 0x4b2b3c */ if (!fZ) goto L_004b2b3c;
L_004b2b32:; BB(0x004b2b32);
    /* 004b2b32: mov dword ptr [edi + 0x6d4], 1 */ W32((u32)(r_edi+0x6d4u), 0x1u);
L_004b2b3c:; BB(0x004b2b3c);
    /* 004b2b3c: mov edx, dword ptr [edi + 0x6d0] */ r_edx = R32((u32)(r_edi+0x6d0u));
    /* 004b2b42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2b44: jne 0x4b2b68 */ if (!fZ) goto L_004b2b68;
L_004b2b46:; BB(0x004b2b46);
    /* 004b2b46: fld dword ptr [edi + 0x690] */ FPUSH(R_F32((u32)(r_edi+0x690u)));
    /* 004b2b4c: fcomp dword ptr [0x906ef4] */ fx_compare(ST(0), R_F32((u32)(0x906ef4u))); FPOP();
    /* 004b2b52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2b54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2b55: jbe 0x4b2b83 */ if ((fC||fZ)) goto L_004b2b83;
L_004b2b57:; BB(0x004b2b57);
    /* 004b2b57: mov dword ptr [edi + 0x6d0], 1 */ W32((u32)(r_edi+0x6d0u), 0x1u);
    /* 004b2b61: mov edx, 1 */ r_edx = 0x1u;
    /* 004b2b66: jmp 0x4b2b83 */ goto L_004b2b83;
L_004b2b68:; BB(0x004b2b68);
    /* 004b2b68: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2b6b: jne 0x4b2b83 */ if (!fZ) goto L_004b2b83;
L_004b2b6d:; BB(0x004b2b6d);
    /* 004b2b6d: lea ecx, [edi + 0x638] */ r_ecx = (u32)(r_edi+0x638u);
    /* 004b2b73: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2b78u); f_0042cdc0();
    /* 004b2b78: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2b7b: je 0x4b2baf */ if (fZ) goto L_004b2baf;
L_004b2b7d:; BB(0x004b2b7d);
    /* 004b2b7d: mov edx, dword ptr [edi + 0x6d0] */ r_edx = R32((u32)(r_edi+0x6d0u));
L_004b2b83:; BB(0x004b2b83);
    /* 004b2b83: fld dword ptr [0x906f0c] */ FPUSH(R_F32((u32)(0x906f0cu)));
    /* 004b2b89: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 004b2b8f: fld dword ptr [0x906f08] */ FPUSH(R_F32((u32)(0x906f08u)));
    /* 004b2b95: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b2b97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2b99: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2b9a: ja 0x4b2b9e */ if ((!fC&&!fZ)) goto L_004b2b9e;
L_004b2b9c:; BB(0x004b2b9c);
    /* 004b2b9c: fst st(1) */ ST(1) = ST(0);
L_004b2b9e:; BB(0x004b2b9e);
    /* 004b2b9e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b2ba0: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 004b2ba6: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2ba9: je 0x4b2bc0 */ if (fZ) goto L_004b2bc0;
L_004b2bab:; BB(0x004b2bab);
    /* 004b2bab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b2bad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b2bae: ret  */ FN_RET(0x004b2b14); r_esp += 4; return;
L_004b2baf:; BB(0x004b2baf);
    /* 004b2baf: mov dword ptr [edi + 0x6d0], 2 */ W32((u32)(r_edi+0x6d0u), 0x2u);
    /* 004b2bb9: mov edx, 2 */ r_edx = 0x2u;
    /* 004b2bbe: jmp 0x4b2b83 */ goto L_004b2b83;
L_004b2bc0:; BB(0x004b2bc0);
    /* 004b2bc0: mov eax, dword ptr [edi + 0x6d4] */ r_eax = R32((u32)(r_edi+0x6d4u));
    /* 004b2bc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b2bc9: jne 0x4b2bab */ if (!fZ) goto L_004b2bab;
L_004b2bcb:; BB(0x004b2bcb);
    /* 004b2bcb: mov eax, 1 */ r_eax = 0x1u;
    /* 004b2bd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004b2bd1: ret  */ FN_RET(0x004b2b14); r_esp += 4; return;
}

void f_004b2bd4(void) /* sub_4B2BD4 */
{
    FN_ENTER(0x004b2bd4);
    /* 004b2bd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b2bd5: mov esi, ecx */ r_esi = r_ecx;
    /* 004b2bd7: lea ecx, [esi + 0x638] */ r_ecx = (u32)(r_esi+0x638u);
    /* 004b2bdd: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2be2u); f_0042cdc0();
    /* 004b2be2: lea ecx, [esi + 0x658] */ r_ecx = (u32)(r_esi+0x658u);
    /* 004b2be8: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2bedu); f_0042cdc0();
    /* 004b2bed: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2bf0: jne 0x4b2bfc */ if (!fZ) goto L_004b2bfc;
L_004b2bf2:; BB(0x004b2bf2);
    /* 004b2bf2: mov dword ptr [esi + 0x6d4], 1 */ W32((u32)(r_esi+0x6d4u), 0x1u);
L_004b2bfc:; BB(0x004b2bfc);
    /* 004b2bfc: mov edx, dword ptr [esi + 0x6d8] */ r_edx = R32((u32)(r_esi+0x6d8u));
    /* 004b2c02: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2c05: jne 0x4b2c64 */ if (!fZ) goto L_004b2c64;
L_004b2c07:; BB(0x004b2c07);
    /* 004b2c07: fld dword ptr [0x906eec] */ FPUSH(R_F32((u32)(0x906eecu)));
    /* 004b2c0d: fld dword ptr [esi + 0x688] */ FPUSH(R_F32((u32)(r_esi+0x688u)));
    /* 004b2c13: fsub dword ptr [0x906ef0] */ ST(0) = ST(0) - R_F32((u32)(0x906ef0u));
    /* 004b2c19: fld dword ptr [esi + 0x690] */ FPUSH(R_F32((u32)(r_esi+0x690u)));
    /* 004b2c1f: fld dword ptr [esi + 0x650] */ FPUSH(R_F32((u32)(r_esi+0x650u)));
    /* 004b2c25: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b2c27: fchs  */ ST(0) = -ST(0);
    /* 004b2c29: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004b2c2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2c2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2c2e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b2c30: fcomp dword ptr [0x906ee8] */ fx_compare(ST(0), R_F32((u32)(0x906ee8u))); FPOP();
    /* 004b2c36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2c38: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b2c3a: ja 0x4b2c3e */ if ((!fC&&!fZ)) goto L_004b2c3e;
L_004b2c3c:; BB(0x004b2c3c);
    /* 004b2c3c: fst st(2) */ ST(2) = ST(0);
L_004b2c3e:; BB(0x004b2c3e);
    /* 004b2c3e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b2c40: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b2c42: fst dword ptr [esi + 0x688] */ W_F32((u32)(r_esi+0x688u), ST(0));
    /* 004b2c48: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b2c4a: fstp dword ptr [esi + 0x690] */ W_F32((u32)(r_esi+0x690u), ST(0)); FPOP();
    /* 004b2c50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2c51: jbe 0x4b2c7f */ if ((fC||fZ)) goto L_004b2c7f;
L_004b2c53:; BB(0x004b2c53);
    /* 004b2c53: mov dword ptr [esi + 0x6d8], 3 */ W32((u32)(r_esi+0x6d8u), 0x3u);
    /* 004b2c5d: mov edx, 3 */ r_edx = 0x3u;
    /* 004b2c62: jmp 0x4b2c7f */ goto L_004b2c7f;
L_004b2c64:; BB(0x004b2c64);
    /* 004b2c64: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2c67: jne 0x4b2c7f */ if (!fZ) goto L_004b2c7f;
L_004b2c69:; BB(0x004b2c69);
    /* 004b2c69: lea ecx, [esi + 0x678] */ r_ecx = (u32)(r_esi+0x678u);
    /* 004b2c6f: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b2c74u); f_0042cdc0();
    /* 004b2c74: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2c77: je 0x4b2cab */ if (fZ) goto L_004b2cab;
L_004b2c79:; BB(0x004b2c79);
    /* 004b2c79: mov edx, dword ptr [esi + 0x6d8] */ r_edx = R32((u32)(r_esi+0x6d8u));
L_004b2c7f:; BB(0x004b2c7f);
    /* 004b2c7f: fld dword ptr [0x906f0c] */ FPUSH(R_F32((u32)(0x906f0cu)));
    /* 004b2c85: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 004b2c8b: fld dword ptr [0x906f08] */ FPUSH(R_F32((u32)(0x906f08u)));
    /* 004b2c91: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004b2c93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2c95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2c96: ja 0x4b2c9a */ if ((!fC&&!fZ)) goto L_004b2c9a;
L_004b2c98:; BB(0x004b2c98);
    /* 004b2c98: fst st(1) */ ST(1) = ST(0);
L_004b2c9a:; BB(0x004b2c9a);
    /* 004b2c9a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b2c9c: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 004b2ca2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2ca5: je 0x4b2cbc */ if (fZ) goto L_004b2cbc;
L_004b2ca7:; BB(0x004b2ca7);
    /* 004b2ca7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b2ca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b2caa: ret  */ FN_RET(0x004b2bd4); r_esp += 4; return;
L_004b2cab:; BB(0x004b2cab);
    /* 004b2cab: mov dword ptr [esi + 0x6d8], 4 */ W32((u32)(r_esi+0x6d8u), 0x4u);
    /* 004b2cb5: mov edx, 4 */ r_edx = 0x4u;
    /* 004b2cba: jmp 0x4b2c7f */ goto L_004b2c7f;
L_004b2cbc:; BB(0x004b2cbc);
    /* 004b2cbc: mov eax, dword ptr [esi + 0x6d4] */ r_eax = R32((u32)(r_esi+0x6d4u));
    /* 004b2cc2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b2cc5: jne 0x4b2ca7 */ if (!fZ) goto L_004b2ca7;
L_004b2cc7:; BB(0x004b2cc7);
    /* 004b2cc7: mov eax, 1 */ r_eax = 0x1u;
    /* 004b2ccc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b2ccd: ret  */ FN_RET(0x004b2bd4); r_esp += 4; return;
}

void f_004b2cd0(void) /* sub_4B2CD0 */
{
    FN_ENTER(0x004b2cd0);
    /* 004b2cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2cd1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b2cd4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004b2cd6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004b2cda: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2cdd: je 0x4b2f4e */ if (fZ) goto L_004b2f4e;
L_004b2ce3:; BB(0x004b2ce3);
    /* 004b2ce3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2ce6: je 0x4b2efe */ if (fZ) goto L_004b2efe;
L_004b2cec:; BB(0x004b2cec);
    /* 004b2cec: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2cef: je 0x4b2dad */ if (fZ) goto L_004b2dad;
L_004b2cf5:; BB(0x004b2cf5);
    /* 004b2cf5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2cf8: je 0x4b2da6 */ if (fZ) goto L_004b2da6;
L_004b2cfe:; BB(0x004b2cfe);
    /* 004b2cfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2d00: jne 0x4b2da6 */ if (!fZ) goto L_004b2da6;
L_004b2d06:; BB(0x004b2d06);
    /* 004b2d06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2d08: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b2d0du); f_007aa094();
    /* 004b2d0d: mov eax, dword ptr [ebp + 0x734] */ r_eax = R32((u32)(r_ebp+0x734u));
    /* 004b2d13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2d15: jne 0x4b2d44 */ if (!fZ) goto L_004b2d44;
L_004b2d17:; BB(0x004b2d17);
    /* 004b2d17: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 004b2d1d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b2d1f: jne 0x4b2da6 */ if (!fZ) goto L_004b2da6;
L_004b2d25:; BB(0x004b2d25);
    /* 004b2d25: push dword ptr [ebp + 0x70c] */ { u32 v = R32((u32)(r_ebp+0x70cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b2d2b: push dword ptr [ebp + 0x730] */ { u32 v = R32((u32)(r_ebp+0x730u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b2d31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2d33: call 0x4b2ff0 */ r_esp -= 4; W32(r_esp, 0x4b2d38u); f_004b2ff0();
    /* 004b2d38: mov dword ptr [ebp + 0x734], 1 */ W32((u32)(r_ebp+0x734u), 0x1u);
    /* 004b2d42: jmp 0x4b2da6 */ goto L_004b2da6;
L_004b2d44:; BB(0x004b2d44);
    /* 004b2d44: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2d47: jne 0x4b2da6 */ if (!fZ) goto L_004b2da6;
L_004b2d49:; BB(0x004b2d49);
    /* 004b2d49: mov edx, dword ptr [ebp + 0x730] */ r_edx = R32((u32)(r_ebp+0x730u));
    /* 004b2d4f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004b2d52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b2d54: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004b2d57: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b2d59: fld dword ptr [ecx + ebp + 0x53c] */ FPUSH(R_F32((u32)(r_ecx+r_ebp+0x53cu)));
    /* 004b2d60: fcomp dword ptr [ecx + ebp + 0x548] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_ebp+0x548u))); FPOP();
    /* 004b2d67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2d69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2d6a: jae 0x4b2da6 */ if (!fC) goto L_004b2da6;
L_004b2d6c:; BB(0x004b2d6c);
    /* 004b2d6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b2d6f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004b2d73: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004b2d77: fcomp dword ptr [0x906ee4] */ fx_compare(ST(0), R_F32((u32)(0x906ee4u))); FPOP();
    /* 004b2d7d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2d7f: mov dword ptr [ebp + 0x730], edx */ W32((u32)(r_ebp+0x730u), r_edx);
    /* 004b2d85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2d86: jb 0x4b2d98 */ if (fC) goto L_004b2d98;
L_004b2d88:; BB(0x004b2d88);
    /* 004b2d88: mov edx, dword ptr [ebp + 0x730] */ r_edx = R32((u32)(r_ebp+0x730u));
    /* 004b2d8e: mov dword ptr [ebp + 0x734], 2 */ W32((u32)(r_ebp+0x734u), 0x2u);
L_004b2d98:; BB(0x004b2d98);
    /* 004b2d98: push dword ptr [ebp + 0x70c] */ { u32 v = R32((u32)(r_ebp+0x70cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b2d9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b2d9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2da1: call 0x4b2ff0 */ r_esp -= 4; W32(r_esp, 0x4b2da6u); f_004b2ff0();
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2cd0); r_esp += 12; return;
L_004b2dad:; BB(0x004b2dad);
    /* 004b2dad: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 004b2db3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b2db5: je 0x4b2da6 */ if (fZ) goto L_004b2da6;
L_004b2db7:; BB(0x004b2db7);
    /* 004b2db7: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b2dbd: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b2dc4: mov eax, dword ptr [ebp + 0x6bc] */ r_eax = R32((u32)(r_ebp+0x6bcu));
    /* 004b2dca: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b2dcd: mov dword ptr [ebp + 0x6bc], ecx */ W32((u32)(r_ebp+0x6bcu), r_ecx);
    /* 004b2dd3: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b2dd7: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b2dda: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b2ddd: ja 0x4b2ef1 */ if ((!fC&&!fZ)) goto L_004b2ef1;
L_004b2de3:; BB(0x004b2de3);
    /* 004b2de3: mov ecx, dword ptr [ecx*4 + 0x9050c0] */ r_ecx = R32((u32)(r_ecx*4+0x9050c0u));
    /* 004b2dea: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
L_004b2efe:; BB(0x004b2efe);
    /* 004b2efe: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 004b2f04: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b2f06: je 0x4b2da6 */ if (fZ) goto L_004b2da6;
L_004b2f0c:; BB(0x004b2f0c);
    /* 004b2f0c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2f0e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b2f10: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004b2f13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2f15: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b2f1bu); call_ind(t); }
    /* 004b2f1b: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004b2f1f: mov ebp, dword ptr [ebp + 0x6bc] */ r_ebp = R32((u32)(r_ebp+0x6bcu));
    /* 004b2f25: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b2f29: mov edx, 2 */ r_edx = 0x2u;
    /* 004b2f2e: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 004b2f32: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b2f37: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004b2f3c: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 004b2f41: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b2f44: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b2f49u); f_008003e0();
    /* 004b2f49: jmp 0x4b2da6 */ goto L_004b2da6;
L_004b2f4e:; BB(0x004b2f4e);
    /* 004b2f4e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004b2f51: mov eax, 3 */ r_eax = 0x3u;
    /* 004b2f56: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004b2f5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2f5f: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b2f65u); call_ind(t); }
    /* 004b2f65: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 004b2f69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b2f6b: mov ebx, eax */ r_ebx = r_eax;
L_004b2f6d:; BB(0x004b2f6d);
    /* 004b2f6d: mov ecx, dword ptr [ebp + ebx*4 + 0x600] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0x600u));
    /* 004b2f74: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b2f76: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b2f7cu); call_ind(t); }
    /* 004b2f7c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b2f7f: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2f82: jl 0x4b2f6d */ if ((fS!=fO)) goto L_004b2f6d;
L_004b2f84:; BB(0x004b2f84);
    /* 004b2f84: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004b2f88: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004b2f8c: mov eax, dword ptr [ebp + 0x630] */ r_eax = R32((u32)(r_ebp+0x630u));
    /* 004b2f92: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b2f97: mov dword ptr [ebp + 0x630], eax */ W32((u32)(r_ebp+0x630u), r_eax);
    /* 004b2f9d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004b2fa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2fa2: mov dword ptr [ebp + 0x6c8], edx */ W32((u32)(r_ebp+0x6c8u), r_edx);
    /* 004b2fa8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2faa: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b2fafu); f_004b1e58();
    /* 004b2faf: mov dword ptr [ebp + 0x74c], 0xc47a0000 */ W32((u32)(r_ebp+0x74cu), 0xc47a0000u);
    /* 004b2fb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b2fbb: mov dword ptr [ebp + 0x730], eax */ W32((u32)(r_ebp+0x730u), r_eax);
    /* 004b2fc1: mov dword ptr [ebp + 0x734], eax */ W32((u32)(r_ebp+0x734u), r_eax);
    /* 004b2fc7: mov eax, dword ptr [ebp + 0x70c] */ r_eax = R32((u32)(r_ebp+0x70cu));
    /* 004b2fcd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b2fd0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b2fd3: jge 0x4b2fe0 */ if ((fS==fO)) goto L_004b2fe0;
L_004b2fd5:; BB(0x004b2fd5);
    /* 004b2fd5: mov dword ptr [ebp + 0x70c], eax */ W32((u32)(r_ebp+0x70cu), r_eax);
    /* 004b2fdb: jmp 0x4b2da6 */ goto L_004b2da6;
L_004b2fe0:; BB(0x004b2fe0);
    /* 004b2fe0: mov dword ptr [ebp + 0x70c], 0 */ W32((u32)(r_ebp+0x70cu), 0x0u);
    /* 004b2fea: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2dec(void)
{
    FN_ENTER(0x004b2dec);
    goto L_004b2dec;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2dec); r_esp += 12; return;
L_004b2dca:; BB(0x004b2dca);
    /* 004b2dca: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b2dcd: mov dword ptr [ebp + 0x6bc], ecx */ W32((u32)(r_ebp+0x6bcu), r_ecx);
    /* 004b2dd3: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b2dd7: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b2dda: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b2ddd: ja 0x4b2ef1 */ if ((!fC&&!fZ)) goto L_004b2ef1;
L_004b2de3:; BB(0x004b2de3);
    /* 004b2de3: mov ecx, dword ptr [ecx*4 + 0x9050c0] */ r_ecx = R32((u32)(r_ecx*4+0x9050c0u));
    /* 004b2dea: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b2dec:; BB(0x004b2dec);
    /* 004b2dec: mov eax, 1 */ r_eax = 0x1u;
    /* 004b2df1: jmp 0x4b2dca */ goto L_004b2dca;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2df3(void)
{
    FN_ENTER(0x004b2df3);
    goto L_004b2df3;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2df3); r_esp += 12; return;
L_004b2df3:; BB(0x004b2df3);
    /* 004b2df3: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b2df9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2dfb: jne 0x4b2e07 */ if (!fZ) goto L_004b2e07;
L_004b2dfd:; BB(0x004b2dfd);
    /* 004b2dfd: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b2e02: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2e07:; BB(0x004b2e07);
    /* 004b2e07: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b2e0c: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2e11(void)
{
    FN_ENTER(0x004b2e11);
    goto L_004b2e11;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2e11); r_esp += 12; return;
L_004b2e11:; BB(0x004b2e11);
    /* 004b2e11: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b2e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2e19: jne 0x4b2e25 */ if (!fZ) goto L_004b2e25;
L_004b2e1b:; BB(0x004b2e1b);
    /* 004b2e1b: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b2e20: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2e25:; BB(0x004b2e25);
    /* 004b2e25: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b2e2a: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2e2f(void)
{
    FN_ENTER(0x004b2e2f);
    goto L_004b2e2f;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2e2f); r_esp += 12; return;
L_004b2e2f:; BB(0x004b2e2f);
    /* 004b2e2f: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b2e35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2e37: jne 0x4b2e43 */ if (!fZ) goto L_004b2e43;
L_004b2e39:; BB(0x004b2e39);
    /* 004b2e39: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b2e3e: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2e43:; BB(0x004b2e43);
    /* 004b2e43: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b2e48: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2e4d(void)
{
    FN_ENTER(0x004b2e4d);
    goto L_004b2e4d;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2e4d); r_esp += 12; return;
L_004b2e4d:; BB(0x004b2e4d);
    /* 004b2e4d: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b2e53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2e55: jne 0x4b2e61 */ if (!fZ) goto L_004b2e61;
L_004b2e57:; BB(0x004b2e57);
    /* 004b2e57: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b2e5c: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2e61:; BB(0x004b2e61);
    /* 004b2e61: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b2e66: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2e6b(void)
{
    FN_ENTER(0x004b2e6b);
    goto L_004b2e6b;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2e6b); r_esp += 12; return;
L_004b2e6b:; BB(0x004b2e6b);
    /* 004b2e6b: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b2e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2e73: jne 0x4b2e7c */ if (!fZ) goto L_004b2e7c;
L_004b2e75:; BB(0x004b2e75);
    /* 004b2e75: mov eax, 4 */ r_eax = 0x4u;
    /* 004b2e7a: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2e7c:; BB(0x004b2e7c);
    /* 004b2e7c: mov eax, 0xa */ r_eax = 0xau;
    /* 004b2e81: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2e83(void)
{
    FN_ENTER(0x004b2e83);
    goto L_004b2e83;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2e83); r_esp += 12; return;
L_004b2e83:; BB(0x004b2e83);
    /* 004b2e83: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b2e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2e8b: jne 0x4b2e94 */ if (!fZ) goto L_004b2e94;
L_004b2e8d:; BB(0x004b2e8d);
    /* 004b2e8d: mov eax, 3 */ r_eax = 0x3u;
    /* 004b2e92: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2e94:; BB(0x004b2e94);
    /* 004b2e94: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b2e99: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2e9b(void)
{
    FN_ENTER(0x004b2e9b);
    goto L_004b2e9b;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2e9b); r_esp += 12; return;
L_004b2e9b:; BB(0x004b2e9b);
    /* 004b2e9b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2e9d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b2ea2u); f_00520bf4();
    /* 004b2ea2: fcomp dword ptr [0x906ee0] */ fx_compare(ST(0), R_F32((u32)(0x906ee0u))); FPOP();
    /* 004b2ea8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2eaa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2eab: jbe 0x4b2eb4 */ if ((fC||fZ)) goto L_004b2eb4;
L_004b2ead:; BB(0x004b2ead);
    /* 004b2ead: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b2eb2: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2eb4:; BB(0x004b2eb4);
    /* 004b2eb4: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b2eb9: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2ebb(void)
{
    FN_ENTER(0x004b2ebb);
    goto L_004b2ebb;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2ebb); r_esp += 12; return;
L_004b2ebb:; BB(0x004b2ebb);
    /* 004b2ebb: mov eax, dword ptr [ebp + 0x6cc] */ r_eax = R32((u32)(r_ebp+0x6ccu));
    /* 004b2ec1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b2ec3: jne 0x4b2ecc */ if (!fZ) goto L_004b2ecc;
L_004b2ec5:; BB(0x004b2ec5);
    /* 004b2ec5: mov eax, 5 */ r_eax = 0x5u;
    /* 004b2eca: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ecc:; BB(0x004b2ecc);
    /* 004b2ecc: mov eax, 9 */ r_eax = 0x9u;
    /* 004b2ed1: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2ed3(void)
{
    FN_ENTER(0x004b2ed3);
    goto L_004b2ed3;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2ed3); r_esp += 12; return;
L_004b2ed3:; BB(0x004b2ed3);
    /* 004b2ed3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ed5: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b2edau); f_00520bf4();
    /* 004b2eda: fcomp dword ptr [0x906ee0] */ fx_compare(ST(0), R_F32((u32)(0x906ee0u))); FPOP();
    /* 004b2ee0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b2ee2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b2ee3: jbe 0x4b2eec */ if ((fC||fZ)) goto L_004b2eec;
L_004b2ee5:; BB(0x004b2ee5);
    /* 004b2ee5: mov eax, 8 */ r_eax = 0x8u;
    /* 004b2eea: jmp 0x4b2ef1 */ goto L_004b2ef1;
L_004b2eec:; BB(0x004b2eec);
    /* 004b2eec: mov eax, 6 */ r_eax = 0x6u;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2ef1(void)
{
    FN_ENTER(0x004b2ef1);
    goto L_004b2ef1;
L_004b2da6:; BB(0x004b2da6);
    /* 004b2da6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b2da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b2daa: ret 8 */ FN_RET(0x004b2ef1); r_esp += 12; return;
L_004b2ef1:; BB(0x004b2ef1);
    /* 004b2ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004b2ef4: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b2ef9u); f_004b5150();
    /* 004b2ef9: jmp 0x4b2da6 */ goto L_004b2da6;
}

void f_004b2ff0(void) /* sub_4B2FF0 */
{
    FN_ENTER(0x004b2ff0);
    /* 004b2ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b2ff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ff5: push 0x8d0d4c */ { u32 v = 0x8d0d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b2ffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b3000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b3001: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b3008: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b300b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b300e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004b3011: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004b3014: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004b3017: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b301a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b301d: imul ebx, eax, -0x33 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffcdu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b3020: add ebx, 0x3800 */ {  u32 a = r_ebx; u32 b = 0x3800u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b3026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b3028: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4b302du); f_0082dcbc();
    /* 004b302d: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004b3030: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004b3037: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b3039: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4b303eu); f_0082ddd8();
    /* 004b303e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3041: mov edx, dword ptr [eax + 0x6c8] */ r_edx = R32((u32)(r_eax+0x6c8u));
    /* 004b3047: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004b304a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b304d: jne 0x4b3057 */ if (!fZ) goto L_004b3057;
L_004b304f:; BB(0x004b304f);
    /* 004b304f: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004b3052: fchs  */ ST(0) = -ST(0);
    /* 004b3054: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
L_004b3057:; BB(0x004b3057);
    /* 004b3057: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004b305e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004b3060: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b3065u); f_005caba4();
    /* 004b3065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b3066: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b3069: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b306b: je 0x4b30e2 */ if (fZ) goto L_004b30e2;
L_004b306d:; BB(0x004b306d);
    /* 004b306d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004b3074: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b307b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004b307e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b3081: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004b3084: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b3086: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b3089: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b308c: lea esi, [ebp - 0x34] */ r_esi = (u32)(r_ebp+0xffffffccu);
    /* 004b308f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b3090: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004b3093: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b3095: lea ebx, [edi + ebx + 0x538] */ r_ebx = (u32)(r_edi+r_ebx+0x538u);
    /* 004b309c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b309d: add edi, 0x698 */ {  u32 a = r_edi; u32 b = 0x698u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004b30a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b30a4: call 0x4bb15c */ r_esp -= 4; W32(r_esp, 0x4b30a9u); f_004bb15c();
    /* 004b30a9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004b30b0:; BB(0x004b30b0);
    /* 004b30b0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b30b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b30b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b30bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b30bc: push 0x3f8 */ { u32 v = 0x3f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b30c1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b30c6u); f_00814298();
    /* 004b30c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b30c9: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b30cc: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b30cf: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b30d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b30d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b30dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004b30de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b30df: ret 8 */ FN_RET(0x004b2ff0); r_esp += 12; return;
L_004b30e2:; BB(0x004b30e2);
    /* 004b30e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004b30e5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b30e8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004b30eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b30ed: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004b30f0: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b30f2: lea ebx, [ecx + ebx + 0x538] */ r_ebx = (u32)(r_ecx+r_ebx+0x538u);
    /* 004b30f9: jmp 0x4b30b0 */ goto L_004b30b0;
}

