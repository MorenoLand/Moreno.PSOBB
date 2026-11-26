#include "protos.h"

void f_00739044(void) /* sub_739044 */
{
    FN_ENTER(0x00739044);
    /* 00739044: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739045: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00739046: mov edi, ecx */ r_edi = r_ecx;
    /* 00739048: mov ecx, edi */ r_ecx = r_edi;
    /* 0073904a: fld dword ptr [0x971b80] */ FPUSH(R_F32((u32)(0x971b80u)));
    /* 00739050: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00739054: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00739057: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x73905cu); f_007083d4();
    /* 0073905c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0073905e: je 0x73906e */ if (fZ) goto L_0073906e;
L_00739060:; BB(0x00739060);
    /* 00739060: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00739063: fadd dword ptr [0x971b78] */ ST(0) = ST(0) + R_F32((u32)(0x971b78u));
    /* 00739069: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073906c: jmp 0x73907a */ goto L_0073907a;
L_0073906e:; BB(0x0073906e);
    /* 0073906e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00739071: fadd dword ptr [0x971b7c] */ ST(0) = ST(0) + R_F32((u32)(0x971b7cu));
    /* 00739077: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0073907a:; BB(0x0073907a);
    /* 0073907a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0073907d: fadd dword ptr [0x971bb8] */ ST(0) = ST(0) + R_F32((u32)(0x971bb8u));
    /* 00739083: fcom dword ptr [edi + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3cu))); 
    /* 00739086: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00739088: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073908b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073908c: je 0x7390a0 */ if (fZ) goto L_007390a0;
L_0073908e:; BB(0x0073908e);
    /* 0073908e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00739091: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00739094: mov dword ptr [edi + 0x50], 8 */ W32((u32)(r_edi+0x50u), 0x8u);
    /* 0073909b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073909c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073909d: ret 4 */ FN_RET(0x00739044); r_esp += 8; return;
L_007390a0:; BB(0x007390a0);
    /* 007390a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007390a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007390a2: ret 4 */ FN_RET(0x00739044); r_esp += 8; return;
}

