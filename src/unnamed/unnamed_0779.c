#include "protos.h"

void f_007791b8(void) /* sub_7791B8 */
{
    FN_ENTER(0x007791b8);
    /* 007791b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007791b9: mov ebp, esp */ r_ebp = r_esp;
    /* 007791bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007791bd: push 0x8f4168 */ { u32 v = 0x8f4168u; r_esp -= 4; W32(r_esp, v); }
    /* 007791c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007791c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007791c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007791d0: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007791d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007791d6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 007791d9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 007791dc: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 007791df: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007791e2: fld dword ptr [0x9780f8] */ FPUSH(R_F32((u32)(0x9780f8u)));
    /* 007791e8: fld dword ptr [0x9780f4] */ FPUSH(R_F32((u32)(0x9780f4u)));
    /* 007791ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007791f1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007791f4: jne 0x779208 */ if (!fZ) goto L_00779208;
L_007791f6:; BB(0x007791f6);
    /* 007791f6: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 007791f9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007791fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007791fd: fmul dword ptr [0x9780ec] */ ST(0) = ST(0) * R_F32((u32)(0x9780ecu));
    /* 00779203: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00779206: jmp 0x779218 */ goto L_00779218;
L_00779208:; BB(0x00779208);
    /* 00779208: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0077920b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077920d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0077920f: fmul dword ptr [0x9780f0] */ ST(0) = ST(0) * R_F32((u32)(0x9780f0u));
    /* 00779215: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_00779218:; BB(0x00779218);
    /* 00779218: mov eax, ecx */ r_eax = r_ecx;
    /* 0077921a: push dword ptr [eax + 0x278] */ { u32 v = R32((u32)(r_eax+0x278u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779220: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x779225u); f_0082e900();
    /* 00779225: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00779228: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0077922b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077922c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0077922f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x779234u); f_0082e900();
    /* 00779234: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00779237: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00779239: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077923b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077923c: jbe 0x77924e */ if ((fC||fZ)) goto L_0077924e;
L_0077923e:; BB(0x0077923e);
    /* 0077923e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00779241: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00779248: mov esp, ebp */ r_esp = r_ebp;
    /* 0077924a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077924b: ret 8 */ FN_RET(0x007791b8); r_esp += 12; return;
L_0077924e:; BB(0x0077924e);
    /* 0077924e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00779251: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00779254: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00779257: movsx ecx, word ptr [edx + 0x2c4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2c4u));
    /* 0077925e: fld dword ptr [edx + 0x278] */ FPUSH(R_F32((u32)(r_edx+0x278u)));
    /* 00779264: movzx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)R16((u32)(r_edx+0x2ccu));
    /* 0077926b: movsx ebx, word ptr [edx + 0x2c6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x2c6u));
    /* 00779272: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779274: fst dword ptr [edx + 0x278] */ W_F32((u32)(r_edx+0x278u), ST(0));
    /* 0077927a: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0077927d: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00779280: movzx ecx, word ptr [edx + 0x2ce] */ r_ecx = (u32)R16((u32)(r_edx+0x2ceu));
    /* 00779287: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0077928a: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0077928d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0077928f: fchs  */ ST(0) = -ST(0);
    /* 00779291: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00779293: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779295: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00779297: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00779299: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0077929b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077929d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0077929f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007792a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007792a3: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 007792a6: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 007792aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007792af: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007792b2: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 007792b5: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 007792b8: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 007792bb: add edi, dword ptr [ebp - 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007792be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007792c0: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 007792c3: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 007792c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007792cc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007792cf: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 007792d2: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 007792d5: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 007792d8: add ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007792db: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 007792de: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 007792e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007792e7: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007792ea: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 007792ed: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 007792f0: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 007792f3: add edi, dword ptr [ebp - 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007792f6: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 007792f9: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 007792fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779302: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00779305: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00779308: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077930b: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0077930e: add ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779311: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00779314: fmul dword ptr [0x9780f8] */ ST(0) = ST(0) * R_F32((u32)(0x9780f8u));
    /* 0077931a: fadd dword ptr [0x9780e8] */ ST(0) = ST(0) + R_F32((u32)(0x9780e8u));
    /* 00779320: fmul dword ptr [0x9780e4] */ ST(0) = ST(0) * R_F32((u32)(0x9780e4u));
    /* 00779326: mov dword ptr [edx + 0x274], esi */ W32((u32)(r_edx+0x274u), r_esi);
    /* 0077932c: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0077932f: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00779333: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779338: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0077933b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0077933e: fistp dword ptr [edx + 0x27c] */ W32((u32)(r_edx+0x27cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00779344: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00779347: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0077934a: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077934f: mov word ptr [edx + 0x2cc], di */ W16((u32)(r_edx+0x2ccu), (u16)r_edi);
    /* 00779356: mov word ptr [edx + 0x2ce], cx */ W16((u32)(r_edx+0x2ceu), (u16)r_ecx);
    /* 0077935d: jne 0x7793ac */ if (!fZ) goto L_007793ac;
L_0077935f:; BB(0x0077935f);
    /* 0077935f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00779366: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00779368: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77936du); f_005caba4();
    /* 0077936d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077936e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00779371: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779373: je 0x7793ac */ if (fZ) goto L_007793ac;
L_00779375:; BB(0x00779375);
    /* 00779375: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0077937c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00779383: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779389: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077938c: mov ecx, eax */ r_ecx = r_eax;
    /* 0077938e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077938f: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00779394: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00779396: push 0x978158 */ { u32 v = 0x978158u; r_esp -= 4; W32(r_esp, v); }
    /* 0077939b: push 0x978148 */ { u32 v = 0x978148u; r_esp -= 4; W32(r_esp, v); }
    /* 007793a0: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x7793a5u); f_006eb52c();
    /* 007793a5: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_007793ac:; BB(0x007793ac);
    /* 007793ac: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007793af: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007793b2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007793b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007793b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007793bf: mov esp, ebp */ r_esp = r_ebp;
    /* 007793c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007793c2: ret 8 */ FN_RET(0x007791b8); r_esp += 12; return;
}

void f_007793c8(void) /* sub_7793C8 */
{
    FN_ENTER(0x007793c8);
    /* 007793c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007793c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007793cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007793cd: push 0x8f4190 */ { u32 v = 0x8f4190u; r_esp -= 4; W32(r_esp, v); }
    /* 007793d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007793d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007793d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007793e0: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007793e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007793e6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 007793e9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 007793ec: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 007793ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007793f2: fld dword ptr [0x9780dc] */ FPUSH(R_F32((u32)(0x9780dcu)));
    /* 007793f8: fld dword ptr [0x9780d8] */ FPUSH(R_F32((u32)(0x9780d8u)));
    /* 007793fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00779401: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779404: jne 0x779418 */ if (!fZ) goto L_00779418;
L_00779406:; BB(0x00779406);
    /* 00779406: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00779409: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077940b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0077940d: fmul dword ptr [0x9780d0] */ ST(0) = ST(0) * R_F32((u32)(0x9780d0u));
    /* 00779413: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00779416: jmp 0x779428 */ goto L_00779428;
L_00779418:; BB(0x00779418);
    /* 00779418: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0077941b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077941d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0077941f: fmul dword ptr [0x9780d4] */ ST(0) = ST(0) * R_F32((u32)(0x9780d4u));
    /* 00779425: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_00779428:; BB(0x00779428);
    /* 00779428: mov eax, ecx */ r_eax = r_ecx;
    /* 0077942a: push dword ptr [eax + 0x284] */ { u32 v = R32((u32)(r_eax+0x284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779430: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x779435u); f_0082e900();
    /* 00779435: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00779438: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0077943b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077943c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0077943f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x779444u); f_0082e900();
    /* 00779444: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00779447: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00779449: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077944b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077944c: jbe 0x77945e */ if ((fC||fZ)) goto L_0077945e;
L_0077944e:; BB(0x0077944e);
    /* 0077944e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00779451: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00779458: mov esp, ebp */ r_esp = r_ebp;
    /* 0077945a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077945b: ret 8 */ FN_RET(0x007793c8); r_esp += 12; return;
L_0077945e:; BB(0x0077945e);
    /* 0077945e: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00779461: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00779464: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00779467: movsx edx, word ptr [esi + 0x2ca] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2cau));
    /* 0077946e: fld dword ptr [esi + 0x284] */ FPUSH(R_F32((u32)(r_esi+0x284u)));
    /* 00779474: movzx ebx, word ptr [esi + 0x2d2] */ r_ebx = (u32)R16((u32)(r_esi+0x2d2u));
    /* 0077947b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077947d: fst dword ptr [esi + 0x284] */ W_F32((u32)(r_esi+0x284u), ST(0));
    /* 00779483: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00779486: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 00779489: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077948b: fchs  */ ST(0) = -ST(0);
    /* 0077948d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0077948f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779491: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00779493: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00779496: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0077949a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077949f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 007794a2: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 007794a5: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 007794a8: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 007794ab: add ebx, dword ptr [ebp - 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007794ae: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 007794b1: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 007794b5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007794ba: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 007794bd: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 007794c0: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 007794c3: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 007794c6: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 007794c9: fmul dword ptr [0x9780dc] */ ST(0) = ST(0) * R_F32((u32)(0x9780dcu));
    /* 007794cf: fadd dword ptr [0x9780cc] */ ST(0) = ST(0) + R_F32((u32)(0x9780ccu));
    /* 007794d5: fmul dword ptr [0x9780c8] */ ST(0) = ST(0) * R_F32((u32)(0x9780c8u));
    /* 007794db: add ebx, dword ptr [ebp - 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007794de: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 007794e1: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 007794e5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007794ea: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 007794ed: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 007794f0: fistp dword ptr [esi + 0x288] */ W32((u32)(r_esi+0x288u), (u32)fx_int32(ST(0))); FPOP();
    /* 007794f6: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 007794f9: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 007794fc: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779501: mov dword ptr [esi + 0x280], ecx */ W32((u32)(r_esi+0x280u), r_ecx);
    /* 00779507: mov word ptr [esi + 0x2d2], bx */ W16((u32)(r_esi+0x2d2u), (u16)r_ebx);
    /* 0077950e: jne 0x77955c */ if (!fZ) goto L_0077955c;
L_00779510:; BB(0x00779510);
    /* 00779510: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00779517: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00779519: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77951eu); f_005caba4();
    /* 0077951e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077951f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00779522: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779524: je 0x77955c */ if (fZ) goto L_0077955c;
L_00779526:; BB(0x00779526);
    /* 00779526: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0077952d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00779534: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077953a: mov edx, esi */ r_edx = r_esi;
    /* 0077953c: mov ecx, eax */ r_ecx = r_eax;
    /* 0077953e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077953f: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00779544: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00779546: push 0x978158 */ { u32 v = 0x978158u; r_esp -= 4; W32(r_esp, v); }
    /* 0077954b: push 0x978130 */ { u32 v = 0x978130u; r_esp -= 4; W32(r_esp, v); }
    /* 00779550: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x779555u); f_006eb52c();
    /* 00779555: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0077955c:; BB(0x0077955c);
    /* 0077955c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077955f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00779562: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00779565: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077956c: mov esp, ebp */ r_esp = r_ebp;
    /* 0077956e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077956f: ret 8 */ FN_RET(0x007793c8); r_esp += 12; return;
}

void f_00779574(void) /* sub_779574 */
{
    FN_ENTER(0x00779574);
    /* 00779574: mov eax, dword ptr [ecx + 0x25c] */ r_eax = R32((u32)(r_ecx+0x25cu));
    /* 0077957a: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077957d: jne 0x7795a9 */ if (!fZ) goto L_007795a9;
L_0077957f:; BB(0x0077957f);
    /* 0077957f: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00779582: mov dword ptr [ecx + 0x260], 0 */ W32((u32)(r_ecx+0x260u), 0x0u);
    /* 0077958c: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077958f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00779592: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00779595: mov dword ptr [ecx + 0x338], eax */ W32((u32)(r_ecx+0x338u), r_eax);
    /* 0077959b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077959d: mov dword ptr [ecx + 0x25c], edx */ W32((u32)(r_ecx+0x25cu), r_edx);
    /* 007795a3: mov dword ptr [ecx + 0x264], edx */ W32((u32)(r_ecx+0x264u), r_edx);
L_007795a9:; BB(0x007795a9);
    /* 007795a9: ret  */ FN_RET(0x00779574); r_esp += 4; return;
}

void f_007795ac(void) /* sub_7795AC */
{
    FN_ENTER(0x007795ac);
    /* 007795ac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007795af: mov eax, dword ptr [ecx + 0x25c] */ r_eax = R32((u32)(r_ecx+0x25cu));
    /* 007795b5: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007795b8: jne 0x779626 */ if (!fZ) goto L_00779626;
L_007795ba:; BB(0x007795ba);
    /* 007795ba: movsx edx, word ptr [ecx + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c8u));
    /* 007795c1: fld dword ptr [ecx + 0x260] */ FPUSH(R_F32((u32)(r_ecx+0x260u)));
    /* 007795c7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007795ca: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007795cd: mov dword ptr [ecx + 0x260], 0 */ W32((u32)(r_ecx+0x260u), 0x0u);
    /* 007795d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007795d9: fchs  */ ST(0) = -ST(0);
    /* 007795db: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007795dd: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007795e1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007795e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007795eb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007795ef: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007795f3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007795f7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007795fb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007795ff: add word ptr [ecx + 0x2d0], ax */ { u32 ad = (u32)(r_ecx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779606: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00779609: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077960c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0077960f: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00779612: mov dword ptr [ecx + 0x338], eax */ W32((u32)(r_ecx+0x338u), r_eax);
    /* 00779618: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077961a: mov dword ptr [ecx + 0x25c], eax */ W32((u32)(r_ecx+0x25cu), r_eax);
    /* 00779620: mov dword ptr [ecx + 0x264], eax */ W32((u32)(r_ecx+0x264u), r_eax);
L_00779626:; BB(0x00779626);
    /* 00779626: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779629: ret  */ FN_RET(0x007795ac); r_esp += 4; return;
}

void f_0077962c(void) /* sub_77962C */
{
    FN_ENTER(0x0077962c);
    /* 0077962c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077962d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00779630: mov edi, ecx */ r_edi = r_ecx;
    /* 00779632: mov eax, dword ptr [edi + 0x25c] */ r_eax = R32((u32)(r_edi+0x25cu));
    /* 00779638: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077963b: jne 0x77967f */ if (!fZ) goto L_0077967f;
L_0077963d:; BB(0x0077963d);
    /* 0077963d: movsx edx, word ptr [edi + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00779644: fld dword ptr [edi + 0x260] */ FPUSH(R_F32((u32)(r_edi+0x260u)));
    /* 0077964a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0077964d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00779650: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779652: fchs  */ ST(0) = -ST(0);
    /* 00779654: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00779656: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0077965a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077965f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779664: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779668: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0077966c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779670: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779674: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779678: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0077967f:; BB(0x0077967f);
    /* 0077967f: mov eax, dword ptr [edi + 0x268] */ r_eax = R32((u32)(r_edi+0x268u));
    /* 00779685: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00779688: jl 0x7796d3 */ if ((fS!=fO)) goto L_007796d3;
L_0077968a:; BB(0x0077968a);
    /* 0077968a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077968d: jg 0x7796d3 */ if ((!fZ&&fS==fO)) goto L_007796d3;
L_0077968f:; BB(0x0077968f);
    /* 0077968f: movsx edx, word ptr [edi + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2c8u));
    /* 00779696: fld dword ptr [edi + 0x26c] */ FPUSH(R_F32((u32)(r_edi+0x26cu)));
    /* 0077969c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007796a0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 007796a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007796a6: fchs  */ ST(0) = -ST(0);
    /* 007796a8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007796aa: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007796ae: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007796b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007796b8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007796bc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007796c0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007796c4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007796c8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007796cc: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_007796d3:; BB(0x007796d3);
    /* 007796d3: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 007796d6: fld dword ptr [edi + 0x278] */ FPUSH(R_F32((u32)(r_edi+0x278u)));
    /* 007796dc: fld dword ptr [edi + 0x284] */ FPUSH(R_F32((u32)(r_edi+0x284u)));
    /* 007796e2: and ecx, 0xffffffc0 */ {  u32 a = r_ecx; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007796e5: mov eax, ecx */ r_eax = r_ecx;
    /* 007796e7: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007796ea: mov dword ptr [edi + 0x260], 0 */ W32((u32)(r_edi+0x260u), 0x0u);
    /* 007796f4: mov dword ptr [edi + 0x338], eax */ W32((u32)(r_edi+0x338u), r_eax);
    /* 007796fa: movsx eax, word ptr [edi + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c4u));
    /* 00779701: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00779703: mov dword ptr [edi + 0x26c], 0 */ W32((u32)(r_edi+0x26cu), 0x0u);
    /* 0077970d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779711: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779715: mov dword ptr [edi + 0x278], 0 */ W32((u32)(r_edi+0x278u), 0x0u);
    /* 0077971f: mov dword ptr [edi + 0x25c], edx */ W32((u32)(r_edi+0x25cu), r_edx);
    /* 00779725: mov dword ptr [edi + 0x284], 0 */ W32((u32)(r_edi+0x284u), 0x0u);
    /* 0077972f: mov dword ptr [edi + 0x264], edx */ W32((u32)(r_edi+0x264u), r_edx);
    /* 00779735: mov dword ptr [edi + 0x268], edx */ W32((u32)(r_edi+0x268u), r_edx);
    /* 0077973b: mov dword ptr [edi + 0x270], edx */ W32((u32)(r_edi+0x270u), r_edx);
    /* 00779741: mov dword ptr [edi + 0x290], 0 */ W32((u32)(r_edi+0x290u), 0x0u);
    /* 0077974b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077974d: fchs  */ ST(0) = -ST(0);
    /* 0077974f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00779751: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00779753: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779757: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077975c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779761: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779765: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779769: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077976d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779771: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779775: mov dword ptr [edi + 0x274], edx */ W32((u32)(r_edi+0x274u), r_edx);
    /* 0077977b: mov dword ptr [edi + 0x27c], edx */ W32((u32)(r_edi+0x27cu), r_edx);
    /* 00779781: add word ptr [edi + 0x2cc], ax */ { u32 ad = (u32)(r_edi+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779788: movsx eax, word ptr [edi + 0x2c6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c6u));
    /* 0077978f: fchs  */ ST(0) = -ST(0);
    /* 00779791: mov dword ptr [edi + 0x280], edx */ W32((u32)(r_edi+0x280u), r_edx);
    /* 00779797: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0077979b: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0077979f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007797a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007797a3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007797a7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007797ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007797b1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007797b5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007797b9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007797bd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007797c1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007797c5: mov dword ptr [edi + 0x288], edx */ W32((u32)(r_edi+0x288u), r_edx);
    /* 007797cb: and ecx, 0xffffbfff */ {  u32 a = r_ecx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007797d1: add word ptr [edi + 0x2ce], ax */ { u32 ad = (u32)(r_edi+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007797d8: movsx eax, word ptr [edi + 0x2ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cau));
    /* 007797df: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 007797e2: mov dword ptr [edi + 0x28c], edx */ W32((u32)(r_edi+0x28cu), r_edx);
    /* 007797e8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007797ec: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 007797f0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007797f2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007797f6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007797fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779800: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779804: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779808: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077980c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779810: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779814: mov dword ptr [edi + 0x294], edx */ W32((u32)(r_edi+0x294u), r_edx);
    /* 0077981a: add word ptr [edi + 0x2d2], ax */ { u32 ad = (u32)(r_edi+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779821: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779824: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779825: ret  */ FN_RET(0x0077962c); r_esp += 4; return;
}

void f_007796a0(void)
{
    FN_ENTER(0x007796a0);
    /* 007796a0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 007796a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007796a6: fchs  */ ST(0) = -ST(0);
    /* 007796a8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007796aa: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007796ae: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007796b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007796b8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007796bc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007796c0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007796c4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007796c8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007796cc: add word ptr [edi + 0x2d0], ax */ { u32 ad = (u32)(r_edi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007796d3: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 007796d6: fld dword ptr [edi + 0x278] */ FPUSH(R_F32((u32)(r_edi+0x278u)));
    /* 007796dc: fld dword ptr [edi + 0x284] */ FPUSH(R_F32((u32)(r_edi+0x284u)));
    /* 007796e2: and ecx, 0xffffffc0 */ {  u32 a = r_ecx; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007796e5: mov eax, ecx */ r_eax = r_ecx;
    /* 007796e7: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007796ea: mov dword ptr [edi + 0x260], 0 */ W32((u32)(r_edi+0x260u), 0x0u);
    /* 007796f4: mov dword ptr [edi + 0x338], eax */ W32((u32)(r_edi+0x338u), r_eax);
    /* 007796fa: movsx eax, word ptr [edi + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c4u));
    /* 00779701: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00779703: mov dword ptr [edi + 0x26c], 0 */ W32((u32)(r_edi+0x26cu), 0x0u);
    /* 0077970d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779711: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779715: mov dword ptr [edi + 0x278], 0 */ W32((u32)(r_edi+0x278u), 0x0u);
    /* 0077971f: mov dword ptr [edi + 0x25c], edx */ W32((u32)(r_edi+0x25cu), r_edx);
    /* 00779725: mov dword ptr [edi + 0x284], 0 */ W32((u32)(r_edi+0x284u), 0x0u);
    /* 0077972f: mov dword ptr [edi + 0x264], edx */ W32((u32)(r_edi+0x264u), r_edx);
    /* 00779735: mov dword ptr [edi + 0x268], edx */ W32((u32)(r_edi+0x268u), r_edx);
    /* 0077973b: mov dword ptr [edi + 0x270], edx */ W32((u32)(r_edi+0x270u), r_edx);
    /* 00779741: mov dword ptr [edi + 0x290], 0 */ W32((u32)(r_edi+0x290u), 0x0u);
    /* 0077974b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0077974d: fchs  */ ST(0) = -ST(0);
    /* 0077974f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00779751: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00779753: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779757: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0077975c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779761: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779765: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779769: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077976d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779771: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779775: mov dword ptr [edi + 0x274], edx */ W32((u32)(r_edi+0x274u), r_edx);
    /* 0077977b: mov dword ptr [edi + 0x27c], edx */ W32((u32)(r_edi+0x27cu), r_edx);
    /* 00779781: add word ptr [edi + 0x2cc], ax */ { u32 ad = (u32)(r_edi+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779788: movsx eax, word ptr [edi + 0x2c6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2c6u));
    /* 0077978f: fchs  */ ST(0) = -ST(0);
    /* 00779791: mov dword ptr [edi + 0x280], edx */ W32((u32)(r_edi+0x280u), r_edx);
    /* 00779797: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0077979b: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0077979f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007797a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007797a3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007797a7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007797ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007797b1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007797b5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007797b9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 007797bd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007797c1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007797c5: mov dword ptr [edi + 0x288], edx */ W32((u32)(r_edi+0x288u), r_edx);
    /* 007797cb: and ecx, 0xffffbfff */ {  u32 a = r_ecx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007797d1: add word ptr [edi + 0x2ce], ax */ { u32 ad = (u32)(r_edi+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007797d8: movsx eax, word ptr [edi + 0x2ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cau));
    /* 007797df: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 007797e2: mov dword ptr [edi + 0x28c], edx */ W32((u32)(r_edi+0x28cu), r_edx);
    /* 007797e8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007797ec: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 007797f0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007797f2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007797f6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007797fb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779800: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779804: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779808: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077980c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779810: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779814: mov dword ptr [edi + 0x294], edx */ W32((u32)(r_edi+0x294u), r_edx);
    /* 0077981a: add word ptr [edi + 0x2d2], ax */ { u32 ad = (u32)(r_edi+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779821: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779824: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779825: ret  */ FN_RET(0x007796a0); r_esp += 4; return;
}

void f_00779828(void) /* sub_779828 */
{
    FN_ENTER(0x00779828);
    /* 00779828: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077982b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0077982f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00779832: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00779836: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077983b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0077983f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779843: fistp dword ptr [ecx + 0x294] */ W32((u32)(r_ecx+0x294u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779849: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0077984c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0077984f: mov dword ptr [ecx + 0x28c], 0x14 */ W32((u32)(r_ecx+0x28cu), 0x14u);
    /* 00779859: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077985e: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00779861: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779864: ret 4 */ FN_RET(0x00779828); r_esp += 8; return;
}

void f_00779868(void) /* sub_779868 */
{
    FN_ENTER(0x00779868);
    /* 00779868: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779869: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077986c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077986e: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00779872: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00779874: jl 0x779b75 */ if ((fS!=fO)) goto L_00779b75;
L_0077987a:; BB(0x0077987a);
    /* 0077987a: mov eax, dword ptr [ebx + 0x25c] */ r_eax = R32((u32)(r_ebx+0x25cu));
    /* 00779880: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779883: jne 0x7798ab */ if (!fZ) goto L_007798ab;
L_00779885:; BB(0x00779885);
    /* 00779885: fld dword ptr [0x9780b4] */ FPUSH(R_F32((u32)(0x9780b4u)));
    /* 0077988b: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0077988e: mov dword ptr [ebx + 0x260], 0 */ W32((u32)(r_ebx+0x260u), 0x0u);
    /* 00779898: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077989b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077989d: mov dword ptr [ebx + 0x25c], eax */ W32((u32)(r_ebx+0x25cu), r_eax);
    /* 007798a3: mov dword ptr [ebx + 0x264], eax */ W32((u32)(r_ebx+0x264u), r_eax);
    /* 007798a9: jmp 0x7798b4 */ goto L_007798b4;
L_007798ab:; BB(0x007798ab);
    /* 007798ab: fld dword ptr [0x9780b4] */ FPUSH(R_F32((u32)(0x9780b4u)));
    /* 007798b1: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
L_007798b4:; BB(0x007798b4);
    /* 007798b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007798b6: jle 0x779b7e */ if ((fZ||fS!=fO)) goto L_00779b7e;
L_007798bc:; BB(0x007798bc);
    /* 007798bc: mov eax, dword ptr [ebx + 0x268] */ r_eax = R32((u32)(r_ebx+0x268u));
    /* 007798c2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007798c5: jne 0x779924 */ if (!fZ) goto L_00779924;
L_007798c7:; BB(0x007798c7);
    /* 007798c7: movsx eax, word ptr [ebx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c8u));
    /* 007798ce: fld dword ptr [ebx + 0x26c] */ FPUSH(R_F32((u32)(r_ebx+0x26cu)));
    /* 007798d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007798d6: fst dword ptr [ebx + 0x26c] */ W_F32((u32)(r_ebx+0x26cu), ST(0));
    /* 007798dc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007798df: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007798e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007798e4: fchs  */ ST(0) = -ST(0);
    /* 007798e6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007798e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007798ea: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007798ee: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007798f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007798f8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007798fc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779900: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779904: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779908: and edx, 0xffffffc3 */ {  u32 a = r_edx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077990b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0077990f: add word ptr [ebx + 0x2d0], ax */ { u32 ad = (u32)(r_ebx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779916: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00779918: mov dword ptr [ebx + 0x268], eax */ W32((u32)(r_ebx+0x268u), r_eax);
    /* 0077991e: mov dword ptr [ebx + 0x270], eax */ W32((u32)(r_ebx+0x270u), r_eax);
L_00779924:; BB(0x00779924);
    /* 00779924: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00779927: jl 0x779b7e */ if ((fS!=fO)) goto L_00779b7e;
L_0077992d:; BB(0x0077992d);
    /* 0077992d: mov eax, dword ptr [ebx + 0x25c] */ r_eax = R32((u32)(r_ebx+0x25cu));
    /* 00779933: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779936: jne 0x779997 */ if (!fZ) goto L_00779997;
L_00779938:; BB(0x00779938);
    /* 00779938: movsx eax, word ptr [ebx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c8u));
    /* 0077993f: fld dword ptr [ebx + 0x260] */ FPUSH(R_F32((u32)(r_ebx+0x260u)));
    /* 00779945: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779947: fst dword ptr [ebx + 0x260] */ W_F32((u32)(r_ebx+0x260u), ST(0));
    /* 0077994d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779951: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779955: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00779957: fchs  */ ST(0) = -ST(0);
    /* 00779959: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0077995b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077995d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779961: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00779966: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077996b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0077996f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779973: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779977: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077997b: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0077997e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779982: add word ptr [ebx + 0x2d0], ax */ { u32 ad = (u32)(r_ebx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779989: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077998b: mov dword ptr [ebx + 0x25c], eax */ W32((u32)(r_ebx+0x25cu), r_eax);
    /* 00779991: mov dword ptr [ebx + 0x264], eax */ W32((u32)(r_ebx+0x264u), r_eax);
L_00779997:; BB(0x00779997);
    /* 00779997: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077999a: jl 0x779b7e */ if ((fS!=fO)) goto L_00779b7e;
L_007799a0:; BB(0x007799a0);
    /* 007799a0: mov eax, dword ptr [ebx + 0x268] */ r_eax = R32((u32)(r_ebx+0x268u));
    /* 007799a6: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007799a9: jne 0x7799c2 */ if (!fZ) goto L_007799c2;
L_007799ab:; BB(0x007799ab);
    /* 007799ab: fst dword ptr [ebx + 0x26c] */ W_F32((u32)(r_ebx+0x26cu), ST(0));
    /* 007799b1: and edx, 0xffffffc3 */ {  u32 a = r_edx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007799b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007799b6: mov dword ptr [ebx + 0x268], eax */ W32((u32)(r_ebx+0x268u), r_eax);
    /* 007799bc: mov dword ptr [ebx + 0x270], eax */ W32((u32)(r_ebx+0x270u), r_eax);
L_007799c2:; BB(0x007799c2);
    /* 007799c2: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007799c5: jl 0x779b7e */ if ((fS!=fO)) goto L_00779b7e;
L_007799cb:; BB(0x007799cb);
    /* 007799cb: mov eax, dword ptr [ebx + 0x268] */ r_eax = R32((u32)(r_ebx+0x268u));
    /* 007799d1: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007799d4: jne 0x7799ed */ if (!fZ) goto L_007799ed;
L_007799d6:; BB(0x007799d6);
    /* 007799d6: fst dword ptr [ebx + 0x26c] */ W_F32((u32)(r_ebx+0x26cu), ST(0));
    /* 007799dc: and edx, 0xffffffc3 */ {  u32 a = r_edx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007799df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007799e1: mov dword ptr [ebx + 0x268], eax */ W32((u32)(r_ebx+0x268u), r_eax);
    /* 007799e7: mov dword ptr [ebx + 0x270], eax */ W32((u32)(r_ebx+0x270u), r_eax);
L_007799ed:; BB(0x007799ed);
    /* 007799ed: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007799f0: jl 0x779b7e */ if ((fS!=fO)) goto L_00779b7e;
L_007799f6:; BB(0x007799f6);
    /* 007799f6: mov eax, dword ptr [ebx + 0x274] */ r_eax = R32((u32)(r_ebx+0x274u));
    /* 007799fc: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007799ff: jne 0x779a9d */ if (!fZ) goto L_00779a9d;
L_00779a05:; BB(0x00779a05);
    /* 00779a05: movsx eax, word ptr [ebx + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c4u));
    /* 00779a0c: fld dword ptr [ebx + 0x278] */ FPUSH(R_F32((u32)(r_ebx+0x278u)));
    /* 00779a12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779a14: fst dword ptr [ebx + 0x278] */ W_F32((u32)(r_ebx+0x278u), ST(0));
    /* 00779a1a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779a1e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779a22: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00779a24: fchs  */ ST(0) = -ST(0);
    /* 00779a26: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00779a28: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00779a2a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779a2e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00779a33: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779a38: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779a3c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779a40: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779a44: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779a48: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779a4c: add word ptr [ebx + 0x2cc], ax */ { u32 ad = (u32)(r_ebx+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779a53: movsx eax, word ptr [ebx + 0x2c6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c6u));
    /* 00779a5a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779a5e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779a62: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00779a64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779a66: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779a6a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00779a6f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779a74: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779a78: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779a7c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779a80: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779a84: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779a88: add word ptr [ebx + 0x2ce], ax */ { u32 ad = (u32)(r_ebx+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779a8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00779a91: mov dword ptr [ebx + 0x274], eax */ W32((u32)(r_ebx+0x274u), r_eax);
    /* 00779a97: mov dword ptr [ebx + 0x27c], eax */ W32((u32)(r_ebx+0x27cu), r_eax);
L_00779a9d:; BB(0x00779a9d);
    /* 00779a9d: mov eax, dword ptr [ebx + 0x280] */ r_eax = R32((u32)(r_ebx+0x280u));
    /* 00779aa3: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779aa6: jne 0x779b04 */ if (!fZ) goto L_00779b04;
L_00779aa8:; BB(0x00779aa8);
    /* 00779aa8: movsx eax, word ptr [ebx + 0x2ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cau));
    /* 00779aaf: fld dword ptr [ebx + 0x284] */ FPUSH(R_F32((u32)(r_ebx+0x284u)));
    /* 00779ab5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779ab7: fst dword ptr [ebx + 0x284] */ W_F32((u32)(r_ebx+0x284u), ST(0));
    /* 00779abd: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779ac1: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779ac5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00779ac7: fchs  */ ST(0) = -ST(0);
    /* 00779ac9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00779acb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779acd: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779ad1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00779ad6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779adb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779adf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779ae3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779ae7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779aeb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779aef: add word ptr [ebx + 0x2d2], ax */ { u32 ad = (u32)(r_ebx+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779af6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00779af8: mov dword ptr [ebx + 0x280], eax */ W32((u32)(r_ebx+0x280u), r_eax);
    /* 00779afe: mov dword ptr [ebx + 0x288], eax */ W32((u32)(r_ebx+0x288u), r_eax);
L_00779b04:; BB(0x00779b04);
    /* 00779b04: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00779b07: jl 0x779b7e */ if ((fS!=fO)) goto L_00779b7e;
L_00779b09:; BB(0x00779b09);
    /* 00779b09: mov eax, dword ptr [ebx + 0x268] */ r_eax = R32((u32)(r_ebx+0x268u));
    /* 00779b0f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779b12: jne 0x779b7e */ if (!fZ) goto L_00779b7e;
L_00779b14:; BB(0x00779b14);
    /* 00779b14: movsx eax, word ptr [ebx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c8u));
    /* 00779b1b: fld dword ptr [ebx + 0x26c] */ FPUSH(R_F32((u32)(r_ebx+0x26cu)));
    /* 00779b21: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779b23: fst dword ptr [ebx + 0x26c] */ W_F32((u32)(r_ebx+0x26cu), ST(0));
    /* 00779b29: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00779b2d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00779b31: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00779b33: fchs  */ ST(0) = -ST(0);
    /* 00779b35: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00779b37: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00779b39: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00779b3d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00779b42: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00779b47: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00779b4b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00779b4f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00779b53: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00779b57: and edx, 0xffffffc3 */ {  u32 a = r_edx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00779b5a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00779b5e: add word ptr [ebx + 0x2d0], ax */ { u32 ad = (u32)(r_ebx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00779b65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00779b67: mov dword ptr [ebx + 0x268], eax */ W32((u32)(r_ebx+0x268u), r_eax);
    /* 00779b6d: mov dword ptr [ebx + 0x270], eax */ W32((u32)(r_ebx+0x270u), r_eax);
    /* 00779b73: jmp 0x779b7e */ goto L_00779b7e;
L_00779b75:; BB(0x00779b75);
    /* 00779b75: fld dword ptr [0x9780b4] */ FPUSH(R_F32((u32)(0x9780b4u)));
    /* 00779b7b: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
L_00779b7e:; BB(0x00779b7e);
    /* 00779b7e: fstp dword ptr [ebx + 0x290] */ W_F32((u32)(r_ebx+0x290u), ST(0)); FPOP();
    /* 00779b84: mov eax, edx */ r_eax = r_edx;
    /* 00779b86: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00779b89: mov dword ptr [ebx + 0x338], eax */ W32((u32)(r_ebx+0x338u), r_eax);
    /* 00779b8f: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00779b95: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00779b98: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00779b9a: mov dword ptr [ebx + 0x28c], edx */ W32((u32)(r_ebx+0x28cu), r_edx);
    /* 00779ba0: mov dword ptr [ebx + 0x294], edx */ W32((u32)(r_ebx+0x294u), r_edx);
    /* 00779ba6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779ba9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779baa: ret 4 */ FN_RET(0x00779868); r_esp += 8; return;
}

void f_00779bb0(void) /* sub_779BB0 */
{
    FN_ENTER(0x00779bb0);
    /* 00779bb0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00779bb3: movzx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)R16((u32)(r_ecx+0x2bcu));
    /* 00779bba: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779bbf: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00779bc2: movzx eax, word ptr [ecx + 0x2be] */ r_eax = (u32)R16((u32)(r_ecx+0x2beu));
    /* 00779bc9: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00779bd0: mov word ptr [ecx + 0x336], ax */ W16((u32)(r_ecx+0x336u), (u16)r_eax);
    /* 00779bd7: ret  */ FN_RET(0x00779bb0); r_esp += 4; return;
}

void f_00779bd8(void) /* sub_779BD8 */
{
    FN_ENTER(0x00779bd8);
    /* 00779bd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779bd9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00779bdc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00779bde: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00779be3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x779be8u); f_0082d990();
    /* 00779be8: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779beb: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00779bee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779bf0: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779bf3: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x779bf8u); f_00830b74();
    /* 00779bf8: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00779bfb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779bfd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x779c02u); f_0082d8bc();
    /* 00779c02: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779c08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00779c0a: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x779c0fu); f_007aaab8();
    /* 00779c0f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x779c14u); f_0082da80();
    /* 00779c14: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00779c18: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00779c1f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00779c22: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779c24: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00779c2c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779c2e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779c30: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779c32: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00779c3a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779c3c: add ecx, dword ptr [0xaab540] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaab540u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779c42: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x779c47u); f_0082d990();
    /* 00779c47: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779c4b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00779c4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779c51: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x779c56u); f_00830aa0();
    /* 00779c56: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x779c5bu); f_0082da80();
    /* 00779c5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779c5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779c5f: ret 8 */ FN_RET(0x00779bd8); r_esp += 12; return;
}

void f_00779c64(void) /* sub_779C64 */
{
    FN_ENTER(0x00779c64);
    /* 00779c64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00779c65: mov esi, ecx */ r_esi = r_ecx;
    /* 00779c67: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00779c6d: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00779c6f: push 0x1fd */ { u32 v = 0x1fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00779c74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779c75: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x779c7au); f_0050b7a4();
    /* 00779c7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00779c7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779c7f: je 0x779c8d */ if (fZ) goto L_00779c8d;
L_00779c81:; BB(0x00779c81);
    /* 00779c81: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00779c85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779c86: mov ecx, eax */ r_ecx = r_eax;
    /* 00779c88: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x779c8du); f_00508f14();
L_00779c8d:; BB(0x00779c8d);
    /* 00779c8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779c8e: ret  */ FN_RET(0x00779c64); r_esp += 4; return;
}

void f_00779c90(void) /* sub_779C90 */
{
    FN_ENTER(0x00779c90);
    /* 00779c90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779c91: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00779c94: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00779c96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00779c98: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00779c9c: mov dword ptr [esp + 8], 0xffff8000 */ W32((u32)(r_esp+0x8u), 0xffff8000u);
    /* 00779ca4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00779ca7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00779caa: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00779cac: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00779cb2: push 0x1fd */ { u32 v = 0x1fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00779cb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779cb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779cb9: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x779cbeu); f_0050bd5c();
    /* 00779cbe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00779cc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779cc3: je 0x779cd1 */ if (fZ) goto L_00779cd1;
L_00779cc5:; BB(0x00779cc5);
    /* 00779cc5: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00779cc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779cca: mov ecx, eax */ r_ecx = r_eax;
    /* 00779ccc: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x779cd1u); f_00508f14();
L_00779cd1:; BB(0x00779cd1);
    /* 00779cd1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779cd5: ret  */ FN_RET(0x00779c90); r_esp += 4; return;
}

void f_00779cd8(void) /* sub_779CD8 */
{
    FN_ENTER(0x00779cd8);
    /* 00779cd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00779cd9: mov esi, ecx */ r_esi = r_ecx;
    /* 00779cdb: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00779ce1: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00779ce3: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 00779ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779ce9: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x779ceeu); f_0050b7a4();
    /* 00779cee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00779cf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779cf3: je 0x779d01 */ if (fZ) goto L_00779d01;
L_00779cf5:; BB(0x00779cf5);
    /* 00779cf5: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00779cf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779cfa: mov ecx, eax */ r_ecx = r_eax;
    /* 00779cfc: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x779d01u); f_00508f14();
L_00779d01:; BB(0x00779d01);
    /* 00779d01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779d02: ret  */ FN_RET(0x00779cd8); r_esp += 4; return;
}

void f_00779d04(void) /* sub_779D04 */
{
    FN_ENTER(0x00779d04);
    /* 00779d04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779d05: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00779d08: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00779d0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00779d0c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00779d10: mov dword ptr [esp + 8], 0xffff8000 */ W32((u32)(r_esp+0x8u), 0xffff8000u);
    /* 00779d18: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00779d1b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00779d1e: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00779d20: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00779d26: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 00779d2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779d2d: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x779d32u); f_0050bd5c();
    /* 00779d32: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00779d35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779d37: je 0x779d45 */ if (fZ) goto L_00779d45;
L_00779d39:; BB(0x00779d39);
    /* 00779d39: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00779d3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779d3e: mov ecx, eax */ r_ecx = r_eax;
    /* 00779d40: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x779d45u); f_00508f14();
L_00779d45:; BB(0x00779d45);
    /* 00779d45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779d48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779d49: ret  */ FN_RET(0x00779d04); r_esp += 4; return;
}

void f_00779d4c(void) /* sub_779D4C */
{
    FN_ENTER(0x00779d4c);
    /* 00779d4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00779d4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00779d4e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00779d51: mov esi, ecx */ r_esi = r_ecx;
    /* 00779d53: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00779d57: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x779d5cu); f_0082d7b0();
    /* 00779d5c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00779d60: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00779d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779d64: lea ecx, [esi + 0x250] */ r_ecx = (u32)(r_esi+0x250u);
    /* 00779d6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779d6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00779d6c: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x779d71u); f_007a8d98();
    /* 00779d71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00779d74: fld dword ptr [0x9780b0] */ FPUSH(R_F32((u32)(0x9780b0u)));
    /* 00779d7a: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 00779d7d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00779d80: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00779d83: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00779d86: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00779d8a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00779d8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779d8f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00779d93: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x779d98u); f_00830b74();
    /* 00779d98: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00779d9b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779d9d: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x779da2u); f_00830c04();
    /* 00779da2: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00779da6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779da8: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x779dadu); f_0082e9e4();
    /* 00779dad: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00779db0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779db2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x779db7u); f_0082d8bc();
    /* 00779db7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779db9: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 00779dbe: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x779dc3u); f_0082e9e4();
    /* 00779dc3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779dc5: je 0x779dd9 */ if (fZ) goto L_00779dd9;
L_00779dc7:; BB(0x00779dc7);
    /* 00779dc7: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00779dcc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779dcf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00779dd1: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00779dd4: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x779dd9u); f_0082fa0c();
L_00779dd9:; BB(0x00779dd9);
    /* 00779dd9: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779ddd: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x779de2u); f_0052d46c();
    /* 00779de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779de3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x779de8u); f_0082da80();
    /* 00779de8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00779deb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00779dec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779ded: ret 8 */ FN_RET(0x00779d4c); r_esp += 12; return;
}

void f_00779df4(void) /* sub_779DF4 */
{
    FN_ENTER(0x00779df4);
    /* 00779df4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00779df5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00779df6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779df7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00779df8: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00779dfc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779dfe: je 0x779eaf */ if (fZ) goto L_00779eaf;
L_00779e04:; BB(0x00779e04);
    /* 00779e04: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 00779e08: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00779e0d: jge 0x779eaf */ if ((fS==fO)) goto L_00779eaf;
L_00779e13:; BB(0x00779e13);
    /* 00779e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779e14: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x779e19u); f_0068d5a8();
    /* 00779e19: mov esi, eax */ r_esi = r_eax;
    /* 00779e1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00779e1e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779e20: je 0x779eaf */ if (fZ) goto L_00779eaf;
L_00779e26:; BB(0x00779e26);
    /* 00779e26: movzx ebx, byte ptr [edi + 7] */ r_ebx = (u32)R8((u32)(r_edi+0x7u));
    /* 00779e2a: movzx edx, byte ptr [edi + 6] */ r_edx = (u32)R8((u32)(r_edi+0x6u));
    /* 00779e2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779e30: je 0x779ef7 */ if (fZ) goto L_00779ef7;
L_00779e36:; BB(0x00779e36);
    /* 00779e36: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779e39: je 0x779eb4 */ if (fZ) goto L_00779eb4;
L_00779e3b:; BB(0x00779e3b);
    /* 00779e3b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779e3e: je 0x779e94 */ if (fZ) goto L_00779e94;
L_00779e40:; BB(0x00779e40);
    /* 00779e40: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779e43: jne 0x779e6a */ if (!fZ) goto L_00779e6a;
L_00779e45:; BB(0x00779e45);
    /* 00779e45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779e46: mov ecx, esi */ r_ecx = r_esi;
    /* 00779e48: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x779e4du); f_007773d4();
    /* 00779e4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779e4e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779e50: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00779e56: mov ecx, esi */ r_ecx = r_esi;
    /* 00779e58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779e59: call 0x779f3c */ r_esp -= 4; W32(r_esp, 0x779e5eu); f_00779f3c();
    /* 00779e5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00779e60: call 0x779fc4 */ r_esp -= 4; W32(r_esp, 0x779e65u); f_00779fc4();
    /* 00779e65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779e66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779e67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779e68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779e69: ret  */ FN_RET(0x00779df4); r_esp += 4; return;
L_00779e6a:; BB(0x00779e6a);
    /* 00779e6a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00779e6d: jne 0x779eaf */ if (!fZ) goto L_00779eaf;
L_00779e6f:; BB(0x00779e6f);
    /* 00779e6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779e70: mov ecx, esi */ r_ecx = r_esi;
    /* 00779e72: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x779e77u); f_00777368();
    /* 00779e77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779e78: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779e7a: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00779e80: mov ecx, esi */ r_ecx = r_esi;
    /* 00779e82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779e83: call 0x779f80 */ r_esp -= 4; W32(r_esp, 0x779e88u); f_00779f80();
    /* 00779e88: mov ecx, esi */ r_ecx = r_esi;
    /* 00779e8a: call 0x779fc4 */ r_esp -= 4; W32(r_esp, 0x779e8fu); f_00779fc4();
    /* 00779e8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779e90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779e92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779e93: ret  */ FN_RET(0x00779df4); r_esp += 4; return;
L_00779e94:; BB(0x00779e94);
    /* 00779e94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779e95: mov ecx, esi */ r_ecx = r_esi;
    /* 00779e97: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x779e9cu); f_007772bc();
    /* 00779e9c: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00779ea2: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00779ea4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779ea5: mov ecx, esi */ r_ecx = r_esi;
    /* 00779ea7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779ea9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779eaa: call 0x779fec */ r_esp -= 4; W32(r_esp, 0x779eafu); f_00779fec();
L_00779eaf:; BB(0x00779eaf);
    /* 00779eaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779eb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779eb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779eb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779eb3: ret  */ FN_RET(0x00779df4); r_esp += 4; return;
L_00779eb4:; BB(0x00779eb4);
    /* 00779eb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779eb5: mov ecx, esi */ r_ecx = r_esi;
    /* 00779eb7: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x779ebcu); f_007773a0();
    /* 00779ebc: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00779ec0: call 0x77a045 */ r_esp -= 4; W32(r_esp, 0x779ec5u); f_0077a045();
    /* 00779ec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779ec7: je 0x779edf */ if (fZ) goto L_00779edf;
L_00779ec9:; BB(0x00779ec9);
    /* 00779ec9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779eca: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779ecc: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00779ed2: mov ecx, esi */ r_ecx = r_esi;
    /* 00779ed4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779ed5: call 0x779f80 */ r_esp -= 4; W32(r_esp, 0x779edau); f_00779f80();
    /* 00779eda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779edb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779edc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779edd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779ede: ret  */ FN_RET(0x00779df4); r_esp += 4; return;
L_00779edf:; BB(0x00779edf);
    /* 00779edf: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00779ee5: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00779ee7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779ee8: mov ecx, esi */ r_ecx = r_esi;
    /* 00779eea: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779eec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779eed: call 0x779f80 */ r_esp -= 4; W32(r_esp, 0x779ef2u); f_00779f80();
    /* 00779ef2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779ef3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779ef4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779ef5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779ef6: ret  */ FN_RET(0x00779df4); r_esp += 4; return;
L_00779ef7:; BB(0x00779ef7);
    /* 00779ef7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779ef8: mov ecx, esi */ r_ecx = r_esi;
    /* 00779efa: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x779effu); f_00777414();
    /* 00779eff: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00779f03: call 0x77a045 */ r_esp -= 4; W32(r_esp, 0x779f08u); f_0077a045();
    /* 00779f08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00779f0a: je 0x779f22 */ if (fZ) goto L_00779f22;
L_00779f0c:; BB(0x00779f0c);
    /* 00779f0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779f0d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779f0f: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00779f15: mov ecx, esi */ r_ecx = r_esi;
    /* 00779f17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779f18: call 0x779f3c */ r_esp -= 4; W32(r_esp, 0x779f1du); f_00779f3c();
    /* 00779f1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779f1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779f1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779f20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779f21: ret  */ FN_RET(0x00779df4); r_esp += 4; return;
L_00779f22:; BB(0x00779f22);
    /* 00779f22: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00779f28: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00779f2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00779f2b: mov ecx, esi */ r_ecx = r_esi;
    /* 00779f2d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779f2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779f30: call 0x779f3c */ r_esp -= 4; W32(r_esp, 0x779f35u); f_00779f3c();
    /* 00779f35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00779f36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00779f37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00779f38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00779f39: ret  */ FN_RET(0x00779df4); r_esp += 4; return;
}

void f_00779f3c(void) /* sub_779F3C */
{
    FN_ENTER(0x00779f3c);
    /* 00779f3c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00779f3f: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779f44: jne 0x779f7d */ if (!fZ) goto L_00779f7d;
L_00779f46:; BB(0x00779f46);
    /* 00779f46: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00779f4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00779f50: je 0x779f7d */ if (fZ) goto L_00779f7d;
L_00779f52:; BB(0x00779f52);
    /* 00779f52: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00779f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779f58: je 0x779f7d */ if (fZ) goto L_00779f7d;
L_00779f5a:; BB(0x00779f5a);
    /* 00779f5a: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 00779f5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779f60: push 0x8fe828 */ { u32 v = 0x8fe828u; r_esp -= 4; W32(r_esp, v); }
    /* 00779f65: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779f69: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00779f6b: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00779f70: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00779f74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779f75: call 0x78a944 */ r_esp -= 4; W32(r_esp, 0x779f7au); f_0078a944();
    /* 00779f7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00779f7d:; BB(0x00779f7d);
    /* 00779f7d: ret 0xc */ FN_RET(0x00779f3c); r_esp += 16; return;
}

void f_00779f80(void) /* sub_779F80 */
{
    FN_ENTER(0x00779f80);
    /* 00779f80: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00779f83: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779f88: jne 0x779fc1 */ if (!fZ) goto L_00779fc1;
L_00779f8a:; BB(0x00779f8a);
    /* 00779f8a: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00779f91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00779f94: je 0x779fc1 */ if (fZ) goto L_00779fc1;
L_00779f96:; BB(0x00779f96);
    /* 00779f96: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00779f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779f9c: je 0x779fc1 */ if (fZ) goto L_00779fc1;
L_00779f9e:; BB(0x00779f9e);
    /* 00779f9e: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 00779fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00779fa4: push 0x97318c */ { u32 v = 0x97318cu; r_esp -= 4; W32(r_esp, v); }
    /* 00779fa9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00779fad: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00779faf: push 0xff00b2ff */ { u32 v = 0xff00b2ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00779fb4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00779fb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00779fb9: call 0x78a944 */ r_esp -= 4; W32(r_esp, 0x779fbeu); f_0078a944();
    /* 00779fbe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00779fc1:; BB(0x00779fc1);
    /* 00779fc1: ret 0xc */ FN_RET(0x00779f80); r_esp += 16; return;
}

void f_00779fc4(void) /* sub_779FC4 */
{
    FN_ENTER(0x00779fc4);
    /* 00779fc4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00779fc7: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779fcc: jne 0x779fe8 */ if (!fZ) goto L_00779fe8;
L_00779fce:; BB(0x00779fce);
    /* 00779fce: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00779fd0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00779fd2: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00779fd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00779fda: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 00779fdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00779fe0: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x779fe5u); f_0050ac1c();
    /* 00779fe5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00779fe8:; BB(0x00779fe8);
    /* 00779fe8: ret  */ FN_RET(0x00779fc4); r_esp += 4; return;
}

void f_00779fec(void) /* sub_779FEC */
{
    FN_ENTER(0x00779fec);
    /* 00779fec: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00779fef: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779ff4: jne 0x77a03b */ if (!fZ) goto L_0077a03b;
L_00779ff6:; BB(0x00779ff6);
    /* 00779ff6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00779ffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00779ffc: je 0x77a03b */ if (fZ) goto L_0077a03b;
L_00779ffe:; BB(0x00779ffe);
    /* 00779ffe: movsx edx, word ptr [ecx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0077a005: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0077a00a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077a00d: jne 0x77a014 */ if (!fZ) goto L_0077a014;
L_0077a00f:; BB(0x0077a00f);
    /* 0077a00f: mov eax, 0x28 */ r_eax = 0x28u;
L_0077a014:; BB(0x0077a014);
    /* 0077a014: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0077a018: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a019: movsx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0077a01e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077a01f: push 0x978390 */ { u32 v = 0x978390u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a024: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077a028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a029: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0077a02e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0077a032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077a033: call 0x78aabc */ r_esp -= 4; W32(r_esp, 0x77a038u); f_0078aabc();
    /* 0077a038: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077a03b:; BB(0x0077a03b);
    /* 0077a03b: ret 0xc */ FN_RET(0x00779fec); r_esp += 16; return;
}

