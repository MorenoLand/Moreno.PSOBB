#include "protos.h"

void f_00789044(void) /* sub_789044 */
{
    FN_ENTER(0x00789044);
    /* 00789044: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789047: movzx ecx, byte ptr [esp + 0x1c] */ r_ecx = (u32)R8((u32)(r_esp+0x1cu));
    /* 0078904c: mov edx, dword ptr [0xa9c484] */ r_edx = R32((u32)(0xa9c484u));
    /* 00789052: fld dword ptr [edx + ecx*8 - 0x100] */ FPUSH(R_F32((u32)(r_edx+r_ecx*8+0xffffff00u)));
    /* 00789059: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078905c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00789060: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00789065: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00789069: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078906d: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00789071: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00789074: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00789079: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078907c: ret  */ FN_RET(0x00789044); r_esp += 4; return;
}

void f_00789080(void) /* sub_789080 */
{
    FN_ENTER(0x00789080);
    /* 00789080: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789083: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00789087: fld dword ptr [0x97a7d0] */ FPUSH(R_F32((u32)(0x97a7d0u)));
    /* 0078908d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078908f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789091: je 0x789158 */ if (fZ) goto L_00789158;
L_00789097:; BB(0x00789097);
    /* 00789097: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0078909a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078909c: je 0x7890f5 */ if (fZ) goto L_007890f5;
L_0078909e:; BB(0x0078909e);
    /* 0078909e: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
L_007890a2:; BB(0x007890a2);
    /* 007890a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007890a5: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007890a8: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007890ab: je 0x789137 */ if (fZ) goto L_00789137;
L_007890b1:; BB(0x007890b1);
    /* 007890b1: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007890b4: jne 0x7890bb */ if (!fZ) goto L_007890bb;
L_007890b6:; BB(0x007890b6);
    /* 007890b6: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007890b9: jmp 0x7890ea */ goto L_007890ea;
L_007890bb:; BB(0x007890bb);
    /* 007890bb: mov ebx, dword ptr [0xa9c484] */ r_ebx = R32((u32)(0xa9c484u));
    /* 007890c1: fld dword ptr [ebx + eax*8 - 0x100] */ FPUSH(R_F32((u32)(r_ebx+r_eax*8+0xffffff00u)));
    /* 007890c8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007890cb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007890cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007890d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007890d8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007890dc: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007890e0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007890e3: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 007890e8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007890ea:; BB(0x007890ea);
    /* 007890ea: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 007890ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007890ef: jne 0x7890a2 */ if (!fZ) goto L_007890a2;
L_007890f1:; BB(0x007890f1);
    /* 007890f1: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_007890f5:; BB(0x007890f5);
    /* 007890f5: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007890f9: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007890fd: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00789100: fadd dword ptr [edx*4 + 0x97a758] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97a758u));
    /* 00789107: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00789109: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078910b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078910c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078910e: ja 0x789112 */ if ((!fC&&!fZ)) goto L_00789112;
L_00789110:; BB(0x00789110);
    /* 00789110: fst st(1) */ ST(1) = ST(0);
L_00789112:; BB(0x00789112);
    /* 00789112: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00789114: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00789117: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078911b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00789120: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00789124: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00789128: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078912c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0078912f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00789133: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789136: ret  */ FN_RET(0x00789080); r_esp += 4; return;
L_00789137:; BB(0x00789137);
    /* 00789137: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0078913b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0078913f: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00789142: fadd dword ptr [edx*4 + 0x97a758] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97a758u));
    /* 00789149: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0078914b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078914d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078914f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00789150: jbe 0x789154 */ if ((fC||fZ)) goto L_00789154;
L_00789152:; BB(0x00789152);
    /* 00789152: fst st(1) */ ST(1) = ST(0);
L_00789154:; BB(0x00789154);
    /* 00789154: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00789156: jmp 0x7890ea */ goto L_007890ea;
L_00789158:; BB(0x00789158);
    /* 00789158: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078915a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078915c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078915f: ret  */ FN_RET(0x00789080); r_esp += 4; return;
}

void f_00789160(void) /* sub_789160 */
{
    FN_ENTER(0x00789160);
    /* 00789160: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789163: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00789167: fld dword ptr [0x97a7cc] */ FPUSH(R_F32((u32)(0x97a7ccu)));
    /* 0078916d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078916f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789171: je 0x789239 */ if (fZ) goto L_00789239;
L_00789177:; BB(0x00789177);
    /* 00789177: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0078917a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078917c: je 0x7891d8 */ if (fZ) goto L_007891d8;
L_0078917e:; BB(0x0078917e);
    /* 0078917e: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 00789181: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
L_00789185:; BB(0x00789185);
    /* 00789185: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00789188: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078918b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078918e: je 0x789218 */ if (fZ) goto L_00789218;
L_00789194:; BB(0x00789194);
    /* 00789194: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789197: jne 0x78919e */ if (!fZ) goto L_0078919e;
L_00789199:; BB(0x00789199);
    /* 00789199: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078919c: jmp 0x7891cd */ goto L_007891cd;
L_0078919e:; BB(0x0078919e);
    /* 0078919e: mov ebx, dword ptr [0xa9c484] */ r_ebx = R32((u32)(0xa9c484u));
    /* 007891a4: fld dword ptr [ebx + eax*8 - 0x100] */ FPUSH(R_F32((u32)(r_ebx+r_eax*8+0xffffff00u)));
    /* 007891ab: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007891ae: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007891b2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007891b7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007891bb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007891bf: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007891c3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007891c6: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 007891cb: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007891cd:; BB(0x007891cd);
    /* 007891cd: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 007891d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007891d2: jne 0x789185 */ if (!fZ) goto L_00789185;
L_007891d4:; BB(0x007891d4);
    /* 007891d4: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_007891d8:; BB(0x007891d8);
    /* 007891d8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007891dc: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007891e0: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007891e3: fadd dword ptr [edx*4 + 0x97a750] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97a750u));
    /* 007891ea: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007891ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007891ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007891ef: jbe 0x7891f3 */ if ((fC||fZ)) goto L_007891f3;
L_007891f1:; BB(0x007891f1);
    /* 007891f1: fst st(1) */ ST(1) = ST(0);
L_007891f3:; BB(0x007891f3);
    /* 007891f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007891f5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007891f8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007891fc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00789201: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00789205: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00789209: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078920d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00789210: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00789214:; BB(0x00789214);
    /* 00789214: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789217: ret  */ FN_RET(0x00789160); r_esp += 4; return;
L_00789218:; BB(0x00789218);
    /* 00789218: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0078921c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00789220: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00789223: fadd dword ptr [edx*4 + 0x97a750] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x97a750u));
    /* 0078922a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0078922c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078922e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078922f: jbe 0x789233 */ if ((fC||fZ)) goto L_00789233;
L_00789231:; BB(0x00789231);
    /* 00789231: fst st(1) */ ST(1) = ST(0);
L_00789233:; BB(0x00789233);
    /* 00789233: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00789235: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00789237: jmp 0x7891cd */ goto L_007891cd;
L_00789239:; BB(0x00789239);
    /* 00789239: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078923b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078923d: jmp 0x789214 */ goto L_00789214;
}

void f_00789240(void) /* sub_789240 */
{
    FN_ENTER(0x00789240);
    /* 00789240: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 00789245: ret  */ FN_RET(0x00789240); r_esp += 4; return;
}