void f_007390a8(void) /* sub_7390A8 */
{
    FN_ENTER(0x007390a8);
    /* 007390a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007390a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007390aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007390ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007390ac: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007390af: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007390b1: movzx eax, byte ptr [ebp + 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0x60u));
    /* 007390b5: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007390b7: je 0x7390c1 */ if (fZ) goto L_007390c1;
L_007390b9:; BB(0x007390b9);
    /* 007390b9: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007390be: mov byte ptr [ebp + 0x60], al */ W8((u32)(r_ebp+0x60u), (u8)r_eax);
L_007390c1:; BB(0x007390c1);
    /* 007390c1: lea ecx, [ebp + 0x68] */ r_ecx = (u32)(r_ebp+0x68u);
    /* 007390c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007390c6: mov ebx, eax */ r_ebx = r_eax;
    /* 007390c8: mov esi, ecx */ r_esi = r_ecx;
L_007390ca:; BB(0x007390ca);
    /* 007390ca: mov ecx, esi */ r_ecx = r_esi;
    /* 007390cc: call 0x738e2c */ r_esp -= 4; W32(r_esp, 0x7390d1u); f_00738e2c();
    /* 007390d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007390d3: je 0x73911d */ if (fZ) goto L_0073911d;
L_007390d5:; BB(0x007390d5);
    /* 007390d5: movsx eax, byte ptr [esi + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x14u));
    /* 007390d9: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007390db: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007390dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007390df: jle 0x73915c */ if ((fZ||fS!=fO)) goto L_0073915c;
L_007390e1:; BB(0x007390e1);
    /* 007390e1: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 007390e4: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 007390e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007390e9: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 007390eb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007390ee: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007390f1: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 007390f3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007390f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007390f7: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 007390fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007390fc: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007390ff: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00739101: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 00739103: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00739105: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00739108: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073910b: mov byte ptr [esi + 0x14], al */ W8((u32)(r_esi+0x14u), (u8)r_eax);
L_0073910e:; BB(0x0073910e);
    /* 0073910e: movsx edx, byte ptr [esi + 0x10] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x10u));
    /* 00739112: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00739115: jge 0x73911d */ if ((fS==fO)) goto L_0073911d;
L_00739117:; BB(0x00739117);
    /* 00739117: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073911a: mov byte ptr [esi + 0x10], dl */ W8((u32)(r_esi+0x10u), (u8)r_edx);
L_0073911d:; BB(0x0073911d);
    /* 0073911d: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00739120: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00739123: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00739126: jl 0x7390ca */ if ((fS!=fO)) goto L_007390ca;
L_00739128:; BB(0x00739128);
    /* 00739128: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073912a: call 0x73916c */ r_esp -= 4; W32(r_esp, 0x73912fu); f_0073916c();
    /* 0073912f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00739131: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x739136u); f_00710db4();
    /* 00739136: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00739138: call 0x73948c */ r_esp -= 4; W32(r_esp, 0x73913du); f_0073948c();
    /* 0073913d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073913f: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x739144u); f_00710ee4();
    /* 00739144: movzx eax, byte ptr [ebp + 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0x60u));
    /* 00739148: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073914a: je 0x739154 */ if (fZ) goto L_00739154;
L_0073914c:; BB(0x0073914c);
    /* 0073914c: and eax, 0xf3 */ {  u32 a = r_eax; u32 b = 0xf3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00739151: mov byte ptr [ebp + 0x60], al */ W8((u32)(r_ebp+0x60u), (u8)r_eax);
L_00739154:; BB(0x00739154);
    /* 00739154: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00739158: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00739159: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073915a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073915b: ret  */ FN_RET(0x007390a8); r_esp += 4; return;
L_0073915c:; BB(0x0073915c);
    /* 0073915c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073915e: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 00739161: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00739164: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 00739167: jmp 0x73910e */ goto L_0073910e;
}

void f_0073916c(void) /* sub_73916C */
{
    FN_ENTER(0x0073916c);
    /* 0073916c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073916d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073916e: mov edi, ecx */ r_edi = r_ecx;
    /* 00739170: mov ecx, edi */ r_ecx = r_edi;
    /* 00739172: call 0x712798 */ r_esp -= 4; W32(r_esp, 0x739177u); f_00712798();
    /* 00739177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739179: jne 0x73917e */ if (!fZ) goto L_0073917e;
L_0073917b:; BB(0x0073917b);
    /* 0073917b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073917c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073917d: ret  */ FN_RET(0x0073916c); r_esp += 4; return;
L_0073917e:; BB(0x0073917e);
    /* 0073917e: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00739182: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739184: je 0x739189 */ if (fZ) goto L_00739189;
L_00739186:; BB(0x00739186);
    /* 00739186: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00739187: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00739188: ret  */ FN_RET(0x0073916c); r_esp += 4; return;
L_00739189:; BB(0x00739189);
    /* 00739189: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073918b: je 0x739190 */ if (fZ) goto L_00739190;
L_0073918d:; BB(0x0073918d);
    /* 0073918d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073918e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073918f: ret  */ FN_RET(0x0073916c); r_esp += 4; return;
L_00739190:; BB(0x00739190);
    /* 00739190: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739192: jne 0x739414 */ if (!fZ) goto L_00739414;
L_00739198:; BB(0x00739198);
    /* 00739198: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 0073919b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073919d: jle 0x7391a8 */ if ((fZ||fS!=fO)) goto L_007391a8;
L_0073919f:; BB(0x0073919f);
    /* 0073919f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007391a2: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 007391a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007391a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007391a7: ret  */ FN_RET(0x0073916c); r_esp += 4; return;
L_007391a8:; BB(0x007391a8);
    /* 007391a8: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 007391ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007391ad: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7391b2u); f_00719140();
    /* 007391b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007391b3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007391b5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007391b7: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007391ba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007391bc: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007391c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007391c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007391c6: lea ebx, [eax + eax + 0xaae75c] */ r_ebx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007391cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007391cf: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7391d4u); f_007c09fc();
    /* 007391d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007391d6: je 0x7392ca */ if (fZ) goto L_007392ca;
L_007391dc:; BB(0x007391dc);
    /* 007391dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007391de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007391df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007391e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007391e1: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007391e6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7391ebu); f_00814298();
    /* 007391eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007391ee: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 007391f2: mov edx, dword ptr [edi + eax*4 + 0x158] */ r_edx = R32((u32)(r_edi+r_eax*4+0x158u));
    /* 007391f9: mov byte ptr [edx + 0x12], 0 */ W8((u32)(r_edx+0x12u), 0x0u);
    /* 007391fd: mov edx, dword ptr [edi + 0x158] */ r_edx = R32((u32)(r_edi+0x158u));
    /* 00739203: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00739205: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739207: je 0x73929d */ if (fZ) goto L_0073929d;
L_0073920d:; BB(0x0073920d);
    /* 0073920d: mov edx, dword ptr [edi + 0x15c] */ r_edx = R32((u32)(r_edi+0x15cu));
    /* 00739213: mov eax, 1 */ r_eax = 0x1u;
    /* 00739218: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073921a: je 0x73929d */ if (fZ) goto L_0073929d;
L_00739220:; BB(0x00739220);
    /* 00739220: mov edx, dword ptr [edi + 0x160] */ r_edx = R32((u32)(r_edi+0x160u));
    /* 00739226: mov eax, 2 */ r_eax = 0x2u;
    /* 0073922b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073922d: je 0x73929d */ if (fZ) goto L_0073929d;
L_0073922f:; BB(0x0073922f);
    /* 0073922f: mov edx, dword ptr [edi + 0x164] */ r_edx = R32((u32)(r_edi+0x164u));
    /* 00739235: mov eax, 3 */ r_eax = 0x3u;
    /* 0073923a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073923c: je 0x73929d */ if (fZ) goto L_0073929d;
L_0073923e:; BB(0x0073923e);
    /* 0073923e: mov edx, dword ptr [edi + 0x168] */ r_edx = R32((u32)(r_edi+0x168u));
    /* 00739244: mov eax, 4 */ r_eax = 0x4u;
    /* 00739249: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073924b: je 0x73929d */ if (fZ) goto L_0073929d;
L_0073924d:; BB(0x0073924d);
    /* 0073924d: mov edx, dword ptr [edi + 0x16c] */ r_edx = R32((u32)(r_edi+0x16cu));
    /* 00739253: mov eax, 5 */ r_eax = 0x5u;
    /* 00739258: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073925a: je 0x73929d */ if (fZ) goto L_0073929d;
L_0073925c:; BB(0x0073925c);
    /* 0073925c: mov edx, dword ptr [edi + 0x170] */ r_edx = R32((u32)(r_edi+0x170u));
    /* 00739262: mov eax, 6 */ r_eax = 0x6u;
    /* 00739267: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739269: je 0x73929d */ if (fZ) goto L_0073929d;
L_0073926b:; BB(0x0073926b);
    /* 0073926b: mov edx, dword ptr [edi + 0x174] */ r_edx = R32((u32)(r_edi+0x174u));
    /* 00739271: mov eax, 7 */ r_eax = 0x7u;
    /* 00739276: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739278: je 0x73929d */ if (fZ) goto L_0073929d;
L_0073927a:; BB(0x0073927a);
    /* 0073927a: mov edx, dword ptr [edi + 0x178] */ r_edx = R32((u32)(r_edi+0x178u));
    /* 00739280: mov eax, 8 */ r_eax = 0x8u;
    /* 00739285: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739287: je 0x73929d */ if (fZ) goto L_0073929d;
L_00739289:; BB(0x00739289);
    /* 00739289: mov edx, dword ptr [edi + 0x17c] */ r_edx = R32((u32)(r_edi+0x17cu));
    /* 0073928f: mov eax, 9 */ r_eax = 0x9u;
    /* 00739294: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739296: je 0x73929d */ if (fZ) goto L_0073929d;
L_00739298:; BB(0x00739298);
    /* 00739298: mov eax, 0xa */ r_eax = 0xau;
L_0073929d:; BB(0x0073929d);
    /* 0073929d: movzx edx, byte ptr [edi + 0x61] */ r_edx = (u32)R8((u32)(r_edi+0x61u));
    /* 007392a1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007392a4: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007392a7: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 007392aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007392ac: jge 0x7392b0 */ if ((fS==fO)) goto L_007392b0;
L_007392ae:; BB(0x007392ae);
    /* 007392ae: mov edx, eax */ r_edx = r_eax;
L_007392b0:; BB(0x007392b0);
    /* 007392b0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007392b2: jle 0x7392bc */ if ((fZ||fS!=fO)) goto L_007392bc;
L_007392b4:; BB(0x007392b4);
    /* 007392b4: mov byte ptr [edi + 0x61], 0 */ W8((u32)(r_edi+0x61u), 0x0u);
    /* 007392b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007392ba: jmp 0x7392bf */ goto L_007392bf;
L_007392bc:; BB(0x007392bc);
    /* 007392bc: mov byte ptr [edi + 0x61], dl */ W8((u32)(r_edi+0x61u), (u8)r_edx);
L_007392bf:; BB(0x007392bf);
    /* 007392bf: mov eax, dword ptr [edi + edx*4 + 0x158] */ r_eax = R32((u32)(r_edi+r_edx*4+0x158u));
    /* 007392c6: mov byte ptr [eax + 0x12], 1 */ W8((u32)(r_eax+0x12u), 0x1u);
L_007392ca:; BB(0x007392ca);
    /* 007392ca: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007392cc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007392ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007392d0: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 007392d6: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7392dbu); f_007c09fc();
    /* 007392db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007392dd: je 0x7393d1 */ if (fZ) goto L_007393d1;
L_007392e3:; BB(0x007392e3);
    /* 007392e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007392e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007392e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007392e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007392e8: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007392ed: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7392f2u); f_00814298();
    /* 007392f2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007392f5: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 007392f9: mov edx, dword ptr [edi + eax*4 + 0x158] */ r_edx = R32((u32)(r_edi+r_eax*4+0x158u));
    /* 00739300: mov byte ptr [edx + 0x12], 0 */ W8((u32)(r_edx+0x12u), 0x0u);
    /* 00739304: mov edx, dword ptr [edi + 0x158] */ r_edx = R32((u32)(r_edi+0x158u));
    /* 0073930a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073930c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073930e: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739314:; BB(0x00739314);
    /* 00739314: mov edx, dword ptr [edi + 0x15c] */ r_edx = R32((u32)(r_edi+0x15cu));
    /* 0073931a: mov eax, 1 */ r_eax = 0x1u;
    /* 0073931f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739321: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739327:; BB(0x00739327);
    /* 00739327: mov edx, dword ptr [edi + 0x160] */ r_edx = R32((u32)(r_edi+0x160u));
    /* 0073932d: mov eax, 2 */ r_eax = 0x2u;
    /* 00739332: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739334: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739336:; BB(0x00739336);
    /* 00739336: mov edx, dword ptr [edi + 0x164] */ r_edx = R32((u32)(r_edi+0x164u));
    /* 0073933c: mov eax, 3 */ r_eax = 0x3u;
    /* 00739341: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739343: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739345:; BB(0x00739345);
    /* 00739345: mov edx, dword ptr [edi + 0x168] */ r_edx = R32((u32)(r_edi+0x168u));
    /* 0073934b: mov eax, 4 */ r_eax = 0x4u;
    /* 00739350: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739352: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739354:; BB(0x00739354);
    /* 00739354: mov edx, dword ptr [edi + 0x16c] */ r_edx = R32((u32)(r_edi+0x16cu));
    /* 0073935a: mov eax, 5 */ r_eax = 0x5u;
    /* 0073935f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739361: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739363:; BB(0x00739363);
    /* 00739363: mov edx, dword ptr [edi + 0x170] */ r_edx = R32((u32)(r_edi+0x170u));
    /* 00739369: mov eax, 6 */ r_eax = 0x6u;
    /* 0073936e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739370: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739372:; BB(0x00739372);
    /* 00739372: mov edx, dword ptr [edi + 0x174] */ r_edx = R32((u32)(r_edi+0x174u));
    /* 00739378: mov eax, 7 */ r_eax = 0x7u;
    /* 0073937d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073937f: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739381:; BB(0x00739381);
    /* 00739381: mov edx, dword ptr [edi + 0x178] */ r_edx = R32((u32)(r_edi+0x178u));
    /* 00739387: mov eax, 8 */ r_eax = 0x8u;
    /* 0073938c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073938e: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_00739390:; BB(0x00739390);
    /* 00739390: mov edx, dword ptr [edi + 0x17c] */ r_edx = R32((u32)(r_edi+0x17cu));
    /* 00739396: mov eax, 9 */ r_eax = 0x9u;
    /* 0073939b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073939d: je 0x7393a4 */ if (fZ) goto L_007393a4;
L_0073939f:; BB(0x0073939f);
    /* 0073939f: mov eax, 0xa */ r_eax = 0xau;
L_007393a4:; BB(0x007393a4);
    /* 007393a4: movzx edx, byte ptr [edi + 0x61] */ r_edx = (u32)R8((u32)(r_edi+0x61u));
    /* 007393a8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007393ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007393ae: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 007393b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007393b3: jge 0x7393b7 */ if ((fS==fO)) goto L_007393b7;
L_007393b5:; BB(0x007393b5);
    /* 007393b5: mov edx, eax */ r_edx = r_eax;
L_007393b7:; BB(0x007393b7);
    /* 007393b7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007393b9: jle 0x7393c3 */ if ((fZ||fS!=fO)) goto L_007393c3;
L_007393bb:; BB(0x007393bb);
    /* 007393bb: mov byte ptr [edi + 0x61], 0 */ W8((u32)(r_edi+0x61u), 0x0u);
    /* 007393bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007393c1: jmp 0x7393c6 */ goto L_007393c6;
L_007393c3:; BB(0x007393c3);
    /* 007393c3: mov byte ptr [edi + 0x61], dl */ W8((u32)(r_edi+0x61u), (u8)r_edx);
L_007393c6:; BB(0x007393c6);
    /* 007393c6: mov eax, dword ptr [edi + edx*4 + 0x158] */ r_eax = R32((u32)(r_edi+r_edx*4+0x158u));
    /* 007393cd: mov byte ptr [eax + 0x12], 1 */ W8((u32)(r_eax+0x12u), 0x1u);
L_007393d1:; BB(0x007393d1);
    /* 007393d1: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007393d6: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007393dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007393dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007393df: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7393e4u); f_007c1160();
    /* 007393e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007393e6: je 0x7393ef */ if (fZ) goto L_007393ef;
L_007393e8:; BB(0x007393e8);
    /* 007393e8: mov ecx, edi */ r_ecx = r_edi;
    /* 007393ea: call 0x739418 */ r_esp -= 4; W32(r_esp, 0x7393efu); f_00739418();
L_007393ef:; BB(0x007393ef);
    /* 007393ef: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 007393f3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007393f5: je 0x7393fa */ if (fZ) goto L_007393fa;
L_007393f7:; BB(0x007393f7);
    /* 007393f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007393f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007393f9: ret  */ FN_RET(0x0073916c); r_esp += 4; return;
L_007393fa:; BB(0x007393fa);
    /* 007393fa: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 007393ff: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00739401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00739404: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x739409u); f_007c1160();
    /* 00739409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073940b: je 0x739414 */ if (fZ) goto L_00739414;
L_0073940d:; BB(0x0073940d);
    /* 0073940d: mov ecx, edi */ r_ecx = r_edi;
    /* 0073940f: call 0x739468 */ r_esp -= 4; W32(r_esp, 0x739414u); f_00739468();
L_00739414:; BB(0x00739414);
    /* 00739414: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00739415: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00739416: ret  */ FN_RET(0x0073916c); r_esp += 4; return;
}

