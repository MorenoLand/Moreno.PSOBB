#include "protos.h"

void f_00423028(void) /* sub_423028 */
{
    FN_ENTER(0x00423028);
    /* 00423028: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423029: mov esi, ecx */ r_esi = r_ecx;
    /* 0042302b: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 00423031: fsub dword ptr [esi + 0x414] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x414u));
    /* 00423037: fld dword ptr [esi + 0x3a4] */ FPUSH(R_F32((u32)(r_esi+0x3a4u)));
    /* 0042303d: fsub dword ptr [esi + 0x41c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x41cu));
    /* 00423043: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00423045: fstp dword ptr [esi + 0x5d0] */ W_F32((u32)(r_esi+0x5d0u), ST(0)); FPOP();
    /* 0042304b: fstp dword ptr [esi + 0x5d8] */ W_F32((u32)(r_esi+0x5d8u), ST(0)); FPOP();
    /* 00423051: mov dword ptr [esi + 0x5d4], 0 */ W32((u32)(r_esi+0x5d4u), 0x0u);
    /* 0042305b: lea eax, [esi + 0x5d0] */ r_eax = (u32)(r_esi+0x5d0u);
    /* 00423061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423062: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x423067u); f_007828e4();
    /* 00423067: fstp dword ptr [esi + 0x5dc] */ W_F32((u32)(r_esi+0x5dcu), ST(0)); FPOP();
    /* 0042306d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042306e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042306f: ret  */ FN_RET(0x00423028); r_esp += 4; return;
}

void f_00423070(void) /* sub_423070 */
{
    FN_ENTER(0x00423070);
    /* 00423070: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423071: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423072: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00423075: mov esi, ecx */ r_esi = r_ecx;
    /* 00423077: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0042307b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042307e: ja 0x4234d6 */ if ((!fC&&!fZ)) goto L_004234d6;
L_00423084:; BB(0x00423084);
    /* 00423084: mov eax, dword ptr [eax*4 + 0x8fb724] */ r_eax = R32((u32)(r_eax*4+0x8fb724u));
    /* 0042308b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004234d6:; BB(0x004234d6);
    /* 004234d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234db: ret 4 */ FN_RET(0x00423070); r_esp += 8; return;
}

