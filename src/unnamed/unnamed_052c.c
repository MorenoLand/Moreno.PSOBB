#include "protos.h"

void f_0052c274(void) /* sub_52C274 */
{
    FN_ENTER(0x0052c274);
    /* 0052c274: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c275: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c276: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052c277: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c278: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052c27b: mov esi, ecx */ r_esi = r_ecx;
    /* 0052c27d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0052c281: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0052c283: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0052c286: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052c288: fmul qword ptr [0x922388] */ ST(0) = ST(0) * R_F64((u32)(0x922388u));
    /* 0052c28e: fdiv qword ptr [0x922380] */ ST(0) = ST(0) / R_F64((u32)(0x922380u));
    /* 0052c294: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0052c297: fld dword ptr [0x9223ec] */ FPUSH(R_F32((u32)(0x9223ecu)));
    /* 0052c29d: fld dword ptr [0x9223e8] */ FPUSH(R_F32((u32)(0x9223e8u)));
    /* 0052c2a3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0052c2a5: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0052c2a9: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0052c2ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052c2b3: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0052c2b7: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0052c2bb: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052c2bf: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0052c2c3: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0052c2c6: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0052c2ca: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0052c2ce: mov ebp, edi */ r_ebp = r_edi;
    /* 0052c2d0: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052c2d5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052c2d8: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0052c2db: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0052c2df: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0052c2e3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052c2e7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052c2eb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52c2f0u); f_0082d990();
    /* 0052c2f0: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0052c2f4: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0052c2f8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0052c2fc: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0052c304: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c306: mov edx, edi */ r_edx = r_edi;
    /* 0052c308: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0052c310: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52c315u); f_0082d8bc();
    /* 0052c315: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0052c319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052c31b: lea ebx, [esi + 0x2a4] */ r_ebx = (u32)(r_esi+0x2a4u);
    /* 0052c321: mov esi, eax */ r_esi = r_eax;
L_0052c323:; BB(0x0052c323);
    /* 0052c323: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c324: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0052c328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c32a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x52c32fu); f_00830aa0();
    /* 0052c32f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0052c332: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c334: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52c339u); f_0082ebac();
    /* 0052c339: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052c33c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c33e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c340: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x52c345u); f_0077fffc();
    /* 0052c345: mov edx, eax */ r_edx = r_eax;
    /* 0052c347: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c34a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c34c: je 0x52c3eb */ if (fZ) goto L_0052c3eb;
L_0052c352:; BB(0x0052c352);
    /* 0052c352: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0052c356: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c359: lea eax, [eax + 0x38] */ r_eax = (u32)(r_eax+0x38u);
    /* 0052c35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c35d: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x52c362u); f_0078ea6c();
    /* 0052c362: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c365: fsub dword ptr [esp + 0x60] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x60u));
    /* 0052c369: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0052c36d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0052c36f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052c371: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052c372: jae 0x52c37a */ if (!fC) goto L_0052c37a;
L_0052c374:; BB(0x0052c374);
    /* 0052c374: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0052c378: mov ebp, edi */ r_ebp = r_edi;
L_0052c37a:; BB(0x0052c37a);
    /* 0052c37a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052c37c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c37e: mov edx, 0x5555 */ r_edx = 0x5555u;
    /* 0052c383: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52c388u); f_0082d8bc();
    /* 0052c388: add edi, 0x5555 */ {  u32 a = r_edi; u32 b = 0x5555u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052c38e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052c391: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052c394: jl 0x52c323 */ if ((fS!=fO)) goto L_0052c323;
L_0052c396:; BB(0x0052c396);
    /* 0052c396: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x52c39bu); f_0082da80();
    /* 0052c39b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052c3a0: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52c3a5u); f_0082d990();
    /* 0052c3a5: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0052c3a9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052c3ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c3af: mov edx, ebp */ r_edx = r_ebp;
    /* 0052c3b1: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0052c3b9: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0052c3c1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52c3c6u); f_0082d8bc();
    /* 0052c3c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3c7: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0052c3cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c3cd: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x52c3d2u); f_00830aa0();
    /* 0052c3d2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0052c3d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c3d7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52c3dcu); f_0082ebac();
    /* 0052c3dc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x52c3e1u); f_0082da80();
    /* 0052c3e1: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052c3e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c3e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c3e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052c3e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c3e8: ret 0xc */ FN_RET(0x0052c274); r_esp += 16; return;
L_0052c3eb:; BB(0x0052c3eb);
    /* 0052c3eb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x52c3f0u); f_0082da80();
    /* 0052c3f0: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052c3f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c3f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c3f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052c3f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c3f7: ret 0xc */ FN_RET(0x0052c274); r_esp += 16; return;
}

void f_0052c3fc(void) /* sub_52C3FC */
{
    FN_ENTER(0x0052c3fc);
    /* 0052c3fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3fd: mov edi, ecx */ r_edi = r_ecx;
    /* 0052c3ff: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c403: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c405: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x52c40au); f_007865e8();
    /* 0052c40a: mov dword ptr [edi], 0xb014e0 */ W32((u32)(r_edi), 0xb014e0u);
    /* 0052c410: mov edx, dword ptr [0x9bc3ac] */ r_edx = R32((u32)(0x9bc3acu));
    /* 0052c416: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0052c419: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c41b: mov dword ptr [edi + 0x37c], edx */ W32((u32)(r_edi+0x37cu), r_edx);
    /* 0052c421: mov dword ptr [edi + 0x380], edx */ W32((u32)(r_edi+0x380u), r_edx);
    /* 0052c427: mov dword ptr [edi + 0x384], edx */ W32((u32)(r_edi+0x384u), r_edx);
    /* 0052c42d: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
    /* 0052c433: mov eax, 0xf */ r_eax = 0xfu;
    /* 0052c438: mov word ptr [edi + 0x342], ax */ W16((u32)(r_edi+0x342u), (u16)r_eax);
    /* 0052c43f: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0052c446: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0052c44c: mov eax, edi */ r_eax = r_edi;
    /* 0052c44e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c44f: ret 4 */ FN_RET(0x0052c3fc); r_esp += 8; return;
}

void f_0052c454(void) /* sub_52C454 */
{
    FN_ENTER(0x0052c454);
    /* 0052c454: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c455: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052c457: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x52c45cu); f_004f7c84();
    /* 0052c45c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c45f: je 0x52c509 */ if (fZ) goto L_0052c509;
L_0052c465:; BB(0x0052c465);
    /* 0052c465: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0052c46c: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
    /* 0052c472: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c474: je 0x52c4a9 */ if (fZ) goto L_0052c4a9;
L_0052c476:; BB(0x0052c476);
    /* 0052c476: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0052c47c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c47f: je 0x52c498 */ if (fZ) goto L_0052c498;
L_0052c481:; BB(0x0052c481);
    /* 0052c481: mov dword ptr [ebx + 0x384], 0xffffffff */ W32((u32)(r_ebx+0x384u), 0xffffffffu);
    /* 0052c48b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c48d: call 0x52c50c */ r_esp -= 4; W32(r_esp, 0x52c492u); f_0052c50c();
    /* 0052c492: mov edx, dword ptr [ebx + 0x37c] */ r_edx = R32((u32)(r_ebx+0x37cu));
L_0052c498:; BB(0x0052c498);
    /* 0052c498: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 0052c4a2: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
L_0052c4a9:; BB(0x0052c4a9);
    /* 0052c4a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c4ab: call 0x52c50c */ r_esp -= 4; W32(r_esp, 0x52c4b0u); f_0052c50c();
    /* 0052c4b0: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0052c4b6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c4b9: je 0x52c4df */ if (fZ) goto L_0052c4df;
L_0052c4bb:; BB(0x0052c4bb);
    /* 0052c4bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c4bd: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52c4c2u); f_0078730c();
    /* 0052c4c2: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0052c4c8: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0052c4ce: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0052c4d1: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0052c4d7: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 0052c4da: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 0052c4dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c4de: ret  */ FN_RET(0x0052c454); r_esp += 4; return;
L_0052c4df:; BB(0x0052c4df);
    /* 0052c4df: mov dword ptr [ebx + 0x384], 0xffffffff */ W32((u32)(r_ebx+0x384u), 0xffffffffu);
    /* 0052c4e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c4eb: call 0x52c50c */ r_esp -= 4; W32(r_esp, 0x52c4f0u); f_0052c50c();
    /* 0052c4f0: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0052c4f6: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 0052c500: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0052c507: jmp 0x52c4bb */ goto L_0052c4bb;
L_0052c509:; BB(0x0052c509);
    /* 0052c509: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c50a: ret  */ FN_RET(0x0052c454); r_esp += 4; return;
}

void f_0052c50c(void) /* sub_52C50C */
{
    FN_ENTER(0x0052c50c);
    /* 0052c50c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052c513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c515: je 0x52c54e */ if (fZ) goto L_0052c54e;
L_0052c517:; BB(0x0052c517);
    /* 0052c517: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c51a: je 0x52c548 */ if (fZ) goto L_0052c548;
L_0052c51c:; BB(0x0052c51c);
    /* 0052c51c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c51f: je 0x52c542 */ if (fZ) goto L_0052c542;
L_0052c521:; BB(0x0052c521);
    /* 0052c521: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c524: je 0x52c53c */ if (fZ) goto L_0052c53c;
L_0052c526:; BB(0x0052c526);
    /* 0052c526: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c529: je 0x52c536 */ if (fZ) goto L_0052c536;
L_0052c52b:; BB(0x0052c52b);
    /* 0052c52b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c52e: jne 0x52c53b */ if (!fZ) goto L_0052c53b;
L_0052c530:; BB(0x0052c530);
    /* 0052c530: call 0x52c554 */ r_esp -= 4; W32(r_esp, 0x52c535u); f_0052c554();
    /* 0052c535: ret  */ FN_RET(0x0052c50c); r_esp += 4; return;
L_0052c536:; BB(0x0052c536);
    /* 0052c536: call 0x52c5e0 */ r_esp -= 4; W32(r_esp, 0x52c53bu); f_0052c5e0();
L_0052c53b:; BB(0x0052c53b);
    /* 0052c53b: ret  */ FN_RET(0x0052c50c); r_esp += 4; return;
L_0052c53c:; BB(0x0052c53c);
    /* 0052c53c: call 0x52c6ac */ r_esp -= 4; W32(r_esp, 0x52c541u); f_0052c6ac();
    /* 0052c541: ret  */ FN_RET(0x0052c50c); r_esp += 4; return;
L_0052c542:; BB(0x0052c542);
    /* 0052c542: call 0x52c760 */ r_esp -= 4; W32(r_esp, 0x52c547u); f_0052c760();
    /* 0052c547: ret  */ FN_RET(0x0052c50c); r_esp += 4; return;
L_0052c548:; BB(0x0052c548);
    /* 0052c548: call 0x52c834 */ r_esp -= 4; W32(r_esp, 0x52c54du); f_0052c834();
    /* 0052c54d: ret  */ FN_RET(0x0052c50c); r_esp += 4; return;
L_0052c54e:; BB(0x0052c54e);
    /* 0052c54e: call 0x52c8e8 */ r_esp -= 4; W32(r_esp, 0x52c553u); f_0052c8e8();
    /* 0052c553: ret  */ FN_RET(0x0052c50c); r_esp += 4; return;
}

void f_0052c554(void) /* sub_52C554 */
{
    FN_ENTER(0x0052c554);
    /* 0052c554: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c555: mov edi, ecx */ r_edi = r_ecx;
    /* 0052c557: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0052c55d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c55f: je 0x52c568 */ if (fZ) goto L_0052c568;
L_0052c561:; BB(0x0052c561);
    /* 0052c561: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c564: jne 0x52c5dd */ if (!fZ) goto L_0052c5dd;
L_0052c566:; BB(0x0052c566);
    /* 0052c566: jmp 0x52c57e */ goto L_0052c57e;
L_0052c568:; BB(0x0052c568);
    /* 0052c568: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0052c572: mov eax, 4 */ r_eax = 0x4u;
    /* 0052c577: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_0052c57e:; BB(0x0052c57e);
    /* 0052c57e: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c580: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52c585u); f_007aa094();
    /* 0052c585: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c587: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c589: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c58b: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52c590u); f_00772b44();
    /* 0052c590: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c592: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52c597u); f_007b6880();
    /* 0052c597: fld dword ptr [edi + 0xc8] */ FPUSH(R_F32((u32)(r_edi+0xc8u)));
    /* 0052c59d: fmul dword ptr [0x9223e0] */ ST(0) = ST(0) * R_F32((u32)(0x9223e0u));
    /* 0052c5a3: fmul dword ptr [0x9223dc] */ ST(0) = ST(0) * R_F32((u32)(0x9223dcu));
    /* 0052c5a9: fcomp dword ptr [edi + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xc0u))); FPOP();
    /* 0052c5af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052c5b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052c5b2: jbe 0x52c5dd */ if ((fC||fZ)) goto L_0052c5dd;
L_0052c5b4:; BB(0x0052c5b4);
    /* 0052c5b4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052c5b6: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c5b8: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x52c5bbu); call_ind(t); }
    /* 0052c5bb: fld dword ptr [0x9223dc] */ FPUSH(R_F32((u32)(0x9223dcu)));
    /* 0052c5c1: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0052c5c7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052c5c9: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0052c5cf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0052c5d1: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0052c5d7: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
L_0052c5dd:; BB(0x0052c5dd);
    /* 0052c5dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c5de: ret  */ FN_RET(0x0052c554); r_esp += 4; return;
}

void f_0052c5e0(void) /* sub_52C5E0 */
{
    FN_ENTER(0x0052c5e0);
    /* 0052c5e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c5e1: mov edi, ecx */ r_edi = r_ecx;
    /* 0052c5e3: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0052c5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c5eb: je 0x52c62f */ if (fZ) goto L_0052c62f;
L_0052c5ed:; BB(0x0052c5ed);
    /* 0052c5ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c5f0: je 0x52c650 */ if (fZ) goto L_0052c650;
L_0052c5f2:; BB(0x0052c5f2);
    /* 0052c5f2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c5f5: jne 0x52c6a7 */ if (!fZ) goto L_0052c6a7;
L_0052c5fb:; BB(0x0052c5fb);
    /* 0052c5fb: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052c5fe: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0052c604: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 0052c60e: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052c613: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052c616: movzx eax, word ptr [edi + 0x334] */ r_eax = (u32)R16((u32)(r_edi+0x334u));
    /* 0052c61d: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c620: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0052c626: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 0052c62d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c62e: ret  */ FN_RET(0x0052c5e0); r_esp += 4; return;
L_0052c62f:; BB(0x0052c62f);
    /* 0052c62f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052c632: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0052c63c: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052c641: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052c644: mov edx, 3 */ r_edx = 0x3u;
    /* 0052c649: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
L_0052c650:; BB(0x0052c650);
    /* 0052c650: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c652: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52c657u); f_007aa094();
    /* 0052c657: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052c659: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c65b: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x52c65eu); call_ind(t); }
    /* 0052c65e: fld dword ptr [0x9223d8] */ FPUSH(R_F32((u32)(0x9223d8u)));
    /* 0052c664: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c666: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c668: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0052c66e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052c670: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0052c676: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0052c678: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0052c67e: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0052c684: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c686: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52c68bu); f_00772b44();
    /* 0052c68b: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c68d: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52c692u); f_007b6880();
    /* 0052c692: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0052c698: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c69b: je 0x52c6a7 */ if (fZ) goto L_0052c6a7;
L_0052c69d:; BB(0x0052c69d);
    /* 0052c69d: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
L_0052c6a7:; BB(0x0052c6a7);
    /* 0052c6a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c6a8: ret  */ FN_RET(0x0052c5e0); r_esp += 4; return;
}

void f_0052c6ac(void) /* sub_52C6AC */
{
    FN_ENTER(0x0052c6ac);
    /* 0052c6ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c6ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052c6af: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0052c6b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c6b7: je 0x52c6fa */ if (fZ) goto L_0052c6fa;
L_0052c6b9:; BB(0x0052c6b9);
    /* 0052c6b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c6bc: je 0x52c719 */ if (fZ) goto L_0052c719;
L_0052c6be:; BB(0x0052c6be);
    /* 0052c6be: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c6c1: jne 0x52c75b */ if (!fZ) goto L_0052c75b;
L_0052c6c7:; BB(0x0052c6c7);
    /* 0052c6c7: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052c6ca: movzx edx, word ptr [ebx + 0x342] */ r_edx = (u32)R16((u32)(r_ebx+0x342u));
    /* 0052c6d1: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0052c6db: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c6e0: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0052c6e3: movzx eax, word ptr [ebx + 0x334] */ r_eax = (u32)R16((u32)(r_ebx+0x334u));
    /* 0052c6ea: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 0052c6f1: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 0052c6f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c6f9: ret  */ FN_RET(0x0052c6ac); r_esp += 4; return;
L_0052c6fa:; BB(0x0052c6fa);
    /* 0052c6fa: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0052c6fd: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 0052c707: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052c709: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0052c710: and edx, 0xff9fffff */ {  u32 a = r_edx; u32 b = 0xff9fffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052c716: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_0052c719:; BB(0x0052c719);
    /* 0052c719: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c71b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52c720u); f_007aa094();
    /* 0052c720: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052c723: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c728: jne 0x52c735 */ if (!fZ) goto L_0052c735;
L_0052c72a:; BB(0x0052c72a);
    /* 0052c72a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c72c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c72e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c730: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52c735u); f_00772b44();
L_0052c735:; BB(0x0052c735);
    /* 0052c735: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052c737: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52c73cu); f_007b6880();
    /* 0052c73c: movsx edx, word ptr [ebx + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 0052c743: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0052c746: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 0052c74d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c74f: jge 0x52c75b */ if ((fS==fO)) goto L_0052c75b;
L_0052c751:; BB(0x0052c751);
    /* 0052c751: mov dword ptr [ebx + 0x384], 0xffffffff */ W32((u32)(r_ebx+0x384u), 0xffffffffu);
L_0052c75b:; BB(0x0052c75b);
    /* 0052c75b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052c75c: ret  */ FN_RET(0x0052c6ac); r_esp += 4; return;
}

void f_0052c760(void) /* sub_52C760 */
{
    FN_ENTER(0x0052c760);
    /* 0052c760: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c761: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c762: mov edi, ecx */ r_edi = r_ecx;
    /* 0052c764: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0052c76a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c76c: je 0x52c794 */ if (fZ) goto L_0052c794;
L_0052c76e:; BB(0x0052c76e);
    /* 0052c76e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c771: je 0x52c7b6 */ if (fZ) goto L_0052c7b6;
L_0052c773:; BB(0x0052c773);
    /* 0052c773: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c776: jne 0x52c82f */ if (!fZ) goto L_0052c82f;
L_0052c77c:; BB(0x0052c77c);
    /* 0052c77c: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052c77f: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 0052c789: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c78e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052c791: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052c792: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c793: ret  */ FN_RET(0x0052c760); r_esp += 4; return;
L_0052c794:; BB(0x0052c794);
    /* 0052c794: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0052c797: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0052c7a1: mov eax, 2 */ r_eax = 0x2u;
    /* 0052c7a6: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0052c7ad: or edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0052c7b3: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_0052c7b6:; BB(0x0052c7b6);
    /* 0052c7b6: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 0052c7bc: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c7bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c7c1: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x52c7c6u); f_00772358();
    /* 0052c7c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c7c8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52c7cdu); f_007aa094();
    /* 0052c7cd: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c7d2: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c7d4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52c7d9u); f_007aaa30();
    /* 0052c7d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c7db: je 0x52c813 */ if (fZ) goto L_0052c813;
L_0052c7dd:; BB(0x0052c7dd);
    /* 0052c7dd: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c7df: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52c7e4u); f_00770738();
    /* 0052c7e4: mov esi, eax */ r_esi = r_eax;
    /* 0052c7e6: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c7eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c7ec: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0052c7ee: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c7f0: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x52c7f3u); call_ind(t); }
    /* 0052c7f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c7f5: je 0x52c813 */ if (fZ) goto L_0052c813;
L_0052c7f7:; BB(0x0052c7f7);
    /* 0052c7f7: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c7fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c7fd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0052c7ff: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c801: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x52c804u); call_ind(t); }
    /* 0052c804: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052c806: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c80b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c80c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0052c80e: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c810: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x52c813u); call_ind(t); }
L_0052c813:; BB(0x0052c813);
    /* 0052c813: mov ecx, edi */ r_ecx = r_edi;
    /* 0052c815: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52c81au); f_007b6880();
    /* 0052c81a: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0052c820: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c823: je 0x52c82f */ if (fZ) goto L_0052c82f;
L_0052c825:; BB(0x0052c825);
    /* 0052c825: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
L_0052c82f:; BB(0x0052c82f);
    /* 0052c82f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052c830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052c831: ret  */ FN_RET(0x0052c760); r_esp += 4; return;
}

void f_0052c834(void) /* sub_52C834 */
{
    FN_ENTER(0x0052c834);
    /* 0052c834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052c835: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052c836: mov esi, ecx */ r_esi = r_ecx;
    /* 0052c838: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c83a: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52c83fu); f_00770738();
    /* 0052c83f: mov ebp, eax */ r_ebp = r_eax;
    /* 0052c841: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 0052c847: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c849: je 0x52c856 */ if (fZ) goto L_0052c856;
L_0052c84b:; BB(0x0052c84b);
    /* 0052c84b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c84e: jne 0x52c8e4 */ if (!fZ) goto L_0052c8e4;
L_0052c854:; BB(0x0052c854);
    /* 0052c854: jmp 0x52c868 */ goto L_0052c868;
L_0052c856:; BB(0x0052c856);
    /* 0052c856: mov edx, 1 */ r_edx = 0x1u;
    /* 0052c85b: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052c862: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
L_0052c868:; BB(0x0052c868);
    /* 0052c868: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52c86fu); f_007aa094();
    /* 0052c86f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c871: je 0x52c8d2 */ if (fZ) goto L_0052c8d2;
L_0052c873:; BB(0x0052c873);
    /* 0052c873: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c875: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c87b: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0052c881: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c883: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c889: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c88f: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c892: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x52c897u); f_00771bf4();
    /* 0052c897: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0052c89d: fcom dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); 
    /* 0052c89f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052c8a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052c8a2: ja 0x52c8b0 */ if ((!fC&&!fZ)) goto L_0052c8b0;
L_0052c8a4:; BB(0x0052c8a4);
    /* 0052c8a4: fcom dword ptr [edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4u))); 
    /* 0052c8a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052c8a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052c8aa: jb 0x52c8b0 */ if (fC) goto L_0052c8b0;
L_0052c8ac:; BB(0x0052c8ac);
    /* 0052c8ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052c8ae: jmp 0x52c8c1 */ goto L_0052c8c1;
L_0052c8b0:; BB(0x0052c8b0);
    /* 0052c8b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052c8b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c8b4: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c8b6: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52c8bbu); f_007706b0();
    /* 0052c8bb: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
L_0052c8c1:; BB(0x0052c8c1);
    /* 0052c8c1: lea eax, [esi + 0x30c] */ r_eax = (u32)(r_esi+0x30cu);
    /* 0052c8c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c8c8: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c8cb: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c8cd: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52c8d2u); f_00771858();
L_0052c8d2:; BB(0x0052c8d2);
    /* 0052c8d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c8d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c8d6: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c8d8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52c8ddu); f_00772b44();
    /* 0052c8dd: mov ecx, esi */ r_ecx = r_esi;
    /* 0052c8df: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52c8e4u); f_007b6880();
L_0052c8e4:; BB(0x0052c8e4);
    /* 0052c8e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c8e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052c8e6: ret  */ FN_RET(0x0052c834); r_esp += 4; return;
}

void f_0052c8e8(void) /* sub_52C8E8 */
{
    FN_ENTER(0x0052c8e8);
    /* 0052c8e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052c8e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052c8eb: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0052c8f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c8f3: je 0x52c90c */ if (fZ) goto L_0052c90c;
L_0052c8f5:; BB(0x0052c8f5);
    /* 0052c8f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c8f8: je 0x52c91f */ if (fZ) goto L_0052c91f;
L_0052c8fa:; BB(0x0052c8fa);
    /* 0052c8fa: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052c8fd: jne 0x52c93b */ if (!fZ) goto L_0052c93b;
L_0052c8ff:; BB(0x0052c8ff);
    /* 0052c8ff: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052c902: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c907: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052c90a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c90b: ret  */ FN_RET(0x0052c8e8); r_esp += 4; return;
L_0052c90c:; BB(0x0052c90c);
    /* 0052c90c: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 0052c916: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052c918: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_0052c91f:; BB(0x0052c91f);
    /* 0052c91f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052c921: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52c926u); f_007aa094();
    /* 0052c926: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052c929: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c92e: jne 0x52c93b */ if (!fZ) goto L_0052c93b;
L_0052c930:; BB(0x0052c930);
    /* 0052c930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c932: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c934: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052c936: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52c93bu); f_00772b44();
L_0052c93b:; BB(0x0052c93b);
    /* 0052c93b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c93c: ret  */ FN_RET(0x0052c8e8); r_esp += 4; return;
}

void f_0052c940(void) /* sub_52C940 */
{
    FN_ENTER(0x0052c940);
    /* 0052c940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052c941: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052c943: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052c946: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052c948: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c94d: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c952: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x52c955u); call_ind(t); }
    /* 0052c955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c957: je 0x52c9b6 */ if (fZ) goto L_0052c9b6;
L_0052c959:; BB(0x0052c959);
    /* 0052c959: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0052c95c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x52c961u); f_00829cc8();
    /* 0052c961: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x52c966u); f_0082d7b0();
    /* 0052c966: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0052c969: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x52c96eu); f_0082d838();
    /* 0052c96e: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0052c971: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c973: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52c978u); f_0082d8bc();
    /* 0052c978: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0052c97d: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052c982: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0052c987: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x52c98cu); f_004f7c84();
    /* 0052c98c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c98f: je 0x52c9b8 */ if (fZ) goto L_0052c9b8;
L_0052c991:; BB(0x0052c991);
    /* 0052c991: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052c993: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x52c998u); f_007aa668();
L_0052c998:; BB(0x0052c998);
    /* 0052c998: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052c99b: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c9a0: jne 0x52c9b1 */ if (!fZ) goto L_0052c9b1;
L_0052c9a2:; BB(0x0052c9a2);
    /* 0052c9a2: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0052c9a7: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052c9ac: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0052c9b1:; BB(0x0052c9b1);
    /* 0052c9b1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x52c9b6u); f_0082da80();
L_0052c9b6:; BB(0x0052c9b6);
    /* 0052c9b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c9b7: ret  */ FN_RET(0x0052c940); r_esp += 4; return;
L_0052c9b8:; BB(0x0052c9b8);
    /* 0052c9b8: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052c9bb: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x52c9c0u); f_0082e1e8();
    /* 0052c9c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052c9c1: jmp 0x52c998 */ goto L_0052c998;
}

void f_0052c9c4(void) /* sub_52C9C4 */
{
    FN_ENTER(0x0052c9c4);
    /* 0052c9c4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052c9cb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c9ce: je 0x52c9e0 */ if (fZ) goto L_0052c9e0;
L_0052c9d0:; BB(0x0052c9d0);
    /* 0052c9d0: mov dword ptr [ecx + 0x37c], 5 */ W32((u32)(r_ecx+0x37cu), 0x5u);
    /* 0052c9da: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_0052c9e0:; BB(0x0052c9e0);
    /* 0052c9e0: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0052c9e6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c9e9: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0052c9ef: ret  */ FN_RET(0x0052c9c4); r_esp += 4; return;
}

void f_0052c9f0(void) /* sub_52C9F0 */
{
    FN_ENTER(0x0052c9f0);
    /* 0052c9f0: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0052c9f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052c9f8: jne 0x52ca16 */ if (!fZ) goto L_0052ca16;
L_0052c9fa:; BB(0x0052c9fa);
    /* 0052c9fa: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052ca01: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052ca04: je 0x52ca16 */ if (fZ) goto L_0052ca16;
L_0052ca06:; BB(0x0052ca06);
    /* 0052ca06: mov dword ptr [ecx + 0x37c], 1 */ W32((u32)(r_ecx+0x37cu), 0x1u);
    /* 0052ca10: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_0052ca16:; BB(0x0052ca16);
    /* 0052ca16: ret  */ FN_RET(0x0052c9f0); r_esp += 4; return;
}

void f_0052ca18(void) /* sub_52CA18 */
{
    FN_ENTER(0x0052ca18);
    /* 0052ca18: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0052ca1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ca20: jne 0x52ca3e */ if (!fZ) goto L_0052ca3e;
L_0052ca22:; BB(0x0052ca22);
    /* 0052ca22: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052ca29: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052ca2c: je 0x52ca3e */ if (fZ) goto L_0052ca3e;
L_0052ca2e:; BB(0x0052ca2e);
    /* 0052ca2e: mov dword ptr [ecx + 0x37c], 2 */ W32((u32)(r_ecx+0x37cu), 0x2u);
    /* 0052ca38: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_0052ca3e:; BB(0x0052ca3e);
    /* 0052ca3e: ret  */ FN_RET(0x0052ca18); r_esp += 4; return;
}

void f_0052ca40(void) /* sub_52CA40 */
{
    FN_ENTER(0x0052ca40);
    /* 0052ca40: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0052ca47: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ca4a: je 0x52ca5c */ if (fZ) goto L_0052ca5c;
L_0052ca4c:; BB(0x0052ca4c);
    /* 0052ca4c: mov dword ptr [ecx + 0x37c], 7 */ W32((u32)(r_ecx+0x37cu), 0x7u);
    /* 0052ca56: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_0052ca5c:; BB(0x0052ca5c);
    /* 0052ca5c: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0052ca62: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ca65: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0052ca6b: ret  */ FN_RET(0x0052ca40); r_esp += 4; return;
}

void f_0052ca6c(void) /* sub_52CA6C */
{
    FN_ENTER(0x0052ca6c);
    /* 0052ca6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052ca6f: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0052ca72: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0052ca75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca77: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x52ca7cu); f_0078ea50();
    /* 0052ca7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ca7f: fcomp dword ptr [0x9223b0] */ fx_compare(ST(0), R_F32((u32)(0x9223b0u))); FPOP();
    /* 0052ca85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052ca87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052ca88: jbe 0x52cab2 */ if ((fC||fZ)) goto L_0052cab2;
L_0052ca8a:; BB(0x0052ca8a);
    /* 0052ca8a: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0052ca90: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ca92: jne 0x52cabc */ if (!fZ) goto L_0052cabc;
L_0052ca94:; BB(0x0052ca94);
    /* 0052ca94: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0052ca9b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052ca9e: je 0x52cabc */ if (fZ) goto L_0052cabc;
L_0052caa0:; BB(0x0052caa0);
    /* 0052caa0: mov dword ptr [ebx + 0x37c], 8 */ W32((u32)(r_ebx+0x37cu), 0x8u);
    /* 0052caaa: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0052cab0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052cab1: ret  */ FN_RET(0x0052ca6c); r_esp += 4; return;
L_0052cab2:; BB(0x0052cab2);
    /* 0052cab2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052cab4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052cab6: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x52cabcu); call_ind(t); }
L_0052cabc:; BB(0x0052cabc);
    /* 0052cabc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052cabd: ret  */ FN_RET(0x0052ca6c); r_esp += 4; return;
}

void f_0052cac0(void) /* sub_52CAC0 */
{
    FN_ENTER(0x0052cac0);
    /* 0052cac0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cac1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052cac3: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052cac8: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52cacdu); f_0082d990();
    /* 0052cacd: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0052cad0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x52cad5u); f_0082d838();
    /* 0052cad5: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0052cad8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cada: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52cadfu); f_0082d8bc();
    /* 0052cadf: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052cae5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052cae7: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x52caecu); f_007aaab8();
    /* 0052caec: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x52caf1u); f_0082da80();
    /* 0052caf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052caf2: ret  */ FN_RET(0x0052cac0); r_esp += 4; return;
}

void f_0052caf4(void) /* sub_52CAF4 */
{
    FN_ENTER(0x0052caf4);
    /* 0052caf4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052caf7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0052cafb: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0052cb02: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0052cb05: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0052cb0d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb0f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb11: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb13: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0052cb1b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb1d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb1f: add ecx, dword ptr [0xaab540] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaab540u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb25: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52cb2au); f_0082d990();
    /* 0052cb2a: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052cb2e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0052cb32: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb34: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x52cb39u); f_00830aa0();
    /* 0052cb39: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x52cb3eu); f_0082da80();
    /* 0052cb3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052cb41: ret 8 */ FN_RET(0x0052caf4); r_esp += 12; return;
}

void f_0052cb44(void) /* sub_52CB44 */
{
    FN_ENTER(0x0052cb44);
    /* 0052cb44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb45: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052cb48: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0052cb4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cb4e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0052cb52: je 0x52cbdd */ if (fZ) goto L_0052cbdd;
L_0052cb58:; BB(0x0052cb58);
    /* 0052cb58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cb5a: je 0x52cbdd */ if (fZ) goto L_0052cbdd;
L_0052cb60:; BB(0x0052cb60);
    /* 0052cb60: mov ebp, dword ptr [eax + 0x30] */ r_ebp = R32((u32)(r_eax+0x30u));
    /* 0052cb63: mov dword ptr [0xa7306c], edx */ W32((u32)(0xa7306cu), r_edx);
    /* 0052cb69: mov edx, eax */ r_edx = r_eax;
    /* 0052cb6b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0052cb6f: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0052cb73: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cb75: mov dword ptr [0xa73070], ecx */ W32((u32)(0xa73070u), r_ecx);
    /* 0052cb7b: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0052cb7e: mov edi, eax */ r_edi = r_eax;
    /* 0052cb80: mov esi, edx */ r_esi = r_edx;
L_0052cb82:; BB(0x0052cb82);
    /* 0052cb82: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0052cb84: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052cb87: jne 0x52cba7 */ if (!fZ) goto L_0052cba7;
L_0052cb89:; BB(0x0052cb89);
    /* 0052cb89: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0052cb8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cb8e: je 0x52cba7 */ if (fZ) goto L_0052cba7;
L_0052cb90:; BB(0x0052cb90);
    /* 0052cb90: mov eax, dword ptr [0xa7306c] */ r_eax = R32((u32)(0xa7306cu));
    /* 0052cb95: add dword ptr [0xa73070], 1 */ { u32 ad = (u32)(0xa73070u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052cb9c: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 0052cb9f: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0052cba1: mov dword ptr [0xa7306c], ecx */ W32((u32)(0xa7306cu), r_ecx);
L_0052cba7:; BB(0x0052cba7);
    /* 0052cba7: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0052cbaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cbac: je 0x52cbb3 */ if (fZ) goto L_0052cbb3;
L_0052cbae:; BB(0x0052cbae);
    /* 0052cbae: call 0x52cbe4 */ r_esp -= 4; W32(r_esp, 0x52cbb3u); f_0052cbe4();
L_0052cbb3:; BB(0x0052cbb3);
    /* 0052cbb3: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 0052cbb6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cbb8: jne 0x52cb82 */ if (!fZ) goto L_0052cb82;
L_0052cbba:; BB(0x0052cbba);
    /* 0052cbba: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0052cbbe: mov edx, dword ptr [0xa7306c] */ r_edx = R32((u32)(0xa7306cu));
    /* 0052cbc4: mov eax, edi */ r_eax = r_edi;
    /* 0052cbc6: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0052cbca: mov dword ptr [eax + 0x30], ebp */ W32((u32)(r_eax+0x30u), r_ebp);
    /* 0052cbcd: mov eax, dword ptr [0xa73070] */ r_eax = R32((u32)(0xa73070u));
    /* 0052cbd2: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0052cbd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052cbdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052cbdc: ret  */ FN_RET(0x0052cb44); r_esp += 4; return;
L_0052cbdd:; BB(0x0052cbdd);
    /* 0052cbdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052cbdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052cbe2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052cbe3: ret  */ FN_RET(0x0052cb44); r_esp += 4; return;
}

void f_0052cbe4(void) /* sub_52CBE4 */
{
    FN_ENTER(0x0052cbe4);
    /* 0052cbe4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cbe5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052cbe6: mov ebx, eax */ r_ebx = r_eax;
L_0052cbe8:; BB(0x0052cbe8);
    /* 0052cbe8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0052cbea: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052cbed: jne 0x52cc0e */ if (!fZ) goto L_0052cc0e;
L_0052cbef:; BB(0x0052cbef);
    /* 0052cbef: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0052cbf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cbf4: je 0x52cc0e */ if (fZ) goto L_0052cc0e;
L_0052cbf6:; BB(0x0052cbf6);
    /* 0052cbf6: mov ecx, dword ptr [0xa7306c] */ r_ecx = R32((u32)(0xa7306cu));
    /* 0052cbfc: add dword ptr [0xa73070], 1 */ { u32 ad = (u32)(0xa73070u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052cc03: lea edx, [ecx + 4] */ r_edx = (u32)(r_ecx+0x4u);
    /* 0052cc06: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 0052cc08: mov dword ptr [0xa7306c], edx */ W32((u32)(0xa7306cu), r_edx);
L_0052cc0e:; BB(0x0052cc0e);
    /* 0052cc0e: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0052cc11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cc13: je 0x52cc1a */ if (fZ) goto L_0052cc1a;
L_0052cc15:; BB(0x0052cc15);
    /* 0052cc15: call 0x52cbe4 */ r_esp -= 4; W32(r_esp, 0x52cc1au); f_0052cbe4();
L_0052cc1a:; BB(0x0052cc1a);
    /* 0052cc1a: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0052cc1d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052cc1f: jne 0x52cbe8 */ if (!fZ) goto L_0052cbe8;
L_0052cc21:; BB(0x0052cc21);
    /* 0052cc21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052cc22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052cc23: ret  */ FN_RET(0x0052cbe4); r_esp += 4; return;
}

void f_0052cc24(void) /* sub_52CC24 */
{
    FN_ENTER(0x0052cc24);
    /* 0052cc24: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0052cc28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052cc2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052cc2c: je 0x52cc3b */ if (fZ) goto L_0052cc3b;
L_0052cc2e:; BB(0x0052cc2e);
    /* 0052cc2e: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0052cc31: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052cc34: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052cc37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052cc39: jne 0x52cc2e */ if (!fZ) goto L_0052cc2e;
L_0052cc3b:; BB(0x0052cc3b);
    /* 0052cc3b: ret  */ FN_RET(0x0052cc24); r_esp += 4; return;
}

void f_0052cc3c(void) /* sub_52CC3C */
{
    FN_ENTER(0x0052cc3c);
    /* 0052cc3c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0052cc40: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052cc42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052cc44: je 0x52cc53 */ if (fZ) goto L_0052cc53;
L_0052cc46:; BB(0x0052cc46);
    /* 0052cc46: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0052cc49: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052cc4c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052cc4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052cc51: jne 0x52cc46 */ if (!fZ) goto L_0052cc46;
L_0052cc53:; BB(0x0052cc53);
    /* 0052cc53: ret  */ FN_RET(0x0052cc3c); r_esp += 4; return;
}

void f_0052cc54(void) /* sub_52CC54 */
{
    FN_ENTER(0x0052cc54);
    /* 0052cc54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052cc55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cc56: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052cc59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052cc5b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0052cc5f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052cc62: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052cc64: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052cc67: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052cc6a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0052cc6e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052cc71: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052cc75: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0052cc78: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52cc7du); f_0082f9c4();
    /* 0052cc7d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052cc80: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052cc84: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052cc86: fmul qword ptr [0x922378] */ ST(0) = ST(0) * R_F64((u32)(0x922378u));
    /* 0052cc8c: fdiv qword ptr [0x922370] */ ST(0) = ST(0) / R_F64((u32)(0x922370u));
    /* 0052cc92: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0052cc96: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0052cc9b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052cca0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0052cca4: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0052cca8: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0052ccac: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0052ccb0: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0052ccb4: add ebx, dword ptr [esp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052ccb8: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ccbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ccbd: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ccc0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x52ccc5u); f_007a8c74();
    /* 0052ccc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ccc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ccc7: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0052ccca: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x52cccfu); f_007a9018();
    /* 0052cccf: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052ccd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ccd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ccd4: ret 0xc */ FN_RET(0x0052cc54); r_esp += 16; return;
}

void f_0052ccd8(void) /* sub_52CCD8 */
{
    FN_ENTER(0x0052ccd8);
    /* 0052ccd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ccd9: mov edi, ecx */ r_edi = r_ecx;
    /* 0052ccdb: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052ccde: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052cce0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0052cce4: je 0x52ccf2 */ if (fZ) goto L_0052ccf2;
L_0052cce6:; BB(0x0052cce6);
    /* 0052cce6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cce7: mov ecx, edi */ r_ecx = r_edi;
    /* 0052cce9: call 0x52cd2c */ r_esp -= 4; W32(r_esp, 0x52cceeu); f_0052cd2c();
    /* 0052ccee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052ccef: ret 4 */ FN_RET(0x0052ccd8); r_esp += 8; return;
L_0052ccf2:; BB(0x0052ccf2);
    /* 0052ccf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ccf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ccf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0052ccf7: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x52ccfcu); f_007714cc();
    /* 0052ccfc: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 0052cd03: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0052cd06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd07: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52cd0cu); f_0068d5a8();
    /* 0052cd0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052cd0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd0e: mov ecx, edi */ r_ecx = r_edi;
    /* 0052cd10: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52cd15u); f_007706b0();
    /* 0052cd15: mov ecx, edi */ r_ecx = r_edi;
    /* 0052cd17: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52cd1cu); f_00770738();
    /* 0052cd1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052cd1e: mov eax, 0 */ r_eax = 0x0u;
    /* 0052cd23: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0052cd26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052cd27: ret 4 */ FN_RET(0x0052ccd8); r_esp += 8; return;
}

void f_0052cd2c(void) /* sub_52CD2C */
{
    FN_ENTER(0x0052cd2c);
    /* 0052cd2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd30: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052cd33: mov esi, ecx */ r_esi = r_ecx;
    /* 0052cd35: mov ecx, esi */ r_ecx = r_esi;
    /* 0052cd37: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0052cd3b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052cd3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd40: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052cd44: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x52cd49u); f_007714cc();
    /* 0052cd49: mov edi, eax */ r_edi = r_eax;
    /* 0052cd4b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052cd4e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052cd50: mov ebx, dword ptr [0xaae168] */ r_ebx = R32((u32)(0xaae168u));
    /* 0052cd56: mov edx, dword ptr [0xaae164] */ r_edx = R32((u32)(0xaae164u));
    /* 0052cd5c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052cd5f: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052cd61: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 0052cd66: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052cd68: jge 0x52cdde */ if ((fS==fO)) goto L_0052cdde;
L_0052cd6a:; BB(0x0052cd6a);
    /* 0052cd6a: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_0052cd6e:; BB(0x0052cd6e);
    /* 0052cd6e: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0052cd75: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cd77: je 0x52ce73 */ if (fZ) goto L_0052ce73;
L_0052cd7d:; BB(0x0052cd7d);
    /* 0052cd7d: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0052cd81: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0052cd85: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cd87: je 0x52cdd3 */ if (fZ) goto L_0052cdd3;
L_0052cd89:; BB(0x0052cd89);
    /* 0052cd89: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052cd8f: jl 0x52cdd3 */ if ((fS!=fO)) goto L_0052cdd3;
L_0052cd91:; BB(0x0052cd91);
    /* 0052cd91: cmp ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052cd97: jge 0x52cdd3 */ if ((fS==fO)) goto L_0052cdd3;
L_0052cd99:; BB(0x0052cd99);
    /* 0052cd99: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052cd9c: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cda1: jne 0x52cdd3 */ if (!fZ) goto L_0052cdd3;
L_0052cda3:; BB(0x0052cda3);
    /* 0052cda3: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0052cda7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cda8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052cda9: mov ecx, esi */ r_ecx = r_esi;
    /* 0052cdab: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x52cdb0u); f_00771458();
    /* 0052cdb0: fcom dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); 
    /* 0052cdb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052cdb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052cdb6: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052cdbc: mov ecx, dword ptr [0xaae164] */ r_ecx = R32((u32)(0xaae164u));
    /* 0052cdc2: jb 0x52cdca */ if (fC) goto L_0052cdca;
L_0052cdc4:; BB(0x0052cdc4);
    /* 0052cdc4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052cdc6: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052cdc8: jmp 0x52cdd3 */ goto L_0052cdd3;
L_0052cdca:; BB(0x0052cdca);
    /* 0052cdca: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 0052cdce: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052cdd1: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0052cdd3:; BB(0x0052cdd3);
    /* 0052cdd3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052cdd6: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052cdd8: jl 0x52cd6e */ if ((fS!=fO)) goto L_0052cd6e;
L_0052cdda:; BB(0x0052cdda);
    /* 0052cdda: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0052cdde:; BB(0x0052cdde);
    /* 0052cdde: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 0052cde1: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cde7: je 0x52ce60 */ if (fZ) goto L_0052ce60;
L_0052cde9:; BB(0x0052cde9);
    /* 0052cde9: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cdef: jne 0x52cdfa */ if (!fZ) goto L_0052cdfa;
L_0052cdf1:; BB(0x0052cdf1);
    /* 0052cdf1: mov word ptr [esi + 0x340], di */ W16((u32)(r_esi+0x340u), (u16)r_edi);
    /* 0052cdf8: jmp 0x52ce37 */ goto L_0052ce37;
L_0052cdfa:; BB(0x0052cdfa);
    /* 0052cdfa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052cdfb: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x52ce00u); f_007b4d18();
    /* 0052ce00: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0052ce03: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ce06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce08: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x52ce0du); f_0078ea50();
    /* 0052ce0d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0052ce11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce12: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x52ce17u); f_007b4d18();
    /* 0052ce17: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ce1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce1c: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x52ce21u); f_0078ea50();
    /* 0052ce21: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ce24: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052ce27: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052ce29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052ce2b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052ce2c: jb 0x52ce30 */ if (fC) goto L_0052ce30;
L_0052ce2e:; BB(0x0052ce2e);
    /* 0052ce2e: mov edi, ebp */ r_edi = r_ebp;
L_0052ce30:; BB(0x0052ce30);
    /* 0052ce30: mov word ptr [esi + 0x340], di */ W16((u32)(r_esi+0x340u), (u16)r_edi);
L_0052ce37:; BB(0x0052ce37);
    /* 0052ce37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce38: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x52ce3du); f_00578c74();
    /* 0052ce3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052ce3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce3f: mov ecx, esi */ r_ecx = r_esi;
    /* 0052ce41: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52ce46u); f_007706b0();
    /* 0052ce46: mov ecx, esi */ r_ecx = r_esi;
    /* 0052ce48: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52ce4du); f_00770738();
    /* 0052ce4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ce4f: je 0x52ce7c */ if (fZ) goto L_0052ce7c;
L_0052ce51:; BB(0x0052ce51);
    /* 0052ce51: mov eax, 1 */ r_eax = 0x1u;
    /* 0052ce56: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052ce59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ce5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ce5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052ce5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052ce5d: ret 4 */ FN_RET(0x0052cd2c); r_esp += 8; return;
L_0052ce60:; BB(0x0052ce60);
    /* 0052ce60: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0052ce65: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0052ce6a: mov word ptr [esi + 0x340], dx */ W16((u32)(r_esi+0x340u), (u16)r_edx);
    /* 0052ce71: jmp 0x52ce37 */ goto L_0052ce37;
L_0052ce73:; BB(0x0052ce73);
    /* 0052ce73: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0052ce77: jmp 0x52cdde */ goto L_0052cdde;
L_0052ce7c:; BB(0x0052ce7c);
    /* 0052ce7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ce7e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052ce81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ce82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ce83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052ce84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052ce85: ret 4 */ FN_RET(0x0052cd2c); r_esp += 8; return;
}

void f_0052ce88(void) /* sub_52CE88 */
{
    FN_ENTER(0x0052ce88);
    /* 0052ce88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce89: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ce8c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052ce8e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0052ce91: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052ce94: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0052ce98: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ce9a: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0052cea0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052cea5: je 0x52cead */ if (fZ) goto L_0052cead;
L_0052cea7:; BB(0x0052cea7);
    /* 0052cea7: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0052cead:; BB(0x0052cead);
    /* 0052cead: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052ceaf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052ceb1: jle 0x52cf49 */ if ((fZ||fS!=fO)) goto L_0052cf49;
L_0052ceb7:; BB(0x0052ceb7);
    /* 0052ceb7: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0052cebb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0052cebf: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0052cec3: mov esi, ecx */ r_esi = r_ecx;
    /* 0052cec5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0052cec9: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0052cecc: mov ebp, edx */ r_ebp = r_edx;
L_0052cece:; BB(0x0052cece);
    /* 0052cece: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0052ced5: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ced7: je 0x52cf12 */ if (fZ) goto L_0052cf12;
L_0052ced9:; BB(0x0052ced9);
    /* 0052ced9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cedb: je 0x52cf12 */ if (fZ) goto L_0052cf12;
L_0052cedd:; BB(0x0052cedd);
    /* 0052cedd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052cedf: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52cee4u); f_00770738();
    /* 0052cee4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cee6: je 0x52cf12 */ if (fZ) goto L_0052cf12;
L_0052cee8:; BB(0x0052cee8);
    /* 0052cee8: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052ceee: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0052cef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cef5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052cef6: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x52cefbu); f_0078ea50();
    /* 0052cefb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052cefe: fcom dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); 
    /* 0052cf02: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052cf04: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052cf05: jae 0x52cf4d */ if (!fC) goto L_0052cf4d;
L_0052cf07:; BB(0x0052cf07);
    /* 0052cf07: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0052cf0b: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 0052cf0e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_0052cf12:; BB(0x0052cf12);
    /* 0052cf12: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052cf15: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052cf17: jl 0x52cece */ if ((fS!=fO)) goto L_0052cece;
L_0052cf19:; BB(0x0052cf19);
    /* 0052cf19: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0052cf1d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0052cf21: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0052cf25: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0052cf28:; BB(0x0052cf28);
    /* 0052cf28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052cf2a: jl 0x52cf42 */ if ((fS!=fO)) goto L_0052cf42;
L_0052cf2c:; BB(0x0052cf2c);
    /* 0052cf2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf2d: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0052cf34: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x52cf39u); f_00578c74();
    /* 0052cf39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052cf3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052cf3d: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52cf42u); f_007706b0();
L_0052cf42:; BB(0x0052cf42);
    /* 0052cf42: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052cf45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052cf46: ret 4 */ FN_RET(0x0052ce88); r_esp += 8; return;
L_0052cf49:; BB(0x0052cf49);
    /* 0052cf49: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052cf4b: jmp 0x52cf28 */ goto L_0052cf28;
L_0052cf4d:; BB(0x0052cf4d);
    /* 0052cf4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052cf4f: jmp 0x52cf12 */ goto L_0052cf12;
}

void f_0052cf54(void) /* sub_52CF54 */
{
    FN_ENTER(0x0052cf54);
    /* 0052cf54: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052cf57: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x52cf5cu); f_007a61a4();
    /* 0052cf5c: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cf5f: je 0x52cf6a */ if (fZ) goto L_0052cf6a;
L_0052cf61:; BB(0x0052cf61);
    /* 0052cf61: mov eax, 1 */ r_eax = 0x1u;
    /* 0052cf66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052cf69: ret  */ FN_RET(0x0052cf54); r_esp += 4; return;
L_0052cf6a:; BB(0x0052cf6a);
    /* 0052cf6a: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052cf70: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52cf75u); f_0068d5a8();
    /* 0052cf75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052cf76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cf78: je 0x52cfa0 */ if (fZ) goto L_0052cfa0;
L_0052cf7a:; BB(0x0052cf7a);
    /* 0052cf7a: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 0052cf80: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cf86: jne 0x52cfa0 */ if (!fZ) goto L_0052cfa0;
L_0052cf88:; BB(0x0052cf88);
    /* 0052cf88: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0052cf8e: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cf94: mov eax, 0 */ r_eax = 0x0u;
    /* 0052cf99: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0052cf9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052cf9f: ret  */ FN_RET(0x0052cf54); r_esp += 4; return;
L_0052cfa0:; BB(0x0052cfa0);
    /* 0052cfa0: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0052cfa4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0052cfa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052cfa9: mov esi, eax */ r_esi = r_eax;
L_0052cfab:; BB(0x0052cfab);
    /* 0052cfab: mov ebx, dword ptr [0xa9c4dc] */ r_ebx = R32((u32)(0xa9c4dcu));
    /* 0052cfb1: lea eax, [ebx + esi + 1] */ r_eax = (u32)(r_ebx+r_esi+0x1u);
    /* 0052cfb5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052cfb6: mov ebx, eax */ r_ebx = r_eax;
    /* 0052cfb8: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0052cfba: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0052cfbc: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0052cfbf: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0052cfc1: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0052cfc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cfc4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52cfc9u); f_0068d5a8();
    /* 0052cfc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052cfca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cfcc: je 0x52cfdc */ if (fZ) goto L_0052cfdc;
L_0052cfce:; BB(0x0052cfce);
    /* 0052cfce: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052cfd4: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cfda: je 0x52cfff */ if (fZ) goto L_0052cfff;
L_0052cfdc:; BB(0x0052cfdc);
    /* 0052cfdc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052cfdf: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052cfe2: jl 0x52cfab */ if ((fS!=fO)) goto L_0052cfab;
L_0052cfe4:; BB(0x0052cfe4);
    /* 0052cfe4: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0052cfe7: mov eax, ebx */ r_eax = r_ebx;
    /* 0052cfe9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_0052cfed:; BB(0x0052cfed);
    /* 0052cfed: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cff3: mov eax, 0 */ r_eax = 0x0u;
    /* 0052cff8: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0052cffb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052cffe: ret  */ FN_RET(0x0052cf54); r_esp += 4; return;
L_0052cfff:; BB(0x0052cfff);
    /* 0052cfff: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0052d002: mov eax, ebx */ r_eax = r_ebx;
    /* 0052d004: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0052d008: jmp 0x52cfed */ goto L_0052cfed;
}