void f_00739418(void) /* sub_739418 */
{
    FN_ENTER(0x00739418);
    /* 00739418: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00739419: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073941b: movsx eax, byte ptr [ebp + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x61u));
    /* 0073941f: mov eax, dword ptr [ebp + eax*4 + 0x158] */ r_eax = R32((u32)(r_ebp+r_eax*4+0x158u));
    /* 00739426: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739428: je 0x739444 */ if (fZ) goto L_00739444;
L_0073942a:; BB(0x0073942a);
    /* 0073942a: movzx eax, byte ptr [eax + 0x13] */ r_eax = (u32)R8((u32)(r_eax+0x13u));
    /* 0073942e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739430: je 0x739446 */ if (fZ) goto L_00739446;
L_00739432:; BB(0x00739432);
    /* 00739432: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00739434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739437: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 0073943c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x739441u); f_00814298();
    /* 00739441: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00739444:; BB(0x00739444);
    /* 00739444: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00739445: ret  */ FN_RET(0x00739418); r_esp += 4; return;
L_00739446:; BB(0x00739446);
    /* 00739446: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00739448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073944a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073944b: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00739450: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x739455u); f_00814298();
    /* 00739455: movzx eax, byte ptr [ebp + 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0x60u));
    /* 00739459: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073945e: mov byte ptr [ebp + 0x60], al */ W8((u32)(r_ebp+0x60u), (u8)r_eax);
    /* 00739461: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00739465: ret  */ FN_RET(0x00739418); r_esp += 4; return;
}

void f_00739468(void) /* sub_739468 */
{
    FN_ENTER(0x00739468);
    /* 00739468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00739469: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073946b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073946d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073946e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073946f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739470: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00739475: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73947au); f_00814298();
    /* 0073947a: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 0073947e: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00739483: mov byte ptr [ebx + 0x60], al */ W8((u32)(r_ebx+0x60u), (u8)r_eax);
    /* 00739486: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739489: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073948a: ret  */ FN_RET(0x00739468); r_esp += 4; return;
}

void f_0073948c(void) /* sub_73948C */
{
    FN_ENTER(0x0073948c);
    /* 0073948c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073948d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00739490: mov esi, ecx */ r_esi = r_ecx;
    /* 00739492: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00739495: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739497: jne 0x7394ff */ if (!fZ) goto L_007394ff;
L_00739499:; BB(0x00739499);
    /* 00739499: mov ecx, esi */ r_ecx = r_esi;
    /* 0073949b: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7394a0u); f_007083d4();
    /* 007394a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007394a2: je 0x7394ac */ if (fZ) goto L_007394ac;
L_007394a4:; BB(0x007394a4);
    /* 007394a4: fld dword ptr [0x971b70] */ FPUSH(R_F32((u32)(0x971b70u)));
    /* 007394aa: jmp 0x7394b2 */ goto L_007394b2;
L_007394ac:; BB(0x007394ac);
    /* 007394ac: fld dword ptr [0x971b74] */ FPUSH(R_F32((u32)(0x971b74u)));
L_007394b2:; BB(0x007394b2);
    /* 007394b2: fadd dword ptr [0x971bb8] */ ST(0) = ST(0) + R_F32((u32)(0x971bb8u));
    /* 007394b8: fcom dword ptr [esi + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3cu))); 
    /* 007394bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007394bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007394be: je 0x7394c3 */ if (fZ) goto L_007394c3;
L_007394c0:; BB(0x007394c0);
    /* 007394c0: fst dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0));
L_007394c3:; BB(0x007394c3);
    /* 007394c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007394c5: movsx edx, word ptr [esi + 0x22] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x22u));
    /* 007394c9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007394cc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007394cf: fsubr dword ptr [0x971b6c] */ ST(0) = R_F32((u32)(0x971b6cu)) - ST(0);
    /* 007394d5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007394d9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007394de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007394e3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007394e7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007394eb: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 007394ef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007394f3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007394f7: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 007394fa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007394fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007394fe: ret  */ FN_RET(0x0073948c); r_esp += 4; return;
L_007394ff:; BB(0x007394ff);
    /* 007394ff: mov ecx, esi */ r_ecx = r_esi;
    /* 00739501: call 0x738f70 */ r_esp -= 4; W32(r_esp, 0x739506u); f_00738f70();
    /* 00739506: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739509: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073950a: ret  */ FN_RET(0x0073948c); r_esp += 4; return;
}