void f_0042308d(void)
{
    FN_ENTER(0x0042308d);
    /* 0042308d: mov edx, dword ptr [esi + 0x86c] */ r_edx = R32((u32)(r_esi+0x86cu));
    /* 00423093: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423099: jl 0x4230e0 */ if ((fS!=fO)) goto L_004230e0;
L_0042309b:; BB(0x0042309b);
    /* 0042309b: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 004230a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004230a3: je 0x4230e0 */ if (fZ) goto L_004230e0;
L_004230a5:; BB(0x004230a5);
    /* 004230a5: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 004230ab: fcomp dword ptr [esi + 0x884] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x884u))); FPOP();
    /* 004230b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004230b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004230b4: jb 0x4230ec */ if (fC) goto L_004230ec;
L_004230b6:; BB(0x004230b6);
    /* 004230b6: mov ecx, esi */ r_ecx = r_esi;
    /* 004230b8: call 0x423548 */ r_esp -= 4; W32(r_esp, 0x4230bdu); f_00423548();
    /* 004230bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004230bf: jne 0x4230ec */ if (!fZ) goto L_004230ec;
L_004230c1:; BB(0x004230c1);
    /* 004230c1: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4230c6u); f_00420a44();
    /* 004230c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004230c8: jle 0x4234d6 */ if ((fZ||fS!=fO)) goto L_004234d6;
L_004230ce:; BB(0x004230ce);
    /* 004230ce: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 004230d4: cmp eax, 0x258 */ {  u32 a = r_eax; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004230d9: jge 0x4230ec */ if ((fS==fO)) goto L_004230ec;
L_004230db:; BB(0x004230db);
    /* 004230db: jmp 0x4234d6 */ goto L_004234d6;
L_004230e0:; BB(0x004230e0);
    /* 004230e0: cmp edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004230e6: jl 0x4234d6 */ if ((fS!=fO)) goto L_004234d6;
L_004230ec:; BB(0x004230ec);
    /* 004230ec: mov ebx, dword ptr [esi + 0x684] */ r_ebx = R32((u32)(r_esi+0x684u));
    /* 004230f2: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004230f5: jge 0x423113 */ if ((fS==fO)) goto L_00423113;
L_004230f7:; BB(0x004230f7);
    /* 004230f7: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4230fcu); f_00420a44();
    /* 004230fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004230fe: jne 0x423107 */ if (!fZ) goto L_00423107;
L_00423100:; BB(0x00423100);
    /* 00423100: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 00423105: jmp 0x423130 */ goto L_00423130;
L_00423107:; BB(0x00423107);
    /* 00423107: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042310a: jne 0x423130 */ if (!fZ) goto L_00423130;
L_0042310c:; BB(0x0042310c);
    /* 0042310c: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 00423111: jmp 0x423130 */ goto L_00423130;
L_00423113:; BB(0x00423113);
    /* 00423113: add ebx, -0x32 */ {  u32 a = r_ebx; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00423116: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42311bu); f_00420a44();
    /* 0042311b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042311d: jne 0x423126 */ if (!fZ) goto L_00423126;
L_0042311f:; BB(0x0042311f);
    /* 0042311f: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 00423124: jmp 0x423130 */ goto L_00423130;
L_00423126:; BB(0x00423126);
    /* 00423126: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423129: jne 0x423130 */ if (!fZ) goto L_00423130;
L_0042312b:; BB(0x0042312b);
    /* 0042312b: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_00423130:; BB(0x00423130);
    /* 00423130: mov ecx, dword ptr [esi + 0x684] */ r_ecx = R32((u32)(r_esi+0x684u));
L_00423136:; BB(0x00423136);
    /* 00423136: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 00423139: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042313c: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042313f: jne 0x4234de */ if (!fZ) goto L_004234de;
L_00423145:; BB(0x00423145);
    /* 00423145: mov dword ptr [esi + 0x684], 0 */ W32((u32)(r_esi+0x684u), 0x0u);
    /* 0042314f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00423151: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00423153: jmp 0x423136 */ goto L_00423136;
L_004234d6:; BB(0x004234d6);
    /* 004234d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234db: ret 4 */ FN_RET(0x0042308d); r_esp += 8; return;
L_004234de:; BB(0x004234de);
    /* 004234de: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004234e1: je 0x4234f9 */ if (fZ) goto L_004234f9;
L_004234e3:; BB(0x004234e3);
    /* 004234e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004234e4: mov dword ptr [esi + 0x684], ecx */ W32((u32)(r_esi+0x684u), r_ecx);
    /* 004234ea: mov ecx, esi */ r_ecx = r_esi;
    /* 004234ec: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x4234f1u); f_0041a808();
    /* 004234f1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234f6: ret 4 */ FN_RET(0x0042308d); r_esp += 8; return;
L_004234f9:; BB(0x004234f9);
    /* 004234f9: mov dword ptr [esi + 0x684], 0x32 */ W32((u32)(r_esi+0x684u), 0x32u);
    /* 00423503: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 00423508: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0042350a: jmp 0x423136 */ goto L_00423136;
}

void f_00423155(void)
{
    FN_ENTER(0x00423155);
    /* 00423155: mov ecx, esi */ r_ecx = r_esi;
    /* 00423157: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x42315cu); f_004c0b50();
    /* 0042315c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00423161: mov ebx, dword ptr [esi + 0x86c] */ r_ebx = R32((u32)(r_esi+0x86cu));
    /* 00423167: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042316a: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042316c: mov dword ptr [esi + 0x86c], ebx */ W32((u32)(r_esi+0x86cu), r_ebx);
    /* 00423172: mov eax, ebx */ r_eax = r_ebx;
    /* 00423174: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00423177: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0042317a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0042317c: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0042317f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00423181: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00423183: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00423185: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423188: jne 0x4234d6 */ if (!fZ) goto L_004234d6;
L_0042318e:; BB(0x0042318e);
    /* 0042318e: jmp 0x42350f */ goto L_0042350f;
L_004234d6:; BB(0x004234d6);
    /* 004234d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234db: ret 4 */ FN_RET(0x00423155); r_esp += 8; return;
L_0042350f:; BB(0x0042350f);
    /* 0042350f: mov ecx, esi */ r_ecx = r_esi;
    /* 00423511: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x423516u); f_0052126c();
    /* 00423516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423518: je 0x423523 */ if (fZ) goto L_00423523;
L_0042351a:; BB(0x0042351a);
    /* 0042351a: mov ecx, esi */ r_ecx = r_esi;
    /* 0042351c: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x423521u); f_005213d8();
    /* 00423521: jmp 0x42352f */ goto L_0042352f;
L_00423523:; BB(0x00423523);
    /* 00423523: push 0x8fbe04 */ { u32 v = 0x8fbe04u; r_esp -= 4; W32(r_esp, v); }
    /* 00423528: mov ecx, esi */ r_ecx = r_esi;
    /* 0042352a: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x42352fu); f_005213ec();
L_0042352f:; BB(0x0042352f);
    /* 0042352f: mov ecx, esi */ r_ecx = r_esi;
    /* 00423531: call 0x4235f8 */ r_esp -= 4; W32(r_esp, 0x423536u); f_004235f8();
    /* 00423536: mov ecx, esi */ r_ecx = r_esi;
    /* 00423538: call 0x41bf24 */ r_esp -= 4; W32(r_esp, 0x42353du); f_0041bf24();
    /* 0042353d: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423540: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423541: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423542: ret 4 */ FN_RET(0x00423155); r_esp += 8; return;
}

void f_00423193(void)
{
    FN_ENTER(0x00423193);
    /* 00423193: mov ecx, esi */ r_ecx = r_esi;
    /* 00423195: call 0x41f21c */ r_esp -= 4; W32(r_esp, 0x42319au); f_0041f21c();
    /* 0042319a: jmp 0x4234d6 */ goto L_004234d6;
L_004234d6:; BB(0x004234d6);
    /* 004234d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234db: ret 4 */ FN_RET(0x00423193); r_esp += 8; return;
}

void f_0042319f(void)
{
    FN_ENTER(0x0042319f);
    /* 0042319f: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 004231a5: mov dword ptr [esi + 0x3b8], eax */ W32((u32)(r_esi+0x3b8u), r_eax);
    /* 004231ab: mov ecx, esi */ r_ecx = r_esi;
    /* 004231ad: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4231b2u); f_004c0b50();
    /* 004231b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004231b4: je 0x4231bf */ if (fZ) goto L_004231bf;
L_004231b6:; BB(0x004231b6);
    /* 004231b6: mov ecx, esi */ r_ecx = r_esi;
    /* 004231b8: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4231bdu); f_005213d8();
    /* 004231bd: jmp 0x4231cb */ goto L_004231cb;
L_004231bf:; BB(0x004231bf);
    /* 004231bf: push 0x8fbe04 */ { u32 v = 0x8fbe04u; r_esp -= 4; W32(r_esp, v); }
    /* 004231c4: mov ecx, esi */ r_ecx = r_esi;
    /* 004231c6: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4231cbu); f_005213ec();
L_004231cb:; BB(0x004231cb);
    /* 004231cb: mov ecx, esi */ r_ecx = r_esi;
    /* 004231cd: call 0x4235f8 */ r_esp -= 4; W32(r_esp, 0x4231d2u); f_004235f8();
    /* 004231d2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004231d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004231d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004231d7: ret 4 */ FN_RET(0x0042319f); r_esp += 8; return;
}

void f_004231da(void)
{
    FN_ENTER(0x004231da);
    /* 004231da: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004231dc: mov eax, 1 */ r_eax = 0x1u;
    /* 004231e1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004231e8: mov ecx, esi */ r_ecx = r_esi;
    /* 004231ea: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4231f0u); call_ind(t); }
    /* 004231f0: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004231fa: mov ecx, esi */ r_ecx = r_esi;
    /* 004231fc: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x423201u); f_00419130();
    /* 00423201: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00423207: mov dword ptr [esi + 0x86c], 0 */ W32((u32)(r_esi+0x86cu), 0x0u);
    /* 00423211: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00423216: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0042321c: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x423221u); f_00420a44();
    /* 00423221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423223: jne 0x42324d */ if (!fZ) goto L_0042324d;
L_00423225:; BB(0x00423225);
    /* 00423225: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0042322a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0042322f: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x423234u); f_00782a34();
    /* 00423234: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423237: fld dword ptr [0x8fbbd8] */ FPUSH(R_F32((u32)(0x8fbbd8u)));
    /* 0042323d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042323f: fstp dword ptr [esi + 0x884] */ W_F32((u32)(r_esi+0x884u), ST(0)); FPOP();
    /* 00423245: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423248: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423249: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042324a: ret 4 */ FN_RET(0x004231da); r_esp += 8; return;
L_0042324d:; BB(0x0042324d);
    /* 0042324d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423250: jne 0x4234d6 */ if (!fZ) goto L_004234d6;
L_00423256:; BB(0x00423256);
    /* 00423256: mov edx, dword ptr [0xa43728] */ r_edx = R32((u32)(0xa43728u));
    /* 0042325c: fld dword ptr [0x8fbbdc] */ FPUSH(R_F32((u32)(0x8fbbdcu)));
    /* 00423262: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 00423265: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00423269: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0042326e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00423273: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00423277: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0042327b: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042327f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00423283: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00423287: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042328a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042328b: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x423290u); f_00782a34();
    /* 00423290: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423293: fld dword ptr [0x8fbbd8] */ FPUSH(R_F32((u32)(0x8fbbd8u)));
    /* 00423299: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042329b: fstp dword ptr [esi + 0x884] */ W_F32((u32)(r_esi+0x884u), ST(0)); FPOP();
    /* 004232a1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004232a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004232a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004232a6: ret 4 */ FN_RET(0x004231da); r_esp += 8; return;
L_004234d6:; BB(0x004234d6);
    /* 004234d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234db: ret 4 */ FN_RET(0x004231da); r_esp += 8; return;
}

void f_004232a9(void)
{
    FN_ENTER(0x004232a9);
    /* 004232a9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004232ab: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004232ad: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004232af: mov ecx, esi */ r_ecx = r_esi;
    /* 004232b1: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4232b7u); call_ind(t); }
    /* 004232b7: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004232bb: mov ebx, dword ptr [esi + 0x684] */ r_ebx = R32((u32)(r_esi+0x684u));
    /* 004232c1: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 004232c5: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004232ca: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 004232cf: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004232d4: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004232db: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004232e0: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004232e5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004232e9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004232ec: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 004232f2: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 004232f8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004232fc: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00423300: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x423305u); f_008003e0();
    /* 00423305: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423308: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042330a: ret 4 */ FN_RET(0x004232a9); r_esp += 8; return;
}

void f_0042330d(void)
{
    FN_ENTER(0x0042330d);
    /* 0042330d: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x423312u); f_00420a44();
    /* 00423312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423314: jne 0x423322 */ if (!fZ) goto L_00423322;
L_00423316:; BB(0x00423316);
    /* 00423316: fld dword ptr [0x8fbbd4] */ FPUSH(R_F32((u32)(0x8fbbd4u)));
    /* 0042331c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00423320: jmp 0x423339 */ goto L_00423339;
L_00423322:; BB(0x00423322);
    /* 00423322: fldz  */ FPUSH(0.0);
    /* 00423324: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00423328: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042332b: jne 0x423339 */ if (!fZ) goto L_00423339;
L_0042332d:; BB(0x0042332d);
    /* 0042332d: mov eax, dword ptr [0xa43728] */ r_eax = R32((u32)(0xa43728u));
    /* 00423332: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00423335: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_00423339:; BB(0x00423339);
    /* 00423339: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0042333d: fmul dword ptr [0x8fbbdc] */ ST(0) = ST(0) * R_F32((u32)(0x8fbbdcu));
    /* 00423343: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00423347: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0042334c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00423351: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00423355: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00423359: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042335d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00423361: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00423367: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0042336b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042336d: je 0x423381 */ if (fZ) goto L_00423381;
L_0042336f:; BB(0x0042336f);
    /* 0042336f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00423373: fmul dword ptr [0x8fbbcc] */ ST(0) = ST(0) * R_F32((u32)(0x8fbbccu));
    /* 00423379: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 0042337f: jmp 0x423391 */ goto L_00423391;
L_00423381:; BB(0x00423381);
    /* 00423381: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00423385: fmul dword ptr [0x8fbbc0] */ ST(0) = ST(0) * R_F32((u32)(0x8fbbc0u));
    /* 0042338b: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
L_00423391:; BB(0x00423391);
    /* 00423391: mov ecx, esi */ r_ecx = r_esi;
    /* 00423393: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x423398u); f_007aa094();
    /* 00423398: mov ecx, esi */ r_ecx = r_esi;
    /* 0042339a: call 0x41d3d0 */ r_esp -= 4; W32(r_esp, 0x42339fu); f_0041d3d0();
    /* 0042339f: mov ecx, esi */ r_ecx = r_esi;
    /* 004233a1: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4233a6u); f_00521410();
    /* 004233a6: mov ecx, esi */ r_ecx = r_esi;
    /* 004233a8: call 0x423028 */ r_esp -= 4; W32(r_esp, 0x4233adu); f_00423028();
    /* 004233ad: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004233b2: mov ecx, esi */ r_ecx = r_esi;
    /* 004233b4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4233b9u); f_007aaa30();
    /* 004233b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004233bb: je 0x4233c6 */ if (fZ) goto L_004233c6;
L_004233bd:; BB(0x004233bd);
    /* 004233bd: mov ecx, esi */ r_ecx = r_esi;
    /* 004233bf: call 0x41d504 */ r_esp -= 4; W32(r_esp, 0x4233c4u); f_0041d504();
    /* 004233c4: jmp 0x4233dd */ goto L_004233dd;
L_004233c6:; BB(0x004233c6);
    /* 004233c6: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004233cb: mov ecx, esi */ r_ecx = r_esi;
    /* 004233cd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4233d2u); f_007aaa30();
    /* 004233d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004233d4: je 0x4233dd */ if (fZ) goto L_004233dd;
L_004233d6:; BB(0x004233d6);
    /* 004233d6: mov ecx, esi */ r_ecx = r_esi;
    /* 004233d8: call 0x41d410 */ r_esp -= 4; W32(r_esp, 0x4233ddu); f_0041d410();
L_004233dd:; BB(0x004233dd);
    /* 004233dd: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 004233e3: fcom dword ptr [0x8fbbbc] */ fx_compare(ST(0), R_F32((u32)(0x8fbbbcu))); 
    /* 004233e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004233eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004233ec: jb 0x4234a3 */ if (fC) goto L_004234a3;
L_004233f2:; BB(0x004233f2);
    /* 004233f2: fcom dword ptr [0x8fbbb8] */ fx_compare(ST(0), R_F32((u32)(0x8fbbb8u))); 
    /* 004233f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004233fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004233fb: jae 0x423407 */ if (!fC) goto L_00423407;
L_004233fd:; BB(0x004233fd);
    /* 004233fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004233ff: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423402: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423404: ret 4 */ FN_RET(0x0042330d); r_esp += 8; return;
L_00423407:; BB(0x00423407);
    /* 00423407: fcom dword ptr [0x8fbbb4] */ fx_compare(ST(0), R_F32((u32)(0x8fbbb4u))); 
    /* 0042340d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042340f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00423410: jb 0x423484 */ if (fC) goto L_00423484;
L_00423412:; BB(0x00423412);
    /* 00423412: fcom dword ptr [0x8fbbb0] */ fx_compare(ST(0), R_F32((u32)(0x8fbbb0u))); 
    /* 00423418: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042341a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042341b: jb 0x423449 */ if (fC) goto L_00423449;
L_0042341d:; BB(0x0042341d);
    /* 0042341d: fcomp dword ptr [0x8fbbac] */ fx_compare(ST(0), R_F32((u32)(0x8fbbacu))); FPOP();
    /* 00423423: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00423425: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00423426: jb 0x4234d6 */ if (fC) goto L_004234d6;
L_0042342c:; BB(0x0042342c);
    /* 0042342c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042342f: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00423433: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00423437: mov ecx, esi */ r_ecx = r_esi;
    /* 00423439: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0042343c: call 0x521454 */ r_esp -= 4; W32(r_esp, 0x423441u); f_00521454();
    /* 00423441: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423444: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423445: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423446: ret 4 */ FN_RET(0x0042330d); r_esp += 8; return;
L_00423449:; BB(0x00423449);
    /* 00423449: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042344b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0042344e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x423453u); f_0082dcbc();
    /* 00423453: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00423457: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0042345a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x42345fu); f_0082ddd8();
    /* 0042345f: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423462: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00423466: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00423469: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0042346d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00423471: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00423475: mov ecx, esi */ r_ecx = r_esi;
    /* 00423477: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x42347cu); f_0052069c();
    /* 0042347c: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042347f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423480: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423481: ret 4 */ FN_RET(0x0042330d); r_esp += 8; return;
L_00423484:; BB(0x00423484);
    /* 00423484: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00423486: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423489: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0042348d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00423491: mov ecx, esi */ r_ecx = r_esi;
    /* 00423493: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00423496: call 0x521454 */ r_esp -= 4; W32(r_esp, 0x42349bu); f_00521454();
    /* 0042349b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042349e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042349f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234a0: ret 4 */ FN_RET(0x0042330d); r_esp += 8; return;
L_004234a3:; BB(0x004234a3);
    /* 004234a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004234a5: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004234a8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4234adu); f_0082dcbc();
    /* 004234ad: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004234b1: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004234b4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4234b9u); f_0082ddd8();
    /* 004234b9: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004234bc: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004234c0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004234c3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004234c7: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004234cb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004234cf: mov ecx, esi */ r_ecx = r_esi;
    /* 004234d1: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x4234d6u); f_0052069c();
L_004234d6:; BB(0x004234d6);
    /* 004234d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234db: ret 4 */ FN_RET(0x0042330d); r_esp += 8; return;
}

void f_004234d6(void)
{
    FN_ENTER(0x004234d6);
    /* 004234d6: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004234d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004234da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004234db: ret 4 */ FN_RET(0x004234d6); r_esp += 8; return;
}

void f_00423548(void) /* sub_423548 */
{
    FN_ENTER(0x00423548);
    /* 00423548: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423549: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042354c: mov edi, ecx */ r_edi = r_ecx;
    /* 0042354e: mov ecx, edi */ r_ecx = r_edi;
    /* 00423550: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00423553: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00423557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423558: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423559: call 0x4235b0 */ r_esp -= 4; W32(r_esp, 0x42355eu); f_004235b0();
    /* 0042355e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00423562: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 00423568: mov edx, dword ptr [edi + 0x3a0] */ r_edx = R32((u32)(r_edi+0x3a0u));
    /* 0042356e: mov edi, dword ptr [edi + 0x3a4] */ r_edi = R32((u32)(r_edi+0x3a4u));
    /* 00423574: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00423578: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0042357c: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00423580: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00423583: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x423588u); f_0082f9c4();
    /* 00423588: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0042358c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042358d: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x423592u); f_007828e4();
    /* 00423592: fcomp dword ptr [0xa43700] */ fx_compare(ST(0), R_F32((u32)(0xa43700u))); FPOP();
    /* 00423598: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042359a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0042359f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004235a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004235a2: jbe 0x4235a6 */ if ((fC||fZ)) goto L_004235a6;
L_004235a4:; BB(0x004235a4);
    /* 004235a4: mov ecx, edx */ r_ecx = r_edx;
L_004235a6:; BB(0x004235a6);
    /* 004235a6: mov eax, ecx */ r_eax = r_ecx;
    /* 004235a8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004235ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004235ac: ret  */ FN_RET(0x00423548); r_esp += 4; return;
}

void f_004235b0(void) /* sub_4235B0 */
{
    FN_ENTER(0x004235b0);
    /* 004235b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004235b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004235b3: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004235b6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4235bbu); f_0082dcbc();
    /* 004235bb: fld dword ptr [0xa436fc] */ FPUSH(R_F32((u32)(0xa436fcu)));
    /* 004235c1: fadd dword ptr [0x8fbba8] */ ST(0) = ST(0) + R_F32((u32)(0x8fbba8u));
    /* 004235c7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004235c9: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004235cc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004235d0: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004235d2: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004235d5: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4235dau); f_0082ddd8();
    /* 004235da: fld dword ptr [0xa436fc] */ FPUSH(R_F32((u32)(0xa436fcu)));
    /* 004235e0: fadd dword ptr [0x8fbba8] */ ST(0) = ST(0) + R_F32((u32)(0x8fbba8u));
    /* 004235e6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004235e8: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004235eb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004235ef: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004235f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004235f2: ret 8 */ FN_RET(0x004235b0); r_esp += 12; return;
}

void f_004235f8(void) /* sub_4235F8 */
{
    FN_ENTER(0x004235f8);
    /* 004235f8: mov eax, dword ptr [ecx + 0x39c] */ r_eax = R32((u32)(r_ecx+0x39cu));
    /* 004235fe: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 00423604: mov dword ptr [ecx + 0x698], eax */ W32((u32)(r_ecx+0x698u), r_eax);
    /* 0042360a: mov dword ptr [ecx + 0x69c], edx */ W32((u32)(r_ecx+0x69cu), r_edx);
    /* 00423610: ret  */ FN_RET(0x004235f8); r_esp += 4; return;
}

void f_00423614(void) /* sub_423614 */
{
    FN_ENTER(0x00423614);
    /* 00423614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423615: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00423618: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0042361a: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0042361e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00423621: ja 0x4237fa */ if ((!fC&&!fZ)) goto L_004237fa;
L_00423627:; BB(0x00423627);
    /* 00423627: mov eax, dword ptr [eax*4 + 0x8fb754] */ r_eax = R32((u32)(r_eax*4+0x8fb754u));
    /* 0042362e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004237fa:; BB(0x004237fa);
    /* 004237fa: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004237fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004237fe: ret 4 */ FN_RET(0x00423614); r_esp += 8; return;
}

void f_00423630(void)
{
    FN_ENTER(0x00423630);
    /* 00423630: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00423633: mov edx, dword ptr [ebp + 0x5e8] */ r_edx = R32((u32)(r_ebp+0x5e8u));
    /* 00423639: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042363b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042363c: mov word ptr [ebp + 0xb8], cx */ W16((u32)(r_ebp+0xb8u), (u16)r_ecx);
    /* 00423643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423644: mov dword ptr [ebp + 0x86c], ecx */ W32((u32)(r_ebp+0x86cu), r_ecx);
    /* 0042364a: mov dword ptr [ebp + 0x5e0], eax */ W32((u32)(r_ebp+0x5e0u), r_eax);
    /* 00423650: mov dword ptr [ebp + 0x5e4], edx */ W32((u32)(r_ebp+0x5e4u), r_edx);
    /* 00423656: add ebp, 0x644 */ {  u32 a = r_ebp; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042365c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042365d: push 0x314 */ { u32 v = 0x314u; r_esp -= 4; W32(r_esp, v); }
    /* 00423662: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x423667u); f_00814298();
    /* 00423667: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042366a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042366d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042366e: ret 4 */ FN_RET(0x00423630); r_esp += 8; return;
}

void f_00423671(void)
{
    FN_ENTER(0x00423671);
    /* 00423671: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00423677: mov eax, dword ptr [ebp + 0x6ec] */ r_eax = R32((u32)(r_ebp+0x6ecu));
    /* 0042367d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042367f: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00423682: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x423687u); f_004c6c54();
    /* 00423687: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423689: je 0x4236f1 */ if (fZ) goto L_004236f1;
L_0042368b:; BB(0x0042368b);
    /* 0042368b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042368d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042368f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00423692: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00423694: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42369au); call_ind(t); }
    /* 0042369a: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0042369e: mov byte ptr [esp + 0x28], 0x12 */ W8((u32)(r_esp+0x28u), 0x12u);
    /* 004236a3: mov edx, 3 */ r_edx = 0x3u;
    /* 004236a8: mov byte ptr [esp + 0x29], 5 */ W8((u32)(r_esp+0x29u), 0x5u);
    /* 004236ad: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 004236b2: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 004236b8: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 004236bd: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 004236c2: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004236c6: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004236cd: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004236d1: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 004236d7: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 004236dd: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004236e1: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004236e5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4236eau); f_008003e0();
    /* 004236ea: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004236ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004236ee: ret 4 */ FN_RET(0x00423671); r_esp += 8; return;
L_004236f1:; BB(0x004236f1);
    /* 004236f1: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004236f7: mov eax, dword ptr [ebp + 0x6ec] */ r_eax = R32((u32)(r_ebp+0x6ecu));
    /* 004236fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004236ff: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00423702: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x423707u); f_004c6c54();
    /* 00423707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423709: jne 0x423787 */ if (!fZ) goto L_00423787;
L_0042370b:; BB(0x0042370b);
    /* 0042370b: mov edx, dword ptr [ebp + 0x6ec] */ r_edx = R32((u32)(r_ebp+0x6ecu));
    /* 00423711: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00423714: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0042371a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042371c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042371d: jbe 0x4237fa */ if ((fC||fZ)) goto L_004237fa;
L_00423723:; BB(0x00423723);
    /* 00423723: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00423725: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00423727: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0042372a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0042372c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x423732u); call_ind(t); }
    /* 00423732: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00423736: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0042373a: mov edx, 0x18 */ r_edx = 0x18u;
    /* 0042373f: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00423744: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00423749: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 0042374f: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00423754: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00423759: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042375c: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 00423763: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00423767: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 0042376d: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 00423773: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00423777: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0042377b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x423780u); f_008003e0();
    /* 00423780: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423783: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423784: ret 4 */ FN_RET(0x00423671); r_esp += 8; return;
L_00423787:; BB(0x00423787);
    /* 00423787: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00423789: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042378b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0042378e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00423790: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x423796u); call_ind(t); }
    /* 00423796: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0042379a: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 0042379f: mov edx, 5 */ r_edx = 0x5u;
    /* 004237a4: mov byte ptr [esp + 0x15], dl */ W8((u32)(r_esp+0x15u), (u8)r_edx);
    /* 004237a8: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004237ad: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 004237b3: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004237b8: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004237bd: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004237c1: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004237c8: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004237cc: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 004237d2: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 004237d8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004237dc: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 004237e0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4237e5u); f_008003e0();
    /* 004237e5: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004237e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004237e9: ret 4 */ FN_RET(0x00423671); r_esp += 8; return;
L_004237fa:; BB(0x004237fa);
    /* 004237fa: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004237fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004237fe: ret 4 */ FN_RET(0x00423671); r_esp += 8; return;
}

void f_004237ec(void)
{
    FN_ENTER(0x004237ec);
    /* 004237ec: add dword ptr [ebp + 0x86c], 1 */ { u32 ad = (u32)(r_ebp+0x86cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004237f3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004237f5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4237fau); f_007aa094();
    /* 004237fa: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004237fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004237fe: ret 4 */ FN_RET(0x004237ec); r_esp += 8; return;
}

void f_004237fa(void)
{
    FN_ENTER(0x004237fa);
    /* 004237fa: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004237fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004237fe: ret 4 */ FN_RET(0x004237fa); r_esp += 8; return;
}

void f_00423804(void) /* sub_423804 */
{
    FN_ENTER(0x00423804);
    /* 00423804: mov eax, dword ptr [0xa43750] */ r_eax = R32((u32)(0xa43750u));
    /* 00423809: ret  */ FN_RET(0x00423804); r_esp += 4; return;
}

void f_0042380c(void) /* sub_42380C */
{
    FN_ENTER(0x0042380c);
    /* 0042380c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00423810: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00423814: mov ecx, dword ptr [0xa43750] */ r_ecx = R32((u32)(0xa43750u));
    /* 0042381a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042381c: jne 0x423850 */ if (!fZ) goto L_00423850;
L_0042381e:; BB(0x0042381e);
    /* 0042381e: mov ecx, dword ptr [0x9a3eb8] */ r_ecx = R32((u32)(0x9a3eb8u));
    /* 00423824: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00423826: mov ecx, dword ptr [0x9a3ebc] */ r_ecx = R32((u32)(0x9a3ebcu));
    /* 0042382c: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0042382f: mov ecx, dword ptr [0x9a3ec0] */ r_ecx = R32((u32)(0x9a3ec0u));
    /* 00423835: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00423838: mov eax, dword ptr [0x9a3eac] */ r_eax = R32((u32)(0x9a3eacu));
    /* 0042383d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0042383f: mov eax, dword ptr [0x9a3eb0] */ r_eax = R32((u32)(0x9a3eb0u));
    /* 00423844: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00423847: mov eax, dword ptr [0x9a3eb4] */ r_eax = R32((u32)(0x9a3eb4u));
    /* 0042384c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0042384f: ret  */ FN_RET(0x0042380c); r_esp += 4; return;
L_00423850:; BB(0x00423850);
    /* 00423850: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423852: call 0x423858 */ r_esp -= 4; W32(r_esp, 0x423857u); f_00423858();
    /* 00423857: ret  */ FN_RET(0x0042380c); r_esp += 4; return;
}

void f_00423858(void) /* sub_423858 */
{
    FN_ENTER(0x00423858);
    /* 00423858: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423859: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042385a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042385b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042385c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042385e: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00423862: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00423866: mov eax, dword ptr [0xa43750] */ r_eax = R32((u32)(0xa43750u));
    /* 0042386b: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00423872: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00423875: je 0x423a1a */ if (fZ) goto L_00423a1a;
L_0042387b:; BB(0x0042387b);
    /* 0042387b: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 00423881: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423884: jne 0x42388d */ if (!fZ) goto L_0042388d;
L_00423886:; BB(0x00423886);
    /* 00423886: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0042388b: jmp 0x42389b */ goto L_0042389b;
L_0042388d:; BB(0x0042388d);
    /* 0042388d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423890: jne 0x423899 */ if (!fZ) goto L_00423899;
L_00423892:; BB(0x00423892);
    /* 00423892: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00423897: jmp 0x42389b */ goto L_0042389b;
L_00423899:; BB(0x00423899);
    /* 00423899: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0042389b:; BB(0x0042389b);
    /* 0042389b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042389d: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004238a0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004238a3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004238a5: mov edi, dword ptr [eax + 0x9a3e88] */ r_edi = R32((u32)(r_eax+0x9a3e88u));
    /* 004238ab: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 004238ad: mov edi, dword ptr [eax + 0x9a3e8c] */ r_edi = R32((u32)(r_eax+0x9a3e8cu));
    /* 004238b3: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004238b6: mov edi, dword ptr [eax + 0x9a3e90] */ r_edi = R32((u32)(r_eax+0x9a3e90u));
    /* 004238bc: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004238bf: mov edi, dword ptr [eax + 0x9a3e64] */ r_edi = R32((u32)(r_eax+0x9a3e64u));
    /* 004238c5: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
    /* 004238c8: fld dword ptr [eax + 0x9a3e68] */ FPUSH(R_F32((u32)(r_eax+0x9a3e68u)));
    /* 004238ce: mov edi, dword ptr [eax + 0x9a3e68] */ r_edi = R32((u32)(r_eax+0x9a3e68u));
    /* 004238d4: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 004238d7: fld dword ptr [eax + 0x9a3e6c] */ FPUSH(R_F32((u32)(r_eax+0x9a3e6cu)));
    /* 004238dd: mov eax, dword ptr [eax + 0x9a3e6c] */ r_eax = R32((u32)(r_eax+0x9a3e6cu));
    /* 004238e3: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004238e6: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 004238ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004238ef: jne 0x423905 */ if (!fZ) goto L_00423905;
L_004238f1:; BB(0x004238f1);
    /* 004238f1: fld dword ptr [0x8fbba0] */ FPUSH(R_F32((u32)(0x8fbba0u)));
    /* 004238f7: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004238f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004238fb: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 004238fe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00423900: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00423902: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
L_00423905:; BB(0x00423905);
    /* 00423905: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00423907: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00423909: mov eax, dword ptr [ebx + 0x768] */ r_eax = R32((u32)(r_ebx+0x768u));
    /* 0042390f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00423911: je 0x42397f */ if (fZ) goto L_0042397f;
L_00423913:; BB(0x00423913);
    /* 00423913: movzx eax, word ptr [ebx + 0x76c] */ r_eax = (u32)R16((u32)(r_ebx+0x76cu));
    /* 0042391a: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00423920: jne 0x42397f */ if (!fZ) goto L_0042397f;
L_00423922:; BB(0x00423922);
    /* 00423922: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00423929: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042392c: je 0x423986 */ if (fZ) goto L_00423986;
L_0042392e:; BB(0x0042392e);
    /* 0042392e: mov eax, dword ptr [edx + ecx*4 + 0x9a3e34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x9a3e34u));
    /* 00423935: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00423937: mov ebx, dword ptr [edx + ecx*4 + 0x9a3e38] */ r_ebx = R32((u32)(r_edx+r_ecx*4+0x9a3e38u));
    /* 0042393e: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00423941: mov edi, dword ptr [edx + ecx*4 + 0x9a3e3c] */ r_edi = R32((u32)(r_edx+r_ecx*4+0x9a3e3cu));
    /* 00423948: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0042394b: mov eax, dword ptr [edx + ecx*4 + 0x9a3e04] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x9a3e04u));
    /* 00423952: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00423955: mov eax, dword ptr [edx + ecx*4 + 0x9a3e08] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x9a3e08u));
    /* 0042395c: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0042395f: mov edx, dword ptr [edx + ecx*4 + 0x9a3e0c] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x9a3e0cu));
    /* 00423966: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_00423969:; BB(0x00423969);
    /* 00423969: fld dword ptr [0x8fbb90] */ FPUSH(R_F32((u32)(0x8fbb90u)));
    /* 0042396f: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00423972: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00423974: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00423977: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0042397a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042397c: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
L_0042397f:; BB(0x0042397f);
    /* 0042397f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423980: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423981: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423982: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423983: ret 8 */ FN_RET(0x00423858); r_esp += 12; return;
L_00423986:; BB(0x00423986);
    /* 00423986: mov edx, dword ptr [0x9a3e58] */ r_edx = R32((u32)(0x9a3e58u));
    /* 0042398c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0042398e: fld dword ptr [0x9a3e5c] */ FPUSH(R_F32((u32)(0x9a3e5cu)));
    /* 00423994: mov edi, dword ptr [0x9a3e5c] */ r_edi = R32((u32)(0x9a3e5cu));
    /* 0042399a: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0042399d: mov eax, dword ptr [0x9a3e60] */ r_eax = R32((u32)(0x9a3e60u));
    /* 004239a2: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004239a5: fld dword ptr [ebx + 0x5e0] */ FPUSH(R_F32((u32)(r_ebx+0x5e0u)));
    /* 004239ab: fmul dword ptr [0x8fbb9c] */ ST(0) = ST(0) * R_F32((u32)(0x8fbb9cu));
    /* 004239b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004239b3: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 004239b6: mov eax, dword ptr [0x9a3e28] */ r_eax = R32((u32)(0x9a3e28u));
    /* 004239bb: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 004239be: fld dword ptr [0x9a3e2c] */ FPUSH(R_F32((u32)(0x9a3e2cu)));
    /* 004239c4: mov eax, dword ptr [0x9a3e2c] */ r_eax = R32((u32)(0x9a3e2cu));
    /* 004239c9: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 004239cc: mov eax, dword ptr [0x9a3e30] */ r_eax = R32((u32)(0x9a3e30u));
    /* 004239d1: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 004239d4: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 004239db: fadd dword ptr [ebx + 0x5e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x5e0u));
    /* 004239e1: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 004239e4: fcom dword ptr [0x9a3e28] */ fx_compare(ST(0), R_F32((u32)(0x9a3e28u))); 
    /* 004239ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004239ec: mov edx, dword ptr [0x9a3e28] */ r_edx = R32((u32)(0x9a3e28u));
    /* 004239f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004239f3: jbe 0x4239ff */ if ((fC||fZ)) goto L_004239ff;
L_004239f5:; BB(0x004239f5);
    /* 004239f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004239f7: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 004239fa: jmp 0x423969 */ goto L_00423969;
L_004239ff:; BB(0x004239ff);
    /* 004239ff: fcomp dword ptr [0x8fbba0] */ fx_compare(ST(0), R_F32((u32)(0x8fbba0u))); FPOP();
    /* 00423a05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00423a07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00423a08: jae 0x423969 */ if (!fC) goto L_00423969;
L_00423a0e:; BB(0x00423a0e);
    /* 00423a0e: mov dword ptr [ebp + 4], 0x3f800000 */ W32((u32)(r_ebp+0x4u), 0x3f800000u);
    /* 00423a15: jmp 0x423969 */ goto L_00423969;
L_00423a1a:; BB(0x00423a1a);
    /* 00423a1a: mov eax, dword ptr [0x9a3eb8] */ r_eax = R32((u32)(0x9a3eb8u));
    /* 00423a1f: mov edx, dword ptr [0x9a3ebc] */ r_edx = R32((u32)(0x9a3ebcu));
    /* 00423a25: mov ecx, dword ptr [0x9a3ec0] */ r_ecx = R32((u32)(0x9a3ec0u));
    /* 00423a2b: mov ebx, dword ptr [0x9a3eac] */ r_ebx = R32((u32)(0x9a3eacu));
    /* 00423a31: mov edi, dword ptr [0x9a3eb4] */ r_edi = R32((u32)(0x9a3eb4u));
    /* 00423a37: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00423a39: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00423a3c: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00423a3f: mov esi, dword ptr [0x9a3eb0] */ r_esi = R32((u32)(0x9a3eb0u));
    /* 00423a45: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 00423a48: mov dword ptr [ebp + 4], esi */ W32((u32)(r_ebp+0x4u), r_esi);
    /* 00423a4b: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00423a4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423a4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423a50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423a51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423a52: ret 8 */ FN_RET(0x00423858); r_esp += 12; return;
}

void f_00423a58(void) /* sub_423A58 */
{
    FN_ENTER(0x00423a58);
    /* 00423a58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423a59: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00423a5d: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00423a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423a62: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x423a67u); f_00786b3c();
    /* 00423a67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00423a68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00423a6a: je 0x423a74 */ if (fZ) goto L_00423a74;
L_00423a6c:; BB(0x00423a6c);
    /* 00423a6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423a6d: mov ecx, eax */ r_ecx = r_eax;
    /* 00423a6f: call 0x423a78 */ r_esp -= 4; W32(r_esp, 0x423a74u); f_00423a78();
L_00423a74:; BB(0x00423a74);
    /* 00423a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423a75: ret  */ FN_RET(0x00423a58); r_esp += 4; return;
}

void f_00423a78(void) /* sub_423A78 */
{
    FN_ENTER(0x00423a78);
    /* 00423a78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423a79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423a7a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00423a7c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00423a80: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00423a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423a85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00423a87: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x423a8cu); f_00520fcc();
    /* 00423a8c: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00423a90: mov dword ptr [ebp + 0x684], eax */ W32((u32)(r_ebp+0x684u), r_eax);
    /* 00423a96: movsx edx, word ptr [esi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00423a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423a9b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00423a9d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x423aa2u); f_0051f62c();
    /* 00423aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423aa3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423aa4: ret 4 */ FN_RET(0x00423a78); r_esp += 8; return;
}

void f_00423aa8(void) /* sub_423AA8 */
{
    FN_ENTER(0x00423aa8);
    /* 00423aa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423aa9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00423aad: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00423ab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423ab2: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x423ab7u); f_00786b3c();
    /* 00423ab7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00423ab8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00423aba: je 0x423ac4 */ if (fZ) goto L_00423ac4;
L_00423abc:; BB(0x00423abc);
    /* 00423abc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423abd: mov ecx, eax */ r_ecx = r_eax;
    /* 00423abf: call 0x423ac8 */ r_esp -= 4; W32(r_esp, 0x423ac4u); f_00423ac8();
L_00423ac4:; BB(0x00423ac4);
    /* 00423ac4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423ac5: ret  */ FN_RET(0x00423aa8); r_esp += 4; return;
}

void f_00423ac8(void) /* sub_423AC8 */
{
    FN_ENTER(0x00423ac8);
    /* 00423ac8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423ac9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423aca: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00423acc: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00423ad0: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00423ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423ad5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00423ad7: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x423adcu); f_00520fcc();
    /* 00423adc: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 00423ae0: mov dword ptr [ebp + 0x684], eax */ W32((u32)(r_ebp+0x684u), r_eax);
    /* 00423ae6: movsx eax, word ptr [esi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00423aea: cmp ax, word ptr [ebp + 0x32e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0x32eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00423af1: je 0x423afb */ if (fZ) goto L_00423afb;
L_00423af3:; BB(0x00423af3);
    /* 00423af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423af4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00423af6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x423afbu); f_0051f62c();
L_00423afb:; BB(0x00423afb);
    /* 00423afb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423afc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423afd: ret 4 */ FN_RET(0x00423ac8); r_esp += 8; return;
}

void f_00423b00(void) /* sub_423B00 */
{
    FN_ENTER(0x00423b00);
    /* 00423b00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423b01: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00423b05: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00423b09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423b0a: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x423b0fu); f_00786b3c();
    /* 00423b0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00423b10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00423b12: je 0x423b1c */ if (fZ) goto L_00423b1c;
L_00423b14:; BB(0x00423b14);
    /* 00423b14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423b15: mov ecx, eax */ r_ecx = r_eax;
    /* 00423b17: call 0x423b20 */ r_esp -= 4; W32(r_esp, 0x423b1cu); f_00423b20();
L_00423b1c:; BB(0x00423b1c);
    /* 00423b1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423b1d: ret  */ FN_RET(0x00423b00); r_esp += 4; return;
}

void f_00423b20(void) /* sub_423B20 */
{
    FN_ENTER(0x00423b20);
    /* 00423b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423b21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423b22: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00423b24: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00423b28: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00423b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423b2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00423b2f: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x423b34u); f_00520fcc();
    /* 00423b34: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00423b36: movsx eax, word ptr [ebp + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00423b3a: mov dword ptr [ebx + 0x684], eax */ W32((u32)(r_ebx+0x684u), r_eax);
    /* 00423b40: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00423b43: mov dword ptr [ebx + 0x6a0], edx */ W32((u32)(r_ebx+0x6a0u), r_edx);
    /* 00423b49: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00423b4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00423b4e: mov dword ptr [ebx + 0x6a4], eax */ W32((u32)(r_ebx+0x6a4u), r_eax);
    /* 00423b54: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00423b58: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00423b5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423b5b: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x423b61u); call_ind(t); }
    /* 00423b61: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00423b65: cmp ax, word ptr [ebx + 0x32e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x32eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00423b6c: je 0x423b76 */ if (fZ) goto L_00423b76;
L_00423b6e:; BB(0x00423b6e);
    /* 00423b6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423b6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00423b71: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x423b76u); f_0051f62c();
L_00423b76:; BB(0x00423b76);
    /* 00423b76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423b77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423b78: ret 4 */ FN_RET(0x00423b20); r_esp += 8; return;
}

void f_00423b7c(void) /* sub_423B7C */
{
    FN_ENTER(0x00423b7c);
    /* 00423b7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423b7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423b7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423b7f: mov esi, ecx */ r_esi = r_ecx;
    /* 00423b81: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x423b86u); f_004f7c84();
    /* 00423b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423b88: jne 0x423e70 */ if (!fZ) goto L_00423e70;
L_00423b8e:; BB(0x00423b8e);
    /* 00423b8e: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00423b94: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00423b96: jne 0x423e58 */ if (!fZ) goto L_00423e58;
L_00423b9c:; BB(0x00423b9c);
    /* 00423b9c: mov eax, dword ptr [esi + 0x768] */ r_eax = R32((u32)(r_esi+0x768u));
    /* 00423ba2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423ba4: je 0x423bb6 */ if (fZ) goto L_00423bb6;
L_00423ba6:; BB(0x00423ba6);
    /* 00423ba6: mov ecx, esi */ r_ecx = r_esi;
    /* 00423ba8: call 0x423ef8 */ r_esp -= 4; W32(r_esp, 0x423badu); f_00423ef8();
    /* 00423bad: add dword ptr [esi + 0x770], 1 */ { u32 ad = (u32)(r_esi+0x770u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00423bb4: jmp 0x423bfe */ goto L_00423bfe;
L_00423bb6:; BB(0x00423bb6);
    /* 00423bb6: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x423bbbu); f_00694cc8();
    /* 00423bbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423bbd: je 0x423bfe */ if (fZ) goto L_00423bfe;
L_00423bbf:; BB(0x00423bbf);
    /* 00423bbf: mov eax, dword ptr [esi + 0x6e8] */ r_eax = R32((u32)(r_esi+0x6e8u));
    /* 00423bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423bc7: jne 0x423bfe */ if (!fZ) goto L_00423bfe;
L_00423bc9:; BB(0x00423bc9);
    /* 00423bc9: mov ebx, dword ptr [esi + 0x3e8] */ r_ebx = R32((u32)(r_esi+0x3e8u));
    /* 00423bcf: mov ecx, esi */ r_ecx = r_esi;
    /* 00423bd1: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x423bd6u); f_00520db0();
    /* 00423bd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423bd8: je 0x423bf4 */ if (fZ) goto L_00423bf4;
L_00423bda:; BB(0x00423bda);
    /* 00423bda: mov dword ptr [esi + 0x3e8], 0 */ W32((u32)(r_esi+0x3e8u), 0x0u);
    /* 00423be4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423be6: je 0x423bfe */ if (fZ) goto L_00423bfe;
L_00423be8:; BB(0x00423be8);
    /* 00423be8: mov dword ptr [esi + 0x8c0], 1 */ W32((u32)(r_esi+0x8c0u), 0x1u);
    /* 00423bf2: jmp 0x423bfe */ goto L_00423bfe;
L_00423bf4:; BB(0x00423bf4);
    /* 00423bf4: mov dword ptr [esi + 0x3e8], 1 */ W32((u32)(r_esi+0x3e8u), 0x1u);
L_00423bfe:; BB(0x00423bfe);
    /* 00423bfe: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x423c03u); f_00520db8();
    /* 00423c03: mov ebx, eax */ r_ebx = r_eax;
    /* 00423c05: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423c07: mov ecx, esi */ r_ecx = r_esi;
    /* 00423c09: call dword ptr [edx + 0xac] */ { u32 t = R32((u32)(r_edx+0xacu)); r_esp -= 4; W32(r_esp, 0x423c0fu); call_ind(t); }
    /* 00423c0f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423c11: mov ecx, esi */ r_ecx = r_esi;
    /* 00423c13: call dword ptr [edx + 0xb0] */ { u32 t = R32((u32)(r_edx+0xb0u)); r_esp -= 4; W32(r_esp, 0x423c19u); call_ind(t); }
    /* 00423c19: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423c1b: jne 0x423dd0 */ if (!fZ) goto L_00423dd0;
L_00423c21:; BB(0x00423c21);
    /* 00423c21: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423c28: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423c2b: je 0x423ee4 */ if (fZ) goto L_00423ee4;
L_00423c31:; BB(0x00423c31);
    /* 00423c31: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423c34: je 0x423ee4 */ if (fZ) goto L_00423ee4;
L_00423c3a:; BB(0x00423c3a);
    /* 00423c3a: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 00423c3d: and edi, 0xfffff7ff */ {  u32 a = r_edi; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00423c43: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
L_00423c46:; BB(0x00423c46);
    /* 00423c46: mov edi, dword ptr [esi + 0x768] */ r_edi = R32((u32)(r_esi+0x768u));
    /* 00423c4c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423c4e: je 0x423d4e */ if (fZ) goto L_00423d4e;
L_00423c54:; BB(0x00423c54);
    /* 00423c54: movzx edx, word ptr [esi + 0x76c] */ r_edx = (u32)R16((u32)(r_esi+0x76cu));
    /* 00423c5b: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423c61: jne 0x423ce9 */ if (!fZ) goto L_00423ce9;
L_00423c67:; BB(0x00423c67);
    /* 00423c67: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423c69: mov ecx, esi */ r_ecx = r_esi;
    /* 00423c6b: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x423c71u); call_ind(t); }
    /* 00423c71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423c73: je 0x423ca2 */ if (fZ) goto L_00423ca2;
L_00423c75:; BB(0x00423c75);
    /* 00423c75: mov edx, dword ptr [esi + 0x684] */ r_edx = R32((u32)(r_esi+0x684u));
    /* 00423c7b: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423c7e: jge 0x423ca2 */ if ((fS==fO)) goto L_00423ca2;
L_00423c80:; BB(0x00423c80);
    /* 00423c80: movsx edi, word ptr [esi + 0x68a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x68au));
    /* 00423c87: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00423c8e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423c90: mov ecx, esi */ r_ecx = r_esi;
    /* 00423c92: jg 0x423c96 */ if ((!fZ&&fS==fO)) goto L_00423c96;
L_00423c94:; BB(0x00423c94);
    /* 00423c94: mov edi, edx */ r_edi = r_edx;
L_00423c96:; BB(0x00423c96);
    /* 00423c96: mov word ptr [esi + 0x334], di */ W16((u32)(r_esi+0x334u), (u16)r_edi);
    /* 00423c9d: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x423ca2u); f_0051f81c();
L_00423ca2:; BB(0x00423ca2);
    /* 00423ca2: mov edx, dword ptr [0xa43778] */ r_edx = R32((u32)(0xa43778u));
    /* 00423ca8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423caa: jne 0x423cb5 */ if (!fZ) goto L_00423cb5;
L_00423cac:; BB(0x00423cac);
    /* 00423cac: mov ecx, esi */ r_ecx = r_esi;
    /* 00423cae: call 0x424330 */ r_esp -= 4; W32(r_esp, 0x423cb3u); f_00424330();
    /* 00423cb3: jmp 0x423cbc */ goto L_00423cbc;
L_00423cb5:; BB(0x00423cb5);
    /* 00423cb5: mov ecx, esi */ r_ecx = r_esi;
    /* 00423cb7: call 0x424208 */ r_esp -= 4; W32(r_esp, 0x423cbcu); f_00424208();
L_00423cbc:; BB(0x00423cbc);
    /* 00423cbc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00423cbe: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423cc0: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423cc7: mov ecx, esi */ r_ecx = r_esi;
    /* 00423cc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423cca: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423cd0u); call_ind(t); }
    /* 00423cd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423cd2: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423cd4: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423cdb: mov ecx, esi */ r_ecx = r_esi;
    /* 00423cdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423cde: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423ce4u); call_ind(t); }
    /* 00423ce4: jmp 0x423dd0 */ goto L_00423dd0;
L_00423ce9:; BB(0x00423ce9);
    /* 00423ce9: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423ceb: mov ecx, esi */ r_ecx = r_esi;
    /* 00423ced: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x423cf3u); call_ind(t); }
    /* 00423cf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423cf5: je 0x423d24 */ if (fZ) goto L_00423d24;
L_00423cf7:; BB(0x00423cf7);
    /* 00423cf7: mov edx, dword ptr [esi + 0x684] */ r_edx = R32((u32)(r_esi+0x684u));
    /* 00423cfd: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423d00: jge 0x423d24 */ if ((fS==fO)) goto L_00423d24;
L_00423d02:; BB(0x00423d02);
    /* 00423d02: movsx edi, word ptr [esi + 0x68a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x68au));
    /* 00423d09: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00423d10: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423d12: mov ecx, esi */ r_ecx = r_esi;
    /* 00423d14: jg 0x423d18 */ if ((!fZ&&fS==fO)) goto L_00423d18;
L_00423d16:; BB(0x00423d16);
    /* 00423d16: mov edi, edx */ r_edi = r_edx;
L_00423d18:; BB(0x00423d18);
    /* 00423d18: mov word ptr [esi + 0x334], di */ W16((u32)(r_esi+0x334u), (u16)r_edi);
    /* 00423d1f: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x423d24u); f_0051f81c();
L_00423d24:; BB(0x00423d24);
    /* 00423d24: mov edx, dword ptr [0xa43778] */ r_edx = R32((u32)(0xa43778u));
    /* 00423d2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423d2c: jne 0x423d35 */ if (!fZ) goto L_00423d35;
L_00423d2e:; BB(0x00423d2e);
    /* 00423d2e: mov ecx, esi */ r_ecx = r_esi;
    /* 00423d30: call 0x424330 */ r_esp -= 4; W32(r_esp, 0x423d35u); f_00424330();
L_00423d35:; BB(0x00423d35);
    /* 00423d35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423d37: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423d39: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423d40: mov ecx, esi */ r_ecx = r_esi;
    /* 00423d42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423d43: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423d49u); call_ind(t); }
    /* 00423d49: jmp 0x423dd0 */ goto L_00423dd0;
L_00423d4e:; BB(0x00423d4e);
    /* 00423d4e: mov edi, dword ptr [esi + 0x3e8] */ r_edi = R32((u32)(r_esi+0x3e8u));
    /* 00423d54: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423d57: je 0x423e90 */ if (fZ) goto L_00423e90;
L_00423d5d:; BB(0x00423d5d);
    /* 00423d5d: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423d60: je 0x423e7e */ if (fZ) goto L_00423e7e;
L_00423d66:; BB(0x00423d66);
    /* 00423d66: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423d68: mov ecx, esi */ r_ecx = r_esi;
    /* 00423d6a: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x423d70u); call_ind(t); }
    /* 00423d70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423d72: je 0x423da1 */ if (fZ) goto L_00423da1;
L_00423d74:; BB(0x00423d74);
    /* 00423d74: mov edx, dword ptr [esi + 0x684] */ r_edx = R32((u32)(r_esi+0x684u));
    /* 00423d7a: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423d7d: jge 0x423da1 */ if ((fS==fO)) goto L_00423da1;
L_00423d7f:; BB(0x00423d7f);
    /* 00423d7f: movsx edi, word ptr [esi + 0x68a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x68au));
    /* 00423d86: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00423d8d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423d8f: mov ecx, esi */ r_ecx = r_esi;
    /* 00423d91: jg 0x423d95 */ if ((!fZ&&fS==fO)) goto L_00423d95;
L_00423d93:; BB(0x00423d93);
    /* 00423d93: mov edi, edx */ r_edi = r_edx;
L_00423d95:; BB(0x00423d95);
    /* 00423d95: mov word ptr [esi + 0x334], di */ W16((u32)(r_esi+0x334u), (u16)r_edi);
    /* 00423d9c: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x423da1u); f_0051f81c();
L_00423da1:; BB(0x00423da1);
    /* 00423da1: mov ecx, esi */ r_ecx = r_esi;
    /* 00423da3: call 0x423f74 */ r_esp -= 4; W32(r_esp, 0x423da8u); f_00423f74();
L_00423da8:; BB(0x00423da8);
    /* 00423da8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00423daa: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423dac: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423db3: mov ecx, esi */ r_ecx = r_esi;
    /* 00423db5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423db6: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423dbcu); call_ind(t); }
    /* 00423dbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423dbe: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423dc0: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423dc7: mov ecx, esi */ r_ecx = r_esi;
    /* 00423dc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423dca: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423dd0u); call_ind(t); }
L_00423dd0:; BB(0x00423dd0);
    /* 00423dd0: mov ecx, esi */ r_ecx = r_esi;
    /* 00423dd2: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x423dd7u); f_0051f604();
    /* 00423dd7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423dd9: mov ecx, esi */ r_ecx = r_esi;
    /* 00423ddb: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x423de1u); call_ind(t); }
    /* 00423de1: mov ecx, esi */ r_ecx = r_esi;
    /* 00423de3: call 0x424580 */ r_esp -= 4; W32(r_esp, 0x423de8u); f_00424580();
    /* 00423de8: mov ecx, esi */ r_ecx = r_esi;
    /* 00423dea: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x423defu); f_006401f0();
    /* 00423def: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00423df2: mov edx, 1 */ r_edx = 0x1u;
    /* 00423df7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423df8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423df9: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00423dfe: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00423e03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423e04: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x423e09u); f_0080575c();
    /* 00423e09: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423e0c: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 00423e12: mov dword ptr [esi + 0x650], edx */ W32((u32)(r_esi+0x650u), r_edx);
    /* 00423e18: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00423e1e: mov dword ptr [esi + 0x654], edx */ W32((u32)(r_esi+0x654u), r_edx);
    /* 00423e24: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 00423e2a: mov dword ptr [esi + 0x658], edx */ W32((u32)(r_esi+0x658u), r_edx);
    /* 00423e30: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423e32: jne 0x423e3f */ if (!fZ) goto L_00423e3f;
L_00423e34:; BB(0x00423e34);
    /* 00423e34: lea ecx, [esi + 0x3cc] */ r_ecx = (u32)(r_esi+0x3ccu);
    /* 00423e3a: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x423e3fu); f_00817574();
L_00423e3f:; BB(0x00423e3f);
    /* 00423e3f: push 0x3ecccccd */ { u32 v = 0x3ecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00423e44: add esi, 0x644 */ {  u32 a = r_esi; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00423e4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423e4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423e4c: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x423e51u); f_00520dc0();
    /* 00423e51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423e54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423e55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423e56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423e57: ret  */ FN_RET(0x00423b7c); r_esp += 4; return;
L_00423e58:; BB(0x00423e58);
    /* 00423e58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423e59: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x423e5eu); f_008113e4();
    /* 00423e5e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00423e62: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00423e67: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00423e6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00423e6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423e6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423e6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423e6f: ret  */ FN_RET(0x00423b7c); r_esp += 4; return;
L_00423e70:; BB(0x00423e70);
    /* 00423e70: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00423e72: mov ecx, esi */ r_ecx = r_esi;
    /* 00423e74: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x423e7au); call_ind(t); }
    /* 00423e7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423e7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423e7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423e7d: ret  */ FN_RET(0x00423b7c); r_esp += 4; return;
L_00423e7e:; BB(0x00423e7e);
    /* 00423e7e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00423e80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423e81: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423e83: mov ecx, esi */ r_ecx = r_esi;
    /* 00423e85: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423e8bu); call_ind(t); }
    /* 00423e8b: jmp 0x423da8 */ goto L_00423da8;
L_00423e90:; BB(0x00423e90);
    /* 00423e90: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423e92: mov ecx, esi */ r_ecx = r_esi;
    /* 00423e94: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x423e9au); call_ind(t); }
    /* 00423e9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423e9c: je 0x423ecb */ if (fZ) goto L_00423ecb;
L_00423e9e:; BB(0x00423e9e);
    /* 00423e9e: mov edx, dword ptr [esi + 0x684] */ r_edx = R32((u32)(r_esi+0x684u));
    /* 00423ea4: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423ea7: jge 0x423ecb */ if ((fS==fO)) goto L_00423ecb;
L_00423ea9:; BB(0x00423ea9);
    /* 00423ea9: movsx edi, word ptr [esi + 0x68a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x68au));
    /* 00423eb0: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00423eb7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423eb9: mov ecx, esi */ r_ecx = r_esi;
    /* 00423ebb: jg 0x423ebf */ if ((!fZ&&fS==fO)) goto L_00423ebf;
L_00423ebd:; BB(0x00423ebd);
    /* 00423ebd: mov edi, edx */ r_edi = r_edx;
L_00423ebf:; BB(0x00423ebf);
    /* 00423ebf: mov word ptr [esi + 0x334], di */ W16((u32)(r_esi+0x334u), (u16)r_edi);
    /* 00423ec6: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x423ecbu); f_0051f81c();
L_00423ecb:; BB(0x00423ecb);
    /* 00423ecb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423ecd: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423ecf: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423ed6: mov ecx, esi */ r_ecx = r_esi;
    /* 00423ed8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423ed9: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423edfu); call_ind(t); }
    /* 00423edf: jmp 0x423dd0 */ goto L_00423dd0;
L_00423ee4:; BB(0x00423ee4);
    /* 00423ee4: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 00423ee7: or edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00423eed: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 00423ef0: jmp 0x423c46 */ goto L_00423c46;
}

void f_00423ca0(void)
{
    FN_ENTER(0x00423ca0);
    /* 00423ca0: str word ptr [ebx - 0x5bc887eb] */ UNSUP(0x00423ca0, "str word ptr [ebx - 0x5bc887eb]");
    /* 00423ca7: add byte ptr [ebp - 0x74f68a2e], al */ { u32 ad = (u32)(r_ebp+0x8b0975d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00423cad: into  */ UNSUP(0x00423cad, "into ");
    /* 00423cae: call 0x424330 */ r_esp -= 4; W32(r_esp, 0x423cb3u); f_00424330();
    /* 00423cb3: jmp 0x423cbc */ goto L_00423cbc;
L_00423cbc:; BB(0x00423cbc);
    /* 00423cbc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00423cbe: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423cc0: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423cc7: mov ecx, esi */ r_ecx = r_esi;
    /* 00423cc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423cca: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423cd0u); call_ind(t); }
    /* 00423cd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423cd2: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00423cd4: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423cdb: mov ecx, esi */ r_ecx = r_esi;
    /* 00423cdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423cde: call dword ptr [edi + 0x164] */ { u32 t = R32((u32)(r_edi+0x164u)); r_esp -= 4; W32(r_esp, 0x423ce4u); call_ind(t); }
    /* 00423ce4: jmp 0x423dd0 */ goto L_00423dd0;
L_00423dd0:; BB(0x00423dd0);
    /* 00423dd0: mov ecx, esi */ r_ecx = r_esi;
    /* 00423dd2: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x423dd7u); f_0051f604();
    /* 00423dd7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423dd9: mov ecx, esi */ r_ecx = r_esi;
    /* 00423ddb: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x423de1u); call_ind(t); }
    /* 00423de1: mov ecx, esi */ r_ecx = r_esi;
    /* 00423de3: call 0x424580 */ r_esp -= 4; W32(r_esp, 0x423de8u); f_00424580();
    /* 00423de8: mov ecx, esi */ r_ecx = r_esi;
    /* 00423dea: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x423defu); f_006401f0();
    /* 00423def: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00423df2: mov edx, 1 */ r_edx = 0x1u;
    /* 00423df7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423df8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423df9: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00423dfe: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00423e03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423e04: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x423e09u); f_0080575c();
    /* 00423e09: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423e0c: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 00423e12: mov dword ptr [esi + 0x650], edx */ W32((u32)(r_esi+0x650u), r_edx);
    /* 00423e18: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00423e1e: mov dword ptr [esi + 0x654], edx */ W32((u32)(r_esi+0x654u), r_edx);
    /* 00423e24: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 00423e2a: mov dword ptr [esi + 0x658], edx */ W32((u32)(r_esi+0x658u), r_edx);
    /* 00423e30: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423e32: jne 0x423e3f */ if (!fZ) goto L_00423e3f;
L_00423e34:; BB(0x00423e34);
    /* 00423e34: lea ecx, [esi + 0x3cc] */ r_ecx = (u32)(r_esi+0x3ccu);
    /* 00423e3a: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x423e3fu); f_00817574();
L_00423e3f:; BB(0x00423e3f);
    /* 00423e3f: push 0x3ecccccd */ { u32 v = 0x3ecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00423e44: add esi, 0x644 */ {  u32 a = r_esi; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00423e4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423e4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423e4c: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x423e51u); f_00520dc0();
    /* 00423e51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423e54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423e55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423e56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423e57: ret  */ FN_RET(0x00423ca0); r_esp += 4; return;
}

void f_00423ef8(void) /* sub_423EF8 */
{
    FN_ENTER(0x00423ef8);
    /* 00423ef8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00423ef9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00423efa: mov edi, ecx */ r_edi = r_ecx;
    /* 00423efc: movzx eax, word ptr [edi + 0x76c] */ r_eax = (u32)R16((u32)(r_edi+0x76cu));
    /* 00423f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423f04: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x423f09u); f_0068d5a8();
    /* 00423f09: mov ebx, eax */ r_ebx = r_eax;
    /* 00423f0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423f0e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00423f10: je 0x423f64 */ if (fZ) goto L_00423f64;
L_00423f12:; BB(0x00423f12);
    /* 00423f12: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 00423f18: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00423f1e: jne 0x423f64 */ if (!fZ) goto L_00423f64;
L_00423f20:; BB(0x00423f20);
    /* 00423f20: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00423f22: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x423f27u); f_00685550();
    /* 00423f27: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00423f2a: mov dword ptr [ebx + 0x720], 0x14 */ W32((u32)(r_ebx+0x720u), 0x14u);
    /* 00423f34: and edx, 0xffefffdf */ {  u32 a = r_edx; u32 b = 0xffefffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00423f3a: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00423f3d: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00423f40: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00423f43: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00423f46: fsub dword ptr [0x8fbb90] */ ST(0) = ST(0) - R_F32((u32)(0x8fbb90u));
    /* 00423f4c: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00423f4f: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00423f52: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00423f55: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 00423f58: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00423f5b: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 00423f5e: mov dword ptr [ebx + 0x60], edi */ W32((u32)(r_ebx+0x60u), r_edi);
    /* 00423f61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423f62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423f63: ret  */ FN_RET(0x00423ef8); r_esp += 4; return;
L_00423f64:; BB(0x00423f64);
    /* 00423f64: mov dword ptr [0xa43778], 0 */ W32((u32)(0xa43778u), 0x0u);
    /* 00423f6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00423f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00423f70: ret  */ FN_RET(0x00423ef8); r_esp += 4; return;
}

void f_00423f74(void) /* sub_423F74 */
{
    FN_ENTER(0x00423f74);
    /* 00423f74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00423f75: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00423f78: mov esi, ecx */ r_esi = r_ecx;
    /* 00423f7a: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 00423f80: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423f83: jge 0x423fb2 */ if ((fS==fO)) goto L_00423fb2;
L_00423f85:; BB(0x00423f85);
    /* 00423f85: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00423f8b: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423f90: jne 0x423fca */ if (!fZ) goto L_00423fca;
L_00423f92:; BB(0x00423f92);
    /* 00423f92: mov ecx, esi */ r_ecx = r_esi;
    /* 00423f94: call 0x42093c */ r_esp -= 4; W32(r_esp, 0x423f99u); f_0042093c();
    /* 00423f99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423f9b: je 0x423fa2 */ if (fZ) goto L_00423fa2;
L_00423f9d:; BB(0x00423f9d);
    /* 00423f9d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423fa0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423fa1: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
L_00423fa2:; BB(0x00423fa2);
    /* 00423fa2: mov ecx, esi */ r_ecx = r_esi;
    /* 00423fa4: call 0x424110 */ r_esp -= 4; W32(r_esp, 0x423fa9u); f_00424110();
    /* 00423fa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423fab: je 0x423fca */ if (fZ) goto L_00423fca;
L_00423fad:; BB(0x00423fad);
    /* 00423fad: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423fb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423fb1: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
L_00423fb2:; BB(0x00423fb2);
    /* 00423fb2: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00423fb8: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423fbd: jne 0x423fca */ if (!fZ) goto L_00423fca;
L_00423fbf:; BB(0x00423fbf);
    /* 00423fbf: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 00423fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00423fc8: jle 0x424028 */ if ((fZ||fS!=fO)) goto L_00424028;
L_00423fca:; BB(0x00423fca);
    /* 00423fca: mov eax, dword ptr [0xa4377c] */ r_eax = R32((u32)(0xa4377cu));
    /* 00423fcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423fd1: jne 0x42400f */ if (!fZ) goto L_0042400f;
L_00423fd3:; BB(0x00423fd3);
    /* 00423fd3: mov eax, dword ptr [esi + 0x768] */ r_eax = R32((u32)(r_esi+0x768u));
    /* 00423fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423fdb: je 0x423ff6 */ if (fZ) goto L_00423ff6;
L_00423fdd:; BB(0x00423fdd);
    /* 00423fdd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00423fdf: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423fe1: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00423fe8: mov ecx, esi */ r_ecx = r_esi;
    /* 00423fea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423feb: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x423ff1u); call_ind(t); }
    /* 00423ff1: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00423ff4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00423ff5: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
L_00423ff6:; BB(0x00423ff6);
    /* 00423ff6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00423ff8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00423ffa: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00424001: mov ecx, esi */ r_ecx = r_esi;
    /* 00424003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424004: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x42400au); call_ind(t); }
    /* 0042400a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042400d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042400e: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
L_0042400f:; BB(0x0042400f);
    /* 0042400f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00424011: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00424013: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0042401a: mov ecx, esi */ r_ecx = r_esi;
    /* 0042401c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042401d: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x424023u); call_ind(t); }
    /* 00424023: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00424026: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424027: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
L_00424028:; BB(0x00424028);
    /* 00424028: mov eax, dword ptr [esi + 0x3ec] */ r_eax = R32((u32)(r_esi+0x3ecu));
    /* 0042402e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424031: jne 0x4240ad */ if (!fZ) goto L_004240ad;
L_00424033:; BB(0x00424033);
    /* 00424033: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00424038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042403a: je 0x42409f */ if (fZ) goto L_0042409f;
L_0042403c:; BB(0x0042403c);
    /* 0042403c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042403e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00424040: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00424042: mov ecx, esi */ r_ecx = r_esi;
    /* 00424044: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42404au); call_ind(t); }
    /* 0042404a: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0042404e: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 00424053: mov edx, 0xc */ r_edx = 0xcu;
    /* 00424058: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 0042405d: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00424062: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 00424068: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0042406d: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 00424072: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00424076: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0042407d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00424081: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 00424087: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0042408d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00424091: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00424095: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42409au); f_008003e0();
    /* 0042409a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042409d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042409e: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
L_0042409f:; BB(0x0042409f);
    /* 0042409f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004240a1: mov ecx, esi */ r_ecx = r_esi;
    /* 004240a3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4240a8u); f_0051f62c();
    /* 004240a8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004240ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004240ac: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
L_004240ad:; BB(0x004240ad);
    /* 004240ad: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004240af: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004240b1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004240b3: mov ecx, esi */ r_ecx = r_esi;
    /* 004240b5: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4240bbu); call_ind(t); }
    /* 004240bb: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004240bf: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 004240c3: mov edx, 0x15 */ r_edx = 0x15u;
    /* 004240c8: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 004240cd: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004240d2: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 004240d8: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004240dd: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004240e2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004240e5: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004240ec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004240f0: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 004240f6: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 004240fc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00424100: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00424104: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x424109u); f_008003e0();
    /* 00424109: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042410c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042410d: ret  */ FN_RET(0x00423f74); r_esp += 4; return;
}

