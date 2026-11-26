#include "protos.h"

void f_0042d017(void)
{
    FN_ENTER(0x0042d017);
    goto L_0042d017;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d017); r_esp += 12; return;
L_0042d017:; BB(0x0042d017);
    /* 0042d017: mov eax, dword ptr [ebp + 0x660] */ r_eax = R32((u32)(r_ebp+0x660u));
    /* 0042d01d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d01f: jne 0x42d02b */ if (!fZ) goto L_0042d02b;
L_0042d021:; BB(0x0042d021);
    /* 0042d021: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042d026: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d02b:; BB(0x0042d02b);
    /* 0042d02b: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042d030: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d035(void)
{
    FN_ENTER(0x0042d035);
    goto L_0042d035;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d035); r_esp += 12; return;
L_0042d035:; BB(0x0042d035);
    /* 0042d035: mov eax, dword ptr [ebp + 0x660] */ r_eax = R32((u32)(r_ebp+0x660u));
    /* 0042d03b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d03d: jne 0x42d049 */ if (!fZ) goto L_0042d049;
L_0042d03f:; BB(0x0042d03f);
    /* 0042d03f: mov eax, 4 */ r_eax = 0x4u;
    /* 0042d044: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d049:; BB(0x0042d049);
    /* 0042d049: mov eax, 0xa */ r_eax = 0xau;
    /* 0042d04e: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d053(void)
{
    FN_ENTER(0x0042d053);
    goto L_0042d053;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d053); r_esp += 12; return;
L_0042d053:; BB(0x0042d053);
    /* 0042d053: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d055: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42d05au); f_00520bf4();
    /* 0042d05a: fcomp dword ptr [0x8fd034] */ fx_compare(ST(0), R_F32((u32)(0x8fd034u))); FPOP();
    /* 0042d060: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d062: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d063: jbe 0x42d06c */ if ((fC||fZ)) goto L_0042d06c;
L_0042d065:; BB(0x0042d065);
    /* 0042d065: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042d06a: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d06c:; BB(0x0042d06c);
    /* 0042d06c: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042d071: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d073(void)
{
    FN_ENTER(0x0042d073);
    goto L_0042d073;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d073); r_esp += 12; return;
L_0042d073:; BB(0x0042d073);
    /* 0042d073: mov eax, dword ptr [ebp + 0x660] */ r_eax = R32((u32)(r_ebp+0x660u));
    /* 0042d079: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d07b: jne 0x42d084 */ if (!fZ) goto L_0042d084;
L_0042d07d:; BB(0x0042d07d);
    /* 0042d07d: mov eax, 3 */ r_eax = 0x3u;
    /* 0042d082: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d084:; BB(0x0042d084);
    /* 0042d084: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042d089: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d08b(void)
{
    FN_ENTER(0x0042d08b);
    goto L_0042d08b;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d08b); r_esp += 12; return;
L_0042d08b:; BB(0x0042d08b);
    /* 0042d08b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d08d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42d092u); f_00520bf4();
    /* 0042d092: fcomp dword ptr [0x8fd034] */ fx_compare(ST(0), R_F32((u32)(0x8fd034u))); FPOP();
    /* 0042d098: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d09a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d09b: jbe 0x42d0a4 */ if ((fC||fZ)) goto L_0042d0a4;
L_0042d09d:; BB(0x0042d09d);
    /* 0042d09d: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042d0a2: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0a4:; BB(0x0042d0a4);
    /* 0042d0a4: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042d0a9: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d0ab(void)
{
    FN_ENTER(0x0042d0ab);
    goto L_0042d0ab;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d0ab); r_esp += 12; return;
L_0042d0ab:; BB(0x0042d0ab);
    /* 0042d0ab: mov eax, dword ptr [ebp + 0x660] */ r_eax = R32((u32)(r_ebp+0x660u));
    /* 0042d0b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d0b3: jne 0x42d0bc */ if (!fZ) goto L_0042d0bc;
L_0042d0b5:; BB(0x0042d0b5);
    /* 0042d0b5: mov eax, 5 */ r_eax = 0x5u;
    /* 0042d0ba: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0bc:; BB(0x0042d0bc);
    /* 0042d0bc: mov eax, 9 */ r_eax = 0x9u;
    /* 0042d0c1: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d0c3(void)
{
    FN_ENTER(0x0042d0c3);
    goto L_0042d0c3;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d0c3); r_esp += 12; return;
L_0042d0c3:; BB(0x0042d0c3);
    /* 0042d0c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0c5: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42d0cau); f_00520bf4();
    /* 0042d0ca: fcomp dword ptr [0x8fd034] */ fx_compare(ST(0), R_F32((u32)(0x8fd034u))); FPOP();
    /* 0042d0d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d0d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d0d3: jbe 0x42d0dc */ if ((fC||fZ)) goto L_0042d0dc;
L_0042d0d5:; BB(0x0042d0d5);
    /* 0042d0d5: mov eax, 8 */ r_eax = 0x8u;
    /* 0042d0da: jmp 0x42d0e1 */ goto L_0042d0e1;
L_0042d0dc:; BB(0x0042d0dc);
    /* 0042d0dc: mov eax, 6 */ r_eax = 0x6u;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d0e1(void)
{
    FN_ENTER(0x0042d0e1);
    goto L_0042d0e1;
L_0042cf62:; BB(0x0042cf62);
    /* 0042cf62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042cf65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cf66: ret 8 */ FN_RET(0x0042d0e1); r_esp += 12; return;
L_0042d0e1:; BB(0x0042d0e1);
    /* 0042d0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042d0e4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42d0e9u); f_0042abf8();
    /* 0042d0e9: jmp 0x42cf62 */ goto L_0042cf62;
}