void f_0073950c(void) /* sub_73950C */
{
    FN_ENTER(0x0073950c);
    /* 0073950c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073950d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073950e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073950f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00739510: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00739513: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00739515: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00739517: call 0x7399ec */ r_esp -= 4; W32(r_esp, 0x73951cu); f_007399ec();
    /* 0073951c: mov edi, eax */ r_edi = r_eax;
    /* 0073951e: fld dword ptr [0x971b64] */ FPUSH(R_F32((u32)(0x971b64u)));
    /* 00739524: fadd dword ptr [ebp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x54u));
    /* 00739527: fdivr dword ptr [0x971b68] */ ST(0) = R_F32((u32)(0x971b68u)) / ST(0);
    /* 0073952d: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00739530: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00739534: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00739538: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0073953d: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x739542u); f_0082bb30();
    /* 00739542: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00739548: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x73954du); f_00829cc8();
    /* 0073954d: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 00739550: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00739555: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x73955au); f_0082bb60();
    /* 0073955a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073955c: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x739561u); f_007083d4();
    /* 00739561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739563: je 0x73965c */ if (fZ) goto L_0073965c;
L_00739569:; BB(0x00739569);
    /* 00739569: fld dword ptr [0x971bac] */ FPUSH(R_F32((u32)(0x971bacu)));
    /* 0073956f: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00739571: fadd dword ptr [0x971bb0] */ ST(0) = ST(0) + R_F32((u32)(0x971bb0u));
    /* 00739577: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00739579: mov ecx, edi */ r_ecx = r_edi;
    /* 0073957b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073957e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00739581: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00739584: fadd dword ptr [0x971b60] */ ST(0) = ST(0) + R_F32((u32)(0x971b60u));
    /* 0073958a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073958c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00739590: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00739594: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00739596: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073959a: mov dword ptr [esp + 0x10], 0x3f660000 */ W32((u32)(r_esp+0x10u), 0x3f660000u);
    /* 007395a2: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 007395aa: mov dword ptr [esp + 0x18], 0x3f780000 */ W32((u32)(r_esp+0x18u), 0x3f780000u);
    /* 007395b2: mov dword ptr [esp + 0x1c], 0x3de00000 */ W32((u32)(r_esp+0x1cu), 0x3de00000u);
    /* 007395ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007395bb: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7395c0u); f_0071bbb4();
    /* 007395c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007395c1: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007395c5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007395c8: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007395cc: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7395d1u); f_0082b440();
    /* 007395d1: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 007395d5: fsub dword ptr [0x971bac] */ ST(0) = ST(0) - R_F32((u32)(0x971bacu));
    /* 007395db: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007395dd: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007395df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007395e1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 007395e5: mov ecx, edi */ r_ecx = r_edi;
    /* 007395e7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007395ea: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 007395ed: fadd dword ptr [0x971b40] */ ST(0) = ST(0) + R_F32((u32)(0x971b40u));
    /* 007395f3: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007395f7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007395fa: fadd dword ptr [0x971ba8] */ ST(0) = ST(0) + R_F32((u32)(0x971ba8u));
    /* 00739600: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00739602: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 00739605: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00739607: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073960b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073960f: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00739617: mov dword ptr [esp + 0x14], 0x3ea00000 */ W32((u32)(r_esp+0x14u), 0x3ea00000u);
    /* 0073961f: mov dword ptr [esp + 0x18], 0x3ee80000 */ W32((u32)(r_esp+0x18u), 0x3ee80000u);
    /* 00739627: mov dword ptr [esp + 0x1c], 0x3ece0000 */ W32((u32)(r_esp+0x1cu), 0x3ece0000u);
    /* 0073962f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00739630: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x739635u); f_0071bbb4();
    /* 00739635: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739636: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0073963a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073963d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00739641: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x739646u); f_0082b440();
    /* 00739646: fld dword ptr [0x971b34] */ FPUSH(R_F32((u32)(0x971b34u)));
    /* 0073964c: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 00739650: fsub dword ptr [0x971ba8] */ ST(0) = ST(0) - R_F32((u32)(0x971ba8u));
    /* 00739656: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073965a: jmp 0x7396d7 */ goto L_007396d7;
L_0073965c:; BB(0x0073965c);
    /* 0073965c: fld dword ptr [0x971bb8] */ FPUSH(R_F32((u32)(0x971bb8u)));
    /* 00739662: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00739664: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00739666: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00739669: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0073966c: fadd dword ptr [0x971b60] */ ST(0) = ST(0) + R_F32((u32)(0x971b60u));
    /* 00739672: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00739675: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00739679: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073967b: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 0073967e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00739682: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00739684: fadd dword ptr [0x971bb4] */ ST(0) = ST(0) + R_F32((u32)(0x971bb4u));
    /* 0073968a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073968e: mov ecx, edi */ r_ecx = r_edi;
    /* 00739690: mov dword ptr [esp + 0x10], 0x3ee80000 */ W32((u32)(r_esp+0x10u), 0x3ee80000u);
    /* 00739698: mov dword ptr [esp + 0x14], 0x3f2e0000 */ W32((u32)(r_esp+0x14u), 0x3f2e0000u);
    /* 007396a0: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 007396a8: mov dword ptr [esp + 0x1c], 0x3f040000 */ W32((u32)(r_esp+0x1cu), 0x3f040000u);
    /* 007396b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007396b1: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7396b6u); f_0071bbb4();
    /* 007396b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007396b7: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007396bb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007396be: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007396c2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7396c7u); f_0082b440();
    /* 007396c7: fld dword ptr [0x971b50] */ FPUSH(R_F32((u32)(0x971b50u)));
    /* 007396cd: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 007396d1: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007396d3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007396d7:; BB(0x007396d7);
    /* 007396d7: fld dword ptr [0x971bb8] */ FPUSH(R_F32((u32)(0x971bb8u)));
    /* 007396dd: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 007396e1: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007396e3: fcom dword ptr [0x971ba4] */ fx_compare(ST(0), R_F32((u32)(0x971ba4u))); 
    /* 007396e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007396eb: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 007396ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007396f0: jb 0x7397c3 */ if (fC) goto L_007397c3;
L_007396f6:; BB(0x007396f6);
    /* 007396f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007396f8: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_007396fc:; BB(0x007396fc);
    /* 007396fc: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 00739700: fcomp dword ptr [0x971ba0] */ fx_compare(ST(0), R_F32((u32)(0x971ba0u))); FPOP();
    /* 00739706: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00739708: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00739709: jae 0x739717 */ if (!fC) goto L_00739717;
L_0073970b:; BB(0x0073970b);
    /* 0073970b: fld dword ptr [0x971b2c] */ FPUSH(R_F32((u32)(0x971b2cu)));
    /* 00739711: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00739715: jmp 0x739721 */ goto L_00739721;
L_00739717:; BB(0x00739717);
    /* 00739717: fld dword ptr [0x971b30] */ FPUSH(R_F32((u32)(0x971b30u)));
    /* 0073971d: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
L_00739721:; BB(0x00739721);
    /* 00739721: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00739725: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00739729: fld dword ptr [0x971b9c] */ FPUSH(R_F32((u32)(0x971b9cu)));
    /* 0073972f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00739731: fdiv dword ptr [0x971b28] */ ST(0) = ST(0) / R_F32((u32)(0x971b28u));
    /* 00739737: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00739739: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0073973b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073973e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00739740: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00739743: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00739747: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0073974a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073974c: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 0073974f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00739751: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00739755: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00739759: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073975b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073975f: mov ecx, edi */ r_ecx = r_edi;
    /* 00739761: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00739769: mov dword ptr [esp + 0x14], 0x3ece0000 */ W32((u32)(r_esp+0x14u), 0x3ece0000u);
    /* 00739771: mov dword ptr [esp + 0x18], 0x3ee80000 */ W32((u32)(r_esp+0x18u), 0x3ee80000u);
    /* 00739779: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073977a: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73977fu); f_0071bbb4();
    /* 0073977f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739780: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00739784: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00739787: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073978b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x739790u); f_0082b440();
    /* 00739790: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00739794: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00739798: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0073979a: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0073979e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007397a0: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007397a4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007397a6: fcom dword ptr [0x971ba4] */ fx_compare(ST(0), R_F32((u32)(0x971ba4u))); 
    /* 007397ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007397ae: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 007397b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007397b3: jae 0x7396fc */ if (!fC) goto L_007396fc;
L_007397b9:; BB(0x007397b9);
    /* 007397b9: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007397bd: fld dword ptr [0x971bb8] */ FPUSH(R_F32((u32)(0x971bb8u)));
L_007397c3:; BB(0x007397c3);
    /* 007397c3: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 007397c5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007397c7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007397ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007397cc: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 007397cf: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007397d3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007397d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007397d8: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 007397db: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007397df: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007397e1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007397e5: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 007397ed: mov ecx, edi */ r_ecx = r_edi;
    /* 007397ef: mov dword ptr [esp + 0x14], 0x3f070000 */ W32((u32)(r_esp+0x14u), 0x3f070000u);
    /* 007397f7: mov dword ptr [esp + 0x18], 0x3ee80000 */ W32((u32)(r_esp+0x18u), 0x3ee80000u);
    /* 007397ff: mov dword ptr [esp + 0x1c], 0x3f2e0000 */ W32((u32)(r_esp+0x1cu), 0x3f2e0000u);
    /* 00739807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00739808: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73980du); f_0071bbb4();
    /* 0073980d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073980e: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00739812: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00739815: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00739819: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73981eu); f_0082b440();
    /* 0073981e: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x739823u); f_004ac444();
    /* 00739823: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 00739827: add ebp, 0x140 */ {  u32 a = r_ebp; u32 b = 0x140u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073982d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073982f: mov edi, eax */ r_edi = r_eax;
    /* 00739831: mov esi, ebp */ r_esi = r_ebp;
L_00739833:; BB(0x00739833);
    /* 00739833: mov ecx, esi */ r_ecx = r_esi;
    /* 00739835: call 0x738e2c */ r_esp -= 4; W32(r_esp, 0x73983au); f_00738e2c();
    /* 0073983a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073983c: je 0x7399d5 */ if (fZ) goto L_007399d5;
L_00739842:; BB(0x00739842);
    /* 00739842: movsx edx, byte ptr [esi + 0x10] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x10u));
    /* 00739846: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00739848: jle 0x7399d5 */ if ((fZ||fS!=fO)) goto L_007399d5;
L_0073984e:; BB(0x0073984e);
    /* 0073984e: fld dword ptr [0x971b64] */ FPUSH(R_F32((u32)(0x971b64u)));
    /* 00739854: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00739858: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 0073985b: fdivr dword ptr [0x971b68] */ ST(0) = R_F32((u32)(0x971b68u)) / ST(0);
    /* 00739861: movzx ebp, byte ptr [esi + 0x11] */ r_ebp = (u32)R8((u32)(r_esi+0x11u));
    /* 00739865: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0073986b: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0073986f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x739874u); f_00829cc8();
    /* 00739874: movsx eax, byte ptr [esi + 0x12] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x12u));
    /* 00739878: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073987a: je 0x7398b5 */ if (fZ) goto L_007398b5;
L_0073987c:; BB(0x0073987c);
    /* 0073987c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073987f: jne 0x73989a */ if (!fZ) goto L_0073989a;
L_00739881:; BB(0x00739881);
    /* 00739881: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00739886: mov edx, 0x4d */ r_edx = 0x4du;
    /* 0073988b: call 0x829d7c */ r_esp -= 4; W32(r_esp, 0x739890u); f_00829d7c();
    /* 00739890: mov ebx, 0xffff6121 */ r_ebx = 0xffff6121u;
    /* 00739895: jmp 0x739916 */ goto L_00739916;
L_0073989a:; BB(0x0073989a);
    /* 0073989a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073989d: jne 0x739916 */ if (!fZ) goto L_00739916;
L_0073989f:; BB(0x0073989f);
    /* 0073989f: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007398a4: mov edx, 0x4d */ r_edx = 0x4du;
    /* 007398a9: call 0x829d7c */ r_esp -= 4; W32(r_esp, 0x7398aeu); f_00829d7c();
    /* 007398ae: mov ebx, 0xff51eaff */ r_ebx = 0xff51eaffu;
    /* 007398b3: jmp 0x739916 */ goto L_00739916;
L_007398b5:; BB(0x007398b5);
    /* 007398b5: movzx edx, byte ptr [esi + 0x13] */ r_edx = (u32)R8((u32)(r_esi+0x13u));
    /* 007398b9: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007398bc: je 0x7398c5 */ if (fZ) goto L_007398c5;
L_007398be:; BB(0x007398be);
    /* 007398be: mov ebx, 0x686868 */ r_ebx = 0x686868u;
    /* 007398c3: jmp 0x7398ca */ goto L_007398ca;
L_007398c5:; BB(0x007398c5);
    /* 007398c5: mov ebx, 0xffffff */ r_ebx = 0xffffffu;
L_007398ca:; BB(0x007398ca);
    /* 007398ca: movsx eax, byte ptr [esi + 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x10u));
    /* 007398ce: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007398d1: jl 0x7398db */ if ((fS!=fO)) goto L_007398db;
L_007398d3:; BB(0x007398d3);
    /* 007398d3: fld dword ptr [0x971b20] */ FPUSH(R_F32((u32)(0x971b20u)));
    /* 007398d9: jmp 0x7398e9 */ goto L_007398e9;
L_007398db:; BB(0x007398db);
    /* 007398db: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 007398df: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 007398e3: fdiv dword ptr [0x971b2c] */ ST(0) = ST(0) / R_F32((u32)(0x971b2cu));
L_007398e9:; BB(0x007398e9);
    /* 007398e9: fmul dword ptr [0x971b1c] */ ST(0) = ST(0) * R_F32((u32)(0x971b1cu));
    /* 007398ef: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 007398f3: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 007398f8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007398fd: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00739901: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 00739905: fistp qword ptr [esp + 0x58] */ W64((u32)(r_esp+0x58u), (u64)fx_int64(ST(0))); FPOP();
    /* 00739909: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0073990d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00739911: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00739914: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_00739916:; BB(0x00739916);
    /* 00739916: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0073991b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x739920u); f_0082bb30();
    /* 00739920: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00739925: mov edx, ebx */ r_edx = r_ebx;
    /* 00739927: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x73992cu); f_0082bb60();
    /* 0073992c: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00739930: fld dword ptr [0x971c08] */ FPUSH(R_F32((u32)(0x971c08u)));
    /* 00739936: fld dword ptr [0x971c04] */ FPUSH(R_F32((u32)(0x971c04u)));
    /* 0073993c: fld dword ptr [0x971b28] */ FPUSH(R_F32((u32)(0x971b28u)));
    /* 00739942: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00739945: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 00739948: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 0073994b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073994d: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00739951: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00739953: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 00739956: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0073995a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073995c: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0073995e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00739962: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00739964: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00739968: fld dword ptr [ebp*8 + 0x971980] */ FPUSH(R_F32((u32)(r_ebp*8+0x971980u)));
    /* 0073996f: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00739971: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00739975: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00739979: fld dword ptr [ebp*8 + 0x971984] */ FPUSH(R_F32((u32)(r_ebp*8+0x971984u)));
    /* 00739980: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00739982: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00739986: fld dword ptr [ebp*8 + 0x971980] */ FPUSH(R_F32((u32)(r_ebp*8+0x971980u)));
    /* 0073998d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0073998f: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00739991: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00739993: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00739997: fld dword ptr [ebp*8 + 0x971984] */ FPUSH(R_F32((u32)(r_ebp*8+0x971984u)));
    /* 0073999e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007399a0: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007399a2: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007399a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007399a7: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x7399acu); f_0071ba34();
    /* 007399ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007399ae: je 0x7399c1 */ if (fZ) goto L_007399c1;
L_007399b0:; BB(0x007399b0);
    /* 007399b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007399b1: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007399b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007399b8: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007399bc: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7399c1u); f_0082b440();
L_007399c1:; BB(0x007399c1);
    /* 007399c1: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7399c6u); f_004ac444();
    /* 007399c6: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007399cb: mov edx, 0x4c */ r_edx = 0x4cu;
    /* 007399d0: call 0x829d7c */ r_esp -= 4; W32(r_esp, 0x7399d5u); f_00829d7c();
L_007399d5:; BB(0x007399d5);
    /* 007399d5: add esi, -0x18 */ {  u32 a = r_esi; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007399d8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007399db: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007399de: jl 0x739833 */ if ((fS!=fO)) goto L_00739833;
L_007399e4:; BB(0x007399e4);
    /* 007399e4: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007399e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007399e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007399e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007399ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007399eb: ret  */ FN_RET(0x0073950c); r_esp += 4; return;
}

void f_007399ec(void) /* sub_7399EC */
{
    FN_ENTER(0x007399ec);
    /* 007399ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007399ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007399ee: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007399f1: mov edi, ecx */ r_edi = r_ecx;
    /* 007399f3: call 0x73ec78 */ r_esp -= 4; W32(r_esp, 0x7399f8u); f_0073ec78();
    /* 007399f8: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007399fb: push dword ptr [edi + 0x54] */ { u32 v = R32((u32)(r_edi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007399fe: lea ebp, [edi + 0x40] */ r_ebp = (u32)(r_edi+0x40u);
    /* 00739a01: lea edx, [edi + 0x48] */ r_edx = (u32)(r_edi+0x48u);
    /* 00739a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739a05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00739a06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00739a07: call 0x71b8d4 */ r_esp -= 4; W32(r_esp, 0x739a0cu); f_0071b8d4();
    /* 00739a0c: mov ebp, eax */ r_ebp = r_eax;
    /* 00739a0e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00739a11: mov ecx, edi */ r_ecx = r_edi;
    /* 00739a13: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x739a18u); f_007083d4();
    /* 00739a18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739a1a: je 0x739a24 */ if (fZ) goto L_00739a24;
L_00739a1c:; BB(0x00739a1c);
    /* 00739a1c: fld dword ptr [0x971b14] */ FPUSH(R_F32((u32)(0x971b14u)));
    /* 00739a22: jmp 0x739a2a */ goto L_00739a2a;
L_00739a24:; BB(0x00739a24);
    /* 00739a24: fld dword ptr [0x971b18] */ FPUSH(R_F32((u32)(0x971b18u)));
L_00739a2a:; BB(0x00739a2a);
    /* 00739a2a: fld dword ptr [0x971b0c] */ FPUSH(R_F32((u32)(0x971b0cu)));
    /* 00739a30: fld dword ptr [0x971b0c] */ FPUSH(R_F32((u32)(0x971b0cu)));
    /* 00739a36: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00739a39: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00739a3b: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00739a3d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00739a3f: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 00739a42: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00739a45: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00739a47: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00739a4a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00739a4c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00739a4f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00739a51: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00739a55: fld dword ptr [0x971bb8] */ FPUSH(R_F32((u32)(0x971bb8u)));
    /* 00739a5b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00739a5d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00739a61: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00739a63: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 00739a66: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00739a6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00739a6c: call 0x71bc6c */ r_esp -= 4; W32(r_esp, 0x739a71u); f_0071bc6c();
    /* 00739a71: mov ecx, edi */ r_ecx = r_edi;
    /* 00739a73: call 0x710c94 */ r_esp -= 4; W32(r_esp, 0x739a78u); f_00710c94();
    /* 00739a78: fmul dword ptr [0x971b10] */ ST(0) = ST(0) * R_F32((u32)(0x971b10u));
    /* 00739a7e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00739a81: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00739a85: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00739a8a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00739a8e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00739a92: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00739a96: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00739a99: mov eax, ebp */ r_eax = r_ebp;
    /* 00739a9b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00739a9f: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00739aa2: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00739aa8: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00739aab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00739aaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00739ab0: ret  */ FN_RET(0x007399ec); r_esp += 4; return;
}

void f_00739ab4(void) /* sub_739AB4 */
{
    FN_ENTER(0x00739ab4);
    /* 00739ab4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739ab5: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00739ab9: call 0x739ad4 */ r_esp -= 4; W32(r_esp, 0x739abeu); f_00739ad4();
    /* 00739abe: mov edi, eax */ r_edi = r_eax;
    /* 00739ac0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739ac2: je 0x739acb */ if (fZ) goto L_00739acb;
L_00739ac4:; BB(0x00739ac4);
    /* 00739ac4: mov ecx, edi */ r_ecx = r_edi;
    /* 00739ac6: call 0x739d50 */ r_esp -= 4; W32(r_esp, 0x739acbu); f_00739d50();
L_00739acb:; BB(0x00739acb);
    /* 00739acb: mov eax, edi */ r_eax = r_edi;
    /* 00739acd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00739ace: ret 4 */ FN_RET(0x00739ab4); r_esp += 8; return;
}

void f_00739ad4(void) /* sub_739AD4 */
{
    FN_ENTER(0x00739ad4);
    /* 00739ad4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739ad5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00739ad6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00739ad7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00739ad8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00739adb: mov esi, ecx */ r_esi = r_ecx;
    /* 00739add: mov eax, dword ptr [esi + 0x158] */ r_eax = R32((u32)(r_esi+0x158u));
    /* 00739ae3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00739ae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739ae7: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739aed:; BB(0x00739aed);
    /* 00739aed: mov eax, dword ptr [esi + 0x15c] */ r_eax = R32((u32)(r_esi+0x15cu));
    /* 00739af3: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00739af8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739afa: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b00:; BB(0x00739b00);
    /* 00739b00: mov eax, dword ptr [esi + 0x160] */ r_eax = R32((u32)(r_esi+0x160u));
    /* 00739b06: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00739b0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b0d: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b0f:; BB(0x00739b0f);
    /* 00739b0f: mov eax, dword ptr [esi + 0x164] */ r_eax = R32((u32)(r_esi+0x164u));
    /* 00739b15: mov ebp, 3 */ r_ebp = 0x3u;
    /* 00739b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b1c: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b1e:; BB(0x00739b1e);
    /* 00739b1e: mov eax, dword ptr [esi + 0x168] */ r_eax = R32((u32)(r_esi+0x168u));
    /* 00739b24: mov ebp, 4 */ r_ebp = 0x4u;
    /* 00739b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b2b: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b2d:; BB(0x00739b2d);
    /* 00739b2d: mov eax, dword ptr [esi + 0x16c] */ r_eax = R32((u32)(r_esi+0x16cu));
    /* 00739b33: mov ebp, 5 */ r_ebp = 0x5u;
    /* 00739b38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b3a: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b3c:; BB(0x00739b3c);
    /* 00739b3c: mov eax, dword ptr [esi + 0x170] */ r_eax = R32((u32)(r_esi+0x170u));
    /* 00739b42: mov ebp, 6 */ r_ebp = 0x6u;
    /* 00739b47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b49: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b4b:; BB(0x00739b4b);
    /* 00739b4b: mov eax, dword ptr [esi + 0x174] */ r_eax = R32((u32)(r_esi+0x174u));
    /* 00739b51: mov ebp, 7 */ r_ebp = 0x7u;
    /* 00739b56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b58: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b5a:; BB(0x00739b5a);
    /* 00739b5a: mov eax, dword ptr [esi + 0x178] */ r_eax = R32((u32)(r_esi+0x178u));
    /* 00739b60: mov ebp, 8 */ r_ebp = 0x8u;
    /* 00739b65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b67: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b69:; BB(0x00739b69);
    /* 00739b69: mov eax, dword ptr [esi + 0x17c] */ r_eax = R32((u32)(r_esi+0x17cu));
    /* 00739b6f: mov ebp, 9 */ r_ebp = 0x9u;
    /* 00739b74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739b76: je 0x739b7d */ if (fZ) goto L_00739b7d;
L_00739b78:; BB(0x00739b78);
    /* 00739b78: mov ebp, 0xa */ r_ebp = 0xau;
L_00739b7d:; BB(0x00739b7d);
    /* 00739b7d: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00739b80: jl 0x739b8e */ if ((fS!=fO)) goto L_00739b8e;
L_00739b82:; BB(0x00739b82);
    /* 00739b82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00739b84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739b87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00739b88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00739b89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00739b8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00739b8b: ret 4 */ FN_RET(0x00739ad4); r_esp += 8; return;
L_00739b8e:; BB(0x00739b8e);
    /* 00739b8e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00739b91: movsx eax, word ptr [esi + 0x62] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x62u));
    /* 00739b95: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00739b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739b98: mov ecx, esi */ r_ecx = r_esi;
    /* 00739b9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00739b9b: call 0x739ce0 */ r_esp -= 4; W32(r_esp, 0x739ba0u); f_00739ce0();
    /* 00739ba0: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00739ba4: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00739ba8: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739bab: jne 0x739bb2 */ if (!fZ) goto L_00739bb2;
L_00739bad:; BB(0x00739bad);
    /* 00739bad: mov edi, 0x1a */ r_edi = 0x1au;
L_00739bb2:; BB(0x00739bb2);
    /* 00739bb2: lea edx, [esi + 0x68] */ r_edx = (u32)(r_esi+0x68u);
    /* 00739bb5: mov ebx, edx */ r_ebx = r_edx;
    /* 00739bb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00739bb9:; BB(0x00739bb9);
    /* 00739bb9: movzx ecx, byte ptr [ebx + 0x13] */ r_ecx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739bbd: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739bc0: je 0x739bca */ if (fZ) goto L_00739bca;
L_00739bc2:; BB(0x00739bc2);
    /* 00739bc2: movsx ecx, byte ptr [ebx + 0x11] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x11u));
    /* 00739bc6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739bc8: je 0x739beb */ if (fZ) goto L_00739beb;
L_00739bca:; BB(0x00739bca);
    /* 00739bca: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00739bcd: movzx ecx, byte ptr [ebx + 0x13] */ r_ecx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739bd1: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739bd4: je 0x739bde */ if (fZ) goto L_00739bde;
L_00739bd6:; BB(0x00739bd6);
    /* 00739bd6: movsx ecx, byte ptr [ebx + 0x11] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x11u));
    /* 00739bda: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739bdc: je 0x739beb */ if (fZ) goto L_00739beb;
L_00739bde:; BB(0x00739bde);
    /* 00739bde: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00739be1: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00739be4: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00739be7: jl 0x739bb9 */ if ((fS!=fO)) goto L_00739bb9;
L_00739be9:; BB(0x00739be9);
    /* 00739be9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00739beb:; BB(0x00739beb);
    /* 00739beb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739bed: je 0x739c1a */ if (fZ) goto L_00739c1a;
L_00739bef:; BB(0x00739bef);
    /* 00739bef: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00739bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739bf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00739bf5: call 0x739cfc */ r_esp -= 4; W32(r_esp, 0x739bfau); f_00739cfc();
L_00739bfa:; BB(0x00739bfa);
    /* 00739bfa: mov dword ptr [esi + ebp*4 + 0x158], ebx */ W32((u32)(r_esi+r_ebp*4+0x158u), r_ebx);
    /* 00739c01: movzx edx, byte ptr [esi + 0x60] */ r_edx = (u32)R8((u32)(r_esi+0x60u));
    /* 00739c05: and edx, 0xfb */ {  u32 a = r_edx; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00739c0b: mov byte ptr [esi + 0x60], dl */ W8((u32)(r_esi+0x60u), (u8)r_edx);
    /* 00739c0e: mov eax, ebx */ r_eax = r_ebx;
    /* 00739c10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739c13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00739c14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00739c15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00739c16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00739c17: ret 4 */ FN_RET(0x00739ad4); r_esp += 8; return;
L_00739c1a:; BB(0x00739c1a);
    /* 00739c1a: mov ebx, edx */ r_ebx = r_edx;
    /* 00739c1c: movzx edx, byte ptr [esi + 0x7b] */ r_edx = (u32)R8((u32)(r_esi+0x7bu));
    /* 00739c20: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c23: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c29:; BB(0x00739c29);
    /* 00739c29: lea ebx, [esi + 0x80] */ r_ebx = (u32)(r_esi+0x80u);
    /* 00739c2f: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739c33: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c36: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c3c:; BB(0x00739c3c);
    /* 00739c3c: lea ebx, [esi + 0x98] */ r_ebx = (u32)(r_esi+0x98u);
    /* 00739c42: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739c46: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c49: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c4b:; BB(0x00739c4b);
    /* 00739c4b: lea ebx, [esi + 0xb0] */ r_ebx = (u32)(r_esi+0xb0u);
    /* 00739c51: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739c55: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c58: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c5a:; BB(0x00739c5a);
    /* 00739c5a: lea ebx, [esi + 0xc8] */ r_ebx = (u32)(r_esi+0xc8u);
    /* 00739c60: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739c64: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c67: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c69:; BB(0x00739c69);
    /* 00739c69: lea ebx, [esi + 0xe0] */ r_ebx = (u32)(r_esi+0xe0u);
    /* 00739c6f: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739c73: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c76: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c78:; BB(0x00739c78);
    /* 00739c78: lea ebx, [esi + 0xf8] */ r_ebx = (u32)(r_esi+0xf8u);
    /* 00739c7e: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739c82: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c85: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c87:; BB(0x00739c87);
    /* 00739c87: lea ebx, [esi + 0x110] */ r_ebx = (u32)(r_esi+0x110u);
    /* 00739c8d: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739c91: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739c94: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739c96:; BB(0x00739c96);
    /* 00739c96: lea ebx, [esi + 0x128] */ r_ebx = (u32)(r_esi+0x128u);
    /* 00739c9c: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739ca0: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739ca3: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739ca5:; BB(0x00739ca5);
    /* 00739ca5: lea ebx, [esi + 0x140] */ r_ebx = (u32)(r_esi+0x140u);
    /* 00739cab: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739caf: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739cb2: je 0x739cb6 */ if (fZ) goto L_00739cb6;
L_00739cb4:; BB(0x00739cb4);
    /* 00739cb4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00739cb6:; BB(0x00739cb6);
    /* 00739cb6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739cb8: je 0x739b82 */ if (fZ) goto L_00739b82;
L_00739cbe:; BB(0x00739cbe);
    /* 00739cbe: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00739cc2: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00739cc5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00739cc8: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00739ccc: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00739cce: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00739cd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00739cd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739cd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00739cd5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739cd6: call 0x739d14 */ r_esp -= 4; W32(r_esp, 0x739cdbu); f_00739d14();
    /* 00739cdb: jmp 0x739bfa */ goto L_00739bfa;
}

void f_00739ce0(void) /* sub_739CE0 */
{
    FN_ENTER(0x00739ce0);
    /* 00739ce0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00739ce4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00739ce8: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00739cee: fmul dword ptr [0xa9a8e0] */ ST(0) = ST(0) * R_F32((u32)(0xa9a8e0u));
    /* 00739cf4: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00739cf7: ret 8 */ FN_RET(0x00739ce0); r_esp += 12; return;
}

void f_00739cfc(void) /* sub_739CFC */
{
    FN_ENTER(0x00739cfc);
    /* 00739cfc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00739d00: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00739d02: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00739d04: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00739d07: mov byte ptr [ecx + 0x14], 8 */ W8((u32)(r_ecx+0x14u), 0x8u);
    /* 00739d0b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00739d0e: ret 4 */ FN_RET(0x00739cfc); r_esp += 8; return;
}

void f_00739d14(void) /* sub_739D14 */
{
    FN_ENTER(0x00739d14);
    /* 00739d14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00739d18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00739d1a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00739d1c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00739d1f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00739d22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00739d24: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00739d27: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00739d2a: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00739d2d: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 00739d32: mov byte ptr [ecx + 0x12], 0 */ W8((u32)(r_ecx+0x12u), 0x0u);
    /* 00739d36: mov byte ptr [ecx + 0x10], al */ W8((u32)(r_ecx+0x10u), (u8)r_eax);
    /* 00739d39: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 00739d3e: mov byte ptr [ecx + 0x11], al */ W8((u32)(r_ecx+0x11u), (u8)r_eax);
    /* 00739d41: movzx eax, byte ptr [ecx + 0x13] */ r_eax = (u32)R8((u32)(r_ecx+0x13u));
    /* 00739d45: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739d4a: mov byte ptr [ecx + 0x13], al */ W8((u32)(r_ecx+0x13u), (u8)r_eax);
    /* 00739d4d: ret 0xc */ FN_RET(0x00739d14); r_esp += 16; return;
}

void f_00739d50(void) /* sub_739D50 */
{
    FN_ENTER(0x00739d50);
    /* 00739d50: movzx eax, byte ptr [ecx + 0x13] */ r_eax = (u32)R8((u32)(r_ecx+0x13u));
    /* 00739d54: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739d59: mov byte ptr [ecx + 0x13], al */ W8((u32)(r_ecx+0x13u), (u8)r_eax);
    /* 00739d5c: ret  */ FN_RET(0x00739d50); r_esp += 4; return;
}

void f_00739d60(void) /* sub_739D60 */
{
    FN_ENTER(0x00739d60);
    /* 00739d60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00739d61: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00739d65: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739d68: jne 0x739d6f */ if (!fZ) goto L_00739d6f;
L_00739d6a:; BB(0x00739d6a);
    /* 00739d6a: mov edx, 0x1a */ r_edx = 0x1au;
L_00739d6f:; BB(0x00739d6f);
    /* 00739d6f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00739d72: add ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00739d75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00739d77:; BB(0x00739d77);
    /* 00739d77: movzx ebx, byte ptr [ecx + 0x13] */ r_ebx = (u32)R8((u32)(r_ecx+0x13u));
    /* 00739d7b: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739d7e: je 0x739d88 */ if (fZ) goto L_00739d88;
L_00739d80:; BB(0x00739d80);
    /* 00739d80: movsx ebx, byte ptr [ecx + 0x11] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ecx+0x11u));
    /* 00739d84: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739d86: je 0x739db9 */ if (fZ) goto L_00739db9;
L_00739d88:; BB(0x00739d88);
    /* 00739d88: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00739d8b: movzx ebx, byte ptr [ecx + 0x13] */ r_ebx = (u32)R8((u32)(r_ecx+0x13u));
    /* 00739d8f: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739d92: je 0x739d9c */ if (fZ) goto L_00739d9c;
L_00739d94:; BB(0x00739d94);
    /* 00739d94: movsx ebx, byte ptr [ecx + 0x11] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ecx+0x11u));
    /* 00739d98: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739d9a: je 0x739dbe */ if (fZ) goto L_00739dbe;
L_00739d9c:; BB(0x00739d9c);
    /* 00739d9c: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00739d9f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00739da2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00739da5: jl 0x739d77 */ if ((fS!=fO)) goto L_00739d77;
L_00739da7:; BB(0x00739da7);
    /* 00739da7: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00739daa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00739dac:; BB(0x00739dac);
    /* 00739dac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739dae: je 0x739db5 */ if (fZ) goto L_00739db5;
L_00739db0:; BB(0x00739db0);
    /* 00739db0: call 0x739fcc */ r_esp -= 4; W32(r_esp, 0x739db5u); f_00739fcc();
L_00739db5:; BB(0x00739db5);
    /* 00739db5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00739db6: ret 4 */ FN_RET(0x00739d60); r_esp += 8; return;
L_00739db9:; BB(0x00739db9);
    /* 00739db9: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00739dbc: jmp 0x739dac */ goto L_00739dac;
L_00739dbe:; BB(0x00739dbe);
    /* 00739dbe: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00739dc1: jmp 0x739dac */ goto L_00739dac;
}

void f_00739dc4(void) /* sub_739DC4 */
{
    FN_ENTER(0x00739dc4);
    /* 00739dc4: movzx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)R8((u32)(r_ecx+0x60u));
    /* 00739dc8: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739dcb: ret  */ FN_RET(0x00739dc4); r_esp += 4; return;
}

void f_00739dcc(void) /* sub_739DCC */
{
    FN_ENTER(0x00739dcc);
    /* 00739dcc: movzx edx, byte ptr [ecx + 0x60] */ r_edx = (u32)R8((u32)(r_ecx+0x60u));
    /* 00739dd0: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739dd3: mov eax, 0 */ r_eax = 0x0u;
    /* 00739dd8: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00739ddb: ret  */ FN_RET(0x00739dcc); r_esp += 4; return;
}

void f_00739ddc(void) /* sub_739DDC */
{
    FN_ENTER(0x00739ddc);
    /* 00739ddc: movzx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)R8((u32)(r_ecx+0x60u));
    /* 00739de0: and eax, 0xfc */ {  u32 a = r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739de5: mov byte ptr [ecx + 0x60], al */ W8((u32)(r_ecx+0x60u), (u8)r_eax);
    /* 00739de8: ret  */ FN_RET(0x00739ddc); r_esp += 4; return;
}

void f_00739dec(void) /* sub_739DEC */
{
    FN_ENTER(0x00739dec);
    /* 00739dec: movsx eax, byte ptr [ecx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x61u));
    /* 00739df0: ret  */ FN_RET(0x00739dec); r_esp += 4; return;
}

void f_00739df4(void) /* sub_739DF4 */
{
    FN_ENTER(0x00739df4);
    /* 00739df4: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 00739df9: mov byte ptr [ecx + 0x61], al */ W8((u32)(r_ecx+0x61u), (u8)r_eax);
    /* 00739dfc: mov edx, dword ptr [ecx + eax*4 + 0x158] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x158u));
    /* 00739e03: mov byte ptr [edx + 0x12], 1 */ W8((u32)(r_edx+0x12u), 0x1u);
    /* 00739e07: ret 4 */ FN_RET(0x00739df4); r_esp += 8; return;
}

void f_00739e0c(void) /* sub_739E0C */
{
    FN_ENTER(0x00739e0c);
    /* 00739e0c: movsx eax, byte ptr [ecx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x61u));
    /* 00739e10: mov eax, dword ptr [ecx + eax*4 + 0x158] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x158u));
    /* 00739e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739e19: je 0x739e20 */ if (fZ) goto L_00739e20;
L_00739e1b:; BB(0x00739e1b);
    /* 00739e1b: movsx eax, byte ptr [eax + 0x11] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x11u));
    /* 00739e1f: ret  */ FN_RET(0x00739e0c); r_esp += 4; return;
L_00739e20:; BB(0x00739e20);
    /* 00739e20: mov eax, 0x30 */ r_eax = 0x30u;
    /* 00739e25: ret  */ FN_RET(0x00739e0c); r_esp += 4; return;
}

void f_00739e28(void) /* sub_739E28 */
{
    FN_ENTER(0x00739e28);
    /* 00739e28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00739e29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00739e2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00739e2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00739e2c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00739e2f: mov edi, ecx */ r_edi = r_ecx;
    /* 00739e31: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 00739e35: mov ebx, dword ptr [edi + eax*4 + 0x158] */ r_ebx = R32((u32)(r_edi+r_eax*4+0x158u));
    /* 00739e3c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00739e3e: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00739e41: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00739e44: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 00739e47: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00739e4b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00739e4f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00739e52: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00739e56: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00739e59: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00739e5d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00739e61: lea eax, [edi + 0x158] */ r_eax = (u32)(r_edi+0x158u);
    /* 00739e67: lea ebx, [edi + 0x180] */ r_ebx = (u32)(r_edi+0x180u);
    /* 00739e6d: mov edi, eax */ r_edi = r_eax;
L_00739e6f:; BB(0x00739e6f);
    /* 00739e6f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00739e71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739e73: je 0x739e80 */ if (fZ) goto L_00739e80;
L_00739e75:; BB(0x00739e75);
    /* 00739e75: call 0x739fcc */ r_esp -= 4; W32(r_esp, 0x739e7au); f_00739fcc();
    /* 00739e7a: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00739e80:; BB(0x00739e80);
    /* 00739e80: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00739e83: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00739e85: ja 0x739e6f */ if ((!fC&&!fZ)) goto L_00739e6f;
L_00739e87:; BB(0x00739e87);
    /* 00739e87: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00739e8b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00739e8e: movsx eax, word ptr [edi + 0x62] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x62u));
    /* 00739e92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739e93: mov ecx, edi */ r_ecx = r_edi;
    /* 00739e95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00739e96: call 0x739ce0 */ r_esp -= 4; W32(r_esp, 0x739e9bu); f_00739ce0();
    /* 00739e9b: lea ebx, [edi + 0x68] */ r_ebx = (u32)(r_edi+0x68u);
    /* 00739e9e: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739ea2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739ea4: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739eaa:; BB(0x00739eaa);
    /* 00739eaa: lea ebx, [edi + 0x80] */ r_ebx = (u32)(r_edi+0x80u);
    /* 00739eb0: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739eb4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739eb6: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739eb8:; BB(0x00739eb8);
    /* 00739eb8: lea ebx, [edi + 0x98] */ r_ebx = (u32)(r_edi+0x98u);
    /* 00739ebe: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739ec2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739ec4: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739ec6:; BB(0x00739ec6);
    /* 00739ec6: lea ebx, [edi + 0xb0] */ r_ebx = (u32)(r_edi+0xb0u);
    /* 00739ecc: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739ed0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739ed2: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739ed4:; BB(0x00739ed4);
    /* 00739ed4: lea ebx, [edi + 0xc8] */ r_ebx = (u32)(r_edi+0xc8u);
    /* 00739eda: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739ede: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739ee0: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739ee2:; BB(0x00739ee2);
    /* 00739ee2: lea ebx, [edi + 0xe0] */ r_ebx = (u32)(r_edi+0xe0u);
    /* 00739ee8: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739eec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739eee: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739ef0:; BB(0x00739ef0);
    /* 00739ef0: lea ebx, [edi + 0xf8] */ r_ebx = (u32)(r_edi+0xf8u);
    /* 00739ef6: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739efa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739efc: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739efe:; BB(0x00739efe);
    /* 00739efe: lea ebx, [edi + 0x110] */ r_ebx = (u32)(r_edi+0x110u);
    /* 00739f04: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739f08: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739f0a: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739f0c:; BB(0x00739f0c);
    /* 00739f0c: lea ebx, [edi + 0x128] */ r_ebx = (u32)(r_edi+0x128u);
    /* 00739f12: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739f16: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739f18: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739f1a:; BB(0x00739f1a);
    /* 00739f1a: lea ebx, [edi + 0x140] */ r_ebx = (u32)(r_edi+0x140u);
    /* 00739f20: movzx eax, byte ptr [ebx + 0x13] */ r_eax = (u32)R8((u32)(r_ebx+0x13u));
    /* 00739f24: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00739f26: je 0x739f2a */ if (fZ) goto L_00739f2a;
L_00739f28:; BB(0x00739f28);
    /* 00739f28: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00739f2a:; BB(0x00739f2a);
    /* 00739f2a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00739f2e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00739f32: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00739f34: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00739f37: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 00739f3a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00739f3e: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 00739f41: mov dword ptr [ebx + 0xc], ebp */ W32((u32)(r_ebx+0xcu), r_ebp);
    /* 00739f44: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00739f48: mov dword ptr [ebx + 0x10], ebp */ W32((u32)(r_ebx+0x10u), r_ebp);
    /* 00739f4b: mov dword ptr [ebx + 0x14], esi */ W32((u32)(r_ebx+0x14u), r_esi);
    /* 00739f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00739f4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00739f51: call 0x739cfc */ r_esp -= 4; W32(r_esp, 0x739f56u); f_00739cfc();
    /* 00739f56: mov byte ptr [ebx + 0x12], 2 */ W8((u32)(r_ebx+0x12u), 0x2u);
    /* 00739f5a: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00739f5e: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00739f63: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00739f66: add word ptr [edi + 0x62], 1 */ { u32 ad = (u32)(r_edi+0x62u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00739f6b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00739f6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00739f6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00739f70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00739f71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00739f72: ret  */ FN_RET(0x00739e28); r_esp += 4; return;
}

void f_00739f74(void) /* sub_739F74 */
{
    FN_ENTER(0x00739f74);
    /* 00739f74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00739f75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00739f76: mov eax, ecx */ r_eax = r_ecx;
    /* 00739f78: movzx edx, byte ptr [eax + 0x60] */ r_edx = (u32)R8((u32)(r_eax+0x60u));
    /* 00739f7c: add word ptr [eax + 0x62], -1 */ { u32 ad = (u32)(r_eax+0x62u);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00739f81: or edx, 0xffffff08 */ {  u32 a = r_edx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00739f87: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
    /* 00739f8a: lea edx, [eax + 0x158] */ r_edx = (u32)(r_eax+0x158u);
    /* 00739f90: add eax, 0x180 */ {  u32 a = r_eax; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00739f95: mov ebx, eax */ r_ebx = r_eax;
    /* 00739f97: mov esi, edx */ r_esi = r_edx;
L_00739f99:; BB(0x00739f99);
    /* 00739f99: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00739f9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00739f9d: je 0x739faa */ if (fZ) goto L_00739faa;
L_00739f9f:; BB(0x00739f9f);
    /* 00739f9f: call 0x739fcc */ r_esp -= 4; W32(r_esp, 0x739fa4u); f_00739fcc();
    /* 00739fa4: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00739faa:; BB(0x00739faa);
    /* 00739faa: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00739fad: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00739faf: ja 0x739f99 */ if ((!fC&&!fZ)) goto L_00739f99;
L_00739fb1:; BB(0x00739fb1);
    /* 00739fb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00739fb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00739fb3: ret  */ FN_RET(0x00739f74); r_esp += 4; return;
}

void f_00739fb4(void) /* sub_739FB4 */
{
    FN_ENTER(0x00739fb4);
    /* 00739fb4: mov dword ptr [0xa9a8e0], 0x41800000 */ W32((u32)(0xa9a8e0u), 0x41800000u);
    /* 00739fbe: mov dword ptr [0x9f316c], 0x42e80000 */ W32((u32)(0x9f316cu), 0x42e80000u);
    /* 00739fc8: ret  */ FN_RET(0x00739fb4); r_esp += 4; return;
}

void f_00739fcc(void) /* sub_739FCC */
{
    FN_ENTER(0x00739fcc);
    /* 00739fcc: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00739fd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00739fd4: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00739fdb: mov byte ptr [ecx + 0x10], al */ W8((u32)(r_ecx+0x10u), (u8)r_eax);
    /* 00739fde: mov byte ptr [ecx + 0x12], al */ W8((u32)(r_ecx+0x12u), (u8)r_eax);
    /* 00739fe1: mov byte ptr [ecx + 0x13], al */ W8((u32)(r_ecx+0x13u), (u8)r_eax);
    /* 00739fe4: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00739feb: mov byte ptr [ecx + 0x14], al */ W8((u32)(r_ecx+0x14u), (u8)r_eax);
    /* 00739fee: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00739ff5: mov byte ptr [ecx + 0x11], 0xff */ W8((u32)(r_ecx+0x11u), 0xffu);
    /* 00739ff9: ret  */ FN_RET(0x00739fcc); r_esp += 4; return;
}

void f_00739ffc(void) /* sub_739FFC */
{
    FN_ENTER(0x00739ffc);
    /* 00739ffc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00739ffd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00739fff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073a001: call 0x73a020 */ r_esp -= 4; W32(r_esp, 0x73a006u); f_0073a020();
    /* 0073a006: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073a00a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073a00c: jne 0x73a012 */ if (!fZ) goto L_0073a012;
L_0073a00e:; BB(0x0073a00e);
    /* 0073a00e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a00f: ret 4 */ FN_RET(0x00739ffc); r_esp += 8; return;
L_0073a012:; BB(0x0073a012);
    /* 0073a012: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073a013: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73a018u); f_005c2f74();
    /* 0073a018: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073a019: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073a01a: ret 4 */ FN_RET(0x00739ffc); r_esp += 8; return;
}