void f_00789248(void) /* sub_789248 */
{
    FN_ENTER(0x00789248);
    /* 00789248: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00789249: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078924c: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 00789250: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00789254: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00789258: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x78925du); f_007a9044();
    /* 0078925d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00789262: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x789267u); f_0082bb30();
    /* 00789267: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0078926d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x789272u); f_00829cc8();
    /* 00789272: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00789276: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00789278: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x78927du); f_0082bb60();
    /* 0078927d: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00789280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789282: je 0x789398 */ if (fZ) goto L_00789398;
L_00789288:; BB(0x00789288);
    /* 00789288: mov edx, dword ptr [0xa9c484] */ r_edx = R32((u32)(0xa9c484u));
    /* 0078928e: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00789292: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00789296: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
L_0078929a:; BB(0x0078929a);
    /* 0078929a: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0078929e: fld dword ptr [0x97a7c8] */ FPUSH(R_F32((u32)(0x97a7c8u)));
    /* 007892a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007892a6: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007892a9: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 007892ac: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007892b0: fld dword ptr [edx + esi*8 - 0xfc] */ FPUSH(R_F32((u32)(r_edx+r_esi*8+0xffffff04u)));
    /* 007892b7: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 007892bb: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 007892bf: mov ecx, esi */ r_ecx = r_esi;
    /* 007892c1: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007892c3: fld dword ptr [edx + esi*8 - 0x100] */ FPUSH(R_F32((u32)(r_edx+r_esi*8+0xffffff00u)));
    /* 007892ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007892cc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007892d0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007892d2: fld dword ptr [0x97a7c4] */ FPUSH(R_F32((u32)(0x97a7c4u)));
    /* 007892d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007892da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007892de: fld dword ptr [0x97a7c4] */ FPUSH(R_F32((u32)(0x97a7c4u)));
    /* 007892e4: fld dword ptr [0x97a7c4] */ FPUSH(R_F32((u32)(0x97a7c4u)));
    /* 007892ea: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007892ed: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007892f0: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 007892f4: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 007892f8: fdivr st(2), st(0) */ ST(2) = ST(0) / ST(2);
    /* 007892fa: mov ecx, esi */ r_ecx = r_esi;
    /* 007892fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007892fe: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00789302: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00789308: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078930b: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0078930f: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00789313: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 00789315: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789317: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0078931b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0078931d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078931f: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00789321: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789323: fadd dword ptr [edx + esi*8 - 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_esi*8+0xffffff00u));
    /* 0078932a: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0078932c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078932e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00789332: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00789336: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078933a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0078933e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x789343u); f_0082b440();
    /* 00789343: mov edx, dword ptr [0xa9c484] */ r_edx = R32((u32)(0xa9c484u));
    /* 00789349: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0078934d: fld dword ptr [edx + esi*8 - 0x100] */ FPUSH(R_F32((u32)(r_edx+r_esi*8+0xffffff00u)));
    /* 00789354: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00789358: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0078935d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00789362: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00789366: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0078936a: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078936e: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00789372: movzx eax, byte ptr [esp + 0x40] */ r_eax = (u32)R8((u32)(r_esp+0x40u));
    /* 00789377: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0078937b: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0078937f: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00789382: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00789384: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00789388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078938a: jne 0x78929a */ if (!fZ) goto L_0078929a;
L_00789390:; BB(0x00789390);
    /* 00789390: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 00789394: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
L_00789398:; BB(0x00789398);
    /* 00789398: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x78939du); f_004ac444();
    /* 0078939d: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007893a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007893a1: ret  */ FN_RET(0x00789248); r_esp += 4; return;
}

void f_007893a4(void) /* sub_7893A4 */
{
    FN_ENTER(0x007893a4);
    /* 007893a4: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 007893a9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007893ad: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007893b0: fld dword ptr [0x97a7b8] */ FPUSH(R_F32((u32)(0x97a7b8u)));
    /* 007893b6: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 007893b9: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 007893bb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007893be: mov ecx, eax */ r_ecx = r_eax;
    /* 007893c0: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007893c3: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007893c6: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 007893c9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007893cc: mov ecx, eax */ r_ecx = r_eax;
    /* 007893ce: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007893d4: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007893d8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007893dc: mov ecx, dword ptr [0xa9c484] */ r_ecx = R32((u32)(0xa9c484u));
    /* 007893e2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007893e4: fadd dword ptr [ecx + eax*8 - 0xfc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*8+0xffffff04u));
    /* 007893eb: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 007893ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007893f0: fadd dword ptr [ecx + eax*8 - 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*8+0xffffff00u));
    /* 007893f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007893f9: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 007893fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007893fd: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00789400: fld dword ptr [0x97a7b4] */ FPUSH(R_F32((u32)(0x97a7b4u)));
    /* 00789406: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00789408: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0078940b: fld dword ptr [0x97a7b4] */ FPUSH(R_F32((u32)(0x97a7b4u)));
    /* 00789411: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00789413: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00789416: fld dword ptr [0x97a7b4] */ FPUSH(R_F32((u32)(0x97a7b4u)));
    /* 0078941c: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0078941e: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 00789421: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00789423: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00789425: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00789427: fld dword ptr [ecx + eax*8 - 0x100] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0xffffff00u)));
    /* 0078942e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00789430: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00789433: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789435: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00789437: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00789439: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0078943c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078943f: ret  */ FN_RET(0x007893a4); r_esp += 4; return;
}

