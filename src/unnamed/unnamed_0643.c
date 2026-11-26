#include "protos.h"

void f_00643225(void)
{
    FN_ENTER(0x00643225);
    goto L_00643225;
L_006431cb:; BB(0x006431cb);
    /* 006431cb: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 006431cc: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006431ce: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006431d0: and bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006431d2: add eax, 0x935234 */ {  u32 a = r_eax; u32 b = 0x935234u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006431d7: fld dword ptr [esi + 0x9c] */ FPUSH(R_F32((u32)(r_esi+0x9cu)));
    /* 006431dd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006431df: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 006431e5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006431e7: fstp dword ptr [esi + 0x9c] */ W_F32((u32)(r_esi+0x9cu), ST(0)); FPOP();
    /* 006431ed: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
    /* 006431f3: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006431f6: lea edx, [esi + 0x9c] */ r_edx = (u32)(r_esi+0x9cu);
    /* 006431fc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x643201u); f_0082ebac();
    /* 00643201: fld dword ptr [0x935230] */ FPUSH(R_F32((u32)(0x935230u)));
    /* 00643207: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 0064320b: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0064320e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00643210: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643212: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643213: jbe 0x64321c */ if ((fC||fZ)) goto L_0064321c;
L_00643215:; BB(0x00643215);
    /* 00643215: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00643217: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0064321a: jmp 0x643238 */ goto L_00643238;
L_0064321c:; BB(0x0064321c);
    /* 0064321c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0064321e: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00643222: fadd dword ptr [0x93522c] */ ST(0) = ST(0) + R_F32((u32)(0x93522cu));
L_00643225:; BB(0x00643225);
    /* 00643225: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643226: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00643227: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00643228: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00643229: rcr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_edi = a; }
    /* 0064322a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064322b: loopne 0x6431cb */ r_ecx--; if (r_ecx && !fZ) goto L_006431cb;
    /* 0064322c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064322d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064322f: ja 0x643233 */ if ((!fC&&!fZ)) goto L_00643233;
L_00643231:; BB(0x00643231);
    /* 00643231: fst st(1) */ ST(1) = ST(0);
L_00643233:; BB(0x00643233);
    /* 00643233: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00643235: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
L_00643238:; BB(0x00643238);
    /* 00643238: movsx eax, word ptr [esi + 0xb4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb4u));
    /* 0064323f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643241: je 0x643252 */ if (fZ) goto L_00643252;
L_00643243:; BB(0x00643243);
    /* 00643243: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643246: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 0064324d: jmp 0x6434b7 */ goto L_006434b7;
L_00643252:; BB(0x00643252);
    /* 00643252: movzx eax, byte ptr [esi + 0xb8] */ r_eax = (u32)R8((u32)(r_esi+0xb8u));
    /* 00643259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064325b: je 0x643464 */ if (fZ) goto L_00643464;
L_00643261:; BB(0x00643261);
    /* 00643261: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643264: jne 0x643361 */ if (!fZ) goto L_00643361;
L_0064326a:; BB(0x0064326a);
    /* 0064326a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64326fu); f_008587a5();
    /* 0064326f: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643273: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643277: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064327d: fcomp dword ptr [0x93521c] */ fx_compare(ST(0), R_F32((u32)(0x93521cu))); FPOP();
    /* 00643283: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643285: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643286: jae 0x64330f */ if (!fC) goto L_0064330f;
L_0064328c:; BB(0x0064328c);
    /* 0064328c: mov byte ptr [esi + 0xb8], 2 */ W8((u32)(r_esi+0xb8u), 0x2u);
    /* 00643293: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643298u); f_008587a5();
    /* 00643298: fld dword ptr [0x935220] */ FPUSH(R_F32((u32)(0x935220u)));
    /* 0064329e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006432a2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006432a6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006432ac: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006432ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006432b0: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006432b4: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006432b9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006432be: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006432c2: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006432c6: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 006432ca: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006432ce: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006432d2: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 006432d9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6432deu); f_008587a5();
    /* 006432de: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006432e2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006432e6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006432ec: fcomp dword ptr [0x93521c] */ fx_compare(ST(0), R_F32((u32)(0x93521cu))); FPOP();
    /* 006432f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006432f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006432f5: jae 0x643303 */ if (!fC) goto L_00643303;
L_006432f7:; BB(0x006432f7);
    /* 006432f7: mov byte ptr [esi + 0xba], 0 */ W8((u32)(r_esi+0xbau), 0x0u);
    /* 006432fe: jmp 0x6434b7 */ goto L_006434b7;
L_00643303:; BB(0x00643303);
    /* 00643303: mov byte ptr [esi + 0xba], 1 */ W8((u32)(r_esi+0xbau), 0x1u);
    /* 0064330a: jmp 0x6434b7 */ goto L_006434b7;
L_0064330f:; BB(0x0064330f);
    /* 0064330f: mov byte ptr [esi + 0xb8], 0 */ W8((u32)(r_esi+0xb8u), 0x0u);
    /* 00643316: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64331bu); f_008587a5();
    /* 0064331b: fld dword ptr [0x935224] */ FPUSH(R_F32((u32)(0x935224u)));
    /* 00643321: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643325: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643329: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064332f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643331: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643333: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00643337: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0064333c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643341: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00643345: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00643349: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064334d: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00643351: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00643355: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 0064335c: jmp 0x6434b7 */ goto L_006434b7;
L_00643361:; BB(0x00643361);
    /* 00643361: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643364: jne 0x6434b7 */ if (!fZ) goto L_006434b7;
L_0064336a:; BB(0x0064336a);
    /* 0064336a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64336fu); f_008587a5();
    /* 0064336f: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643373: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643377: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064337d: fcomp dword ptr [0x935228] */ fx_compare(ST(0), R_F32((u32)(0x935228u))); FPOP();
    /* 00643383: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643385: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643386: jae 0x64340f */ if (!fC) goto L_0064340f;
L_0064338c:; BB(0x0064338c);
    /* 0064338c: mov byte ptr [esi + 0xb8], 2 */ W8((u32)(r_esi+0xb8u), 0x2u);
    /* 00643393: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643398u); f_008587a5();
    /* 00643398: fld dword ptr [0x935220] */ FPUSH(R_F32((u32)(0x935220u)));
    /* 0064339e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006433a2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006433a6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006433ac: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006433ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006433b0: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006433b4: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006433b9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006433be: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006433c2: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006433c6: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 006433ca: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006433ce: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006433d2: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 006433d9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6433deu); f_008587a5();
    /* 006433de: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006433e2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006433e6: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006433ec: fcomp dword ptr [0x93521c] */ fx_compare(ST(0), R_F32((u32)(0x93521cu))); FPOP();
    /* 006433f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006433f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006433f5: jae 0x643403 */ if (!fC) goto L_00643403;
L_006433f7:; BB(0x006433f7);
    /* 006433f7: mov byte ptr [esi + 0xba], 0 */ W8((u32)(r_esi+0xbau), 0x0u);
    /* 006433fe: jmp 0x6434b7 */ goto L_006434b7;
L_00643403:; BB(0x00643403);
    /* 00643403: mov byte ptr [esi + 0xba], 1 */ W8((u32)(r_esi+0xbau), 0x1u);
    /* 0064340a: jmp 0x6434b7 */ goto L_006434b7;
L_0064340f:; BB(0x0064340f);
    /* 0064340f: mov byte ptr [esi + 0xb8], 1 */ W8((u32)(r_esi+0xb8u), 0x1u);
    /* 00643416: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x64341bu); f_008587a5();
    /* 0064341b: fld dword ptr [0x935224] */ FPUSH(R_F32((u32)(0x935224u)));
    /* 00643421: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00643425: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643429: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064342f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643431: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 00643437: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643439: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0064343d: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00643442: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643447: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0064344b: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0064344f: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 00643453: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00643457: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0064345b: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 00643462: jmp 0x6434b7 */ goto L_006434b7;
L_00643464:; BB(0x00643464);
    /* 00643464: mov byte ptr [esi + 0xb8], 1 */ W8((u32)(r_esi+0xb8u), 0x1u);
    /* 0064346b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643470u); f_008587a5();
    /* 00643470: fld dword ptr [0x935218] */ FPUSH(R_F32((u32)(0x935218u)));
    /* 00643476: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0064347a: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0064347e: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 00643484: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643486: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 0064348c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0064348e: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00643492: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00643497: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064349c: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006434a0: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006434a4: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 006434a8: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006434ac: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006434b0: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
L_006434b7:; BB(0x006434b7);
    /* 006434b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6434bcu); f_008587a5();
    /* 006434bc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006434c0: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006434c4: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006434ca: fmul dword ptr [0x935210] */ ST(0) = ST(0) * R_F32((u32)(0x935210u));
    /* 006434d0: fadd dword ptr [0x935214] */ ST(0) = ST(0) + R_F32((u32)(0x935214u));
    /* 006434d6: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006434da: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006434df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006434e4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006434e8: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006434ec: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 006434f0: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006434f4: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006434f8: add word ptr [esi + 0xb6], ax */ { u32 ad = (u32)(r_esi+0xb6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006434ff: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643503: ret  */ FN_RET(0x00643225); r_esp += 4; return;
}

void f_00643230(void)
{
    FN_ENTER(0x00643230);
    /* 00643230: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00643232: rcr ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ebp = a; }
    /* 00643234: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00643236: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643237: cmp al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffu;   }
    /* 00643239: mov edi, 0xb486 */ r_edi = 0xb486u;
    /* 0064323e: add byte ptr [ebp - 0x7cf08b40], al */ { u32 ad = (u32)(r_ebp+0x830f74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00643244: sar bh, 0x66 */ { u32 c = (6u) & 31; u32 a = (u8)(r_ebx>>8); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 00643247: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 0064324d: jmp 0x6434b7 */ goto L_006434b7;
L_006434b7:; BB(0x006434b7);
    /* 006434b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6434bcu); f_008587a5();
    /* 006434bc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006434c0: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006434c4: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006434ca: fmul dword ptr [0x935210] */ ST(0) = ST(0) * R_F32((u32)(0x935210u));
    /* 006434d0: fadd dword ptr [0x935214] */ ST(0) = ST(0) + R_F32((u32)(0x935214u));
    /* 006434d6: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006434da: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006434df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006434e4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006434e8: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006434ec: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 006434f0: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006434f4: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006434f8: add word ptr [esi + 0xb6], ax */ { u32 ad = (u32)(r_esi+0xb6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006434ff: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643503: ret  */ FN_RET(0x00643230); r_esp += 4; return;
}

void f_00643325(void)
{
    FN_ENTER(0x00643325);
    /* 00643325: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643329: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064332f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643331: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643333: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00643337: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0064333c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643341: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00643345: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00643349: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064334d: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00643351: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00643355: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 0064335c: jmp 0x6434b7 */ goto L_006434b7;
L_006434b7:; BB(0x006434b7);
    /* 006434b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6434bcu); f_008587a5();
    /* 006434bc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006434c0: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006434c4: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006434ca: fmul dword ptr [0x935210] */ ST(0) = ST(0) * R_F32((u32)(0x935210u));
    /* 006434d0: fadd dword ptr [0x935214] */ ST(0) = ST(0) + R_F32((u32)(0x935214u));
    /* 006434d6: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006434da: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006434df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006434e4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006434e8: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006434ec: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 006434f0: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006434f4: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006434f8: add word ptr [esi + 0xb6], ax */ { u32 ad = (u32)(r_esi+0xb6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006434ff: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643503: ret  */ FN_RET(0x00643325); r_esp += 4; return;
}

void f_00643425(void)
{
    FN_ENTER(0x00643425);
    /* 00643425: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00643429: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 0064342f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00643431: fmul dword ptr [0x93527c] */ ST(0) = ST(0) * R_F32((u32)(0x93527cu));
    /* 00643437: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00643439: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0064343d: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00643442: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643447: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0064344b: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0064344f: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 00643453: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00643457: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0064345b: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 00643462: jmp 0x6434b7 */ goto L_006434b7;
L_006434b7:; BB(0x006434b7);
    /* 006434b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6434bcu); f_008587a5();
    /* 006434bc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006434c0: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 006434c4: fdiv dword ptr [0x935258] */ ST(0) = ST(0) / R_F32((u32)(0x935258u));
    /* 006434ca: fmul dword ptr [0x935210] */ ST(0) = ST(0) * R_F32((u32)(0x935210u));
    /* 006434d0: fadd dword ptr [0x935214] */ ST(0) = ST(0) + R_F32((u32)(0x935214u));
    /* 006434d6: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006434da: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006434df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006434e4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006434e8: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006434ec: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 006434f0: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006434f4: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006434f8: add word ptr [esi + 0xb6], ax */ { u32 ad = (u32)(r_esi+0xb6u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006434ff: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643503: ret  */ FN_RET(0x00643425); r_esp += 4; return;
}

void f_00643504(void) /* sub_643504 */
{
    FN_ENTER(0x00643504);
    /* 00643504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643505: mov esi, ecx */ r_esi = r_ecx;
    /* 00643507: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00643509: mov ecx, esi */ r_ecx = r_esi;
    /* 0064350b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00643510: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00643515: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x643518u); call_ind(t); }
    /* 00643518: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064351a: jne 0x64351e */ if (!fZ) goto L_0064351e;
L_0064351c:; BB(0x0064351c);
    /* 0064351c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064351d: ret  */ FN_RET(0x00643504); r_esp += 4; return;
L_0064351e:; BB(0x0064351e);
    /* 0064351e: mov ecx, dword ptr [0xa8f338] */ r_ecx = R32((u32)(0xa8f338u));
    /* 00643524: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643526: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64352bu); f_005b8624();
    /* 0064352b: mov ecx, eax */ r_ecx = r_eax;
    /* 0064352d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x643532u); f_00829cc8();
    /* 00643532: mov ecx, esi */ r_ecx = r_esi;
    /* 00643534: call 0x64353c */ r_esp -= 4; W32(r_esp, 0x643539u); f_0064353c();
    /* 00643539: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064353a: ret  */ FN_RET(0x00643504); r_esp += 4; return;
}

void f_0064353c(void) /* sub_64353C */
{
    FN_ENTER(0x0064353c);
    /* 0064353c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064353d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064353e: mov edi, ecx */ r_edi = r_ecx;
    /* 00643540: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x643545u); f_0082d7b0();
    /* 00643545: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00643548: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64354du); f_0082d838();
    /* 0064354d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00643550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643552: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x643557u); f_0082d8bc();
    /* 00643557: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643559: mov edx, 0xffffe000 */ r_edx = 0xffffe000u;
    /* 0064355e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x643563u); f_0082e9e4();
    /* 00643563: mov ecx, dword ptr [0xa8f338] */ r_ecx = R32((u32)(0xa8f338u));
    /* 00643569: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064356b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x643570u); f_005b8610();
    /* 00643570: mov ebx, eax */ r_ebx = r_eax;
    /* 00643572: mov ecx, dword ptr [0xa8f338] */ r_ecx = R32((u32)(0xa8f338u));
    /* 00643578: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064357a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x64357fu); f_005b8638();
    /* 0064357f: push dword ptr [edi + 0xa8] */ { u32 v = R32((u32)(r_edi+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00643585: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00643587: mov edx, eax */ r_edx = r_eax;
    /* 00643589: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64358eu); f_0083bd00();
    /* 0064358e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x643593u); f_0082da80();
    /* 00643593: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00643594: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00643595: ret  */ FN_RET(0x0064353c); r_esp += 4; return;
}

void f_00643598(void)
{
    FN_ENTER(0x00643598);
    /* 00643598: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643599: mov ebp, esp */ r_ebp = r_esp;
    /* 0064359b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064359d: push 0x8e5868 */ { u32 v = 0x8e5868u; r_esp -= 4; W32(r_esp, v); }
    /* 006435a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006435a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006435a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006435b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006435b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006435b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006435b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006435bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006435bf: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006435c4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006435cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6435d0u); f_005caba4();
    /* 006435d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006435d1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006435d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006435d6: je 0x64360f */ if (fZ) goto L_0064360f;
L_006435d8:; BB(0x006435d8);
    /* 006435d8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006435df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006435e6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006435e9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006435ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006435f2: call 0x643614 */ r_esp -= 4; W32(r_esp, 0x6435f7u); f_00643614();
    /* 006435f7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006435fa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00643601:; BB(0x00643601);
    /* 00643601: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643604: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064360b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064360d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064360e: ret  */ FN_RET(0x00643598); r_esp += 4; return;
L_0064360f:; BB(0x0064360f);
    /* 0064360f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00643611: jmp 0x643601 */ goto L_00643601;
}

void f_00643614(void) /* sub_643614 */
{
    FN_ENTER(0x00643614);
    /* 00643614: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643615: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643616: mov esi, ecx */ r_esi = r_ecx;
    /* 00643618: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0064361c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00643620: mov ecx, esi */ r_ecx = r_esi;
    /* 00643622: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x643627u); f_007ba278();
    /* 00643627: mov dword ptr [esi], 0xb2f1b8 */ W32((u32)(r_esi), 0xb2f1b8u);
    /* 0064362d: mov eax, dword ptr [0x9c6ff8] */ r_eax = R32((u32)(0x9c6ff8u));
    /* 00643632: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00643635: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00643638: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0064363b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064363e: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00643641: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00643644: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00643647: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0064364a: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 0064364d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00643650: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00643653: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00643656: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 00643659: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0064365c: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 0064365f: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00643662: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 00643665: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 00643668: mov dword ptr [esi + 0x70], ebp */ W32((u32)(r_esi+0x70u), r_ebp);
    /* 0064366b: mov ecx, esi */ r_ecx = r_esi;
    /* 0064366d: call 0x643720 */ r_esp -= 4; W32(r_esp, 0x643672u); f_00643720();
    /* 00643672: mov eax, esi */ r_eax = r_esi;
    /* 00643674: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643675: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643676: ret 8 */ FN_RET(0x00643614); r_esp += 12; return;
}

void f_0064367c(void) /* sub_64367C */
{
    FN_ENTER(0x0064367c);
    /* 0064367c: mov ecx, dword ptr [0xa8f338] */ r_ecx = R32((u32)(0xa8f338u));
    /* 00643682: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00643684: je 0x643699 */ if (fZ) goto L_00643699;
L_00643686:; BB(0x00643686);
    /* 00643686: je 0x64368f */ if (fZ) goto L_0064368f;
L_00643688:; BB(0x00643688);
    /* 00643688: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064368a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x64368fu); f_004066a8();
L_0064368f:; BB(0x0064368f);
    /* 0064368f: mov dword ptr [0xa8f338], 0 */ W32((u32)(0xa8f338u), 0x0u);
L_00643699:; BB(0x00643699);
    /* 00643699: ret  */ FN_RET(0x0064367c); r_esp += 4; return;
}

void f_0064369c(void) /* sub_64369C */
{
    FN_ENTER(0x0064369c);
    /* 0064369c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064369d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064369f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006436a1: push 0x8e5890 */ { u32 v = 0x8e5890u; r_esp -= 4; W32(r_esp, v); }
    /* 006436a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006436ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006436ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006436b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006436b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006436ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006436bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006436c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006436c3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006436c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006436cf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6436d4u); f_008581c5();
    /* 006436d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006436d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006436d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006436da: je 0x64371b */ if (fZ) goto L_0064371b;
L_006436dc:; BB(0x006436dc);
    /* 006436dc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006436e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006436ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006436ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006436ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006436f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006436f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006436f2: push 0x9c6fe8 */ { u32 v = 0x9c6fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 006436f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006436f9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6436feu); f_005b7a84();
    /* 006436fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00643701: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00643708:; BB(0x00643708);
    /* 00643708: mov dword ptr [0xa8f338], eax */ W32((u32)(0xa8f338u), r_eax);
    /* 0064370d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643710: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00643717: mov esp, ebp */ r_esp = r_ebp;
    /* 00643719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064371a: ret  */ FN_RET(0x0064369c); r_esp += 4; return;
L_0064371b:; BB(0x0064371b);
    /* 0064371b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064371d: jmp 0x643708 */ goto L_00643708;
}

void f_00643720(void) /* sub_643720 */
{
    FN_ENTER(0x00643720);
    /* 00643720: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00643721: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643724: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00643726: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00643729: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0064372c: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 00643736: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 0064373c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0064373f: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 00643745: mov dword ptr [ebx + 0xa0], 0 */ W32((u32)(r_ebx+0xa0u), 0x0u);
    /* 0064374f: mov dword ptr [ebx + 0x98], eax */ W32((u32)(r_ebx+0x98u), r_eax);
    /* 00643755: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 0064375f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x643764u); f_008587a5();
    /* 00643764: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 0064376e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00643771: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00643774: fdiv dword ptr [0x935200] */ ST(0) = ST(0) / R_F32((u32)(0x935200u));
    /* 0064377a: fmul dword ptr [0x9351fc] */ ST(0) = ST(0) * R_F32((u32)(0x9351fcu));
    /* 00643780: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00643782: fstp dword ptr [ebx + 0xa8] */ W_F32((u32)(r_ebx+0xa8u), ST(0)); FPOP();
    /* 00643788: mov byte ptr [ebx + 0xb8], dl */ W8((u32)(r_ebx+0xb8u), (u8)r_edx);
    /* 0064378e: mov byte ptr [ebx + 0xb9], dl */ W8((u32)(r_ebx+0xb9u), (u8)r_edx);
    /* 00643794: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00643799: mov word ptr [ebx + 0xb4], ax */ W16((u32)(r_ebx+0xb4u), (u16)r_eax);
    /* 006437a0: mov word ptr [ebx + 0xb6], dx */ W16((u32)(r_ebx+0xb6u), (u16)r_edx);
    /* 006437a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006437aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006437ab: ret  */ FN_RET(0x00643720); r_esp += 4; return;
}

void f_006437ac(void) /* sub_6437AC */
{
    FN_ENTER(0x006437ac);
    /* 006437ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006437ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006437af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006437b1: push 0x8e58ac */ { u32 v = 0x8e58acu; r_esp -= 4; W32(r_esp, v); }
    /* 006437b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006437bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006437bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006437c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006437c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006437ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006437cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006437d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006437d3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006437d6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006437d9: mov eax, ecx */ r_eax = r_ecx;
    /* 006437db: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 006437e1: mov dword ptr [eax], 0xb2f270 */ W32((u32)(r_eax), 0xb2f270u);
    /* 006437e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006437e9: je 0x643804 */ if (fZ) goto L_00643804;
L_006437eb:; BB(0x006437eb);
    /* 006437eb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006437ef: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006437f4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006437f8: mov edx, ecx */ r_edx = r_ecx;
    /* 006437fa: mov dword ptr [edx + 0xcc], 0 */ W32((u32)(r_edx+0xccu), 0x0u);
L_00643804:; BB(0x00643804);
    /* 00643804: mov eax, ecx */ r_eax = r_ecx;
    /* 00643806: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0064380c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064380e: je 0x643829 */ if (fZ) goto L_00643829;
L_00643810:; BB(0x00643810);
    /* 00643810: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643814: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643819: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0064381d: mov edx, ecx */ r_edx = r_ecx;
    /* 0064381f: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
L_00643829:; BB(0x00643829);
    /* 00643829: mov eax, ecx */ r_eax = r_ecx;
    /* 0064382b: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 00643831: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643833: je 0x64384e */ if (fZ) goto L_0064384e;
L_00643835:; BB(0x00643835);
    /* 00643835: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643839: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064383e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00643842: mov edx, ecx */ r_edx = r_ecx;
    /* 00643844: mov dword ptr [edx + 0xd4], 0 */ W32((u32)(r_edx+0xd4u), 0x0u);
L_0064384e:; BB(0x0064384e);
    /* 0064384e: mov eax, ecx */ r_eax = r_ecx;
    /* 00643850: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 00643856: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643858: je 0x643873 */ if (fZ) goto L_00643873;
L_0064385a:; BB(0x0064385a);
    /* 0064385a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0064385e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643863: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00643867: mov edx, ecx */ r_edx = r_ecx;
    /* 00643869: mov dword ptr [edx + 0xd8], 0 */ W32((u32)(r_edx+0xd8u), 0x0u);
L_00643873:; BB(0x00643873);
    /* 00643873: mov eax, ecx */ r_eax = r_ecx;
    /* 00643875: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 0064387b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064387d: je 0x643898 */ if (fZ) goto L_00643898;
L_0064387f:; BB(0x0064387f);
    /* 0064387f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643883: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00643888: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0064388c: mov edx, ecx */ r_edx = r_ecx;
    /* 0064388e: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
L_00643898:; BB(0x00643898);
    /* 00643898: mov eax, ecx */ r_eax = r_ecx;
    /* 0064389a: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 006438a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006438a2: je 0x6438bd */ if (fZ) goto L_006438bd;
L_006438a4:; BB(0x006438a4);
    /* 006438a4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006438a8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006438ad: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006438b1: mov edx, ecx */ r_edx = r_ecx;
    /* 006438b3: mov dword ptr [edx + 0xe0], 0 */ W32((u32)(r_edx+0xe0u), 0x0u);
L_006438bd:; BB(0x006438bd);
    /* 006438bd: mov eax, ecx */ r_eax = r_ecx;
    /* 006438bf: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 006438c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006438c7: je 0x6438e2 */ if (fZ) goto L_006438e2;
L_006438c9:; BB(0x006438c9);
    /* 006438c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006438cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006438d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006438d6: mov edx, ecx */ r_edx = r_ecx;
    /* 006438d8: mov dword ptr [edx + 0xe4], 0 */ W32((u32)(r_edx+0xe4u), 0x0u);
L_006438e2:; BB(0x006438e2);
    /* 006438e2: mov eax, ecx */ r_eax = r_ecx;
    /* 006438e4: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006438ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006438ec: je 0x643907 */ if (fZ) goto L_00643907;
L_006438ee:; BB(0x006438ee);
    /* 006438ee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006438f2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006438f7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006438fb: mov edx, ecx */ r_edx = r_ecx;
    /* 006438fd: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
L_00643907:; BB(0x00643907);
    /* 00643907: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064390e: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x643913u); f_006131f4();
    /* 00643913: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00643916: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00643918: jne 0x64392a */ if (!fZ) goto L_0064392a;
L_0064391a:; BB(0x0064391a);
    /* 0064391a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064391d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00643924: mov esp, ebp */ r_esp = r_ebp;
    /* 00643926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643927: ret 4 */ FN_RET(0x006437ac); r_esp += 8; return;
L_0064392a:; BB(0x0064392a);
    /* 0064392a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064392d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064392e: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x643933u); f_005c2f74();
    /* 00643933: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00643934: jmp 0x64391a */ goto L_0064391a;
}

void f_00643938(void) /* sub_643938 */
{
    FN_ENTER(0x00643938);
    /* 00643938: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00643939: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064393c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064393e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00643941: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643943: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00643946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643947: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x64394cu); f_00830aa0();
    /* 0064394c: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00643950: fchs  */ ST(0) = -ST(0);
    /* 00643952: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00643956: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643958: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643959: ja 0x643a34 */ if ((!fC&&!fZ)) goto L_00643a34;
L_0064395f:; BB(0x0064395f);
    /* 0064395f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00643962: fcomp dword ptr [0x935458] */ fx_compare(ST(0), R_F32((u32)(0x935458u))); FPOP();
    /* 00643968: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064396a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064396b: jae 0x6439cb */ if (!fC) goto L_006439cb;
L_0064396d:; BB(0x0064396d);
    /* 0064396d: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 00643973: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00643977: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 0064397d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0064397f: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00643982: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 00643988: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0064398a: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0064398d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064398f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00643993: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00643997: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0064399b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064399d: fchs  */ ST(0) = -ST(0);
    /* 0064399f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006439a1: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 006439a4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006439a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006439a8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006439ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006439ae: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x6439b3u); f_0082f09c();
    /* 006439b3: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006439b7: fcomp dword ptr [0x935458] */ fx_compare(ST(0), R_F32((u32)(0x935458u))); FPOP();
    /* 006439bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006439bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006439c0: jae 0x643a3d */ if (!fC) goto L_00643a3d;
L_006439c2:; BB(0x006439c2);
    /* 006439c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006439c4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006439c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006439c8: ret 8 */ FN_RET(0x00643938); r_esp += 12; return;
L_006439cb:; BB(0x006439cb);
    /* 006439cb: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 006439d1: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 006439d5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006439d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006439d9: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 006439dc: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 006439e2: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 006439e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006439ea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006439ed: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006439f1: fchs  */ ST(0) = -ST(0);
    /* 006439f3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006439f5: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 006439f8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006439fc: fchs  */ ST(0) = -ST(0);
    /* 006439fe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00643a00: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 00643a03: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00643a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643a08: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00643a0c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643a0e: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x643a13u); f_0082f09c();
    /* 00643a13: movsx ecx, word ptr [0xa48a4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 00643a1a: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 00643a21: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00643a23: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00643a27: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00643a2b: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00643a2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643a31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643a32: jae 0x643a3d */ if (!fC) goto L_00643a3d;
L_00643a34:; BB(0x00643a34);
    /* 00643a34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643a36: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643a39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00643a3a: ret 8 */ FN_RET(0x00643938); r_esp += 12; return;
L_00643a3d:; BB(0x00643a3d);
    /* 00643a3d: mov eax, 1 */ r_eax = 0x1u;
    /* 00643a42: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643a45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00643a46: ret 8 */ FN_RET(0x00643938); r_esp += 12; return;
}

void f_00643a4c(void) /* sub_643A4C */
{
    FN_ENTER(0x00643a4c);
    /* 00643a4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643a4d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643a50: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00643a52: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 00643a58: fadd dword ptr [ebp + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb8u));
    /* 00643a5e: fld dword ptr [0x935454] */ FPUSH(R_F32((u32)(0x935454u)));
    /* 00643a64: fadd dword ptr [ebp + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xb4u));
    /* 00643a6a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00643a6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643a6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643a6f: jb 0x643a79 */ if (fC) goto L_00643a79;
L_00643a71:; BB(0x00643a71);
    /* 00643a71: fstp dword ptr [ebp + 0xb0] */ W_F32((u32)(r_ebp+0xb0u), ST(0)); FPOP();
    /* 00643a77: jmp 0x643ab7 */ goto L_00643ab7;
L_00643a79:; BB(0x00643a79);
    /* 00643a79: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00643a7b: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 00643a85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643a87: mov dword ptr [ebp + 0x100], eax */ W32((u32)(r_ebp+0x100u), r_eax);
    /* 00643a8d: mov dword ptr [ebp + 0x118], eax */ W32((u32)(r_ebp+0x118u), r_eax);
    /* 00643a93: mov dword ptr [ebp + 0x130], eax */ W32((u32)(r_ebp+0x130u), r_eax);
    /* 00643a99: mov dword ptr [ebp + 0x148], eax */ W32((u32)(r_ebp+0x148u), r_eax);
    /* 00643a9f: mov dword ptr [ebp + 0x160], eax */ W32((u32)(r_ebp+0x160u), r_eax);
    /* 00643aa5: mov dword ptr [ebp + 0x178], eax */ W32((u32)(r_ebp+0x178u), r_eax);
    /* 00643aab: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 00643ab1: mov dword ptr [ebp + 0x1a8], eax */ W32((u32)(r_ebp+0x1a8u), r_eax);
L_00643ab7:; BB(0x00643ab7);
    /* 00643ab7: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 00643abd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643abf: je 0x643b25 */ if (fZ) goto L_00643b25;
L_00643ac1:; BB(0x00643ac1);
    /* 00643ac1: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00643ac5: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00643ac9: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00643acd: lea ecx, [ebp + 0x100] */ r_ecx = (u32)(r_ebp+0x100u);
    /* 00643ad3: lea edx, [ebp + 0xec] */ r_edx = (u32)(r_ebp+0xecu);
    /* 00643ad9: lea eax, [ebp + 0x1c0] */ r_eax = (u32)(r_ebp+0x1c0u);
    /* 00643adf: mov ebx, eax */ r_ebx = r_eax;
    /* 00643ae1: mov esi, edx */ r_esi = r_edx;
    /* 00643ae3: mov edi, ecx */ r_edi = r_ecx;
L_00643ae5:; BB(0x00643ae5);
    /* 00643ae5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00643ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643ae9: jne 0x643b0f */ if (!fZ) goto L_00643b0f;
L_00643aeb:; BB(0x00643aeb);
    /* 00643aeb: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 00643af1: fcomp dword ptr [edi - 8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xfffffff8u))); FPOP();
    /* 00643af4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643af6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643af7: jb 0x643b0f */ if (fC) goto L_00643b0f;
L_00643af9:; BB(0x00643af9);
    /* 00643af9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643afd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643afe: push dword ptr [edi - 4] */ { u32 v = R32((u32)(r_edi+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00643b01: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x643b06u); f_00814298();
    /* 00643b06: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643b09: mov dword ptr [edi], 1 */ W32((u32)(r_edi), 0x1u);
L_00643b0f:; BB(0x00643b0f);
    /* 00643b0f: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00643b12: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00643b15: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00643b17: ja 0x643ae5 */ if ((!fC&&!fZ)) goto L_00643ae5;
L_00643b19:; BB(0x00643b19);
    /* 00643b19: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00643b1d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00643b21: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_00643b25:; BB(0x00643b25);
    /* 00643b25: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00643b2b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x643b30u); f_0068d5a8();
    /* 00643b30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00643b31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643b33: je 0x643c7d */ if (fZ) goto L_00643c7d;
L_00643b39:; BB(0x00643b39);
    /* 00643b39: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00643b3c: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 00643b3f: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00643b42: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 00643b45: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00643b47: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00643b4a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00643b4e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00643b56: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00643b59: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x643b5eu); f_0082def4();
    /* 00643b5e: fcomp dword ptr [0x93544c] */ fx_compare(ST(0), R_F32((u32)(0x93544cu))); FPOP();
    /* 00643b64: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00643b66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00643b67: ja 0x643c31 */ if ((!fC&&!fZ)) goto L_00643c31;
L_00643b6d:; BB(0x00643b6d);
    /* 00643b6d: mov edx, dword ptr [ebp + 0xcc] */ r_edx = R32((u32)(r_ebp+0xccu));
    /* 00643b73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643b75: je 0x643b84 */ if (fZ) goto L_00643b84;
L_00643b77:; BB(0x00643b77);
    /* 00643b77: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643b7b: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643b80: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643b84:; BB(0x00643b84);
    /* 00643b84: mov edx, dword ptr [ebp + 0xd0] */ r_edx = R32((u32)(r_ebp+0xd0u));
    /* 00643b8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643b8c: je 0x643b9b */ if (fZ) goto L_00643b9b;
L_00643b8e:; BB(0x00643b8e);
    /* 00643b8e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643b92: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643b97: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643b9b:; BB(0x00643b9b);
    /* 00643b9b: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 00643ba1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643ba3: je 0x643bb2 */ if (fZ) goto L_00643bb2;
L_00643ba5:; BB(0x00643ba5);
    /* 00643ba5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643ba9: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643bae: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643bb2:; BB(0x00643bb2);
    /* 00643bb2: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 00643bb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643bba: je 0x643bc9 */ if (fZ) goto L_00643bc9;
L_00643bbc:; BB(0x00643bbc);
    /* 00643bbc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643bc0: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643bc5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643bc9:; BB(0x00643bc9);
    /* 00643bc9: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 00643bcf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643bd1: je 0x643be0 */ if (fZ) goto L_00643be0;
L_00643bd3:; BB(0x00643bd3);
    /* 00643bd3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643bd7: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643bdc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643be0:; BB(0x00643be0);
    /* 00643be0: mov edx, dword ptr [ebp + 0xe0] */ r_edx = R32((u32)(r_ebp+0xe0u));
    /* 00643be6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643be8: je 0x643bf7 */ if (fZ) goto L_00643bf7;
L_00643bea:; BB(0x00643bea);
    /* 00643bea: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643bee: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643bf3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643bf7:; BB(0x00643bf7);
    /* 00643bf7: mov edx, dword ptr [ebp + 0xe4] */ r_edx = R32((u32)(r_ebp+0xe4u));
    /* 00643bfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643bff: je 0x643c0e */ if (fZ) goto L_00643c0e;
L_00643c01:; BB(0x00643c01);
    /* 00643c01: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643c05: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643c0a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643c0e:; BB(0x00643c0e);
    /* 00643c0e: mov edx, dword ptr [ebp + 0xe8] */ r_edx = R32((u32)(r_ebp+0xe8u));
    /* 00643c14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643c16: je 0x643c25 */ if (fZ) goto L_00643c25;
L_00643c18:; BB(0x00643c18);
    /* 00643c18: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00643c1c: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00643c21: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00643c25:; BB(0x00643c25);
    /* 00643c25: mov dword ptr [ebp + 0xc8], 1 */ W32((u32)(r_ebp+0xc8u), 0x1u);
    /* 00643c2f: jmp 0x643c7d */ goto L_00643c7d;
L_00643c31:; BB(0x00643c31);
    /* 00643c31: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00643c35: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00643c39: lea edx, [ebp + 0xcc] */ r_edx = (u32)(r_ebp+0xccu);
    /* 00643c3f: lea eax, [ebp + 0xec] */ r_eax = (u32)(r_ebp+0xecu);
    /* 00643c45: mov esi, eax */ r_esi = r_eax;
    /* 00643c47: mov edi, edx */ r_edi = r_edx;
L_00643c49:; BB(0x00643c49);
    /* 00643c49: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00643c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643c4d: je 0x643c64 */ if (fZ) goto L_00643c64;
L_00643c4f:; BB(0x00643c4f);
    /* 00643c4f: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00643c53: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00643c59: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00643c5d: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00643c5f: call 0x5073a8 */ r_esp -= 4; W32(r_esp, 0x643c64u); f_005073a8();
L_00643c64:; BB(0x00643c64);
    /* 00643c64: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00643c67: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00643c69: ja 0x643c49 */ if ((!fC&&!fZ)) goto L_00643c49;
L_00643c6b:; BB(0x00643c6b);
    /* 00643c6b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00643c6f: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00643c73: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
L_00643c7d:; BB(0x00643c7d);
    /* 00643c7d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643c80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643c81: ret  */ FN_RET(0x00643a4c); r_esp += 4; return;
}

void f_00643c84(void) /* sub_643C84 */
{
    FN_ENTER(0x00643c84);
    /* 00643c84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00643c85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00643c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643c87: mov edi, ecx */ r_edi = r_ecx;
    /* 00643c89: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00643c8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00643c90: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00643c92: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00643c97: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x643c9au); call_ind(t); }
    /* 00643c9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00643c9c: je 0x643d5c */ if (fZ) goto L_00643d5c;
L_00643ca2:; BB(0x00643ca2);
    /* 00643ca2: mov ecx, dword ptr [0xa8f3d0] */ r_ecx = R32((u32)(0xa8f3d0u));
    /* 00643ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643caa: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x643cafu); f_005b8624();
    /* 00643caf: mov ecx, eax */ r_ecx = r_eax;
    /* 00643cb1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x643cb6u); f_00829cc8();
    /* 00643cb6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x643cbbu); f_0082d7b0();
    /* 00643cbb: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00643cbe: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x643cc3u); f_0082d838();
    /* 00643cc3: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00643cc6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643cc8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x643ccdu); f_0082d8bc();
    /* 00643ccd: mov dword ptr [0xa8f3cc], 0 */ W32((u32)(0xa8f3ccu), 0x0u);
    /* 00643cd7: push 0x643f2c */ { u32 v = 0x643f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00643cdc: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x643ce1u); f_0083a308();
    /* 00643ce1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00643ce2: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x643ce7u); f_00835068();
    /* 00643ce7: mov ecx, dword ptr [0xa8f3d0] */ r_ecx = R32((u32)(0xa8f3d0u));
    /* 00643ced: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643cef: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x643cf4u); f_005b8610();
    /* 00643cf4: mov ebx, eax */ r_ebx = r_eax;
    /* 00643cf6: mov ecx, dword ptr [0xa8f3d0] */ r_ecx = R32((u32)(0xa8f3d0u));
    /* 00643cfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643cfe: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x643d03u); f_005b8638();
    /* 00643d03: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00643d09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00643d0b: mov edx, eax */ r_edx = r_eax;
    /* 00643d0d: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x643d12u); f_00835574();
    /* 00643d12: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x643d17u); f_00835078();
    /* 00643d17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643d19: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x643d1eu); f_0083a308();
    /* 00643d1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00643d1f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x643d24u); f_0082da80();
    /* 00643d24: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00643d2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00643d2c: je 0x643d5c */ if (fZ) goto L_00643d5c;
L_00643d2e:; BB(0x00643d2e);
    /* 00643d2e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00643d31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643d33: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00643d35: mov esi, eax */ r_esi = r_eax;
L_00643d37:; BB(0x00643d37);
    /* 00643d37: mov ecx, dword ptr [edi + esi*4 + 0xcc] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xccu));
    /* 00643d3e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643d40: je 0x643d4e */ if (fZ) goto L_00643d4e;
L_00643d42:; BB(0x00643d42);
    /* 00643d42: lea edx, [ebx + 0xa8f360] */ r_edx = (u32)(r_ebx+0xa8f360u);
    /* 00643d48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643d49: call 0x5073d0 */ r_esp -= 4; W32(r_esp, 0x643d4eu); f_005073d0();
L_00643d4e:; BB(0x00643d4e);
    /* 00643d4e: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00643d51: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00643d54: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00643d57: jl 0x643d37 */ if ((fS!=fO)) goto L_00643d37;
L_00643d59:; BB(0x00643d59);
    /* 00643d59: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00643d5c:; BB(0x00643d5c);
    /* 00643d5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00643d5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00643d5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00643d5f: ret  */ FN_RET(0x00643c84); r_esp += 4; return;
}

void f_00643d60(void)
{
    FN_ENTER(0x00643d60);
    /* 00643d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00643d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00643d65: push 0x8e58fe */ { u32 v = 0x8e58feu; r_esp -= 4; W32(r_esp, v); }
    /* 00643d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00643d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643d71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00643d78: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643d7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00643d7e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00643d81: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00643d84: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00643d87: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 00643d8c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00643d93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x643d98u); f_005caba4();
    /* 00643d98: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00643d9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643d9e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00643da1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643da3: je 0x643f04 */ if (fZ) goto L_00643f04;
L_00643da9:; BB(0x00643da9);
    /* 00643da9: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00643db0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00643db7: mov ecx, eax */ r_ecx = r_eax;
    /* 00643db9: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 00643dbe: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00643dc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643dc2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00643dc5: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x643dcau); f_006132e4();
    /* 00643dca: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00643dd1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00643dd4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643dd7: mov edx, dword ptr [0x935314] */ r_edx = R32((u32)(0x935314u));
    /* 00643ddd: mov ebx, dword ptr [0x935318] */ r_ebx = R32((u32)(0x935318u));
    /* 00643de3: mov esi, dword ptr [0x93531c] */ r_esi = R32((u32)(0x93531cu));
    /* 00643de9: mov edi, dword ptr [0x935320] */ r_edi = R32((u32)(0x935320u));
    /* 00643def: mov dword ptr [ecx], 0xb2f270 */ W32((u32)(r_ecx), 0xb2f270u);
    /* 00643df5: mov eax, dword ptr [0x9c701c] */ r_eax = R32((u32)(0x9c701cu));
    /* 00643dfa: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00643dfd: mov eax, dword ptr [0x935324] */ r_eax = R32((u32)(0x935324u));
    /* 00643e02: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00643e05: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00643e08: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00643e0b: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00643e0e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00643e11: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00643e13: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x643e16u); call_ind(t); }
    /* 00643e16: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643e19: mov ecx, dword ptr [0xa8f3d0] */ r_ecx = R32((u32)(0xa8f3d0u));
    /* 00643e1f: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 00643e29: mov dword ptr [eax + 0xb8], 0x3f4ccccd */ W32((u32)(r_eax+0xb8u), 0x3f4ccccdu);
    /* 00643e33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643e35: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x643e3au); f_005b8638();
    /* 00643e3a: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00643e3d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00643e40: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643e43: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00643e46: fadd dword ptr [edx*4 + 0x935400] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x935400u));
    /* 00643e4d: fstp dword ptr [eax + 0xb4] */ W_F32((u32)(r_eax+0xb4u), ST(0)); FPOP();
    /* 00643e53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643e55: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00643e58:; BB(0x00643e58);
    /* 00643e58: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00643e5f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00643e61: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x643e66u); f_005caba4();
    /* 00643e66: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00643e69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643e6c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00643e6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643e71: je 0x643efd */ if (fZ) goto L_00643efd;
L_00643e77:; BB(0x00643e77);
    /* 00643e77: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00643e7e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00643e85: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643e88: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00643e8b: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 00643e8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00643e90: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 00643e93: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00643e99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643e9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00643e9b: call 0x506d18 */ r_esp -= 4; W32(r_esp, 0x643ea0u); f_00506d18();
    /* 00643ea0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00643ea7:; BB(0x00643ea7);
    /* 00643ea7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643eaa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00643ead: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00643eb0: mov dword ptr [edx + ecx*4 + 0xcc], eax */ W32((u32)(r_edx+r_ecx*4+0xccu), r_eax);
    /* 00643eb7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00643ebe: mov eax, ecx */ r_eax = r_ecx;
    /* 00643ec0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643ec3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00643ec6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643ec9: jl 0x643e58 */ if ((fS!=fO)) goto L_00643e58;
L_00643ecb:; BB(0x00643ecb);
    /* 00643ecb: mov ecx, edx */ r_ecx = r_edx;
    /* 00643ecd: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
    /* 00643ed7: call 0x643fb0 */ r_esp -= 4; W32(r_esp, 0x643edcu); f_00643fb0();
    /* 00643edc: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00643ee3:; BB(0x00643ee3);
    /* 00643ee3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00643ee6: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00643ee9: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00643eec: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00643eef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643ef2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00643ef9: mov esp, ebp */ r_esp = r_ebp;
    /* 00643efb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643efc: ret  */ FN_RET(0x00643d60); r_esp += 4; return;
L_00643efd:; BB(0x00643efd);
    /* 00643efd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643eff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00643f02: jmp 0x643ea7 */ goto L_00643ea7;
L_00643f04:; BB(0x00643f04);
    /* 00643f04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00643f06: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00643f09: jmp 0x643ee3 */ goto L_00643ee3;
}

void f_00643f0c(void) /* sub_643F0C */
{
    FN_ENTER(0x00643f0c);
    /* 00643f0c: mov ecx, dword ptr [0xa8f3d0] */ r_ecx = R32((u32)(0xa8f3d0u));
    /* 00643f12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00643f14: je 0x643f29 */ if (fZ) goto L_00643f29;
L_00643f16:; BB(0x00643f16);
    /* 00643f16: je 0x643f1f */ if (fZ) goto L_00643f1f;
L_00643f18:; BB(0x00643f18);
    /* 00643f18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00643f1a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x643f1fu); f_004066a8();
L_00643f1f:; BB(0x00643f1f);
    /* 00643f1f: mov dword ptr [0xa8f3d0], 0 */ W32((u32)(0xa8f3d0u), 0x0u);
L_00643f29:; BB(0x00643f29);
    /* 00643f29: ret  */ FN_RET(0x00643f0c); r_esp += 4; return;
}

void f_00643f2c(void) /* sub_643F2C */
{
    FN_ENTER(0x00643f2c);
    /* 00643f2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643f2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00643f2e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00643f31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00643f33: mov eax, dword ptr [0xa8f3cc] */ r_eax = R32((u32)(0xa8f3ccu));
    /* 00643f38: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00643f3a: mov ebx, edx */ r_ebx = r_edx;
    /* 00643f3c: mov esi, ecx */ r_esi = r_ecx;
L_00643f3e:; BB(0x00643f3e);
    /* 00643f3e: cmp eax, dword ptr [ebx + 0x93541c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x93541cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643f44: jne 0x643f75 */ if (!fZ) goto L_00643f75;
L_00643f46:; BB(0x00643f46);
    /* 00643f46: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00643f4d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00643f50: lea eax, [esi + 0xa8f360] */ r_eax = (u32)(r_esi+0xa8f360u);
    /* 00643f56: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00643f5e: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00643f66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643f67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643f68: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x643f6du); f_00520c5c();
    /* 00643f6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643f70: mov eax, dword ptr [0xa8f3cc] */ r_eax = R32((u32)(0xa8f3ccu));
L_00643f75:; BB(0x00643f75);
    /* 00643f75: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00643f78: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00643f7b: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00643f7e: jl 0x643f3e */ if ((fS!=fO)) goto L_00643f3e;
L_00643f80:; BB(0x00643f80);
    /* 00643f80: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643f83: mov dword ptr [0xa8f3cc], eax */ W32((u32)(0xa8f3ccu), r_eax);
    /* 00643f88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00643f8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00643f8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00643f8d: ret  */ FN_RET(0x00643f2c); r_esp += 4; return;
}

void f_00643f90(void) /* sub_643F90 */
{
    FN_ENTER(0x00643f90);
    /* 00643f90: mov dword ptr [0xa8f3c0], 0x3f800000 */ W32((u32)(0xa8f3c0u), 0x3f800000u);
    /* 00643f9a: mov dword ptr [0xa8f3c4], 0x41000000 */ W32((u32)(0xa8f3c4u), 0x41000000u);
    /* 00643fa4: mov dword ptr [0xa8f3c8], 0x3fc00000 */ W32((u32)(0xa8f3c8u), 0x3fc00000u);
    /* 00643fae: ret  */ FN_RET(0x00643f90); r_esp += 4; return;
}

void f_00643fb0(void) /* sub_643FB0 */
{
    FN_ENTER(0x00643fb0);
    /* 00643fb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00643fb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00643fb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00643fb4: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00643fb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00643fb9: lea ebx, [ecx + 0xec] */ r_ebx = (u32)(r_ecx+0xecu);
    /* 00643fbf: mov ebp, eax */ r_ebp = r_eax;
    /* 00643fc1: mov esi, edx */ r_esi = r_edx;
    /* 00643fc3: mov edi, ecx */ r_edi = r_ecx;
L_00643fc5:; BB(0x00643fc5);
    /* 00643fc5: mov eax, dword ptr [ebp + 0x935340] */ r_eax = R32((u32)(r_ebp+0x935340u));
    /* 00643fcb: mov dword ptr [ebp + edi + 0xec], eax */ W32((u32)(r_ebp+r_edi+0xecu), r_eax);
    /* 00643fd2: mov eax, dword ptr [ebp + 0x935344] */ r_eax = R32((u32)(r_ebp+0x935344u));
    /* 00643fd8: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00643fdd: mov dword ptr [ebp + edi + 0xf0], eax */ W32((u32)(r_ebp+r_edi+0xf0u), r_eax);
    /* 00643fe4: mov eax, dword ptr [ebp + 0x935348] */ r_eax = R32((u32)(r_ebp+0x935348u));
    /* 00643fea: mov dword ptr [ebp + edi + 0xf4], eax */ W32((u32)(r_ebp+r_edi+0xf4u), r_eax);
    /* 00643ff1: mov eax, dword ptr [ebp + 0x93534c] */ r_eax = R32((u32)(r_ebp+0x93534cu));
    /* 00643ff7: mov dword ptr [ebp + edi + 0xf8], eax */ W32((u32)(r_ebp+r_edi+0xf8u), r_eax);
    /* 00643ffe: mov eax, dword ptr [ebp + 0x935350] */ r_eax = R32((u32)(r_ebp+0x935350u));
    /* 00644004: mov dword ptr [ebp + edi + 0xfc], eax */ W32((u32)(r_ebp+r_edi+0xfcu), r_eax);
    /* 0064400b: mov eax, dword ptr [ebp + 0x935354] */ r_eax = R32((u32)(r_ebp+0x935354u));
    /* 00644011: mov dword ptr [ebp + edi + 0x100], eax */ W32((u32)(r_ebp+r_edi+0x100u), r_eax);
    /* 00644018: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x64401du); f_0082d990();
    /* 0064401d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00644020: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644022: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x644027u); f_0082d8bc();
    /* 00644027: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644028: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064402a: mov edx, ebx */ r_edx = r_ebx;
    /* 0064402c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x644031u); f_00830aa0();
    /* 00644031: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x644036u); f_0082da80();
    /* 00644036: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00644038: mov edx, esi */ r_edx = r_esi;
    /* 0064403a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x64403fu); f_0082ebac();
    /* 0064403f: mov dword ptr [ebp + edi + 0x100], 0 */ W32((u32)(r_ebp+r_edi+0x100u), 0x0u);
    /* 0064404a: add ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064404d: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00644050: cmp ebp, 0xc0 */ {  u32 a = r_ebp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00644056: jl 0x643fc5 */ if ((fS!=fO)) goto L_00643fc5;
L_0064405c:; BB(0x0064405c);
    /* 0064405c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064405d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064405e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064405f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00644060: ret  */ FN_RET(0x00643fb0); r_esp += 4; return;
}

