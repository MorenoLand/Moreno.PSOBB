#include "protos.h"

void f_004210c6(void)
{
    FN_ENTER(0x004210c6);
    /* 004210c6: mov ecx, esi */ r_ecx = r_esi;
    /* 004210c8: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x4210cdu); f_00419ff0();
    /* 004210cd: jmp 0x42137c */ goto L_0042137c;
L_0042137c:; BB(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x004210c6); r_esp += 8; return;
}

void f_004210d2(void)
{
    FN_ENTER(0x004210d2);
    /* 004210d2: mov ecx, esi */ r_ecx = r_esi;
    /* 004210d4: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x4210d9u); f_0041a004();
    /* 004210d9: jmp 0x42137c */ goto L_0042137c;
L_0042137c:; BB(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x004210d2); r_esp += 8; return;
}

void f_004210de(void)
{
    FN_ENTER(0x004210de);
    /* 004210de: mov ecx, esi */ r_ecx = r_esi;
    /* 004210e0: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x4210e5u); f_00419130();
    /* 004210e5: jmp 0x42137c */ goto L_0042137c;
L_0042137c:; BB(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x004210de); r_esp += 8; return;
}

void f_004210ea(void)
{
    FN_ENTER(0x004210ea);
    /* 004210ea: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004210ec: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004210f1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004210f8: mov ecx, esi */ r_ecx = r_esi;
    /* 004210fa: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x421100u); call_ind(t); }
    /* 00421100: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 0042110a: mov ecx, esi */ r_ecx = r_esi;
    /* 0042110c: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x421111u); f_0041b0bc();
    /* 00421111: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00421117: mov dword ptr [esi + 0x884], 0 */ W32((u32)(r_esi+0x884u), 0x0u);
    /* 00421121: or eax, 0xe80 */ {  u32 a = r_eax; u32 b = 0xe80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00421126: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0042112c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042112e: mov dword ptr [esi + 0x86c], edx */ W32((u32)(r_esi+0x86cu), r_edx);
    /* 00421134: mov dword ptr [esi + 0x870], edx */ W32((u32)(r_esi+0x870u), r_edx);
    /* 0042113a: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042113d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042113e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042113f: ret 4 */ FN_RET(0x004210ea); r_esp += 8; return;
}

void f_00421142(void)
{
    FN_ENTER(0x00421142);
    /* 00421142: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00421148: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 00421152: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00421154: je 0x42137c */ if (fZ) goto L_0042137c;
L_0042115a:; BB(0x0042115a);
    /* 0042115a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042115c: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0042115e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00421160: mov ecx, esi */ r_ecx = r_esi;
    /* 00421162: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x421168u); call_ind(t); }
    /* 00421168: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0042116c: mov ebp, dword ptr [esi + 0x684] */ r_ebp = R32((u32)(r_esi+0x684u));
    /* 00421172: mov byte ptr [esp + 0x3c], 0x12 */ W8((u32)(r_esp+0x3cu), 0x12u);
    /* 00421177: mov edx, 0x17 */ r_edx = 0x17u;
    /* 0042117c: mov byte ptr [esp + 0x3d], 5 */ W8((u32)(r_esp+0x3du), 0x5u);
    /* 00421181: mov word ptr [esp + 0x3e], ax */ W16((u32)(r_esp+0x3eu), (u16)r_eax);
    /* 00421186: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0042118d: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 00421192: mov word ptr [esp + 0x42], bp */ W16((u32)(r_esp+0x42u), (u16)r_ebp);
    /* 00421197: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0042119b: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0042119f: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 004211a5: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 004211ab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004211af: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 004211b3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4211b8u); f_008003e0();
    /* 004211b8: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004211bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004211bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004211bd: ret 4 */ FN_RET(0x00421142); r_esp += 8; return;
L_0042137c:; BB(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x00421142); r_esp += 8; return;
}

void f_004211c0(void)
{
    FN_ENTER(0x004211c0);
    /* 004211c0: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 004211c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004211c8: je 0x4211eb */ if (fZ) goto L_004211eb;
L_004211ca:; BB(0x004211ca);
    /* 004211ca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004211cd: je 0x421267 */ if (fZ) goto L_00421267;
L_004211d3:; BB(0x004211d3);
    /* 004211d3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004211d6: jne 0x421267 */ if (!fZ) goto L_00421267;
L_004211dc:; BB(0x004211dc);
    /* 004211dc: mov ecx, esi */ r_ecx = r_esi;
    /* 004211de: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4211e3u); f_007aa094();
    /* 004211e3: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 004211e9: jmp 0x421267 */ goto L_00421267;
L_004211eb:; BB(0x004211eb);
    /* 004211eb: mov ecx, esi */ r_ecx = r_esi;
    /* 004211ed: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4211f2u); f_007aa094();
    /* 004211f2: mov ecx, esi */ r_ecx = r_esi;
    /* 004211f4: call 0x422768 */ r_esp -= 4; W32(r_esp, 0x4211f9u); f_00422768();
    /* 004211f9: fstp dword ptr [esi + 0x888] */ W_F32((u32)(r_esi+0x888u), ST(0)); FPOP();
    /* 004211ff: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00421205: fcomp dword ptr [0x8fbc6c] */ fx_compare(ST(0), R_F32((u32)(0x8fbc6cu))); FPOP();
    /* 0042120b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042120d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042120e: jb 0x42121a */ if (fC) goto L_0042121a;
L_00421210:; BB(0x00421210);
    /* 00421210: mov dword ptr [esi + 0x86c], 1 */ W32((u32)(r_esi+0x86cu), 0x1u);
L_0042121a:; BB(0x0042121a);
    /* 0042121a: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042121f: mov ecx, esi */ r_ecx = r_esi;
    /* 00421221: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x421226u); f_007aaa30();
    /* 00421226: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421228: je 0x421242 */ if (fZ) goto L_00421242;
L_0042122a:; BB(0x0042122a);
    /* 0042122a: lea edx, [esi + 0x644] */ r_edx = (u32)(r_esi+0x644u);
    /* 00421230: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00421232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421235: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 0042123a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42123fu); f_00814298();
    /* 0042123f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00421242:; BB(0x00421242);
    /* 00421242: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 00421247: mov ecx, esi */ r_ecx = r_esi;
    /* 00421249: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42124eu); f_007aaa30();
    /* 0042124e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421250: jne 0x42125a */ if (!fZ) goto L_0042125a;
L_00421252:; BB(0x00421252);
    /* 00421252: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 00421258: jmp 0x421267 */ goto L_00421267;
L_0042125a:; BB(0x0042125a);
    /* 0042125a: mov ecx, esi */ r_ecx = r_esi;
    /* 0042125c: call 0x41c784 */ r_esp -= 4; W32(r_esp, 0x421261u); f_0041c784();
    /* 00421261: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
L_00421267:; BB(0x00421267);
    /* 00421267: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421269: je 0x42132c */ if (fZ) goto L_0042132c;
L_0042126f:; BB(0x0042126f);
    /* 0042126f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421272: jne 0x42130e */ if (!fZ) goto L_0042130e;
L_00421278:; BB(0x00421278);
    /* 00421278: fld dword ptr [0xa436f4] */ FPUSH(R_F32((u32)(0xa436f4u)));
    /* 0042127e: fadd dword ptr [esi + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x884u));
    /* 00421284: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0042128a: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 00421290: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00421292: fst dword ptr [esi + 0x884] */ W_F32((u32)(r_esi+0x884u), ST(0));
    /* 00421298: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042129a: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0042129d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042129f: fst dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0));
    /* 004212a5: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004212a8: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 004212aa: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004212ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004212ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004212af: ja 0x4212c9 */ if ((!fC&&!fZ)) goto L_004212c9;
L_004212b1:; BB(0x004212b1);
    /* 004212b1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004212b3: fadd dword ptr [esi + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e8u));
    /* 004212b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004212bb: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
    /* 004212c1: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004212c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004212c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004212c6: ret 4 */ FN_RET(0x004211c0); r_esp += 8; return;
L_004212c9:; BB(0x004212c9);
    /* 004212c9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004212cb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004212cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004212cf: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004212d2: mov edx, dword ptr [esi + 0x5e8] */ r_edx = R32((u32)(r_esi+0x5e8u));
    /* 004212d8: mov dword ptr [esi + 0x86c], 2 */ W32((u32)(r_esi+0x86cu), 0x2u);
    /* 004212e2: mov dword ptr [esi + 0x5e0], eax */ W32((u32)(r_esi+0x5e0u), r_eax);
    /* 004212e8: mov dword ptr [esi + 0x5e4], edx */ W32((u32)(r_esi+0x5e4u), r_edx);
    /* 004212ee: add esi, 0x644 */ {  u32 a = r_esi; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004212f4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004212f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004212f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004212f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004212f9: push 0x322 */ { u32 v = 0x322u; r_esp -= 4; W32(r_esp, v); }
    /* 004212fe: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x421303u); f_00814298();
    /* 00421303: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421306: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00421309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042130a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042130b: ret 4 */ FN_RET(0x004211c0); r_esp += 8; return;
L_0042130e:; BB(0x0042130e);
    /* 0042130e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421311: jne 0x42137c */ if (!fZ) goto L_0042137c;
L_00421313:; BB(0x00421313);
    /* 00421313: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 00421319: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042131c: mov dword ptr [esi + 0x870], eax */ W32((u32)(r_esi+0x870u), r_eax);
    /* 00421322: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421325: jne 0x42137c */ if (!fZ) goto L_0042137c;
L_00421327:; BB(0x00421327);
    /* 00421327: jmp 0x4213b5 */ goto L_004213b5;
L_0042132c:; BB(0x0042132c);
    /* 0042132c: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00421332: fcomp dword ptr [0x8fbc68] */ fx_compare(ST(0), R_F32((u32)(0x8fbc68u))); FPOP();
    /* 00421338: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042133a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042133b: jbe 0x421361 */ if ((fC||fZ)) goto L_00421361;
L_0042133d:; BB(0x0042133d);
    /* 0042133d: fld dword ptr [0xa436f4] */ FPUSH(R_F32((u32)(0xa436f4u)));
    /* 00421343: fadd dword ptr [esi + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x884u));
    /* 00421349: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0042134f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00421351: fst dword ptr [esi + 0x884] */ W_F32((u32)(r_esi+0x884u), ST(0));
    /* 00421357: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00421359: fst dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0));
    /* 0042135f: jmp 0x421367 */ goto L_00421367;
L_00421361:; BB(0x00421361);
    /* 00421361: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
L_00421367:; BB(0x00421367);
    /* 00421367: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0042136a: fadd dword ptr [esi + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e8u));
    /* 00421370: fsub dword ptr [esi + 0x888] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x888u));
    /* 00421376: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
L_0042137c:; BB(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x004211c0); r_esp += 8; return;
L_004213b5:; BB(0x004213b5);
    /* 004213b5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004213b7: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004213bd: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004213c0: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004213c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004213c4: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4213c9u); f_0050b7a4();
    /* 004213c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004213cb: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4213d0u); f_004d4288();
    /* 004213d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004213d3: mov ecx, esi */ r_ecx = r_esi;
    /* 004213d5: call 0x4213e4 */ r_esp -= 4; W32(r_esp, 0x4213dau); f_004213e4();
    /* 004213da: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004213dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004213de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004213df: ret 4 */ FN_RET(0x004211c0); r_esp += 8; return;
}

void f_0042137c(void)
{
    FN_ENTER(0x0042137c);
    /* 0042137c: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421381: ret 4 */ FN_RET(0x0042137c); r_esp += 8; return;
}

void f_004213e4(void) /* sub_4213E4 */
{
    FN_ENTER(0x004213e4);
    /* 004213e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004213e5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004213e8: mov esi, ecx */ r_esi = r_ecx;
    /* 004213ea: mov ecx, esi */ r_ecx = r_esi;
    /* 004213ec: mov eax, dword ptr [0x9a3ec4] */ r_eax = R32((u32)(0x9a3ec4u));
    /* 004213f1: mov edx, dword ptr [0x9a3ec8] */ r_edx = R32((u32)(0x9a3ec8u));
    /* 004213f7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004213fa: mov eax, dword ptr [0x9a3ecc] */ r_eax = R32((u32)(0x9a3eccu));
    /* 004213ff: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00421403: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00421407: mov eax, dword ptr [0x9a3ed0] */ r_eax = R32((u32)(0x9a3ed0u));
    /* 0042140c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00421410: mov eax, dword ptr [0x9a3ed4] */ r_eax = R32((u32)(0x9a3ed4u));
    /* 00421415: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00421419: mov eax, dword ptr [0xa43728] */ r_eax = R32((u32)(0xa43728u));
    /* 0042141e: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00421421: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00421425: call 0x421464 */ r_esp -= 4; W32(r_esp, 0x42142au); f_00421464();
    /* 0042142a: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42142fu); f_00420a44();
    /* 0042142f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421431: jne 0x421446 */ if (!fZ) goto L_00421446;
L_00421433:; BB(0x00421433);
    /* 00421433: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00421436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421439: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0042143c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042143d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042143f: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x421444u); f_0051fdf8();
    /* 00421444: jmp 0x421456 */ goto L_00421456;
L_00421446:; BB(0x00421446);
    /* 00421446: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421449: jne 0x421456 */ if (!fZ) goto L_00421456;
L_0042144b:; BB(0x0042144b);
    /* 0042144b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0042144e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042144f: mov ecx, esi */ r_ecx = r_esi;
    /* 00421451: call 0x41ece4 */ r_esp -= 4; W32(r_esp, 0x421456u); f_0041ece4();
L_00421456:; BB(0x00421456);
    /* 00421456: mov ecx, esi */ r_ecx = r_esi;
    /* 00421458: call 0x41ed38 */ r_esp -= 4; W32(r_esp, 0x42145du); f_0041ed38();
    /* 0042145d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00421460: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421461: ret  */ FN_RET(0x004213e4); r_esp += 4; return;
}

void f_00421464(void) /* sub_421464 */
{
    FN_ENTER(0x00421464);
    /* 00421464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421465: mov ebp, dword ptr [0xa436cc] */ r_ebp = R32((u32)(0xa436ccu));
    /* 0042146b: mov edx, dword ptr [0x9a3ef4] */ r_edx = R32((u32)(0x9a3ef4u));
    /* 00421471: mov eax, dword ptr [0xa436b8] */ r_eax = R32((u32)(0xa436b8u));
    /* 00421476: push dword ptr [eax*4 + 0xa43734] */ { u32 v = R32((u32)(r_eax*4+0xa43734u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042147d: push dword ptr [edx*4 + 0xa43738] */ { u32 v = R32((u32)(r_edx*4+0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 00421484: push dword ptr [ebp*4 + 0xa4374c] */ { u32 v = R32((u32)(r_ebp*4+0xa4374cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042148b: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x421490u); f_00520c98();
    /* 00421490: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421491: ret  */ FN_RET(0x00421464); r_esp += 4; return;
}

void f_00421494(void) /* sub_421494 */
{
    FN_ENTER(0x00421494);
    /* 00421494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421495: mov ebp, esp */ r_ebp = r_esp;
    /* 00421497: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00421499: push 0x8cd71c */ { u32 v = 0x8cd71cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042149e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004214a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004214a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004214ac: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004214b2: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004214b5: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 004214b8: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 004214bb: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 004214be: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004214c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004214c4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004214c7: ja 0x4219c9 */ if ((!fC&&!fZ)) goto L_004219c9;
L_004214cd:; BB(0x004214cd);
    /* 004214cd: mov eax, dword ptr [eax*4 + 0x8fb634] */ r_eax = R32((u32)(r_eax*4+0x8fb634u));
    /* 004214d4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004219c9:; BB(0x004219c9);
    /* 004219c9: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004219cc: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004219cf: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004219d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004219d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004219dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004219de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004219df: ret 4 */ FN_RET(0x00421494); r_esp += 8; return;
}

void f_004214d6(void)
{
    FN_ENTER(0x004214d6);
    /* 004214d6: mov eax, ecx */ r_eax = r_ecx;
    /* 004214d8: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 004214de: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004214e1: je 0x4219e2 */ if (fZ) goto L_004219e2;
L_004214e7:; BB(0x004214e7);
    /* 004214e7: jmp 0x4219c9 */ goto L_004219c9;
L_004219c9:; BB(0x004219c9);
    /* 004219c9: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004219cc: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004219cf: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004219d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004219d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004219dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004219de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004219df: ret 4 */ FN_RET(0x004214d6); r_esp += 8; return;
L_004219e2:; BB(0x004219e2);
    /* 004219e2: mov ebx, dword ptr [eax + 0x684] */ r_ebx = R32((u32)(r_eax+0x684u));
    /* 004219e8: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004219eb: jge 0x421a09 */ if ((fS==fO)) goto L_00421a09;
L_004219ed:; BB(0x004219ed);
    /* 004219ed: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4219f2u); f_00420a44();
    /* 004219f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004219f4: jne 0x4219fd */ if (!fZ) goto L_004219fd;
L_004219f6:; BB(0x004219f6);
    /* 004219f6: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 004219fb: jmp 0x421a26 */ goto L_00421a26;
L_004219fd:; BB(0x004219fd);
    /* 004219fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421a00: jne 0x421a26 */ if (!fZ) goto L_00421a26;
L_00421a02:; BB(0x00421a02);
    /* 00421a02: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00421a07: jmp 0x421a26 */ goto L_00421a26;
L_00421a09:; BB(0x00421a09);
    /* 00421a09: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00421a0c: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x421a11u); f_00420a44();
    /* 00421a11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421a13: jne 0x421a1c */ if (!fZ) goto L_00421a1c;
L_00421a15:; BB(0x00421a15);
    /* 00421a15: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00421a1a: jmp 0x421a26 */ goto L_00421a26;
L_00421a1c:; BB(0x00421a1c);
    /* 00421a1c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421a1f: jne 0x421a26 */ if (!fZ) goto L_00421a26;
L_00421a21:; BB(0x00421a21);
    /* 00421a21: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00421a26:; BB(0x00421a26);
    /* 00421a26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421a29: mov eax, dword ptr [eax + 0x684] */ r_eax = R32((u32)(r_eax+0x684u));
L_00421a2f:; BB(0x00421a2f);
    /* 00421a2f: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00421a32: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00421a35: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421a38: jne 0x421a4d */ if (!fZ) goto L_00421a4d;
L_00421a3a:; BB(0x00421a3a);
    /* 00421a3a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421a3d: mov dword ptr [ecx + 0x684], 0 */ W32((u32)(r_ecx+0x684u), 0x0u);
    /* 00421a47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00421a49: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00421a4b: jmp 0x421a2f */ goto L_00421a2f;
L_00421a4d:; BB(0x00421a4d);
    /* 00421a4d: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421a50: je 0x421a68 */ if (fZ) goto L_00421a68;
L_00421a52:; BB(0x00421a52);
    /* 00421a52: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421a55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421a56: mov dword ptr [edx + 0x684], eax */ W32((u32)(r_edx+0x684u), r_eax);
    /* 00421a5c: mov ecx, edx */ r_ecx = r_edx;
    /* 00421a5e: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x421a63u); f_0041a808();
    /* 00421a63: jmp 0x4219c9 */ goto L_004219c9;
L_00421a68:; BB(0x00421a68);
    /* 00421a68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421a6b: mov dword ptr [ecx + 0x684], 0x32 */ W32((u32)(r_ecx+0x684u), 0x32u);
    /* 00421a75: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00421a7a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00421a7c: jmp 0x421a2f */ goto L_00421a2f;
}

void f_004214ec(void)
{
    FN_ENTER(0x004214ec);
    /* 004214ec: mov eax, ecx */ r_eax = r_ecx;
    /* 004214ee: mov edx, dword ptr [eax + 0x8b4] */ r_edx = R32((u32)(r_eax+0x8b4u));
    /* 004214f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004214f6: je 0x4219c9 */ if (fZ) goto L_004219c9;
L_004214fc:; BB(0x004214fc);
    /* 004214fc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00421500: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00421505: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00421509: mov edx, ecx */ r_edx = r_ecx;
    /* 0042150b: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
    /* 00421515: jmp 0x4219c9 */ goto L_004219c9;
L_004219c9:; BB(0x004219c9);
    /* 004219c9: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004219cc: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004219cf: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004219d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004219d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004219dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004219de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004219df: ret 4 */ FN_RET(0x004214ec); r_esp += 8; return;
}

void f_0042151a(void)
{
    FN_ENTER(0x0042151a);
    /* 0042151a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042151c: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00421521: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00421528: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42152eu); call_ind(t); }
    /* 0042152e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421531: mov dword ptr [ecx + 0x3ec], 1 */ W32((u32)(r_ecx+0x3ecu), 0x1u);
    /* 0042153b: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x421540u); f_0041b0bc();
    /* 00421540: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421543: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 00421549: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042154e: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 00421554: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00421556: mov dword ptr [ecx + 0x86c], edx */ W32((u32)(r_ecx+0x86cu), r_edx);
    /* 0042155c: mov dword ptr [ecx + 0x870], edx */ W32((u32)(r_ecx+0x870u), r_edx);
    /* 00421562: mov dword ptr [ecx + 0x874], edx */ W32((u32)(r_ecx+0x874u), r_edx);
    /* 00421568: mov dword ptr [ecx + 0x8b4], edx */ W32((u32)(r_ecx+0x8b4u), r_edx);
    /* 0042156e: jmp 0x4219c9 */ goto L_004219c9;
L_004219c9:; BB(0x004219c9);
    /* 004219c9: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004219cc: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004219cf: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004219d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004219d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004219dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004219de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004219df: ret 4 */ FN_RET(0x0042151a); r_esp += 8; return;
}

void f_00421573(void)
{
    FN_ENTER(0x00421573);
    /* 00421573: mov eax, ecx */ r_eax = r_ecx;
    /* 00421575: mov edx, dword ptr [eax + 0x86c] */ r_edx = R32((u32)(r_eax+0x86cu));
    /* 0042157b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042157e: je 0x421a7e */ if (fZ) goto L_00421a7e;
L_00421584:; BB(0x00421584);
    /* 00421584: jmp 0x4219c9 */ goto L_004219c9;
L_004219c9:; BB(0x004219c9);
    /* 004219c9: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004219cc: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004219cf: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004219d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004219d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004219dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004219de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004219df: ret 4 */ FN_RET(0x00421573); r_esp += 8; return;
L_00421a7e:; BB(0x00421a7e);
    /* 00421a7e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00421a80: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00421a82: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00421a84: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x421a8au); call_ind(t); }
    /* 00421a8a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421a8d: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00421a91: mov ebx, dword ptr [ecx + 0x684] */ r_ebx = R32((u32)(r_ecx+0x684u));
    /* 00421a97: movzx esi, word ptr [ecx + 0x394] */ r_esi = (u32)R16((u32)(r_ecx+0x394u));
    /* 00421a9e: mov edi, dword ptr [ecx + 0x698] */ r_edi = R32((u32)(r_ecx+0x698u));
    /* 00421aa4: mov edx, 0x19 */ r_edx = 0x19u;
    /* 00421aa9: mov byte ptr [ebp - 0xc8], 0x12 */ W8((u32)(r_ebp+0xffffff38u), 0x12u);
    /* 00421ab0: mov word ptr [ebp - 0xc6], ax */ W16((u32)(r_ebp+0xffffff3au), (u16)r_eax);
    /* 00421ab7: mov eax, dword ptr [ecx + 0x69c] */ r_eax = R32((u32)(r_ecx+0x69cu));
    /* 00421abd: mov byte ptr [ebp - 0xc7], 5 */ W8((u32)(r_ebp+0xffffff39u), 0x5u);
    /* 00421ac4: mov word ptr [ebp - 0xc4], dx */ W16((u32)(r_ebp+0xffffff3cu), (u16)r_edx);
    /* 00421acb: mov word ptr [ebp - 0xc2], bx */ W16((u32)(r_ebp+0xffffff3eu), (u16)r_ebx);
    /* 00421ad2: mov dword ptr [ebp - 0xc0], esi */ W32((u32)(r_ebp+0xffffff40u), r_esi);
    /* 00421ad8: mov dword ptr [ebp - 0xbc], edi */ W32((u32)(r_ebp+0xffffff44u), r_edi);
    /* 00421ade: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00421ae4: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 00421aea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x421aefu); f_008003e0();
    /* 00421aef: jmp 0x4219c9 */ goto L_004219c9;
}

void f_00421589(void)
{
    FN_ENTER(0x00421589);
    /* 00421589: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42158eu); f_007aa094();
    /* 0042158e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421591: mov eax, dword ptr [eax + 0x86c] */ r_eax = R32((u32)(r_eax+0x86cu));
    /* 00421597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421599: je 0x421b42 */ if (fZ) goto L_00421b42;
L_0042159f:; BB(0x0042159f);
    /* 0042159f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004215a2: je 0x42196f */ if (fZ) goto L_0042196f;
L_004215a8:; BB(0x004215a8);
    /* 004215a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004215ab: jne 0x42191f */ if (!fZ) goto L_0042191f;
L_004215b1:; BB(0x004215b1);
    /* 004215b1: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004215b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004215b9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4215beu); f_007aaa30();
    /* 004215be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004215c0: je 0x4215dd */ if (fZ) goto L_004215dd;
L_004215c2:; BB(0x004215c2);
    /* 004215c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004215c5: lea ecx, [eax + 0x644] */ r_ecx = (u32)(r_eax+0x644u);
    /* 004215cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004215cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004215ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004215cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004215d0: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 004215d5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4215dau); f_00814298();
    /* 004215da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004215dd:; BB(0x004215dd);
    /* 004215dd: push 0x42340000 */ { u32 v = 0x42340000u; r_esp -= 4; W32(r_esp, v); }
    /* 004215e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004215e5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4215eau); f_007aaa30();
    /* 004215ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004215ec: je 0x421609 */ if (fZ) goto L_00421609;
L_004215ee:; BB(0x004215ee);
    /* 004215ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004215f1: lea ecx, [eax + 0x644] */ r_ecx = (u32)(r_eax+0x644u);
    /* 004215f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004215f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004215fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004215fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004215fc: push 0x31e */ { u32 v = 0x31eu; r_esp -= 4; W32(r_esp, v); }
    /* 00421601: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x421606u); f_00814298();
    /* 00421606: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00421609:; BB(0x00421609);
    /* 00421609: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042160e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421611: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x421616u); f_007aaa30();
    /* 00421616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421618: jne 0x42162b */ if (!fZ) goto L_0042162b;
L_0042161a:; BB(0x0042161a);
    /* 0042161a: push 0x42540000 */ { u32 v = 0x42540000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042161f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421622: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x421627u); f_007aaa30();
    /* 00421627: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421629: je 0x421633 */ if (fZ) goto L_00421633;
L_0042162b:; BB(0x0042162b);
    /* 0042162b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042162e: call 0x41c784 */ r_esp -= 4; W32(r_esp, 0x421633u); f_0041c784();
L_00421633:; BB(0x00421633);
    /* 00421633: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421636: mov ecx, dword ptr [eax + 0x8b4] */ r_ecx = R32((u32)(r_eax+0x8b4u));
    /* 0042163c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042163e: je 0x421b01 */ if (fZ) goto L_00421b01;
L_00421644:; BB(0x00421644);
    /* 00421644: mov edx, eax */ r_edx = r_eax;
    /* 00421646: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0042164c: fcomp dword ptr [0x8fbc48] */ fx_compare(ST(0), R_F32((u32)(0x8fbc48u))); FPOP();
    /* 00421652: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00421654: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00421655: ja 0x421667 */ if ((!fC&&!fZ)) goto L_00421667;
L_00421657:; BB(0x00421657);
    /* 00421657: mov eax, edx */ r_eax = r_edx;
    /* 00421659: lea edx, [eax + 0x414] */ r_edx = (u32)(r_eax+0x414u);
    /* 0042165f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421660: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x421665u); f_00508db8();
    /* 00421665: jmp 0x42167e */ goto L_0042167e;
L_00421667:; BB(0x00421667);
    /* 00421667: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0042166b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00421670: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00421674: mov dword ptr [edx + 0x8b4], 0 */ W32((u32)(r_edx+0x8b4u), 0x0u);
L_0042167e:; BB(0x0042167e);
    /* 0042167e: push 0x423c0000 */ { u32 v = 0x423c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00421683: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421686: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42168bu); f_007aaa30();
    /* 0042168b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042168d: je 0x4219c9 */ if (fZ) goto L_004219c9;
L_00421693:; BB(0x00421693);
    /* 00421693: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00421696: lea ecx, [ebp - 0xb4] */ r_ecx = (u32)(r_ebp+0xffffff4cu);
    /* 0042169c: mov eax, dword ptr [edi + 0x898] */ r_eax = R32((u32)(r_edi+0x898u));
    /* 004216a2: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 004216a8: mov ebx, dword ptr [edi + 0x89c] */ r_ebx = R32((u32)(r_edi+0x89cu));
    /* 004216ae: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 004216b4: mov esi, dword ptr [edi + 0x8a0] */ r_esi = R32((u32)(r_edi+0x8a0u));
    /* 004216ba: mov dword ptr [ebp - 0xac], esi */ W32((u32)(r_ebp+0xffffff54u), r_esi);
    /* 004216c0: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004216c3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4216c8u); f_0082f9c4();
    /* 004216c8: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 004216ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004216cf: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4216d4u); f_007828e4();
    /* 004216d4: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 004216d7: mov ecx, edi */ r_ecx = r_edi;
    /* 004216d9: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 004216e3: mov eax, dword ptr [ecx + 0x898] */ r_eax = R32((u32)(r_ecx+0x898u));
    /* 004216e9: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004216ef: mov edx, dword ptr [ecx + 0x89c] */ r_edx = R32((u32)(r_ecx+0x89cu));
    /* 004216f5: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 004216fb: mov ebx, dword ptr [ecx + 0x8a0] */ r_ebx = R32((u32)(r_ecx+0x8a0u));
    /* 00421701: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 0042170b: mov dword ptr [ebp - 0xa0], ebx */ W32((u32)(r_ebp+0xffffff60u), r_ebx);
    /* 00421711: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00421713: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 0042171d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x421722u); f_005caba4();
    /* 00421722: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421725: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0042172b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042172d: je 0x42176c */ if (fZ) goto L_0042176c;
L_0042172f:; BB(0x0042172f);
    /* 0042172f: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 00421739: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00421740: mov eax, edi */ r_eax = r_edi;
    /* 00421742: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00421748: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 0042174e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042174f: lea esi, [eax + 0x3cc] */ r_esi = (u32)(r_eax+0x3ccu);
    /* 00421755: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 0042175b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042175c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042175d: call 0x4266b0 */ r_esp -= 4; W32(r_esp, 0x421762u); f_004266b0();
    /* 00421762: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0042176c:; BB(0x0042176c);
    /* 0042176c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421773: lea edx, [ebp - 0xb4] */ r_edx = (u32)(r_ebp+0xffffff4cu);
    /* 00421779: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 0042177f: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00421784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421786: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x42178bu); f_007829f4();
    /* 0042178b: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 00421791: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00421794: mov eax, edi */ r_eax = r_edi;
    /* 00421796: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 0042179c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042179e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004217a0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004217a2: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004217a5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004217a7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004217a9: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004217ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004217ae: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 004217b4: fstp dword ptr [ebp - 0xa0] */ W_F32((u32)(r_ebp+0xffffff60u), ST(0)); FPOP();
    /* 004217ba: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 004217c4: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 004217ce: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004217d0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4217d5u); f_005caba4();
    /* 004217d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004217d8: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004217de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004217e0: je 0x42181f */ if (fZ) goto L_0042181f;
L_004217e2:; BB(0x004217e2);
    /* 004217e2: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 004217ec: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004217f3: mov eax, edi */ r_eax = r_edi;
    /* 004217f5: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 004217fb: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 00421801: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421802: lea esi, [eax + 0x3cc] */ r_esi = (u32)(r_eax+0x3ccu);
    /* 00421808: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 0042180e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042180f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00421810: call 0x4266b0 */ r_esp -= 4; W32(r_esp, 0x421815u); f_004266b0();
    /* 00421815: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0042181f:; BB(0x0042181f);
    /* 0042181f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421826: lea edx, [ebp - 0xb4] */ r_edx = (u32)(r_ebp+0xffffff4cu);
    /* 0042182c: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 00421832: push 0xfffff000 */ { u32 v = 0xfffff000u; r_esp -= 4; W32(r_esp, v); }
    /* 00421837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421838: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421839: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x42183eu); f_007829f4();
    /* 0042183e: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 00421844: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00421847: mov eax, edi */ r_eax = r_edi;
    /* 00421849: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 0042184f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00421851: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00421853: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00421855: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 00421858: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042185a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042185c: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 0042185f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00421861: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 00421867: fstp dword ptr [ebp - 0xa0] */ W_F32((u32)(r_ebp+0xffffff60u), ST(0)); FPOP();
    /* 0042186d: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00421877: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00421881: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00421883: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x421888u); f_005caba4();
    /* 00421888: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042188b: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00421891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421893: je 0x421af4 */ if (fZ) goto L_00421af4;
L_00421899:; BB(0x00421899);
    /* 00421899: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 004218a3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004218aa: mov eax, edi */ r_eax = r_edi;
    /* 004218ac: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 004218b2: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 004218b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004218b9: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 004218bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004218c0: lea esi, [eax + 0x3cc] */ r_esi = (u32)(r_eax+0x3ccu);
    /* 004218c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004218c7: call 0x4266b0 */ r_esp -= 4; W32(r_esp, 0x4218ccu); f_004266b0();
    /* 004218cc: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_004218d6:; BB(0x004218d6);
    /* 004218d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004218dd: mov eax, edi */ r_eax = r_edi;
    /* 004218df: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004218e1: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 004218e7: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004218ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004218eb: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4218f0u); f_0050b7a4();
    /* 004218f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004218f3: mov edx, edi */ r_edx = r_edi;
    /* 004218f5: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 004218fb: mov dword ptr [edx + 0x86c], 3 */ W32((u32)(r_edx+0x86cu), 0x3u);
    /* 00421905: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042190a: mov dword ptr [edx + 0x874], 0 */ W32((u32)(r_edx+0x874u), 0x0u);
    /* 00421914: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 0042191a: jmp 0x4219c9 */ goto L_004219c9;
L_0042191f:; BB(0x0042191f);
    /* 0042191f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00421922: jne 0x4219c9 */ if (!fZ) goto L_004219c9;
L_00421928:; BB(0x00421928);
    /* 00421928: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042192b: mov edx, dword ptr [eax + 0x874] */ r_edx = R32((u32)(r_eax+0x874u));
    /* 00421931: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00421934: mov dword ptr [eax + 0x874], edx */ W32((u32)(r_eax+0x874u), r_edx);
    /* 0042193a: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042193d: jle 0x4219c9 */ if ((fZ||fS!=fO)) goto L_004219c9;
L_00421943:; BB(0x00421943);
    /* 00421943: mov edx, dword ptr [eax + 0x870] */ r_edx = R32((u32)(r_eax+0x870u));
    /* 00421949: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042194c: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 00421952: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00421955: jl 0x421963 */ if ((fS!=fO)) goto L_00421963;
L_00421957:; BB(0x00421957);
    /* 00421957: mov dword ptr [eax + 0x86c], 4 */ W32((u32)(r_eax+0x86cu), 0x4u);
    /* 00421961: jmp 0x4219c9 */ goto L_004219c9;
L_00421963:; BB(0x00421963);
    /* 00421963: mov dword ptr [eax + 0x86c], 0 */ W32((u32)(r_eax+0x86cu), 0x0u);
    /* 0042196d: jmp 0x4219c9 */ goto L_004219c9;
L_0042196f:; BB(0x0042196f);
    /* 0042196f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421972: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x421977u); f_0041ebc0();
    /* 00421977: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042197a: call 0x41c768 */ r_esp -= 4; W32(r_esp, 0x42197fu); f_0041c768();
    /* 0042197f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421982: call 0x41ffc0 */ r_esp -= 4; W32(r_esp, 0x421987u); f_0041ffc0();
    /* 00421987: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00421989: je 0x4219c9 */ if (fZ) goto L_004219c9;
L_0042198b:; BB(0x0042198b);
    /* 0042198b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042198e: mov eax, dword ptr [ebx + 0x87c] */ r_eax = R32((u32)(r_ebx+0x87cu));
    /* 00421994: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 0042199a: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0042199d: mov edx, 0x12 */ r_edx = 0x12u;
    /* 004219a2: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004219a9: mov dword ptr [ebx + 0x660], 0 */ W32((u32)(r_ebx+0x660u), 0x0u);
    /* 004219b3: or ecx, 0xc00 */ {  u32 a = r_ecx; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004219b9: mov dword ptr [ebx + 0x3c8], ecx */ W32((u32)(r_ebx+0x3c8u), r_ecx);
    /* 004219bf: mov dword ptr [ebx + 0x86c], 2 */ W32((u32)(r_ebx+0x86cu), 0x2u);
L_004219c9:; BB(0x004219c9);
    /* 004219c9: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004219cc: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004219cf: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004219d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004219d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004219dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004219de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004219df: ret 4 */ FN_RET(0x00421589); r_esp += 8; return;
L_00421af4:; BB(0x00421af4);
    /* 00421af4: mov eax, edi */ r_eax = r_edi;
    /* 00421af6: lea ebx, [eax + 0x414] */ r_ebx = (u32)(r_eax+0x414u);
    /* 00421afc: jmp 0x4218d6 */ goto L_004218d6;
L_00421b01:; BB(0x00421b01);
    /* 00421b01: mov edx, eax */ r_edx = r_eax;
    /* 00421b03: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 00421b09: fcomp dword ptr [0x8fbc44] */ fx_compare(ST(0), R_F32((u32)(0x8fbc44u))); FPOP();
    /* 00421b0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00421b11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00421b12: jb 0x42167e */ if (fC) goto L_0042167e;
L_00421b18:; BB(0x00421b18);
    /* 00421b18: mov eax, edx */ r_eax = r_edx;
    /* 00421b1a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00421b1c: mov edx, dword ptr [eax + 0x780] */ r_edx = R32((u32)(r_eax+0x780u));
    /* 00421b22: lea ecx, [eax + 0x414] */ r_ecx = (u32)(r_eax+0x414u);
    /* 00421b28: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00421b2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421b2c: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x421b31u); f_0050981c();
    /* 00421b31: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421b34: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421b37: mov dword ptr [edx + 0x8b4], eax */ W32((u32)(r_edx+0x8b4u), r_eax);
    /* 00421b3d: jmp 0x42167e */ goto L_0042167e;
L_00421b42:; BB(0x00421b42);
    /* 00421b42: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00421b44: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00421b46:; BB(0x00421b46);
    /* 00421b46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00421b47: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x421b4cu); f_0068d5a8();
    /* 00421b4c: mov esi, eax */ r_esi = r_eax;
    /* 00421b4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00421b4f: call 0x52135c */ r_esp -= 4; W32(r_esp, 0x421b54u); f_0052135c();
    /* 00421b54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421b57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421b59: je 0x421b82 */ if (fZ) goto L_00421b82;
L_00421b5b:; BB(0x00421b5b);
    /* 00421b5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421b5e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00421b61: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00421b64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421b65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421b66: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x421b6bu); f_007a9180();
    /* 00421b6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421b6e: fcomp dword ptr [0xa436ac] */ fx_compare(ST(0), R_F32((u32)(0xa436acu))); FPOP();
    /* 00421b74: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00421b76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00421b77: jb 0x421b82 */ if (fC) goto L_00421b82;
L_00421b79:; BB(0x00421b79);
    /* 00421b79: mov edx, ebx */ r_edx = r_ebx;
    /* 00421b7b: mov dword ptr [ebp + edx*4 - 0x80], esi */ W32((u32)(r_ebp+r_edx*4+0xffffff80u), r_esi);
    /* 00421b7f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00421b82:; BB(0x00421b82);
    /* 00421b82: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00421b85: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421b88: jl 0x421b46 */ if ((fS!=fO)) goto L_00421b46;
L_00421b8a:; BB(0x00421b8a);
    /* 00421b8a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00421b8c: jle 0x421e42 */ if ((fZ||fS!=fO)) goto L_00421e42;
L_00421b92:; BB(0x00421b92);
    /* 00421b92: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421b95: je 0x421e16 */ if (fZ) goto L_00421e16;
L_00421b9b:; BB(0x00421b9b);
    /* 00421b9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00421b9d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00421ba0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00421ba2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00421ba4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00421ba6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00421ba9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00421bac: jle 0x421c70 */ if ((fZ||fS!=fO)) goto L_00421c70;
L_00421bb2:; BB(0x00421bb2);
    /* 00421bb2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421bb5: mov eax, dword ptr [ebp + edi*4 - 0x80] */ r_eax = R32((u32)(r_ebp+r_edi*4+0xffffff80u));
    /* 00421bb9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00421bbc: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00421bbf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00421bc2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00421bc5: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00421bc8: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421bca: jge 0x421c5e */ if ((fS==fO)) goto L_00421c5e;
L_00421bd0:; BB(0x00421bd0);
    /* 00421bd0: mov esi, dword ptr [ebp + edi*4 - 0x80] */ r_esi = R32((u32)(r_ebp+r_edi*4+0xffffff80u));
    /* 00421bd4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421bd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421bd8: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00421bdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421bdc: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x421be1u); f_007a9180();
    /* 00421be1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421be4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00421be5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00421be8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x421bedu); f_0082dc9c();
    /* 00421bed: fcomp dword ptr [0x8fbf80] */ fx_compare(ST(0), R_F32((u32)(0x8fbf80u))); FPOP();
    /* 00421bf3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00421bf5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00421bf6: jae 0x421c53 */ if (!fC) goto L_00421c53;
L_00421bf8:; BB(0x00421bf8);
    /* 00421bf8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00421bfb: movsx edx, word ptr [edx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 00421c02: movsx ecx, word ptr [esi + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00421c09: mov eax, 1 */ r_eax = 0x1u;
    /* 00421c0e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00421c10: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00421c13: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00421c16: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421c18: jle 0x421c53 */ if ((fZ||fS!=fO)) goto L_00421c53;
L_00421c1a:; BB(0x00421c1a);
    /* 00421c1a: fld dword ptr [0x8fbc4c] */ FPUSH(R_F32((u32)(0x8fbc4cu)));
    /* 00421c20: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00421c23: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00421c26: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00421c29: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00421c2b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00421c2e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421c31: fstp dword ptr [edx + 0x898] */ W_F32((u32)(r_edx+0x898u), ST(0)); FPOP();
    /* 00421c37: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00421c3a: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00421c3d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00421c3f: fstp dword ptr [edx + 0x89c] */ W_F32((u32)(r_edx+0x89cu), ST(0)); FPOP();
    /* 00421c45: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00421c48: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00421c4b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00421c4d: fstp dword ptr [edx + 0x8a0] */ W_F32((u32)(r_edx+0x8a0u), ST(0)); FPOP();
L_00421c53:; BB(0x00421c53);
    /* 00421c53: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00421c56: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421c58: jl 0x421bd0 */ if ((fS!=fO)) goto L_00421bd0;
L_00421c5e:; BB(0x00421c5e);
    /* 00421c5e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421c61: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421c63: jl 0x421bb2 */ if ((fS!=fO)) goto L_00421bb2;
L_00421c69:; BB(0x00421c69);
    /* 00421c69: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00421c6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421c6e: jne 0x421ccd */ if (!fZ) goto L_00421ccd;
L_00421c70:; BB(0x00421c70);
    /* 00421c70: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00421c72: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00421c74: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00421c76: jle 0x421e02 */ if ((fZ||fS!=fO)) goto L_00421e02;
L_00421c7c:; BB(0x00421c7c);
    /* 00421c7c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421c7f: fld dword ptr [eax + 0x898] */ FPUSH(R_F32((u32)(r_eax+0x898u)));
    /* 00421c85: fld dword ptr [eax + 0x8a0] */ FPUSH(R_F32((u32)(r_eax+0x8a0u)));
L_00421c8b:; BB(0x00421c8b);
    /* 00421c8b: mov edx, dword ptr [ebp + ecx*4 - 0x80] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffff80u));
    /* 00421c8f: movsx eax, word ptr [edx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 00421c96: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421c98: jge 0x421cc4 */ if ((fS==fO)) goto L_00421cc4;
L_00421c9a:; BB(0x00421c9a);
    /* 00421c9a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00421c9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00421c9e: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00421ca1: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00421ca4: mov esi, eax */ r_esi = r_eax;
    /* 00421ca6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421ca9: mov dword ptr [eax + 0x898], edi */ W32((u32)(r_eax+0x898u), r_edi);
    /* 00421caf: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00421cb2: mov dword ptr [eax + 0x89c], edi */ W32((u32)(r_eax+0x89cu), r_edi);
    /* 00421cb8: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 00421cbb: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 00421cbe: mov dword ptr [eax + 0x8a0], edx */ W32((u32)(r_eax+0x8a0u), r_edx);
L_00421cc4:; BB(0x00421cc4);
    /* 00421cc4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00421cc7: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421cc9: jl 0x421c8b */ if ((fS!=fO)) goto L_00421c8b;
L_00421ccb:; BB(0x00421ccb);
    /* 00421ccb: jmp 0x421cdc */ goto L_00421cdc;
L_00421ccd:; BB(0x00421ccd);
    /* 00421ccd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421cd0: fld dword ptr [eax + 0x898] */ FPUSH(R_F32((u32)(r_eax+0x898u)));
    /* 00421cd6: fld dword ptr [eax + 0x8a0] */ FPUSH(R_F32((u32)(r_eax+0x8a0u)));
L_00421cdc:; BB(0x00421cdc);
    /* 00421cdc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421cdf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00421ce1: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 00421ce4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00421ce6: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 00421ce9: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00421ceb: fmul qword ptr [0x8fb9c0] */ ST(0) = ST(0) * R_F64((u32)(0x8fb9c0u));
    /* 00421cf1: fdiv qword ptr [0x8fb9b8] */ ST(0) = ST(0) / R_F64((u32)(0x8fb9b8u));
    /* 00421cf7: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 00421cfa: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 00421cfe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00421d03: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00421d06: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00421d09: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00421d0c: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 00421d0f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
L_00421d12:; BB(0x00421d12);
    /* 00421d12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421d15: mov ecx, dword ptr [edx + 0x768] */ r_ecx = R32((u32)(r_edx+0x768u));
    /* 00421d1b: mov dword ptr [edx + 0x86c], 1 */ W32((u32)(r_edx+0x86cu), 0x1u);
    /* 00421d25: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00421d28: mov dword ptr [edx + 0x87c], eax */ W32((u32)(r_edx+0x87cu), r_eax);
    /* 00421d2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421d30: jne 0x421d3c */ if (!fZ) goto L_00421d3c;
L_00421d32:; BB(0x00421d32);
    /* 00421d32: mov eax, edx */ r_eax = r_edx;
    /* 00421d34: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 00421d37: jmp 0x421de0 */ goto L_00421de0;
L_00421d3c:; BB(0x00421d3c);
    /* 00421d3c: mov esi, edx */ r_esi = r_edx;
    /* 00421d3e: movsx ecx, word ptr [esi + 0x60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x60u));
    /* 00421d42: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00421d45: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00421d48: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00421d4b: mov dword ptr [esi + 0x87c], ecx */ W32((u32)(r_esi+0x87cu), r_ecx);
    /* 00421d51: mov dword ptr [esi + 0x898], eax */ W32((u32)(r_esi+0x898u), r_eax);
    /* 00421d57: mov dword ptr [esi + 0x89c], edx */ W32((u32)(r_esi+0x89cu), r_edx);
    /* 00421d5d: mov dword ptr [esi + 0x8a0], ebx */ W32((u32)(r_esi+0x8a0u), r_ebx);
    /* 00421d63: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x421d68u); f_0082dcbc();
    /* 00421d68: fmul dword ptr [0x8fbc40] */ ST(0) = ST(0) * R_F32((u32)(0x8fbc40u));
    /* 00421d6e: mov eax, esi */ r_eax = r_esi;
    /* 00421d70: fadd dword ptr [eax + 0x898] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x898u));
    /* 00421d76: mov ecx, dword ptr [eax + 0x87c] */ r_ecx = R32((u32)(r_eax+0x87cu));
    /* 00421d7c: fstp dword ptr [eax + 0x898] */ W_F32((u32)(r_eax+0x898u), ST(0)); FPOP();
    /* 00421d82: mov dword ptr [eax + 0x89c], 0 */ W32((u32)(r_eax+0x89cu), 0x0u);
    /* 00421d8c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x421d91u); f_0082ddd8();
    /* 00421d91: fmul dword ptr [0x8fbc40] */ ST(0) = ST(0) * R_F32((u32)(0x8fbc40u));
    /* 00421d97: mov ecx, esi */ r_ecx = r_esi;
    /* 00421d99: fadd dword ptr [ecx + 0x8a0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8a0u));
    /* 00421d9f: mov ebx, dword ptr [ecx + 0x87c] */ r_ebx = R32((u32)(r_ecx+0x87cu));
    /* 00421da5: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 00421dab: fstp dword ptr [ecx + 0x8a0] */ W_F32((u32)(r_ecx+0x8a0u), ST(0)); FPOP();
    /* 00421db1: mov dword ptr [ecx + 0x86c], 2 */ W32((u32)(r_ecx+0x86cu), 0x2u);
    /* 00421dbb: mov dword ptr [ecx + 0x60], ebx */ W32((u32)(r_ecx+0x60u), r_ebx);
    /* 00421dbe: mov dword ptr [ecx + 0x660], 0 */ W32((u32)(r_ecx+0x660u), 0x0u);
    /* 00421dc8: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00421dcd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00421dd4: or edx, 0xc00 */ {  u32 a = r_edx; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00421dda: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
L_00421de0:; BB(0x00421de0);
    /* 00421de0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421de3: push dword ptr [ecx + 0x87c] */ { u32 v = R32((u32)(r_ecx+0x87cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00421de9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00421dea: call 0x421e98 */ r_esp -= 4; W32(r_esp, 0x421defu); f_00421e98();
    /* 00421def: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421df2: push dword ptr [ecx + 0x87c] */ { u32 v = R32((u32)(r_ecx+0x87cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00421df8: call 0x425a40 */ r_esp -= 4; W32(r_esp, 0x421dfdu); f_00425a40();
    /* 00421dfd: jmp 0x42196f */ goto L_0042196f;
L_00421e02:; BB(0x00421e02);
    /* 00421e02: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e05: fld dword ptr [eax + 0x898] */ FPUSH(R_F32((u32)(r_eax+0x898u)));
    /* 00421e0b: fld dword ptr [eax + 0x8a0] */ FPUSH(R_F32((u32)(r_eax+0x8a0u)));
    /* 00421e11: jmp 0x421cdc */ goto L_00421cdc;
L_00421e16:; BB(0x00421e16);
    /* 00421e16: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00421e19: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e1c: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00421e1f: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00421e22: mov dword ptr [esi + 0x898], eax */ W32((u32)(r_esi+0x898u), r_eax);
    /* 00421e28: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00421e2b: mov dword ptr [esi + 0x89c], edx */ W32((u32)(r_esi+0x89cu), r_edx);
    /* 00421e31: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00421e34: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00421e37: mov dword ptr [esi + 0x8a0], ebx */ W32((u32)(r_esi+0x8a0u), r_ebx);
    /* 00421e3d: jmp 0x421cdc */ goto L_00421cdc;
L_00421e42:; BB(0x00421e42);
    /* 00421e42: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e45: call 0x520c20 */ r_esp -= 4; W32(r_esp, 0x421e4au); f_00520c20();
    /* 00421e4a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e4d: mov dword ptr [edx + 0x87c], eax */ W32((u32)(r_edx+0x87cu), r_eax);
    /* 00421e53: mov ecx, eax */ r_ecx = r_eax;
    /* 00421e55: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x421e5au); f_0082dcbc();
    /* 00421e5a: fmul dword ptr [0x8fbc40] */ ST(0) = ST(0) * R_F32((u32)(0x8fbc40u));
    /* 00421e60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e63: mov ecx, dword ptr [eax + 0x87c] */ r_ecx = R32((u32)(r_eax+0x87cu));
    /* 00421e69: fstp dword ptr [eax + 0x898] */ W_F32((u32)(r_eax+0x898u), ST(0)); FPOP();
    /* 00421e6f: mov dword ptr [eax + 0x89c], 0 */ W32((u32)(r_eax+0x89cu), 0x0u);
    /* 00421e79: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x421e7eu); f_0082ddd8();
    /* 00421e7e: fmul dword ptr [0x8fbc40] */ ST(0) = ST(0) * R_F32((u32)(0x8fbc40u));
    /* 00421e84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e87: fstp dword ptr [eax + 0x8a0] */ W_F32((u32)(r_eax+0x8a0u), ST(0)); FPOP();
    /* 00421e8d: mov eax, dword ptr [eax + 0x87c] */ r_eax = R32((u32)(r_eax+0x87cu));
    /* 00421e93: jmp 0x421d12 */ goto L_00421d12;
}

void f_004219c9(void)
{
    FN_ENTER(0x004219c9);
    /* 004219c9: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 004219cc: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 004219cf: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004219d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004219d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004219dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004219de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004219df: ret 4 */ FN_RET(0x004219c9); r_esp += 8; return;
}

void f_00421ae0(void)
{
    FN_ENTER(0x00421ae0);
    /* 00421ae0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    UNSUP(0x00421ae1, "falls out of decoded code");
}

void f_00421e98(void) /* sub_421E98 */
{
    FN_ENTER(0x00421e98);
    /* 00421e98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00421e99: mov esi, ecx */ r_esi = r_ecx;
    /* 00421e9b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00421e9f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00421ea3: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x421ea8u); f_007a900c();
    /* 00421ea8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421eab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00421ead: jl 0x421ebd */ if ((fS!=fO)) goto L_00421ebd;
L_00421eaf:; BB(0x00421eaf);
    /* 00421eaf: mov dword ptr [esi + 0x664], 1 */ W32((u32)(r_esi+0x664u), 0x1u);
    /* 00421eb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421eba: ret 8 */ FN_RET(0x00421e98); r_esp += 12; return;
L_00421ebd:; BB(0x00421ebd);
    /* 00421ebd: mov dword ptr [esi + 0x664], 0xffffffff */ W32((u32)(r_esi+0x664u), 0xffffffffu);
    /* 00421ec7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421ec8: ret 8 */ FN_RET(0x00421e98); r_esp += 12; return;
}

void f_00421ecc(void) /* sub_421ECC */
{
    FN_ENTER(0x00421ecc);
    /* 00421ecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00421ecd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00421ece: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00421ed1: mov edi, ecx */ r_edi = r_ecx;
    /* 00421ed3: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00421ed7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00421eda: ja 0x4222ad */ if ((!fC&&!fZ)) goto L_004222ad;
L_00421ee0:; BB(0x00421ee0);
    /* 00421ee0: mov eax, dword ptr [eax*4 + 0x8fb664] */ r_eax = R32((u32)(r_eax*4+0x8fb664u));
    /* 00421ee7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004222ad:; BB(0x004222ad);
    /* 004222ad: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004222b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004222b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004222b2: ret 4 */ FN_RET(0x00421ecc); r_esp += 8; return;
}

void f_00421ee9(void)
{
    FN_ENTER(0x00421ee9);
    /* 00421ee9: mov eax, dword ptr [edi + 0x86c] */ r_eax = R32((u32)(r_edi+0x86cu));
    /* 00421eef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421ef2: jne 0x4222ad */ if (!fZ) goto L_004222ad;
L_00421ef8:; BB(0x00421ef8);
    /* 00421ef8: jmp 0x4222b5 */ goto L_004222b5;
L_004222ad:; BB(0x004222ad);
    /* 004222ad: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004222b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004222b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004222b2: ret 4 */ FN_RET(0x00421ee9); r_esp += 8; return;
L_004222b5:; BB(0x004222b5);
    /* 004222b5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004222b7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004222b9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004222bb: mov ecx, edi */ r_ecx = r_edi;
    /* 004222bd: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4222c3u); call_ind(t); }
    /* 004222c3: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004222c7: mov esi, dword ptr [edi + 0x684] */ r_esi = R32((u32)(r_edi+0x684u));
    /* 004222cd: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 004222d1: mov edx, 0xf */ r_edx = 0xfu;
    /* 004222d6: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 004222db: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004222e0: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004222e7: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004222ec: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 004222f1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004222f5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004222f8: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 004222fe: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 00422304: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00422308: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0042230c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x422311u); f_008003e0();
    /* 00422311: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422314: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422315: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00422316: ret 4 */ FN_RET(0x00421ee9); r_esp += 8; return;
}

void f_00421efd(void)
{
    FN_ENTER(0x00421efd);
    /* 00421efd: mov eax, dword ptr [edi + 0x86c] */ r_eax = R32((u32)(r_edi+0x86cu));
    /* 00421f03: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421f06: jne 0x4222ad */ if (!fZ) goto L_004222ad;
L_00421f0c:; BB(0x00421f0c);
    /* 00421f0c: jmp 0x422319 */ goto L_00422319;
L_004222ad:; BB(0x004222ad);
    /* 004222ad: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004222b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004222b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004222b2: ret 4 */ FN_RET(0x00421efd); r_esp += 8; return;
L_00422319:; BB(0x00422319);
    /* 00422319: mov esi, dword ptr [edi + 0x684] */ r_esi = R32((u32)(r_edi+0x684u));
    /* 0042231f: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00422322: jge 0x422340 */ if ((fS==fO)) goto L_00422340;
L_00422324:; BB(0x00422324);
    /* 00422324: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422329u); f_00420a44();
    /* 00422329: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042232b: jne 0x422334 */ if (!fZ) goto L_00422334;
L_0042232d:; BB(0x0042232d);
    /* 0042232d: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00422332: jmp 0x42235d */ goto L_0042235d;
L_00422334:; BB(0x00422334);
    /* 00422334: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422337: jne 0x42235d */ if (!fZ) goto L_0042235d;
L_00422339:; BB(0x00422339);
    /* 00422339: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0042233e: jmp 0x42235d */ goto L_0042235d;
L_00422340:; BB(0x00422340);
    /* 00422340: add esi, -0x32 */ {  u32 a = r_esi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00422343: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x422348u); f_00420a44();
    /* 00422348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042234a: jne 0x422353 */ if (!fZ) goto L_00422353;
L_0042234c:; BB(0x0042234c);
    /* 0042234c: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00422351: jmp 0x42235d */ goto L_0042235d;
L_00422353:; BB(0x00422353);
    /* 00422353: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422356: jne 0x42235d */ if (!fZ) goto L_0042235d;
L_00422358:; BB(0x00422358);
    /* 00422358: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0042235d:; BB(0x0042235d);
    /* 0042235d: mov ecx, dword ptr [edi + 0x684] */ r_ecx = R32((u32)(r_edi+0x684u));
L_00422363:; BB(0x00422363);
    /* 00422363: mov eax, dword ptr [edx + esi*4] */ r_eax = R32((u32)(r_edx+r_esi*4));
    /* 00422366: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00422369: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042236c: jne 0x42237e */ if (!fZ) goto L_0042237e;
L_0042236e:; BB(0x0042236e);
    /* 0042236e: mov dword ptr [edi + 0x684], 0 */ W32((u32)(r_edi+0x684u), 0x0u);
    /* 00422378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042237a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0042237c: jmp 0x422363 */ goto L_00422363;
L_0042237e:; BB(0x0042237e);
    /* 0042237e: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422381: je 0x422399 */ if (fZ) goto L_00422399;
L_00422383:; BB(0x00422383);
    /* 00422383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422384: mov dword ptr [edi + 0x684], ecx */ W32((u32)(r_edi+0x684u), r_ecx);
    /* 0042238a: mov ecx, edi */ r_ecx = r_edi;
    /* 0042238c: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x422391u); f_0041a808();
    /* 00422391: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422394: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422395: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00422396: ret 4 */ FN_RET(0x00421efd); r_esp += 8; return;
L_00422399:; BB(0x00422399);
    /* 00422399: mov dword ptr [edi + 0x684], 0x32 */ W32((u32)(r_edi+0x684u), 0x32u);
    /* 004223a3: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 004223a8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004223aa: jmp 0x422363 */ goto L_00422363;
}

void f_00421f11(void)
{
    FN_ENTER(0x00421f11);
    /* 00421f11: mov ecx, edi */ r_ecx = r_edi;
    /* 00421f13: call 0x41f21c */ r_esp -= 4; W32(r_esp, 0x421f18u); f_0041f21c();
    /* 00421f18: jmp 0x4222ad */ goto L_004222ad;
L_004222ad:; BB(0x004222ad);
    /* 004222ad: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004222b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004222b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004222b2: ret 4 */ FN_RET(0x00421f11); r_esp += 8; return;
}

void f_00421f1d(void)
{
    FN_ENTER(0x00421f1d);
    /* 00421f1d: lea eax, [edi + 0x39c] */ r_eax = (u32)(r_edi+0x39cu);
    /* 00421f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421f24: mov ecx, edi */ r_ecx = r_edi;
    /* 00421f26: call 0x4223ac */ r_esp -= 4; W32(r_esp, 0x421f2bu); f_004223ac();
    /* 00421f2b: mov ecx, edi */ r_ecx = r_edi;
    /* 00421f2d: call 0x4235f8 */ r_esp -= 4; W32(r_esp, 0x421f32u); f_004235f8();
    /* 00421f32: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00421f35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00421f36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00421f37: ret 4 */ FN_RET(0x00421f1d); r_esp += 8; return;
}

void f_00421f3a(void)
{
    FN_ENTER(0x00421f3a);
    /* 00421f3a: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 00421f40: mov edx, dword ptr [edi + 0x3ac] */ r_edx = R32((u32)(r_edi+0x3acu));
    /* 00421f46: mov esi, dword ptr [edi + 0x3b0] */ r_esi = R32((u32)(r_edi+0x3b0u));
    /* 00421f4c: mov dword ptr [edi + 0x5f0], eax */ W32((u32)(r_edi+0x5f0u), r_eax);
    /* 00421f52: mov dword ptr [edi + 0x5f4], edx */ W32((u32)(r_edi+0x5f4u), r_edx);
    /* 00421f58: mov dword ptr [edi + 0x5f8], esi */ W32((u32)(r_edi+0x5f8u), r_esi);
    /* 00421f5e: jmp 0x4222ad */ goto L_004222ad;
L_004222ad:; BB(0x004222ad);
    /* 004222ad: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004222b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004222b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004222b2: ret 4 */ FN_RET(0x00421f3a); r_esp += 8; return;
}

void f_00421f63(void)
{
    FN_ENTER(0x00421f63);
    /* 00421f63: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00421f65: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00421f6a: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00421f71: mov ecx, edi */ r_ecx = r_edi;
    /* 00421f73: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x421f79u); call_ind(t); }
    /* 00421f79: mov dword ptr [edi + 0x3ec], 1 */ W32((u32)(r_edi+0x3ecu), 0x1u);
    /* 00421f83: mov ecx, edi */ r_ecx = r_edi;
    /* 00421f85: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x421f8au); f_0041b0bc();
    /* 00421f8a: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00421f90: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00421f95: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00421f9b: mov ecx, edi */ r_ecx = r_edi;
    /* 00421f9d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x421fa2u); f_00521410();
    /* 00421fa2: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x421fa7u); f_00420a44();
    /* 00421fa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421fa9: jne 0x421fcd */ if (!fZ) goto L_00421fcd;
L_00421fab:; BB(0x00421fab);
    /* 00421fab: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00421fb0: push dword ptr [edi + 0x3b4] */ { u32 v = R32((u32)(r_edi+0x3b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00421fb6: lea ecx, [edi + 0x5fc] */ r_ecx = (u32)(r_edi+0x5fcu);
    /* 00421fbc: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00421fc1: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00421fc6: call 0x783444 */ r_esp -= 4; W32(r_esp, 0x421fcbu); f_00783444();
    /* 00421fcb: jmp 0x421ff5 */ goto L_00421ff5;
L_00421fcd:; BB(0x00421fcd);
    /* 00421fcd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421fd0: jne 0x421ff5 */ if (!fZ) goto L_00421ff5;
L_00421fd2:; BB(0x00421fd2);
    /* 00421fd2: mov eax, dword ptr [0xa43728] */ r_eax = R32((u32)(0xa43728u));
    /* 00421fd7: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00421fda: push dword ptr [edi + 0x3b4] */ { u32 v = R32((u32)(r_edi+0x3b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00421fe0: lea ecx, [edi + 0x5fc] */ r_ecx = (u32)(r_edi+0x5fcu);
    /* 00421fe6: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00421feb: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00421ff0: call 0x783444 */ r_esp -= 4; W32(r_esp, 0x421ff5u); f_00783444();
L_00421ff5:; BB(0x00421ff5);
    /* 00421ff5: mov esi, dword ptr [edi + 0x38] */ r_esi = R32((u32)(r_edi+0x38u));
    /* 00421ff8: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00421ffb: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00421ffe: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 00422004: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0042200a: mov dword ptr [edi + 0x898], esi */ W32((u32)(r_edi+0x898u), r_esi);
    /* 00422010: mov dword ptr [edi + 0x89c], eax */ W32((u32)(r_edi+0x89cu), r_eax);
    /* 00422016: mov dword ptr [edi + 0x8a0], edx */ W32((u32)(r_edi+0x8a0u), r_edx);
    /* 0042201c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0042201e: fmul qword ptr [0x8fb9b0] */ ST(0) = ST(0) * R_F64((u32)(0x8fb9b0u));
    /* 00422024: fdiv qword ptr [0x8fb9a8] */ ST(0) = ST(0) / R_F64((u32)(0x8fb9a8u));
    /* 0042202a: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0042202e: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00422033: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00422038: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0042203c: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00422040: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00422044: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00422048: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0042204c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042204d: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00422050: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x422055u); f_007a900c();
    /* 00422055: mov esi, eax */ r_esi = r_eax;
    /* 00422057: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042205a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0042205c: jl 0x42206a */ if ((fS!=fO)) goto L_0042206a;
L_0042205e:; BB(0x0042205e);
    /* 0042205e: mov dword ptr [edi + 0x664], 1 */ W32((u32)(r_edi+0x664u), 0x1u);
    /* 00422068: jmp 0x422076 */ goto L_00422076;
L_0042206a:; BB(0x0042206a);
    /* 0042206a: mov dword ptr [edi + 0x664], 0xffffffff */ W32((u32)(r_edi+0x664u), 0xffffffffu);
    /* 00422074: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00422076:; BB(0x00422076);
    /* 00422076: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42207bu); f_00420a44();
    /* 0042207b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042207d: jne 0x4220b2 */ if (!fZ) goto L_004220b2;
L_0042207f:; BB(0x0042207f);
    /* 0042207f: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422082: mov dword ptr [esp], 0x41800000 */ W32((u32)(r_esp), 0x41800000u);
    /* 00422089: lea ecx, [edi + 0x620] */ r_ecx = (u32)(r_edi+0x620u);
    /* 0042208f: mov dword ptr [esp + 4], 0xc1800000 */ W32((u32)(r_esp+0x4u), 0xc1800000u);
    /* 00422097: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 0042209b: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 0042209f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004220a3: mov dword ptr [esp + 0xc], 0x44000000 */ W32((u32)(r_esp+0xcu), 0x44000000u);
    /* 004220ab: call 0x783444 */ r_esp -= 4; W32(r_esp, 0x4220b0u); f_00783444();
    /* 004220b0: jmp 0x422115 */ goto L_00422115;
L_004220b2:; BB(0x004220b2);
    /* 004220b2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004220b5: jne 0x422115 */ if (!fZ) goto L_00422115;
L_004220b7:; BB(0x004220b7);
    /* 004220b7: fld dword ptr [0x8fbc30] */ FPUSH(R_F32((u32)(0x8fbc30u)));
    /* 004220bd: mov edx, dword ptr [0xa43728] */ r_edx = R32((u32)(0xa43728u));
    /* 004220c3: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 004220c6: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004220ca: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004220cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004220d4: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004220d8: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004220dc: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004220e0: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004220e4: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004220e7: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004220eb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004220ef: lea ecx, [edi + 0x620] */ r_ecx = (u32)(r_edi+0x620u);
    /* 004220f5: mov dword ptr [esp], 0x41800000 */ W32((u32)(r_esp), 0x41800000u);
    /* 004220fc: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00422100: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 00422104: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00422108: mov dword ptr [esp + 4], 0xc1800000 */ W32((u32)(r_esp+0x4u), 0xc1800000u);
    /* 00422110: call 0x783444 */ r_esp -= 4; W32(r_esp, 0x422115u); f_00783444();
L_00422115:; BB(0x00422115);
    /* 00422115: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00422118: mov dword ptr [edi + 0x86c], 0 */ W32((u32)(r_edi+0x86cu), 0x0u);
    /* 00422122: mov dword ptr [edi + 0x87c], eax */ W32((u32)(r_edi+0x87cu), r_eax);
    /* 00422128: mov dword ptr [edi + 0x884], 0 */ W32((u32)(r_edi+0x884u), 0x0u);
    /* 00422132: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00422135: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00422136: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00422137: ret 4 */ FN_RET(0x00421f63); r_esp += 8; return;
}