void f_00789440(void) /* sub_789440 */
{
    FN_ENTER(0x00789440);
    /* 00789440: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00789441: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789444: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00789448: movsx ebx, word ptr [esp + 0x68] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x68u));
    /* 0078944d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00789451: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x789456u); f_007a9044();
    /* 00789456: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078945b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x789460u); f_0082bb30();
    /* 00789460: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 00789466: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78946bu); f_00829cc8();
    /* 0078946b: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0078946f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00789471: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x789476u); f_0082bb60();
    /* 00789476: movzx edx, word ptr [esp + 0x6c] */ r_edx = (u32)R16((u32)(r_esp+0x6cu));
    /* 0078947b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078947d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078947f: jle 0x7895c9 */ if ((fZ||fS!=fO)) goto L_007895c9;
L_00789485:; BB(0x00789485);
    /* 00789485: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 00789489: movzx esi, word ptr [esp + 0x6c] */ r_esi = (u32)R16((u32)(r_esp+0x6cu));
    /* 0078948e: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 00789492: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00789496: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 0078949a: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0078949c: mov ebx, eax */ r_ebx = r_eax;
L_0078949e:; BB(0x0078949e);
    /* 0078949e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 007894a3: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007894a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007894a7: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007894ab: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007894ae: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007894b1: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007894b3: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007894b6: mov ecx, dword ptr [0xa9c484] */ r_ecx = R32((u32)(0xa9c484u));
    /* 007894bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007894be: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007894c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007894c2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007894c4: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007894c6: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007894c9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 007894cc: fld dword ptr [ecx + edx*8 - 0x100] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xffffff00u)));
    /* 007894d3: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007894d7: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007894dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007894e1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007894e5: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 007894e9: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 007894ed: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007894f1: movzx eax, byte ptr [esp + 0x30] */ r_eax = (u32)R8((u32)(r_esp+0x30u));
    /* 007894f6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007894fa: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 007894fe: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00789502: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00789504: fld dword ptr [0x97a7b0] */ FPUSH(R_F32((u32)(0x97a7b0u)));
    /* 0078950a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078950c: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 00789510: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00789513: fld dword ptr [ecx + edx*8 - 0xfc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xffffff04u)));
    /* 0078951a: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0078951e: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00789522: mov eax, edx */ r_eax = r_edx;
    /* 00789524: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00789526: fld dword ptr [ecx + edx*8 - 0x100] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xffffff00u)));
    /* 0078952d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078952f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00789533: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00789535: fld dword ptr [0x97a7ac] */ FPUSH(R_F32((u32)(0x97a7acu)));
    /* 0078953b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078953d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00789541: fld dword ptr [0x97a7ac] */ FPUSH(R_F32((u32)(0x97a7acu)));
    /* 00789547: fld dword ptr [0x97a7ac] */ FPUSH(R_F32((u32)(0x97a7acu)));
    /* 0078954d: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00789550: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00789553: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00789557: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0078955b: fdivr st(2), st(0) */ ST(2) = ST(0) / ST(2);
    /* 0078955d: mov eax, edx */ r_eax = r_edx;
    /* 0078955f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00789561: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00789565: and eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0078956a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0078956e: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00789572: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 00789574: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00789576: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00789578: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 0078957a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078957c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00789580: fadd dword ptr [ecx + edx*8 - 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edx*8+0xffffff00u));
    /* 00789587: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00789589: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078958b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0078958f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00789593: push dword ptr [esp + 0x60] */ { u32 v = R32((u32)(r_esp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789597: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0078959b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7895a0u); f_0082b440();
    /* 007895a0: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 007895a5: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007895a7: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 007895aa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007895ad: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007895b0: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007895b2: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
    /* 007895b5: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007895b7: jl 0x78949e */ if ((fS!=fO)) goto L_0078949e;
L_007895bd:; BB(0x007895bd);
    /* 007895bd: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 007895c1: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007895c5: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
L_007895c9:; BB(0x007895c9);
    /* 007895c9: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7895ceu); f_004ac444();
    /* 007895ce: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007895d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007895d2: ret  */ FN_RET(0x00789440); r_esp += 4; return;
}

void f_007895d4(void) /* sub_7895D4 */
{
    FN_ENTER(0x007895d4);
    /* 007895d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007895d5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007895d8: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 007895dc: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7895e1u); f_007a9044();
    /* 007895e1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007895e6: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7895ebu); f_0082bb30();
    /* 007895eb: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 007895f1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7895f6u); f_00829cc8();
    /* 007895f6: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 007895fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007895fc: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x789601u); f_0082bb60();
    /* 00789601: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00789605: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00789609: fld dword ptr [0x97a7a8] */ FPUSH(R_F32((u32)(0x97a7a8u)));
    /* 0078960f: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 00789613: fld dword ptr [0x97a7a4] */ FPUSH(R_F32((u32)(0x97a7a4u)));
    /* 00789619: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0078961d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078961f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00789623: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00789627: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078962a: mov dword ptr [esp + 0x10], 0x3b800000 */ W32((u32)(r_esp+0x10u), 0x3b800000u);
    /* 00789632: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00789636: mov dword ptr [esp + 0x14], 0x3f6c0000 */ W32((u32)(r_esp+0x14u), 0x3f6c0000u);
    /* 0078963e: mov dword ptr [esp + 0x18], 0x3edc0000 */ W32((u32)(r_esp+0x18u), 0x3edc0000u);
    /* 00789646: mov dword ptr [esp + 0x1c], 0x3f780000 */ W32((u32)(r_esp+0x1cu), 0x3f780000u);
    /* 0078964e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078964f: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00789653: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x789658u); f_0082b440();
    /* 00789658: fld dword ptr [0x97a790] */ FPUSH(R_F32((u32)(0x97a790u)));
    /* 0078965e: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00789661: fld dword ptr [0x97a78c] */ FPUSH(R_F32((u32)(0x97a78cu)));
    /* 00789667: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0078966b: fld dword ptr [0x97a788] */ FPUSH(R_F32((u32)(0x97a788u)));
    /* 00789671: fld dword ptr [0x97a784] */ FPUSH(R_F32((u32)(0x97a784u)));
    /* 00789677: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00789679: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0078967c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078967e: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00789682: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789684: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00789686: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789688: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0078968c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078968e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00789692: mov dword ptr [esp + 0x10], 0x3ee40000 */ W32((u32)(r_esp+0x10u), 0x3ee40000u);
    /* 0078969a: mov dword ptr [esp + 0x14], 0x3f6d0000 */ W32((u32)(r_esp+0x14u), 0x3f6d0000u);
    /* 007896a2: mov dword ptr [esp + 0x18], 0x3f010000 */ W32((u32)(r_esp+0x18u), 0x3f010000u);
    /* 007896aa: mov dword ptr [esp + 0x1c], 0x3f7b0000 */ W32((u32)(r_esp+0x1cu), 0x3f7b0000u);
    /* 007896b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007896b3: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007896b7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7896bcu); f_0082b440();
    /* 007896bc: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7896c1u); f_004ac444();
    /* 007896c1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007896c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007896c5: ret  */ FN_RET(0x007895d4); r_esp += 4; return;
}

void f_007896c8(void) /* sub_7896C8 */
{
    FN_ENTER(0x007896c8);
    /* 007896c8: mov dword ptr [0xa9c484], 0x9fce80 */ W32((u32)(0xa9c484u), 0x9fce80u);
    /* 007896d2: ret  */ FN_RET(0x007896c8); r_esp += 4; return;
}

void f_007896d4(void) /* sub_7896D4 */
{
    FN_ENTER(0x007896d4);
    /* 007896d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007896d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007896d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007896d9: call 0x7896f8 */ r_esp -= 4; W32(r_esp, 0x7896deu); f_007896f8();
    /* 007896de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007896e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007896e4: jne 0x7896ea */ if (!fZ) goto L_007896ea;
L_007896e6:; BB(0x007896e6);
    /* 007896e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007896e7: ret 4 */ FN_RET(0x007896d4); r_esp += 8; return;
L_007896ea:; BB(0x007896ea);
    /* 007896ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007896eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7896f0u); f_005c2f74();
    /* 007896f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007896f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007896f2: ret 4 */ FN_RET(0x007896d4); r_esp += 8; return;
}

void f_007896f8(void) /* sub_7896F8 */
{
    FN_ENTER(0x007896f8);
    /* 007896f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007896f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007896fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007896fd: push 0x8f4a9c */ { u32 v = 0x8f4a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00789702: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00789708: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789709: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00789710: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789713: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00789716: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00789719: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078971c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078971f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00789722: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00789725: mov dword ptr [ecx], 0xb44f28 */ W32((u32)(r_ecx), 0xb44f28u);
    /* 0078972b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00789732: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x789737u); f_008171e8();
    /* 00789737: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078973a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00789741: mov esp, ebp */ r_esp = r_ebp;
    /* 00789743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789744: ret  */ FN_RET(0x007896f8); r_esp += 4; return;
}

void f_00789748(void) /* sub_789748 */
{
    FN_ENTER(0x00789748);
    /* 00789748: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078974c: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789751: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00789754: ret 4 */ FN_RET(0x00789748); r_esp += 8; return;
}

void f_00789758(void) /* sub_789758 */
{
    FN_ENTER(0x00789758);
    /* 00789758: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789759: mov ebp, esp */ r_ebp = r_esp;
    /* 0078975b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078975d: push 0x8f4ab8 */ { u32 v = 0x8f4ab8u; r_esp -= 4; W32(r_esp, v); }
    /* 00789762: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00789768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789769: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00789770: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789773: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00789776: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00789779: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0078977c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0078977f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00789782: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789788: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078978b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0078978e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00789791: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00789794: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00789797: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078979a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0078979d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007897a0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7897a5u); f_008193cc();
    /* 007897a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007897ac: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007897af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007897b2: mov dword ptr [edx], 0xb44f28 */ W32((u32)(r_edx), 0xb44f28u);
    /* 007897b8: mov eax, dword ptr [0x9fd180] */ r_eax = R32((u32)(0x9fd180u));
    /* 007897bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007897be: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007897c1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7897c6u); f_0068d5a8();
    /* 007897c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007897c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007897c9: je 0x789835 */ if (fZ) goto L_00789835;
L_007897cb:; BB(0x007897cb);
    /* 007897cb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007897ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007897d1: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 007897d4: mov ebx, dword ptr [eax + 0x920] */ r_ebx = R32((u32)(r_eax+0x920u));
    /* 007897da: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 007897dd: mov esi, dword ptr [eax + 0x924] */ r_esi = R32((u32)(r_eax+0x924u));
    /* 007897e3: mov dword ptr [ecx + 0x20], esi */ W32((u32)(r_ecx+0x20u), r_esi);
    /* 007897e6: mov edi, dword ptr [eax + 0x928] */ r_edi = R32((u32)(r_eax+0x928u));
    /* 007897ec: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 007897ef: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 007897f5: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 007897f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007897fb: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00789802: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00789807: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0078980a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078980d: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00789810: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00789813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789814: call 0x789858 */ r_esp -= 4; W32(r_esp, 0x789819u); f_00789858();
    /* 00789819: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0078981c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0078981f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00789822: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00789825: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00789828: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078982f: mov esp, ebp */ r_esp = r_ebp;
    /* 00789831: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789832: ret 0x10 */ FN_RET(0x00789758); r_esp += 20; return;
L_00789835:; BB(0x00789835);
    /* 00789835: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00789838: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0078983c: or edx, 0xffff0011 */ {  u32 a = r_edx; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789842: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00789846: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00789849: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00789850: mov esp, ebp */ r_esp = r_ebp;
    /* 00789852: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789853: ret 0x10 */ FN_RET(0x00789758); r_esp += 20; return;
}

void f_00789858(void) /* sub_789858 */
{
    FN_ENTER(0x00789858);
    /* 00789858: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00789859: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078985a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078985d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078985f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00789863: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789865: je 0x78989c */ if (fZ) goto L_0078989c;
L_00789867:; BB(0x00789867);
    /* 00789867: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00789869: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078986a: lea esi, [ebp + 0x40] */ r_esi = (u32)(r_ebp+0x40u);
    /* 0078986d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078986e: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x789873u); f_00857dec();
    /* 00789873: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00789874: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00789876: mov word ptr [ebp + 0x7e], ax */ W16((u32)(r_ebp+0x7eu), (u16)r_eax);
    /* 0078987a: call 0x789080 */ r_esp -= 4; W32(r_esp, 0x78987fu); f_00789080();
    /* 0078987f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00789883: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00789887: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078988a: fadd dword ptr [eax*4 + 0x97a7f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97a7f8u));
    /* 00789891: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00789894: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789897: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789898: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00789899: ret 4 */ FN_RET(0x00789858); r_esp += 8; return;
L_0078989c:; BB(0x0078989c);
    /* 0078989c: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 007898a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007898a5: mov word ptr [ebp + 0x40], ax */ W16((u32)(r_ebp+0x40u), (u16)r_eax);
    /* 007898a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007898ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007898ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007898ae: ret 4 */ FN_RET(0x00789858); r_esp += 8; return;
}

void f_00789880(void)
{
    FN_ENTER(0x00789880);
    /* 00789880: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00789881: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00789883: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00789887: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078988a: fadd dword ptr [eax*4 + 0x97a7f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x97a7f8u));
    /* 00789891: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00789894: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789897: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789898: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00789899: ret 4 */ FN_RET(0x00789880); r_esp += 8; return;
}

void f_007898b4(void) /* sub_7898B4 */
{
    FN_ENTER(0x007898b4);
    /* 007898b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007898b5: mov edi, ecx */ r_edi = r_ecx;
    /* 007898b7: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 007898ba: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7898bfu); f_0068d5a8();
    /* 007898bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007898c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007898c2: je 0x78991c */ if (fZ) goto L_0078991c;
L_007898c4:; BB(0x007898c4);
    /* 007898c4: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007898c7: cmp edx, dword ptr [eax + 0xeb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xeb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007898cd: jne 0x78990d */ if (!fZ) goto L_0078990d;
L_007898cf:; BB(0x007898cf);
    /* 007898cf: mov edx, dword ptr [eax + 0x920] */ r_edx = R32((u32)(r_eax+0x920u));
    /* 007898d5: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 007898d8: mov edx, dword ptr [eax + 0x924] */ r_edx = R32((u32)(r_eax+0x924u));
    /* 007898de: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 007898e1: mov eax, dword ptr [eax + 0x928] */ r_eax = R32((u32)(r_eax+0x928u));
    /* 007898e7: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 007898ea: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 007898ed: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 007898f0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007898f3: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 007898f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007898f8: jle 0x78990b */ if ((fZ||fS!=fO)) goto L_0078990b;
L_007898fa:; BB(0x007898fa);
    /* 007898fa: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007898fc: jl 0x78990b */ if ((fS!=fO)) goto L_0078990b;
L_007898fe:; BB(0x007898fe);
    /* 007898fe: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00789902: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789907: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_0078990b:; BB(0x0078990b);
    /* 0078990b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078990c: ret  */ FN_RET(0x007898b4); r_esp += 4; return;
L_0078990d:; BB(0x0078990d);
    /* 0078990d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00789911: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789916: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0078991a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078991b: ret  */ FN_RET(0x007898b4); r_esp += 4; return;
L_0078991c:; BB(0x0078991c);
    /* 0078991c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00789920: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789925: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00789929: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078992a: ret  */ FN_RET(0x007898b4); r_esp += 4; return;
}

void f_0078992c(void) /* sub_78992C */
{
    FN_ENTER(0x0078992c);
    /* 0078992c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078992d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078992e: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789931: mov edi, ecx */ r_edi = r_ecx;
    /* 00789933: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00789937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789938: mov ecx, edi */ r_ecx = r_edi;
    /* 0078993a: call 0x789a24 */ r_esp -= 4; W32(r_esp, 0x78993fu); f_00789a24();
    /* 0078993f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789941: je 0x789a1b */ if (fZ) goto L_00789a1b;
L_00789947:; BB(0x00789947);
    /* 00789947: fild dword ptr [edi + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x2cu)));
    /* 0078994a: mov esi, dword ptr [edi + 0x2c] */ r_esi = R32((u32)(r_edi+0x2cu));
    /* 0078994d: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00789950: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00789952: jle 0x789972 */ if ((fZ||fS!=fO)) goto L_00789972;
L_00789954:; BB(0x00789954);
    /* 00789954: lea edx, [ecx - 6] */ r_edx = (u32)(r_ecx+0xfffffffau);
    /* 00789957: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0078995b: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0078995f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00789961: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00789963: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00789964: jae 0x789972 */ if (!fC) goto L_00789972;
L_00789966:; BB(0x00789966);
    /* 00789966: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00789968: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0078996a: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0078996e: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
L_00789972:; BB(0x00789972);
    /* 00789972: fcom dword ptr [0x97a828] */ fx_compare(ST(0), R_F32((u32)(0x97a828u))); 
    /* 00789978: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078997a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078997b: jae 0x7899b0 */ if (!fC) goto L_007899b0;
L_0078997d:; BB(0x0078997d);
    /* 0078997d: fmul dword ptr [0x97a824] */ ST(0) = ST(0) * R_F32((u32)(0x97a824u));
    /* 00789983: fmul dword ptr [0x97a820] */ ST(0) = ST(0) * R_F32((u32)(0x97a820u));
    /* 00789989: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 0078998d: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00789992: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00789997: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0078999b: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0078999f: fistp qword ptr [esp + 0x3c] */ W64((u32)(r_esp+0x3cu), (u64)fx_int64(ST(0))); FPOP();
    /* 007899a3: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007899a7: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 007899ab: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 007899ae: jmp 0x7899b7 */ goto L_007899b7;
L_007899b0:; BB(0x007899b0);
    /* 007899b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007899b2: mov esi, 0xff000000 */ r_esi = 0xff000000u;
L_007899b7:; BB(0x007899b7);
    /* 007899b7: or esi, dword ptr [edi + 0x3c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x3cu)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007899ba: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x7899bfu); f_007bb6d0();
    /* 007899bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007899c0: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x7899c5u); f_007199e0();
    /* 007899c5: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007899c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007899cc: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007899d0: fadd dword ptr [0x97a818] */ ST(0) = ST(0) + R_F32((u32)(0x97a818u));
    /* 007899d6: fdivr dword ptr [0x97a81c] */ ST(0) = R_F32((u32)(0x97a81cu)) / ST(0);
    /* 007899dc: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007899e0: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x7899e5u); f_007a93d8();
    /* 007899e5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x7899eau); f_0082dbac();
    /* 007899ea: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007899ee: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007899f2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007899f6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007899fa: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007899fd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00789a00: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00789a04: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00789a08: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00789a0c: call 0x789248 */ r_esp -= 4; W32(r_esp, 0x789a11u); f_00789248();
    /* 00789a11: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x789a16u); f_0082dab0();
    /* 00789a16: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x789a1bu); f_007a9318();
L_00789a1b:; BB(0x00789a1b);
    /* 00789a1b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789a1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00789a1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00789a20: ret  */ FN_RET(0x0078992c); r_esp += 4; return;
}

void f_00789a24(void) /* sub_789A24 */
{
    FN_ENTER(0x00789a24);
    /* 00789a24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00789a25: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789a28: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00789a2a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00789a31: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00789a39: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 00789a41: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789a44: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x789a49u); f_0068d5a8();
    /* 00789a49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00789a4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789a4c: je 0x789a62 */ if (fZ) goto L_00789a62;
L_00789a4e:; BB(0x00789a4e);
    /* 00789a4e: mov ecx, eax */ r_ecx = r_eax;
    /* 00789a50: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x789a55u); f_00689b44();
    /* 00789a55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789a57: je 0x789a62 */ if (fZ) goto L_00789a62;
L_00789a59:; BB(0x00789a59);
    /* 00789a59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00789a5b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789a5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00789a5f: ret 4 */ FN_RET(0x00789a24); r_esp += 8; return;
L_00789a62:; BB(0x00789a62);
    /* 00789a62: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00789a65: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00789a68: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00789a6c: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00789a6f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00789a74: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00789a78: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00789a7c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x789a81u); f_0082d990();
    /* 00789a81: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00789a86: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00789a8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00789a8e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x789a93u); f_0082d8bc();
    /* 00789a93: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00789a98: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 00789a9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00789aa0: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x789aa5u); f_0082e9e4();
    /* 00789aa5: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00789aaa: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 00789ab0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00789ab2: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x789ab7u); f_00830c04();
    /* 00789ab7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00789aba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789abb: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00789abf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00789ac1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x789ac6u); f_0082eab8();
    /* 00789ac6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x789acbu); f_0082da80();
    /* 00789acb: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00789ad1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00789ad5: fsub dword ptr [edx + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x178u));
    /* 00789adb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00789add: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00789adf: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00789ae3: fsub dword ptr [edx + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x17cu));
    /* 00789ae9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00789aeb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00789aed: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00789af1: fsub dword ptr [edx + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x180u));
    /* 00789af7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789af9: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00789afb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00789afd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00789aff: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00789b01: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00789b03: fcomp dword ptr [0x97a814] */ fx_compare(ST(0), R_F32((u32)(0x97a814u))); FPOP();
    /* 00789b09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00789b0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00789b0c: jbe 0x789b1d */ if ((fC||fZ)) goto L_00789b1d;
L_00789b0e:; BB(0x00789b0e);
    /* 00789b0e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00789b10: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00789b12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00789b14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00789b16: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789b19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00789b1a: ret 4 */ FN_RET(0x00789a24); r_esp += 8; return;
L_00789b1d:; BB(0x00789b1d);
    /* 00789b1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789b1f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00789b23: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00789b27: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00789b2b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00789b2e: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00789b32: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x789b37u); f_0082f9e0();
    /* 00789b37: fcomp dword ptr [0x97a810] */ fx_compare(ST(0), R_F32((u32)(0x97a810u))); FPOP();
    /* 00789b3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00789b3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00789b40: ja 0x789b4b */ if ((!fC&&!fZ)) goto L_00789b4b;
L_00789b42:; BB(0x00789b42);
    /* 00789b42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00789b44: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789b47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00789b48: ret 4 */ FN_RET(0x00789a24); r_esp += 8; return;
L_00789b4b:; BB(0x00789b4b);
    /* 00789b4b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x789b50u); f_0082d7b0();
    /* 00789b50: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00789b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789b55: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00789b59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00789b5b: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x789b60u); f_0082f09c();
    /* 00789b60: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x789b65u); f_0082da80();
    /* 00789b65: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00789b69: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00789b6d: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00789b70: fmul dword ptr [0x97a80c] */ ST(0) = ST(0) * R_F32((u32)(0x97a80cu));
    /* 00789b76: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00789b78: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00789b7a: mov eax, 1 */ r_eax = 0x1u;
    /* 00789b7f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789b82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00789b83: ret 4 */ FN_RET(0x00789a24); r_esp += 8; return;
}

void f_00789b88(void) /* sub_789B88 */
{
    FN_ENTER(0x00789b88);
    /* 00789b88: mov dword ptr [0xa9c488], 0x3f800000 */ W32((u32)(0xa9c488u), 0x3f800000u);
    /* 00789b92: mov dword ptr [0xa9c48c], 0x41000000 */ W32((u32)(0xa9c48cu), 0x41000000u);
    /* 00789b9c: mov dword ptr [0xa9c490], 0x3fc00000 */ W32((u32)(0xa9c490u), 0x3fc00000u);
    /* 00789ba6: ret  */ FN_RET(0x00789b88); r_esp += 4; return;
}

void f_00789ba8(void) /* sub_789BA8 */
{
    FN_ENTER(0x00789ba8);
    /* 00789ba8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00789ba9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00789bab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00789bad: call 0x789bcc */ r_esp -= 4; W32(r_esp, 0x789bb2u); f_00789bcc();
    /* 00789bb2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00789bb6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789bb8: jne 0x789bbe */ if (!fZ) goto L_00789bbe;
L_00789bba:; BB(0x00789bba);
    /* 00789bba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00789bbb: ret 4 */ FN_RET(0x00789ba8); r_esp += 8; return;
L_00789bbe:; BB(0x00789bbe);
    /* 00789bbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00789bbf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x789bc4u); f_005c2f74();
    /* 00789bc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00789bc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00789bc6: ret 4 */ FN_RET(0x00789ba8); r_esp += 8; return;
}

void f_00789bcc(void) /* sub_789BCC */
{
    FN_ENTER(0x00789bcc);
    /* 00789bcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789bcd: mov ebp, esp */ r_ebp = r_esp;
    /* 00789bcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00789bd1: push 0x8f4ad4 */ { u32 v = 0x8f4ad4u; r_esp -= 4; W32(r_esp, v); }
    /* 00789bd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00789bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789bdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00789be4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789be7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00789bea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00789bed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00789bf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00789bf3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00789bf6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00789bf9: mov dword ptr [ecx], 0xb44fb0 */ W32((u32)(r_ecx), 0xb44fb0u);
    /* 00789bff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00789c06: call 0x7896f8 */ r_esp -= 4; W32(r_esp, 0x789c0bu); f_007896f8();
    /* 00789c0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00789c0e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00789c15: mov esp, ebp */ r_esp = r_ebp;
    /* 00789c17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789c18: ret  */ FN_RET(0x00789bcc); r_esp += 4; return;
}

void f_00789c1c(void) /* sub_789C1C */
{
    FN_ENTER(0x00789c1c);
    /* 00789c1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789c1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00789c1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00789c21: push 0x8f4afc */ { u32 v = 0x8f4afcu; r_esp -= 4; W32(r_esp, v); }
    /* 00789c26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00789c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789c2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00789c34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789c37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00789c3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00789c3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00789c40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00789c43: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00789c48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00789c4f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x789c54u); f_005caba4();
    /* 00789c54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00789c55: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00789c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789c5a: je 0x789c90 */ if (fZ) goto L_00789c90;
L_00789c5c:; BB(0x00789c5c);
    /* 00789c5c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00789c63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00789c6a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00789c6d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789c70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00789c73: call 0x789c94 */ r_esp -= 4; W32(r_esp, 0x789c78u); f_00789c94();
    /* 00789c78: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00789c7b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00789c82:; BB(0x00789c82);
    /* 00789c82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00789c85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00789c8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00789c8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789c8f: ret  */ FN_RET(0x00789c1c); r_esp += 4; return;
L_00789c90:; BB(0x00789c90);
    /* 00789c90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789c92: jmp 0x789c82 */ goto L_00789c82;
}

void f_00789c94(void) /* sub_789C94 */
{
    FN_ENTER(0x00789c94);
    /* 00789c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789c95: mov ebp, esp */ r_ebp = r_esp;
    /* 00789c97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00789c99: push 0x8f4b18 */ { u32 v = 0x8f4b18u; r_esp -= 4; W32(r_esp, v); }
    /* 00789c9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00789ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789ca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00789cac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789caf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00789cb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00789cb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00789cb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00789cbb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00789cbe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00789cc1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00789cc4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00789cc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00789ccb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00789ccc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00789ccd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789cd0: call 0x789758 */ r_esp -= 4; W32(r_esp, 0x789cd5u); f_00789758();
    /* 00789cd5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00789cdc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00789cdf: mov dword ptr [eax], 0xb44fb0 */ W32((u32)(r_eax), 0xb44fb0u);
    /* 00789ce5: mov dword ptr [eax + 0x80], 7 */ W32((u32)(r_eax+0x80u), 0x7u);
    /* 00789cef: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x789cf4u); f_006dc358();
    /* 00789cf4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789cf7: jne 0x789d0f */ if (!fZ) goto L_00789d0f;
L_00789cf9:; BB(0x00789cf9);
    /* 00789cf9: mov dword ptr [0xa9c498], 1 */ W32((u32)(0xa9c498u), 0x1u);
    /* 00789d03: mov dword ptr [0xa9c49c], 0 */ W32((u32)(0xa9c49cu), 0x0u);
    /* 00789d0d: jmp 0x789d31 */ goto L_00789d31;
L_00789d0f:; BB(0x00789d0f);
    /* 00789d0f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789d12: jne 0x789d22 */ if (!fZ) goto L_00789d22;
L_00789d14:; BB(0x00789d14);
    /* 00789d14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00789d16: mov dword ptr [0xa9c498], eax */ W32((u32)(0xa9c498u), r_eax);
    /* 00789d1b: mov dword ptr [0xa9c49c], eax */ W32((u32)(0xa9c49cu), r_eax);
    /* 00789d20: jmp 0x789d31 */ goto L_00789d31;
L_00789d22:; BB(0x00789d22);
    /* 00789d22: mov eax, 1 */ r_eax = 0x1u;
    /* 00789d27: mov dword ptr [0xa9c498], eax */ W32((u32)(0xa9c498u), r_eax);
    /* 00789d2c: mov dword ptr [0xa9c49c], eax */ W32((u32)(0xa9c49cu), r_eax);
L_00789d31:; BB(0x00789d31);
    /* 00789d31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00789d34: mov dword ptr [0xa9c4ac], eax */ W32((u32)(0xa9c4acu), r_eax);
    /* 00789d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00789d3b: je 0x789d47 */ if (fZ) goto L_00789d47;
L_00789d3d:; BB(0x00789d3d);
    /* 00789d3d: mov dword ptr [0x9fd1a8], 5 */ W32((u32)(0x9fd1a8u), 0x5u);
L_00789d47:; BB(0x00789d47);
    /* 00789d47: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00789d4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00789d4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00789d54: mov esp, ebp */ r_esp = r_ebp;
    /* 00789d56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789d57: ret 8 */ FN_RET(0x00789c94); r_esp += 12; return;
}

void f_00789d5c(void) /* sub_789D5C */
{
    FN_ENTER(0x00789d5c);
    /* 00789d5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00789d5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00789d5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789d5f: sub esp, 0x860 */ {  u32 a = r_esp; u32 b = 0x860u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789d65: mov edi, ecx */ r_edi = r_ecx;
    /* 00789d67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00789d69: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00789d6d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00789d71: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00789d75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00789d79: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 00789d7d: mov dword ptr [esp + 0x3c], 0xffffffff */ W32((u32)(r_esp+0x3cu), 0xffffffffu);
    /* 00789d85: mov byte ptr [esp + 0x15], al */ W8((u32)(r_esp+0x15u), (u8)r_eax);
    /* 00789d89: mov byte ptr [esp + 0x16], al */ W8((u32)(r_esp+0x16u), (u8)r_eax);
    /* 00789d8d: mov byte ptr [esp + 0x17], al */ W8((u32)(r_esp+0x17u), (u8)r_eax);
    /* 00789d91: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 00789d96: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00789d9a: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 00789d9f: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789da2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x789da7u); f_0068d5a8();
    /* 00789da7: mov esi, eax */ r_esi = r_eax;
    /* 00789da9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00789dac: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789dae: je 0x789f76 */ if (fZ) goto L_00789f76;
L_00789db4:; BB(0x00789db4);
    /* 00789db4: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00789db8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00789db9: push dword ptr [esi + 0xeb4] */ { u32 v = R32((u32)(r_esi+0xeb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789dbf: call 0x797790 */ r_esp -= 4; W32(r_esp, 0x789dc4u); f_00797790();
    /* 00789dc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00789dc7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00789dcb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789dcd: jne 0x789deb */ if (!fZ) goto L_00789deb;
L_00789dcf:; BB(0x00789dcf);
    /* 00789dcf: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00789dd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789dd5: jne 0x789deb */ if (!fZ) goto L_00789deb;
L_00789dd7:; BB(0x00789dd7);
    /* 00789dd7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00789ddb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789ddd: jne 0x789deb */ if (!fZ) goto L_00789deb;
L_00789ddf:; BB(0x00789ddf);
    /* 00789ddf: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00789de3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789de5: jne 0x789deb */ if (!fZ) goto L_00789deb;
L_00789de7:; BB(0x00789de7);
    /* 00789de7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00789de9: jmp 0x789df0 */ goto L_00789df0;
L_00789deb:; BB(0x00789deb);
    /* 00789deb: mov edx, 1 */ r_edx = 0x1u;
L_00789df0:; BB(0x00789df0);
    /* 00789df0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789df2: jne 0x789e04 */ if (!fZ) goto L_00789e04;
L_00789df4:; BB(0x00789df4);
    /* 00789df4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789df7: mov dword ptr [eax*4 + 0xa9c870], 0 */ W32((u32)(r_eax*4+0xa9c870u), 0x0u);
    /* 00789e02: jmp 0x789e17 */ goto L_00789e17;
L_00789e04:; BB(0x00789e04);
    /* 00789e04: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789e07: mov edx, dword ptr [eax*4 + 0xa9c83c] */ r_edx = R32((u32)(r_eax*4+0xa9c83cu));
    /* 00789e0e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e11: je 0x789f29 */ if (fZ) goto L_00789f29;
L_00789e17:; BB(0x00789e17);
    /* 00789e17: mov edx, dword ptr [0xa9c4ac] */ r_edx = R32((u32)(0xa9c4acu));
    /* 00789e1d: mov ebp, dword ptr [edi + 0x80] */ r_ebp = R32((u32)(r_edi+0x80u));
    /* 00789e23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e25: je 0x789e3e */ if (fZ) goto L_00789e3e;
L_00789e27:; BB(0x00789e27);
    /* 00789e27: mov dword ptr [0x9fd1a8], 6 */ W32((u32)(0x9fd1a8u), 0x6u);
    /* 00789e31: mov edx, 6 */ r_edx = 0x6u;
    /* 00789e36: mov dword ptr [edi + 0x80], edx */ W32((u32)(r_edi+0x80u), r_edx);
    /* 00789e3c: jmp 0x789e52 */ goto L_00789e52;
L_00789e3e:; BB(0x00789e3e);
    /* 00789e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789e3f: call 0x7be230 */ r_esp -= 4; W32(r_esp, 0x789e44u); f_007be230();
    /* 00789e44: mov edx, eax */ r_edx = r_eax;
    /* 00789e46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00789e49: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789e4c: mov dword ptr [edi + 0x80], edx */ W32((u32)(r_edi+0x80u), r_edx);
L_00789e52:; BB(0x00789e52);
    /* 00789e52: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e54: jne 0x789e64 */ if (!fZ) goto L_00789e64;
L_00789e56:; BB(0x00789e56);
    /* 00789e56: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e59: je 0x789f13 */ if (fZ) goto L_00789f13;
L_00789e5f:; BB(0x00789e5f);
    /* 00789e5f: jmp 0x789ef7 */ goto L_00789ef7;
L_00789e64:; BB(0x00789e64);
    /* 00789e64: call 0x789f94 */ r_esp -= 4; W32(r_esp, 0x789e69u); f_00789f94();
    /* 00789e69: mov ebp, eax */ r_ebp = r_eax;
    /* 00789e6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789e6c: mov ecx, edi */ r_ecx = r_edi;
    /* 00789e6e: call 0x78a19c */ r_esp -= 4; W32(r_esp, 0x789e73u); f_0078a19c();
    /* 00789e73: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e75: je 0x789f24 */ if (fZ) goto L_00789f24;
L_00789e7b:; BB(0x00789e7b);
    /* 00789e7b: mov edx, dword ptr [edi + 0x80] */ r_edx = R32((u32)(r_edi+0x80u));
    /* 00789e81: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e84: jne 0x789ec9 */ if (!fZ) goto L_00789ec9;
L_00789e86:; BB(0x00789e86);
    /* 00789e86: mov eax, dword ptr [0xa9c49c] */ r_eax = R32((u32)(0xa9c49cu));
    /* 00789e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e8d: jne 0x789e94 */ if (!fZ) goto L_00789e94;
L_00789e8f:; BB(0x00789e8f);
    /* 00789e8f: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789e92: jmp 0x789ef7 */ goto L_00789ef7;
L_00789e94:; BB(0x00789e94);
    /* 00789e94: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789e97: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00789e9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789e9c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00789e9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789eaa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00789eac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789eae: lea ebp, [edx + edx + 0xaa5c04] */ r_ebp = (u32)(r_edx+r_edx+0xaa5c04u);
    /* 00789eb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789eb6: call 0x4da664 */ r_esp -= 4; W32(r_esp, 0x789ebbu); f_004da664();
    /* 00789ebb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00789ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789ebd: mov ecx, edi */ r_ecx = r_edi;
    /* 00789ebf: call 0x789748 */ r_esp -= 4; W32(r_esp, 0x789ec4u); f_00789748();
    /* 00789ec4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789ec7: jmp 0x789ef7 */ goto L_00789ef7;
L_00789ec9:; BB(0x00789ec9);
    /* 00789ec9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789ecc: jne 0x789ee7 */ if (!fZ) goto L_00789ee7;
L_00789ece:; BB(0x00789ece);
    /* 00789ece: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 00789ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789ed4: call 0x74ec28 */ r_esp -= 4; W32(r_esp, 0x789ed9u); f_0074ec28();
    /* 00789ed9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00789eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789edb: mov ecx, edi */ r_ecx = r_edi;
    /* 00789edd: call 0x789748 */ r_esp -= 4; W32(r_esp, 0x789ee2u); f_00789748();
    /* 00789ee2: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789ee5: jmp 0x789ef7 */ goto L_00789ef7;
L_00789ee7:; BB(0x00789ee7);
    /* 00789ee7: push dword ptr [esi + 0x948] */ { u32 v = R32((u32)(r_esi+0x948u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789eed: mov ecx, edi */ r_ecx = r_edi;
    /* 00789eef: call 0x789748 */ r_esp -= 4; W32(r_esp, 0x789ef4u); f_00789748();
    /* 00789ef4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
L_00789ef7:; BB(0x00789ef7);
    /* 00789ef7: mov dword ptr [eax*4 + 0xa9c83c], 0 */ W32((u32)(r_eax*4+0xa9c83cu), 0x0u);
    /* 00789f02: mov ecx, edi */ r_ecx = r_edi;
    /* 00789f04: call 0x7898b4 */ r_esp -= 4; W32(r_esp, 0x789f09u); f_007898b4();
    /* 00789f09: add esp, 0x860 */ {  u32 a = r_esp; u32 b = 0x860u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789f0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789f10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00789f11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00789f12: ret  */ FN_RET(0x00789d5c); r_esp += 4; return;
L_00789f13:; BB(0x00789f13);
    /* 00789f13: mov edx, dword ptr [eax*4 + 0xa9c83c] */ r_edx = R32((u32)(r_eax*4+0xa9c83cu));
    /* 00789f1a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789f1d: jne 0x789ef7 */ if (!fZ) goto L_00789ef7;
L_00789f1f:; BB(0x00789f1f);
    /* 00789f1f: jmp 0x789e64 */ goto L_00789e64;
L_00789f24:; BB(0x00789f24);
    /* 00789f24: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789f27: jmp 0x789ef7 */ goto L_00789ef7;
L_00789f29:; BB(0x00789f29);
    /* 00789f29: lea ebp, [esp + 0x60] */ r_ebp = (u32)(r_esp+0x60u);
    /* 00789f2d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00789f2f:; BB(0x00789f2f);
    /* 00789f2f: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00789f33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789f35: jne 0x789f55 */ if (!fZ) goto L_00789f55;
L_00789f37:; BB(0x00789f37);
    /* 00789f37: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00789f3a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789f3d: cmp edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00789f43: jl 0x789f2f */ if ((fS!=fO)) goto L_00789f2f;
L_00789f45:; BB(0x00789f45);
    /* 00789f45: mov dword ptr [eax*4 + 0xa9c870], 0 */ W32((u32)(r_eax*4+0xa9c870u), 0x0u);
    /* 00789f50: jmp 0x789e17 */ goto L_00789e17;
L_00789f55:; BB(0x00789f55);
    /* 00789f55: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 00789f59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00789f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789f5b: call 0x78b3b0 */ r_esp -= 4; W32(r_esp, 0x789f60u); f_0078b3b0();
    /* 00789f60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00789f63: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789f66: mov dword ptr [eax*4 + 0xa9c870], 1 */ W32((u32)(r_eax*4+0xa9c870u), 0x1u);
    /* 00789f71: jmp 0x789e17 */ goto L_00789e17;
L_00789f76:; BB(0x00789f76);
    /* 00789f76: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00789f7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00789f7f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00789f83: add esp, 0x860 */ {  u32 a = r_esp; u32 b = 0x860u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789f89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00789f8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00789f8c: ret  */ FN_RET(0x00789d5c); r_esp += 4; return;
}

void f_00789e20(void)
{
    FN_ENTER(0x00789e20);
    /* 00789e20: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00789e22: add byte ptr [ebp - 0x38e88b2e], al */ { u32 ad = (u32)(r_ebp+0xc71774d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00789e28: add eax, 0x9fd1a8 */ {  u32 a = r_eax; u32 b = 0x9fd1a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00789e2d: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00789e2e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00789e30: add byte ptr [edx + 6], bh */ { u32 ad = (u32)(r_edx+0x6u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00789e36: mov dword ptr [edi + 0x80], edx */ W32((u32)(r_edi+0x80u), r_edx);
    /* 00789e3c: jmp 0x789e52 */ goto L_00789e52;
L_00789e52:; BB(0x00789e52);
    /* 00789e52: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e54: jne 0x789e64 */ if (!fZ) goto L_00789e64;
L_00789e56:; BB(0x00789e56);
    /* 00789e56: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e59: je 0x789f13 */ if (fZ) goto L_00789f13;
L_00789e5f:; BB(0x00789e5f);
    /* 00789e5f: jmp 0x789ef7 */ goto L_00789ef7;
L_00789e64:; BB(0x00789e64);
    /* 00789e64: call 0x789f94 */ r_esp -= 4; W32(r_esp, 0x789e69u); f_00789f94();
    /* 00789e69: mov ebp, eax */ r_ebp = r_eax;
    /* 00789e6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789e6c: mov ecx, edi */ r_ecx = r_edi;
    /* 00789e6e: call 0x78a19c */ r_esp -= 4; W32(r_esp, 0x789e73u); f_0078a19c();
    /* 00789e73: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e75: je 0x789f24 */ if (fZ) goto L_00789f24;
L_00789e7b:; BB(0x00789e7b);
    /* 00789e7b: mov edx, dword ptr [edi + 0x80] */ r_edx = R32((u32)(r_edi+0x80u));
    /* 00789e81: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e84: jne 0x789ec9 */ if (!fZ) goto L_00789ec9;
L_00789e86:; BB(0x00789e86);
    /* 00789e86: mov eax, dword ptr [0xa9c49c] */ r_eax = R32((u32)(0xa9c49cu));
    /* 00789e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789e8d: jne 0x789e94 */ if (!fZ) goto L_00789e94;
L_00789e8f:; BB(0x00789e8f);
    /* 00789e8f: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789e92: jmp 0x789ef7 */ goto L_00789ef7;
L_00789e94:; BB(0x00789e94);
    /* 00789e94: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789e97: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00789e9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789e9c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00789e9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789ea8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789eaa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00789eac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00789eae: lea ebp, [edx + edx + 0xaa5c04] */ r_ebp = (u32)(r_edx+r_edx+0xaa5c04u);
    /* 00789eb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789eb6: call 0x4da664 */ r_esp -= 4; W32(r_esp, 0x789ebbu); f_004da664();
    /* 00789ebb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00789ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789ebd: mov ecx, edi */ r_ecx = r_edi;
    /* 00789ebf: call 0x789748 */ r_esp -= 4; W32(r_esp, 0x789ec4u); f_00789748();
    /* 00789ec4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789ec7: jmp 0x789ef7 */ goto L_00789ef7;
L_00789ec9:; BB(0x00789ec9);
    /* 00789ec9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789ecc: jne 0x789ee7 */ if (!fZ) goto L_00789ee7;
L_00789ece:; BB(0x00789ece);
    /* 00789ece: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 00789ed3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789ed4: call 0x74ec28 */ r_esp -= 4; W32(r_esp, 0x789ed9u); f_0074ec28();
    /* 00789ed9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00789eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00789edb: mov ecx, edi */ r_ecx = r_edi;
    /* 00789edd: call 0x789748 */ r_esp -= 4; W32(r_esp, 0x789ee2u); f_00789748();
    /* 00789ee2: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789ee5: jmp 0x789ef7 */ goto L_00789ef7;
L_00789ee7:; BB(0x00789ee7);
    /* 00789ee7: push dword ptr [esi + 0x948] */ { u32 v = R32((u32)(r_esi+0x948u)); r_esp -= 4; W32(r_esp, v); }
    /* 00789eed: mov ecx, edi */ r_ecx = r_edi;
    /* 00789eef: call 0x789748 */ r_esp -= 4; W32(r_esp, 0x789ef4u); f_00789748();
    /* 00789ef4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
L_00789ef7:; BB(0x00789ef7);
    /* 00789ef7: mov dword ptr [eax*4 + 0xa9c83c], 0 */ W32((u32)(r_eax*4+0xa9c83cu), 0x0u);
    /* 00789f02: mov ecx, edi */ r_ecx = r_edi;
    /* 00789f04: call 0x7898b4 */ r_esp -= 4; W32(r_esp, 0x789f09u); f_007898b4();
    /* 00789f09: add esp, 0x860 */ {  u32 a = r_esp; u32 b = 0x860u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789f0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00789f10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00789f11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00789f12: ret  */ FN_RET(0x00789e20); r_esp += 4; return;
L_00789f13:; BB(0x00789f13);
    /* 00789f13: mov edx, dword ptr [eax*4 + 0xa9c83c] */ r_edx = R32((u32)(r_eax*4+0xa9c83cu));
    /* 00789f1a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789f1d: jne 0x789ef7 */ if (!fZ) goto L_00789ef7;
L_00789f1f:; BB(0x00789f1f);
    /* 00789f1f: jmp 0x789e64 */ goto L_00789e64;
L_00789f24:; BB(0x00789f24);
    /* 00789f24: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00789f27: jmp 0x789ef7 */ goto L_00789ef7;
}

void f_00789f94(void) /* sub_789F94 */
{
    FN_ENTER(0x00789f94);
    /* 00789f94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00789f95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00789f96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00789f97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00789f98: sub esp, 0x864 */ {  u32 a = r_esp; u32 b = 0x864u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00789f9e: mov edi, eax */ r_edi = r_eax;
    /* 00789fa0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00789fa2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00789fa6: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00789faa: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00789fae: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00789fb2: mov dword ptr [esp + 0x40], 0xffffffff */ W32((u32)(r_esp+0x40u), 0xffffffffu);
    /* 00789fba: mov byte ptr [esp + 0x18], dl */ W8((u32)(r_esp+0x18u), (u8)r_edx);
    /* 00789fbe: mov byte ptr [esp + 0x19], dl */ W8((u32)(r_esp+0x19u), (u8)r_edx);
    /* 00789fc2: mov byte ptr [esp + 0x1a], dl */ W8((u32)(r_esp+0x1au), (u8)r_edx);
    /* 00789fc6: mov byte ptr [esp + 0x1b], dl */ W8((u32)(r_esp+0x1bu), (u8)r_edx);
    /* 00789fca: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 00789fcf: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00789fd3: mov word ptr [esp + 0x44], dx */ W16((u32)(r_esp+0x44u), (u16)r_edx);
    /* 00789fd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00789fd9: call 0x7be230 */ r_esp -= 4; W32(r_esp, 0x789fdeu); f_007be230();
    /* 00789fde: mov esi, eax */ r_esi = r_eax;
    /* 00789fe0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00789fe3: mov edx, dword ptr [0xa9c4ac] */ r_edx = R32((u32)(0xa9c4acu));
    /* 00789fe9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00789feb: je 0x789ff3 */ if (fZ) goto L_00789ff3;
L_00789fed:; BB(0x00789fed);
    /* 00789fed: mov esi, dword ptr [0x9fd1a8] */ r_esi = R32((u32)(0x9fd1a8u));
L_00789ff3:; BB(0x00789ff3);
    /* 00789ff3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00789ff4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x789ff9u); f_0068d5a8();
    /* 00789ff9: mov ebp, eax */ r_ebp = r_eax;
    /* 00789ffb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00789ffe: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a000: je 0x78a05d */ if (fZ) goto L_0078a05d;
L_0078a002:; BB(0x0078a002);
    /* 0078a002: mov edx, ebp */ r_edx = r_ebp;
    /* 0078a004: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0078a00a: je 0x78a05d */ if (fZ) goto L_0078a05d;
L_0078a00c:; BB(0x0078a00c);
    /* 0078a00c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078a00e: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x78a013u); f_006936b4();
    /* 0078a013: mov ebx, eax */ r_ebx = r_eax;
    /* 0078a015: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078a017: call 0x68d3e0 */ r_esp -= 4; W32(r_esp, 0x78a01cu); f_0068d3e0();
    /* 0078a01c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078a01f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0078a022: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078a024: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x78a027u); call_ind(t); }
    /* 0078a027: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0078a02b: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x78a030u); f_00816d30();
    /* 0078a030: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a032: je 0x78a18e */ if (fZ) goto L_0078a18e;
L_0078a038:; BB(0x0078a038);
    /* 0078a038: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a03b: je 0x78a15c */ if (fZ) goto L_0078a15c;
L_0078a041:; BB(0x0078a041);
    /* 0078a041: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a044: je 0x78a13a */ if (fZ) goto L_0078a13a;
L_0078a04a:; BB(0x0078a04a);
    /* 0078a04a: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a04d: je 0x78a0d3 */ if (fZ) goto L_0078a0d3;
L_0078a053:; BB(0x0078a053);
    /* 0078a053: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a056: je 0x78a07d */ if (fZ) goto L_0078a07d;
L_0078a058:; BB(0x0078a058);
    /* 0078a058: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a05b: jne 0x78a06a */ if (!fZ) goto L_0078a06a;
L_0078a05d:; BB(0x0078a05d);
    /* 0078a05d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a05f: add esp, 0x864 */ {  u32 a = r_esp; u32 b = 0x864u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078a066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a067: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078a068: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a069: ret  */ FN_RET(0x00789f94); r_esp += 4; return;
L_0078a06a:; BB(0x0078a06a);
    /* 0078a06a: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078a06d: jne 0x78a0c3 */ if (!fZ) goto L_0078a0c3;
L_0078a06f:; BB(0x0078a06f);
    /* 0078a06f: push dword ptr [ebp + 0xeb4] */ { u32 v = R32((u32)(r_ebp+0xeb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a075: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x78a07au); f_00815f24();
    /* 0078a07a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a07b: jmp 0x78a0c3 */ goto L_0078a0c3;
L_0078a07d:; BB(0x0078a07d);
    /* 0078a07d: movsx edx, byte ptr [ebp + 0x963] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x963u));
    /* 0078a084: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078a087: jge 0x78a096 */ if ((fS==fO)) goto L_0078a096;
L_0078a089:; BB(0x0078a089);
    /* 0078a089: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a08b: add esp, 0x864 */ {  u32 a = r_esp; u32 b = 0x864u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a091: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078a092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a093: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078a094: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a095: ret  */ FN_RET(0x00789f94); r_esp += 4; return;
L_0078a096:; BB(0x0078a096);
    /* 0078a096: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0078a099: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a09b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0078a09d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a09f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a0a1: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0078a0a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a0a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a0a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a0a9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0078a0ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078a0ad: lea eax, [edx + edx + 0xaa5c04] */ r_eax = (u32)(r_edx+r_edx+0xaa5c04u);
    /* 0078a0b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a0b5: call 0x4da614 */ r_esp -= 4; W32(r_esp, 0x78a0bau); f_004da614();
    /* 0078a0ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a0bb: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a0c0u); f_00816cb8();
    /* 0078a0c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0078a0c3:; BB(0x0078a0c3);
    /* 0078a0c3: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0078a0c8: add esp, 0x864 */ {  u32 a = r_esp; u32 b = 0x864u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a0ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078a0cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a0d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078a0d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a0d2: ret  */ FN_RET(0x00789f94); r_esp += 4; return;
L_0078a0d3:; BB(0x0078a0d3);
    /* 0078a0d3: movsx edx, byte ptr [ebp + 0x963] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x963u));
    /* 0078a0da: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078a0dd: jge 0x78a0ec */ if ((fS==fO)) goto L_0078a0ec;
L_0078a0df:; BB(0x0078a0df);
    /* 0078a0df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078a0e1: add esp, 0x864 */ {  u32 a = r_esp; u32 b = 0x864u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078a0e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078a0e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078a0e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078a0ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078a0eb: ret  */ FN_RET(0x00789f94); r_esp += 4; return;
L_0078a0ec:; BB(0x0078a0ec);
    /* 0078a0ec: push 0x97a878 */ { u32 v = 0x97a878u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a0f1: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a0f6u); f_00816cb8();
    /* 0078a0f6: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0078a0f9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a0fb: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a0fd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a0ff: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a101: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a103: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a105: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a107: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a109: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0078a10b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0078a10e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078a110: movzx edx, word ptr [eax + 0xaa5d44] */ r_edx = (u32)R16((u32)(r_eax+0xaa5d44u));
    /* 0078a117: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a118: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x78a11du); f_00815f24();
    /* 0078a11d: push 0x97a880 */ { u32 v = 0x97a880u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a122: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a127u); f_00816cb8();
    /* 0078a127: movzx eax, word ptr [ebx*4 + 0xaa5d4c] */ r_eax = (u32)R16((u32)(r_ebx*4+0xaa5d4cu));
    /* 0078a12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a130: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x78a135u); f_00815f24();
    /* 0078a135: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a138: jmp 0x78a0c3 */ goto L_0078a0c3;
L_0078a13a:; BB(0x0078a13a);
    /* 0078a13a: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0078a13e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a13f: push dword ptr [ebp + 0xeb4] */ { u32 v = R32((u32)(r_ebp+0xeb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a145: call 0x797790 */ r_esp -= 4; W32(r_esp, 0x78a14au); f_00797790();
    /* 0078a14a: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0078a14e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a14f: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a154u); f_00816cb8();
    /* 0078a154: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a157: jmp 0x78a0c3 */ goto L_0078a0c3;
L_0078a15c:; BB(0x0078a15c);
    /* 0078a15c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a15d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a162u); f_00816cb8();
    /* 0078a162: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a163: call 0x816994 */ r_esp -= 4; W32(r_esp, 0x78a168u); f_00816994();
    /* 0078a168: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0078a16b: push dword ptr [eax*4 + 0x9fd184] */ { u32 v = R32((u32)(r_eax*4+0x9fd184u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078a172: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a177u); f_00816cb8();
    /* 0078a177: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078a17b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0078a17d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078a180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078a181: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x78a186u); f_00816684();
    /* 0078a186: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078a189: jmp 0x78a0c3 */ goto L_0078a0c3;
L_0078a18e:; BB(0x0078a18e);
    /* 0078a18e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078a18f: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x78a194u); f_00816cb8();
    /* 0078a194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078a195: jmp 0x78a0c3 */ goto L_0078a0c3;
}

