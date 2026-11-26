#include "protos.h"

void f_00489050(void) /* sub_489050 */
{
    FN_ENTER(0x00489050);
    /* 00489050: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489051: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00489052: mov edi, ecx */ r_edi = r_ecx;
    /* 00489054: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00489058: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048905b: je 0x489065 */ if (fZ) goto L_00489065;
L_0048905d:; BB(0x0048905d);
    /* 0048905d: cmp eax, dword ptr [edi + 0x3dc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x3dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00489063: jne 0x48906a */ if (!fZ) goto L_0048906a;
L_00489065:; BB(0x00489065);
    /* 00489065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489066: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489067: ret 4 */ FN_RET(0x00489050); r_esp += 8; return;
L_0048906a:; BB(0x0048906a);
    /* 0048906a: mov ecx, dword ptr [edi + 0x37c] */ r_ecx = R32((u32)(r_edi+0x37cu));
    /* 00489070: mov dword ptr [edi + 0x3dc], eax */ W32((u32)(r_edi+0x3dcu), r_eax);
    /* 00489076: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00489079: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0048907c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048907e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00489080: push dword ptr [edx + 0x9a6948] */ { u32 v = R32((u32)(r_edx+0x9a6948u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489086: mov eax, dword ptr [edx + 0x9a6940] */ r_eax = R32((u32)(r_edx+0x9a6940u));
    /* 0048908c: mov dword ptr [edi + 0x3e0], eax */ W32((u32)(r_edi+0x3e0u), r_eax);
    /* 00489092: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x489097u); f_005b8638();
    /* 00489097: mov edx, dword ptr [edi + 0x3f4] */ r_edx = R32((u32)(r_edi+0x3f4u));
    /* 0048909d: mov dword ptr [edi + 0x3f0], edx */ W32((u32)(r_edi+0x3f0u), r_edx);
    /* 004890a3: mov edx, dword ptr [edi + 0x3e4] */ r_edx = R32((u32)(r_edi+0x3e4u));
    /* 004890a9: mov dword ptr [edi + 0x3f8], edx */ W32((u32)(r_edi+0x3f8u), r_edx);
    /* 004890af: mov edx, dword ptr [edi + 0x3e8] */ r_edx = R32((u32)(r_edi+0x3e8u));
    /* 004890b5: mov dword ptr [edi + 0x3fc], edx */ W32((u32)(r_edi+0x3fcu), r_edx);
    /* 004890bb: mov ebx, dword ptr [ebx*8 + 0x9a694c] */ r_ebx = R32((u32)(r_ebx*8+0x9a694cu));
    /* 004890c2: mov dword ptr [edi + 0x3e8], 0 */ W32((u32)(r_edi+0x3e8u), 0x0u);
    /* 004890cc: mov dword ptr [edi + 0x3ec], ebx */ W32((u32)(r_edi+0x3ecu), r_ebx);
    /* 004890d2: mov dword ptr [edi + 0x3e4], eax */ W32((u32)(r_edi+0x3e4u), r_eax);
    /* 004890d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004890d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004890da: ret 4 */ FN_RET(0x00489050); r_esp += 8; return;
}

void f_004890dd(void)
{
    FN_ENTER(0x004890dd);
    /* 004890dd: nop  */ ;
    /* 004890de: nop  */ ;
    /* 004890df: nop  */ ;
    /* 004890e0: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004890e3: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004890e6: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 004890ec: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 004890ef: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 004890f5: mov dword ptr [ecx + 0x308], eax */ W32((u32)(r_ecx+0x308u), r_eax);
    /* 004890fb: ret  */ FN_RET(0x004890dd); r_esp += 4; return;
}

void f_004890e0(void) /* sub_4890E0 */
{
    FN_ENTER(0x004890e0);
    /* 004890e0: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004890e3: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004890e6: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 004890ec: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 004890ef: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 004890f5: mov dword ptr [ecx + 0x308], eax */ W32((u32)(r_ecx+0x308u), r_eax);
    /* 004890fb: ret  */ FN_RET(0x004890e0); r_esp += 4; return;
}

void f_004890fc(void) /* sub_4890FC */
{
    FN_ENTER(0x004890fc);
    /* 004890fc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004890ff: fld dword ptr [0x9010c8] */ FPUSH(R_F32((u32)(0x9010c8u)));
    /* 00489105: fadd dword ptr [ecx + 0x400] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x400u));
    /* 0048910b: movsx edx, word ptr [ecx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00489112: fld dword ptr [0x9012e0] */ FPUSH(R_F32((u32)(0x9012e0u)));
    /* 00489118: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048911a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048911c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0048911f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00489122: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00489123: movsx eax, word ptr [ecx + 0x346] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x346u));
    /* 0048912a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048912c: jb 0x489130 */ if (fC) goto L_00489130;
L_0048912e:; BB(0x0048912e);
    /* 0048912e: fst st(2) */ ST(2) = ST(0);
L_00489130:; BB(0x00489130);
    /* 00489130: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489132: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489134: fstp dword ptr [ecx + 0x400] */ W_F32((u32)(r_ecx+0x400u), ST(0)); FPOP();
    /* 0048913a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048913e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00489142: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00489144: fstp dword ptr [ecx + 0x404] */ W_F32((u32)(r_ecx+0x404u), ST(0)); FPOP();
    /* 0048914a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048914d: ret  */ FN_RET(0x004890fc); r_esp += 4; return;
}

void f_00489150(void) /* sub_489150 */
{
    FN_ENTER(0x00489150);
    /* 00489150: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489151: mov edi, ecx */ r_edi = r_ecx;
    /* 00489153: mov edx, dword ptr [edi + 0x40c] */ r_edx = R32((u32)(r_edi+0x40cu));
    /* 00489159: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 00489160: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00489162: je 0x48916d */ if (fZ) goto L_0048916d;
L_00489164:; BB(0x00489164);
    /* 00489164: jge 0x48916f */ if ((fS==fO)) goto L_0048916f;
L_00489166:; BB(0x00489166);
    /* 00489166: mov ecx, edi */ r_ecx = r_edi;
    /* 00489168: call 0x48918c */ r_esp -= 4; W32(r_esp, 0x48916du); f_0048918c();
L_0048916d:; BB(0x0048916d);
    /* 0048916d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048916e: ret  */ FN_RET(0x00489150); r_esp += 4; return;
L_0048916f:; BB(0x0048916f);
    /* 0048916f: mov ecx, dword ptr [edi + 0x380] */ r_ecx = R32((u32)(r_edi+0x380u));
    /* 00489175: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00489177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489178: call 0x49e340 */ r_esp -= 4; W32(r_esp, 0x48917du); f_0049e340();
    /* 0048917d: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 00489184: mov dword ptr [edi + 0x40c], eax */ W32((u32)(r_edi+0x40cu), r_eax);
    /* 0048918a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048918b: ret  */ FN_RET(0x00489150); r_esp += 4; return;
}

void f_0048918c(void) /* sub_48918C */
{
    FN_ENTER(0x0048918c);
    /* 0048918c: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00489193: mov dword ptr [ecx + 0x40c], eax */ W32((u32)(r_ecx+0x40cu), r_eax);
    /* 00489199: ret  */ FN_RET(0x0048918c); r_esp += 4; return;
}

void f_0048919c(void) /* sub_48919C */
{
    FN_ENTER(0x0048919c);
    /* 0048919c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048919d: mov edx, 0x5a9 */ r_edx = 0x5a9u;
    /* 004891a2: fld dword ptr [0x9012dc] */ FPUSH(R_F32((u32)(0x9012dcu)));
    /* 004891a8: fcom dword ptr [ecx + 0x3c0] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3c0u))); 
    /* 004891ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004891b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004891b1: jae 0x4891ca */ if (!fC) goto L_004891ca;
L_004891b3:; BB(0x004891b3);
    /* 004891b3: fcomp dword ptr [ecx + 0x3c4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x3c4u))); FPOP();
    /* 004891b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004891bb: mov edx, 0x5a5 */ r_edx = 0x5a5u;
    /* 004891c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004891c1: jae 0x4891cc */ if (!fC) goto L_004891cc;
L_004891c3:; BB(0x004891c3);
    /* 004891c3: mov edx, 0x5a8 */ r_edx = 0x5a8u;
    /* 004891c8: jmp 0x4891cc */ goto L_004891cc;
L_004891ca:; BB(0x004891ca);
    /* 004891ca: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004891cc:; BB(0x004891cc);
    /* 004891cc: lea ebp, [ecx + 0x38] */ r_ebp = (u32)(r_ecx+0x38u);
    /* 004891cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004891d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004891d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004891d3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004891d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004891d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004891d6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4891dbu); f_008144b0();
    /* 004891db: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004891de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004891df: ret  */ FN_RET(0x0048919c); r_esp += 4; return;
}

void f_004891e0(void) /* sub_4891E0 */
{
    FN_ENTER(0x004891e0);
    /* 004891e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004891e1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004891e4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004891e6: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 004891ec: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 004891f2: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
    /* 004891f5: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004891f8: ja 0x489284 */ if ((!fC&&!fZ)) goto L_00489284;
L_004891fe:; BB(0x004891fe);
    /* 004891fe: mov eax, dword ptr [eax*4 + 0x9010cc] */ r_eax = R32((u32)(r_eax*4+0x9010ccu));
    /* 00489205: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00489284:; BB(0x00489284);
    /* 00489284: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 0048928a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048928c: je 0x48929f */ if (fZ) goto L_0048929f;
L_0048928e:; BB(0x0048928e);
    /* 0048928e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048928f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x489294u); f_005cdcc0();
    /* 00489294: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00489295: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
L_0048929f:; BB(0x0048929f);
    /* 0048929f: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 004892a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892a7: je 0x4892ba */ if (fZ) goto L_004892ba;
L_004892a9:; BB(0x004892a9);
    /* 004892a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004892aa: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4892afu); f_005cdcc0();
    /* 004892af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004892b0: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
L_004892ba:; BB(0x004892ba);
    /* 004892ba: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 004892c0: test al, 0x1f */ {  u32 a = (u8)r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004892c2: jne 0x4892e6 */ if (!fZ) goto L_004892e6;
L_004892c4:; BB(0x004892c4);
    /* 004892c4: mov ecx, dword ptr [ebp + 0x380] */ r_ecx = R32((u32)(r_ebp+0x380u));
    /* 004892ca: call 0x49ad68 */ r_esp -= 4; W32(r_esp, 0x4892cfu); f_0049ad68();
    /* 004892cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892d1: je 0x4892e6 */ if (fZ) goto L_004892e6;
L_004892d3:; BB(0x004892d3);
    /* 004892d3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004892d5: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 004892da: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004892dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004892de: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4892e3u); f_0050b7a4();
    /* 004892e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004892e6:; BB(0x004892e6);
    /* 004892e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004892e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004892ea: ret  */ FN_RET(0x004891e0); r_esp += 4; return;
}

void f_00489207(void)
{
    FN_ENTER(0x00489207);
    /* 00489207: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00489209: call 0x489370 */ r_esp -= 4; W32(r_esp, 0x48920eu); f_00489370();
    /* 0048920e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489210: je 0x489222 */ if (fZ) goto L_00489222;
L_00489212:; BB(0x00489212);
    /* 00489212: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 00489218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048921a: je 0x4892eb */ if (fZ) goto L_004892eb;
L_00489220:; BB(0x00489220);
    /* 00489220: jmp 0x48923d */ goto L_0048923d;
L_00489222:; BB(0x00489222);
    /* 00489222: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 00489228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048922a: je 0x48923d */ if (fZ) goto L_0048923d;
L_0048922c:; BB(0x0048922c);
    /* 0048922c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048922d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x489232u); f_005cdcc0();
    /* 00489232: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00489233: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
L_0048923d:; BB(0x0048923d);
    /* 0048923d: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 00489243: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489245: je 0x4892ba */ if (fZ) goto L_004892ba;
L_00489247:; BB(0x00489247);
    /* 00489247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489248: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48924du); f_005cdcc0();
    /* 0048924d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048924e: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
    /* 00489258: jmp 0x4892ba */ goto L_004892ba;
L_004892ba:; BB(0x004892ba);
    /* 004892ba: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 004892c0: test al, 0x1f */ {  u32 a = (u8)r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004892c2: jne 0x4892e6 */ if (!fZ) goto L_004892e6;
L_004892c4:; BB(0x004892c4);
    /* 004892c4: mov ecx, dword ptr [ebp + 0x380] */ r_ecx = R32((u32)(r_ebp+0x380u));
    /* 004892ca: call 0x49ad68 */ r_esp -= 4; W32(r_esp, 0x4892cfu); f_0049ad68();
    /* 004892cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892d1: je 0x4892e6 */ if (fZ) goto L_004892e6;
L_004892d3:; BB(0x004892d3);
    /* 004892d3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004892d5: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 004892da: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004892dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004892de: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4892e3u); f_0050b7a4();
    /* 004892e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004892e6:; BB(0x004892e6);
    /* 004892e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004892e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004892ea: ret  */ FN_RET(0x00489207); r_esp += 4; return;
L_004892eb:; BB(0x004892eb);
    /* 004892eb: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004892ee: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004892f1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004892f4: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004892f7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004892fb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004892ff: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00489302: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 00489307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489308: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48930du); f_00509590();
    /* 0048930d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489310: mov dword ptr [ebp + 0x448], eax */ W32((u32)(r_ebp+0x448u), r_eax);
    /* 00489316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489318: je 0x48923d */ if (fZ) goto L_0048923d;
L_0048931e:; BB(0x0048931e);
    /* 0048931e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00489320: mov ecx, eax */ r_ecx = r_eax;
    /* 00489322: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x489327u); f_00508efc();
    /* 00489327: jmp 0x48923d */ goto L_0048923d;
}

void f_0048925a(void)
{
    FN_ENTER(0x0048925a);
    /* 0048925a: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 00489260: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489262: je 0x489275 */ if (fZ) goto L_00489275;
L_00489264:; BB(0x00489264);
    /* 00489264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489265: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48926au); f_005cdcc0();
    /* 0048926a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048926b: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
L_00489275:; BB(0x00489275);
    /* 00489275: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0048927b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048927d: jne 0x4892ba */ if (!fZ) goto L_004892ba;
L_0048927f:; BB(0x0048927f);
    /* 0048927f: jmp 0x48932c */ goto L_0048932c;
L_004892ba:; BB(0x004892ba);
    /* 004892ba: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 004892c0: test al, 0x1f */ {  u32 a = (u8)r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004892c2: jne 0x4892e6 */ if (!fZ) goto L_004892e6;
L_004892c4:; BB(0x004892c4);
    /* 004892c4: mov ecx, dword ptr [ebp + 0x380] */ r_ecx = R32((u32)(r_ebp+0x380u));
    /* 004892ca: call 0x49ad68 */ r_esp -= 4; W32(r_esp, 0x4892cfu); f_0049ad68();
    /* 004892cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892d1: je 0x4892e6 */ if (fZ) goto L_004892e6;
L_004892d3:; BB(0x004892d3);
    /* 004892d3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004892d5: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 004892da: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004892dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004892de: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4892e3u); f_0050b7a4();
    /* 004892e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004892e6:; BB(0x004892e6);
    /* 004892e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004892e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004892ea: ret  */ FN_RET(0x0048925a); r_esp += 4; return;
L_0048932c:; BB(0x0048932c);
    /* 0048932c: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0048932f: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00489332: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00489336: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00489339: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0048933d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00489341: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00489345: push 0x219 */ { u32 v = 0x219u; r_esp -= 4; W32(r_esp, v); }
    /* 0048934a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048934b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x489350u); f_00509590();
    /* 00489350: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489353: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 00489359: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048935b: je 0x4892ba */ if (fZ) goto L_004892ba;
L_00489361:; BB(0x00489361);
    /* 00489361: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00489363: mov ecx, eax */ r_ecx = r_eax;
    /* 00489365: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48936au); f_00508efc();
    /* 0048936a: jmp 0x4892ba */ goto L_004892ba;
}

void f_00489284(void)
{
    FN_ENTER(0x00489284);
    /* 00489284: mov eax, dword ptr [ebp + 0x448] */ r_eax = R32((u32)(r_ebp+0x448u));
    /* 0048928a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048928c: je 0x48929f */ if (fZ) goto L_0048929f;
L_0048928e:; BB(0x0048928e);
    /* 0048928e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048928f: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x489294u); f_005cdcc0();
    /* 00489294: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00489295: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
L_0048929f:; BB(0x0048929f);
    /* 0048929f: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 004892a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892a7: je 0x4892ba */ if (fZ) goto L_004892ba;
L_004892a9:; BB(0x004892a9);
    /* 004892a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004892aa: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4892afu); f_005cdcc0();
    /* 004892af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004892b0: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
L_004892ba:; BB(0x004892ba);
    /* 004892ba: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 004892c0: test al, 0x1f */ {  u32 a = (u8)r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004892c2: jne 0x4892e6 */ if (!fZ) goto L_004892e6;
L_004892c4:; BB(0x004892c4);
    /* 004892c4: mov ecx, dword ptr [ebp + 0x380] */ r_ecx = R32((u32)(r_ebp+0x380u));
    /* 004892ca: call 0x49ad68 */ r_esp -= 4; W32(r_esp, 0x4892cfu); f_0049ad68();
    /* 004892cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004892d1: je 0x4892e6 */ if (fZ) goto L_004892e6;
L_004892d3:; BB(0x004892d3);
    /* 004892d3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004892d5: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 004892da: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004892dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004892de: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4892e3u); f_0050b7a4();
    /* 004892e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004892e6:; BB(0x004892e6);
    /* 004892e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004892e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004892ea: ret  */ FN_RET(0x00489284); r_esp += 4; return;
}

void f_00489370(void) /* sub_489370 */
{
    FN_ENTER(0x00489370);
    /* 00489370: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 00489376: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00489379: jl 0x489383 */ if ((fS!=fO)) goto L_00489383;
L_0048937b:; BB(0x0048937b);
    /* 0048937b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048937e: jg 0x489383 */ if ((!fZ&&fS==fO)) goto L_00489383;
L_00489380:; BB(0x00489380);
    /* 00489380: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00489382: ret  */ FN_RET(0x00489370); r_esp += 4; return;
L_00489383:; BB(0x00489383);
    /* 00489383: mov eax, 1 */ r_eax = 0x1u;
    /* 00489388: ret  */ FN_RET(0x00489370); r_esp += 4; return;
}

void f_0048938c(void) /* sub_48938C */
{
    FN_ENTER(0x0048938c);
    /* 0048938c: call 0x489394 */ r_esp -= 4; W32(r_esp, 0x489391u); f_00489394();
    /* 00489391: ret  */ FN_RET(0x0048938c); r_esp += 4; return;
}

void f_00489394(void) /* sub_489394 */
{
    FN_ENTER(0x00489394);
    /* 00489394: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489395: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00489396: mov edi, ecx */ r_edi = r_ecx;
    /* 00489398: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x48939du); f_00578b38();
    /* 0048939d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4893a2u); f_0082d7b0();
    /* 004893a2: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 004893a5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4893aau); f_0082d838();
    /* 004893aa: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 004893ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004893af: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4893b4u); f_0082d8bc();
    /* 004893b4: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004893b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004893b9: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4893beu); f_0082e9e4();
    /* 004893be: fld dword ptr [0x9012d8] */ FPUSH(R_F32((u32)(0x9012d8u)));
    /* 004893c4: fcom dword ptr [edi + 0x400] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x400u))); 
    /* 004893ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004893cc: mov edx, dword ptr [edi + 0x400] */ r_edx = R32((u32)(r_edi+0x400u));
    /* 004893d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004893d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004893d5: jb 0x489407 */ if (fC) goto L_00489407;
L_004893d7:; BB(0x004893d7);
    /* 004893d7: fcomp dword ptr [edi + 0x408] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x408u))); FPOP();
    /* 004893dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004893df: mov edx, dword ptr [edi + 0x408] */ r_edx = R32((u32)(r_edi+0x408u));
    /* 004893e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004893e6: jae 0x48941d */ if (!fC) goto L_0048941d;
L_004893e8:; BB(0x004893e8);
    /* 004893e8: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004893ed: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004893f2: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004893f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004893f8: call 0x48e1e8 */ r_esp -= 4; W32(r_esp, 0x4893fdu); f_0048e1e8();
    /* 004893fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489400: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00489405: jmp 0x48941d */ goto L_0048941d;
L_00489407:; BB(0x00489407);
    /* 00489407: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489409: push dword ptr [edi + 0x404] */ { u32 v = R32((u32)(r_edi+0x404u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048940f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489410: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x489415u); f_0048e148();
    /* 00489415: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489418: mov ebx, 1 */ r_ebx = 0x1u;
L_0048941d:; BB(0x0048941d);
    /* 0048941d: mov ecx, edi */ r_ecx = r_edi;
    /* 0048941f: call 0x48943c */ r_esp -= 4; W32(r_esp, 0x489424u); f_0048943c();
    /* 00489424: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489426: je 0x48942d */ if (fZ) goto L_0048942d;
L_00489428:; BB(0x00489428);
    /* 00489428: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x48942du); f_0048e364();
L_0048942d:; BB(0x0048942d);
    /* 0048942d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x489432u); f_0082da80();
    /* 00489432: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x489437u); f_0082dab0();
    /* 00489437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489438: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489439: ret  */ FN_RET(0x00489394); r_esp += 4; return;
}

void f_0048943c(void) /* sub_48943C */
{
    FN_ENTER(0x0048943c);
    /* 0048943c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048943d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048943e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048943f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489442: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00489444: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x489449u); f_0082fa9c();
    /* 00489449: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048944b: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 00489451: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x489456u); f_005b8624();
    /* 00489456: mov esi, eax */ r_esi = r_eax;
    /* 00489458: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048945a: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 00489460: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x489465u); f_005b8610();
    /* 00489465: mov ebx, eax */ r_ebx = r_eax;
    /* 00489467: mov ecx, esi */ r_ecx = r_esi;
    /* 00489469: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48946eu); f_00829cc8();
    /* 0048946e: fld dword ptr [ebp + 0x3f0] */ FPUSH(R_F32((u32)(r_ebp+0x3f0u)));
    /* 00489474: fcomp dword ptr [0x9012d0] */ fx_compare(ST(0), R_F32((u32)(0x9012d0u))); FPOP();
    /* 0048947a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048947c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048947d: je 0x4894db */ if (fZ) goto L_004894db;
L_0048947f:; BB(0x0048947f);
    /* 0048947f: mov edx, dword ptr [ebp + 0x3f8] */ r_edx = R32((u32)(r_ebp+0x3f8u));
    /* 00489485: mov esi, dword ptr [ebp + 0x3fc] */ r_esi = R32((u32)(r_ebp+0x3fcu));
    /* 0048948b: mov ecx, dword ptr [ebp + 0x460] */ r_ecx = R32((u32)(r_ebp+0x460u));
    /* 00489491: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00489494: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00489498: mov edx, dword ptr [ebp + 0x3e4] */ r_edx = R32((u32)(r_ebp+0x3e4u));
    /* 0048949e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004894a2: mov edx, dword ptr [ebp + 0x3e8] */ r_edx = R32((u32)(r_ebp+0x3e8u));
    /* 004894a8: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004894ac: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4894b1u); f_00588428();
    /* 004894b1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004894b4: push dword ptr [ebp + 0x3f0] */ { u32 v = R32((u32)(r_ebp+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004894ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004894bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004894bc: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x4894c1u); f_008302c4();
    /* 004894c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004894c4: mov ecx, dword ptr [ebp + 0x460] */ r_ecx = R32((u32)(r_ebp+0x460u));
    /* 004894ca: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x4894cfu); f_00452050();
L_004894cf:; BB(0x004894cf);
    /* 004894cf: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4894d4u); f_0082faac();
    /* 004894d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004894d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004894d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004894d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004894da: ret  */ FN_RET(0x0048943c); r_esp += 4; return;
L_004894db:; BB(0x004894db);
    /* 004894db: mov ecx, dword ptr [ebp + 0x460] */ r_ecx = R32((u32)(r_ebp+0x460u));
    /* 004894e1: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4894e6u); f_00588428();
    /* 004894e6: push dword ptr [ebp + 0x3e8] */ { u32 v = R32((u32)(r_ebp+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004894ec: push dword ptr [ebp + 0x3e4] */ { u32 v = R32((u32)(r_ebp+0x3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004894f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004894f3: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4894f8u); f_0083046c();
    /* 004894f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004894fb: mov ecx, dword ptr [ebp + 0x460] */ r_ecx = R32((u32)(r_ebp+0x460u));
    /* 00489501: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x489506u); f_00452050();
    /* 00489506: jmp 0x4894cf */ goto L_004894cf;
}

void f_00489508(void) /* sub_489508 */
{
    FN_ENTER(0x00489508);
    /* 00489508: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489509: mov edi, ecx */ r_edi = r_ecx;
    /* 0048950b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0048950e: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00489513: mov dword ptr [edi + 0x400], 0x3f800000 */ W32((u32)(r_edi+0x400u), 0x3f800000u);
    /* 0048951d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00489520: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00489523: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00489525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489526: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489528: push 0x5a6 */ { u32 v = 0x5a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0048952d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x489532u); f_00814298();
    /* 00489532: mov dword ptr [edi + 0x3c4], 0 */ W32((u32)(r_edi+0x3c4u), 0x0u);
    /* 0048953c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048953f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489540: ret  */ FN_RET(0x00489508); r_esp += 4; return;
}

void f_00489544(void) /* sub_489544 */
{
    FN_ENTER(0x00489544);
    /* 00489544: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489545: mov esi, ecx */ r_esi = r_ecx;
    /* 00489547: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 0048954d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00489550: jl 0x489559 */ if ((fS!=fO)) goto L_00489559;
L_00489552:; BB(0x00489552);
    /* 00489552: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00489555: jg 0x489559 */ if ((!fZ&&fS==fO)) goto L_00489559;
L_00489557:; BB(0x00489557);
    /* 00489557: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489558: ret  */ FN_RET(0x00489544); r_esp += 4; return;
L_00489559:; BB(0x00489559);
    /* 00489559: mov ecx, dword ptr [esi + 0x380] */ r_ecx = R32((u32)(r_esi+0x380u));
    /* 0048955f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x489564u); f_0061cdb0();
    /* 00489564: mov dword ptr [esi + 0x400], 0x3f800000 */ W32((u32)(r_esi+0x400u), 0x3f800000u);
    /* 0048956e: mov ecx, esi */ r_ecx = r_esi;
    /* 00489570: mov dword ptr [esi + 0x388], 4 */ W32((u32)(r_esi+0x388u), 0x4u);
    /* 0048957a: push dword ptr [0x9a6a14] */ { u32 v = R32((u32)(0x9a6a14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489580: call 0x489050 */ r_esp -= 4; W32(r_esp, 0x489585u); f_00489050();
    /* 00489585: mov eax, dword ptr [0x9a6a18] */ r_eax = R32((u32)(0x9a6a18u));
    /* 0048958a: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00489590: mov eax, dword ptr [0x9a6a1c] */ r_eax = R32((u32)(0x9a6a1cu));
    /* 00489595: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489597: je 0x48959d */ if (fZ) goto L_0048959d;
L_00489599:; BB(0x00489599);
    /* 00489599: mov ecx, esi */ r_ecx = r_esi;
    /* 0048959b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48959du); call_ind(t); }
L_0048959d:; BB(0x0048959d);
    /* 0048959d: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004895a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004895a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004895a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004895a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004895a5: push 0x5a7 */ { u32 v = 0x5a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004895aa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4895afu); f_00814298();
    /* 004895af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004895b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004895b3: ret  */ FN_RET(0x00489544); r_esp += 4; return;
}

void f_004895b4(void) /* sub_4895B4 */
{
    FN_ENTER(0x004895b4);
    /* 004895b4: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 004895ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004895bc: jne 0x4895c7 */ if (!fZ) goto L_004895c7;
L_004895be:; BB(0x004895be);
    /* 004895be: fld dword ptr [0x9012c0] */ FPUSH(R_F32((u32)(0x9012c0u)));
    /* 004895c4: ret 8 */ FN_RET(0x004895b4); r_esp += 12; return;
L_004895c7:; BB(0x004895c7);
    /* 004895c7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004895cb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004895cf: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x4895d4u); f_007732b8();
    /* 004895d4: ret 8 */ FN_RET(0x004895b4); r_esp += 12; return;
}

void f_004895d8(void) /* sub_4895D8 */
{
    FN_ENTER(0x004895d8);
    /* 004895d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004895d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004895db: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004895e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004895e3: jne 0x489601 */ if (!fZ) goto L_00489601;
L_004895e5:; BB(0x004895e5);
    /* 004895e5: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004895e9: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004895ec: je 0x489601 */ if (fZ) goto L_00489601;
L_004895ee:; BB(0x004895ee);
    /* 004895ee: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4895f3u); f_00520db8();
    /* 004895f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004895f5: jne 0x489601 */ if (!fZ) goto L_00489601;
L_004895f7:; BB(0x004895f7);
    /* 004895f7: fld dword ptr [0x9012bc] */ FPUSH(R_F32((u32)(0x9012bcu)));
    /* 004895fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004895fe: ret 0x18 */ FN_RET(0x004895d8); r_esp += 28; return;
L_00489601:; BB(0x00489601);
    /* 00489601: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489605: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00489607: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048960b: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048960f: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489613: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489617: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048961b: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x489620u); f_00773afc();
    /* 00489620: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489621: ret 0x18 */ FN_RET(0x004895d8); r_esp += 28; return;
}

void f_00489624(void) /* sub_489624 */
{
    FN_ENTER(0x00489624);
    /* 00489624: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489625: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489626: mov esi, ecx */ r_esi = r_ecx;
    /* 00489628: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048962c: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 00489632: lea ebp, [eax + eax*4] */ r_ebp = (u32)(r_eax+r_eax*4);
    /* 00489635: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00489639: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048963b: mov ecx, esi */ r_ecx = r_esi;
    /* 0048963d: push dword ptr [edx + 0x9a69c4] */ { u32 v = R32((u32)(r_edx+0x9a69c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489643: call 0x489050 */ r_esp -= 4; W32(r_esp, 0x489648u); f_00489050();
    /* 00489648: mov eax, dword ptr [ebp*4 + 0x9a69c8] */ r_eax = R32((u32)(r_ebp*4+0x9a69c8u));
    /* 0048964f: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00489655: mov eax, dword ptr [ebp*4 + 0x9a69cc] */ r_eax = R32((u32)(r_ebp*4+0x9a69ccu));
    /* 0048965c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048965e: je 0x489664 */ if (fZ) goto L_00489664;
L_00489660:; BB(0x00489660);
    /* 00489660: mov ecx, esi */ r_ecx = r_esi;
    /* 00489662: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x489664u); call_ind(t); }
L_00489664:; BB(0x00489664);
    /* 00489664: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489665: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489666: ret 4 */ FN_RET(0x00489624); r_esp += 8; return;
}

void f_0048966c(void) /* sub_48966C */
{
    FN_ENTER(0x0048966c);
    /* 0048966c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048966d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489670: mov edi, ecx */ r_edi = r_ecx;
    /* 00489672: mov ecx, dword ptr [edi + 0x380] */ r_ecx = R32((u32)(r_edi+0x380u));
    /* 00489678: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048967a: je 0x4896bb */ if (fZ) goto L_004896bb;
L_0048967c:; BB(0x0048967c);
    /* 0048967c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00489680: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00489683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489684: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489685: push dword ptr [edi + 0x38c] */ { u32 v = R32((u32)(r_edi+0x38cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048968b: call 0x49e300 */ r_esp -= 4; W32(r_esp, 0x489690u); f_0049e300();
    /* 00489690: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00489694: fadd dword ptr [0x9012b8] */ ST(0) = ST(0) + R_F32((u32)(0x9012b8u));
    /* 0048969a: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0048969e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004896a2: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004896a5: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 004896a8: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 004896ab: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004896ae: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 004896b1: mov eax, 1 */ r_eax = 0x1u;
    /* 004896b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004896b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004896ba: ret  */ FN_RET(0x0048966c); r_esp += 4; return;
L_004896bb:; BB(0x004896bb);
    /* 004896bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004896bd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004896c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004896c1: ret  */ FN_RET(0x0048966c); r_esp += 4; return;
}

void f_004896c4(void) /* sub_4896C4 */
{
    FN_ENTER(0x004896c4);
    /* 004896c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004896c5: mov ebx, esp */ r_ebx = r_esp;
    /* 004896c7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004896ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004896cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004896cc: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004896cf: mov edi, ecx */ r_edi = r_ecx;
    /* 004896d1: movzx eax, byte ptr [0xa46d5c] */ r_eax = (u32)R8((u32)(0xa46d5cu));
    /* 004896d8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004896da: jne 0x4896ee */ if (!fZ) goto L_004896ee;
L_004896dc:; BB(0x004896dc);
    /* 004896dc: mov dword ptr [0xa46d60], 0x408e38e4 */ W32((u32)(0xa46d60u), 0x408e38e4u);
    /* 004896e6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004896e9: mov byte ptr [0xa46d5c], al */ W8((u32)(0xa46d5cu), (u8)r_eax);
L_004896ee:; BB(0x004896ee);
    /* 004896ee: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004896f0: jne 0x489706 */ if (!fZ) goto L_00489706;
L_004896f2:; BB(0x004896f2);
    /* 004896f2: mov dword ptr [0xa46d64], 0x5b0 */ W32((u32)(0xa46d64u), 0x5b0u);
    /* 004896fc: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00489701: mov byte ptr [0xa46d5c], al */ W8((u32)(0xa46d5cu), (u8)r_eax);
L_00489706:; BB(0x00489706);
    /* 00489706: mov ecx, dword ptr [edi + 0x380] */ r_ecx = R32((u32)(r_edi+0x380u));
    /* 0048970c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048970e: je 0x48989a */ if (fZ) goto L_0048989a;
L_00489714:; BB(0x00489714);
    /* 00489714: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00489718: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048971b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048971c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048971d: push dword ptr [edi + 0x38c] */ { u32 v = R32((u32)(r_edi+0x38cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489723: call 0x49e300 */ r_esp -= 4; W32(r_esp, 0x489728u); f_0049e300();
    /* 00489728: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0048972c: fadd dword ptr [0x9012b8] */ ST(0) = ST(0) + R_F32((u32)(0x9012b8u));
    /* 00489732: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00489736: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0048973a: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0048973e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00489742: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00489746: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0048974a: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0048974d: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00489751: mov edx, esi */ r_edx = r_esi;
    /* 00489753: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x489758u); f_0082f9c4();
    /* 00489758: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0048975c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x489761u); f_0083173c();
    /* 00489761: fcomp dword ptr [0x901144] */ fx_compare(ST(0), R_F32((u32)(0x901144u))); FPOP();
    /* 00489767: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489769: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048976a: jbe 0x4899da */ if ((fC||fZ)) goto L_004899da;
L_00489770:; BB(0x00489770);
    /* 00489770: movzx eax, byte ptr [0xa46d5c] */ r_eax = (u32)R8((u32)(0xa46d5cu));
    /* 00489777: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00489779: jne 0x48978f */ if (!fZ) goto L_0048978f;
L_0048977b:; BB(0x0048977b);
    /* 0048977b: mov dword ptr [0xa46d68], 0x42c80000 */ W32((u32)(0xa46d68u), 0x42c80000u);
    /* 00489785: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048978a: mov byte ptr [0xa46d5c], al */ W8((u32)(0xa46d5cu), (u8)r_eax);
L_0048978f:; BB(0x0048978f);
    /* 0048978f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00489793: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0048979b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048979f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004897a3: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004897a7: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004897ab: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4897b0u); f_0083173c();
    /* 004897b0: fcom dword ptr [0xa46d68] */ fx_compare(ST(0), R_F32((u32)(0xa46d68u))); 
    /* 004897b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004897b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004897b9: jae 0x4898a5 */ if (!fC) goto L_004898a5;
L_004897bf:; BB(0x004897bf);
    /* 004897bf: fcomp dword ptr [0x901138] */ fx_compare(ST(0), R_F32((u32)(0x901138u))); FPOP();
    /* 004897c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004897c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004897c8: jae 0x48980e */ if (!fC) goto L_0048980e;
L_004897ca:; BB(0x004897ca);
    /* 004897ca: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 004897d0: mov ecx, edi */ r_ecx = r_edi;
    /* 004897d2: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004897d6: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004897d9: call 0x489a9c */ r_esp -= 4; W32(r_esp, 0x4897deu); f_00489a9c();
    /* 004897de: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004897e2: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 004897e5: fcomp dword ptr [edi + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3cu))); FPOP();
    /* 004897e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004897ea: mov edx, 0x7fff */ r_edx = 0x7fffu;
    /* 004897ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004897f0: jbe 0x4897f7 */ if ((fC||fZ)) goto L_004897f7;
L_004897f2:; BB(0x004897f2);
    /* 004897f2: mov edx, 0xffff8001 */ r_edx = 0xffff8001u;
L_004897f7:; BB(0x004897f7);
    /* 004897f7: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 004897fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004897fe: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489801: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x489806u); f_007a8c74();
    /* 00489806: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489809: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 0048980c: jmp 0x489853 */ goto L_00489853;
L_0048980e:; BB(0x0048980e);
    /* 0048980e: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 00489812: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00489816: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0048981a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048981b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048981c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048981d: mov ecx, edi */ r_ecx = r_edi;
    /* 0048981f: call 0x489b0c */ r_esp -= 4; W32(r_esp, 0x489824u); f_00489b0c();
    /* 00489824: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048982a: mov ecx, edi */ r_ecx = r_edi;
    /* 0048982c: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489830: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489833: call 0x489a9c */ r_esp -= 4; W32(r_esp, 0x489838u); f_00489a9c();
    /* 00489838: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048983e: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489842: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489845: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00489848: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x48984du); f_007a8c74();
    /* 0048984d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489850: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
L_00489853:; BB(0x00489853);
    /* 00489853: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00489857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489858: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048985b: mov ecx, edi */ r_ecx = r_edi;
    /* 0048985d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048985e: call 0x489c28 */ r_esp -= 4; W32(r_esp, 0x489863u); f_00489c28();
    /* 00489863: fld dword ptr [0xa46d60] */ FPUSH(R_F32((u32)(0xa46d60u)));
    /* 00489869: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0048986d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0048986f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00489873: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00489877: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489879: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0048987b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048987d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048987f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489881: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00489885: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489887: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0048988b: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0048988f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00489893: mov ecx, esi */ r_ecx = r_esi;
    /* 00489895: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48989au); f_0082ebac();
L_0048989a:; BB(0x0048989a);
    /* 0048989a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048989c: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048989f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004898a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004898a1: mov esp, ebx */ r_esp = r_ebx;
    /* 004898a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004898a4: ret  */ FN_RET(0x004896c4); r_esp += 4; return;
L_004898a5:; BB(0x004898a5);
    /* 004898a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004898a7: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004898ab: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004898af: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004898b1: fmul qword ptr [0x9011a0] */ ST(0) = ST(0) * R_F64((u32)(0x9011a0u));
    /* 004898b7: fdiv qword ptr [0x901198] */ ST(0) = ST(0) / R_F64((u32)(0x901198u));
    /* 004898bd: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 004898c1: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 004898c6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004898cb: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004898cf: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 004898d3: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 004898d7: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 004898db: mov ecx, edi */ r_ecx = r_edi;
    /* 004898dd: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 004898e1: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 004898e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004898e8: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004898eb: call 0x489a9c */ r_esp -= 4; W32(r_esp, 0x4898f0u); f_00489a9c();
    /* 004898f0: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 004898f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004898f8: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004898fb: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 004898fe: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x489903u); f_007a8c74();
    /* 00489903: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489906: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00489909: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 0048990c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0048990f: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00489913: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 00489916: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00489919: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048991d: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00489921: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x489926u); f_0082dcbc();
    /* 00489926: fld dword ptr [0xa46d60] */ FPUSH(R_F32((u32)(0xa46d60u)));
    /* 0048992c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048992e: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 00489932: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00489935: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00489939: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x48993eu); f_0082ddd8();
    /* 0048993e: fld dword ptr [0xa46d60] */ FPUSH(R_F32((u32)(0xa46d60u)));
    /* 00489944: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00489946: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 0048994a: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0048994e: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00489952: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489954: mov ecx, edi */ r_ecx = r_edi;
    /* 00489956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489957: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x48995cu); f_007b4c58();
    /* 0048995c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048995e: je 0x4899c1 */ if (fZ) goto L_004899c1;
L_00489960:; BB(0x00489960);
    /* 00489960: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00489964: fadd dword ptr [0x9012a8] */ ST(0) = ST(0) + R_F32((u32)(0x9012a8u));
    /* 0048996a: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0048996e: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00489971: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00489975: fld dword ptr [0xa46d60] */ FPUSH(R_F32((u32)(0xa46d60u)));
    /* 0048997b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048997d: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0048997f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00489981: fmul dword ptr [0x90113c] */ ST(0) = ST(0) * R_F32((u32)(0x90113cu));
    /* 00489987: fld dword ptr [0xa46d60] */ FPUSH(R_F32((u32)(0xa46d60u)));
    /* 0048998d: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00489990: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 00489993: fchs  */ ST(0) = -ST(0);
    /* 00489995: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00489997: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489999: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048999a: jbe 0x4899a2 */ if ((fC||fZ)) goto L_004899a2;
L_0048999c:; BB(0x0048999c);
    /* 0048999c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0048999e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004899a0: jmp 0x4899b1 */ goto L_004899b1;
L_004899a2:; BB(0x004899a2);
    /* 004899a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004899a4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004899a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004899a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004899a9: jbe 0x489a94 */ if ((fC||fZ)) goto L_00489a94;
L_004899af:; BB(0x004899af);
    /* 004899af: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004899b1:; BB(0x004899b1);
    /* 004899b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004899b3: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004899b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004899b8: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004899bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004899bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004899bd: mov esp, ebx */ r_esp = r_ebx;
    /* 004899bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004899c0: ret  */ FN_RET(0x004896c4); r_esp += 4; return;
L_004899c1:; BB(0x004899c1);
    /* 004899c1: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004899c5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004899c9: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 004899cc: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 004899cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004899d1: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004899d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004899d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004899d6: mov esp, ebx */ r_esp = r_ebx;
    /* 004899d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004899d9: ret  */ FN_RET(0x004896c4); r_esp += 4; return;
L_004899da:; BB(0x004899da);
    /* 004899da: fld dword ptr [0x901140] */ FPUSH(R_F32((u32)(0x901140u)));
    /* 004899e0: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004899e4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004899e6: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004899ea: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004899ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004899f0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004899f2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004899f4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004899f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004899f8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004899fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004899fe: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00489a02: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00489a06: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00489a0a: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x489a0fu); f_0083173c();
    /* 00489a0f: fcomp dword ptr [0xa46d60] */ fx_compare(ST(0), R_F32((u32)(0xa46d60u))); FPOP();
    /* 00489a15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489a17: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00489a18: jbe 0x489a51 */ if ((fC||fZ)) goto L_00489a51;
L_00489a1a:; BB(0x00489a1a);
    /* 00489a1a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00489a1e: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x489a23u); f_0082df08();
    /* 00489a23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489a25: fld dword ptr [0xa46d60] */ FPUSH(R_F32((u32)(0xa46d60u)));
    /* 00489a2b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00489a2f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00489a31: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00489a35: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00489a39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489a3b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00489a3d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00489a3f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00489a41: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489a43: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00489a47: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489a49: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00489a4d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_00489a51:; BB(0x00489a51);
    /* 00489a51: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00489a55: mov ecx, esi */ r_ecx = r_esi;
    /* 00489a57: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x489a5cu); f_0082ebac();
    /* 00489a5c: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489a62: mov ecx, edi */ r_ecx = r_edi;
    /* 00489a64: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489a68: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489a6b: call 0x489a9c */ r_esp -= 4; W32(r_esp, 0x489a70u); f_00489a9c();
    /* 00489a70: push dword ptr [0xa46d64] */ { u32 v = R32((u32)(0xa46d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489a76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489a78: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489a7b: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00489a7e: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x489a83u); f_007a8c74();
    /* 00489a83: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 00489a86: mov eax, 1 */ r_eax = 0x1u;
    /* 00489a8b: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00489a8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489a8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489a90: mov esp, ebx */ r_esp = r_ebx;
    /* 00489a92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489a93: ret  */ FN_RET(0x004896c4); r_esp += 4; return;
L_00489a94:; BB(0x00489a94);
    /* 00489a94: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00489a96: jmp 0x4899b1 */ goto L_004899b1;
}

void f_00489a9c(void) /* sub_489A9C */
{
    FN_ENTER(0x00489a9c);
    /* 00489a9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489a9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489a9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489a9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00489aa0: mov edi, ecx */ r_edi = r_ecx;
    /* 00489aa2: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00489aa6: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00489aaa: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00489aae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00489aaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489ab0: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x489ab5u); f_007a9018();
    /* 00489ab5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489ab8: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00489aba: jg 0x489ac5 */ if ((!fZ&&fS==fO)) goto L_00489ac5;
L_00489abc:; BB(0x00489abc);
    /* 00489abc: mov eax, ebp */ r_eax = r_ebp;
    /* 00489abe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489abf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489ac0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489ac1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489ac2: ret 0xc */ FN_RET(0x00489a9c); r_esp += 16; return;
L_00489ac5:; BB(0x00489ac5);
    /* 00489ac5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489ac6: mov ecx, edi */ r_ecx = r_edi;
    /* 00489ac8: call 0x489af4 */ r_esp -= 4; W32(r_esp, 0x489acdu); f_00489af4();
    /* 00489acd: mov edi, eax */ r_edi = r_eax;
    /* 00489acf: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00489ad1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489ad2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489ad3: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x489ad8u); f_007a9018();
    /* 00489ad8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489adb: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00489add: jg 0x489ae8 */ if ((!fZ&&fS==fO)) goto L_00489ae8;
L_00489adf:; BB(0x00489adf);
    /* 00489adf: mov eax, ebp */ r_eax = r_ebp;
    /* 00489ae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489ae3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489ae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489ae5: ret 0xc */ FN_RET(0x00489a9c); r_esp += 16; return;
L_00489ae8:; BB(0x00489ae8);
    /* 00489ae8: mov eax, edi */ r_eax = r_edi;
    /* 00489aea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489aeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489aec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489aed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489aee: ret 0xc */ FN_RET(0x00489a9c); r_esp += 16; return;
}

void f_00489af4(void) /* sub_489AF4 */
{
    FN_ENTER(0x00489af4);
    /* 00489af4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00489af8: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 00489afe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00489b00: je 0x489b04 */ if (fZ) goto L_00489b04;
L_00489b02:; BB(0x00489b02);
    /* 00489b02: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); fC = (b != 0); }
L_00489b04:; BB(0x00489b04);
    /* 00489b04: mov eax, edx */ r_eax = r_edx;
    /* 00489b06: ret 4 */ FN_RET(0x00489af4); r_esp += 8; return;
}

void f_00489b0c(void) /* sub_489B0C */
{
    FN_ENTER(0x00489b0c);
    /* 00489b0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00489b0d: mov ebx, esp */ r_ebx = r_esp;
    /* 00489b0f: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00489b12: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489b15: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00489b18: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00489b1a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00489b1d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00489b21: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00489b24: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00489b28: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00489b2c: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00489b30: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x489b35u); f_0083173c();
    /* 00489b35: fcomp dword ptr [0x9012a4] */ fx_compare(ST(0), R_F32((u32)(0x9012a4u))); FPOP();
    /* 00489b3b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489b3d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00489b3e: ja 0x489b48 */ if ((!fC&&!fZ)) goto L_00489b48;
L_00489b40:; BB(0x00489b40);
    /* 00489b40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00489b42: mov esp, ebx */ r_esp = r_ebx;
    /* 00489b44: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489b45: ret 0xc */ FN_RET(0x00489b0c); r_esp += 16; return;
L_00489b48:; BB(0x00489b48);
    /* 00489b48: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00489b4c: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x489b51u); f_0082df08();
    /* 00489b51: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489b53: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00489b57: fcom dword ptr [0x9012a0] */ fx_compare(ST(0), R_F32((u32)(0x9012a0u))); 
    /* 00489b5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489b5f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00489b60: jb 0x489c07 */ if (fC) goto L_00489c07;
L_00489b66:; BB(0x00489b66);
    /* 00489b66: fcomp dword ptr [0x901148] */ fx_compare(ST(0), R_F32((u32)(0x901148u))); FPOP();
    /* 00489b6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489b6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00489b6f: jbe 0x489b8e */ if ((fC||fZ)) goto L_00489b8e;
L_00489b71:; BB(0x00489b71);
    /* 00489b71: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00489b74: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00489b77: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00489b7d: mov eax, 1 */ r_eax = 0x1u;
    /* 00489b82: mov dword ptr [ecx], 0xffff8001 */ W32((u32)(r_ecx), 0xffff8001u);
    /* 00489b88: mov esp, ebx */ r_esp = r_ebx;
    /* 00489b8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489b8b: ret 0xc */ FN_RET(0x00489b0c); r_esp += 16; return;
L_00489b8e:; BB(0x00489b8e);
    /* 00489b8e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00489b92: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00489b96: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00489b98: fmul qword ptr [0x901190] */ ST(0) = ST(0) * R_F64((u32)(0x901190u));
    /* 00489b9e: fdiv qword ptr [0x901188] */ ST(0) = ST(0) / R_F64((u32)(0x901188u));
    /* 00489ba4: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00489ba7: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00489bab: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00489bb0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00489bb5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00489bb9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00489bbd: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 00489bbf: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00489bc3: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00489bc7: fchs  */ ST(0) = -ST(0);
    /* 00489bc9: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00489bcc: call 0x84d184 */ r_esp -= 4; W32(r_esp, 0x489bd1u); f_0084d184();
    /* 00489bd1: fmul qword ptr [0x901190] */ ST(0) = ST(0) * R_F64((u32)(0x901190u));
    /* 00489bd7: fdiv qword ptr [0x901188] */ ST(0) = ST(0) / R_F64((u32)(0x901188u));
    /* 00489bdd: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00489be0: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00489be4: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00489be9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00489bee: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00489bf2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00489bf6: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 00489bf8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00489bfc: mov eax, 1 */ r_eax = 0x1u;
    /* 00489c01: mov esp, ebx */ r_esp = r_ebx;
    /* 00489c03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489c04: ret 0xc */ FN_RET(0x00489b0c); r_esp += 16; return;
L_00489c07:; BB(0x00489c07);
    /* 00489c07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489c09: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00489c0c: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00489c0f: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00489c15: mov eax, 1 */ r_eax = 0x1u;
    /* 00489c1a: mov dword ptr [ecx], 0x7fff */ W32((u32)(r_ecx), 0x7fffu);
    /* 00489c20: mov esp, ebx */ r_esp = r_ebx;
    /* 00489c22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489c23: ret 0xc */ FN_RET(0x00489b0c); r_esp += 16; return;
}

void f_00489c28(void) /* sub_489C28 */
{
    FN_ENTER(0x00489c28);
    /* 00489c28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489c29: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489c2c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00489c30: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00489c34: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x489c39u); f_0082dcbc();
    /* 00489c39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00489c3c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00489c3f: fchs  */ ST(0) = -ST(0);
    /* 00489c41: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00489c44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489c45: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00489c48: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x489c4du); f_0082e900();
    /* 00489c4d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00489c51: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00489c55: fsubr dword ptr [0x90129c] */ ST(0) = R_F32((u32)(0x90129cu)) - ST(0);
    /* 00489c5b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00489c5f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00489c63: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x489c68u); f_0082dcbc();
    /* 00489c68: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00489c6c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00489c6f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00489c73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489c75: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00489c77: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00489c7a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x489c7fu); f_0082ddd8();
    /* 00489c7f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00489c83: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00489c85: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00489c88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00489c8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489c8c: ret 0xc */ FN_RET(0x00489c28); r_esp += 16; return;
}

void f_00489c90(void) /* sub_489C90 */
{
    FN_ENTER(0x00489c90);
    /* 00489c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489c91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489c92: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489c95: mov edi, ecx */ r_edi = r_ecx;
    /* 00489c97: movzx edx, byte ptr [0xa46d6c] */ r_edx = (u32)R8((u32)(0xa46d6cu));
    /* 00489c9e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00489ca1: jne 0x489cb6 */ if (!fZ) goto L_00489cb6;
L_00489ca3:; BB(0x00489ca3);
    /* 00489ca3: mov dword ptr [0xa46d70], 0x1b4 */ W32((u32)(0xa46d70u), 0x1b4u);
    /* 00489cad: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00489cb0: mov byte ptr [0xa46d6c], dl */ W8((u32)(0xa46d6cu), (u8)r_edx);
L_00489cb6:; BB(0x00489cb6);
    /* 00489cb6: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00489cb9: jne 0x489cd5 */ if (!fZ) goto L_00489cd5;
L_00489cbb:; BB(0x00489cbb);
    /* 00489cbb: mov eax, dword ptr [0xa46d70] */ r_eax = R32((u32)(0xa46d70u));
    /* 00489cc0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00489cc2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00489cc4: mov dword ptr [0xa46d74], eax */ W32((u32)(0xa46d74u), r_eax);
    /* 00489cc9: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00489ccf: mov byte ptr [0xa46d6c], dl */ W8((u32)(0xa46d6cu), (u8)r_edx);
L_00489cd5:; BB(0x00489cd5);
    /* 00489cd5: movzx eax, word ptr [edi + 0x410] */ r_eax = (u32)R16((u32)(r_edi+0x410u));
    /* 00489cdc: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489ce1: je 0x489d08 */ if (fZ) goto L_00489d08;
L_00489ce3:; BB(0x00489ce3);
    /* 00489ce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489ce4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x489ce9u); f_0068d5a8();
    /* 00489ce9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00489cea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489cec: je 0x489d08 */ if (fZ) goto L_00489d08;
L_00489cee:; BB(0x00489cee);
    /* 00489cee: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00489cf1: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00489cf4: mov dword ptr [esp + 4], 0x41f00000 */ W32((u32)(r_esp+0x4u), 0x41f00000u);
    /* 00489cfc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00489cff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00489d03: jmp 0x489db1 */ goto L_00489db1;
L_00489d08:; BB(0x00489d08);
    /* 00489d08: mov edx, dword ptr [edi + 0x380] */ r_edx = R32((u32)(r_edi+0x380u));
    /* 00489d0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489d10: jne 0x489d24 */ if (!fZ) goto L_00489d24;
L_00489d12:; BB(0x00489d12);
    /* 00489d12: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00489d15: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 00489d18: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00489d1b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00489d1f: jmp 0x489da9 */ goto L_00489da9;
L_00489d24:; BB(0x00489d24);
    /* 00489d24: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 00489d2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489d2c: jne 0x489d36 */ if (!fZ) goto L_00489d36;
L_00489d2e:; BB(0x00489d2e);
    /* 00489d2e: fld dword ptr [0x901294] */ FPUSH(R_F32((u32)(0x901294u)));
    /* 00489d34: jmp 0x489d3c */ goto L_00489d3c;
L_00489d36:; BB(0x00489d36);
    /* 00489d36: fld dword ptr [0x901298] */ FPUSH(R_F32((u32)(0x901298u)));
L_00489d3c:; BB(0x00489d3c);
    /* 00489d3c: fmul dword ptr [0x901290] */ ST(0) = ST(0) * R_F32((u32)(0x901290u));
    /* 00489d42: fild dword ptr [edx + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x60u)));
    /* 00489d45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00489d47: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00489d4b: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00489d50: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00489d55: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00489d59: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00489d5d: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00489d61: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00489d65: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00489d68: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00489d6c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00489d6f: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00489d72: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 00489d75: mov ecx, esi */ r_ecx = r_esi;
    /* 00489d77: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00489d7b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00489d7f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x489d84u); f_0082dcbc();
    /* 00489d84: fld dword ptr [0x90114c] */ FPUSH(R_F32((u32)(0x90114cu)));
    /* 00489d8a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00489d8c: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00489d8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00489d92: mov ecx, esi */ r_ecx = r_esi;
    /* 00489d94: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x489d99u); f_0082ddd8();
    /* 00489d99: fld dword ptr [0x90114c] */ FPUSH(R_F32((u32)(0x90114cu)));
    /* 00489d9f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00489da1: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00489da5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_00489da9:; BB(0x00489da9);
    /* 00489da9: mov dword ptr [esp + 4], 0x41f00000 */ W32((u32)(r_esp+0x4u), 0x41f00000u);
L_00489db1:; BB(0x00489db1);
    /* 00489db1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00489db4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00489db6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489db7: mov ecx, edi */ r_ecx = r_edi;
    /* 00489db9: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x489dbeu); f_007b4c58();
    /* 00489dbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489dc0: je 0x489dd0 */ if (fZ) goto L_00489dd0;
L_00489dc2:; BB(0x00489dc2);
    /* 00489dc2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00489dc6: fadd dword ptr [0x90128c] */ ST(0) = ST(0) + R_F32((u32)(0x90128cu));
    /* 00489dcc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00489dd0:; BB(0x00489dd0);
    /* 00489dd0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00489dd3: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00489dd6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x489ddbu); f_0082f9c4();
    /* 00489ddb: mov esi, dword ptr [0xa46d70] */ r_esi = R32((u32)(0xa46d70u));
    /* 00489de1: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 00489de7: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00489ded: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489df0: jne 0x489df8 */ if (!fZ) goto L_00489df8;
L_00489df2:; BB(0x00489df2);
    /* 00489df2: mov esi, dword ptr [0xa46d74] */ r_esi = R32((u32)(0xa46d74u));
L_00489df8:; BB(0x00489df8);
    /* 00489df8: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00489dfc: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00489e00: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00489e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489e04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00489e05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00489e06: mov ecx, edi */ r_ecx = r_edi;
    /* 00489e08: call 0x489b0c */ r_esp -= 4; W32(r_esp, 0x489e0du); f_00489b0c();
    /* 00489e0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489e0e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489e12: mov ecx, edi */ r_ecx = r_edi;
    /* 00489e14: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489e17: call 0x489a9c */ r_esp -= 4; W32(r_esp, 0x489e1cu); f_00489a9c();
    /* 00489e1c: push dword ptr [0xa46d70] */ { u32 v = R32((u32)(0xa46d70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489e22: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489e26: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489e29: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00489e2c: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x489e31u); f_007a8c74();
    /* 00489e31: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 00489e34: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00489e37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489e38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00489e39: ret  */ FN_RET(0x00489c90); r_esp += 4; return;
}

void f_00489e3c(void) /* sub_489E3C */
{
    FN_ENTER(0x00489e3c);
    /* 00489e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489e3d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489e40: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00489e42: movzx eax, byte ptr [0xa46d78] */ r_eax = (u32)R8((u32)(0xa46d78u));
    /* 00489e49: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00489e4b: jne 0x489e61 */ if (!fZ) goto L_00489e61;
L_00489e4d:; BB(0x00489e4d);
    /* 00489e4d: mov dword ptr [0xa46d7c], 0x3faaaaab */ W32((u32)(0xa46d7cu), 0x3faaaaabu);
    /* 00489e57: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00489e5c: mov byte ptr [0xa46d78], al */ W8((u32)(0xa46d78u), (u8)r_eax);
L_00489e61:; BB(0x00489e61);
    /* 00489e61: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00489e64: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00489e67: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00489e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00489e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489e6d: call 0x489c28 */ r_esp -= 4; W32(r_esp, 0x489e72u); f_00489c28();
    /* 00489e72: fld dword ptr [0xa46d7c] */ FPUSH(R_F32((u32)(0xa46d7cu)));
    /* 00489e78: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00489e7e: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00489e84: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489e87: jne 0x489e8f */ if (!fZ) goto L_00489e8f;
L_00489e89:; BB(0x00489e89);
    /* 00489e89: fmul dword ptr [ebp + 0x3cc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3ccu));
L_00489e8f:; BB(0x00489e8f);
    /* 00489e8f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00489e92: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00489e94: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00489e98: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00489e9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489e9e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00489ea0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00489ea2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00489ea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489ea6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00489ea9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489eab: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00489eaf: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00489eb3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00489eb6: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00489eb9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00489ebb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x489ec0u); f_0082ebac();
    /* 00489ec0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00489ec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00489ec4: ret  */ FN_RET(0x00489e3c); r_esp += 4; return;
}

void f_00489ec8(void) /* sub_489EC8 */
{
    FN_ENTER(0x00489ec8);
    /* 00489ec8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00489ecb: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 00489ed1: and eax, 0xfffff5ff */ {  u32 a = r_eax; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00489ed6: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00489ed9: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00489ee0: call 0x48918c */ r_esp -= 4; W32(r_esp, 0x489ee5u); f_0048918c();
    /* 00489ee5: ret  */ FN_RET(0x00489ec8); r_esp += 4; return;
}

void f_00489ee8(void) /* sub_489EE8 */
{
    FN_ENTER(0x00489ee8);
    /* 00489ee8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489ee9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00489eea: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489eed: mov edx, ecx */ r_edx = r_ecx;
    /* 00489eef: mov esi, dword ptr [edx + 0x41c] */ r_esi = R32((u32)(r_edx+0x41cu));
    /* 00489ef5: lea eax, [edx + 0x454] */ r_eax = (u32)(r_edx+0x454u);
    /* 00489efb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00489efd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00489eff: jle 0x489f3c */ if ((fZ||fS!=fO)) goto L_00489f3c;
L_00489f01:; BB(0x00489f01);
    /* 00489f01: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00489f05: mov edi, edx */ r_edi = r_edx;
    /* 00489f07: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00489f0a: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00489f0d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489f0f: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00489f12: lea esi, [esi + ecx + 0x420] */ r_esi = (u32)(r_esi+r_ecx+0x420u);
    /* 00489f19: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00489f1b: mov ebp, eax */ r_ebp = r_eax;
L_00489f1d:; BB(0x00489f1d);
    /* 00489f1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489f1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489f1f: call 0x48b478 */ r_esp -= 4; W32(r_esp, 0x489f24u); f_0048b478();
    /* 00489f24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489f27: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00489f2a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00489f2d: cmp ebx, dword ptr [edi + 0x41c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x41cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00489f33: jl 0x489f1d */ if ((fS!=fO)) goto L_00489f1d;
L_00489f35:; BB(0x00489f35);
    /* 00489f35: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00489f39: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00489f3c:; BB(0x00489f3c);
    /* 00489f3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00489f3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489f40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489f41: ret  */ FN_RET(0x00489ee8); r_esp += 4; return;
}

void f_00489f00(void)
{
    FN_ENTER(0x00489f00);
    /* 00489f00: cmp ecx, dword ptr [ecx - 0x74fbdb84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ecx+0x8b04247cu)); u32 r = (a - b) & 0xffffffffu;   }
    /* 00489f06: cli  */ UNSUP(0x00489f06, "cli ");
    /* 00489f07: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00489f0a: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00489f0d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00489f0f: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00489f12: lea esi, [esi + ecx + 0x420] */ r_esi = (u32)(r_esi+r_ecx+0x420u);
    /* 00489f19: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00489f1b: mov ebp, eax */ r_ebp = r_eax;
L_00489f1d:; BB(0x00489f1d);
    /* 00489f1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489f1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00489f1f: call 0x48b478 */ r_esp -= 4; W32(r_esp, 0x489f24u); f_0048b478();
    /* 00489f24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00489f27: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00489f2a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00489f2d: cmp ebx, dword ptr [edi + 0x41c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x41cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00489f33: jl 0x489f1d */ if ((fS!=fO)) goto L_00489f1d;
L_00489f35:; BB(0x00489f35);
    /* 00489f35: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00489f39: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00489f3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00489f3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00489f40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00489f41: ret  */ FN_RET(0x00489f00); r_esp += 4; return;
}

void f_00489f44(void) /* sub_489F44 */
{
    FN_ENTER(0x00489f44);
    /* 00489f44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00489f45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00489f46: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00489f49: mov edi, ecx */ r_edi = r_ecx;
    /* 00489f4b: mov ecx, dword ptr [edi + 0x380] */ r_ecx = R32((u32)(r_edi+0x380u));
    /* 00489f51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00489f53: je 0x48a135 */ if (fZ) goto L_0048a135;
L_00489f59:; BB(0x00489f59);
    /* 00489f59: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00489f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00489f5d: call 0x49e360 */ r_esp -= 4; W32(r_esp, 0x489f62u); f_0049e360();
    /* 00489f62: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00489f66: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00489f69: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00489f6c: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 00489f6f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00489f73: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00489f76: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00489f7a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00489f7e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x489f83u); f_0082f9c4();
    /* 00489f83: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00489f87: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x489f8cu); f_0083173c();
    /* 00489f8c: fcom dword ptr [0x901264] */ fx_compare(ST(0), R_F32((u32)(0x901264u))); 
    /* 00489f92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489f94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00489f95: jae 0x48a133 */ if (!fC) goto L_0048a133;
L_00489f9b:; BB(0x00489f9b);
    /* 00489f9b: fcomp dword ptr [0x90126c] */ fx_compare(ST(0), R_F32((u32)(0x90126cu))); FPOP();
    /* 00489fa1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00489fa3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00489fa4: ja 0x489fae */ if ((!fC&&!fZ)) goto L_00489fae;
L_00489fa6:; BB(0x00489fa6);
    /* 00489fa6: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
L_00489fae:; BB(0x00489fae);
    /* 00489fae: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00489fb2: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x489fb7u); f_0082df08();
    /* 00489fb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00489fb9: fld dword ptr [0x901264] */ FPUSH(R_F32((u32)(0x901264u)));
    /* 00489fbf: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00489fc3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00489fc5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00489fc9: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00489fcd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489fcf: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00489fd1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00489fd3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00489fd5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489fd7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00489fdb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00489fdd: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00489fe1: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00489fe5: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00489fe9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00489fec: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x489ff1u); f_0082ebac();
    /* 00489ff1: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00489ff5: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00489ff8: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 00489ffb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00489fff: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0048a002: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0048a006: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048a00a: lea esi, [edi + 0x44] */ r_esi = (u32)(r_edi+0x44u);
    /* 0048a00d: mov edx, esi */ r_edx = r_esi;
    /* 0048a00f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48a014u); f_0082f9c4();
    /* 0048a014: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0048a018: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48a01du); f_0083173c();
    /* 0048a01d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0048a021: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048a025: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048a029: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0048a02d: mov edx, esi */ r_edx = r_esi;
    /* 0048a02f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048a033: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0048a037: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0048a03b: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0048a03f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48a044u); f_0082f9c4();
    /* 0048a044: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0048a048: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48a04du); f_0083173c();
    /* 0048a04d: fld dword ptr [0x90126c] */ FPUSH(R_F32((u32)(0x90126cu)));
    /* 0048a053: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0048a057: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048a059: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a05b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a05c: jbe 0x48a065 */ if ((fC||fZ)) goto L_0048a065;
L_0048a05e:; BB(0x0048a05e);
    /* 0048a05e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048a060: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a062: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a063: jb 0x48a084 */ if (fC) goto L_0048a084;
L_0048a065:; BB(0x0048a065);
    /* 0048a065: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a067: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a069: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048a06d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0048a071: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0048a075: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0048a078: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0048a07b: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 0048a07e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a081: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048a082: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048a083: ret  */ FN_RET(0x00489f44); r_esp += 4; return;
L_0048a084:; BB(0x0048a084);
    /* 0048a084: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0048a086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a088: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0048a08c: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48a091u); f_0082df08();
    /* 0048a091: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a093: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0048a097: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48a09cu); f_0082df08();
    /* 0048a09c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a09e: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0048a0a2: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0048a0a6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48a0abu); f_0082ebac();
    /* 0048a0ab: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0048a0af: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48a0b4u); f_0083173c();
    /* 0048a0b4: fcomp dword ptr [0x90126c] */ fx_compare(ST(0), R_F32((u32)(0x90126cu))); FPOP();
    /* 0048a0ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048a0bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048a0bd: ja 0x48a0da */ if ((!fC&&!fZ)) goto L_0048a0da;
L_0048a0bf:; BB(0x0048a0bf);
    /* 0048a0bf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048a0c3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0048a0c7: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0048a0cb: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0048a0ce: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0048a0d1: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 0048a0d4: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a0d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048a0d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048a0d9: ret  */ FN_RET(0x00489f44); r_esp += 4; return;
L_0048a0da:; BB(0x0048a0da);
    /* 0048a0da: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0048a0de: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48a0e3u); f_0082df08();
    /* 0048a0e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048a0e5: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0048a0e9: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0048a0ed: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048a0ef: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048a0f3: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0048a0f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048a0f9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0048a0fb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048a0fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048a0ff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048a101: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0048a105: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0048a109: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0048a10d: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0048a111: mov edx, esi */ r_edx = r_esi;
    /* 0048a113: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48a118u); f_0082ebac();
    /* 0048a118: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0048a11c: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0048a120: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0048a124: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0048a127: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0048a12a: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 0048a12d: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a130: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048a131: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048a132: ret  */ FN_RET(0x00489f44); r_esp += 4; return;
L_0048a133:; BB(0x0048a133);
    /* 0048a133: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048a135:; BB(0x0048a135);
    /* 0048a135: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048a138: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048a139: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048a13a: ret  */ FN_RET(0x00489f44); r_esp += 4; return;
}