void f_0042d1e0(void) /* sub_42D1E0 */
{
    FN_ENTER(0x0042d1e0);
    /* 0042d1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d1e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d1e5: push 0x8cdda0 */ { u32 v = 0x8cdda0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d1ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042d1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d1f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042d1f8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d1fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0042d1fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0042d201: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0042d204: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0042d207: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042d20a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042d20d: imul ebx, eax, -0x33 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffcdu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042d210: add ebx, 0x3800 */ {  u32 a = r_ebx; u32 b = 0x3800u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042d216: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042d218: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x42d21du); f_0082dcbc();
    /* 0042d21d: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0042d220: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0042d227: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042d229: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x42d22eu); f_0082ddd8();
    /* 0042d22e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d231: mov edx, dword ptr [eax + 0x65c] */ r_edx = R32((u32)(r_eax+0x65cu));
    /* 0042d237: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0042d23a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d23d: jne 0x42d247 */ if (!fZ) goto L_0042d247;
L_0042d23f:; BB(0x0042d23f);
    /* 0042d23f: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0042d242: fchs  */ ST(0) = -ST(0);
    /* 0042d244: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
L_0042d247:; BB(0x0042d247);
    /* 0042d247: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0042d24e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d250: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x42d255u); f_005caba4();
    /* 0042d255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042d256: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042d259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d25b: je 0x42d2e8 */ if (fZ) goto L_0042d2e8;
L_0042d261:; BB(0x0042d261);
    /* 0042d261: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0042d268: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042d26f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042d272: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0042d275: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0042d278: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d27a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d27d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042d280: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 0042d283: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042d284: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0042d287: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042d289: lea ebx, [esi + edx + 0x548] */ r_ebx = (u32)(r_esi+r_edx+0x548u);
    /* 0042d290: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d291: lea eax, [esi + 0x3e0] */ r_eax = (u32)(r_esi+0x3e0u);
    /* 0042d297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d298: call 0x437604 */ r_esp -= 4; W32(r_esp, 0x42d29du); f_00437604();
    /* 0042d29d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0042d2a4:; BB(0x0042d2a4);
    /* 0042d2a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042d2ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d2ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d2af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d2b0: push 0x32f */ { u32 v = 0x32fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d2b5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42d2bau); f_00814298();
    /* 0042d2ba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d2bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042d2c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d2c3: mov ecx, dword ptr [eax + edx*4 + 0x5e8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5e8u));
    /* 0042d2ca: call 0x435588 */ r_esp -= 4; W32(r_esp, 0x42d2cfu); f_00435588();
    /* 0042d2cf: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042d2d2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042d2d5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d2d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d2db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042d2e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d2e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d2e5: ret 8 */ FN_RET(0x0042d1e0); r_esp += 12; return;
L_0042d2e8:; BB(0x0042d2e8);
    /* 0042d2e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042d2eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d2ee: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0042d2f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042d2f3: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0042d2f6: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042d2f8: lea ebx, [ecx + ebx + 0x548] */ r_ebx = (u32)(r_ecx+r_ebx+0x548u);
    /* 0042d2ff: jmp 0x42d2a4 */ goto L_0042d2a4;
}

void f_0042d304(void) /* sub_42D304 */
{
    FN_ENTER(0x0042d304);
    /* 0042d304: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d305: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d308: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042d30a: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0042d30e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d311: je 0x42dc8f */ if (fZ) goto L_0042dc8f;
L_0042d317:; BB(0x0042d317);
    /* 0042d317: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d31a: je 0x42db35 */ if (fZ) goto L_0042db35;
L_0042d320:; BB(0x0042d320);
    /* 0042d320: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d323: je 0x42d9a5 */ if (fZ) goto L_0042d9a5;
L_0042d329:; BB(0x0042d329);
    /* 0042d329: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d32c: je 0x42d617 */ if (fZ) goto L_0042d617;
L_0042d332:; BB(0x0042d332);
    /* 0042d332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d334: je 0x42d381 */ if (fZ) goto L_0042d381;
L_0042d336:; BB(0x0042d336);
    /* 0042d336: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d339: je 0x42d617 */ if (fZ) goto L_0042d617;
L_0042d33f:; BB(0x0042d33f);
    /* 0042d33f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d342: jne 0x42d617 */ if (!fZ) goto L_0042d617;
L_0042d348:; BB(0x0042d348);
    /* 0042d348: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042d34e: mov edx, dword ptr [ebx + 0x744] */ r_edx = R32((u32)(r_ebx+0x744u));
    /* 0042d354: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042d357: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042d35d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d35f: je 0x42d617 */ if (fZ) goto L_0042d617;
L_0042d365:; BB(0x0042d365);
    /* 0042d365: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0042d369: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042d36e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042d372: mov dword ptr [ebx + 0x744], 0 */ W32((u32)(r_ebx+0x744u), 0x0u);
    /* 0042d37c: jmp 0x42d617 */ goto L_0042d617;
L_0042d381:; BB(0x0042d381);
    /* 0042d381: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042d383: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42d388u); f_007aa094();
    /* 0042d388: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042d38e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d390: je 0x42d8c3 */ if (fZ) goto L_0042d8c3;
L_0042d396:; BB(0x0042d396);
    /* 0042d396: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d399: je 0x42d8a6 */ if (fZ) goto L_0042d8a6;
L_0042d39f:; BB(0x0042d39f);
    /* 0042d39f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d3a2: je 0x42d82d */ if (fZ) goto L_0042d82d;
L_0042d3a8:; BB(0x0042d3a8);
    /* 0042d3a8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d3ab: je 0x42d79f */ if (fZ) goto L_0042d79f;
L_0042d3b1:; BB(0x0042d3b1);
    /* 0042d3b1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d3b4: je 0x42d43a */ if (fZ) goto L_0042d43a;
L_0042d3ba:; BB(0x0042d3ba);
    /* 0042d3ba: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d3bd: jne 0x42d4ab */ if (!fZ) goto L_0042d4ab;
L_0042d3c3:; BB(0x0042d3c3);
    /* 0042d3c3: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d3c9: fcomp dword ptr [0x8fd000] */ fx_compare(ST(0), R_F32((u32)(0x8fd000u))); FPOP();
    /* 0042d3cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d3d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d3d2: jb 0x42d4ab */ if (fC) goto L_0042d4ab;
L_0042d3d8:; BB(0x0042d3d8);
    /* 0042d3d8: mov dword ptr [ebx + 0x6e8], 6 */ W32((u32)(r_ebx+0x6e8u), 0x6u);
    /* 0042d3e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d3e4: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x42d3e9u); f_004d4288();
    /* 0042d3e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042d3ea: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042d3f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d3f2: jne 0x42d3fb */ if (!fZ) goto L_0042d3fb;
L_0042d3f4:; BB(0x0042d3f4);
    /* 0042d3f4: call 0x43c41c */ r_esp -= 4; W32(r_esp, 0x42d3f9u); f_0043c41c();
    /* 0042d3f9: jmp 0x42d400 */ goto L_0042d400;
L_0042d3fb:; BB(0x0042d3fb);
    /* 0042d3fb: call 0x43c434 */ r_esp -= 4; W32(r_esp, 0x42d400u); f_0043c434();
L_0042d400:; BB(0x0042d400);
    /* 0042d400: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 0042d406: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d40a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d40b: push 0x32e */ { u32 v = 0x32eu; r_esp -= 4; W32(r_esp, v); }
    /* 0042d410: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42d415u); f_00814298();
    /* 0042d415: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d418: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0042d41c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d41e: mov esi, eax */ r_esi = r_eax;
L_0042d420:; BB(0x0042d420);
    /* 0042d420: mov ecx, dword ptr [ebx + esi*4 + 0x628] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x628u));
    /* 0042d427: call 0x4393a8 */ r_esp -= 4; W32(r_esp, 0x42d42cu); f_004393a8();
    /* 0042d42c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042d42f: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d432: jl 0x42d420 */ if ((fS!=fO)) goto L_0042d420;
L_0042d434:; BB(0x0042d434);
    /* 0042d434: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0042d438: jmp 0x42d4ab */ goto L_0042d4ab;
L_0042d43a:; BB(0x0042d43a);
    /* 0042d43a: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d440: fcomp dword ptr [0x8fcffc] */ fx_compare(ST(0), R_F32((u32)(0x8fcffcu))); FPOP();
    /* 0042d446: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d448: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d449: jb 0x42d4ab */ if (fC) goto L_0042d4ab;
L_0042d44b:; BB(0x0042d44b);
    /* 0042d44b: fld dword ptr [0x8fcff8] */ FPUSH(R_F32((u32)(0x8fcff8u)));
    /* 0042d451: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042d457: fld dword ptr [0x8fcff4] */ FPUSH(R_F32((u32)(0x8fcff4u)));
    /* 0042d45d: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042d463: fld dword ptr [ebx + 0x704] */ FPUSH(R_F32((u32)(r_ebx+0x704u)));
    /* 0042d469: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042d46b: fst dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0));
    /* 0042d471: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0042d473: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d475: fchs  */ ST(0) = -ST(0);
    /* 0042d477: fmul dword ptr [0x8fd024] */ ST(0) = ST(0) * R_F32((u32)(0x8fd024u));
    /* 0042d47d: mov dword ptr [ebx + 0x6e8], 5 */ W32((u32)(r_ebx+0x6e8u), 0x5u);
    /* 0042d487: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0042d491: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d493: fdiv dword ptr [0xa43c4c] */ ST(0) = ST(0) / R_F32((u32)(0xa43c4cu));
    /* 0042d499: fstp dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0)); FPOP();
    /* 0042d49f: fdiv dword ptr [0xa43c4c] */ ST(0) = ST(0) / R_F32((u32)(0xa43c4cu));
    /* 0042d4a5: fstp dword ptr [ebx + 0x720] */ W_F32((u32)(r_ebx+0x720u), ST(0)); FPOP();
L_0042d4ab:; BB(0x0042d4ab);
    /* 0042d4ab: mov edx, dword ptr [ebx + 0x6f0] */ r_edx = R32((u32)(r_ebx+0x6f0u));
    /* 0042d4b1: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042d4b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042d4ba: mov dword ptr [ebx + 0x6f0], edx */ W32((u32)(r_ebx+0x6f0u), r_edx);
    /* 0042d4c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d4c2: je 0x42d613 */ if (fZ) goto L_0042d613;
L_0042d4c8:; BB(0x0042d4c8);
    /* 0042d4c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d4cb: je 0x42d613 */ if (fZ) goto L_0042d613;
L_0042d4d1:; BB(0x0042d4d1);
    /* 0042d4d1: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d4d7: fcom dword ptr [0x8fcfe0] */ fx_compare(ST(0), R_F32((u32)(0x8fcfe0u))); 
    /* 0042d4dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d4df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d4e0: jb 0x42d55f */ if (fC) goto L_0042d55f;
L_0042d4e2:; BB(0x0042d4e2);
    /* 0042d4e2: fcomp dword ptr [0x8fcfdc] */ fx_compare(ST(0), R_F32((u32)(0x8fcfdcu))); FPOP();
    /* 0042d4e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d4ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d4eb: ja 0x42d561 */ if ((!fC&&!fZ)) goto L_0042d561;
L_0042d4ed:; BB(0x0042d4ed);
    /* 0042d4ed: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d4f0: jl 0x42d561 */ if ((fS!=fO)) goto L_0042d561;
L_0042d4f2:; BB(0x0042d4f2);
    /* 0042d4f2: mov eax, dword ptr [ebx + 0x4f0] */ r_eax = R32((u32)(r_ebx+0x4f0u));
    /* 0042d4f8: mov edx, dword ptr [ebx + 0x4f4] */ r_edx = R32((u32)(r_ebx+0x4f4u));
    /* 0042d4fe: mov dword ptr [ebx + 0x6f0], 0 */ W32((u32)(r_ebx+0x6f0u), 0x0u);
    /* 0042d508: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042d50a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0042d50d: mov eax, dword ptr [ebx + 0x4f8] */ r_eax = R32((u32)(r_ebx+0x4f8u));
    /* 0042d513: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042d517: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0042d51b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42d520u); f_007751b0();
    /* 0042d520: fld dword ptr [0x8fd014] */ FPUSH(R_F32((u32)(0x8fd014u)));
    /* 0042d526: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042d528: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042d52e: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0042d531: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0042d535: fadd dword ptr [0x8fcfd8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcfd8u));
    /* 0042d53b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d53d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042d540: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0042d544: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 0042d54c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0042d54f: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d555: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x42d55au); f_0043aaec();
    /* 0042d55a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d55d: jmp 0x42d561 */ goto L_0042d561;
L_0042d55f:; BB(0x0042d55f);
    /* 0042d55f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0042d561:; BB(0x0042d561);
    /* 0042d561: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d566: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042d568: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42d56du); f_007aaa30();
    /* 0042d56d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d56f: je 0x42d589 */ if (fZ) goto L_0042d589;
L_0042d571:; BB(0x0042d571);
    /* 0042d571: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 0042d577: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d57a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d57b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d57c: push 0x338 */ { u32 v = 0x338u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d581: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42d586u); f_00814298();
    /* 0042d586: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042d589:; BB(0x0042d589);
    /* 0042d589: mov ecx, dword ptr [ebx + 0x744] */ r_ecx = R32((u32)(r_ebx+0x744u));
    /* 0042d58f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d591: je 0x42d638 */ if (fZ) goto L_0042d638;
L_0042d597:; BB(0x0042d597);
    /* 0042d597: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d59d: fcom dword ptr [0x8fcfd4] */ fx_compare(ST(0), R_F32((u32)(0x8fcfd4u))); 
    /* 0042d5a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d5a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d5a6: jb 0x42d606 */ if (fC) goto L_0042d606;
L_0042d5a8:; BB(0x0042d5a8);
    /* 0042d5a8: fcom dword ptr [0x8fcfd0] */ fx_compare(ST(0), R_F32((u32)(0x8fcfd0u))); 
    /* 0042d5ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d5b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d5b1: ja 0x42d606 */ if ((!fC&&!fZ)) goto L_0042d606;
L_0042d5b3:; BB(0x0042d5b3);
    /* 0042d5b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042d5b5: mov eax, dword ptr [ebx + 0x6f4] */ r_eax = R32((u32)(r_ebx+0x6f4u));
    /* 0042d5bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d5be: mov dword ptr [ebx + 0x6f4], eax */ W32((u32)(r_ebx+0x6f4u), r_eax);
    /* 0042d5c4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042d5c5: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d5c7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042d5c9: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042d5cc: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d5ce: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042d5d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d5d2: je 0x42d5ec */ if (fZ) goto L_0042d5ec;
L_0042d5d4:; BB(0x0042d5d4);
    /* 0042d5d4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d5d7: je 0x42d61e */ if (fZ) goto L_0042d61e;
L_0042d5d9:; BB(0x0042d5d9);
    /* 0042d5d9: mov ecx, dword ptr [ebx + 0x744] */ r_ecx = R32((u32)(r_ebx+0x744u));
    /* 0042d5df: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x42d5e4u); f_00508f48();
    /* 0042d5e4: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042d5ea: jmp 0x42d613 */ goto L_0042d613;
L_0042d5ec:; BB(0x0042d5ec);
    /* 0042d5ec: mov ecx, dword ptr [ebx + 0x744] */ r_ecx = R32((u32)(r_ebx+0x744u));
    /* 0042d5f2: lea eax, [ebx + 0x454] */ r_eax = (u32)(r_ebx+0x454u);
    /* 0042d5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d5f9: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x42d5feu); f_00508db8();
    /* 0042d5fe: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042d604: jmp 0x42d613 */ goto L_0042d613;
L_0042d606:; BB(0x0042d606);
    /* 0042d606: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042d608: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x42d60du); f_00508f48();
    /* 0042d60d: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
L_0042d613:; BB(0x0042d613);
    /* 0042d613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0042d615: jge 0x42d66a */ if ((fS==fO)) goto L_0042d66a;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042d304); r_esp += 12; return;
L_0042d61e:; BB(0x0042d61e);
    /* 0042d61e: mov ecx, dword ptr [ebx + 0x744] */ r_ecx = R32((u32)(r_ebx+0x744u));
    /* 0042d624: lea eax, [ebx + 0x460] */ r_eax = (u32)(r_ebx+0x460u);
    /* 0042d62a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d62b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x42d630u); f_00508db8();
    /* 0042d630: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042d636: jmp 0x42d613 */ goto L_0042d613;
L_0042d638:; BB(0x0042d638);
    /* 0042d638: push 0x161 */ { u32 v = 0x161u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d63d: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0042d640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d641: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x42d646u); f_00509590();
    /* 0042d646: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d649: mov dword ptr [ebx + 0x744], eax */ W32((u32)(r_ebx+0x744u), r_eax);
    /* 0042d64f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d651: je 0x42d662 */ if (fZ) goto L_0042d662;
L_0042d653:; BB(0x0042d653);
    /* 0042d653: mov ecx, eax */ r_ecx = r_eax;
    /* 0042d655: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x42d65au); f_00508f48();
    /* 0042d65a: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042d660: jmp 0x42d613 */ goto L_0042d613;
L_0042d662:; BB(0x0042d662);
    /* 0042d662: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042d668: jmp 0x42d613 */ goto L_0042d613;
L_0042d66a:; BB(0x0042d66a);
    /* 0042d66a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d66d: jle 0x42d76b */ if ((fZ||fS!=fO)) goto L_0042d76b;
L_0042d673:; BB(0x0042d673);
    /* 0042d673: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d676: je 0x42d930 */ if (fZ) goto L_0042d930;
L_0042d67c:; BB(0x0042d67c);
    /* 0042d67c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d67f: je 0x42d6f8 */ if (fZ) goto L_0042d6f8;
L_0042d681:; BB(0x0042d681);
    /* 0042d681: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d684: jne 0x42d617 */ if (!fZ) goto L_0042d617;
L_0042d686:; BB(0x0042d686);
    /* 0042d686: fld dword ptr [0x8fcffc] */ FPUSH(R_F32((u32)(0x8fcffcu)));
    /* 0042d68c: fld dword ptr [0x8fcff0] */ FPUSH(R_F32((u32)(0x8fcff0u)));
    /* 0042d692: fld dword ptr [0x8fd00c] */ FPUSH(R_F32((u32)(0x8fd00cu)));
    /* 0042d698: fmul dword ptr [ebx + 0x714] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x714u));
    /* 0042d69e: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d6a4: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0042d6a6: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0042d6a8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042d6aa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042d6ac: fadd dword ptr [ebx + 0x71c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x71cu));
    /* 0042d6b2: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 0042d6b8: fld dword ptr [ebx + 0x720] */ FPUSH(R_F32((u32)(r_ebx+0x720u)));
    /* 0042d6be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d6c0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0042d6c2: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 0042d6c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042d6ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042d6cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d6ce: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042d6d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d6d3: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042d6d6: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0042d6da: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 0042d6df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042d6e4: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0042d6e8: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0042d6ec: fistp dword ptr [ebx + 0x64] */ W32((u32)(r_ebx+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042d6ef: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0042d6f3: jmp 0x42d617 */ goto L_0042d617;
L_0042d6f8:; BB(0x0042d6f8);
    /* 0042d6f8: fld dword ptr [0x8fd00c] */ FPUSH(R_F32((u32)(0x8fd00cu)));
    /* 0042d6fe: fmul dword ptr [ebx + 0x714] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x714u));
    /* 0042d704: fld dword ptr [0xa43c5c] */ FPUSH(R_F32((u32)(0xa43c5cu)));
    /* 0042d70a: mov edx, dword ptr [0xa43c5c] */ r_edx = R32((u32)(0xa43c5cu));
    /* 0042d710: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d716: fsub dword ptr [0x8fcff0] */ ST(0) = ST(0) - R_F32((u32)(0x8fcff0u));
    /* 0042d71c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0042d71e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0042d720: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 0042d726: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042d728: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042d72a: fadd dword ptr [ebx + 0x71c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x71cu));
    /* 0042d730: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042d732: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 0042d738: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042d73a: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042d73d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042d73f: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042d742: fld dword ptr [0xa43c50] */ FPUSH(R_F32((u32)(0xa43c50u)));
    /* 0042d748: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042d74a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042d74c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0042d74e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d750: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d751: jae 0x42d760 */ if (!fC) goto L_0042d760;
L_0042d753:; BB(0x0042d753);
    /* 0042d753: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042d755: mov dword ptr [ebx + 0x6ac], edx */ W32((u32)(r_ebx+0x6acu), r_edx);
    /* 0042d75b: jmp 0x42d617 */ goto L_0042d617;
L_0042d760:; BB(0x0042d760);
    /* 0042d760: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 0042d766: jmp 0x42d617 */ goto L_0042d617;
L_0042d76b:; BB(0x0042d76b);
    /* 0042d76b: fld dword ptr [0x8fcfcc] */ FPUSH(R_F32((u32)(0x8fcfccu)));
    /* 0042d771: fld dword ptr [ebx + 0x718] */ FPUSH(R_F32((u32)(r_ebx+0x718u)));
    /* 0042d777: fadd dword ptr [ebx + 0x714] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x714u));
    /* 0042d77d: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0042d780: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042d782: fchs  */ ST(0) = -ST(0);
    /* 0042d784: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042d786: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d788: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d789: jb 0x42d78d */ if (fC) goto L_0042d78d;
L_0042d78b:; BB(0x0042d78b);
    /* 0042d78b: fst st(1) */ ST(1) = ST(0);
L_0042d78d:; BB(0x0042d78d);
    /* 0042d78d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042d78f: fst dword ptr [ebx + 0x718] */ W_F32((u32)(r_ebx+0x718u), ST(0));
    /* 0042d795: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042d797: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042d79a: jmp 0x42d617 */ goto L_0042d617;
L_0042d79f:; BB(0x0042d79f);
    /* 0042d79f: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d7a5: fcomp dword ptr [0x8fcff0] */ fx_compare(ST(0), R_F32((u32)(0x8fcff0u))); FPOP();
    /* 0042d7ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d7ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d7ae: jb 0x42d4ab */ if (fC) goto L_0042d4ab;
L_0042d7b4:; BB(0x0042d7b4);
    /* 0042d7b4: fld dword ptr [0x8fcfec] */ FPUSH(R_F32((u32)(0x8fcfecu)));
    /* 0042d7ba: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042d7c0: fld dword ptr [0x8fcff8] */ FPUSH(R_F32((u32)(0x8fcff8u)));
    /* 0042d7c6: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042d7cc: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0042d7cf: fld dword ptr [0x8fcfe8] */ FPUSH(R_F32((u32)(0x8fcfe8u)));
    /* 0042d7d5: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 0042d7d8: fmul dword ptr [0x8fd020] */ ST(0) = ST(0) * R_F32((u32)(0x8fd020u));
    /* 0042d7de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042d7e0: fst dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0));
    /* 0042d7e6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0042d7e8: mov dword ptr [ebx + 0x6e8], 4 */ W32((u32)(r_ebx+0x6e8u), 0x4u);
    /* 0042d7f2: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0042d7fc: fdiv dword ptr [0xa43c50] */ ST(0) = ST(0) / R_F32((u32)(0xa43c50u));
    /* 0042d802: fstp dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0)); FPOP();
    /* 0042d808: mov dword ptr [ebx + 0x71c], eax */ W32((u32)(r_ebx+0x71cu), r_eax);
    /* 0042d80e: fld dword ptr [0xa43c54] */ FPUSH(R_F32((u32)(0xa43c54u)));
    /* 0042d814: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0042d816: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0042d818: mov dword ptr [ebx + 0x718], 0 */ W32((u32)(r_ebx+0x718u), 0x0u);
    /* 0042d822: fstp dword ptr [ebx + 0x714] */ W_F32((u32)(r_ebx+0x714u), ST(0)); FPOP();
    /* 0042d828: jmp 0x42d4ab */ goto L_0042d4ab;
L_0042d82d:; BB(0x0042d82d);
    /* 0042d82d: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d833: fcomp dword ptr [0x8fcfe4] */ fx_compare(ST(0), R_F32((u32)(0x8fcfe4u))); FPOP();
    /* 0042d839: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042d83b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042d83c: jb 0x42d4ab */ if (fC) goto L_0042d4ab;
L_0042d842:; BB(0x0042d842);
    /* 0042d842: fld dword ptr [0x8fcfec] */ FPUSH(R_F32((u32)(0x8fcfecu)));
    /* 0042d848: fmul dword ptr [ebx + 0x704] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x704u));
    /* 0042d84e: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 0042d851: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0042d854: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0042d857: mov dword ptr [ebx + 0x708], eax */ W32((u32)(r_ebx+0x708u), r_eax);
    /* 0042d85d: mov dword ptr [ebx + 0x6e8], 3 */ W32((u32)(r_ebx+0x6e8u), 0x3u);
    /* 0042d867: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0042d871: fdiv dword ptr [0xa43c58] */ ST(0) = ST(0) / R_F32((u32)(0xa43c58u));
    /* 0042d877: fstp dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0)); FPOP();
    /* 0042d87d: fld dword ptr [0xa43c58] */ FPUSH(R_F32((u32)(0xa43c58u)));
    /* 0042d883: fchs  */ ST(0) = -ST(0);
    /* 0042d885: fdivr dword ptr [ebx + 0x718] */ ST(0) = R_F32((u32)(r_ebx+0x718u)) / ST(0);
    /* 0042d88b: mov dword ptr [ebx + 0x718], 0 */ W32((u32)(r_ebx+0x718u), 0x0u);
    /* 0042d895: fstp dword ptr [ebx + 0x714] */ W_F32((u32)(r_ebx+0x714u), ST(0)); FPOP();
    /* 0042d89b: mov dword ptr [ebx + 0x71c], edx */ W32((u32)(r_ebx+0x71cu), r_edx);
    /* 0042d8a1: jmp 0x42d4ab */ goto L_0042d4ab;
L_0042d8a6:; BB(0x0042d8a6);
    /* 0042d8a6: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0042d8ac: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042d8ae: jne 0x42d4ab */ if (!fZ) goto L_0042d4ab;
L_0042d8b4:; BB(0x0042d8b4);
    /* 0042d8b4: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
    /* 0042d8be: jmp 0x42d4ab */ goto L_0042d4ab;
L_0042d8c3:; BB(0x0042d8c3);
    /* 0042d8c3: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0042d8c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d8cc: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d8cf: jle 0x42d925 */ if ((fZ||fS!=fO)) goto L_0042d925;
L_0042d8d1:; BB(0x0042d8d1);
    /* 0042d8d1: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042d8d7: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 0042d8e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d8e3: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
    /* 0042d8ed: jne 0x42d90a */ if (!fZ) goto L_0042d90a;
L_0042d8ef:; BB(0x0042d8ef);
    /* 0042d8ef: mov dword ptr [ebx + 0x704], 0xbf800000 */ W32((u32)(r_ebx+0x704u), 0xbf800000u);
    /* 0042d8f9: mov eax, 7 */ r_eax = 0x7u;
    /* 0042d8fe: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042d905: jmp 0x42d4ab */ goto L_0042d4ab;
L_0042d90a:; BB(0x0042d90a);
    /* 0042d90a: mov dword ptr [ebx + 0x704], 0x3f800000 */ W32((u32)(r_ebx+0x704u), 0x3f800000u);
    /* 0042d914: mov eax, 8 */ r_eax = 0x8u;
    /* 0042d919: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042d920: jmp 0x42d4ab */ goto L_0042d4ab;
L_0042d925:; BB(0x0042d925);
    /* 0042d925: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042d92b: jmp 0x42d4ab */ goto L_0042d4ab;
L_0042d930:; BB(0x0042d930);
    /* 0042d930: push 0x41080000 */ { u32 v = 0x41080000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d935: fld dword ptr [0x8fd00c] */ FPUSH(R_F32((u32)(0x8fd00cu)));
    /* 0042d93b: fmul dword ptr [ebx + 0x714] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x714u));
    /* 0042d941: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042d947: fsub dword ptr [0x8fcfe4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcfe4u));
    /* 0042d94d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042d94f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d951: fsub dword ptr [0x8fcfcc] */ ST(0) = ST(0) - R_F32((u32)(0x8fcfccu));
    /* 0042d957: fld dword ptr [ebx + 0x70c] */ FPUSH(R_F32((u32)(r_ebx+0x70cu)));
    /* 0042d95d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0042d95f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d961: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042d963: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 0042d969: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d96b: fadd dword ptr [ebx + 0x71c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x71cu));
    /* 0042d971: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042d973: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042d976: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042d979: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042d97b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42d980u); f_007aaa30();
    /* 0042d980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d982: je 0x42d617 */ if (fZ) goto L_0042d617;
L_0042d988:; BB(0x0042d988);
    /* 0042d988: add ebx, 0x520 */ {  u32 a = r_ebx; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042d98e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042d990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d992: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d993: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d998: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42d99du); f_00814298();
    /* 0042d99d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d9a0: jmp 0x42d617 */ goto L_0042d617;
L_0042d9a5:; BB(0x0042d9a5);
    /* 0042d9a5: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0042d9ac: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d9af: je 0x42d9ba */ if (fZ) goto L_0042d9ba;
L_0042d9b1:; BB(0x0042d9b1);
    /* 0042d9b1: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d9b4: jne 0x42d617 */ if (!fZ) goto L_0042d617;
L_0042d9ba:; BB(0x0042d9ba);
    /* 0042d9ba: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042d9c0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d9c3: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042d9c9: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42d9ceu); f_00520e6c();
    /* 0042d9ce: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042d9d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d9d6: je 0x42d9e1 */ if (fZ) goto L_0042d9e1;
L_0042d9d8:; BB(0x0042d9d8);
    /* 0042d9d8: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042d9df: jmp 0x42d9e8 */ goto L_0042d9e8;
L_0042d9e1:; BB(0x0042d9e1);
    /* 0042d9e1: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042d9e8:; BB(0x0042d9e8);
    /* 0042d9e8: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042d9eb: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042d9ee: ja 0x42db28 */ if ((!fC&&!fZ)) goto L_0042db28;
L_0042d9f4:; BB(0x0042d9f4);
    /* 0042d9f4: mov edx, dword ptr [edx*4 + 0x8fc820] */ r_edx = R32((u32)(r_edx*4+0x8fc820u));
    /* 0042d9fb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
L_0042db35:; BB(0x0042db35);
    /* 0042db35: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0042db3b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0042db3e: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042db44: je 0x42dbf1 */ if (fZ) goto L_0042dbf1;
L_0042db4a:; BB(0x0042db4a);
    /* 0042db4a: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042db50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042db52: jne 0x42dba2 */ if (!fZ) goto L_0042dba2;
L_0042db54:; BB(0x0042db54);
    /* 0042db54: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042db56: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0042db58: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042db5a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db5c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42db62u); call_ind(t); }
    /* 0042db62: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042db66: mov byte ptr [esp + 0x29], 3 */ W8((u32)(r_esp+0x29u), 0x3u);
    /* 0042db6b: mov edx, 0x14 */ r_edx = 0x14u;
    /* 0042db70: mov byte ptr [esp + 0x28], dl */ W8((u32)(r_esp+0x28u), (u8)r_edx);
    /* 0042db74: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 0042db79: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042db7f: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 0042db86: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 0042db8b: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 0042db90: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 0042db94: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0042db98: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42db9du); f_008003e0();
    /* 0042db9d: jmp 0x42d617 */ goto L_0042d617;
L_0042dba2:; BB(0x0042dba2);
    /* 0042dba2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dba4: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dba6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042dba8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dbaa: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42dbb0u); call_ind(t); }
    /* 0042dbb0: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042dbb4: mov byte ptr [esp + 0x1c], 0x14 */ W8((u32)(r_esp+0x1cu), 0x14u);
    /* 0042dbb9: mov edx, 0x15 */ r_edx = 0x15u;
    /* 0042dbbe: mov byte ptr [esp + 0x1d], 3 */ W8((u32)(r_esp+0x1du), 0x3u);
    /* 0042dbc3: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 0042dbc8: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042dbce: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 0042dbd5: mov word ptr [esp + 0x20], dx */ W16((u32)(r_esp+0x20u), (u16)r_edx);
    /* 0042dbda: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 0042dbdf: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0042dbe3: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0042dbe7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42dbecu); f_008003e0();
    /* 0042dbec: jmp 0x42d617 */ goto L_0042d617;
L_0042dbf1:; BB(0x0042dbf1);
    /* 0042dbf1: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dbf7: je 0x42d617 */ if (fZ) goto L_0042d617;
L_0042dbfd:; BB(0x0042dbfd);
    /* 0042dbfd: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042dc03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dc05: jne 0x42dc4b */ if (!fZ) goto L_0042dc4b;
L_0042dc07:; BB(0x0042dc07);
    /* 0042dc07: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc09: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc0b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042dc0d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dc0f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42dc15u); call_ind(t); }
    /* 0042dc15: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042dc19: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042dc1f: mov byte ptr [esp + 0x14], 0x13 */ W8((u32)(r_esp+0x14u), 0x13u);
    /* 0042dc24: mov edx, 0x16 */ r_edx = 0x16u;
    /* 0042dc29: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 0042dc2e: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0042dc33: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0042dc38: mov word ptr [esp + 0x1a], bx */ W16((u32)(r_esp+0x1au), (u16)r_ebx);
    /* 0042dc3d: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0042dc41: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42dc46u); f_008003e0();
    /* 0042dc46: jmp 0x42d617 */ goto L_0042d617;
L_0042dc4b:; BB(0x0042dc4b);
    /* 0042dc4b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc4d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc4f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042dc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dc53: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42dc59u); call_ind(t); }
    /* 0042dc59: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042dc5d: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042dc63: mov byte ptr [esp + 0xc], 0x13 */ W8((u32)(r_esp+0xcu), 0x13u);
    /* 0042dc68: mov edx, 0x17 */ r_edx = 0x17u;
    /* 0042dc6d: mov byte ptr [esp + 0xd], 2 */ W8((u32)(r_esp+0xdu), 0x2u);
    /* 0042dc72: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0042dc77: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0042dc7c: mov word ptr [esp + 0x12], bx */ W16((u32)(r_esp+0x12u), (u16)r_ebx);
    /* 0042dc81: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0042dc85: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42dc8au); f_008003e0();
    /* 0042dc8a: jmp 0x42d617 */ goto L_0042d617;
L_0042dc8f:; BB(0x0042dc8f);
    /* 0042dc8f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042dc91: mov eax, 1 */ r_eax = 0x1u;
    /* 0042dc96: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042dc9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dc9f: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42dca5u); call_ind(t); }
    /* 0042dca5: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0042dca9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042dcab: mov esi, eax */ r_esi = r_eax;
L_0042dcad:; BB(0x0042dcad);
    /* 0042dcad: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042dcb4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042dcb6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42dcbcu); call_ind(t); }
    /* 0042dcbc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042dcbf: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dcc2: jl 0x42dcad */ if ((fS!=fO)) goto L_0042dcad;
L_0042dcc4:; BB(0x0042dcc4);
    /* 0042dcc4: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0042dcc8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0042dccc: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042dcd2: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042dcd5: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042dcda: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042dce0: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0042dce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042dce5: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0042dceb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dced: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42dcf2u); f_0042c154();
    /* 0042dcf2: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0042dcf5: mov dword ptr [ebx + 0x704], 0 */ W32((u32)(r_ebx+0x704u), 0x0u);
    /* 0042dcff: mov dword ptr [ebx + 0x71c], eax */ W32((u32)(r_ebx+0x71cu), r_eax);
    /* 0042dd05: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042dd07: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0042dd11: mov dword ptr [ebx + 0x6ec], edx */ W32((u32)(r_ebx+0x6ecu), r_edx);
    /* 0042dd17: mov dword ptr [ebx + 0x6e8], edx */ W32((u32)(r_ebx+0x6e8u), r_edx);
    /* 0042dd1d: mov dword ptr [ebx + 0x6f0], edx */ W32((u32)(r_ebx+0x6f0u), r_edx);
    /* 0042dd23: mov dword ptr [ebx + 0x70c], 0 */ W32((u32)(r_ebx+0x70cu), 0x0u);
    /* 0042dd2d: mov dword ptr [ebx + 0x744], edx */ W32((u32)(r_ebx+0x744u), r_edx);
    /* 0042dd33: mov dword ptr [ebx + 0x6f4], edx */ W32((u32)(r_ebx+0x6f4u), r_edx);
    /* 0042dd39: mov dword ptr [ebx + 0x708], 0 */ W32((u32)(r_ebx+0x708u), 0x0u);
    /* 0042dd43: mov dword ptr [ebx + 0x714], 0xbe4ccccd */ W32((u32)(r_ebx+0x714u), 0xbe4ccccdu);
    /* 0042dd4d: mov dword ptr [ebx + 0x718], 0 */ W32((u32)(r_ebx+0x718u), 0x0u);
    /* 0042dd57: mov dword ptr [ebx + 0x720], 0 */ W32((u32)(r_ebx+0x720u), 0x0u);
    /* 0042dd61: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042d9fd(void)
{
    FN_ENTER(0x0042d9fd);
    goto L_0042d9fd;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042d9fd); r_esp += 12; return;
L_0042d9c0:; BB(0x0042d9c0);
    /* 0042d9c0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d9c3: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042d9c9: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42d9ceu); f_00520e6c();
    /* 0042d9ce: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042d9d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d9d6: je 0x42d9e1 */ if (fZ) goto L_0042d9e1;
L_0042d9d8:; BB(0x0042d9d8);
    /* 0042d9d8: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042d9df: jmp 0x42d9e8 */ goto L_0042d9e8;
L_0042d9e1:; BB(0x0042d9e1);
    /* 0042d9e1: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042d9e8:; BB(0x0042d9e8);
    /* 0042d9e8: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042d9eb: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042d9ee: ja 0x42db28 */ if ((!fC&&!fZ)) goto L_0042db28;
L_0042d9f4:; BB(0x0042d9f4);
    /* 0042d9f4: mov edx, dword ptr [edx*4 + 0x8fc820] */ r_edx = R32((u32)(r_edx*4+0x8fc820u));
    /* 0042d9fb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042d9fd:; BB(0x0042d9fd);
    /* 0042d9fd: mov eax, 5 */ r_eax = 0x5u;
    /* 0042da02: jmp 0x42d9c0 */ goto L_0042d9c0;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042da04(void)
{
    FN_ENTER(0x0042da04);
    goto L_0042da04;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042da04); r_esp += 12; return;
L_0042da04:; BB(0x0042da04);
    /* 0042da04: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042da0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042da0c: jne 0x42da18 */ if (!fZ) goto L_0042da18;
L_0042da0e:; BB(0x0042da0e);
    /* 0042da0e: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042da13: jmp 0x42db28 */ goto L_0042db28;
L_0042da18:; BB(0x0042da18);
    /* 0042da18: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042da1d: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042da22(void)
{
    FN_ENTER(0x0042da22);
    goto L_0042da22;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042da22); r_esp += 12; return;
L_0042da22:; BB(0x0042da22);
    /* 0042da22: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042da28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042da2a: jne 0x42da36 */ if (!fZ) goto L_0042da36;
L_0042da2c:; BB(0x0042da2c);
    /* 0042da2c: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042da31: jmp 0x42db28 */ goto L_0042db28;
L_0042da36:; BB(0x0042da36);
    /* 0042da36: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042da3b: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042da40(void)
{
    FN_ENTER(0x0042da40);
    goto L_0042da40;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042da40); r_esp += 12; return;
L_0042da40:; BB(0x0042da40);
    /* 0042da40: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042da46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042da48: jne 0x42da54 */ if (!fZ) goto L_0042da54;
L_0042da4a:; BB(0x0042da4a);
    /* 0042da4a: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042da4f: jmp 0x42db28 */ goto L_0042db28;
L_0042da54:; BB(0x0042da54);
    /* 0042da54: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042da59: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042da5e(void)
{
    FN_ENTER(0x0042da5e);
    goto L_0042da5e;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042da5e); r_esp += 12; return;
L_0042da5e:; BB(0x0042da5e);
    /* 0042da5e: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042da64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042da66: jne 0x42da72 */ if (!fZ) goto L_0042da72;
L_0042da68:; BB(0x0042da68);
    /* 0042da68: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042da6d: jmp 0x42db28 */ goto L_0042db28;
L_0042da72:; BB(0x0042da72);
    /* 0042da72: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042da77: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042da7c(void)
{
    FN_ENTER(0x0042da7c);
    goto L_0042da7c;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042da7c); r_esp += 12; return;
L_0042da7c:; BB(0x0042da7c);
    /* 0042da7c: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042da82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042da84: jne 0x42da90 */ if (!fZ) goto L_0042da90;
L_0042da86:; BB(0x0042da86);
    /* 0042da86: mov eax, 4 */ r_eax = 0x4u;
    /* 0042da8b: jmp 0x42db28 */ goto L_0042db28;
L_0042da90:; BB(0x0042da90);
    /* 0042da90: mov eax, 0xa */ r_eax = 0xau;
    /* 0042da95: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042da9a(void)
{
    FN_ENTER(0x0042da9a);
    goto L_0042da9a;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042da9a); r_esp += 12; return;
L_0042da9a:; BB(0x0042da9a);
    /* 0042da9a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042da9c: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42daa1u); f_00520bf4();
    /* 0042daa1: fcomp dword ptr [0x8fd028] */ fx_compare(ST(0), R_F32((u32)(0x8fd028u))); FPOP();
    /* 0042daa7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042daa9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042daaa: jbe 0x42dab3 */ if ((fC||fZ)) goto L_0042dab3;
L_0042daac:; BB(0x0042daac);
    /* 0042daac: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042dab1: jmp 0x42db28 */ goto L_0042db28;
L_0042dab3:; BB(0x0042dab3);
    /* 0042dab3: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042dab8: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042daba(void)
{
    FN_ENTER(0x0042daba);
    goto L_0042daba;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042daba); r_esp += 12; return;
L_0042daba:; BB(0x0042daba);
    /* 0042daba: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042dac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dac2: jne 0x42dacb */ if (!fZ) goto L_0042dacb;
L_0042dac4:; BB(0x0042dac4);
    /* 0042dac4: mov eax, 3 */ r_eax = 0x3u;
    /* 0042dac9: jmp 0x42db28 */ goto L_0042db28;
L_0042dacb:; BB(0x0042dacb);
    /* 0042dacb: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042dad0: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042dad2(void)
{
    FN_ENTER(0x0042dad2);
    goto L_0042dad2;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042dad2); r_esp += 12; return;
L_0042dad2:; BB(0x0042dad2);
    /* 0042dad2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dad4: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42dad9u); f_00520bf4();
    /* 0042dad9: fcomp dword ptr [0x8fd028] */ fx_compare(ST(0), R_F32((u32)(0x8fd028u))); FPOP();
    /* 0042dadf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042dae1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042dae2: jbe 0x42daeb */ if ((fC||fZ)) goto L_0042daeb;
L_0042dae4:; BB(0x0042dae4);
    /* 0042dae4: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042dae9: jmp 0x42db28 */ goto L_0042db28;
L_0042daeb:; BB(0x0042daeb);
    /* 0042daeb: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042daf0: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042daf2(void)
{
    FN_ENTER(0x0042daf2);
    goto L_0042daf2;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042daf2); r_esp += 12; return;
L_0042daf2:; BB(0x0042daf2);
    /* 0042daf2: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042daf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dafa: jne 0x42db03 */ if (!fZ) goto L_0042db03;
L_0042dafc:; BB(0x0042dafc);
    /* 0042dafc: mov eax, 5 */ r_eax = 0x5u;
    /* 0042db01: jmp 0x42db28 */ goto L_0042db28;
L_0042db03:; BB(0x0042db03);
    /* 0042db03: mov eax, 9 */ r_eax = 0x9u;
    /* 0042db08: jmp 0x42db28 */ goto L_0042db28;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042db0a(void)
{
    FN_ENTER(0x0042db0a);
    goto L_0042db0a;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042db0a); r_esp += 12; return;
L_0042db0a:; BB(0x0042db0a);
    /* 0042db0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db0c: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42db11u); f_00520bf4();
    /* 0042db11: fcomp dword ptr [0x8fd028] */ fx_compare(ST(0), R_F32((u32)(0x8fd028u))); FPOP();
    /* 0042db17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042db19: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042db1a: jbe 0x42db23 */ if ((fC||fZ)) goto L_0042db23;
L_0042db1c:; BB(0x0042db1c);
    /* 0042db1c: mov eax, 8 */ r_eax = 0x8u;
    /* 0042db21: jmp 0x42db28 */ goto L_0042db28;
L_0042db23:; BB(0x0042db23);
    /* 0042db23: mov eax, 6 */ r_eax = 0x6u;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042db28(void)
{
    FN_ENTER(0x0042db28);
    goto L_0042db28;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042db28); r_esp += 12; return;
L_0042db28:; BB(0x0042db28);
    /* 0042db28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042db29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042db2b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42db30u); f_0042abf8();
    /* 0042db30: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042dca0(void)
{
    FN_ENTER(0x0042dca0);
    goto L_0042dca0;
L_0042d617:; BB(0x0042d617);
    /* 0042d617: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042d61a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042d61b: ret 8 */ FN_RET(0x0042dca0); r_esp += 12; return;
L_0042dca0:; BB(0x0042dca0);
    /* 0042dca0: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 0042dca1: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0042dca3: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0042dca5: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0042dca9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042dcab: mov esi, eax */ r_esi = r_eax;
L_0042dcad:; BB(0x0042dcad);
    /* 0042dcad: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042dcb4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042dcb6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42dcbcu); call_ind(t); }
    /* 0042dcbc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042dcbf: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dcc2: jl 0x42dcad */ if ((fS!=fO)) goto L_0042dcad;
L_0042dcc4:; BB(0x0042dcc4);
    /* 0042dcc4: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0042dcc8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0042dccc: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042dcd2: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042dcd5: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042dcda: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042dce0: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0042dce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042dce5: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0042dceb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dced: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42dcf2u); f_0042c154();
    /* 0042dcf2: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0042dcf5: mov dword ptr [ebx + 0x704], 0 */ W32((u32)(r_ebx+0x704u), 0x0u);
    /* 0042dcff: mov dword ptr [ebx + 0x71c], eax */ W32((u32)(r_ebx+0x71cu), r_eax);
    /* 0042dd05: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042dd07: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0042dd11: mov dword ptr [ebx + 0x6ec], edx */ W32((u32)(r_ebx+0x6ecu), r_edx);
    /* 0042dd17: mov dword ptr [ebx + 0x6e8], edx */ W32((u32)(r_ebx+0x6e8u), r_edx);
    /* 0042dd1d: mov dword ptr [ebx + 0x6f0], edx */ W32((u32)(r_ebx+0x6f0u), r_edx);
    /* 0042dd23: mov dword ptr [ebx + 0x70c], 0 */ W32((u32)(r_ebx+0x70cu), 0x0u);
    /* 0042dd2d: mov dword ptr [ebx + 0x744], edx */ W32((u32)(r_ebx+0x744u), r_edx);
    /* 0042dd33: mov dword ptr [ebx + 0x6f4], edx */ W32((u32)(r_ebx+0x6f4u), r_edx);
    /* 0042dd39: mov dword ptr [ebx + 0x708], 0 */ W32((u32)(r_ebx+0x708u), 0x0u);
    /* 0042dd43: mov dword ptr [ebx + 0x714], 0xbe4ccccd */ W32((u32)(r_ebx+0x714u), 0xbe4ccccdu);
    /* 0042dd4d: mov dword ptr [ebx + 0x718], 0 */ W32((u32)(r_ebx+0x718u), 0x0u);
    /* 0042dd57: mov dword ptr [ebx + 0x720], 0 */ W32((u32)(r_ebx+0x720u), 0x0u);
    /* 0042dd61: jmp 0x42d617 */ goto L_0042d617;
}

void f_0042dd68(void) /* sub_42DD68 */
{
    FN_ENTER(0x0042dd68);
    /* 0042dd68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042dd6b: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042dd6e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042dd70: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0042dd74: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd77: je 0x42e23f */ if (fZ) goto L_0042e23f;
L_0042dd7d:; BB(0x0042dd7d);
    /* 0042dd7d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd80: je 0x42e19e */ if (fZ) goto L_0042e19e;
L_0042dd86:; BB(0x0042dd86);
    /* 0042dd86: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd89: je 0x42e018 */ if (fZ) goto L_0042e018;
L_0042dd8f:; BB(0x0042dd8f);
    /* 0042dd8f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd92: je 0x42dfdf */ if (fZ) goto L_0042dfdf;
L_0042dd98:; BB(0x0042dd98);
    /* 0042dd98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dd9a: je 0x42de76 */ if (fZ) goto L_0042de76;
L_0042dda0:; BB(0x0042dda0);
    /* 0042dda0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dda3: jne 0x42de52 */ if (!fZ) goto L_0042de52;
L_0042dda9:; BB(0x0042dda9);
    /* 0042dda9: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0042ddaf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ddb1: je 0x42de46 */ if (fZ) goto L_0042de46;
L_0042ddb7:; BB(0x0042ddb7);
    /* 0042ddb7: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ddba: je 0x42e009 */ if (fZ) goto L_0042e009;
L_0042ddc0:; BB(0x0042ddc0);
    /* 0042ddc0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ddc2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42ddc7u); f_007751b0();
    /* 0042ddc7: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0042ddcb: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0042ddcf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042ddd1: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 0042ddd5: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 0042ddda: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042dddf: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042dde4: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0042dde8: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0042ddec: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042ddf0: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0042ddf4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ddf6: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0042ddfa: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x42ddffu); f_00520f68();
    /* 0042ddff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042de01: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042de03: jle 0x42dfdf */ if ((fZ||fS!=fO)) goto L_0042dfdf;
L_0042de09:; BB(0x0042de09);
    /* 0042de09: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0042de0d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0042de0f: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 0042de13: mov edi, esi */ r_edi = r_esi;
    /* 0042de15: mov esi, eax */ r_esi = r_eax;
L_0042de17:; BB(0x0042de17);
    /* 0042de17: mov ebp, dword ptr [ebx*4 + 0xaad720] */ r_ebp = R32((u32)(r_ebx*4+0xaad720u));
    /* 0042de1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042de1f: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x42de24u); f_00520f3c();
    /* 0042de24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042de25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042de27: jne 0x42dfe8 */ if (!fZ) goto L_0042dfe8;
L_0042de2d:; BB(0x0042de2d);
    /* 0042de2d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042de30: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042de32: jl 0x42de36 */ if ((fS!=fO)) goto L_0042de36;
L_0042de34:; BB(0x0042de34);
    /* 0042de34: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0042de36:; BB(0x0042de36);
    /* 0042de36: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042de39: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042de3b: jl 0x42de17 */ if ((fS!=fO)) goto L_0042de17;
L_0042de3d:; BB(0x0042de3d);
    /* 0042de3d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0042de41: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042de46:; BB(0x0042de46);
    /* 0042de46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042de48: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x42de4du); f_00520f68();
    /* 0042de4d: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042de52:; BB(0x0042de52);
    /* 0042de52: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042de55: jne 0x42dfdf */ if (!fZ) goto L_0042dfdf;
L_0042de5b:; BB(0x0042de5b);
    /* 0042de5b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0042de5d:; BB(0x0042de5d);
    /* 0042de5d: mov ecx, dword ptr [ebx + ebp*4 + 0x628] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x628u));
    /* 0042de64: call 0x4393f4 */ r_esp -= 4; W32(r_esp, 0x42de69u); f_004393f4();
    /* 0042de69: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042de6c: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042de6f: jl 0x42de5d */ if ((fS!=fO)) goto L_0042de5d;
L_0042de71:; BB(0x0042de71);
    /* 0042de71: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042de76:; BB(0x0042de76);
    /* 0042de76: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042de78: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42de7du); f_007aa094();
    /* 0042de7d: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042de83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042de85: je 0x42dfb1 */ if (fZ) goto L_0042dfb1;
L_0042de8b:; BB(0x0042de8b);
    /* 0042de8b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042de8e: jne 0x42df7f */ if (!fZ) goto L_0042df7f;
L_0042de94:; BB(0x0042de94);
    /* 0042de94: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0042de9a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042de9d: cmp eax, dword ptr [ebx + 0x6f4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x6f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dea3: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042dea9: jl 0x42dfdf */ if ((fS!=fO)) goto L_0042dfdf;
L_0042deaf:; BB(0x0042deaf);
    /* 0042deaf: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 0042deb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042debb: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x42dec0u); f_00520f04();
    /* 0042dec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dec2: je 0x42dee0 */ if (fZ) goto L_0042dee0;
L_0042dec4:; BB(0x0042dec4);
    /* 0042dec4: mov ebp, dword ptr [ebx + 0x398] */ r_ebp = R32((u32)(r_ebx+0x398u));
    /* 0042deca: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0042decd: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0042ded0: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 0042ded3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0042ded6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042deda: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042dede: jmp 0x42df39 */ goto L_0042df39;
L_0042dee0:; BB(0x0042dee0);
    /* 0042dee0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dee2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42dee7u); f_007751b0();
    /* 0042dee7: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0042deeb: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0042deef: fmul dword ptr [0x8fcfc8] */ ST(0) = ST(0) * R_F32((u32)(0x8fcfc8u));
    /* 0042def5: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0042def9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042defb: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x42df00u); f_00520c20();
    /* 0042df00: mov ebp, eax */ r_ebp = r_eax;
    /* 0042df02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042df04: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x42df09u); f_0082dcbc();
    /* 0042df09: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 0042df0d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042df10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042df12: mov dword ptr [esp + 4], 0xbfeccccd */ W32((u32)(r_esp+0x4u), 0xbfeccccdu);
    /* 0042df1a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x42df1fu); f_0082ddd8();
    /* 0042df1f: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0042df23: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042df25: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0042df29: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0042df2c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0042df2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042df30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042df31: call 0x782bb0 */ r_esp -= 4; W32(r_esp, 0x42df36u); f_00782bb0();
    /* 0042df36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042df39:; BB(0x0042df39);
    /* 0042df39: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0042df3c: push dword ptr [ebx + 0x6f8] */ { u32 v = R32((u32)(r_ebx+0x6f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042df42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042df43: mov edx, dword ptr [ebx + 0x6f0] */ r_edx = R32((u32)(r_ebx+0x6f0u));
    /* 0042df49: mov ecx, dword ptr [ebx + edx*4 + 0x628] */ r_ecx = R32((u32)(r_ebx+r_edx*4+0x628u));
    /* 0042df50: call 0x4393b0 */ r_esp -= 4; W32(r_esp, 0x42df55u); f_004393b0();
    /* 0042df55: mov eax, dword ptr [ebx + 0x6f0] */ r_eax = R32((u32)(r_ebx+0x6f0u));
    /* 0042df5b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042df5e: mov dword ptr [ebx + 0x6f0], eax */ W32((u32)(r_ebx+0x6f0u), r_eax);
    /* 0042df64: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042df67: jl 0x42dfdf */ if ((fS!=fO)) goto L_0042dfdf;
L_0042df69:; BB(0x0042df69);
    /* 0042df69: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 0042df73: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
    /* 0042df7d: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042df7f:; BB(0x0042df7f);
    /* 0042df7f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042df82: jne 0x42dfdf */ if (!fZ) goto L_0042dfdf;
L_0042df84:; BB(0x0042df84);
    /* 0042df84: add dword ptr [ebx + 0x6ec], 1 */ { u32 ad = (u32)(r_ebx+0x6ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0042df8b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0042df8d:; BB(0x0042df8d);
    /* 0042df8d: mov ecx, dword ptr [ebx + ebp*4 + 0x628] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x628u));
    /* 0042df94: call 0x439414 */ r_esp -= 4; W32(r_esp, 0x42df99u); f_00439414();
    /* 0042df99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042df9b: je 0x42dffa */ if (fZ) goto L_0042dffa;
L_0042df9d:; BB(0x0042df9d);
    /* 0042df9d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042dfa0: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dfa3: jl 0x42df8d */ if ((fS!=fO)) goto L_0042df8d;
L_0042dfa5:; BB(0x0042dfa5);
    /* 0042dfa5: mov dword ptr [ebx + 0x6e8], 3 */ W32((u32)(r_ebx+0x6e8u), 0x3u);
    /* 0042dfaf: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042dfb1:; BB(0x0042dfb1);
    /* 0042dfb1: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0042dfb7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042dfba: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dfbd: jg 0x42dfc7 */ if ((!fZ&&fS==fO)) goto L_0042dfc7;
L_0042dfbf:; BB(0x0042dfbf);
    /* 0042dfbf: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042dfc5: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042dfc7:; BB(0x0042dfc7);
    /* 0042dfc7: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
    /* 0042dfd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042dfd3: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042dfd9: mov dword ptr [ebx + 0x6f0], eax */ W32((u32)(r_ebx+0x6f0u), r_eax);
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042dd68); r_esp += 12; return;
L_0042dfe8:; BB(0x0042dfe8);
    /* 0042dfe8: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0042dfec: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0042dff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042dff1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042dff3: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x42dff8u); f_00521388();
    /* 0042dff8: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042dffa:; BB(0x0042dffa);
    /* 0042dffa: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0042e000: cmp eax, 0x258 */ {  u32 a = r_eax; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e005: jle 0x42dfdf */ if ((fZ||fS!=fO)) goto L_0042dfdf;
L_0042e007:; BB(0x0042e007);
    /* 0042e007: jmp 0x42dfa5 */ goto L_0042dfa5;
L_0042e009:; BB(0x0042e009);
    /* 0042e009: push dword ptr [0xaad720] */ { u32 v = R32((u32)(0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042e00f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e011: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x42e016u); f_00521388();
    /* 0042e016: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042e018:; BB(0x0042e018);
    /* 0042e018: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042e01e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e021: jne 0x42dfdf */ if (!fZ) goto L_0042dfdf;
L_0042e023:; BB(0x0042e023);
    /* 0042e023: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042e029: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e02c: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042e032: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42e037u); f_00520e6c();
    /* 0042e037: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042e03d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e03f: je 0x42e04a */ if (fZ) goto L_0042e04a;
L_0042e041:; BB(0x0042e041);
    /* 0042e041: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042e048: jmp 0x42e051 */ goto L_0042e051;
L_0042e04a:; BB(0x0042e04a);
    /* 0042e04a: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042e051:; BB(0x0042e051);
    /* 0042e051: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042e054: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042e057: ja 0x42e191 */ if ((!fC&&!fZ)) goto L_0042e191;
L_0042e05d:; BB(0x0042e05d);
    /* 0042e05d: mov edx, dword ptr [edx*4 + 0x8fc850] */ r_edx = R32((u32)(r_edx*4+0x8fc850u));
    /* 0042e064: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042e19e:; BB(0x0042e19e);
    /* 0042e19e: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042e1a4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e1a7: jne 0x42dfdf */ if (!fZ) goto L_0042dfdf;
L_0042e1ad:; BB(0x0042e1ad);
    /* 0042e1ad: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042e1b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e1b5: jne 0x42e1fb */ if (!fZ) goto L_0042e1fb;
L_0042e1b7:; BB(0x0042e1b7);
    /* 0042e1b7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1b9: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1bb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042e1bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e1bf: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42e1c5u); call_ind(t); }
    /* 0042e1c5: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042e1c9: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042e1cf: mov byte ptr [esp + 0x14], 0x13 */ W8((u32)(r_esp+0x14u), 0x13u);
    /* 0042e1d4: mov edx, 0x16 */ r_edx = 0x16u;
    /* 0042e1d9: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 0042e1de: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0042e1e3: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0042e1e8: mov word ptr [esp + 0x1a], bx */ W16((u32)(r_esp+0x1au), (u16)r_ebx);
    /* 0042e1ed: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0042e1f1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42e1f6u); f_008003e0();
    /* 0042e1f6: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042e1fb:; BB(0x0042e1fb);
    /* 0042e1fb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1fd: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e1ff: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e203: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42e209u); call_ind(t); }
    /* 0042e209: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042e20d: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042e213: mov byte ptr [esp + 0xc], 0x13 */ W8((u32)(r_esp+0xcu), 0x13u);
    /* 0042e218: mov edx, 0x17 */ r_edx = 0x17u;
    /* 0042e21d: mov byte ptr [esp + 0xd], 2 */ W8((u32)(r_esp+0xdu), 0x2u);
    /* 0042e222: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0042e227: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0042e22c: mov word ptr [esp + 0x12], bx */ W16((u32)(r_esp+0x12u), (u16)r_ebx);
    /* 0042e231: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0042e235: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42e23au); f_008003e0();
    /* 0042e23a: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042e23f:; BB(0x0042e23f);
    /* 0042e23f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042e241: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e243: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x42e249u); call_ind(t); }
    /* 0042e249: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0042e24b:; BB(0x0042e24b);
    /* 0042e24b: mov ecx, dword ptr [ebx + ebp*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x5e8u));
    /* 0042e252: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042e254: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x42e25au); call_ind(t); }
    /* 0042e25a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042e25d: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e260: jl 0x42e24b */ if ((fS!=fO)) goto L_0042e24b;
L_0042e262:; BB(0x0042e262);
    /* 0042e262: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0042e266: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 0042e26a: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042e270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042e271: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042e276: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042e27c: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0042e282: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e284: call 0x42e308 */ r_esp -= 4; W32(r_esp, 0x42e289u); f_0042e308();
    /* 0042e289: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042e28f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e291: jne 0x42e2a1 */ if (!fZ) goto L_0042e2a1;
L_0042e293:; BB(0x0042e293);
    /* 0042e293: mov eax, 9 */ r_eax = 0x9u;
    /* 0042e298: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042e29f: jmp 0x42e2ad */ goto L_0042e2ad;
L_0042e2a1:; BB(0x0042e2a1);
    /* 0042e2a1: mov eax, 0xa */ r_eax = 0xau;
    /* 0042e2a6: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_0042e2ad:; BB(0x0042e2ad);
    /* 0042e2ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e2af: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 0042e2b5: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042e2bb: mov dword ptr [ebx + 0x6f0], eax */ W32((u32)(r_ebx+0x6f0u), r_eax);
    /* 0042e2c1: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42e2c6u); f_00520e6c();
    /* 0042e2c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e2c8: je 0x42e2ec */ if (fZ) goto L_0042e2ec;
L_0042e2ca:; BB(0x0042e2ca);
    /* 0042e2ca: mov eax, dword ptr [0xa43cc8] */ r_eax = R32((u32)(0xa43cc8u));
    /* 0042e2cf: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0042e2d2: mov dword ptr [ebx + 0x6f4], edx */ W32((u32)(r_ebx+0x6f4u), r_edx);
    /* 0042e2d8: mov ebp, dword ptr [0xa43cc8] */ r_ebp = R32((u32)(0xa43cc8u));
    /* 0042e2de: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 0042e2e1: mov dword ptr [ebx + 0x6f8], esi */ W32((u32)(r_ebx+0x6f8u), r_esi);
    /* 0042e2e7: jmp 0x42dfdf */ goto L_0042dfdf;
L_0042e2ec:; BB(0x0042e2ec);
    /* 0042e2ec: mov dword ptr [ebx + 0x6f4], 0xb4 */ W32((u32)(r_ebx+0x6f4u), 0xb4u);
    /* 0042e2f6: mov dword ptr [ebx + 0x6f8], 0x78 */ W32((u32)(r_ebx+0x6f8u), 0x78u);
    /* 0042e300: jmp 0x42dfdf */ goto L_0042dfdf;
}

