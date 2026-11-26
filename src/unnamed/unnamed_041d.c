#include "protos.h"

void f_0041d16e(void)
{
    FN_ENTER(0x0041d16e);
    /* 0041d16e: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d170: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41d175u); f_007aa094();
    /* 0041d175: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0041d17c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d17f: je 0x41d38d */ if (fZ) goto L_0041d38d;
L_0041d185:; BB(0x0041d185);
    /* 0041d185: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d18a: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d18c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41d191u); f_007aaa30();
    /* 0041d191: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d193: je 0x41d19e */ if (fZ) goto L_0041d19e;
L_0041d195:; BB(0x0041d195);
    /* 0041d195: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d197: call 0x41d504 */ r_esp -= 4; W32(r_esp, 0x41d19cu); f_0041d504();
    /* 0041d19c: jmp 0x41d1b5 */ goto L_0041d1b5;
L_0041d19e:; BB(0x0041d19e);
    /* 0041d19e: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1a3: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d1a5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41d1aau); f_007aaa30();
    /* 0041d1aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d1ac: je 0x41d1b5 */ if (fZ) goto L_0041d1b5;
L_0041d1ae:; BB(0x0041d1ae);
    /* 0041d1ae: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d1b0: call 0x41d410 */ r_esp -= 4; W32(r_esp, 0x41d1b5u); f_0041d410();
L_0041d1b5:; BB(0x0041d1b5);
    /* 0041d1b5: fld dword ptr [0x8fbde4] */ FPUSH(R_F32((u32)(0x8fbde4u)));
    /* 0041d1bb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0041d1bf: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0041d1c5: fcom dword ptr [0x8fbddc] */ fx_compare(ST(0), R_F32((u32)(0x8fbddcu))); 
    /* 0041d1cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041d1cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041d1ce: mov dword ptr [esi + 0xc8], 0x3ef5c290 */ W32((u32)(r_esi+0xc8u), 0x3ef5c290u);
    /* 0041d1d8: jbe 0x41d1f1 */ if ((fC||fZ)) goto L_0041d1f1;
L_0041d1da:; BB(0x0041d1da);
    /* 0041d1da: fcom dword ptr [0x8fbdd8] */ fx_compare(ST(0), R_F32((u32)(0x8fbdd8u))); 
    /* 0041d1e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041d1e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041d1e3: jae 0x41d1f1 */ if (!fC) goto L_0041d1f1;
L_0041d1e5:; BB(0x0041d1e5);
    /* 0041d1e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041d1e7: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d1ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d1ee: ret 4 */ FN_RET(0x0041d16e); r_esp += 8; return;
L_0041d1f1:; BB(0x0041d1f1);
    /* 0041d1f1: fcom dword ptr [0x8fbde8] */ fx_compare(ST(0), R_F32((u32)(0x8fbde8u))); 
    /* 0041d1f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041d1f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041d1fa: jbe 0x41d213 */ if ((fC||fZ)) goto L_0041d213;
L_0041d1fc:; BB(0x0041d1fc);
    /* 0041d1fc: fcom dword ptr [0x8fbdd4] */ fx_compare(ST(0), R_F32((u32)(0x8fbdd4u))); 
    /* 0041d202: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041d204: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041d205: jae 0x41d213 */ if (!fC) goto L_0041d213;
L_0041d207:; BB(0x0041d207);
    /* 0041d207: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041d209: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d20f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d210: ret 4 */ FN_RET(0x0041d16e); r_esp += 8; return;
L_0041d213:; BB(0x0041d213);
    /* 0041d213: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041d215: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d21a: push dword ptr [esi + 0x87c] */ { u32 v = R32((u32)(r_esi+0x87cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d220: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d223: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x41d228u); f_007a8c74();
    /* 0041d228: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d22b: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0041d22e: mov ecx, eax */ r_ecx = r_eax;
    /* 0041d230: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41d235u); f_0082dcbc();
    /* 0041d235: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041d239: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0041d23c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41d241u); f_0082ddd8();
    /* 0041d241: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041d244: mov eax, dword ptr [esi + 0x768] */ r_eax = R32((u32)(r_esi+0x768u));
    /* 0041d24a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d24c: je 0x41d275 */ if (fZ) goto L_0041d275;
L_0041d24e:; BB(0x0041d24e);
    /* 0041d24e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d251: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0041d255: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0041d259: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041d25b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041d25e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041d262: mov dword ptr [esp + 8], 0x3f4ccccd */ W32((u32)(r_esp+0x8u), 0x3f4ccccdu);
    /* 0041d26a: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d26c: call 0x41c79c */ r_esp -= 4; W32(r_esp, 0x41d271u); f_0041c79c();
    /* 0041d271: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_0041d275:; BB(0x0041d275);
    /* 0041d275: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d278: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0041d27c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0041d280: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0041d284: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041d286: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041d289: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041d28d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0041d291: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d293: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x41d298u); f_0052069c();
    /* 0041d298: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d29e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d29f: ret 4 */ FN_RET(0x0041d16e); r_esp += 8; return;
L_0041d38d:; BB(0x0041d38d);
    /* 0041d38d: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d38f: call 0x41d3d0 */ r_esp -= 4; W32(r_esp, 0x41d394u); f_0041d3d0();
    /* 0041d394: jmp 0x41d185 */ goto L_0041d185;
}

void f_0041d298(void)
{
    FN_ENTER(0x0041d298);
    /* 0041d298: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d29e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d29f: ret 4 */ FN_RET(0x0041d298); r_esp += 8; return;
}

void f_0041d39c(void) /* sub_41D39C */
{
    FN_ENTER(0x0041d39c);
    /* 0041d39c: mov eax, dword ptr [ecx + 0x770] */ r_eax = R32((u32)(r_ecx+0x770u));
    /* 0041d3a2: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d3a7: jge 0x41d3ac */ if ((fS==fO)) goto L_0041d3ac;
L_0041d3a9:; BB(0x0041d3a9);
    /* 0041d3a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041d3ab: ret  */ FN_RET(0x0041d39c); r_esp += 4; return;
L_0041d3ac:; BB(0x0041d3ac);
    /* 0041d3ac: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d3b2: mov eax, dword ptr [ecx + 0x6ec] */ r_eax = R32((u32)(r_ecx+0x6ecu));
    /* 0041d3b8: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d3bb: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41d3c0u); f_004c6c54();
    /* 0041d3c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041d3c2: je 0x41d3ca */ if (fZ) goto L_0041d3ca;
L_0041d3c4:; BB(0x0041d3c4);
    /* 0041d3c4: mov eax, 1 */ r_eax = 0x1u;
    /* 0041d3c9: ret  */ FN_RET(0x0041d39c); r_esp += 4; return;
L_0041d3ca:; BB(0x0041d3ca);
    /* 0041d3ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041d3cc: ret  */ FN_RET(0x0041d39c); r_esp += 4; return;
}

void f_0041d3d0(void) /* sub_41D3D0 */
{
    FN_ENTER(0x0041d3d0);
    /* 0041d3d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3d1: mov esi, ecx */ r_esi = r_ecx;
    /* 0041d3d3: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d3d5: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3da: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41d3dfu); f_007aaa30();
    /* 0041d3df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d3e1: jne 0x41d3f3 */ if (!fZ) goto L_0041d3f3;
L_0041d3e3:; BB(0x0041d3e3);
    /* 0041d3e3: push 0x41c40000 */ { u32 v = 0x41c40000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3e8: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d3ea: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41d3efu); f_007aaa30();
    /* 0041d3ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041d3f1: je 0x41d40b */ if (fZ) goto L_0041d40b;
L_0041d3f3:; BB(0x0041d3f3);
    /* 0041d3f3: add esi, 0x644 */ {  u32 a = r_esi; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041d3f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041d3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3fe: push 0x315 */ { u32 v = 0x315u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d403: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41d408u); f_00814298();
    /* 0041d408: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0041d40b:; BB(0x0041d40b);
    /* 0041d40b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d40c: ret  */ FN_RET(0x0041d3d0); r_esp += 4; return;
}

void f_0041d410(void) /* sub_41D410 */
{
    FN_ENTER(0x0041d410);
    /* 0041d410: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d411: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d412: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d413: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041d416: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041d418: mov eax, dword ptr [0x8fb42c] */ r_eax = R32((u32)(0x8fb42cu));
    /* 0041d41d: mov edx, dword ptr [0x8fb43c] */ r_edx = R32((u32)(0x8fb43cu));
    /* 0041d423: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0041d426: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 0041d42c: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 0041d434: mov dword ptr [esp + 8], 0x41700000 */ W32((u32)(r_esp+0x8u), 0x41700000u);
    /* 0041d43c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0041d440: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041d442: mov dword ptr [esp + 0xc], 0x41000000 */ W32((u32)(r_esp+0xcu), 0x41000000u);
    /* 0041d44a: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 0041d44d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0041d44f: jle 0x41d461 */ if ((fZ||fS!=fO)) goto L_0041d461;
L_0041d451:; BB(0x0041d451);
    /* 0041d451: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0041d453: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0041d456: mov dword ptr [edi + edx*4], ebp */ W32((u32)(r_edi+r_edx*4), r_ebp);
    /* 0041d459: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041d45c: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d45f: jl 0x41d451 */ if ((fS!=fO)) goto L_0041d451;
L_0041d461:; BB(0x0041d461);
    /* 0041d461: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041d463: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d464: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0041d467: lea ebp, [ebx + 0x45c] */ r_ebp = (u32)(r_ebx+0x45cu);
    /* 0041d46d: lea edi, [ebx + 0x468] */ r_edi = (u32)(r_ebx+0x468u);
    /* 0041d473: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d479: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d47a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d47c: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41d481u); f_00520c70();
    /* 0041d481: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41d486u); f_00420a44();
    /* 0041d486: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d488: jne 0x41d4b0 */ if (!fZ) goto L_0041d4b0;
L_0041d48a:; BB(0x0041d48a);
    /* 0041d48a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d48d: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d493: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d494: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d496: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d497: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41d49cu); f_0051fdf8();
    /* 0041d49c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d49f: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d4a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d4a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4a9: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41d4aeu); f_0051fdf8();
    /* 0041d4ae: jmp 0x41d4d9 */ goto L_0041d4d9;
L_0041d4b0:; BB(0x0041d4b0);
    /* 0041d4b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d4b3: jne 0x41d4d9 */ if (!fZ) goto L_0041d4d9;
L_0041d4b5:; BB(0x0041d4b5);
    /* 0041d4b5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d4b8: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d4be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d4c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4c2: call 0x419008 */ r_esp -= 4; W32(r_esp, 0x41d4c7u); f_00419008();
    /* 0041d4c7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d4ca: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d4d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d4d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4d4: call 0x419008 */ r_esp -= 4; W32(r_esp, 0x41d4d9u); f_00419008();
L_0041d4d9:; BB(0x0041d4d9);
    /* 0041d4d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041d4db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4dc: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d4e5: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41d4eau); f_00520c70();
    /* 0041d4ea: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4ec: mov eax, dword ptr [ebx + 0x780] */ r_eax = R32((u32)(r_ebx+0x780u));
    /* 0041d4f2: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d4f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4f6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41d4fbu); f_0050b7a4();
    /* 0041d4fb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d4fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041d4ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d500: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d501: ret  */ FN_RET(0x0041d410); r_esp += 4; return;
}

void f_0041d504(void) /* sub_41D504 */
{
    FN_ENTER(0x0041d504);
    /* 0041d504: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d505: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d506: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d507: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041d50a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041d50c: mov eax, dword ptr [0x8fb440] */ r_eax = R32((u32)(0x8fb440u));
    /* 0041d511: mov edx, dword ptr [0x8fb450] */ r_edx = R32((u32)(0x8fb450u));
    /* 0041d517: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0041d51a: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 0041d520: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 0041d528: mov dword ptr [esp + 8], 0x41700000 */ W32((u32)(r_esp+0x8u), 0x41700000u);
    /* 0041d530: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0041d534: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041d536: mov dword ptr [esp + 0xc], 0x41000000 */ W32((u32)(r_esp+0xcu), 0x41000000u);
    /* 0041d53e: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 0041d541: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0041d543: jle 0x41d555 */ if ((fZ||fS!=fO)) goto L_0041d555;
L_0041d545:; BB(0x0041d545);
    /* 0041d545: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0041d547: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0041d54a: mov dword ptr [edi + edx*4], ebp */ W32((u32)(r_edi+r_edx*4), r_ebp);
    /* 0041d54d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041d550: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d553: jl 0x41d545 */ if ((fS!=fO)) goto L_0041d545;
L_0041d555:; BB(0x0041d555);
    /* 0041d555: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041d557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d558: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0041d55b: lea ebp, [ebx + 0x474] */ r_ebp = (u32)(r_ebx+0x474u);
    /* 0041d561: lea edi, [ebx + 0x480] */ r_edi = (u32)(r_ebx+0x480u);
    /* 0041d567: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d56d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d56e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d570: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41d575u); f_00520c70();
    /* 0041d575: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41d57au); f_00420a44();
    /* 0041d57a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d57c: jne 0x41d5a4 */ if (!fZ) goto L_0041d5a4;
L_0041d57e:; BB(0x0041d57e);
    /* 0041d57e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d581: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d588: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d58a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d58b: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41d590u); f_0051fdf8();
    /* 0041d590: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d593: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d599: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d59a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d59c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d59d: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41d5a2u); f_0051fdf8();
    /* 0041d5a2: jmp 0x41d5cd */ goto L_0041d5cd;
L_0041d5a4:; BB(0x0041d5a4);
    /* 0041d5a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d5a7: jne 0x41d5cd */ if (!fZ) goto L_0041d5cd;
L_0041d5a9:; BB(0x0041d5a9);
    /* 0041d5a9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d5ac: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d5b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d5b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5b6: call 0x419008 */ r_esp -= 4; W32(r_esp, 0x41d5bbu); f_00419008();
    /* 0041d5bb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041d5be: push dword ptr [ebx + 0x690] */ { u32 v = R32((u32)(r_ebx+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d5c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5c8: call 0x419008 */ r_esp -= 4; W32(r_esp, 0x41d5cdu); f_00419008();
L_0041d5cd:; BB(0x0041d5cd);
    /* 0041d5cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041d5cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5d0: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d5d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041d5d9: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41d5deu); f_00520c70();
    /* 0041d5de: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5e0: mov eax, dword ptr [ebx + 0x780] */ r_eax = R32((u32)(r_ebx+0x780u));
    /* 0041d5e6: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d5e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5ea: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41d5efu); f_0050b7a4();
    /* 0041d5ef: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d5f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041d5f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d5f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d5f5: ret  */ FN_RET(0x0041d504); r_esp += 4; return;
}

void f_0041d5f8(void) /* sub_41D5F8 */
{
    FN_ENTER(0x0041d5f8);
    /* 0041d5f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5f9: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041d5ff: mov edi, ecx */ r_edi = r_ecx;
    /* 0041d601: mov eax, dword ptr [esp + 0xbc] */ r_eax = R32((u32)(r_esp+0xbcu));
    /* 0041d608: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041d60b: ja 0x41db1e */ if ((!fC&&!fZ)) goto L_0041db1e;
L_0041d611:; BB(0x0041d611);
    /* 0041d611: mov eax, dword ptr [eax*4 + 0x8fb454] */ r_eax = R32((u32)(r_eax*4+0x8fb454u));
    /* 0041d618: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041db1e:; BB(0x0041db1e);
    /* 0041db1e: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db25: ret 4 */ FN_RET(0x0041d5f8); r_esp += 8; return;
}

void f_0041d61a(void)
{
    FN_ENTER(0x0041d61a);
    /* 0041d61a: mov edx, dword ptr [edi + 0x6ec] */ r_edx = R32((u32)(r_edi+0x6ecu));
    /* 0041d620: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041d623: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041d629: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041d62b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041d62c: jbe 0x41d696 */ if ((fC||fZ)) goto L_0041d696;
L_0041d62e:; BB(0x0041d62e);
    /* 0041d62e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d630: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d632: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041d634: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d636: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d63cu); call_ind(t); }
    /* 0041d63c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041d640: mov byte ptr [esp + 0x50], 0x12 */ W8((u32)(r_esp+0x50u), 0x12u);
    /* 0041d645: mov edx, 0x18 */ r_edx = 0x18u;
    /* 0041d64a: mov byte ptr [esp + 0x51], 5 */ W8((u32)(r_esp+0x51u), 0x5u);
    /* 0041d64f: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 0041d654: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041d65a: mov word ptr [esp + 0x54], dx */ W16((u32)(r_esp+0x54u), (u16)r_edx);
    /* 0041d65f: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 0041d664: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0041d668: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041d66f: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0041d673: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041d679: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041d67f: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0041d683: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0041d687: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d68cu); f_008003e0();
    /* 0041d68c: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d692: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d693: ret 4 */ FN_RET(0x0041d61a); r_esp += 8; return;
L_0041d696:; BB(0x0041d696);
    /* 0041d696: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d69c: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d69f: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d6a1: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41d6a6u); f_004c6c54();
    /* 0041d6a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d6a8: je 0x41d712 */ if (fZ) goto L_0041d712;
L_0041d6aa:; BB(0x0041d6aa);
    /* 0041d6aa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d6ac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d6ae: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041d6b0: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d6b2: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d6b8u); call_ind(t); }
    /* 0041d6b8: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041d6bc: mov byte ptr [esp + 0x3c], 0x12 */ W8((u32)(r_esp+0x3cu), 0x12u);
    /* 0041d6c1: mov edx, 3 */ r_edx = 0x3u;
    /* 0041d6c6: mov byte ptr [esp + 0x3d], 5 */ W8((u32)(r_esp+0x3du), 0x5u);
    /* 0041d6cb: mov word ptr [esp + 0x3e], ax */ W16((u32)(r_esp+0x3eu), (u16)r_eax);
    /* 0041d6d0: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041d6d6: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 0041d6db: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0041d6e0: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0041d6e4: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041d6eb: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0041d6ef: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041d6f5: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041d6fb: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0041d6ff: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0041d703: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d708u); f_008003e0();
    /* 0041d708: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d70e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d70f: ret 4 */ FN_RET(0x0041d61a); r_esp += 8; return;
L_0041d712:; BB(0x0041d712);
    /* 0041d712: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d718: mov eax, dword ptr [edi + 0x6ec] */ r_eax = R32((u32)(r_edi+0x6ecu));
    /* 0041d71e: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d720: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d723: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41d728u); f_004c6c54();
    /* 0041d728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d72a: je 0x41d794 */ if (fZ) goto L_0041d794;
L_0041d72c:; BB(0x0041d72c);
    /* 0041d72c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d72e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d730: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041d732: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d734: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d73au); call_ind(t); }
    /* 0041d73a: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041d73e: mov byte ptr [esp + 0x28], 0x12 */ W8((u32)(r_esp+0x28u), 0x12u);
    /* 0041d743: mov edx, 4 */ r_edx = 0x4u;
    /* 0041d748: mov byte ptr [esp + 0x29], 5 */ W8((u32)(r_esp+0x29u), 0x5u);
    /* 0041d74d: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 0041d752: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041d758: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 0041d75d: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 0041d762: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0041d766: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041d76d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0041d771: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041d777: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041d77d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0041d781: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0041d785: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d78au); f_008003e0();
    /* 0041d78a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d790: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d791: ret 4 */ FN_RET(0x0041d61a); r_esp += 8; return;
L_0041d794:; BB(0x0041d794);
    /* 0041d794: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d796: call 0x41d39c */ r_esp -= 4; W32(r_esp, 0x41d79bu); f_0041d39c();
    /* 0041d79b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d79d: je 0x41d806 */ if (fZ) goto L_0041d806;
L_0041d79f:; BB(0x0041d79f);
    /* 0041d79f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d7a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d7a3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041d7a5: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d7a7: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d7adu); call_ind(t); }
    /* 0041d7ad: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041d7b1: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 0041d7b6: mov edx, 5 */ r_edx = 0x5u;
    /* 0041d7bb: mov byte ptr [esp + 0x15], dl */ W8((u32)(r_esp+0x15u), (u8)r_edx);
    /* 0041d7bf: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0041d7c4: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041d7ca: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0041d7cf: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 0041d7d4: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0041d7d8: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041d7df: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041d7e3: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041d7e9: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041d7ef: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0041d7f3: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0041d7f7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d7fcu); f_008003e0();
    /* 0041d7fc: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d802: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d803: ret 4 */ FN_RET(0x0041d61a); r_esp += 8; return;
L_0041d806:; BB(0x0041d806);
    /* 0041d806: movzx eax, word ptr [0xa43774] */ r_eax = (u32)R16((u32)(0xa43774u));
    /* 0041d80d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d80f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d810: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x41d815u); f_007be19c();
    /* 0041d815: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d818: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d81a: je 0x41d823 */ if (fZ) goto L_0041d823;
L_0041d81c:; BB(0x0041d81c);
    /* 0041d81c: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 0041d821: jmp 0x41d828 */ goto L_0041d828;
L_0041d823:; BB(0x0041d823);
    /* 0041d823: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_0041d828:; BB(0x0041d828);
    /* 0041d828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d829: mov edx, dword ptr [edi + 0x6ec] */ r_edx = R32((u32)(r_edi+0x6ecu));
    /* 0041d82f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041d832: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d834: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41d839u); f_004c6c54();
    /* 0041d839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d83b: je 0x41db1e */ if (fZ) goto L_0041db1e;
L_0041d841:; BB(0x0041d841);
    /* 0041d841: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d843: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d845: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041d847: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d849: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d84fu); call_ind(t); }
    /* 0041d84f: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041d853: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041d857: mov edx, 9 */ r_edx = 0x9u;
    /* 0041d85c: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041d861: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041d866: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041d86c: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041d871: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0041d876: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041d879: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041d880: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041d884: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041d88a: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041d890: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041d894: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0041d898: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d89du); f_008003e0();
    /* 0041d89d: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d8a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d8a4: ret 4 */ FN_RET(0x0041d61a); r_esp += 8; return;
L_0041db1e:; BB(0x0041db1e);
    /* 0041db1e: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db25: ret 4 */ FN_RET(0x0041d61a); r_esp += 8; return;
}

void f_0041d8a7(void)
{
    FN_ENTER(0x0041d8a7);
    /* 0041d8a7: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d8a9: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x41d8aeu); f_00419ff0();
    /* 0041d8ae: jmp 0x41db1e */ goto L_0041db1e;
L_0041db1e:; BB(0x0041db1e);
    /* 0041db1e: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db25: ret 4 */ FN_RET(0x0041d8a7); r_esp += 8; return;
}

void f_0041d8b3(void)
{
    FN_ENTER(0x0041d8b3);
    /* 0041d8b3: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d8b5: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x41d8bau); f_0041a004();
    /* 0041d8ba: jmp 0x41db1e */ goto L_0041db1e;
L_0041db1e:; BB(0x0041db1e);
    /* 0041db1e: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db25: ret 4 */ FN_RET(0x0041d8b3); r_esp += 8; return;
}

void f_0041d8bf(void)
{
    FN_ENTER(0x0041d8bf);
    /* 0041d8bf: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0041d8c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041d8c3: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0041d8ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d8cc: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41d8d2u); call_ind(t); }
    /* 0041d8d2: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 0041d8dc: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d8de: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x41d8e3u); f_00419130();
    /* 0041d8e3: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0041d8e9: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041d8ee: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0041d8f4: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d8fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d8fb: ret 4 */ FN_RET(0x0041d8bf); r_esp += 8; return;
}

void f_0041d8fe(void)
{
    FN_ENTER(0x0041d8fe);
    /* 0041d8fe: mov edx, dword ptr [edi + 0x6ec] */ r_edx = R32((u32)(r_edi+0x6ecu));
    /* 0041d904: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041d907: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041d90d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041d90f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041d910: ja 0x41da94 */ if ((!fC&&!fZ)) goto L_0041da94;
L_0041d916:; BB(0x0041d916);
    /* 0041d916: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041d919: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d91f: jne 0x41da11 */ if (!fZ) goto L_0041da11;
L_0041d925:; BB(0x0041d925);
    /* 0041d925: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d92b: jne 0x41d9a0 */ if (!fZ) goto L_0041d9a0;
L_0041d92d:; BB(0x0041d92d);
    /* 0041d92d: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d933: je 0x41db1e */ if (fZ) goto L_0041db1e;
L_0041d939:; BB(0x0041d939);
    /* 0041d939: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d93b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d93d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041d93f: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d941: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d947u); call_ind(t); }
    /* 0041d947: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041d94b: mov byte ptr [esp + 0x64], 0x12 */ W8((u32)(r_esp+0x64u), 0x12u);
    /* 0041d950: mov edx, 5 */ r_edx = 0x5u;
    /* 0041d955: mov byte ptr [esp + 0x65], dl */ W8((u32)(r_esp+0x65u), (u8)r_edx);
    /* 0041d959: mov word ptr [esp + 0x66], ax */ W16((u32)(r_esp+0x66u), (u16)r_eax);
    /* 0041d95e: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041d964: mov word ptr [esp + 0x68], dx */ W16((u32)(r_esp+0x68u), (u16)r_edx);
    /* 0041d969: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 0041d96e: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 0041d972: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041d979: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0041d97d: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041d983: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041d989: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0041d98d: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0041d991: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d996u); f_008003e0();
    /* 0041d996: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d99c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041d99d: ret 4 */ FN_RET(0x0041d8fe); r_esp += 8; return;
L_0041d9a0:; BB(0x0041d9a0);
    /* 0041d9a0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d9a2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d9a4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041d9a6: mov ecx, edi */ r_ecx = r_edi;
    /* 0041d9a8: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d9aeu); call_ind(t); }
    /* 0041d9ae: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041d9b2: mov byte ptr [esp + 0x78], 0x12 */ W8((u32)(r_esp+0x78u), 0x12u);
    /* 0041d9b7: mov edx, 4 */ r_edx = 0x4u;
    /* 0041d9bc: mov byte ptr [esp + 0x79], 5 */ W8((u32)(r_esp+0x79u), 0x5u);
    /* 0041d9c1: mov word ptr [esp + 0x7a], ax */ W16((u32)(r_esp+0x7au), (u16)r_eax);
    /* 0041d9c6: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041d9cc: mov word ptr [esp + 0x7c], dx */ W16((u32)(r_esp+0x7cu), (u16)r_edx);
    /* 0041d9d1: mov word ptr [esp + 0x7e], ax */ W16((u32)(r_esp+0x7eu), (u16)r_eax);
    /* 0041d9d6: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0041d9da: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041d9e1: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0041d9e8: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041d9ee: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041d9f4: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0041d9fb: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 0041da02: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41da07u); f_008003e0();
    /* 0041da07: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041da0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041da0e: ret 4 */ FN_RET(0x0041d8fe); r_esp += 8; return;
L_0041da11:; BB(0x0041da11);
    /* 0041da11: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041da13: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041da15: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041da17: mov ecx, edi */ r_ecx = r_edi;
    /* 0041da19: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41da1fu); call_ind(t); }
    /* 0041da1f: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041da23: mov byte ptr [esp + 0x8c], 0x12 */ W8((u32)(r_esp+0x8cu), 0x12u);
    /* 0041da2b: mov edx, 3 */ r_edx = 0x3u;
    /* 0041da30: mov byte ptr [esp + 0x8d], 5 */ W8((u32)(r_esp+0x8du), 0x5u);
    /* 0041da38: mov word ptr [esp + 0x8e], ax */ W16((u32)(r_esp+0x8eu), (u16)r_eax);
    /* 0041da40: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041da46: mov word ptr [esp + 0x90], dx */ W16((u32)(r_esp+0x90u), (u16)r_edx);
    /* 0041da4e: mov word ptr [esp + 0x92], ax */ W16((u32)(r_esp+0x92u), (u16)r_eax);
    /* 0041da56: lea ecx, [esp + 0x8c] */ r_ecx = (u32)(r_esp+0x8cu);
    /* 0041da5d: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041da64: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0041da6b: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041da71: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041da77: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0041da7e: mov dword ptr [esp + 0x9c], edi */ W32((u32)(r_esp+0x9cu), r_edi);
    /* 0041da85: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41da8au); f_008003e0();
    /* 0041da8a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041da90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041da91: ret 4 */ FN_RET(0x0041d8fe); r_esp += 8; return;
L_0041da94:; BB(0x0041da94);
    /* 0041da94: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041da96: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0041da98: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041da9a: mov ecx, edi */ r_ecx = r_edi;
    /* 0041da9c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41daa2u); call_ind(t); }
    /* 0041daa2: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041daa6: mov byte ptr [esp + 0xa0], 0x12 */ W8((u32)(r_esp+0xa0u), 0x12u);
    /* 0041daae: mov edx, 0x18 */ r_edx = 0x18u;
    /* 0041dab3: mov byte ptr [esp + 0xa1], 5 */ W8((u32)(r_esp+0xa1u), 0x5u);
    /* 0041dabb: mov word ptr [esp + 0xa2], ax */ W16((u32)(r_esp+0xa2u), (u16)r_eax);
    /* 0041dac3: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041dac9: mov word ptr [esp + 0xa4], dx */ W16((u32)(r_esp+0xa4u), (u16)r_edx);
    /* 0041dad1: mov word ptr [esp + 0xa6], ax */ W16((u32)(r_esp+0xa6u), (u16)r_eax);
    /* 0041dad9: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 0041dae0: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041dae7: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 0041daee: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041daf4: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041dafa: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 0041db01: mov dword ptr [esp + 0xb0], edi */ W32((u32)(r_esp+0xb0u), r_edi);
    /* 0041db08: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41db0du); f_008003e0();
    /* 0041db0d: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db14: ret 4 */ FN_RET(0x0041d8fe); r_esp += 8; return;
L_0041db1e:; BB(0x0041db1e);
    /* 0041db1e: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db25: ret 4 */ FN_RET(0x0041d8fe); r_esp += 8; return;
}

void f_0041db17(void)
{
    FN_ENTER(0x0041db17);
    /* 0041db17: mov ecx, edi */ r_ecx = r_edi;
    /* 0041db19: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41db1eu); f_007aa094();
    /* 0041db1e: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db25: ret 4 */ FN_RET(0x0041db17); r_esp += 8; return;
}

void f_0041db1e(void)
{
    FN_ENTER(0x0041db1e);
    /* 0041db1e: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041db24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041db25: ret 4 */ FN_RET(0x0041db1e); r_esp += 8; return;
}

void f_0041db28(void) /* sub_41DB28 */
{
    FN_ENTER(0x0041db28);
    /* 0041db28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041db29: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041db2f: mov esi, ecx */ r_esi = r_ecx;
    /* 0041db31: mov eax, dword ptr [esp + 0xcc] */ r_eax = R32((u32)(r_esp+0xccu));
    /* 0041db38: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041db3b: ja 0x41e3c0 */ if ((!fC&&!fZ)) goto L_0041e3c0;
L_0041db41:; BB(0x0041db41);
    /* 0041db41: mov eax, dword ptr [eax*4 + 0x8fb484] */ r_eax = R32((u32)(r_eax*4+0x8fb484u));
    /* 0041db48: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041e3c0:; BB(0x0041e3c0);
    /* 0041e3c0: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e3c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e3c7: ret 4 */ FN_RET(0x0041db28); r_esp += 8; return;
}

void f_0041db4a(void)
{
    FN_ENTER(0x0041db4a);
    /* 0041db4a: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 0041db50: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041db53: jl 0x41e3c0 */ if ((fS!=fO)) goto L_0041e3c0;
L_0041db59:; BB(0x0041db59);
    /* 0041db59: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041db5b: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0041db5d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041db5f: mov ecx, esi */ r_ecx = r_esi;
    /* 0041db61: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41db67u); call_ind(t); }
    /* 0041db67: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041db6b: mov byte ptr [esp + 8], 0x12 */ W8((u32)(r_esp+0x8u), 0x12u);
    /* 0041db70: mov edx, 0x16 */ r_edx = 0x16u;
    /* 0041db75: mov byte ptr [esp + 9], 5 */ W8((u32)(r_esp+0x9u), 0x5u);
    /* 0041db7a: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0041db7f: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041db85: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0041db8a: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0041db8f: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0041db93: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041db9a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0041db9e: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041dba4: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041dbaa: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0041dbae: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0041dbb2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41dbb7u); f_008003e0();
    /* 0041dbb7: jmp 0x41e3c0 */ goto L_0041e3c0;
L_0041e3c0:; BB(0x0041e3c0);
    /* 0041e3c0: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e3c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e3c7: ret 4 */ FN_RET(0x0041db4a); r_esp += 8; return;
}

void f_0041dbbc(void)
{
    FN_ENTER(0x0041dbbc);
    /* 0041dbbc: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dbbe: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x41dbc3u); f_0051f894();
    /* 0041dbc3: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbc5: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x41dbcau); f_006bb100();
    /* 0041dbca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041dbcb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041dbcd: mov dword ptr [esi + 0x30], 0x12008 */ W32((u32)(r_esi+0x30u), 0x12008u);
    /* 0041dbd4: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dbd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dbd8: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x41dbdeu); call_ind(t); }
    /* 0041dbde: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x41dbe3u); f_00717f38();
    /* 0041dbe3: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x41dbe8u); f_004d3250();
    /* 0041dbe8: mov edx, dword ptr [esi + 0x8b4] */ r_edx = R32((u32)(r_esi+0x8b4u));
    /* 0041dbee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dbf0: je 0x41dc09 */ if (fZ) goto L_0041dc09;
L_0041dbf2:; BB(0x0041dbf2);
    /* 0041dbf2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041dbf6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041dbfb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0041dbff: mov dword ptr [esi + 0x8b4], 0 */ W32((u32)(r_esi+0x8b4u), 0x0u);
L_0041dc09:; BB(0x0041dc09);
    /* 0041dc09: mov eax, dword ptr [esi + 0x768] */ r_eax = R32((u32)(r_esi+0x768u));
    /* 0041dc0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dc11: je 0x41e3c0 */ if (fZ) goto L_0041e3c0;
L_0041dc17:; BB(0x0041dc17);
    /* 0041dc17: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dc19: call 0x424330 */ r_esp -= 4; W32(r_esp, 0x41dc1eu); f_00424330();
    /* 0041dc1e: jmp 0x41e3c0 */ goto L_0041e3c0;
L_0041e3c0:; BB(0x0041e3c0);
    /* 0041e3c0: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e3c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e3c7: ret 4 */ FN_RET(0x0041dbbc); r_esp += 8; return;
}

void f_0041dc23(void)
{
    FN_ENTER(0x0041dc23);
    /* 0041dc23: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0041dc25: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0041dc2a: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0041dc31: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dc33: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x41dc39u); call_ind(t); }
    /* 0041dc39: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 0041dc43: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dc45: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x41dc4au); f_00419130();
    /* 0041dc4a: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0041dc50: mov dword ptr [esi + 0x884], 0 */ W32((u32)(r_esi+0x884u), 0x0u);
    /* 0041dc5a: or eax, 0xe80 */ {  u32 a = r_eax; u32 b = 0xe80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041dc5f: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0041dc65: push 0x8fc30c */ { u32 v = 0x8fc30cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041dc6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041dc6c: mov dword ptr [esi + 0x86c], edx */ W32((u32)(r_esi+0x86cu), r_edx);
    /* 0041dc72: mov dword ptr [esi + 0x870], edx */ W32((u32)(r_esi+0x870u), r_edx);
    /* 0041dc78: mov dword ptr [esi + 0x8b4], edx */ W32((u32)(r_esi+0x8b4u), r_edx);
    /* 0041dc7e: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x41dc83u); f_00814f0c();
    /* 0041dc83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041dc84: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x41dc89u); f_00717f74();
    /* 0041dc89: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41dc8eu); f_00420a44();
    /* 0041dc8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dc90: jne 0x41dcde */ if (!fZ) goto L_0041dcde;
L_0041dc92:; BB(0x0041dc92);
    /* 0041dc92: mov byte ptr [esp + 0x1c], 2 */ W8((u32)(r_esp+0x1cu), 0x2u);
    /* 0041dc97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041dc99: mov byte ptr [esp + 0x1d], al */ W8((u32)(r_esp+0x1du), (u8)r_eax);
    /* 0041dc9d: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0041dca5: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 0041dcaa: mov dword ptr [esp + 0x24], 0x3f000000 */ W32((u32)(r_esp+0x24u), 0x3f000000u);
    /* 0041dcb2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcb4: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x41dcb9u); f_004d31f4();
    /* 0041dcb9: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0041dcbd: push 0x31c7 */ { u32 v = 0x31c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcc3: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x41dcc8u); f_004d6770();
    /* 0041dcc8: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0041dccb: add esi, 0x5c */ {  u32 a = r_esi; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041dcce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041dccf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcd1: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x41dcd6u); f_004d681c();
    /* 0041dcd6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dcd9: jmp 0x41e3c0 */ goto L_0041e3c0;
L_0041dcde:; BB(0x0041dcde);
    /* 0041dcde: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dce1: jne 0x41e3c0 */ if (!fZ) goto L_0041e3c0;
L_0041dce7:; BB(0x0041dce7);
    /* 0041dce7: mov byte ptr [esp + 0x1d], 1 */ W8((u32)(r_esp+0x1du), 0x1u);
    /* 0041dcec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041dcee: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 0041dcf3: mov byte ptr [esp + 0x1c], 2 */ W8((u32)(r_esp+0x1cu), 0x2u);
    /* 0041dcf8: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0041dd00: mov dword ptr [esp + 0x24], 0x3f000000 */ W32((u32)(r_esp+0x24u), 0x3f000000u);
    /* 0041dd08: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd0a: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x41dd0fu); f_004d31f4();
    /* 0041dd0f: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0041dd13: push 0x3333 */ { u32 v = 0x3333u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd19: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x41dd1eu); f_004d6770();
    /* 0041dd1e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0041dd21: add esi, 0x5c */ {  u32 a = r_esi; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041dd24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd27: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x41dd2cu); f_004d681c();
    /* 0041dd2c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dd2f: jmp 0x41e3c0 */ goto L_0041e3c0;
L_0041e3c0:; BB(0x0041e3c0);
    /* 0041e3c0: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e3c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e3c7: ret 4 */ FN_RET(0x0041dc23); r_esp += 8; return;
}

void f_0041dd34(void)
{
    FN_ENTER(0x0041dd34);
    /* 0041dd34: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 0041dd3a: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041dd3d: jl 0x41e3c0 */ if ((fS!=fO)) goto L_0041e3c0;
L_0041dd43:; BB(0x0041dd43);
    /* 0041dd43: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd45: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd47: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041dd49: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dd4b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41dd51u); call_ind(t); }
    /* 0041dd51: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041dd55: mov byte ptr [esp + 0x28], 0x12 */ W8((u32)(r_esp+0x28u), 0x12u);
    /* 0041dd5a: mov edx, 0x16 */ r_edx = 0x16u;
    /* 0041dd5f: mov byte ptr [esp + 0x29], 5 */ W8((u32)(r_esp+0x29u), 0x5u);
    /* 0041dd64: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 0041dd69: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041dd6f: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 0041dd74: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 0041dd79: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0041dd7d: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041dd84: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0041dd88: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041dd8e: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041dd94: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0041dd98: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0041dd9c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41dda1u); f_008003e0();
    /* 0041dda1: jmp 0x41e3c0 */ goto L_0041e3c0;
L_0041e3c0:; BB(0x0041e3c0);
    /* 0041e3c0: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e3c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e3c7: ret 4 */ FN_RET(0x0041dd34); r_esp += 8; return;
}

void f_0041dda6(void)
{
    FN_ENTER(0x0041dda6);
    /* 0041dda6: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dda8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41ddadu); f_007aa094();
    /* 0041ddad: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 0041ddb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ddb5: jne 0x41e39d */ if (!fZ) goto L_0041e39d;
L_0041ddbb:; BB(0x0041ddbb);
    /* 0041ddbb: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ddc0: mov ecx, esi */ r_ecx = r_esi;
    /* 0041ddc2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41ddc7u); f_007aaa30();
    /* 0041ddc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ddc9: jne 0x41dddb */ if (!fZ) goto L_0041dddb;
L_0041ddcb:; BB(0x0041ddcb);
    /* 0041ddcb: push 0x42c40000 */ { u32 v = 0x42c40000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ddd0: mov ecx, esi */ r_ecx = r_esi;
    /* 0041ddd2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41ddd7u); f_007aaa30();
    /* 0041ddd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ddd9: je 0x41ddf9 */ if (fZ) goto L_0041ddf9;
L_0041dddb:; BB(0x0041dddb);
    /* 0041dddb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041dddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ddde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dde0: push 0x31b */ { u32 v = 0x31bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041dde5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41ddeau); f_00814298();
    /* 0041ddea: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ddec: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ddf1: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x41ddf6u); f_006ff5f8();
    /* 0041ddf6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041ddf9:; BB(0x0041ddf9);
    /* 0041ddf9: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0041ddff: fcom dword ptr [0x8fbdbc] */ fx_compare(ST(0), R_F32((u32)(0x8fbdbcu))); 
    /* 0041de05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041de07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041de08: jb 0x41de60 */ if (fC) goto L_0041de60;
L_0041de0a:; BB(0x0041de0a);
    /* 0041de0a: fcom dword ptr [0x8fbdb8] */ fx_compare(ST(0), R_F32((u32)(0x8fbdb8u))); 
    /* 0041de10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041de12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041de13: jae 0x41de60 */ if (!fC) goto L_0041de60;
L_0041de15:; BB(0x0041de15);
    /* 0041de15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041de17: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0041de1b: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0041de1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041de20: lea ecx, [esi + 0x420] */ r_ecx = (u32)(r_esi+0x420u);
    /* 0041de26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041de27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041de28: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x41de2du); f_007a8d98();
    /* 0041de2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041de30: mov ecx, dword ptr [esi + 0x8b4] */ r_ecx = R32((u32)(r_esi+0x8b4u));
    /* 0041de36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041de38: je 0x41e3ca */ if (fZ) goto L_0041e3ca;
L_0041de3e:; BB(0x0041de3e);
    /* 0041de3e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041de40: je 0x41de83 */ if (fZ) goto L_0041de83;
L_0041de42:; BB(0x0041de42);
    /* 0041de42: lea edx, [esi + 0x42c] */ r_edx = (u32)(r_esi+0x42cu);
    /* 0041de48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041de49: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x41de4eu); f_00508db8();
    /* 0041de4e: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0041de52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041de53: mov ecx, dword ptr [esi + 0x8b4] */ r_ecx = R32((u32)(r_esi+0x8b4u));
    /* 0041de59: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x41de5eu); f_00508dd0();
    /* 0041de5e: jmp 0x41de83 */ goto L_0041de83;
L_0041de60:; BB(0x0041de60);
    /* 0041de60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041de62: mov edx, dword ptr [esi + 0x8b4] */ r_edx = R32((u32)(r_esi+0x8b4u));
    /* 0041de68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041de6a: je 0x41de83 */ if (fZ) goto L_0041de83;
L_0041de6c:; BB(0x0041de6c);
    /* 0041de6c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041de70: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041de75: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0041de79: mov dword ptr [esi + 0x8b4], 0 */ W32((u32)(r_esi+0x8b4u), 0x0u);
L_0041de83:; BB(0x0041de83);
    /* 0041de83: push 0x42640000 */ { u32 v = 0x42640000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041de88: mov ecx, esi */ r_ecx = r_esi;
    /* 0041de8a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41de8fu); f_007aaa30();
    /* 0041de8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041de91: je 0x41dfa2 */ if (fZ) goto L_0041dfa2;
L_0041de97:; BB(0x0041de97);
    /* 0041de97: mov eax, dword ptr [0x9a3f00] */ r_eax = R32((u32)(0x9a3f00u));
    /* 0041de9c: mov edx, dword ptr [0x9a3f04] */ r_edx = R32((u32)(0x9a3f04u));
    /* 0041dea2: mov dword ptr [esp + 0x50], 0x41400000 */ W32((u32)(r_esp+0x50u), 0x41400000u);
    /* 0041deaa: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0041deae: mov eax, dword ptr [0x9a3f0c] */ r_eax = R32((u32)(0x9a3f0cu));
    /* 0041deb3: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0041deb7: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0041debb: mov eax, dword ptr [0x9a3f10] */ r_eax = R32((u32)(0x9a3f10u));
    /* 0041dec0: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0041dec4: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0041dec8: mov dword ptr [esp + 0x5c], 0xc20c0000 */ W32((u32)(r_esp+0x5cu), 0xc20c0000u);
    /* 0041ded0: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 0041ded4: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 0041dedc: mov dword ptr [esp + 0x64], 0x41200000 */ W32((u32)(r_esp+0x64u), 0x41200000u);
    /* 0041dee4: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041dee7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041dee8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dee9: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x41deeeu); f_00782b64();
    /* 0041deee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041def1: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0041def5: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0041def8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x41defdu); f_0082ebac();
    /* 0041defd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041deff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041df00: push dword ptr [0xa43748] */ { u32 v = R32((u32)(0xa43748u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041df06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041df07: mov ecx, esi */ r_ecx = r_esi;
    /* 0041df09: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41df0eu); f_00520c70();
    /* 0041df0e: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41df13u); f_00420a44();
    /* 0041df13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041df15: jne 0x41df2c */ if (!fZ) goto L_0041df2c;
L_0041df17:; BB(0x0041df17);
    /* 0041df17: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0041df1b: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 0041df1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041df21: mov ecx, esi */ r_ecx = r_esi;
    /* 0041df23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041df24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041df25: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41df2au); f_0051fdf8();
    /* 0041df2a: jmp 0x41df79 */ goto L_0041df79;
L_0041df2c:; BB(0x0041df2c);
    /* 0041df2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041df2f: jne 0x41df79 */ if (!fZ) goto L_0041df79;
L_0041df31:; BB(0x0041df31);
    /* 0041df31: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0041df35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041df36: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041df3c: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x41df41u); f_006ac1a4();
    /* 0041df41: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0041df45: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 0041df4b: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 0041df51: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0041df54: mov eax, dword ptr [esi + 0x77c] */ r_eax = R32((u32)(r_esi+0x77cu));
    /* 0041df5a: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0041df60: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 0041df67: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 0041df6b: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041df71: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041df73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041df75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041df76: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x41df79u); call_ind(t); }
L_0041df79:; BB(0x0041df79);
    /* 0041df79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041df7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041df7c: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041df82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041df83: mov ecx, esi */ r_ecx = r_esi;
    /* 0041df85: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41df8au); f_00520c70();
    /* 0041df8a: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0041df8e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041df90: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 0041df96: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041df99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041df9a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41df9fu); f_0050b7a4();
    /* 0041df9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041dfa2:; BB(0x0041dfa2);
    /* 0041dfa2: push 0x42b00000 */ { u32 v = 0x42b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dfa7: mov ecx, esi */ r_ecx = r_esi;
    /* 0041dfa9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41dfaeu); f_007aaa30();
    /* 0041dfae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dfb0: je 0x41e0c1 */ if (fZ) goto L_0041e0c1;
L_0041dfb6:; BB(0x0041dfb6);
    /* 0041dfb6: mov eax, dword ptr [0x9a3f00] */ r_eax = R32((u32)(0x9a3f00u));
    /* 0041dfbb: mov edx, dword ptr [0x9a3f04] */ r_edx = R32((u32)(0x9a3f04u));
    /* 0041dfc1: mov dword ptr [esp + 0x70], 0x41c80000 */ W32((u32)(r_esp+0x70u), 0x41c80000u);
    /* 0041dfc9: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0041dfcd: mov eax, dword ptr [0x9a3f0c] */ r_eax = R32((u32)(0x9a3f0cu));
    /* 0041dfd2: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0041dfd6: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0041dfda: mov eax, dword ptr [0x9a3f10] */ r_eax = R32((u32)(0x9a3f10u));
    /* 0041dfdf: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0041dfe3: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0041dfe7: mov dword ptr [esp + 0x5c], 0xc2700000 */ W32((u32)(r_esp+0x5cu), 0xc2700000u);
    /* 0041dfef: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 0041dff3: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 0041dffb: mov dword ptr [esp + 0x64], 0xc1a00000 */ W32((u32)(r_esp+0x64u), 0xc1a00000u);
    /* 0041e003: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e007: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e008: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x41e00du); f_00782b64();
    /* 0041e00d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e010: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0041e014: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0041e017: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x41e01cu); f_0082ebac();
    /* 0041e01c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e01e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e01f: push dword ptr [0xa43748] */ { u32 v = R32((u32)(0xa43748u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e025: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e026: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e028: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41e02du); f_00520c70();
    /* 0041e02d: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41e032u); f_00420a44();
    /* 0041e032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e034: jne 0x41e04b */ if (!fZ) goto L_0041e04b;
L_0041e036:; BB(0x0041e036);
    /* 0041e036: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0041e03a: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 0041e03e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e040: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e044: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41e049u); f_0051fdf8();
    /* 0041e049: jmp 0x41e098 */ goto L_0041e098;
L_0041e04b:; BB(0x0041e04b);
    /* 0041e04b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e04e: jne 0x41e098 */ if (!fZ) goto L_0041e098;
L_0041e050:; BB(0x0041e050);
    /* 0041e050: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0041e054: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e055: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041e05b: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x41e060u); f_006ac1a4();
    /* 0041e060: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0041e064: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 0041e06a: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 0041e070: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0041e073: mov eax, dword ptr [esi + 0x77c] */ r_eax = R32((u32)(r_esi+0x77cu));
    /* 0041e079: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0041e07f: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 0041e086: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 0041e08a: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041e090: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041e092: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e094: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e095: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x41e098u); call_ind(t); }
L_0041e098:; BB(0x0041e098);
    /* 0041e098: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e09a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e09b: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e0a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e0a4: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41e0a9u); f_00520c70();
    /* 0041e0a9: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0041e0ad: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0af: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 0041e0b5: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e0b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0b9: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41e0beu); f_0050b7a4();
    /* 0041e0be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041e0c1:; BB(0x0041e0c1);
    /* 0041e0c1: push 0x42c20000 */ { u32 v = 0x42c20000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0c6: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e0c8: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41e0cdu); f_007aaa30();
    /* 0041e0cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e0cf: je 0x41e37d */ if (fZ) goto L_0041e37d;
L_0041e0d5:; BB(0x0041e0d5);
    /* 0041e0d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e0d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0d8: push dword ptr [0xa43748] */ { u32 v = R32((u32)(0xa43748u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e0de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0df: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e0e1: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41e0e6u); f_00520c70();
    /* 0041e0e6: mov edx, dword ptr [esi + 0x690] */ r_edx = R32((u32)(r_esi+0x690u));
    /* 0041e0ec: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0041e0ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e0f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0041e0f3: jle 0x41e10b */ if ((fZ||fS!=fO)) goto L_0041e10b;
L_0041e0f5:; BB(0x0041e0f5);
    /* 0041e0f5: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0041e0f8:; BB(0x0041e0f8);
    /* 0041e0f8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0041e0fa: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0041e0fd: mov dword ptr [ecx + eax*4], ebx */ W32((u32)(r_ecx+r_eax*4), r_ebx);
    /* 0041e100: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e103: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e106: jl 0x41e0f8 */ if ((fS!=fO)) goto L_0041e0f8;
L_0041e108:; BB(0x0041e108);
    /* 0041e108: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0041e10b:; BB(0x0041e10b);
    /* 0041e10b: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0041e112: mov eax, dword ptr [0x9a3f00] */ r_eax = R32((u32)(0x9a3f00u));
    /* 0041e117: mov edx, dword ptr [0x9a3f04] */ r_edx = R32((u32)(0x9a3f04u));
    /* 0041e11d: mov dword ptr [esp + 0x84], 0x41700000 */ W32((u32)(r_esp+0x84u), 0x41700000u);
    /* 0041e128: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0041e12c: mov eax, dword ptr [0x9a3f0c] */ r_eax = R32((u32)(0x9a3f0cu));
    /* 0041e131: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0041e138: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0041e13f: mov eax, dword ptr [0x9a3f10] */ r_eax = R32((u32)(0x9a3f10u));
    /* 0041e144: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0041e14b: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 0041e151: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0041e158: mov eax, dword ptr [esi + 0x4cc] */ r_eax = R32((u32)(r_esi+0x4ccu));
    /* 0041e15e: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0041e165: mov eax, dword ptr [esi + 0x4d0] */ r_eax = R32((u32)(r_esi+0x4d0u));
    /* 0041e16b: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0041e172: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41e177u); f_00420a44();
    /* 0041e177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e179: jne 0x41e197 */ if (!fZ) goto L_0041e197;
L_0041e17b:; BB(0x0041e17b);
    /* 0041e17b: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0041e182: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 0041e186: push dword ptr [esi + 0x690] */ { u32 v = R32((u32)(r_esi+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e18c: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e18e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e18f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e190: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41e195u); f_0051fdf8();
    /* 0041e195: jmp 0x41e1b6 */ goto L_0041e1b6;
L_0041e197:; BB(0x0041e197);
    /* 0041e197: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e19a: jne 0x41e1b6 */ if (!fZ) goto L_0041e1b6;
L_0041e19c:; BB(0x0041e19c);
    /* 0041e19c: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 0041e1a3: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 0041e1a7: push dword ptr [esi + 0x690] */ { u32 v = R32((u32)(r_esi+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e1ad: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e1af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e1b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e1b1: call 0x419008 */ r_esp -= 4; W32(r_esp, 0x41e1b6u); f_00419008();
L_0041e1b6:; BB(0x0041e1b6);
    /* 0041e1b6: mov dword ptr [esp + 0x84], 0x41400000 */ W32((u32)(r_esp+0x84u), 0x41400000u);
    /* 0041e1c1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0041e1c4: lea eax, [esi + 0x48c] */ r_eax = (u32)(r_esi+0x48cu);
    /* 0041e1ca: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0041e1d1: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0041e1d5: lea edx, [esi + 0x4a4] */ r_edx = (u32)(r_esi+0x4a4u);
    /* 0041e1db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e1dd: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0041e1e4: mov ebx, eax */ r_ebx = r_eax;
L_0041e1e6:; BB(0x0041e1e6);
    /* 0041e1e6: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x41e1ebu); f_00520e6c();
    /* 0041e1eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e1ed: je 0x41e1f6 */ if (fZ) goto L_0041e1f6;
L_0041e1ef:; BB(0x0041e1ef);
    /* 0041e1ef: mov edx, 1 */ r_edx = 0x1u;
    /* 0041e1f4: jmp 0x41e1f8 */ goto L_0041e1f8;
L_0041e1f6:; BB(0x0041e1f6);
    /* 0041e1f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0041e1f8:; BB(0x0041e1f8);
    /* 0041e1f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e1fa: jne 0x41e217 */ if (!fZ) goto L_0041e217;
L_0041e1fc:; BB(0x0041e1fc);
    /* 0041e1fc: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 0041e200: push dword ptr [esi + 0x690] */ { u32 v = R32((u32)(r_esi+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e206: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e207: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e209: push dword ptr [esp + ebx*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e210: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41e215u); f_0051fdf8();
    /* 0041e215: jmp 0x41e271 */ goto L_0041e271;
L_0041e217:; BB(0x0041e217);
    /* 0041e217: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e21a: jne 0x41e271 */ if (!fZ) goto L_0041e271;
L_0041e21c:; BB(0x0041e21c);
    /* 0041e21c: push dword ptr [esp + ebx*4 + 0x9c] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e223: mov edi, dword ptr [esi + 0x690] */ r_edi = R32((u32)(r_esi+0x690u));
    /* 0041e229: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041e22f: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x41e234u); f_006ac1a4();
    /* 0041e234: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 0041e23a: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0041e240: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 0041e247: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0041e24a: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 0041e250: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 0041e256: mov dword ptr [edx + 0x18], 0x9d03 */ W32((u32)(r_edx+0x18u), 0x9d03u);
    /* 0041e25d: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0041e264: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041e26a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041e26c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041e26d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e26e: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x41e271u); call_ind(t); }
L_0041e271:; BB(0x0041e271);
    /* 0041e271: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041e274: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e277: jl 0x41e1e6 */ if ((fS!=fO)) goto L_0041e1e6;
L_0041e27d:; BB(0x0041e27d);
    /* 0041e27d: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0041e280: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0041e284: mov dword ptr [esp + 0x84], 0x41300000 */ W32((u32)(r_esp+0x84u), 0x41300000u);
    /* 0041e28f: lea eax, [esi + 0x4e0] */ r_eax = (u32)(r_esi+0x4e0u);
    /* 0041e295: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0041e29c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0041e29f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0041e2a3: lea edx, [esi + 0x4ec] */ r_edx = (u32)(r_esi+0x4ecu);
    /* 0041e2a9: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0041e2b0: lea eax, [esi + 0x4f8] */ r_eax = (u32)(r_esi+0x4f8u);
    /* 0041e2b6: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 0041e2bd: lea eax, [esi + 0x504] */ r_eax = (u32)(r_esi+0x504u);
    /* 0041e2c3: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 0041e2ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e2cc: mov ebx, eax */ r_ebx = r_eax;
L_0041e2ce:; BB(0x0041e2ce);
    /* 0041e2ce: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x41e2d3u); f_00520e6c();
    /* 0041e2d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e2d5: je 0x41e2de */ if (fZ) goto L_0041e2de;
L_0041e2d7:; BB(0x0041e2d7);
    /* 0041e2d7: mov edx, 1 */ r_edx = 0x1u;
    /* 0041e2dc: jmp 0x41e2e0 */ goto L_0041e2e0;
L_0041e2de:; BB(0x0041e2de);
    /* 0041e2de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0041e2e0:; BB(0x0041e2e0);
    /* 0041e2e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e2e2: jne 0x41e2ff */ if (!fZ) goto L_0041e2ff;
L_0041e2e4:; BB(0x0041e2e4);
    /* 0041e2e4: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 0041e2e8: push dword ptr [esi + 0x690] */ { u32 v = R32((u32)(r_esi+0x690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e2ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e2ef: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e2f1: push dword ptr [esp + ebx*4 + 0xa4] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e2f8: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41e2fdu); f_0051fdf8();
    /* 0041e2fd: jmp 0x41e359 */ goto L_0041e359;
L_0041e2ff:; BB(0x0041e2ff);
    /* 0041e2ff: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e302: jne 0x41e359 */ if (!fZ) goto L_0041e359;
L_0041e304:; BB(0x0041e304);
    /* 0041e304: push dword ptr [esp + ebx*4 + 0x9c] */ { u32 v = R32((u32)(r_esp+r_ebx*4+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e30b: mov edi, dword ptr [esi + 0x690] */ r_edi = R32((u32)(r_esi+0x690u));
    /* 0041e311: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041e317: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x41e31cu); f_006ac1a4();
    /* 0041e31c: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 0041e322: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0041e328: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 0041e32f: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0041e332: mov edx, dword ptr [esi + 0x77c] */ r_edx = R32((u32)(r_esi+0x77cu));
    /* 0041e338: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 0041e33e: mov dword ptr [edx + 0x18], 0x9d03 */ W32((u32)(r_edx+0x18u), 0x9d03u);
    /* 0041e345: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0041e34c: mov ecx, dword ptr [esi + 0x77c] */ r_ecx = R32((u32)(r_esi+0x77cu));
    /* 0041e352: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041e354: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041e355: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e356: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x41e359u); call_ind(t); }
L_0041e359:; BB(0x0041e359);
    /* 0041e359: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041e35c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e35f: jl 0x41e2ce */ if ((fS!=fO)) goto L_0041e2ce;
L_0041e365:; BB(0x0041e365);
    /* 0041e365: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0041e368: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0041e36c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e36e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e36f: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e371: push dword ptr [0xa43738] */ { u32 v = R32((u32)(0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e378: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x41e37du); f_00520c70();
L_0041e37d:; BB(0x0041e37d);
    /* 0041e37d: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0041e383: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041e385: je 0x41e3c0 */ if (fZ) goto L_0041e3c0;
L_0041e387:; BB(0x0041e387);
    /* 0041e387: mov dword ptr [esi + 0x86c], 1 */ W32((u32)(r_esi+0x86cu), 0x1u);
    /* 0041e391: mov dword ptr [esi + 0x870], 0 */ W32((u32)(r_esi+0x870u), 0x0u);
    /* 0041e39b: jmp 0x41e3c0 */ goto L_0041e3c0;
L_0041e39d:; BB(0x0041e39d);
    /* 0041e39d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e3a0: jne 0x41e3c0 */ if (!fZ) goto L_0041e3c0;
L_0041e3a2:; BB(0x0041e3a2);
    /* 0041e3a2: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 0041e3a8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e3ab: mov dword ptr [esi + 0x870], eax */ W32((u32)(r_esi+0x870u), r_eax);
    /* 0041e3b1: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e3b4: jl 0x41e3c0 */ if ((fS!=fO)) goto L_0041e3c0;
L_0041e3b6:; BB(0x0041e3b6);
    /* 0041e3b6: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x41e3bbu); f_00717f38();
    /* 0041e3bb: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x41e3c0u); f_004d3250();
L_0041e3c0:; BB(0x0041e3c0);
    /* 0041e3c0: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e3c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e3c7: ret 4 */ FN_RET(0x0041dda6); r_esp += 8; return;
L_0041e3ca:; BB(0x0041e3ca);
    /* 0041e3ca: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0041e3ce: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3d0: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 0041e3d6: lea ecx, [esi + 0x414] */ r_ecx = (u32)(r_esi+0x414u);
    /* 0041e3dc: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e3df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3e1: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x41e3e6u); f_00509dc4();
    /* 0041e3e6: mov ecx, eax */ r_ecx = r_eax;
    /* 0041e3e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e3eb: mov dword ptr [esi + 0x8b4], ecx */ W32((u32)(r_esi+0x8b4u), r_ecx);
    /* 0041e3f1: jmp 0x41de3e */ goto L_0041de3e;
}

