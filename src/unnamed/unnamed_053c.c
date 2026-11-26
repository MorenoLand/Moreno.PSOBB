#include "protos.h"

void f_0053c194(void) /* sub_53C194 */
{
    FN_ENTER(0x0053c194);
    /* 0053c194: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c195: mov edi, ecx */ r_edi = r_ecx;
    /* 0053c197: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c199: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c19b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53c1a0u); f_007aaa30();
    /* 0053c1a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c1a2: jne 0x53c1b4 */ if (!fZ) goto L_0053c1b4;
L_0053c1a4:; BB(0x0053c1a4);
    /* 0053c1a4: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1a9: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c1ab: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53c1b0u); f_007aaa30();
    /* 0053c1b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c1b2: je 0x53c1c5 */ if (fZ) goto L_0053c1c5;
L_0053c1b4:; BB(0x0053c1b4);
    /* 0053c1b4: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1b9: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053c1bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1bd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x53c1c2u); f_0050b510();
    /* 0053c1c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0053c1c5:; BB(0x0053c1c5);
    /* 0053c1c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c1c6: ret  */ FN_RET(0x0053c194); r_esp += 4; return;
}

void f_0053c1c8(void) /* sub_53C1C8 */
{
    FN_ENTER(0x0053c1c8);
    /* 0053c1c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c1ca: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c1cd: mov edi, ecx */ r_edi = r_ecx;
    /* 0053c1cf: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0053c1d3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c1d6: je 0x53c38d */ if (fZ) goto L_0053c38d;
L_0053c1dc:; BB(0x0053c1dc);
    /* 0053c1dc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c1df: je 0x53c326 */ if (fZ) goto L_0053c326;
L_0053c1e5:; BB(0x0053c1e5);
    /* 0053c1e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c1e7: jne 0x53c374 */ if (!fZ) goto L_0053c374;
L_0053c1ed:; BB(0x0053c1ed);
    /* 0053c1ed: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c1ef: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53c1f4u); f_007aa094();
    /* 0053c1f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c1f6: call 0x53c3d0 */ r_esp -= 4; W32(r_esp, 0x53c1fbu); f_0053c3d0();
    /* 0053c1fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c1fd: je 0x53c20d */ if (fZ) goto L_0053c20d;
L_0053c1ff:; BB(0x0053c1ff);
    /* 0053c1ff: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c201: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53c206u); f_005213d8();
    /* 0053c206: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c208: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53c20du); f_00521410();
L_0053c20d:; BB(0x0053c20d);
    /* 0053c20d: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0053c213: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0053c219: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0053c21b: fmul qword ptr [0x923168] */ ST(0) = ST(0) * R_F64((u32)(0x923168u));
    /* 0053c221: fdiv qword ptr [0x923160] */ ST(0) = ST(0) / R_F64((u32)(0x923160u));
    /* 0053c227: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053c22a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053c22e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053c233: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053c237: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053c23b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053c23f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053c242: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0053c246: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c24b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c24c: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053c24f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x53c254u); f_007a8c74();
    /* 0053c254: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c259: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c25e: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0053c261: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c262: push dword ptr [edi + 0x488] */ { u32 v = R32((u32)(r_edi+0x488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053c268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c269: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x53c26eu); f_00782ac0();
    /* 0053c26e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c271: mov edx, dword ptr [0xa7362c] */ r_edx = R32((u32)(0xa7362cu));
    /* 0053c277: mov dword ptr [edi + 0x488], eax */ W32((u32)(r_edi+0x488u), r_eax);
    /* 0053c27d: fild dword ptr [edx + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x28u)));
    /* 0053c280: fcomp dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); FPOP();
    /* 0053c286: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053c288: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053c289: jb 0x53c2d8 */ if (fC) goto L_0053c2d8;
L_0053c28b:; BB(0x0053c28b);
    /* 0053c28b: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0053c28e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53c293u); f_0082dcbc();
    /* 0053c293: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0053c297: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0053c29a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53c29fu); f_0082ddd8();
    /* 0053c29f: fld dword ptr [edi + 0x3a8] */ FPUSH(R_F32((u32)(r_edi+0x3a8u)));
    /* 0053c2a5: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0053c2a9: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 0053c2af: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053c2b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053c2b3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0053c2b7: mov ecx, 0x1800 */ r_ecx = 0x1800u;
    /* 0053c2bc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53c2c1u); f_0082ddd8();
    /* 0053c2c1: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0053c2c5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0053c2c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053c2c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053c2ca: jb 0x53c30d */ if (fC) goto L_0053c30d;
L_0053c2cc:; BB(0x0053c2cc);
    /* 0053c2cc: mov dword ptr [edi + 0x4b4], 1 */ W32((u32)(r_edi+0x4b4u), 0x1u);
    /* 0053c2d6: jmp 0x53c30d */ goto L_0053c30d;
L_0053c2d8:; BB(0x0053c2d8);
    /* 0053c2d8: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0053c2db: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53c2e0u); f_0082dcbc();
    /* 0053c2e0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0053c2e4: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0053c2e7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53c2ecu); f_0082ddd8();
    /* 0053c2ec: mov eax, dword ptr [0xa7362c] */ r_eax = R32((u32)(0xa7362cu));
    /* 0053c2f1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053c2f4: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c2f7: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0053c2fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053c2fe: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0053c302: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0053c306: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c308: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x53c30du); f_005209d4();
L_0053c30d:; BB(0x0053c30d);
    /* 0053c30d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053c30f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c311: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53c317u); call_ind(t); }
    /* 0053c317: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c319: call 0x53b4f8 */ r_esp -= 4; W32(r_esp, 0x53c31eu); f_0053b4f8();
    /* 0053c31e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c321: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053c322: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c323: ret 4 */ FN_RET(0x0053c1c8); r_esp += 8; return;
L_0053c326:; BB(0x0053c326);
    /* 0053c326: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0053c32c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c32e: je 0x53c37c */ if (fZ) goto L_0053c37c;
L_0053c330:; BB(0x0053c330);
    /* 0053c330: mov edx, dword ptr [0xa7362c] */ r_edx = R32((u32)(0xa7362cu));
    /* 0053c336: fild dword ptr [edx + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x2cu)));
    /* 0053c339: fcomp dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); FPOP();
    /* 0053c33f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053c341: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053c342: ja 0x53c360 */ if ((!fC&&!fZ)) goto L_0053c360;
L_0053c344:; BB(0x0053c344);
    /* 0053c344: mov eax, dword ptr [edi + 0x498] */ r_eax = R32((u32)(r_edi+0x498u));
    /* 0053c34a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053c34d: jge 0x53c360 */ if ((fS==fO)) goto L_0053c360;
L_0053c34f:; BB(0x0053c34f);
    /* 0053c34f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c351: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c353: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c358u); f_0051f62c();
    /* 0053c358: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c35b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053c35c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c35d: ret 4 */ FN_RET(0x0053c1c8); r_esp += 8; return;
L_0053c360:; BB(0x0053c360);
    /* 0053c360: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 0053c366: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c369: jne 0x53c374 */ if (!fZ) goto L_0053c374;
L_0053c36b:; BB(0x0053c36b);
    /* 0053c36b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c36d: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c36f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c374u); f_0051f62c();
L_0053c374:; BB(0x0053c374);
    /* 0053c374: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c377: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053c378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c379: ret 4 */ FN_RET(0x0053c1c8); r_esp += 8; return;
L_0053c37c:; BB(0x0053c37c);
    /* 0053c37c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c37e: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c380: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c385u); f_0051f62c();
    /* 0053c385: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c388: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053c389: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c38a: ret 4 */ FN_RET(0x0053c1c8); r_esp += 8; return;
L_0053c38d:; BB(0x0053c38d);
    /* 0053c38d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c38f: mov eax, 1 */ r_eax = 0x1u;
    /* 0053c394: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053c39b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c39d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53c3a2u); f_0051f664();
    /* 0053c3a2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053c3a4: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c3a6: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x53c3acu); call_ind(t); }
    /* 0053c3ac: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0053c3b2: mov dword ptr [edi + 0x4b4], 0 */ W32((u32)(r_edi+0x4b4u), 0x0u);
    /* 0053c3bc: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053c3bf: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0053c3c5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c3c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053c3c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c3ca: ret 4 */ FN_RET(0x0053c1c8); r_esp += 8; return;
}

void f_0053c3d0(void) /* sub_53C3D0 */
{
    FN_ENTER(0x0053c3d0);
    /* 0053c3d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053c3d3: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0053c3d9: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053c3db: jne 0x53c3eb */ if (!fZ) goto L_0053c3eb;
L_0053c3dd:; BB(0x0053c3dd);
    /* 0053c3dd: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c3e4: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53c3e9u); f_00520ea0();
    /* 0053c3e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c3ea: ret  */ FN_RET(0x0053c3d0); r_esp += 4; return;
L_0053c3eb:; BB(0x0053c3eb);
    /* 0053c3eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c3ed: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x53c3f2u); f_0052126c();
    /* 0053c3f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c3f4: jne 0x53c405 */ if (!fZ) goto L_0053c405;
L_0053c3f6:; BB(0x0053c3f6);
    /* 0053c3f6: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0053c3fc: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c3ff: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
L_0053c405:; BB(0x0053c405);
    /* 0053c405: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c406: ret  */ FN_RET(0x0053c3d0); r_esp += 4; return;
}

void f_0053c408(void) /* sub_53C408 */
{
    FN_ENTER(0x0053c408);
    /* 0053c408: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c409: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053c40b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053c40f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c412: je 0x53c4f8 */ if (fZ) goto L_0053c4f8;
L_0053c418:; BB(0x0053c418);
    /* 0053c418: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c41b: je 0x53c4ce */ if (fZ) goto L_0053c4ce;
L_0053c421:; BB(0x0053c421);
    /* 0053c421: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c423: jne 0x53c4e7 */ if (!fZ) goto L_0053c4e7;
L_0053c429:; BB(0x0053c429);
    /* 0053c429: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c42b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53c430u); f_007aa094();
    /* 0053c430: mov eax, dword ptr [ebx + 0x4b4] */ r_eax = R32((u32)(r_ebx+0x4b4u));
    /* 0053c436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c438: jne 0x53c494 */ if (!fZ) goto L_0053c494;
L_0053c43a:; BB(0x0053c43a);
    /* 0053c43a: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c43f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c441: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53c446u); f_00520ea0();
    /* 0053c446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c448: je 0x53c456 */ if (fZ) goto L_0053c456;
L_0053c44a:; BB(0x0053c44a);
    /* 0053c44a: mov dword ptr [ebx + 0x4b4], 2 */ W32((u32)(r_ebx+0x4b4u), 0x2u);
    /* 0053c454: jmp 0x53c4b6 */ goto L_0053c4b6;
L_0053c456:; BB(0x0053c456);
    /* 0053c456: mov eax, dword ptr [ebx + 0x4b8] */ r_eax = R32((u32)(r_ebx+0x4b8u));
    /* 0053c45c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053c45f: mov dword ptr [ebx + 0x4b8], eax */ W32((u32)(r_ebx+0x4b8u), r_eax);
    /* 0053c465: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053c468: jl 0x53c4b6 */ if ((fS!=fO)) goto L_0053c4b6;
L_0053c46a:; BB(0x0053c46a);
    /* 0053c46a: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0053c470: mov dword ptr [ebx + 0x4b4], 1 */ W32((u32)(r_ebx+0x4b4u), 0x1u);
    /* 0053c47a: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 0053c480: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x53c483u); call_ind(t); }
    /* 0053c483: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0053c489: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053c48c: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0053c492: jmp 0x53c4b6 */ goto L_0053c4b6;
L_0053c494:; BB(0x0053c494);
    /* 0053c494: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c497: jne 0x53c4b6 */ if (!fZ) goto L_0053c4b6;
L_0053c499:; BB(0x0053c499);
    /* 0053c499: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0053c49f: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 0053c4a5: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x53c4a8u); call_ind(t); }
    /* 0053c4a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c4aa: je 0x53c4b6 */ if (fZ) goto L_0053c4b6;
L_0053c4ac:; BB(0x0053c4ac);
    /* 0053c4ac: mov dword ptr [ebx + 0x4b4], 3 */ W32((u32)(r_ebx+0x4b4u), 0x3u);
L_0053c4b6:; BB(0x0053c4b6);
    /* 0053c4b6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053c4b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c4ba: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x53c4c0u); call_ind(t); }
    /* 0053c4c0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053c4c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c4c4: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53c4cau); call_ind(t); }
    /* 0053c4ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c4cb: ret 4 */ FN_RET(0x0053c408); r_esp += 8; return;
L_0053c4ce:; BB(0x0053c4ce);
    /* 0053c4ce: mov eax, dword ptr [ebx + 0x4b4] */ r_eax = R32((u32)(r_ebx+0x4b4u));
    /* 0053c4d4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c4d7: je 0x53c4eb */ if (fZ) goto L_0053c4eb;
L_0053c4d9:; BB(0x0053c4d9);
    /* 0053c4d9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053c4dc: jne 0x53c4e7 */ if (!fZ) goto L_0053c4e7;
L_0053c4de:; BB(0x0053c4de);
    /* 0053c4de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c4e2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c4e7u); f_0051f62c();
L_0053c4e7:; BB(0x0053c4e7);
    /* 0053c4e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c4e8: ret 4 */ FN_RET(0x0053c408); r_esp += 8; return;
L_0053c4eb:; BB(0x0053c4eb);
    /* 0053c4eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c4ef: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c4f4u); f_0051f62c();
    /* 0053c4f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c4f5: ret 4 */ FN_RET(0x0053c408); r_esp += 8; return;
L_0053c4f8:; BB(0x0053c4f8);
    /* 0053c4f8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053c4fc: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0053c503: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c505: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53c50au); f_0051f664();
    /* 0053c50a: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0053c510: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0053c512: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053c515: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0053c51b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c51d: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x53c523u); call_ind(t); }
    /* 0053c523: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c525: mov dword ptr [ebx + 0x4b4], eax */ W32((u32)(r_ebx+0x4b4u), r_eax);
    /* 0053c52b: mov dword ptr [ebx + 0x4b8], eax */ W32((u32)(r_ebx+0x4b8u), r_eax);
    /* 0053c531: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c532: ret 4 */ FN_RET(0x0053c408); r_esp += 8; return;
}

void f_0053c538(void) /* sub_53C538 */
{
    FN_ENTER(0x0053c538);
    /* 0053c538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c539: mov edi, ecx */ r_edi = r_ecx;
    /* 0053c53b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053c53f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c542: je 0x53c676 */ if (fZ) goto L_0053c676;
L_0053c548:; BB(0x0053c548);
    /* 0053c548: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c54b: je 0x53c65e */ if (fZ) goto L_0053c65e;
L_0053c551:; BB(0x0053c551);
    /* 0053c551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c553: jne 0x53c64b */ if (!fZ) goto L_0053c64b;
L_0053c559:; BB(0x0053c559);
    /* 0053c559: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c55b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53c560u); f_007aa094();
    /* 0053c560: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c565: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c567: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53c56cu); f_00520ea0();
    /* 0053c56c: mov eax, dword ptr [edi + 0x4b4] */ r_eax = R32((u32)(r_edi+0x4b4u));
    /* 0053c572: mov edx, dword ptr [edi + 0x4b8] */ r_edx = R32((u32)(r_edi+0x4b8u));
    /* 0053c578: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053c57b: mov dword ptr [edi + 0x4b4], eax */ W32((u32)(r_edi+0x4b4u), r_eax);
    /* 0053c581: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c583: jne 0x53c5f1 */ if (!fZ) goto L_0053c5f1;
L_0053c585:; BB(0x0053c585);
    /* 0053c585: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053c588: jle 0x53c5c9 */ if ((fZ||fS!=fO)) goto L_0053c5c9;
L_0053c58a:; BB(0x0053c58a);
    /* 0053c58a: mov dword ptr [edi + 0x4b8], 1 */ W32((u32)(r_edi+0x4b8u), 0x1u);
    /* 0053c594: push 0x1d9 */ { u32 v = 0x1d9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c599: mov eax, 3 */ r_eax = 0x3u;
    /* 0053c59e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053c5a5: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c5a7: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53c5acu); f_007879b8();
    /* 0053c5ac: mov ecx, eax */ r_ecx = r_eax;
    /* 0053c5ae: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0053c5b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053c5b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5b7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53c5bcu); f_00814298();
    /* 0053c5bc: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5c1: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x53c5c6u); f_00814680();
    /* 0053c5c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053c5c9:; BB(0x0053c5c9);
    /* 0053c5c9: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c5cb: call 0x53c194 */ r_esp -= 4; W32(r_esp, 0x53c5d0u); f_0053c194();
    /* 0053c5d0: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5d5: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053c5db: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c5dd: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053c5e3: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x53c5e8u); f_005207c4();
    /* 0053c5e8: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c5ea: call 0x53b4f8 */ r_esp -= 4; W32(r_esp, 0x53c5efu); f_0053b4f8();
    /* 0053c5ef: jmp 0x53c611 */ goto L_0053c611;
L_0053c5f1:; BB(0x0053c5f1);
    /* 0053c5f1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c5f4: jne 0x53c611 */ if (!fZ) goto L_0053c611;
L_0053c5f6:; BB(0x0053c5f6);
    /* 0053c5f6: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c5f8: call 0x53cd1c */ r_esp -= 4; W32(r_esp, 0x53c5fdu); f_0053cd1c();
    /* 0053c5fd: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0053c603: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053c605: je 0x53c611 */ if (fZ) goto L_0053c611;
L_0053c607:; BB(0x0053c607);
    /* 0053c607: mov dword ptr [edi + 0x4b8], 2 */ W32((u32)(r_edi+0x4b8u), 0x2u);
L_0053c611:; BB(0x0053c611);
    /* 0053c611: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0053c617: lea ecx, [edi + 0x3cc] */ r_ecx = (u32)(r_edi+0x3ccu);
    /* 0053c61d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x53c620u); call_ind(t); }
    /* 0053c620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c622: je 0x53c672 */ if (fZ) goto L_0053c672;
L_0053c624:; BB(0x0053c624);
    /* 0053c624: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0053c62a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053c62c: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053c62f: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0053c635: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c637: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x53c63du); call_ind(t); }
    /* 0053c63d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053c63f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c641: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53c647u); call_ind(t); }
    /* 0053c647: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c648: ret 4 */ FN_RET(0x0053c538); r_esp += 8; return;
L_0053c64b:; BB(0x0053c64b);
    /* 0053c64b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053c64e: jne 0x53c672 */ if (!fZ) goto L_0053c672;
L_0053c650:; BB(0x0053c650);
    /* 0053c650: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0053c652: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c654: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x53c65au); call_ind(t); }
    /* 0053c65a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c65b: ret 4 */ FN_RET(0x0053c538); r_esp += 8; return;
L_0053c65e:; BB(0x0053c65e);
    /* 0053c65e: mov eax, dword ptr [edi + 0x4b8] */ r_eax = R32((u32)(r_edi+0x4b8u));
    /* 0053c664: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053c667: jne 0x53c672 */ if (!fZ) goto L_0053c672;
L_0053c669:; BB(0x0053c669);
    /* 0053c669: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c66b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c66d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c672u); f_0051f62c();
L_0053c672:; BB(0x0053c672);
    /* 0053c672: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c673: ret 4 */ FN_RET(0x0053c538); r_esp += 8; return;
L_0053c676:; BB(0x0053c676);
    /* 0053c676: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c678: mov eax, 1 */ r_eax = 0x1u;
    /* 0053c67d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053c684: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c686: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53c68bu); f_0051f664();
    /* 0053c68b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0053c691: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053c693: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053c696: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053c699: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0053c69f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c6a1: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x53c6a7u); call_ind(t); }
    /* 0053c6a7: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0053c6ad: lea ecx, [edi + 0x3cc] */ r_ecx = (u32)(r_edi+0x3ccu);
    /* 0053c6b3: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x53c6b6u); call_ind(t); }
    /* 0053c6b6: push 0x1d8 */ { u32 v = 0x1d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053c6bd: mov dword ptr [edi + 0x4b4], eax */ W32((u32)(r_edi+0x4b4u), r_eax);
    /* 0053c6c3: mov dword ptr [edi + 0x4b8], eax */ W32((u32)(r_edi+0x4b8u), r_eax);
    /* 0053c6c9: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c6cb: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53c6d0u); f_007879b8();
    /* 0053c6d0: mov ecx, eax */ r_ecx = r_eax;
    /* 0053c6d2: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0053c6d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053c6d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6db: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53c6e0u); f_00814298();
    /* 0053c6e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c6e3: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0053c6e6: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 0053c6e9: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 0053c6ec: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0053c6ef: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0053c6f2: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 0053c6f5: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0053c6f8: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 0053c6fb: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 0053c6fe: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 0053c704: mov dword ptr [edi + 0x304], edx */ W32((u32)(r_edi+0x304u), r_edx);
    /* 0053c70a: mov dword ptr [edi + 0x308], ecx */ W32((u32)(r_edi+0x308u), r_ecx);
    /* 0053c710: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c712: mov dword ptr [edi + 0x49c], eax */ W32((u32)(r_edi+0x49cu), r_eax);
    /* 0053c718: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 0053c71e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c71f: ret 4 */ FN_RET(0x0053c538); r_esp += 8; return;
}

void f_0053c724(void) /* sub_53C724 */
{
    FN_ENTER(0x0053c724);
    /* 0053c724: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c725: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c728: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053c72a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0053c72e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c731: je 0x53c79a */ if (fZ) goto L_0053c79a;
L_0053c733:; BB(0x0053c733);
    /* 0053c733: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c736: jne 0x53c793 */ if (!fZ) goto L_0053c793;
L_0053c738:; BB(0x0053c738);
    /* 0053c738: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c73d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c73f: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x53c744u); f_00520ea0();
    /* 0053c744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c746: je 0x53c793 */ if (fZ) goto L_0053c793;
L_0053c748:; BB(0x0053c748);
    /* 0053c748: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c74a: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53c74fu); f_005213d8();
    /* 0053c74f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c751: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53c756u); f_00521410();
    /* 0053c756: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 0053c75c: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0053c762: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0053c764: fmul qword ptr [0x923158] */ ST(0) = ST(0) * R_F64((u32)(0x923158u));
    /* 0053c76a: fdiv qword ptr [0x923150] */ ST(0) = ST(0) / R_F64((u32)(0x923150u));
    /* 0053c770: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053c773: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053c777: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053c77c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053c780: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053c784: fistp dword ptr [ebx + 0x60] */ W32((u32)(r_ebx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053c787: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053c78a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c78c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c78e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c793u); f_0051f62c();
L_0053c793:; BB(0x0053c793);
    /* 0053c793: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c796: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c797: ret 4 */ FN_RET(0x0053c724); r_esp += 8; return;
L_0053c79a:; BB(0x0053c79a);
    /* 0053c79a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c79c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c79e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53c7a3u); f_0051f664();
    /* 0053c7a3: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0053c7a9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0053c7ab: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053c7ae: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0053c7b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053c7b6: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x53c7bcu); call_ind(t); }
    /* 0053c7bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c7bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053c7c0: ret 4 */ FN_RET(0x0053c724); r_esp += 8; return;
}

void f_0053c7c4(void) /* sub_53C7C4 */
{
    FN_ENTER(0x0053c7c4);
    /* 0053c7c4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0053c7cb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053c7ce: je 0x53c7d7 */ if (fZ) goto L_0053c7d7;
L_0053c7d0:; BB(0x0053c7d0);
    /* 0053c7d0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0053c7d2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c7d7u); f_0051f62c();
L_0053c7d7:; BB(0x0053c7d7);
    /* 0053c7d7: ret  */ FN_RET(0x0053c7c4); r_esp += 4; return;
}

void f_0053c7d8(void) /* sub_53C7D8 */
{
    FN_ENTER(0x0053c7d8);
    /* 0053c7d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c7d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053c7db: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0053c7e2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c7e5: je 0x53c7f3 */ if (fZ) goto L_0053c7f3;
L_0053c7e7:; BB(0x0053c7e7);
    /* 0053c7e7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c7ea: je 0x53c7f3 */ if (fZ) goto L_0053c7f3;
L_0053c7ec:; BB(0x0053c7ec);
    /* 0053c7ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053c7ee: call 0x53c820 */ r_esp -= 4; W32(r_esp, 0x53c7f3u); f_0053c820();
L_0053c7f3:; BB(0x0053c7f3);
    /* 0053c7f3: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0053c7f9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053c7fb: jne 0x53c814 */ if (!fZ) goto L_0053c814;
L_0053c7fd:; BB(0x0053c7fd);
    /* 0053c7fd: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0053c804: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053c807: je 0x53c81b */ if (fZ) goto L_0053c81b;
L_0053c809:; BB(0x0053c809);
    /* 0053c809: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c80b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053c80d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c812u); f_0051f62c();
    /* 0053c812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c813: ret  */ FN_RET(0x0053c7d8); r_esp += 4; return;
L_0053c814:; BB(0x0053c814);
    /* 0053c814: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053c816: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x53c81bu); f_0051f81c();
L_0053c81b:; BB(0x0053c81b);
    /* 0053c81b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c81c: ret  */ FN_RET(0x0053c7d8); r_esp += 4; return;
}

void f_0053c820(void) /* sub_53C820 */
{
    FN_ENTER(0x0053c820);
    /* 0053c820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053c821: mov edi, ecx */ r_edi = r_ecx;
    /* 0053c823: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 0053c82a: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053c82f: jge 0x53c853 */ if ((fS==fO)) goto L_0053c853;
L_0053c831:; BB(0x0053c831);
    /* 0053c831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c832: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x53c837u); f_0068d5a8();
    /* 0053c837: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053c838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c83a: je 0x53c844 */ if (fZ) goto L_0053c844;
L_0053c83c:; BB(0x0053c83c);
    /* 0053c83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c83d: mov ecx, edi */ r_ecx = r_edi;
    /* 0053c83f: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x53c844u); f_00521388();
L_0053c844:; BB(0x0053c844);
    /* 0053c844: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0053c84a: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053c84d: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
L_0053c853:; BB(0x0053c853);
    /* 0053c853: add dword ptr [edi + 0x49c], 1 */ { u32 ad = (u32)(r_edi+0x49cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c85a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053c85b: ret  */ FN_RET(0x0053c820); r_esp += 4; return;
}

void f_0053c85c(void) /* sub_53C85C */
{
    FN_ENTER(0x0053c85c);
    /* 0053c85c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c85f: fld dword ptr [0x9231d0] */ FPUSH(R_F32((u32)(0x9231d0u)));
    /* 0053c865: mov dword ptr [0xa73614], 0x3f800000 */ W32((u32)(0xa73614u), 0x3f800000u);
    /* 0053c86f: mov dword ptr [0xa73618], 0x41000000 */ W32((u32)(0xa73618u), 0x41000000u);
    /* 0053c879: mov dword ptr [0xa7361c], 0x3fc00000 */ W32((u32)(0xa7361cu), 0x3fc00000u);
    /* 0053c883: mov dword ptr [0xa73610], 0x47afc800 */ W32((u32)(0xa73610u), 0x47afc800u);
    /* 0053c88d: mov dword ptr [0xa73620], 0x40e00000 */ W32((u32)(0xa73620u), 0x40e00000u);
    /* 0053c897: fsub dword ptr [0xa73620] */ ST(0) = ST(0) - R_F32((u32)(0xa73620u));
    /* 0053c89d: fdiv dword ptr [0x9231cc] */ ST(0) = ST(0) / R_F32((u32)(0x9231ccu));
    /* 0053c8a3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053c8a6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053c8aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053c8af: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053c8b3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053c8b7: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053c8bb: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053c8be: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0053c8c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053c8c5: mov dword ptr [0xa73624], eax */ W32((u32)(0xa73624u), r_eax);
    /* 0053c8ca: mov dword ptr [0x9bcdc0], 0 */ W32((u32)(0x9bcdc0u), 0x0u);
    /* 0053c8d4: mov dword ptr [0x9bcc24], 0x41a00000 */ W32((u32)(0x9bcc24u), 0x41a00000u);
    /* 0053c8de: mov dword ptr [0x9bcc28], 0x41000000 */ W32((u32)(0x9bcc28u), 0x41000000u);
    /* 0053c8e8: mov dword ptr [0x9bcc2c], 0x40e00000 */ W32((u32)(0x9bcc2cu), 0x40e00000u);
    /* 0053c8f2: mov dword ptr [0x9bcc58], 0x40400000 */ W32((u32)(0x9bcc58u), 0x40400000u);
    /* 0053c8fc: mov dword ptr [0x9bcc84], 0x40400000 */ W32((u32)(0x9bcc84u), 0x40400000u);
    /* 0053c906: mov dword ptr [0x9bcd08], 0x3f19999a */ W32((u32)(0x9bcd08u), 0x3f19999au);
    /* 0053c910: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053c913: ret  */ FN_RET(0x0053c85c); r_esp += 4; return;
}

void f_0053c914(void)
{
    FN_ENTER(0x0053c914);
    /* 0053c914: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c915: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c917: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c919: push 0x8d5378 */ { u32 v = 0x8d5378u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c91e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053c924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c925: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053c92c: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c932: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053c935: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0053c938: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0053c93b: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0053c93e: mov dword ptr [0xa73604], 0 */ W32((u32)(0xa73604u), 0x0u);
    /* 0053c948: mov dword ptr [0xa73608], 0 */ W32((u32)(0xa73608u), 0x0u);
    /* 0053c952: mov dword ptr [0xa7360c], 0 */ W32((u32)(0xa7360cu), 0x0u);
    /* 0053c95c: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x53c961u); f_00520e6c();
    /* 0053c961: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c963: je 0x53c97e */ if (fZ) goto L_0053c97e;
L_0053c965:; BB(0x0053c965);
    /* 0053c965: push 0x9233e0 */ { u32 v = 0x9233e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c96a: push 0x9bcda8 */ { u32 v = 0x9bcda8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c96f: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x53c974u); f_0051f674();
    /* 0053c974: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c977: mov dword ptr [0xa73628], eax */ W32((u32)(0xa73628u), r_eax);
    /* 0053c97c: jmp 0x53c98e */ goto L_0053c98e;
L_0053c97e:; BB(0x0053c97e);
    /* 0053c97e: push 0x9bcda8 */ { u32 v = 0x9bcda8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c983: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x53c988u); f_0051f6b0();
    /* 0053c988: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053c989: mov dword ptr [0xa73628], eax */ W32((u32)(0xa73628u), r_eax);
L_0053c98e:; BB(0x0053c98e);
    /* 0053c98e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c990: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53c995u); f_0077a684();
    /* 0053c995: mov dword ptr [0xa73638], eax */ W32((u32)(0xa73638u), r_eax);
    /* 0053c99a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c99c: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53c9a1u); f_0077a698();
    /* 0053c9a1: mov dword ptr [0xa73634], eax */ W32((u32)(0xa73634u), r_eax);
    /* 0053c9a6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c9a8: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53c9adu); f_0077a6b4();
    /* 0053c9ad: mov dword ptr [0xa73630], eax */ W32((u32)(0xa73630u), r_eax);
    /* 0053c9b2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c9b4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x53c9b9u); f_0077a6cc();
    /* 0053c9b9: mov edx, eax */ r_edx = r_eax;
    /* 0053c9bb: fld dword ptr [0x9231b4] */ FPUSH(R_F32((u32)(0x9231b4u)));
    /* 0053c9c1: mov dword ptr [0xa7362c], edx */ W32((u32)(0xa7362cu), r_edx);
    /* 0053c9c7: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c9c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053c9cb: mov dword ptr [0xa7364c], ecx */ W32((u32)(0xa7364cu), r_ecx);
    /* 0053c9d1: mov dword ptr [0xa73648], ecx */ W32((u32)(0xa73648u), r_ecx);
    /* 0053c9d7: mov dword ptr [0xa73644], ecx */ W32((u32)(0xa73644u), r_ecx);
    /* 0053c9dd: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0053c9e0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053c9e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053c9e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053c9e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053c9e7: jae 0x53c9eb */ if (!fC) goto L_0053c9eb;
L_0053c9e9:; BB(0x0053c9e9);
    /* 0053c9e9: fst st(1) */ ST(1) = ST(0);
L_0053c9eb:; BB(0x0053c9eb);
    /* 0053c9eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053c9ed: fstp dword ptr [0x9bcd08] */ W_F32((u32)(0x9bcd08u), ST(0)); FPOP();
    /* 0053c9f3: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0053c9f6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053c9f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053c9fa: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0053ca00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ca01: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053ca03: jae 0x53ca07 */ if (!fC) goto L_0053ca07;
L_0053ca05:; BB(0x0053ca05);
    /* 0053ca05: fst st(1) */ ST(1) = ST(0);
L_0053ca07:; BB(0x0053ca07);
    /* 0053ca07: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053ca09: fstp dword ptr [0x9bcd18] */ W_F32((u32)(0x9bcd18u), ST(0)); FPOP();
    /* 0053ca0f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53ca14u); f_008581c5();
    /* 0053ca14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053ca17: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ca1a: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0053ca20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ca22: je 0x53cccd */ if (fZ) goto L_0053cccd;
L_0053ca28:; BB(0x0053ca28);
    /* 0053ca28: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 0053ca32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053ca39: mov ecx, eax */ r_ecx = r_eax;
    /* 0053ca3b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca3d: push dword ptr [0x9bcd08] */ { u32 v = R32((u32)(0x9bcd08u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053ca43: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca48: push dword ptr [0xa73620] */ { u32 v = R32((u32)(0xa73620u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053ca4e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x53ca53u); f_005795a0();
    /* 0053ca53: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0053ca5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ca60: mov dword ptr [0xa7363c], eax */ W32((u32)(0xa7363cu), r_eax);
    /* 0053ca65: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ca6c: mov ebx, dword ptr [0xa73628] */ r_ebx = R32((u32)(0xa73628u));
    /* 0053ca72: mov ecx, dword ptr [ebx + 0x430] */ r_ecx = R32((u32)(r_ebx+0x430u));
    /* 0053ca78: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 0053ca7f: mov eax, 0x1a */ r_eax = 0x1au;
    /* 0053ca84: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0053ca8b: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0053ca91: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 0053ca96: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0053ca9d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0053caa3: mov eax, dword ptr [0x9bcd04] */ r_eax = R32((u32)(0x9bcd04u));
    /* 0053caa8: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0053caaf: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0053cab5: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0053cabc: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0053cac2: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 0053cac8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0053cacf: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0053cad6: lea edi, [ebp - 0x90] */ r_edi = (u32)(r_ebp+0xffffff70u);
    /* 0053cadc: lea esi, [ebp - 0x80] */ r_esi = (u32)(r_ebp+0xffffff80u);
    /* 0053cadf: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0053cae6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053cae7: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0053caee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053caef: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0053caf6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0053cafd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0053cb04: push dword ptr [ecx + eax*8 + 4] */ { u32 v = R32((u32)(r_ecx+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cb08: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cb0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cb0e: call 0x579794 */ r_esp -= 4; W32(r_esp, 0x53cb13u); f_00579794();
    /* 0053cb13: mov eax, dword ptr [0xa7363c] */ r_eax = R32((u32)(0xa7363cu));
    /* 0053cb18: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0053cb1b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0053cb1d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0053cb1f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053cb21: jle 0x53cbf3 */ if ((fZ||fS!=fO)) goto L_0053cbf3;
L_0053cb27:; BB(0x0053cb27);
    /* 0053cb27: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0053cb2a: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0053cb2d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053cb2f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0053cb32: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0053cb35: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0053cb38: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0053cb3b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053cb3e: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0053cb41: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0053cb44: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0053cb47: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053cb4a: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0053cb4d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053cb50: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53cb55u); f_0082f9c4();
    /* 0053cb55: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0053cb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cb59: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x53cb5eu); f_00782868();
    /* 0053cb5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053cb5f: fld dword ptr [0x9231a8] */ FPUSH(R_F32((u32)(0x9231a8u)));
    /* 0053cb65: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053cb67: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 0053cb6a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053cb6d: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0053cb70: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053cb73: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0053cb76: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053cb79: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0053cb7c: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0053cb7f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053cb82: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 0053cb85: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0053cb88: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0053cb8a: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0053cb8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053cb8e: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 0053cb91: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0053cb94: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053cb96: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cb98: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 0053cb9b: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0053cb9e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053cba0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cba2: fld dword ptr [0x9231a4] */ FPUSH(R_F32((u32)(0x9231a4u)));
    /* 0053cba8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053cbaa: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 0053cbad: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 0053cbb0: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053cbb3: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0053cbb6: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0053cbb9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053cbbc: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0053cbbf: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0053cbc2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053cbc5: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0053cbc8: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0053cbcb: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0053cbcd: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0053cbcf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053cbd1: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 0053cbd4: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0053cbd7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053cbd9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cbdb: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0053cbde: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0053cbe1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053cbe3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cbe5: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0053cbe8: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053cbeb: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053cbed: jl 0x53cb27 */ if ((fS!=fO)) goto L_0053cb27;
L_0053cbf3:; BB(0x0053cbf3);
    /* 0053cbf3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0053cbfa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cbfc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53cc01u); f_008581c5();
    /* 0053cc01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053cc04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cc07: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053cc0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cc0c: je 0x53ccc3 */ if (fZ) goto L_0053ccc3;
L_0053cc12:; BB(0x0053cc12);
    /* 0053cc12: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0053cc19: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053cc20: mov eax, dword ptr [0xa73628] */ r_eax = R32((u32)(0xa73628u));
    /* 0053cc25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cc28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc2a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0053cc30: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cc33: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x53cc38u); f_0052d584();
    /* 0053cc38: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0053cc3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cc42: mov dword ptr [0xa73640], eax */ W32((u32)(0xa73640u), r_eax);
    /* 0053cc47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053cc4e: call 0x53df30 */ r_esp -= 4; W32(r_esp, 0x53cc53u); f_0053df30();
    /* 0053cc53: mov eax, dword ptr [0x923140] */ r_eax = R32((u32)(0x923140u));
    /* 0053cc58: movzx edx, word ptr [0x923144] */ r_edx = (u32)R16((u32)(0x923144u));
    /* 0053cc5f: movzx ecx, word ptr [0x923146] */ r_ecx = (u32)R16((u32)(0x923146u));
    /* 0053cc66: movzx ebx, word ptr [0x923148] */ r_ebx = (u32)R16((u32)(0x923148u));
    /* 0053cc6d: mov edi, dword ptr [0xa73628] */ r_edi = R32((u32)(0xa73628u));
    /* 0053cc73: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0053cc79: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053cc7c: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 0053cc80: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0053cc86: mov word ptr [ebp - 0x26], cx */ W16((u32)(r_ebp+0xffffffdau), (u16)r_ecx);
    /* 0053cc8a: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 0053cc8e: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0053cc91: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0053cc94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc97: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc9c: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cc9f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cca2: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cca4: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x53cca9u); f_00608470();
    /* 0053cca9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ccac: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053ccaf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ccb2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ccb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ccb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053ccbf: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ccc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ccc2: ret  */ FN_RET(0x0053c914); r_esp += 4; return;
L_0053ccc3:; BB(0x0053ccc3);
    /* 0053ccc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053ccc5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053ccc8: jmp 0x53cc3f */ f_0053cc3f(); return;
L_0053cccd:; BB(0x0053cccd);
    /* 0053cccd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053cccf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053ccd2: jmp 0x53ca5d */ f_0053ca5d(); return;
}

void f_0053ccd8(void) /* sub_53CCD8 */
{
    FN_ENTER(0x0053ccd8);
    /* 0053ccd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ccd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053ccdb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053ccdf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cce2: je 0x53cd05 */ if (fZ) goto L_0053cd05;
L_0053cce4:; BB(0x0053cce4);
    /* 0053cce4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cce7: je 0x53ccf8 */ if (fZ) goto L_0053ccf8;
L_0053cce9:; BB(0x0053cce9);
    /* 0053cce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053cceb: jne 0x53cd01 */ if (!fZ) goto L_0053cd01;
L_0053cced:; BB(0x0053cced);
    /* 0053cced: add dword ptr [ebx + 0x4b4], 1 */ { u32 ad = (u32)(r_ebx+0x4b4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ccf4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053ccf5: ret 4 */ FN_RET(0x0053ccd8); r_esp += 8; return;
L_0053ccf8:; BB(0x0053ccf8);
    /* 0053ccf8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ccfa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053ccfc: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53cd01u); f_0051f62c();
L_0053cd01:; BB(0x0053cd01);
    /* 0053cd01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053cd02: ret 4 */ FN_RET(0x0053ccd8); r_esp += 8; return;
L_0053cd05:; BB(0x0053cd05);
    /* 0053cd05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053cd09: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53cd0eu); f_0051f664();
    /* 0053cd0e: mov dword ptr [ebx + 0x4b4], 0 */ W32((u32)(r_ebx+0x4b4u), 0x0u);
    /* 0053cd18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053cd19: ret 4 */ FN_RET(0x0053ccd8); r_esp += 8; return;
}

void f_0053cd1c(void) /* sub_53CD1C */
{
    FN_ENTER(0x0053cd1c);
    /* 0053cd1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd1d: mov edi, ecx */ r_edi = r_ecx;
    /* 0053cd1f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053cd21: push 0x41a80000 */ { u32 v = 0x41a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd26: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53cd2bu); f_007aaa30();
    /* 0053cd2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053cd2d: je 0x53cd36 */ if (fZ) goto L_0053cd36;
L_0053cd2f:; BB(0x0053cd2f);
    /* 0053cd2f: mov ecx, edi */ r_ecx = r_edi;
    /* 0053cd31: call 0x53b9a8 */ r_esp -= 4; W32(r_esp, 0x53cd36u); f_0053b9a8();
L_0053cd36:; BB(0x0053cd36);
    /* 0053cd36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053cd37: ret  */ FN_RET(0x0053cd1c); r_esp += 4; return;
}

void f_0053cd38(void) /* sub_53CD38 */
{
    FN_ENTER(0x0053cd38);
    /* 0053cd38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd39: mov ebp, esp */ r_ebp = r_esp;
    /* 0053cd3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd3d: push 0x8d53d6 */ { u32 v = 0x8d53d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053cd48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053cd50: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053cd53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053cd56: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0053cd59: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0053cd5c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0053cd5f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053cd62: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x53cd67u); f_00521840();
    /* 0053cd67: mov ebx, dword ptr [0xa73628] */ r_ebx = R32((u32)(0xa73628u));
    /* 0053cd6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cd70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd72: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0053cd78: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0053cd7b: push 0x9bcc20 */ { u32 v = 0x9bcc20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd80: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0053cd83: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0053cd89: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0053cd8c: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0053cd8f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x53cd94u); f_0051ff3c();
    /* 0053cd94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cd97: mov eax, dword ptr [0xa73628] */ r_eax = R32((u32)(0xa73628u));
    /* 0053cd9c: mov dword ptr [ecx + 0xd8], 0x9bccc0 */ W32((u32)(r_ecx+0xd8u), 0x9bccc0u);
    /* 0053cda6: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0053cdac: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0053cdb2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0053cdb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cdb5: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 0053cdbc: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x53cdc1u); f_007aa4c8();
    /* 0053cdc1: push dword ptr [0xa73630] */ { u32 v = R32((u32)(0xa73630u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cdc7: push dword ptr [0xa73634] */ { u32 v = R32((u32)(0xa73634u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cdcd: push dword ptr [0xa73638] */ { u32 v = R32((u32)(0xa73638u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cdd3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cdd6: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0053cddd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053cde4: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x53cde9u); f_00520c70();
    /* 0053cde9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cdec: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x53cdf1u); f_00520380();
    /* 0053cdf1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cdf4: mov dword ptr [ecx + 0x358], 0x9bcdbc */ W32((u32)(r_ecx+0x358u), 0x9bcdbcu);
    /* 0053cdfe: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce00: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x53ce05u); f_00520390();
    /* 0053ce05: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ce08: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 0053ce12: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce14: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x53ce19u); f_00521820();
    /* 0053ce19: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ce1c: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce1e: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x53ce23u); f_005217fc();
    /* 0053ce23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ce26: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 0053ce2c: mov dword ptr [eax + 0x3c8], 1 */ W32((u32)(r_eax+0x3c8u), 0x1u);
    /* 0053ce36: lea ecx, [eax + 0x3cc] */ r_ecx = (u32)(r_eax+0x3ccu);
    /* 0053ce3c: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x53ce3fu); call_ind(t); }
    /* 0053ce3f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053ce41:; BB(0x0053ce41);
    /* 0053ce41: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ce44: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0053ce47: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053ce49: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0053ce4c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053ce4e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053ce50: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0053ce52: lea ecx, [edx + esi + 0x3e8] */ r_ecx = (u32)(r_edx+r_esi+0x3e8u);
    /* 0053ce59: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x53ce5eu); f_0057739c();
    /* 0053ce5e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053ce61: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ce64: jl 0x53ce41 */ if ((fS!=fO)) goto L_0053ce41;
L_0053ce66:; BB(0x0053ce66);
    /* 0053ce66: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ce69: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0053ce6c: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0053ce6f: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0053ce72: mov dword ptr [ebx + 0x458], eax */ W32((u32)(r_ebx+0x458u), r_eax);
    /* 0053ce78: mov dword ptr [ebx + 0x45c], edx */ W32((u32)(r_ebx+0x45cu), r_edx);
    /* 0053ce7e: mov dword ptr [ebx + 0x490], 1 */ W32((u32)(r_ebx+0x490u), 0x1u);
    /* 0053ce88: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce8d: mov dword ptr [ebx + 0x460], ecx */ W32((u32)(r_ebx+0x460u), r_ecx);
    /* 0053ce93: mov dword ptr [ebx + 0x464], eax */ W32((u32)(r_ebx+0x464u), r_eax);
    /* 0053ce99: mov dword ptr [ebx + 0x468], edx */ W32((u32)(r_ebx+0x468u), r_edx);
    /* 0053ce9f: mov dword ptr [ebx + 0x46c], ecx */ W32((u32)(r_ebx+0x46cu), r_ecx);
    /* 0053cea5: mov dword ptr [ebx + 0x470], eax */ W32((u32)(r_ebx+0x470u), r_eax);
    /* 0053ceab: mov dword ptr [ebx + 0x474], edx */ W32((u32)(r_ebx+0x474u), r_edx);
    /* 0053ceb1: mov dword ptr [ebx + 0x478], ecx */ W32((u32)(r_ebx+0x478u), r_ecx);
    /* 0053ceb7: mov dword ptr [ebx + 0x47c], eax */ W32((u32)(r_ebx+0x47cu), r_eax);
    /* 0053cebd: mov dword ptr [ebx + 0x480], edx */ W32((u32)(r_ebx+0x480u), r_edx);
    /* 0053cec3: mov dword ptr [ebx + 0x484], ecx */ W32((u32)(r_ebx+0x484u), r_ecx);
    /* 0053cec9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0053cecb: mov dword ptr [ebx + 0x488], esi */ W32((u32)(r_ebx+0x488u), r_esi);
    /* 0053ced1: mov dword ptr [ebx + 0x48c], esi */ W32((u32)(r_ebx+0x48cu), r_esi);
    /* 0053ced7: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0053ceda: mov dword ptr [ebx + 0x49c], esi */ W32((u32)(r_ebx+0x49cu), r_esi);
    /* 0053cee0: mov dword ptr [ebx + 0x494], esi */ W32((u32)(r_ebx+0x494u), r_esi);
    /* 0053cee6: mov dword ptr [ebx + 0x498], esi */ W32((u32)(r_ebx+0x498u), r_esi);
    /* 0053ceec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53cef1u); f_005caba4();
    /* 0053cef1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053cef4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cef7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0053cefa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cefc: je 0x53d07c */ if (fZ) goto L_0053d07c;
L_0053cf02:; BB(0x0053cf02);
    /* 0053cf02: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0053cf09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053cf10: mov eax, ebx */ r_eax = r_ebx;
    /* 0053cf12: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cf15: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf17: push 0x9bcc4c */ { u32 v = 0x9bcc4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf1e: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x53cf23u); f_00521c5c();
    /* 0053cf23: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0053cf2a:; BB(0x0053cf2a);
    /* 0053cf2a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cf2d: mov edx, ebx */ r_edx = r_ebx;
    /* 0053cf2f: mov dword ptr [edx + 0x4a0], eax */ W32((u32)(r_edx+0x4a0u), r_eax);
    /* 0053cf35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053cf3c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0053cf43: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf45: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53cf4au); f_008581c5();
    /* 0053cf4a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053cf4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cf50: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053cf53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cf55: je 0x53d072 */ if (fZ) goto L_0053d072;
L_0053cf5b:; BB(0x0053cf5b);
    /* 0053cf5b: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0053cf62: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053cf69: mov ecx, eax */ r_ecx = r_eax;
    /* 0053cf6b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf6d: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x53cf72u); f_00521a4c();
    /* 0053cf72: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0053cf79:; BB(0x0053cf79);
    /* 0053cf79: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cf7c: mov edx, ebx */ r_edx = r_ebx;
    /* 0053cf7e: mov dword ptr [edx + 0x4a4], eax */ W32((u32)(r_edx+0x4a4u), r_eax);
    /* 0053cf84: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053cf8b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0053cf92: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf97: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53cf9cu); f_005caba4();
    /* 0053cf9c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053cf9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cfa2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053cfa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cfa7: je 0x53d068 */ if (fZ) goto L_0053d068;
L_0053cfad:; BB(0x0053cfad);
    /* 0053cfad: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0053cfb4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053cfbb: mov eax, ebx */ r_eax = r_ebx;
    /* 0053cfbd: push dword ptr [eax + 0x4a4] */ { u32 v = R32((u32)(r_eax+0x4a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cfc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cfc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cfc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cfc8: call 0x53dbd8 */ r_esp -= 4; W32(r_esp, 0x53cfcdu); f_0053dbd8();
    /* 0053cfcd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0053cfd4:; BB(0x0053cfd4);
    /* 0053cfd4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cfd7: mov edx, ebx */ r_edx = r_ebx;
    /* 0053cfd9: mov dword ptr [edx + 0x4a8], eax */ W32((u32)(r_edx+0x4a8u), r_eax);
    /* 0053cfdf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053cfe6: push 0x80000080 */ { u32 v = 0x80000080u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cfeb: push 0xff5050ff */ { u32 v = 0xff5050ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cff0: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x53cff5u); f_00578cc4();
    /* 0053cff5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cff8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053cffa: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0053cffc: mov dword ptr [ecx + 0x4c4], 0 */ W32((u32)(r_ecx+0x4c4u), 0x0u);
    /* 0053d006: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
    /* 0053d00c: mov dword ptr [ecx + 0x4c8], 0 */ W32((u32)(r_ecx+0x4c8u), 0x0u);
    /* 0053d016: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053d01a: mov dword ptr [ecx + 0x4b0], eax */ W32((u32)(r_ecx+0x4b0u), r_eax);
    /* 0053d020: mov dword ptr [ecx + 0x4b4], eax */ W32((u32)(r_ecx+0x4b4u), r_eax);
    /* 0053d026: mov dword ptr [ecx + 0x4b8], eax */ W32((u32)(r_ecx+0x4b8u), r_eax);
    /* 0053d02c: mov dword ptr [ecx + 0x4bc], eax */ W32((u32)(r_ecx+0x4bcu), r_eax);
    /* 0053d032: mov dword ptr [ecx + 0x4c0], eax */ W32((u32)(r_ecx+0x4c0u), r_eax);
    /* 0053d038: mov dword ptr [ecx + 0x4cc], eax */ W32((u32)(r_ecx+0x4ccu), r_eax);
    /* 0053d03e: mov edx, 1 */ r_edx = 0x1u;
    /* 0053d043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d044: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0053d04b: call dword ptr [ebx + 0x164] */ { u32 t = R32((u32)(r_ebx+0x164u)); r_esp -= 4; W32(r_esp, 0x53d051u); call_ind(t); }
    /* 0053d051: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053d054: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d057: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053d05a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d05d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053d064: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d067: ret  */ FN_RET(0x0053cd38); r_esp += 4; return;
L_0053d068:; BB(0x0053d068);
    /* 0053d068: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053d06a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053d06d: jmp 0x53cfd4 */ goto L_0053cfd4;
L_0053d072:; BB(0x0053d072);
    /* 0053d072: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053d074: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053d077: jmp 0x53cf79 */ goto L_0053cf79;
L_0053d07c:; BB(0x0053d07c);
    /* 0053d07c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053d07e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053d081: jmp 0x53cf2a */ goto L_0053cf2a;
}

