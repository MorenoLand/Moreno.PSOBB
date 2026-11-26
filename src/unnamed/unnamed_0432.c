#include "protos.h"

void f_004321cc(void) /* sub_4321CC */
{
    FN_ENTER(0x004321cc);
    /* 004321cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004321cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004321ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004321cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004321d0: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004321d3: mov esi, ecx */ r_esi = r_ecx;
    /* 004321d5: lea ebp, [esi + 0x72c] */ r_ebp = (u32)(r_esi+0x72cu);
    /* 004321db: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 004321df: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004321e2: je 0x43288b */ if (fZ) goto L_0043288b;
L_004321e8:; BB(0x004321e8);
    /* 004321e8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004321eb: je 0x43282a */ if (fZ) goto L_0043282a;
L_004321f1:; BB(0x004321f1);
    /* 004321f1: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004321f4: je 0x432696 */ if (fZ) goto L_00432696;
L_004321fa:; BB(0x004321fa);
    /* 004321fa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004321fd: je 0x43259f */ if (fZ) goto L_0043259f;
L_00432203:; BB(0x00432203);
    /* 00432203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432205: je 0x432234 */ if (fZ) goto L_00432234;
L_00432207:; BB(0x00432207);
    /* 00432207: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043220a: je 0x43259f */ if (fZ) goto L_0043259f;
L_00432210:; BB(0x00432210);
    /* 00432210: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432213: jne 0x43259f */ if (!fZ) goto L_0043259f;
L_00432219:; BB(0x00432219);
    /* 00432219: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x43221eu); f_004d3250();
    /* 0043221e: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x432223u); f_00717f38();
    /* 00432223: mov ecx, esi */ r_ecx = r_esi;
    /* 00432225: call 0x520e34 */ r_esp -= 4; W32(r_esp, 0x43222au); f_00520e34();
    /* 0043222a: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043222d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043222e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043222f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00432230: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00432231: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
L_00432234:; BB(0x00432234);
    /* 00432234: mov eax, dword ptr [esi + 0x6e8] */ r_eax = R32((u32)(r_esi+0x6e8u));
    /* 0043223a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043223d: je 0x4325c2 */ if (fZ) goto L_004325c2;
L_00432243:; BB(0x00432243);
    /* 00432243: mov ecx, esi */ r_ecx = r_esi;
    /* 00432245: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x43224au); f_007aa094();
    /* 0043224a: mov eax, dword ptr [esi + 0x6e8] */ r_eax = R32((u32)(r_esi+0x6e8u));
    /* 00432250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432252: je 0x43263a */ if (fZ) goto L_0043263a;
L_00432258:; BB(0x00432258);
    /* 00432258: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043225b: je 0x4322da */ if (fZ) goto L_004322da;
L_0043225d:; BB(0x0043225d);
    /* 0043225d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432260: jne 0x4322bb */ if (!fZ) goto L_004322bb;
L_00432262:; BB(0x00432262);
    /* 00432262: fld dword ptr [0x8fce08] */ FPUSH(R_F32((u32)(0x8fce08u)));
    /* 00432268: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0043226e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432270: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00432273: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00432279: fld dword ptr [esi + 0x704] */ FPUSH(R_F32((u32)(r_esi+0x704u)));
    /* 0043227f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00432281: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00432283: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00432286: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00432288: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 0043228b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043228d: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00432290: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00432292: fcom dword ptr [esi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3b4u))); 
    /* 00432298: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043229a: fstp dword ptr [esi + 0x704] */ W_F32((u32)(r_esi+0x704u), ST(0)); FPOP();
    /* 004322a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004322a1: jb 0x43259f */ if (fC) goto L_0043259f;
L_004322a7:; BB(0x004322a7);
    /* 004322a7: mov dword ptr [esi + 0x6e8], 4 */ W32((u32)(r_esi+0x6e8u), 0x4u);
    /* 004322b1: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004322b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004322b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004322b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004322b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004322b8: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
L_004322bb:; BB(0x004322bb);
    /* 004322bb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004322be: jne 0x43259f */ if (!fZ) goto L_0043259f;
L_004322c4:; BB(0x004322c4);
    /* 004322c4: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x4322c9u); f_004d6864();
    /* 004322c9: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004322cd: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004322cf: je 0x43259f */ if (fZ) goto L_0043259f;
L_004322d5:; BB(0x004322d5);
    /* 004322d5: jmp 0x4325a9 */ goto L_004325a9;
L_004322da:; BB(0x004322da);
    /* 004322da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004322db: mov ecx, esi */ r_ecx = r_esi;
    /* 004322dd: call 0x4329b4 */ r_esp -= 4; W32(r_esp, 0x4322e2u); f_004329b4();
    /* 004322e2: mov ebx, dword ptr [esi + 0x6ec] */ r_ebx = R32((u32)(r_esi+0x6ecu));
    /* 004322e8: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 004322ee: fcom dword ptr [0x8fce04] */ fx_compare(ST(0), R_F32((u32)(0x8fce04u))); 
    /* 004322f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004322f6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004322f9: mov dword ptr [esi + 0x6ec], ebx */ W32((u32)(r_esi+0x6ecu), r_ebx);
    /* 004322ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432300: jb 0x43239d */ if (fC) goto L_0043239d;
L_00432306:; BB(0x00432306);
    /* 00432306: fcom dword ptr [0x8fce00] */ fx_compare(ST(0), R_F32((u32)(0x8fce00u))); 
    /* 0043230c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043230e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043230f: ja 0x43239d */ if ((!fC&&!fZ)) goto L_0043239d;
L_00432315:; BB(0x00432315);
    /* 00432315: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00432317: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0043231b: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0043231f: fcomp dword ptr [0x8fcdfc] */ fx_compare(ST(0), R_F32((u32)(0x8fcdfcu))); FPOP();
    /* 00432325: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432327: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432328: jb 0x4324ec */ if (fC) goto L_004324ec;
L_0043232e:; BB(0x0043232e);
    /* 0043232e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00432331: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 00432334: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00432337: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0043233a: mov edx, ebp */ r_edx = r_ebp;
    /* 0043233c: mov dword ptr [esi + 0x6ec], 0 */ W32((u32)(r_esi+0x6ecu), 0x0u);
    /* 00432346: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00432349: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0043234d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00432351: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x432356u); f_0082ebac();
    /* 00432356: mov ecx, esi */ r_ecx = r_esi;
    /* 00432358: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x43235du); f_00520bf4();
    /* 0043235d: fld dword ptr [0x8fcdf8] */ FPUSH(R_F32((u32)(0x8fcdf8u)));
    /* 00432363: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00432367: fadd dword ptr [0x8fcdf4] */ ST(0) = ST(0) + R_F32((u32)(0x8fcdf4u));
    /* 0043236d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043236f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00432371: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00432373: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00432376: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00432378: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0043237c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043237f: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 00432387: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0043238a: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0043238f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432390: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x432395u); f_0043aaec();
    /* 00432395: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432398: jmp 0x4324ec */ goto L_004324ec;
L_0043239d:; BB(0x0043239d);
    /* 0043239d: fcom dword ptr [0x8fcdf0] */ fx_compare(ST(0), R_F32((u32)(0x8fcdf0u))); 
    /* 004323a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004323a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004323a6: jb 0x432448 */ if (fC) goto L_00432448;
L_004323ac:; BB(0x004323ac);
    /* 004323ac: fcom dword ptr [0x8fcdec] */ fx_compare(ST(0), R_F32((u32)(0x8fcdecu))); 
    /* 004323b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004323b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004323b5: ja 0x432448 */ if ((!fC&&!fZ)) goto L_00432448;
L_004323bb:; BB(0x004323bb);
    /* 004323bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004323bd: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 004323c1: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 004323c5: fcomp dword ptr [0x8fcde8] */ fx_compare(ST(0), R_F32((u32)(0x8fcde8u))); FPOP();
    /* 004323cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004323cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004323ce: jb 0x4324ec */ if (fC) goto L_004324ec;
L_004323d4:; BB(0x004323d4);
    /* 004323d4: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004323d7: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 004323da: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 004323dd: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004323e1: mov edx, ebp */ r_edx = r_ebp;
    /* 004323e3: mov dword ptr [esi + 0x6ec], 0 */ W32((u32)(r_esi+0x6ecu), 0x0u);
    /* 004323ed: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004323f1: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 004323f5: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 004323f9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4323feu); f_0082ebac();
    /* 004323fe: mov ecx, esi */ r_ecx = r_esi;
    /* 00432400: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x432405u); f_00520bf4();
    /* 00432405: fld dword ptr [0x8fcde4] */ FPUSH(R_F32((u32)(0x8fcde4u)));
    /* 0043240b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0043240f: fadd dword ptr [0x8fcde0] */ ST(0) = ST(0) + R_F32((u32)(0x8fcde0u));
    /* 00432415: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00432417: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00432419: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043241b: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0043241f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00432421: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00432425: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00432429: mov dword ptr [esp + 0x10], 0xc0a00000 */ W32((u32)(r_esp+0x10u), 0xc0a00000u);
    /* 00432431: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00432435: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0043243a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043243b: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x432440u); f_0043aaec();
    /* 00432440: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432443: jmp 0x4324ec */ goto L_004324ec;
L_00432448:; BB(0x00432448);
    /* 00432448: fcom dword ptr [0x8fcddc] */ fx_compare(ST(0), R_F32((u32)(0x8fcddcu))); 
    /* 0043244e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432450: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432451: jb 0x4324ea */ if (fC) goto L_004324ea;
L_00432457:; BB(0x00432457);
    /* 00432457: fcomp dword ptr [0x8fcdd8] */ fx_compare(ST(0), R_F32((u32)(0x8fcdd8u))); FPOP();
    /* 0043245d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043245f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432460: ja 0x4324ec */ if ((!fC&&!fZ)) goto L_004324ec;
L_00432466:; BB(0x00432466);
    /* 00432466: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 0043246a: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 0043246e: fcomp dword ptr [0x8fcdd4] */ fx_compare(ST(0), R_F32((u32)(0x8fcdd4u))); FPOP();
    /* 00432474: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432476: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432477: jb 0x4324ec */ if (fC) goto L_004324ec;
L_00432479:; BB(0x00432479);
    /* 00432479: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0043247c: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0043247f: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00432482: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00432486: mov edx, ebp */ r_edx = r_ebp;
    /* 00432488: mov dword ptr [esi + 0x6ec], 0 */ W32((u32)(r_esi+0x6ecu), 0x0u);
    /* 00432492: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00432496: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0043249a: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0043249e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4324a3u); f_0082ebac();
    /* 004324a3: mov ecx, esi */ r_ecx = r_esi;
    /* 004324a5: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4324aau); f_00520bf4();
    /* 004324aa: fld dword ptr [0x8fcdd0] */ FPUSH(R_F32((u32)(0x8fcdd0u)));
    /* 004324b0: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004324b4: fadd dword ptr [0x8fcdcc] */ ST(0) = ST(0) + R_F32((u32)(0x8fcdccu));
    /* 004324ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004324bc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004324be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004324c0: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 004324c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004324c6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004324ca: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004324ce: mov dword ptr [esp + 0x1c], 0xc0a00000 */ W32((u32)(r_esp+0x1cu), 0xc0a00000u);
    /* 004324d6: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004324da: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 004324df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004324e0: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x4324e5u); f_0043aaec();
    /* 004324e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004324e8: jmp 0x4324ec */ goto L_004324ec;
L_004324ea:; BB(0x004324ea);
    /* 004324ea: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004324ec:; BB(0x004324ec);
    /* 004324ec: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004324f1: mov ecx, esi */ r_ecx = r_esi;
    /* 004324f3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4324f8u); f_007aaa30();
    /* 004324f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004324fa: jne 0x432530 */ if (!fZ) goto L_00432530;
L_004324fc:; BB(0x004324fc);
    /* 004324fc: push 0x42e00000 */ { u32 v = 0x42e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432501: mov ecx, esi */ r_ecx = r_esi;
    /* 00432503: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x432508u); f_007aaa30();
    /* 00432508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043250a: jne 0x432530 */ if (!fZ) goto L_00432530;
L_0043250c:; BB(0x0043250c);
    /* 0043250c: push 0x42820000 */ { u32 v = 0x42820000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432511: mov ecx, esi */ r_ecx = r_esi;
    /* 00432513: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x432518u); f_007aaa30();
    /* 00432518: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043251a: je 0x432542 */ if (fZ) goto L_00432542;
L_0043251c:; BB(0x0043251c);
    /* 0043251c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043251e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043251f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432521: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 00432526: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43252bu); f_00814298();
    /* 0043252b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043252e: jmp 0x432542 */ goto L_00432542;
L_00432530:; BB(0x00432530);
    /* 00432530: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00432532: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432533: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432535: push 0x338 */ { u32 v = 0x338u; r_esp -= 4; W32(r_esp, v); }
    /* 0043253a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43253fu); f_00814298();
    /* 0043253f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00432542:; BB(0x00432542);
    /* 00432542: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00432548: fcom dword ptr [0x8fcdc8] */ fx_compare(ST(0), R_F32((u32)(0x8fcdc8u))); 
    /* 0043254e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432550: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432551: jb 0x432563 */ if (fC) goto L_00432563;
L_00432553:; BB(0x00432553);
    /* 00432553: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00432555: fld dword ptr [0x8fce14] */ FPUSH(R_F32((u32)(0x8fce14u)));
    /* 0043255b: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0043255e: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00432561: jmp 0x43257a */ goto L_0043257a;
L_00432563:; BB(0x00432563);
    /* 00432563: fcomp dword ptr [0x8fcdc4] */ fx_compare(ST(0), R_F32((u32)(0x8fcdc4u))); FPOP();
    /* 00432569: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043256b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043256c: jb 0x43257a */ if (fC) goto L_0043257a;
L_0043256e:; BB(0x0043256e);
    /* 0043256e: fld dword ptr [0x8fce18] */ FPUSH(R_F32((u32)(0x8fce18u)));
    /* 00432574: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00432577: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
L_0043257a:; BB(0x0043257a);
    /* 0043257a: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00432580: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00432582: je 0x43259f */ if (fZ) goto L_0043259f;
L_00432584:; BB(0x00432584);
    /* 00432584: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0043258a: mov dword ptr [esi + 0x6e8], 2 */ W32((u32)(r_esi+0x6e8u), 0x2u);
    /* 00432594: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432599: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
L_004325a9:; BB(0x004325a9);
    /* 004325a9: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4325aeu); f_004d3250();
    /* 004325ae: mov dword ptr [esi + 0x6e8], 5 */ W32((u32)(r_esi+0x6e8u), 0x5u);
    /* 004325b8: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325bf: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
L_004325c2:; BB(0x004325c2);
    /* 004325c2: mov eax, 1 */ r_eax = 0x1u;
    /* 004325c7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004325ce: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 004325d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004325d3: mov edx, ebp */ r_edx = r_ebp;
    /* 004325d5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4325dau); f_0082ebac();
    /* 004325da: mov eax, dword ptr [0xa43ba8] */ r_eax = R32((u32)(0xa43ba8u));
    /* 004325df: mov edi, dword ptr [0xa43bac] */ r_edi = R32((u32)(0xa43bacu));
    /* 004325e5: mov edx, dword ptr [0xa43bb0] */ r_edx = R32((u32)(0xa43bb0u));
    /* 004325eb: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 004325f1: mov dword ptr [esi + 0x3a0], edi */ W32((u32)(r_esi+0x3a0u), r_edi);
    /* 004325f7: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 004325fd: mov dword ptr [esi + 0x3a8], eax */ W32((u32)(r_esi+0x3a8u), r_eax);
    /* 00432603: mov dword ptr [esi + 0x3ac], edi */ W32((u32)(r_esi+0x3acu), r_edi);
    /* 00432609: mov dword ptr [esi + 0x3b0], edx */ W32((u32)(r_esi+0x3b0u), r_edx);
    /* 0043260f: lea edi, [esi + 0x3a8] */ r_edi = (u32)(r_esi+0x3a8u);
    /* 00432615: mov ecx, edi */ r_ecx = r_edi;
    /* 00432617: mov edx, ebx */ r_edx = r_ebx;
    /* 00432619: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x43261eu); f_0082f9c4();
    /* 0043261e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043261f: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x432624u); f_007828e4();
    /* 00432624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00432625: fstp dword ptr [esi + 0x3b4] */ W_F32((u32)(r_esi+0x3b4u), ST(0)); FPOP();
    /* 0043262b: mov dword ptr [esi + 0x6e8], 3 */ W32((u32)(r_esi+0x6e8u), 0x3u);
    /* 00432635: jmp 0x432243 */ goto L_00432243;
L_0043263a:; BB(0x0043263a);
    /* 0043263a: mov eax, dword ptr [esi + 0x6f0] */ r_eax = R32((u32)(r_esi+0x6f0u));
    /* 00432640: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432643: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432646: jge 0x432658 */ if ((fS==fO)) goto L_00432658;
L_00432648:; BB(0x00432648);
    /* 00432648: mov dword ptr [esi + 0x6f0], eax */ W32((u32)(r_esi+0x6f0u), r_eax);
    /* 0043264e: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00432651: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00432652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432653: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00432654: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00432655: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
L_00432658:; BB(0x00432658);
    /* 00432658: mov dword ptr [esi + 0x6e8], 1 */ W32((u32)(r_esi+0x6e8u), 0x1u);
    /* 00432662: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00432664: mov dword ptr [esi + 0x6f0], eax */ W32((u32)(r_esi+0x6f0u), r_eax);
    /* 0043266a: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0043266d: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
    /* 00432674: mov dword ptr [esi + 0x3c], 0x40e00000 */ W32((u32)(r_esi+0x3cu), 0x40e00000u);
    /* 0043267b: mov dword ptr [esi + 0x40], 0xc33e0000 */ W32((u32)(r_esi+0x40u), 0xc33e0000u);
    /* 00432682: mov dword ptr [esi + 0x6ac], 0 */ W32((u32)(r_esi+0x6acu), 0x0u);
    /* 0043268c: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043268f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00432690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432691: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00432692: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00432693: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
L_00432696:; BB(0x00432696);
    /* 00432696: mov eax, dword ptr [esi + 0x6e8] */ r_eax = R32((u32)(r_esi+0x6e8u));
    /* 0043269c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043269f: jne 0x43259f */ if (!fZ) goto L_0043259f;
L_004326a5:; BB(0x004326a5);
    /* 004326a5: mov eax, dword ptr [esi + 0x3dc] */ r_eax = R32((u32)(r_esi+0x3dcu));
    /* 004326ab: mov dword ptr [esi + 0x65c], 0 */ W32((u32)(r_esi+0x65cu), 0x0u);
    /* 004326b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004326b8: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 004326be: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x4326c3u); f_00520e6c();
    /* 004326c3: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 004326c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004326cb: je 0x4326d6 */ if (fZ) goto L_004326d6;
L_004326cd:; BB(0x004326cd);
    /* 004326cd: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 004326d4: jmp 0x4326dd */ goto L_004326dd;
L_004326d6:; BB(0x004326d6);
    /* 004326d6: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_004326dd:; BB(0x004326dd);
    /* 004326dd: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 004326e0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004326e3: ja 0x43281d */ if ((!fC&&!fZ)) goto L_0043281d;
L_004326e9:; BB(0x004326e9);
    /* 004326e9: mov edx, dword ptr [edx*4 + 0x8fca00] */ r_edx = R32((u32)(r_edx*4+0x8fca00u));
    /* 004326f0: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
L_0043282a:; BB(0x0043282a);
    /* 0043282a: mov eax, dword ptr [esi + 0x6e8] */ r_eax = R32((u32)(r_esi+0x6e8u));
    /* 00432830: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432833: jne 0x43259f */ if (!fZ) goto L_0043259f;
L_00432839:; BB(0x00432839);
    /* 00432839: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0043283b: mov dword ptr [esi + 0x65c], 0 */ W32((u32)(r_esi+0x65cu), 0x0u);
    /* 00432845: mov ecx, esi */ r_ecx = r_esi;
    /* 00432847: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00432849: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043284b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432851u); call_ind(t); }
    /* 00432851: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 00432855: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 0043285b: mov byte ptr [esp + 0x24], 0x13 */ W8((u32)(r_esp+0x24u), 0x13u);
    /* 00432860: mov eax, 2 */ r_eax = 0x2u;
    /* 00432865: mov byte ptr [esp + 0x25], al */ W8((u32)(r_esp+0x25u), (u8)r_eax);
    /* 00432869: mov word ptr [esp + 0x26], bp */ W16((u32)(r_esp+0x26u), (u16)r_ebp);
    /* 0043286e: mov word ptr [esp + 0x28], ax */ W16((u32)(r_esp+0x28u), (u16)r_eax);
    /* 00432873: mov word ptr [esp + 0x2a], dx */ W16((u32)(r_esp+0x2au), (u16)r_edx);
    /* 00432878: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0043287c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x432881u); f_008003e0();
    /* 00432881: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00432884: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00432885: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432886: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00432887: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00432888: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
L_0043288b:; BB(0x0043288b);
    /* 0043288b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0043288d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043288f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00432896: mov ecx, esi */ r_ecx = r_esi;
    /* 00432898: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x43289eu); call_ind(t); }
    /* 0043289e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004328a0:; BB(0x004328a0);
    /* 004328a0: mov ecx, dword ptr [esi + ebx*4 + 0x5e8] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x5e8u));
    /* 004328a7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004328a9: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x4328afu); call_ind(t); }
    /* 004328af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004328b2: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004328b5: jl 0x4328a0 */ if ((fS!=fO)) goto L_004328a0;
L_004328b7:; BB(0x004328b7);
    /* 004328b7: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004328bd: mov dword ptr [esi + 0x38], 0x428c0000 */ W32((u32)(r_esi+0x38u), 0x428c0000u);
    /* 004328c4: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004328c9: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004328cf: mov dword ptr [esi + 0x6ac], 0 */ W32((u32)(r_esi+0x6acu), 0x0u);
    /* 004328d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004328db: mov dword ptr [esi + 0x64], edx */ W32((u32)(r_esi+0x64u), r_edx);
    /* 004328de: mov dword ptr [esi + 0x6ec], edx */ W32((u32)(r_esi+0x6ecu), r_edx);
    /* 004328e4: mov dword ptr [esi + 0x6e8], 1 */ W32((u32)(r_esi+0x6e8u), 0x1u);
    /* 004328ee: mov dword ptr [esi + 0x6f0], edx */ W32((u32)(r_esi+0x6f0u), r_edx);
    /* 004328f4: mov dword ptr [esi + 0x704], 0 */ W32((u32)(r_esi+0x704u), 0x0u);
    /* 004328fe: mov dword ptr [esi + 0x72c], 0 */ W32((u32)(r_esi+0x72cu), 0x0u);
    /* 00432908: mov dword ptr [esi + 0x730], 0 */ W32((u32)(r_esi+0x730u), 0x0u);
    /* 00432912: mov dword ptr [esi + 0x734], 0 */ W32((u32)(r_esi+0x734u), 0x0u);
    /* 0043291c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x432921u); f_00520e6c();
    /* 00432921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432923: je 0x432964 */ if (fZ) goto L_00432964;
L_00432925:; BB(0x00432925);
    /* 00432925: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 0043292d: mov eax, 1 */ r_eax = 0x1u;
    /* 00432932: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00432934: mov byte ptr [esp + 0x39], al */ W8((u32)(r_esp+0x39u), (u8)r_eax);
    /* 00432938: mov dword ptr [esp + 0x40], 0x3f4ccccd */ W32((u32)(r_esp+0x40u), 0x3f4ccccdu);
    /* 00432940: mov byte ptr [esp + 0x38], al */ W8((u32)(r_esp+0x38u), (u8)r_eax);
    /* 00432944: mov word ptr [esp + 0x3a], dx */ W16((u32)(r_esp+0x3au), (u16)r_edx);
    /* 00432949: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043294b: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x432950u); f_004d31f4();
    /* 00432950: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 00432954: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 00432959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043295a: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x43295fu); f_004d6770();
    /* 0043295f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432962: jmp 0x43299d */ goto L_0043299d;
L_00432964:; BB(0x00432964);
    /* 00432964: mov byte ptr [esp + 0x2c], 1 */ W8((u32)(r_esp+0x2cu), 0x1u);
    /* 00432969: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043296b: mov byte ptr [esp + 0x2d], al */ W8((u32)(r_esp+0x2du), (u8)r_eax);
    /* 0043296f: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00432977: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 0043297c: mov dword ptr [esp + 0x34], 0x3f4ccccd */ W32((u32)(r_esp+0x34u), 0x3f4ccccdu);
    /* 00432984: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00432986: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x43298bu); f_004d31f4();
    /* 0043298b: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0043298f: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 00432994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432995: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x43299au); f_004d6770();
    /* 0043299a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043299d:; BB(0x0043299d);
    /* 0043299d: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4329a2u); f_00717f74();
    /* 004329a2: mov ecx, esi */ r_ecx = r_esi;
    /* 004329a4: call 0x520e2c */ r_esp -= 4; W32(r_esp, 0x4329a9u); f_00520e2c();
    /* 004329a9: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004329ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004329ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004329ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004329af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004329b0: ret 4 */ FN_RET(0x004321cc); r_esp += 8; return;
}

void f_004326f2(void)
{
    FN_ENTER(0x004326f2);
    goto L_004326f2;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x004326f2); r_esp += 8; return;
L_004326b5:; BB(0x004326b5);
    /* 004326b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004326b8: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 004326be: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x4326c3u); f_00520e6c();
    /* 004326c3: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 004326c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004326cb: je 0x4326d6 */ if (fZ) goto L_004326d6;
L_004326cd:; BB(0x004326cd);
    /* 004326cd: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 004326d4: jmp 0x4326dd */ goto L_004326dd;
L_004326d6:; BB(0x004326d6);
    /* 004326d6: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_004326dd:; BB(0x004326dd);
    /* 004326dd: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 004326e0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004326e3: ja 0x43281d */ if ((!fC&&!fZ)) goto L_0043281d;
L_004326e9:; BB(0x004326e9);
    /* 004326e9: mov edx, dword ptr [edx*4 + 0x8fca00] */ r_edx = R32((u32)(r_edx*4+0x8fca00u));
    /* 004326f0: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004326f2:; BB(0x004326f2);
    /* 004326f2: mov eax, 5 */ r_eax = 0x5u;
    /* 004326f7: jmp 0x4326b5 */ goto L_004326b5;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_004326f9(void)
{
    FN_ENTER(0x004326f9);
    goto L_004326f9;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x004326f9); r_esp += 8; return;
L_004326f9:; BB(0x004326f9);
    /* 004326f9: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 004326ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432701: jne 0x43270d */ if (!fZ) goto L_0043270d;
L_00432703:; BB(0x00432703);
    /* 00432703: mov eax, 0x16 */ r_eax = 0x16u;
    /* 00432708: jmp 0x43281d */ goto L_0043281d;
L_0043270d:; BB(0x0043270d);
    /* 0043270d: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00432712: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_00432717(void)
{
    FN_ENTER(0x00432717);
    goto L_00432717;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x00432717); r_esp += 8; return;
L_00432717:; BB(0x00432717);
    /* 00432717: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0043271d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043271f: jne 0x43272b */ if (!fZ) goto L_0043272b;
L_00432721:; BB(0x00432721);
    /* 00432721: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00432726: jmp 0x43281d */ goto L_0043281d;
L_0043272b:; BB(0x0043272b);
    /* 0043272b: mov eax, 0x15 */ r_eax = 0x15u;
    /* 00432730: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_00432735(void)
{
    FN_ENTER(0x00432735);
    goto L_00432735;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x00432735); r_esp += 8; return;
L_00432735:; BB(0x00432735);
    /* 00432735: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0043273b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043273d: jne 0x432749 */ if (!fZ) goto L_00432749;
L_0043273f:; BB(0x0043273f);
    /* 0043273f: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00432744: jmp 0x43281d */ goto L_0043281d;
L_00432749:; BB(0x00432749);
    /* 00432749: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0043274e: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_00432753(void)
{
    FN_ENTER(0x00432753);
    goto L_00432753;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x00432753); r_esp += 8; return;
L_00432753:; BB(0x00432753);
    /* 00432753: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 00432759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043275b: jne 0x432767 */ if (!fZ) goto L_00432767;
L_0043275d:; BB(0x0043275d);
    /* 0043275d: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00432762: jmp 0x43281d */ goto L_0043281d;
L_00432767:; BB(0x00432767);
    /* 00432767: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0043276c: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_00432771(void)
{
    FN_ENTER(0x00432771);
    goto L_00432771;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x00432771); r_esp += 8; return;
L_00432771:; BB(0x00432771);
    /* 00432771: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 00432777: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432779: jne 0x432785 */ if (!fZ) goto L_00432785;
L_0043277b:; BB(0x0043277b);
    /* 0043277b: mov eax, 4 */ r_eax = 0x4u;
    /* 00432780: jmp 0x43281d */ goto L_0043281d;
L_00432785:; BB(0x00432785);
    /* 00432785: mov eax, 0xa */ r_eax = 0xau;
    /* 0043278a: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_0043278f(void)
{
    FN_ENTER(0x0043278f);
    goto L_0043278f;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x0043278f); r_esp += 8; return;
L_0043278f:; BB(0x0043278f);
    /* 0043278f: mov ecx, esi */ r_ecx = r_esi;
    /* 00432791: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x432796u); f_00520bf4();
    /* 00432796: fcomp dword ptr [0x8fce10] */ fx_compare(ST(0), R_F32((u32)(0x8fce10u))); FPOP();
    /* 0043279c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043279e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043279f: jbe 0x4327a8 */ if ((fC||fZ)) goto L_004327a8;
L_004327a1:; BB(0x004327a1);
    /* 004327a1: mov eax, 0x18 */ r_eax = 0x18u;
    /* 004327a6: jmp 0x43281d */ goto L_0043281d;
L_004327a8:; BB(0x004327a8);
    /* 004327a8: mov eax, 0x19 */ r_eax = 0x19u;
    /* 004327ad: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_004327af(void)
{
    FN_ENTER(0x004327af);
    goto L_004327af;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x004327af); r_esp += 8; return;
L_004327af:; BB(0x004327af);
    /* 004327af: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 004327b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004327b7: jne 0x4327c0 */ if (!fZ) goto L_004327c0;
L_004327b9:; BB(0x004327b9);
    /* 004327b9: mov eax, 3 */ r_eax = 0x3u;
    /* 004327be: jmp 0x43281d */ goto L_0043281d;
L_004327c0:; BB(0x004327c0);
    /* 004327c0: mov eax, 0xb */ r_eax = 0xbu;
    /* 004327c5: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_004327c7(void)
{
    FN_ENTER(0x004327c7);
    goto L_004327c7;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x004327c7); r_esp += 8; return;
L_004327c7:; BB(0x004327c7);
    /* 004327c7: mov ecx, esi */ r_ecx = r_esi;
    /* 004327c9: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4327ceu); f_00520bf4();
    /* 004327ce: fcomp dword ptr [0x8fce10] */ fx_compare(ST(0), R_F32((u32)(0x8fce10u))); FPOP();
    /* 004327d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004327d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004327d7: jbe 0x4327e0 */ if ((fC||fZ)) goto L_004327e0;
L_004327d9:; BB(0x004327d9);
    /* 004327d9: mov eax, 0xc */ r_eax = 0xcu;
    /* 004327de: jmp 0x43281d */ goto L_0043281d;
L_004327e0:; BB(0x004327e0);
    /* 004327e0: mov eax, 0xe */ r_eax = 0xeu;
    /* 004327e5: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_004327e7(void)
{
    FN_ENTER(0x004327e7);
    goto L_004327e7;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x004327e7); r_esp += 8; return;
L_004327e7:; BB(0x004327e7);
    /* 004327e7: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 004327ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004327ef: jne 0x4327f8 */ if (!fZ) goto L_004327f8;
L_004327f1:; BB(0x004327f1);
    /* 004327f1: mov eax, 5 */ r_eax = 0x5u;
    /* 004327f6: jmp 0x43281d */ goto L_0043281d;
L_004327f8:; BB(0x004327f8);
    /* 004327f8: mov eax, 9 */ r_eax = 0x9u;
    /* 004327fd: jmp 0x43281d */ goto L_0043281d;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_004327ff(void)
{
    FN_ENTER(0x004327ff);
    goto L_004327ff;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x004327ff); r_esp += 8; return;
L_004327ff:; BB(0x004327ff);
    /* 004327ff: mov ecx, esi */ r_ecx = r_esi;
    /* 00432801: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x432806u); f_00520bf4();
    /* 00432806: fcomp dword ptr [0x8fce10] */ fx_compare(ST(0), R_F32((u32)(0x8fce10u))); FPOP();
    /* 0043280c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043280e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043280f: jbe 0x432818 */ if ((fC||fZ)) goto L_00432818;
L_00432811:; BB(0x00432811);
    /* 00432811: mov eax, 8 */ r_eax = 0x8u;
    /* 00432816: jmp 0x43281d */ goto L_0043281d;
L_00432818:; BB(0x00432818);
    /* 00432818: mov eax, 6 */ r_eax = 0x6u;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_0043281d(void)
{
    FN_ENTER(0x0043281d);
    goto L_0043281d;
L_0043259f:; BB(0x0043259f);
    /* 0043259f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004325a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004325a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004325a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004325a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004325a6: ret 4 */ FN_RET(0x0043281d); r_esp += 8; return;
L_0043281d:; BB(0x0043281d);
    /* 0043281d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043281e: mov ecx, esi */ r_ecx = r_esi;
    /* 00432820: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432825u); f_0042abf8();
    /* 00432825: jmp 0x43259f */ goto L_0043259f;
}

void f_004329b4(void) /* sub_4329B4 */
{
    FN_ENTER(0x004329b4);
    /* 004329b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004329b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004329b6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004329b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004329bb: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 004329bf: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004329c6: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 004329cd: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 004329d4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4329d9u); f_0082d7b0();
    /* 004329d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004329db: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4329e0u); f_00830cd8();
    /* 004329e0: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 004329e7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004329ea: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 004329f2: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 004329fa: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4329ffu); f_00831290();
    /* 004329ff: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00432a05: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 00432a0b: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x432a10u); f_008304c8();
    /* 00432a10: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00432a13: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x432a18u); f_008305ec();
    /* 00432a18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432a19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00432a1b: mov edx, ebp */ r_edx = r_ebp;
    /* 00432a1d: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x432a22u); f_00830aa0();
    /* 00432a22: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x432a27u); f_0082da80();
    /* 00432a27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00432a2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00432a2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432a2c: ret 4 */ FN_RET(0x004329b4); r_esp += 8; return;
}

void f_00432a30(void) /* sub_432A30 */
{
    FN_ENTER(0x00432a30);
    /* 00432a30: mov eax, dword ptr [0xa43ce0] */ r_eax = R32((u32)(0xa43ce0u));
    /* 00432a35: ret  */ FN_RET(0x00432a30); r_esp += 4; return;
}

void f_00432a38(void) /* sub_432A38 */
{
    FN_ENTER(0x00432a38);
    /* 00432a38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a39: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00432a3d: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00432a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432a42: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x432a47u); f_00786b3c();
    /* 00432a47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00432a48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00432a4a: je 0x432a54 */ if (fZ) goto L_00432a54;
L_00432a4c:; BB(0x00432a4c);
    /* 00432a4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a4d: mov ecx, eax */ r_ecx = r_eax;
    /* 00432a4f: call 0x432a58 */ r_esp -= 4; W32(r_esp, 0x432a54u); f_00432a58();
L_00432a54:; BB(0x00432a54);
    /* 00432a54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00432a55: ret  */ FN_RET(0x00432a38); r_esp += 4; return;
}

void f_00432a58(void) /* sub_432A58 */
{
    FN_ENTER(0x00432a58);
    /* 00432a58: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00432a5c: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 00432a60: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 00432a66: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00432a6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432a6b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x432a70u); f_0051f62c();
    /* 00432a70: ret 4 */ FN_RET(0x00432a58); r_esp += 8; return;
}

void f_00432a74(void) /* sub_432A74 */
{
    FN_ENTER(0x00432a74);
    /* 00432a74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a75: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00432a79: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00432a7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432a7e: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x432a83u); f_00786b3c();
    /* 00432a83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00432a84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00432a86: je 0x432a90 */ if (fZ) goto L_00432a90;
L_00432a88:; BB(0x00432a88);
    /* 00432a88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432a89: mov ecx, eax */ r_ecx = r_eax;
    /* 00432a8b: call 0x432a94 */ r_esp -= 4; W32(r_esp, 0x432a90u); f_00432a94();
L_00432a90:; BB(0x00432a90);
    /* 00432a90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00432a91: ret  */ FN_RET(0x00432a74); r_esp += 4; return;
}

void f_00432a94(void) /* sub_432A94 */
{
    FN_ENTER(0x00432a94);
    /* 00432a94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00432a95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432a96: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00432a98: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00432a9c: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00432aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432aa1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00432aa3: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x432aa8u); f_00520fcc();
    /* 00432aa8: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00432aac: mov dword ptr [ebp + 0x3dc], eax */ W32((u32)(r_ebp+0x3dcu), r_eax);
    /* 00432ab2: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00432ab6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ab7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00432ab9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x432abeu); f_0051f62c();
    /* 00432abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432abf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00432ac0: ret 4 */ FN_RET(0x00432a94); r_esp += 8; return;
}

void f_00432ac4(void) /* sub_432AC4 */
{
    FN_ENTER(0x00432ac4);
    /* 00432ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00432ac5: mov ebp, esp */ r_ebp = r_esp;
    /* 00432ac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ac9: push 0x8cde14 */ { u32 v = 0x8cde14u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ace: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00432ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432ad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00432adc: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00432adf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00432ae2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00432ae5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00432ae8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00432aeb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00432aee: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x432af3u); f_0051f814();
    /* 00432af3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432af5: jne 0x432f22 */ if (!fZ) goto L_00432f22;
L_00432afb:; BB(0x00432afb);
    /* 00432afb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432afe: mov eax, dword ptr [eax + 0x3c8] */ r_eax = R32((u32)(r_eax+0x3c8u));
    /* 00432b04: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b09: jne 0x432efa */ if (!fZ) goto L_00432efa;
L_00432b0f:; BB(0x00432b0f);
    /* 00432b0f: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b14: je 0x432b6d */ if (fZ) goto L_00432b6d;
L_00432b16:; BB(0x00432b16);
    /* 00432b16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432b19: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00432b20: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432b25: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432b28: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 00432b2d: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 00432b33: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x432b38u); f_005caba4();
    /* 00432b38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00432b39: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00432b3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b3e: je 0x432b66 */ if (fZ) goto L_00432b66;
L_00432b40:; BB(0x00432b40);
    /* 00432b40: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00432b47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00432b4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432b51: push dword ptr [edx + 0x620] */ { u32 v = R32((u32)(r_edx+0x620u)); r_esp -= 4; W32(r_esp, v); }
    /* 00432b57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432b58: mov ecx, eax */ r_ecx = r_eax;
    /* 00432b5a: call 0x429d00 */ r_esp -= 4; W32(r_esp, 0x432b5fu); f_00429d00();
    /* 00432b5f: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00432b66:; BB(0x00432b66);
    /* 00432b66: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00432b6d:; BB(0x00432b6d);
    /* 00432b6d: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x432b72u); f_00694cc8();
    /* 00432b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b74: je 0x432bb9 */ if (fZ) goto L_00432bb9;
L_00432b76:; BB(0x00432b76);
    /* 00432b76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432b79: mov eax, dword ptr [eax + 0x3d0] */ r_eax = R32((u32)(r_eax+0x3d0u));
    /* 00432b7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b81: jne 0x432bc2 */ if (!fZ) goto L_00432bc2;
L_00432b83:; BB(0x00432b83);
    /* 00432b83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432b86: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x432b8bu); f_00520db0();
    /* 00432b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432b8d: je 0x432ba4 */ if (fZ) goto L_00432ba4;
L_00432b8f:; BB(0x00432b8f);
    /* 00432b8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432b92: mov dword ptr [eax + 0x3fc], 0 */ W32((u32)(r_eax+0x3fcu), 0x0u);
    /* 00432b9c: mov eax, dword ptr [eax + 0x3d0] */ r_eax = R32((u32)(r_eax+0x3d0u));
    /* 00432ba2: jmp 0x432bc2 */ goto L_00432bc2;
L_00432ba4:; BB(0x00432ba4);
    /* 00432ba4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ba7: mov dword ptr [eax + 0x3fc], 1 */ W32((u32)(r_eax+0x3fcu), 0x1u);
    /* 00432bb1: mov eax, dword ptr [eax + 0x3d0] */ r_eax = R32((u32)(r_eax+0x3d0u));
    /* 00432bb7: jmp 0x432bc2 */ goto L_00432bc2;
L_00432bb9:; BB(0x00432bb9);
    /* 00432bb9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432bbc: mov eax, dword ptr [eax + 0x3d0] */ r_eax = R32((u32)(r_eax+0x3d0u));
L_00432bc2:; BB(0x00432bc2);
    /* 00432bc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432bc4: je 0x432dc3 */ if (fZ) goto L_00432dc3;
L_00432bca:; BB(0x00432bca);
    /* 00432bca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432bcd: mov edx, dword ptr [eax + 0x3d4] */ r_edx = R32((u32)(r_eax+0x3d4u));
    /* 00432bd3: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00432bd6: test dword ptr [0xa0f688], ecx */ {  u32 a = R32((u32)(0xa0f688u)); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432bdc: je 0x432dc3 */ if (fZ) goto L_00432dc3;
L_00432be2:; BB(0x00432be2);
    /* 00432be2: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432be8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432beb: je 0x432c1e */ if (fZ) goto L_00432c1e;
L_00432bed:; BB(0x00432bed);
    /* 00432bed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432bef: jne 0x432c03 */ if (!fZ) goto L_00432c03;
L_00432bf1:; BB(0x00432bf1);
    /* 00432bf1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432bf4: mov dword ptr [eax + 0x3fc], 2 */ W32((u32)(r_eax+0x3fcu), 0x2u);
    /* 00432bfe: jmp 0x432dc3 */ goto L_00432dc3;
L_00432c03:; BB(0x00432c03);
    /* 00432c03: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432c06: jne 0x432dc3 */ if (!fZ) goto L_00432dc3;
L_00432c0c:; BB(0x00432c0c);
    /* 00432c0c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c0f: mov dword ptr [eax + 0x3fc], 1 */ W32((u32)(r_eax+0x3fcu), 0x1u);
    /* 00432c19: jmp 0x432dc3 */ goto L_00432dc3;
L_00432c1e:; BB(0x00432c1e);
    /* 00432c1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c21: mov edx, dword ptr [eax + 0x3dc] */ r_edx = R32((u32)(r_eax+0x3dcu));
    /* 00432c27: mov dword ptr [eax + 0x3fc], 0 */ W32((u32)(r_eax+0x3fcu), 0x0u);
    /* 00432c31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c34: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00432c37: mov dword ptr [eax + 0x3dc], edx */ W32((u32)(r_eax+0x3dcu), r_edx);
    /* 00432c3d: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x432c42u); f_00520e6c();
    /* 00432c42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c45: mov edx, dword ptr [edx + 0x3dc] */ r_edx = R32((u32)(r_edx+0x3dcu));
    /* 00432c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432c4d: je 0x432c58 */ if (fZ) goto L_00432c58;
L_00432c4f:; BB(0x00432c4f);
    /* 00432c4f: mov edx, dword ptr [edx*4 + 0x9a4440] */ r_edx = R32((u32)(r_edx*4+0x9a4440u));
    /* 00432c56: jmp 0x432c5f */ goto L_00432c5f;
L_00432c58:; BB(0x00432c58);
    /* 00432c58: mov edx, dword ptr [edx*4 + 0x9a4380] */ r_edx = R32((u32)(r_edx*4+0x9a4380u));
L_00432c5f:; BB(0x00432c5f);
    /* 00432c5f: lea eax, [edx - 0x21] */ r_eax = (u32)(r_edx+0xffffffdfu);
    /* 00432c62: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00432c65: ja 0x432dba */ if ((!fC&&!fZ)) goto L_00432dba;
L_00432c6b:; BB(0x00432c6b);
    /* 00432c6b: mov eax, dword ptr [eax*4 + 0x8fca30] */ r_eax = R32((u32)(r_eax*4+0x8fca30u));
    /* 00432c72: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
L_00432dc3:; BB(0x00432dc3);
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432efa:; BB(0x00432efa);
    /* 00432efa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432efd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432efe: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x432f03u); f_008113e4();
    /* 00432f03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00432f04: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f07: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00432f0b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00432f10: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00432f14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00432f17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00432f1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00432f20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432f21: ret  */ FN_RET(0x00432ac4); r_esp += 4; return;
L_00432f22:; BB(0x00432f22);
    /* 00432f22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f25: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f27: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x432f2du); call_ind(t); }
    /* 00432f2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00432f30: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00432f37: mov esp, ebp */ r_esp = r_ebp;
    /* 00432f39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00432f3a: ret  */ FN_RET(0x00432ac4); r_esp += 4; return;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432ac4); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432c74(void)
{
    FN_ENTER(0x00432c74);
    goto L_00432c74;
L_00432c31:; BB(0x00432c31);
    /* 00432c31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c34: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00432c37: mov dword ptr [eax + 0x3dc], edx */ W32((u32)(r_eax+0x3dcu), r_edx);
    /* 00432c3d: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x432c42u); f_00520e6c();
    /* 00432c42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c45: mov edx, dword ptr [edx + 0x3dc] */ r_edx = R32((u32)(r_edx+0x3dcu));
    /* 00432c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432c4d: je 0x432c58 */ if (fZ) goto L_00432c58;
L_00432c4f:; BB(0x00432c4f);
    /* 00432c4f: mov edx, dword ptr [edx*4 + 0x9a4440] */ r_edx = R32((u32)(r_edx*4+0x9a4440u));
    /* 00432c56: jmp 0x432c5f */ goto L_00432c5f;
L_00432c58:; BB(0x00432c58);
    /* 00432c58: mov edx, dword ptr [edx*4 + 0x9a4380] */ r_edx = R32((u32)(r_edx*4+0x9a4380u));
L_00432c5f:; BB(0x00432c5f);
    /* 00432c5f: lea eax, [edx - 0x21] */ r_eax = (u32)(r_edx+0xffffffdfu);
    /* 00432c62: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00432c65: ja 0x432dba */ if ((!fC&&!fZ)) goto L_00432dba;
L_00432c6b:; BB(0x00432c6b);
    /* 00432c6b: mov eax, dword ptr [eax*4 + 0x8fca30] */ r_eax = R32((u32)(r_eax*4+0x8fca30u));
    /* 00432c72: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00432c74:; BB(0x00432c74);
    /* 00432c74: mov edx, 5 */ r_edx = 0x5u;
    /* 00432c79: jmp 0x432c31 */ goto L_00432c31;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432c74); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432c7b(void)
{
    FN_ENTER(0x00432c7b);
    /* 00432c7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c7e: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00432c84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432c86: jne 0x432c92 */ if (!fZ) goto L_00432c92;
L_00432c88:; BB(0x00432c88);
    /* 00432c88: mov edx, 0x16 */ r_edx = 0x16u;
    /* 00432c8d: jmp 0x432dba */ goto L_00432dba;
L_00432c92:; BB(0x00432c92);
    /* 00432c92: mov edx, 0x17 */ r_edx = 0x17u;
    /* 00432c97: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432c7b); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432c9c(void)
{
    FN_ENTER(0x00432c9c);
    /* 00432c9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432c9f: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00432ca5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ca7: jne 0x432cb3 */ if (!fZ) goto L_00432cb3;
L_00432ca9:; BB(0x00432ca9);
    /* 00432ca9: mov edx, 0x14 */ r_edx = 0x14u;
    /* 00432cae: jmp 0x432dba */ goto L_00432dba;
L_00432cb3:; BB(0x00432cb3);
    /* 00432cb3: mov edx, 0x15 */ r_edx = 0x15u;
    /* 00432cb8: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432c9c); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432cbd(void)
{
    FN_ENTER(0x00432cbd);
    /* 00432cbd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432cc0: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00432cc6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432cc8: jne 0x432cd4 */ if (!fZ) goto L_00432cd4;
L_00432cca:; BB(0x00432cca);
    /* 00432cca: mov edx, 0x12 */ r_edx = 0x12u;
    /* 00432ccf: jmp 0x432dba */ goto L_00432dba;
L_00432cd4:; BB(0x00432cd4);
    /* 00432cd4: mov edx, 0x13 */ r_edx = 0x13u;
    /* 00432cd9: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432cbd); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432cde(void)
{
    FN_ENTER(0x00432cde);
    /* 00432cde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ce1: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00432ce7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ce9: jne 0x432cf5 */ if (!fZ) goto L_00432cf5;
L_00432ceb:; BB(0x00432ceb);
    /* 00432ceb: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00432cf0: jmp 0x432dba */ goto L_00432dba;
L_00432cf5:; BB(0x00432cf5);
    /* 00432cf5: mov edx, 0x11 */ r_edx = 0x11u;
    /* 00432cfa: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432cde); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432cff(void)
{
    FN_ENTER(0x00432cff);
    /* 00432cff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d02: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00432d08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d0a: jne 0x432d16 */ if (!fZ) goto L_00432d16;
L_00432d0c:; BB(0x00432d0c);
    /* 00432d0c: mov edx, 4 */ r_edx = 0x4u;
    /* 00432d11: jmp 0x432dba */ goto L_00432dba;
L_00432d16:; BB(0x00432d16);
    /* 00432d16: mov edx, 0xa */ r_edx = 0xau;
    /* 00432d1b: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432cff); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432d20(void)
{
    FN_ENTER(0x00432d20);
    /* 00432d20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d23: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x432d28u); f_00520bf4();
    /* 00432d28: fcomp dword ptr [0x8fcdb0] */ fx_compare(ST(0), R_F32((u32)(0x8fcdb0u))); FPOP();
    /* 00432d2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432d30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432d31: jbe 0x432d3d */ if ((fC||fZ)) goto L_00432d3d;
L_00432d33:; BB(0x00432d33);
    /* 00432d33: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00432d38: jmp 0x432dba */ goto L_00432dba;
L_00432d3d:; BB(0x00432d3d);
    /* 00432d3d: mov edx, 0x19 */ r_edx = 0x19u;
    /* 00432d42: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432d20); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432d44(void)
{
    FN_ENTER(0x00432d44);
    /* 00432d44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d47: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00432d4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d4f: jne 0x432d58 */ if (!fZ) goto L_00432d58;
L_00432d51:; BB(0x00432d51);
    /* 00432d51: mov edx, 3 */ r_edx = 0x3u;
    /* 00432d56: jmp 0x432dba */ goto L_00432dba;
L_00432d58:; BB(0x00432d58);
    /* 00432d58: mov edx, 0xb */ r_edx = 0xbu;
    /* 00432d5d: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432d44); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432d5f(void)
{
    FN_ENTER(0x00432d5f);
    /* 00432d5f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d62: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x432d67u); f_00520bf4();
    /* 00432d67: fcomp dword ptr [0x8fcdb0] */ fx_compare(ST(0), R_F32((u32)(0x8fcdb0u))); FPOP();
    /* 00432d6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432d6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432d70: jbe 0x432d79 */ if ((fC||fZ)) goto L_00432d79;
L_00432d72:; BB(0x00432d72);
    /* 00432d72: mov edx, 0xc */ r_edx = 0xcu;
    /* 00432d77: jmp 0x432dba */ goto L_00432dba;
L_00432d79:; BB(0x00432d79);
    /* 00432d79: mov edx, 0xe */ r_edx = 0xeu;
    /* 00432d7e: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432d5f); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432d80(void)
{
    FN_ENTER(0x00432d80);
    /* 00432d80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d83: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00432d89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432d8b: jne 0x432d94 */ if (!fZ) goto L_00432d94;
L_00432d8d:; BB(0x00432d8d);
    /* 00432d8d: mov edx, 5 */ r_edx = 0x5u;
    /* 00432d92: jmp 0x432dba */ goto L_00432dba;
L_00432d94:; BB(0x00432d94);
    /* 00432d94: mov edx, 9 */ r_edx = 0x9u;
    /* 00432d99: jmp 0x432dba */ goto L_00432dba;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432d80); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432d9b(void)
{
    FN_ENTER(0x00432d9b);
    /* 00432d9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432d9e: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x432da3u); f_00520bf4();
    /* 00432da3: fcomp dword ptr [0x8fcdb0] */ fx_compare(ST(0), R_F32((u32)(0x8fcdb0u))); FPOP();
    /* 00432da9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432dab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432dac: jbe 0x432db5 */ if ((fC||fZ)) goto L_00432db5;
L_00432dae:; BB(0x00432dae);
    /* 00432dae: mov edx, 8 */ r_edx = 0x8u;
    /* 00432db3: jmp 0x432dba */ goto L_00432dba;
L_00432db5:; BB(0x00432db5);
    /* 00432db5: mov edx, 6 */ r_edx = 0x6u;
L_00432dba:; BB(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432d9b); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

void f_00432dba(void)
{
    FN_ENTER(0x00432dba);
    /* 00432dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432dbe: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x432dc3u); f_0042abf8();
    /* 00432dc3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x432dc8u); f_00520db8();
    /* 00432dc8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00432dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432dd0: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x432dd6u); call_ind(t); }
    /* 00432dd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432dd9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ddb: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x432de1u); call_ind(t); }
    /* 00432de1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00432de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432de6: jne 0x432e93 */ if (!fZ) goto L_00432e93;
L_00432dec:; BB(0x00432dec);
    /* 00432dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432def: movsx ebx, word ptr [eax + 0x32e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00432df6: cmp ebx, 0x1f */ {  u32 a = r_ebx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432df9: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432dff:; BB(0x00432dff);
    /* 00432dff: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e02: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e08:; BB(0x00432e08);
    /* 00432e08: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e0b: je 0x432f99 */ if (fZ) goto L_00432f99;
L_00432e11:; BB(0x00432e11);
    /* 00432e11: mov edx, eax */ r_edx = r_eax;
    /* 00432e13: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432e16: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00432e1b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_00432e1e:; BB(0x00432e1e);
    /* 00432e1e: mov eax, edx */ r_eax = r_edx;
    /* 00432e20: mov eax, dword ptr [eax + 0x3fc] */ r_eax = R32((u32)(r_eax+0x3fcu));
    /* 00432e26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e29: je 0x432f66 */ if (fZ) goto L_00432f66;
L_00432e2f:; BB(0x00432e2f);
    /* 00432e2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e32: je 0x432f3b */ if (fZ) goto L_00432f3b;
L_00432e38:; BB(0x00432e38);
    /* 00432e38: mov ecx, edx */ r_ecx = r_edx;
    /* 00432e3a: call 0x4331fc */ r_esp -= 4; W32(r_esp, 0x432e3fu); f_004331fc();
L_00432e3f:; BB(0x00432e3f);
    /* 00432e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e44: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432e4au); call_ind(t); }
    /* 00432e4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432e4c: je 0x432e59 */ if (fZ) goto L_00432e59;
L_00432e4e:; BB(0x00432e4e);
    /* 00432e4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e51: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432e53: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432e59u); call_ind(t); }
L_00432e59:; BB(0x00432e59);
    /* 00432e59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e5c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e60: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e68: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e6eu); call_ind(t); }
    /* 00432e6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432e75: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432e7d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432e83u); call_ind(t); }
L_00432e83:; BB(0x00432e83);
    /* 00432e83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e86: call 0x433480 */ r_esp -= 4; W32(r_esp, 0x432e8bu); f_00433480();
    /* 00432e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e8e: call 0x4334b0 */ r_esp -= 4; W32(r_esp, 0x432e93u); f_004334b0();
L_00432e93:; BB(0x00432e93);
    /* 00432e93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e96: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x432e9bu); f_0051f604();
    /* 00432e9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432e9e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432ea0: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x432ea6u); call_ind(t); }
    /* 00432ea6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432ea9: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x432eaeu); f_00435484();
    /* 00432eae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb1: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x432eb6u); f_006401f0();
    /* 00432eb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432eb9: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00432ebc: mov edx, 1 */ r_edx = 0x1u;
    /* 00432ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec3: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00432ec8: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00432ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00432ece: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x432ed3u); f_0080575c();
    /* 00432ed3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00432ed6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00432ed8:; BB(0x00432ed8);
    /* 00432ed8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432edb: mov edx, dword ptr [eax + esi*4 + 0x748] */ r_edx = R32((u32)(r_eax+r_esi*4+0x748u));
    /* 00432ee2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00432ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432ee7: je 0x433182 */ if (fZ) goto L_00433182;
L_00432eed:; BB(0x00432eed);
    /* 00432eed: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432ef0: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00432ef3: jl 0x432ed8 */ if ((fS!=fO)) goto L_00432ed8;
L_00432ef5:; BB(0x00432ef5);
    /* 00432ef5: jmp 0x432fab */ goto L_00432fab;
L_00432f3b:; BB(0x00432f3b);
    /* 00432f3b: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f3d: call 0x43322c */ r_esp -= 4; W32(r_esp, 0x432f42u); f_0043322c();
    /* 00432f42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f44: je 0x432f53 */ if (fZ) goto L_00432f53;
L_00432f46:; BB(0x00432f46);
    /* 00432f46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f49: call 0x43324c */ r_esp -= 4; W32(r_esp, 0x432f4eu); f_0043324c();
    /* 00432f4e: jmp 0x432e3f */ goto L_00432e3f;
L_00432f53:; BB(0x00432f53);
    /* 00432f53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00432f59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f5b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x432f61u); call_ind(t); }
    /* 00432f61: jmp 0x432e3f */ goto L_00432e3f;
L_00432f66:; BB(0x00432f66);
    /* 00432f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00432f68: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f6a: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x432f70u); call_ind(t); }
    /* 00432f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432f72: je 0x432f7f */ if (fZ) goto L_00432f7f;
L_00432f74:; BB(0x00432f74);
    /* 00432f74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f77: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00432f79: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x432f7fu); call_ind(t); }
L_00432f7f:; BB(0x00432f7f);
    /* 00432f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432f82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00432f84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00432f86: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00432f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00432f8e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x432f94u); call_ind(t); }
    /* 00432f94: jmp 0x432e83 */ goto L_00432e83;
L_00432f99:; BB(0x00432f99);
    /* 00432f99: mov edx, eax */ r_edx = r_eax;
    /* 00432f9b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00432f9e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00432fa3: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00432fa6: jmp 0x432e1e */ goto L_00432e1e;
L_00432fab:; BB(0x00432fab);
    /* 00432fab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fae: mov eax, dword ptr [eax + 0x760] */ r_eax = R32((u32)(r_eax+0x760u));
    /* 00432fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00432fb6: jne 0x4330a5 */ if (!fZ) goto L_004330a5;
L_00432fbc:; BB(0x00432fbc);
    /* 00432fbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00432fbe:; BB(0x00432fbe);
    /* 00432fbe: mov eax, dword ptr [ebx*4 + 0x9a476c] */ r_eax = R32((u32)(r_ebx*4+0x9a476cu));
    /* 00432fc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00432fc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00432fcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00432fcf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00432fd1: fld dword ptr [esi + edx + 0x54c] */ FPUSH(R_F32((u32)(r_esi+r_edx+0x54cu)));
    /* 00432fd8: fsub dword ptr [0x8fcc10] */ ST(0) = ST(0) - R_F32((u32)(0x8fcc10u));
    /* 00432fde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00432fdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00432fe2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x432fe7u); f_0082e900();
    /* 00432fe7: fld dword ptr [ebx*4 + 0x9a4760] */ FPUSH(R_F32((u32)(r_ebx*4+0x9a4760u)));
    /* 00432fee: fld dword ptr [0x8fcda0] */ FPUSH(R_F32((u32)(0x8fcda0u)));
    /* 00432ff4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00432ff6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00432ff8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00432ffa: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00432ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00432ffe: jbe 0x433071 */ if ((fC||fZ)) goto L_00433071;
L_00433000:; BB(0x00433000);
    /* 00433000: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433003: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433006: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00433008: fld dword ptr [esi + eax + 0x548] */ FPUSH(R_F32((u32)(r_esi+r_eax+0x548u)));
    /* 0043300f: mov edx, dword ptr [esi + eax + 0x548] */ r_edx = R32((u32)(r_esi+r_eax+0x548u));
    /* 00433016: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043301d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043301f: fst dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0));
    /* 00433022: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00433024: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00433027: mov edi, dword ptr [esi + eax + 0x54c] */ r_edi = R32((u32)(r_esi+r_eax+0x54cu));
    /* 0043302e: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00433031: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00433034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433035: mov esi, dword ptr [esi + eax + 0x550] */ r_esi = R32((u32)(r_esi+r_eax+0x550u));
    /* 0043303c: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043303f: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 00433046: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00433049: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0043304c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433051u); f_00508db8();
    /* 00433051: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00433054: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00433056: fsubr dword ptr [ebp - 0x34] */ ST(0) = R_F32((u32)(r_ebp+0xffffffccu)) - ST(0);
    /* 00433059: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043305c: mov ecx, dword ptr [edx + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x74cu));
    /* 00433063: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00433066: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00433069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043306a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x43306fu); f_00508db8();
    /* 0043306f: jmp 0x433094 */ goto L_00433094;
L_00433071:; BB(0x00433071);
    /* 00433071: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00433073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433076: mov ecx, dword ptr [eax + ebx*8 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x748u));
    /* 0043307d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00433080: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433085u); f_00508f48();
    /* 00433085: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433088: mov ecx, dword ptr [eax + esi*4 + 0x74c] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x74cu));
    /* 0043308f: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433094u); f_00508f48();
L_00433094:; BB(0x00433094);
    /* 00433094: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433097: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043309a: jl 0x432fbe */ if ((fS!=fO)) goto L_00432fbe;
L_004330a0:; BB(0x004330a0);
    /* 004330a0: jmp 0x43313c */ goto L_0043313c;
L_004330a5:; BB(0x004330a5);
    /* 004330a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004330a8: lea edi, [ebp - 0x34] */ r_edi = (u32)(r_ebp+0xffffffccu);
    /* 004330ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004330ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004330b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004330b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004330b5: fld dword ptr [ebx + ecx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x548u)));
    /* 004330bc: fadd dword ptr [0x8fcda8] */ ST(0) = ST(0) + R_F32((u32)(0x8fcda8u));
    /* 004330c2: mov eax, dword ptr [ebx + ecx + 0x548] */ r_eax = R32((u32)(r_ebx+r_ecx+0x548u));
    /* 004330c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004330cc: mov edx, dword ptr [ebx + ecx + 0x54c] */ r_edx = R32((u32)(r_ebx+r_ecx+0x54cu));
    /* 004330d3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004330d6: mov esi, dword ptr [ebx + ecx + 0x550] */ r_esi = R32((u32)(r_ebx+r_ecx+0x550u));
    /* 004330dd: mov ecx, dword ptr [ecx + 0x748] */ r_ecx = R32((u32)(r_ecx+0x748u));
    /* 004330e3: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004330e6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004330e9: mov dword ptr [ebp - 0x30], 0xc0a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0a00000u);
    /* 004330f0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4330f5u); f_00508db8();
    /* 004330f5: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 004330f8: fsub dword ptr [0x8fcda4] */ ST(0) = ST(0) - R_F32((u32)(0x8fcda4u));
    /* 004330fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433101: mov ecx, dword ptr [edx + 0x74c] */ r_ecx = R32((u32)(r_edx+0x74cu));
    /* 00433107: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0043310a: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 0043310d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043310e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x433113u); f_00508db8();
    /* 00433113: mov ebx, 2 */ r_ebx = 0x2u;
L_00433118:; BB(0x00433118);
    /* 00433118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043311b: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 00433122: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x433127u); f_00508f48();
    /* 00433127: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043312a: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043312d: jl 0x433118 */ if ((fS!=fO)) goto L_00433118;
L_0043312f:; BB(0x0043312f);
    /* 0043312f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433132: mov dword ptr [eax + 0x760], 0 */ W32((u32)(r_eax+0x760u), 0x0u);
L_0043313c:; BB(0x0043313c);
    /* 0043313c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043313e:; BB(0x0043313e);
    /* 0043313e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00433141: push dword ptr [eax + ebx*4 + 0x748] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x748u)); r_esp -= 4; W32(r_esp, v); }
    /* 00433148: call 0x43aab8 */ r_esp -= 4; W32(r_esp, 0x43314du); f_0043aab8();
    /* 0043314d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043314e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00433151: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00433154: jl 0x43313e */ if ((fS!=fO)) goto L_0043313e;
L_00433156:; BB(0x00433156);
    /* 00433156: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00433159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043315b: jne 0x43316b */ if (!fZ) goto L_0043316b;
L_0043315d:; BB(0x0043315d);
    /* 0043315d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433160: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433166: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x43316bu); f_00817574();
L_0043316b:; BB(0x0043316b);
    /* 0043316b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043316e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00433171: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00433174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00433180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433181: ret  */ FN_RET(0x00432dba); r_esp += 4; return;
L_00433182:; BB(0x00433182);
    /* 00433182: mov edx, eax */ r_edx = r_eax;
    /* 00433184: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00433187: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00433189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043318b: lea edi, [edx + 0x548] */ r_edi = (u32)(r_edx+0x548u);
    /* 00433191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00433194: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433197: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0043319a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043319c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 004331a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004331a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004331a3: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x4331a8u); f_0050a664();
    /* 004331a8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004331ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004331ad: je 0x4331d6 */ if (fZ) goto L_004331d6;
L_004331af:; BB(0x004331af);
    /* 004331af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004331b2: mov dword ptr [edx + ebx*2 + 0x748], eax */ W32((u32)(r_edx+r_ebx*2+0x748u), r_eax);
    /* 004331b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004331bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004331bd: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4331c2u); f_00508efc();
    /* 004331c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331c5: mov ecx, dword ptr [eax + ebx*2 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*2+0x748u));
    /* 004331cc: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331d1u); f_00508f48();
    /* 004331d1: jmp 0x432eed */ goto L_00432eed;
L_004331d6:; BB(0x004331d6);
    /* 004331d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004331d8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004331da: jle 0x433156 */ if ((fZ||fS!=fO)) goto L_00433156;
L_004331e0:; BB(0x004331e0);
    /* 004331e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004331e3: mov ecx, dword ptr [eax + ebx*4 + 0x748] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x748u));
    /* 004331ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4331efu); f_00508f48();
    /* 004331ef: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004331f2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004331f4: jl 0x4331e0 */ if ((fS!=fO)) goto L_004331e0;
L_004331f6:; BB(0x004331f6);
    /* 004331f6: jmp 0x433156 */ goto L_00433156;
}

