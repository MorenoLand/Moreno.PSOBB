#include "protos.h"

void f_00495050(void)
{
    FN_ENTER(0x00495050);
    goto L_00495050;
L_00495023:; BB(0x00495023);
    /* 00495023: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0049502a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049502b: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x495030u); f_0048e100();
    /* 00495030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00495031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495033: je 0x495183 */ if (fZ) goto L_00495183;
L_00495039:; BB(0x00495039);
    /* 00495039: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0049503c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00495044: lea edx, [ebx + 0x5e0] */ r_edx = (u32)(r_ebx+0x5e0u);
    /* 0049504a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049504d: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
L_00495050:; BB(0x00495050);
    /* 00495050: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00495051: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00495052: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00495053: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00495054: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00495058: mov eax, dword ptr [ebx + 0x5ec] */ r_eax = R32((u32)(r_ebx+0x5ecu));
    /* 0049505e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00495062: mov eax, dword ptr [ebx + 0x5f0] */ r_eax = R32((u32)(r_ebx+0x5f0u));
    /* 00495068: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0049506c: mov eax, dword ptr [ebx + 0x5f4] */ r_eax = R32((u32)(r_ebx+0x5f4u));
    /* 00495072: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00495076: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49507bu); f_0082f9c4();
    /* 0049507b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049507e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00495082: mov edx, dword ptr [ebx + 0x5e0] */ r_edx = R32((u32)(r_ebx+0x5e0u));
    /* 00495088: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0049508c: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00495094: mov edx, dword ptr [ebx + 0x5e8] */ r_edx = R32((u32)(r_ebx+0x5e8u));
    /* 0049509a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049509e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004950a2: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 004950aa: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004950ae: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004950b2: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004950b6: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 004950ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004950bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004950bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004950bd: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x4950c2u); f_0083a0dc();
    /* 004950c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004950c5: fcomp dword ptr [0x902b04] */ fx_compare(ST(0), R_F32((u32)(0x902b04u))); FPOP();
    /* 004950cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004950cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004950ce: ja 0x495183 */ if ((!fC&&!fZ)) goto L_00495183;
L_004950d4:; BB(0x004950d4);
    /* 004950d4: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004950d8: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004950dc: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004950e0: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004950e4: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004950e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004950ea: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004950ee: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004950f2: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004950f6: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004950fa: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004950fe: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00495102: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00495106: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49510bu); f_0082f9c4();
    /* 0049510b: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0049510f: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00495113: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495118u); f_0082f9c4();
    /* 00495118: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00495120: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00495124: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00495128: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 00495130: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x495135u); f_0082f9e0();
    /* 00495135: fcomp dword ptr [0x902b14] */ fx_compare(ST(0), R_F32((u32)(0x902b14u))); FPOP();
    /* 0049513b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049513d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049513e: ja 0x495183 */ if ((!fC&&!fZ)) goto L_00495183;
L_00495140:; BB(0x00495140);
    /* 00495140: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00495145: push dword ptr [ebx + 0x484] */ { u32 v = R32((u32)(r_ebx+0x484u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049514b: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x495150u); f_0048e9d4();
    /* 00495150: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00495153: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0049515a: fild dword ptr [esp + 0x80] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x80u)));
    /* 00495161: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00495163: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00495167: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00495169: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0049516e: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00495172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495174: mov ecx, edi */ r_ecx = r_edi;
    /* 00495176: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495177: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049517b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049517d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049517e: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x495181u); call_ind(t); }
    /* 00495181: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00495183:; BB(0x00495183);
    /* 00495183: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00495186: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495188: jl 0x495023 */ if ((fS!=fO)) goto L_00495023;
L_0049518e:; BB(0x0049518e);
    /* 0049518e: mov edi, dword ptr [esp + 0xa8] */ r_edi = R32((u32)(r_esp+0xa8u));
    /* 00495195: mov ebp, dword ptr [esp + 0xac] */ r_ebp = R32((u32)(r_esp+0xacu));
    /* 0049519c: mov eax, dword ptr [ebx + 0x410] */ r_eax = R32((u32)(r_ebx+0x410u));
    /* 004951a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004951a4: jne 0x49535a */ if (!fZ) goto L_0049535a;
L_004951aa:; BB(0x004951aa);
    /* 004951aa: mov eax, dword ptr [ebx + 0x5ec] */ r_eax = R32((u32)(r_ebx+0x5ecu));
    /* 004951b0: mov edx, dword ptr [ebx + 0x5f4] */ r_edx = R32((u32)(r_ebx+0x5f4u));
    /* 004951b6: mov dword ptr [esp + 0x60], 0 */ W32((u32)(r_esp+0x60u), 0x0u);
    /* 004951be: lea esi, [ebx + 0x574] */ r_esi = (u32)(r_ebx+0x574u);
    /* 004951c4: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004951c8: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 004951cc: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 004951d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004951d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004951d2: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4951d7u); f_00836208();
    /* 004951d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004951da: fld dword ptr [0x902624] */ FPUSH(R_F32((u32)(0x902624u)));
    /* 004951e0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004951e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004951e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004951e5: ja 0x495363 */ if ((!fC&&!fZ)) goto L_00495363;
L_004951eb:; BB(0x004951eb);
    /* 004951eb: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004951ed: fld dword ptr [0x902b0c] */ FPUSH(R_F32((u32)(0x902b0cu)));
    /* 004951f3: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004951f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004951f7: fnstcw word ptr [esp + 0x88] */ W16((u32)(r_esp+0x88u), fcw);
    /* 004951fe: movzx eax, word ptr [esp + 0x88] */ r_eax = (u32)R16((u32)(r_esp+0x88u));
    /* 00495206: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049520b: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 00495212: fldcw word ptr [esp + 0x90] */ fcw = R16((u32)(r_esp+0x90u));
    /* 00495219: fistp dword ptr [esp + 0x98] */ W32((u32)(r_esp+0x98u), (u32)fx_int32(ST(0))); FPOP();
    /* 00495220: fldcw word ptr [esp + 0x88] */ fcw = R16((u32)(r_esp+0x88u));
    /* 00495227: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0049522b: mov esi, dword ptr [esp + 0x98] */ r_esi = R32((u32)(r_esp+0x98u));
    /* 00495232: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00495236: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0049523a: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0049523e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495241: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00495245: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00495249: lea ecx, [esp + 0x74] */ r_ecx = (u32)(r_esp+0x74u);
    /* 0049524d: mov eax, 4 */ r_eax = 0x4u;
    /* 00495252: jle 0x495256 */ if ((fZ||fS!=fO)) goto L_00495256;
L_00495254:; BB(0x00495254);
    /* 00495254: mov esi, eax */ r_esi = r_eax;
L_00495256:; BB(0x00495256);
    /* 00495256: mov eax, dword ptr [ebx + 0x574] */ r_eax = R32((u32)(r_ebx+0x574u));
    /* 0049525c: mov dword ptr [esp + 0xa0], esi */ W32((u32)(r_esp+0xa0u), r_esi);
    /* 00495263: fild dword ptr [esp + 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xa0u)));
    /* 0049526a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049526c: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00495273: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00495277: mov eax, dword ptr [ebx + 0x578] */ r_eax = R32((u32)(r_ebx+0x578u));
    /* 0049527d: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00495281: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495285: mov eax, dword ptr [ebx + 0x57c] */ r_eax = R32((u32)(r_ebx+0x57cu));
    /* 0049528b: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0049528f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495294u); f_0082f9c4();
    /* 00495294: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00495298: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 0049529f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004952a1: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 004952a5: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 004952a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004952ab: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004952ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952af: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004952b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952b3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004952b7: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 004952bb: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004952bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004952c1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004952c3: jle 0x495310 */ if ((fZ||fS!=fO)) goto L_00495310;
L_004952c5:; BB(0x004952c5);
    /* 004952c5: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 004952cc: mov edi, esi */ r_edi = r_esi;
    /* 004952ce: mov esi, eax */ r_esi = r_eax;
L_004952d0:; BB(0x004952d0);
    /* 004952d0: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 004952d4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952d6: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 004952db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952dc: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952e1u); f_0050b7a4();
    /* 004952e1: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952e5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952e7: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 004952ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952ed: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952f2u); f_0050b7a4();
    /* 004952f2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004952f5: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 004952f9: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952fd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x495302u); f_0082ebac();
    /* 00495302: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00495305: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495307: jl 0x4952d0 */ if ((fS!=fO)) goto L_004952d0;
L_00495309:; BB(0x00495309);
    /* 00495309: mov edi, dword ptr [esp + 0xa8] */ r_edi = R32((u32)(r_esp+0xa8u));
L_00495310:; BB(0x00495310);
    /* 00495310: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00495314: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00495318: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 0049531c: mov dword ptr [ebx + 0x574], eax */ W32((u32)(r_ebx+0x574u), r_eax);
    /* 00495322: mov dword ptr [ebx + 0x578], edx */ W32((u32)(r_ebx+0x578u), r_edx);
    /* 00495328: mov dword ptr [ebx + 0x57c], esi */ W32((u32)(r_ebx+0x57cu), r_esi);
L_0049532e:; BB(0x0049532e);
    /* 0049532e: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495337: push 0x3be */ { u32 v = 0x3beu; r_esp -= 4; W32(r_esp, v); }
    /* 0049533c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x495341u); f_00814298();
    /* 00495341: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00495345: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00495347: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049534c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00495351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495352: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x495357u); f_0048e41c();
    /* 00495357: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049535a:; BB(0x0049535a);
    /* 0049535a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495360: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495362: ret  */ FN_RET(0x00495050); r_esp += 4; return;
L_00495363:; BB(0x00495363);
    /* 00495363: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00495365: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495367: jmp 0x49532e */ goto L_0049532e;
}

void f_00495243(void)
{
    FN_ENTER(0x00495243);
    /* 00495243: and al, 0x64 */ {  u32 a = (u8)r_eax; u32 b = 0x64u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fO = 0; }
    /* 00495245: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00495249: lea ecx, [esp + 0x74] */ r_ecx = (u32)(r_esp+0x74u);
    /* 0049524d: mov eax, 4 */ r_eax = 0x4u;
    /* 00495252: jle 0x495256 */ if ((fZ||fS!=fO)) goto L_00495256;
L_00495254:; BB(0x00495254);
    /* 00495254: mov esi, eax */ r_esi = r_eax;
L_00495256:; BB(0x00495256);
    /* 00495256: mov eax, dword ptr [ebx + 0x574] */ r_eax = R32((u32)(r_ebx+0x574u));
    /* 0049525c: mov dword ptr [esp + 0xa0], esi */ W32((u32)(r_esp+0xa0u), r_esi);
    /* 00495263: fild dword ptr [esp + 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xa0u)));
    /* 0049526a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049526c: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00495273: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00495277: mov eax, dword ptr [ebx + 0x578] */ r_eax = R32((u32)(r_ebx+0x578u));
    /* 0049527d: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00495281: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495285: mov eax, dword ptr [ebx + 0x57c] */ r_eax = R32((u32)(r_ebx+0x57cu));
    /* 0049528b: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0049528f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495294u); f_0082f9c4();
    /* 00495294: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00495298: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 0049529f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004952a1: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 004952a5: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 004952a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004952ab: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004952ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952af: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004952b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952b3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004952b7: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 004952bb: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004952bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004952c1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004952c3: jle 0x495310 */ if ((fZ||fS!=fO)) goto L_00495310;
L_004952c5:; BB(0x004952c5);
    /* 004952c5: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 004952cc: mov edi, esi */ r_edi = r_esi;
    /* 004952ce: mov esi, eax */ r_esi = r_eax;
L_004952d0:; BB(0x004952d0);
    /* 004952d0: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 004952d4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952d6: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 004952db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952dc: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952e1u); f_0050b7a4();
    /* 004952e1: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952e5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952e7: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 004952ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952ed: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952f2u); f_0050b7a4();
    /* 004952f2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004952f5: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 004952f9: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952fd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x495302u); f_0082ebac();
    /* 00495302: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00495305: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495307: jl 0x4952d0 */ if ((fS!=fO)) goto L_004952d0;
L_00495309:; BB(0x00495309);
    /* 00495309: mov edi, dword ptr [esp + 0xa8] */ r_edi = R32((u32)(r_esp+0xa8u));
L_00495310:; BB(0x00495310);
    /* 00495310: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00495314: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00495318: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 0049531c: mov dword ptr [ebx + 0x574], eax */ W32((u32)(r_ebx+0x574u), r_eax);
    /* 00495322: mov dword ptr [ebx + 0x578], edx */ W32((u32)(r_ebx+0x578u), r_edx);
    /* 00495328: mov dword ptr [ebx + 0x57c], esi */ W32((u32)(r_ebx+0x57cu), r_esi);
    /* 0049532e: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495337: push 0x3be */ { u32 v = 0x3beu; r_esp -= 4; W32(r_esp, v); }
    /* 0049533c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x495341u); f_00814298();
    /* 00495341: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00495345: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00495347: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049534c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00495351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495352: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x495357u); f_0048e41c();
    /* 00495357: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049535a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495360: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495362: ret  */ FN_RET(0x00495243); r_esp += 4; return;
}

void f_00495250(void)
{
    FN_ENTER(0x00495250);
    /* 00495250: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00495252: jle 0x495256 */ if ((fZ||fS!=fO)) goto L_00495256;
L_00495254:; BB(0x00495254);
    /* 00495254: mov esi, eax */ r_esi = r_eax;
L_00495256:; BB(0x00495256);
    /* 00495256: mov eax, dword ptr [ebx + 0x574] */ r_eax = R32((u32)(r_ebx+0x574u));
    /* 0049525c: mov dword ptr [esp + 0xa0], esi */ W32((u32)(r_esp+0xa0u), r_esi);
    /* 00495263: fild dword ptr [esp + 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xa0u)));
    /* 0049526a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049526c: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00495273: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00495277: mov eax, dword ptr [ebx + 0x578] */ r_eax = R32((u32)(r_ebx+0x578u));
    /* 0049527d: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00495281: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495285: mov eax, dword ptr [ebx + 0x57c] */ r_eax = R32((u32)(r_ebx+0x57cu));
    /* 0049528b: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0049528f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495294u); f_0082f9c4();
    /* 00495294: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00495298: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 0049529f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004952a1: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 004952a5: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 004952a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004952ab: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004952ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952af: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004952b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004952b3: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 004952b7: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 004952bb: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004952bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004952c1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004952c3: jle 0x495310 */ if ((fZ||fS!=fO)) goto L_00495310;
L_004952c5:; BB(0x004952c5);
    /* 004952c5: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 004952cc: mov edi, esi */ r_edi = r_esi;
    /* 004952ce: mov esi, eax */ r_esi = r_eax;
L_004952d0:; BB(0x004952d0);
    /* 004952d0: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 004952d4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952d6: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 004952db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952dc: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952e1u); f_0050b7a4();
    /* 004952e1: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952e5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004952e7: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 004952ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004952ed: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4952f2u); f_0050b7a4();
    /* 004952f2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004952f5: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 004952f9: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 004952fd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x495302u); f_0082ebac();
    /* 00495302: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00495305: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495307: jl 0x4952d0 */ if ((fS!=fO)) goto L_004952d0;
L_00495309:; BB(0x00495309);
    /* 00495309: mov edi, dword ptr [esp + 0xa8] */ r_edi = R32((u32)(r_esp+0xa8u));
L_00495310:; BB(0x00495310);
    /* 00495310: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00495314: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00495318: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 0049531c: mov dword ptr [ebx + 0x574], eax */ W32((u32)(r_ebx+0x574u), r_eax);
    /* 00495322: mov dword ptr [ebx + 0x578], edx */ W32((u32)(r_ebx+0x578u), r_edx);
    /* 00495328: mov dword ptr [ebx + 0x57c], esi */ W32((u32)(r_ebx+0x57cu), r_esi);
    /* 0049532e: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00495332: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495336: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495337: push 0x3be */ { u32 v = 0x3beu; r_esp -= 4; W32(r_esp, v); }
    /* 0049533c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x495341u); f_00814298();
    /* 00495341: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00495345: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00495347: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049534c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00495351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495352: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x495357u); f_0048e41c();
    /* 00495357: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049535a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495360: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495362: ret  */ FN_RET(0x00495250); r_esp += 4; return;
}

void f_00495341(void)
{
    FN_ENTER(0x00495341);
    /* 00495341: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 00495345: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00495347: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049534c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00495351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495352: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x495357u); f_0048e41c();
    /* 00495357: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049535a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495360: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495362: ret  */ FN_RET(0x00495341); r_esp += 4; return;
}

void f_00495345(void)
{
    FN_ENTER(0x00495345);
    /* 00495345: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00495347: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049534c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00495351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495352: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x495357u); f_0048e41c();
    /* 00495357: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049535a: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495360: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495362: ret  */ FN_RET(0x00495345); r_esp += 4; return;
}

void f_0049536c(void) /* sub_49536C */
{
    FN_ENTER(0x0049536c);
    /* 0049536c: mov dword ptr [ecx + 0x5e4], 0x41200000 */ W32((u32)(r_ecx+0x5e4u), 0x41200000u);
    /* 00495376: mov dword ptr [ecx + 0x5f0], 0x41200000 */ W32((u32)(r_ecx+0x5f0u), 0x41200000u);
    /* 00495380: mov dword ptr [ecx + 0x5fc], 0x41200000 */ W32((u32)(r_ecx+0x5fcu), 0x41200000u);
    /* 0049538a: call 0x495390 */ r_esp -= 4; W32(r_esp, 0x49538fu); f_00495390();
    /* 0049538f: ret  */ FN_RET(0x0049536c); r_esp += 4; return;
}

void f_00495390(void) /* sub_495390 */
{
    FN_ENTER(0x00495390);
    /* 00495390: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00495391: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00495394: mov esi, ecx */ r_esi = r_ecx;
    /* 00495396: mov eax, dword ptr [esi + 0x5e0] */ r_eax = R32((u32)(r_esi+0x5e0u));
    /* 0049539c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0049539f: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 004953a3: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004953a7: mov eax, dword ptr [esi + 0x5e4] */ r_eax = R32((u32)(r_esi+0x5e4u));
    /* 004953ad: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004953b1: mov eax, dword ptr [esi + 0x5e8] */ r_eax = R32((u32)(r_esi+0x5e8u));
    /* 004953b7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004953bb: mov eax, dword ptr [esi + 0x5ec] */ r_eax = R32((u32)(r_esi+0x5ecu));
    /* 004953c1: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004953c5: mov eax, dword ptr [esi + 0x5f0] */ r_eax = R32((u32)(r_esi+0x5f0u));
    /* 004953cb: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004953cf: mov eax, dword ptr [esi + 0x5f4] */ r_eax = R32((u32)(r_esi+0x5f4u));
    /* 004953d5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004953d9: mov eax, dword ptr [esi + 0x5f8] */ r_eax = R32((u32)(r_esi+0x5f8u));
    /* 004953df: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004953e3: mov eax, dword ptr [esi + 0x5fc] */ r_eax = R32((u32)(r_esi+0x5fcu));
    /* 004953e9: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004953ed: mov eax, dword ptr [esi + 0x600] */ r_eax = R32((u32)(r_esi+0x600u));
    /* 004953f3: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004953f7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4953fcu); f_0082f9c4();
    /* 004953fc: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00495400: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x495405u); f_0083173c();
    /* 00495405: fcom dword ptr [0x902afc] */ fx_compare(ST(0), R_F32((u32)(0x902afcu))); 
    /* 0049540b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049540d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049540e: ja 0x495418 */ if ((!fC&&!fZ)) goto L_00495418;
L_00495410:; BB(0x00495410);
    /* 00495410: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495412: fld dword ptr [0x902af8] */ FPUSH(R_F32((u32)(0x902af8u)));
L_00495418:; BB(0x00495418);
    /* 00495418: fdivr dword ptr [0x902af4] */ ST(0) = R_F32((u32)(0x902af4u)) / ST(0);
    /* 0049541e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00495422: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00495424: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00495428: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0049542c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0049542f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495431: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00495433: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00495435: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00495437: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495439: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0049543d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049543f: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00495443: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00495447: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0049544b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0049544f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00495453: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00495457: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049545b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0049545e: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00495462: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00495466: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0049546a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0049546e: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00495472: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00495476: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 0049547a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49547fu); f_0082f9c4();
    /* 0049547f: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00495483: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00495487: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x49548cu); f_0082ebac();
    /* 0049548c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00495490: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00495494: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00495498: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0049549c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004954a0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004954a4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004954a8: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004954ac: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004954b0: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004954b4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004954b8: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004954bc: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004954c0: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 004954c4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4954c9u); f_0082f9c4();
    /* 004954c9: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 004954cd: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 004954d1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4954d6u); f_0082ebac();
    /* 004954d6: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004954d9: mov ecx, dword ptr [esi + 0x408] */ r_ecx = R32((u32)(r_esi+0x408u));
    /* 004954df: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004954e3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004954e7: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004954eb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004954ef: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004954f3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004954f6: push 0x902630 */ { u32 v = 0x902630u; r_esp -= 4; W32(r_esp, v); }
    /* 004954fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004954fc: call 0x4a053c */ r_esp -= 4; W32(r_esp, 0x495501u); f_004a053c();
    /* 00495501: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495504: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495505: ret  */ FN_RET(0x00495390); r_esp += 4; return;
}

void f_00495508(void) /* sub_495508 */
{
    FN_ENTER(0x00495508);
    /* 00495508: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00495509: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049550a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049550b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049550e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00495510: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00495512: call 0x495390 */ r_esp -= 4; W32(r_esp, 0x495517u); f_00495390();
    /* 00495517: fld dword ptr [ebx + 0x5f0] */ FPUSH(R_F32((u32)(r_ebx+0x5f0u)));
    /* 0049551d: fld dword ptr [ebx + 0x5e4] */ FPUSH(R_F32((u32)(r_ebx+0x5e4u)));
    /* 00495523: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00495525: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495527: mov edx, dword ptr [ebx + 0x5e4] */ r_edx = R32((u32)(r_ebx+0x5e4u));
    /* 0049552d: lea esi, [ebx + 0x5e0] */ r_esi = (u32)(r_ebx+0x5e0u);
    /* 00495533: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00495535: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495536: jbe 0x49554d */ if ((fC||fZ)) goto L_0049554d;
L_00495538:; BB(0x00495538);
    /* 00495538: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049553a: fcom dword ptr [0x902af0] */ fx_compare(ST(0), R_F32((u32)(0x902af0u))); 
    /* 00495540: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495542: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495543: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495545: jae 0x49554d */ if (!fC) goto L_0049554d;
L_00495547:; BB(0x00495547);
    /* 00495547: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495549: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049554b: jmp 0x495563 */ goto L_00495563;
L_0049554d:; BB(0x0049554d);
    /* 0049554d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0049554f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495551: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495552: jae 0x49567a */ if (!fC) goto L_0049567a;
L_00495558:; BB(0x00495558);
    /* 00495558: fcomp dword ptr [0x902af0] */ fx_compare(ST(0), R_F32((u32)(0x902af0u))); FPOP();
    /* 0049555e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495560: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495561: jbe 0x495568 */ if ((fC||fZ)) goto L_00495568;
L_00495563:; BB(0x00495563);
    /* 00495563: mov edi, 1 */ r_edi = 0x1u;
L_00495568:; BB(0x00495568);
    /* 00495568: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495569: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x49556eu); f_0082e900();
    /* 0049556e: fcomp dword ptr [0x902aec] */ fx_compare(ST(0), R_F32((u32)(0x902aecu))); FPOP();
    /* 00495574: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495576: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495577: ja 0x495593 */ if ((!fC&&!fZ)) goto L_00495593;
L_00495579:; BB(0x00495579);
    /* 00495579: push dword ptr [ebx + 0x5f0] */ { u32 v = R32((u32)(r_ebx+0x5f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049557f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x495584u); f_0082e900();
    /* 00495584: fcomp dword ptr [0x902aec] */ fx_compare(ST(0), R_F32((u32)(0x902aecu))); FPOP();
    /* 0049558a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049558c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049558d: ja 0x495593 */ if ((!fC&&!fZ)) goto L_00495593;
L_0049558f:; BB(0x0049558f);
    /* 0049558f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495591: jne 0x49559a */ if (!fZ) goto L_0049559a;
L_00495593:; BB(0x00495593);
    /* 00495593: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495596: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495597: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495598: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00495599: ret  */ FN_RET(0x00495508); r_esp += 4; return;
L_0049559a:; BB(0x0049559a);
    /* 0049559a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049559d: mov eax, dword ptr [ebx + 0x5ec] */ r_eax = R32((u32)(r_ebx+0x5ecu));
    /* 004955a3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004955a6: mov edi, dword ptr [ebx + 0x5f0] */ r_edi = R32((u32)(r_ebx+0x5f0u));
    /* 004955ac: mov edx, esi */ r_edx = r_esi;
    /* 004955ae: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004955b2: mov eax, dword ptr [ebx + 0x5f4] */ r_eax = R32((u32)(r_ebx+0x5f4u));
    /* 004955b8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004955bc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4955c1u); f_0082f9c4();
    /* 004955c1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004955c5: fcom dword ptr [0x902ae8] */ fx_compare(ST(0), R_F32((u32)(0x902ae8u))); 
    /* 004955cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004955cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004955ce: ja 0x4955da */ if ((!fC&&!fZ)) goto L_004955da;
L_004955d0:; BB(0x004955d0);
    /* 004955d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004955d2: fld dword ptr [0x902ae4] */ FPUSH(R_F32((u32)(0x902ae4u)));
    /* 004955d8: jmp 0x4955e4 */ goto L_004955e4;
L_004955da:; BB(0x004955da);
    /* 004955da: fld dword ptr [ebx + 0x5e4] */ FPUSH(R_F32((u32)(r_ebx+0x5e4u)));
    /* 004955e0: fchs  */ ST(0) = -ST(0);
    /* 004955e2: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
L_004955e4:; BB(0x004955e4);
    /* 004955e4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004955e7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004955e9: fadd dword ptr [ebx + 0x5e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x5e0u));
    /* 004955ef: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004955f3: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004955f8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004955fa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004955fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00495600: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00495608: fadd dword ptr [ebx + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x5e8u));
    /* 0049560e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00495612: jl 0x495619 */ if ((fS!=fO)) goto L_00495619;
L_00495614:; BB(0x00495614);
    /* 00495614: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495617: jl 0x49561b */ if ((fS!=fO)) goto L_0049561b;
L_00495619:; BB(0x00495619);
    /* 00495619: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0049561b:; BB(0x0049561b);
    /* 0049561b: mov edx, dword ptr [eax*4 + 0x90264c] */ r_edx = R32((u32)(r_eax*4+0x90264cu));
    /* 00495622: mov eax, dword ptr [ebx + 0x410] */ r_eax = R32((u32)(r_ebx+0x410u));
    /* 00495628: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0049562a: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049562c: jne 0x495633 */ if (!fZ) goto L_00495633;
L_0049562e:; BB(0x0049562e);
    /* 0049562e: mov esi, 1 */ r_esi = 0x1u;
L_00495633:; BB(0x00495633);
    /* 00495633: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00495637: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00495638: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049563a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049563b: call 0x4916a0 */ r_esp -= 4; W32(r_esp, 0x495640u); f_004916a0();
    /* 00495640: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00495643: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495645: je 0x495673 */ if (fZ) goto L_00495673;
L_00495647:; BB(0x00495647);
    /* 00495647: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0049564b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049564d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049564e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049564f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495650: push 0x3c4 */ { u32 v = 0x3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00495655: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49565au); f_00814298();
    /* 0049565a: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0049565e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00495660: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495665: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049566a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049566b: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x495670u); f_0048e41c();
    /* 00495670: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00495673:; BB(0x00495673);
    /* 00495673: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495676: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495677: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495678: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00495679: ret  */ FN_RET(0x00495508); r_esp += 4; return;
L_0049567a:; BB(0x0049567a);
    /* 0049567a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049567c: jmp 0x495568 */ goto L_00495568;
}

void f_00495684(void) /* sub_495684 */
{
    FN_ENTER(0x00495684);
    /* 00495684: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00495685: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00495686: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00495687: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00495688: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049568b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049568d: fld dword ptr [ebp + 0x450] */ FPUSH(R_F32((u32)(r_ebp+0x450u)));
    /* 00495693: mov edi, dword ptr [ebp + 0x44c] */ r_edi = R32((u32)(r_ebp+0x44cu));
    /* 00495699: mov ecx, dword ptr [ebp + 0x404] */ r_ecx = R32((u32)(r_ebp+0x404u));
    /* 0049569f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 004956a3: lea eax, [ebp + 0x64c] */ r_eax = (u32)(r_ebp+0x64cu);
    /* 004956a9: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004956ad: push dword ptr [0x9a6ea8] */ { u32 v = R32((u32)(0x9a6ea8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004956b3: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4956b8u); f_005b8638();
    /* 004956b8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004956ba: jne 0x4958e9 */ if (!fZ) goto L_004958e9;
L_004956c0:; BB(0x004956c0);
    /* 004956c0: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004956c4: fcomp dword ptr [0x902668] */ fx_compare(ST(0), R_F32((u32)(0x902668u))); FPOP();
    /* 004956ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004956cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004956cd: jb 0x4958e9 */ if (fC) goto L_004958e9;
L_004956d3:; BB(0x004956d3);
    /* 004956d3: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004956d7: fcomp dword ptr [0x902664] */ fx_compare(ST(0), R_F32((u32)(0x902664u))); FPOP();
    /* 004956dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004956df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004956e0: ja 0x4958e9 */ if ((!fC&&!fZ)) goto L_004958e9;
L_004956e6:; BB(0x004956e6);
    /* 004956e6: fld dword ptr [0x902adc] */ FPUSH(R_F32((u32)(0x902adcu)));
    /* 004956ec: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 004956f0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004956f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004956f4: fld dword ptr [ebp + 0x454] */ FPUSH(R_F32((u32)(r_ebp+0x454u)));
    /* 004956fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004956fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004956fd: jb 0x495724 */ if (fC) goto L_00495724;
L_004956ff:; BB(0x004956ff);
    /* 004956ff: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00495703: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00495705: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495707: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495708: jae 0x495726 */ if (!fC) goto L_00495726;
L_0049570a:; BB(0x0049570a);
    /* 0049570a: lea edx, [ebp + 0x640] */ r_edx = (u32)(r_ebp+0x640u);
    /* 00495710: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495713: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495714: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495715: push 0x3c2 */ { u32 v = 0x3c2u; r_esp -= 4; W32(r_esp, v); }
    /* 0049571a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49571fu); f_00814298();
    /* 0049571f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00495722: jmp 0x495726 */ goto L_00495726;
L_00495724:; BB(0x00495724);
    /* 00495724: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00495726:; BB(0x00495726);
    /* 00495726: mov eax, dword ptr [ebp + 0x640] */ r_eax = R32((u32)(r_ebp+0x640u));
    /* 0049572c: mov edx, dword ptr [ebp + 0x644] */ r_edx = R32((u32)(r_ebp+0x644u));
    /* 00495732: mov edi, dword ptr [ebp + 0x648] */ r_edi = R32((u32)(r_ebp+0x648u));
    /* 00495738: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 0049573e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00495741: mov eax, dword ptr [ebp + 0x64c] */ r_eax = R32((u32)(r_ebp+0x64cu));
    /* 00495747: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0049574b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0049574f: mov dword ptr [esp + 0x10], 0x41200000 */ W32((u32)(r_esp+0x10u), 0x41200000u);
    /* 00495757: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0049575b: mov eax, dword ptr [ebp + 0x654] */ r_eax = R32((u32)(r_ebp+0x654u));
    /* 00495761: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00495765: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00495768: push 0x90265c */ { u32 v = 0x90265cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049576d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049576e: call 0x4a053c */ r_esp -= 4; W32(r_esp, 0x495773u); f_004a053c();
    /* 00495773: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00495778: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0049577a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049577c: jle 0x4958e9 */ if ((fZ||fS!=fO)) goto L_004958e9;
L_00495782:; BB(0x00495782);
    /* 00495782: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00495785: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 00495789: lea ecx, [ebp + 0x4d0] */ r_ecx = (u32)(r_ebp+0x4d0u);
    /* 0049578f: mov ebx, eax */ r_ebx = r_eax;
    /* 00495791: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
L_00495795:; BB(0x00495795);
    /* 00495795: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0049579c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049579d: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x4957a2u); f_0048e100();
    /* 004957a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004957a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004957a5: je 0x4958de */ if (fZ) goto L_004958de;
L_004957ab:; BB(0x004957ab);
    /* 004957ab: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 004957af: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004957b3: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004957b7: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 004957bb: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004957bf: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 004957c3: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004957c7: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004957cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004957cd: mov ebp, ebx */ r_ebp = r_ebx;
    /* 004957cf: mov ebx, edx */ r_ebx = r_edx;
L_004957d1:; BB(0x004957d1);
    /* 004957d1: mov edx, dword ptr [esp + ebx*4 + 0x1c] */ r_edx = R32((u32)(r_esp+r_ebx*4+0x1cu));
    /* 004957d5: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004957d9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004957db: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004957df: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004957e2: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004957e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004957e9: mov edx, dword ptr [esp + ebx*4 + 0x18] */ r_edx = R32((u32)(r_esp+r_ebx*4+0x18u));
    /* 004957ed: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004957f1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4957f6u); f_0082f9c4();
    /* 004957f6: mov edx, dword ptr [esp + ebx*4 + 0x18] */ r_edx = R32((u32)(r_esp+r_ebx*4+0x18u));
    /* 004957fa: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 004957fe: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00495801: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00495805: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00495808: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0049580c: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0049580f: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00495813: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495818u); f_0082f9c4();
    /* 00495818: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00495820: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00495824: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0049582c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049582d: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00495831: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 00495835: call 0x83a1f0 */ r_esp -= 4; W32(r_esp, 0x49583au); f_0083a1f0();
    /* 0049583a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049583c: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00495840: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00495844: mov dword ptr [esp + ebx*4 + 0x4c], eax */ W32((u32)(r_esp+r_ebx*4+0x4cu), r_eax);
    /* 00495848: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049584a: jle 0x49591d */ if ((fZ||fS!=fO)) goto L_0049591d;
L_00495850:; BB(0x00495850);
    /* 00495850: fld dword ptr [0x902ad4] */ FPUSH(R_F32((u32)(0x902ad4u)));
    /* 00495856: mov edx, ebx */ r_edx = r_ebx;
    /* 00495858: fld dword ptr [esp + edx*4 + 0x48] */ FPUSH(R_F32((u32)(r_esp+r_edx*4+0x48u)));
    /* 0049585c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049585e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495860: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00495862: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495863: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 00495867: jae 0x495878 */ if (!fC) goto L_00495878;
L_00495869:; BB(0x00495869);
    /* 00495869: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0049586b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049586d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049586f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495870: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00495872: jae 0x495915 */ if (!fC) goto L_00495915;
L_00495878:; BB(0x00495878);
    /* 00495878: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0049587a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049587c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049587d: jbe 0x495888 */ if ((fC||fZ)) goto L_00495888;
L_0049587f:; BB(0x0049587f);
    /* 0049587f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00495881: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495883: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495884: jae 0x4958de */ if (!fC) goto L_004958de;
L_00495886:; BB(0x00495886);
    /* 00495886: jmp 0x49588c */ goto L_0049588c;
L_00495888:; BB(0x00495888);
    /* 00495888: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049588a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0049588c:; BB(0x0049588c);
    /* 0049588c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049588f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495892: jge 0x4958a1 */ if ((fS==fO)) goto L_004958a1;
L_00495894:; BB(0x00495894);
    /* 00495894: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 00495898: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0049589a: mov ebx, edx */ r_ebx = r_edx;
    /* 0049589c: jmp 0x4957d1 */ goto L_004957d1;
L_004958a1:; BB(0x004958a1);
    /* 004958a1: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004958a6: push dword ptr [ebp + 0x488] */ { u32 v = R32((u32)(r_ebp+0x488u)); r_esp -= 4; W32(r_esp, v); }
    /* 004958ac: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x4958b1u); f_0048e9d4();
    /* 004958b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004958b4: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004958b8: fild dword ptr [esp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x60u)));
    /* 004958bc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004958be: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004958c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004958c4: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004958c9: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 004958cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004958ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004958cf: mov ecx, esi */ r_ecx = r_esi;
    /* 004958d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004958d2: push dword ptr [esp + 0x68] */ { u32 v = R32((u32)(r_esp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 004958d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004958d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004958d9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x4958dcu); call_ind(t); }
    /* 004958dc: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004958de:; BB(0x004958de);
    /* 004958de: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004958e1: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004958e3: jl 0x495795 */ if ((fS!=fO)) goto L_00495795;
L_004958e9:; BB(0x004958e9);
    /* 004958e9: mov eax, dword ptr [ebp + 0x64c] */ r_eax = R32((u32)(r_ebp+0x64cu));
    /* 004958ef: mov edx, dword ptr [ebp + 0x650] */ r_edx = R32((u32)(r_ebp+0x650u));
    /* 004958f5: mov edi, dword ptr [ebp + 0x654] */ r_edi = R32((u32)(r_ebp+0x654u));
    /* 004958fb: mov dword ptr [ebp + 0x4d0], eax */ W32((u32)(r_ebp+0x4d0u), r_eax);
    /* 00495901: mov dword ptr [ebp + 0x4d4], edx */ W32((u32)(r_ebp+0x4d4u), r_edx);
    /* 00495907: mov dword ptr [ebp + 0x4d8], edi */ W32((u32)(r_ebp+0x4d8u), r_edi);
    /* 0049590d: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495910: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00495911: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00495912: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495913: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00495914: ret  */ FN_RET(0x00495684); r_esp += 4; return;
L_00495915:; BB(0x00495915);
    /* 00495915: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00495917: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00495919: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049591b: jmp 0x4958de */ goto L_004958de;
L_0049591d:; BB(0x0049591d);
    /* 0049591d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049591f: mov edx, ebx */ r_edx = r_ebx;
    /* 00495921: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00495923: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 00495927: jmp 0x49588c */ goto L_0049588c;
}

void f_0049592c(void) /* sub_49592C */
{
    FN_ENTER(0x0049592c);
    /* 0049592c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049592d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049592e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049592f: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00495935: mov edi, ecx */ r_edi = r_ecx;
    /* 00495937: fld dword ptr [edi + 0x4e4] */ FPUSH(R_F32((u32)(r_edi+0x4e4u)));
    /* 0049593d: fcomp dword ptr [0x902acc] */ fx_compare(ST(0), R_F32((u32)(0x902accu))); FPOP();
    /* 00495943: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495945: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495946: je 0x495fa9 */ if (fZ) goto L_00495fa9;
L_0049594c:; BB(0x0049594c);
    /* 0049594c: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 00495952: lea eax, [edi + 0x5b0] */ r_eax = (u32)(r_edi+0x5b0u);
    /* 00495958: lea ebp, [edi + 0x5c8] */ r_ebp = (u32)(r_edi+0x5c8u);
    /* 0049595e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049595f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495960: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x495965u); f_00836208();
    /* 00495965: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00495968: fcomp dword ptr [0x902670] */ fx_compare(ST(0), R_F32((u32)(0x902670u))); FPOP();
    /* 0049596e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495970: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495971: jae 0x49597d */ if (!fC) goto L_0049597d;
L_00495973:; BB(0x00495973);
    /* 00495973: add esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049597a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049597b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049597c: ret  */ FN_RET(0x0049592c); r_esp += 4; return;
L_0049597d:; BB(0x0049597d);
    /* 0049597d: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00495981: mov eax, dword ptr [edi + 0x5b0] */ r_eax = R32((u32)(r_edi+0x5b0u));
    /* 00495987: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0049598b: mov eax, dword ptr [edi + 0x5b4] */ r_eax = R32((u32)(r_edi+0x5b4u));
    /* 00495991: mov edx, ebp */ r_edx = r_ebp;
    /* 00495993: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00495997: mov eax, dword ptr [edi + 0x5b8] */ r_eax = R32((u32)(r_edi+0x5b8u));
    /* 0049599d: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004959a1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4959a6u); f_0082ebac();
    /* 004959a6: fld dword ptr [0x902ac8] */ FPUSH(R_F32((u32)(0x902ac8u)));
    /* 004959ac: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004959b0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004959b2: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004959b6: fld dword ptr [edi + 0x4e4] */ FPUSH(R_F32((u32)(r_edi+0x4e4u)));
    /* 004959bc: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004959c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004959c2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004959c4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004959c6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004959c8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004959ca: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 004959ce: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004959d0: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 004959d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004959d6: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 004959da: fld dword ptr [edi + 0x5b0] */ FPUSH(R_F32((u32)(r_edi+0x5b0u)));
    /* 004959e0: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 004959e2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004959e4: fld dword ptr [edi + 0x5b4] */ FPUSH(R_F32((u32)(r_edi+0x5b4u)));
    /* 004959ea: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 004959ec: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004959ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004959f0: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 004959f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004959f4: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 004959f6: fld dword ptr [edi + 0x5b8] */ FPUSH(R_F32((u32)(r_edi+0x5b8u)));
    /* 004959fc: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 004959fe: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00495a00: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00495a02: fld dword ptr [edi + 0x5c8] */ FPUSH(R_F32((u32)(r_edi+0x5c8u)));
    /* 00495a08: fsub st(7) */ ST(0) = ST(0) - ST(7);
    /* 00495a0a: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00495a0c: faddp st(7) */ ST(7) = ST(7) + ST(0); FPOP();
    /* 00495a0e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00495a10: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00495a12: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00495a16: fld dword ptr [edi + 0x5cc] */ FPUSH(R_F32((u32)(r_edi+0x5ccu)));
    /* 00495a1c: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00495a1e: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00495a20: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00495a22: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00495a24: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00495a26: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00495a2a: fld dword ptr [edi + 0x5d0] */ FPUSH(R_F32((u32)(r_edi+0x5d0u)));
    /* 00495a30: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00495a32: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00495a34: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00495a36: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00495a38: jle 0x495fd3 */ if ((fZ||fS!=fO)) goto L_00495fd3;
L_00495a3e:; BB(0x00495a3e);
    /* 00495a3e: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00495a42: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00495a44: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00495a48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495a4a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00495a4e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00495a52: fldz  */ FPUSH(0.0);
    /* 00495a54: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00495a58: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
L_00495a5c:; BB(0x00495a5c);
    /* 00495a5c: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00495a63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00495a64: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x495a69u); f_0048e100();
    /* 00495a69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00495a6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495a6c: je 0x495f9a */ if (fZ) goto L_00495f9a;
L_00495a72:; BB(0x00495a72);
    /* 00495a72: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00495a76: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00495a7a: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00495a7e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00495a80: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00495a87: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 00495a8e: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00495a95: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 00495a9c: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 00495aa3: mov edx, dword ptr [esp + 0x8c] */ r_edx = R32((u32)(r_esp+0x8cu));
    /* 00495aaa: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 00495aae: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 00495ab2: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00495ab9: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00495abd: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00495ac1: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 00495ac5: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00495ac9: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00495acd: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 00495ad4: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00495ad8: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00495adc: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00495ae0: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00495ae4: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00495ae8: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00495aec: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00495af0: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00495af4: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00495af7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x495afcu); f_0082dcbc();
    /* 00495afc: fld dword ptr [0x902ac4] */ FPUSH(R_F32((u32)(0x902ac4u)));
    /* 00495b02: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00495b05: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00495b07: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00495b0e: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 00495b19: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x495b1eu); f_0082ddd8();
    /* 00495b1e: fld dword ptr [0x902ac4] */ FPUSH(R_F32((u32)(0x902ac4u)));
    /* 00495b24: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00495b26: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 00495b2d: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00495b31: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 00495b38: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x495b3du); f_0082ebac();
    /* 00495b3d: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 00495b41: lea edx, [esp + 0x90] */ r_edx = (u32)(r_esp+0x90u);
    /* 00495b48: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x495b4du); f_0082ebac();
    /* 00495b4d: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00495b51: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00495b55: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00495b59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00495b5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495b5d: mov esi, eax */ r_esi = r_eax;
    /* 00495b5f: mov edi, edx */ r_edi = r_edx;
L_00495b61:; BB(0x00495b61);
    /* 00495b61: mov ebp, dword ptr [esp + esi + 0x60] */ r_ebp = R32((u32)(r_esp+r_esi+0x60u));
    /* 00495b65: mov dword ptr [esp + 0x9c], ebp */ W32((u32)(r_esp+0x9cu), r_ebp);
    /* 00495b6c: mov ebp, dword ptr [esp + esi + 0x64] */ r_ebp = R32((u32)(r_esp+r_esi+0x64u));
    /* 00495b70: mov dword ptr [esp + 0xa0], ebp */ W32((u32)(r_esp+0xa0u), r_ebp);
    /* 00495b77: mov ebp, dword ptr [esp + esi + 0x68] */ r_ebp = R32((u32)(r_esp+r_esi+0x68u));
    /* 00495b7b: mov dword ptr [esp + 0xa4], ebp */ W32((u32)(r_esp+0xa4u), r_ebp);
    /* 00495b82: lea ebp, [esp + 0x54] */ r_ebp = (u32)(r_esp+0x54u);
    /* 00495b86: lea ecx, [esp + 0x9c] */ r_ecx = (u32)(r_esp+0x9cu);
    /* 00495b8d: lea ebp, [ebp + esi] */ r_ebp = (u32)(r_ebp+r_esi);
    /* 00495b91: mov edx, ebp */ r_edx = r_ebp;
    /* 00495b93: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495b98u); f_0082f9c4();
    /* 00495b98: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00495b9b: mov dword ptr [esp + 0xa0], 0 */ W32((u32)(r_esp+0xa0u), 0x0u);
    /* 00495ba6: mov edx, ebp */ r_edx = r_ebp;
    /* 00495ba8: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 00495baf: lea ecx, [esp + 0xa8] */ r_ecx = (u32)(r_esp+0xa8u);
    /* 00495bb6: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00495bb9: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 00495bc0: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00495bc3: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 00495bca: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495bcfu); f_0082f9c4();
    /* 00495bcf: mov dword ptr [esp + 0xa0], 0 */ W32((u32)(r_esp+0xa0u), 0x0u);
    /* 00495bda: lea ebp, [esp + 0x30] */ r_ebp = (u32)(r_esp+0x30u);
    /* 00495bde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00495bdf: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 00495be6: lea edx, [esp + 0xac] */ r_edx = (u32)(r_esp+0xacu);
    /* 00495bed: call 0x83a1f0 */ r_esp -= 4; W32(r_esp, 0x495bf2u); f_0083a1f0();
    /* 00495bf2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495bf4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00495bf6: jle 0x495c46 */ if ((fZ||fS!=fO)) goto L_00495c46;
L_00495bf8:; BB(0x00495bf8);
    /* 00495bf8: fld dword ptr [0x902acc] */ FPUSH(R_F32((u32)(0x902accu)));
    /* 00495bfe: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00495c02: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00495c04: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495c06: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495c07: jae 0x495c1e */ if (!fC) goto L_00495c1e;
L_00495c09:; BB(0x00495c09);
    /* 00495c09: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00495c0d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00495c0f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495c11: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495c13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495c15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495c16: jae 0x495fb3 */ if (!fC) goto L_00495fb3;
L_00495c1c:; BB(0x00495c1c);
    /* 00495c1c: jmp 0x495c4a */ goto L_00495c4a;
L_00495c1e:; BB(0x00495c1e);
    /* 00495c1e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00495c22: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00495c24: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495c26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495c27: jbe 0x495c3e */ if ((fC||fZ)) goto L_00495c3e;
L_00495c29:; BB(0x00495c29);
    /* 00495c29: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00495c2d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00495c2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495c31: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495c33: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495c35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495c36: jbe 0x495fc3 */ if ((fC||fZ)) goto L_00495fc3;
L_00495c3c:; BB(0x00495c3c);
    /* 00495c3c: jmp 0x495c4a */ goto L_00495c4a;
L_00495c3e:; BB(0x00495c3e);
    /* 00495c3e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495c40: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00495c44: jmp 0x495c4a */ goto L_00495c4a;
L_00495c46:; BB(0x00495c46);
    /* 00495c46: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
L_00495c4a:; BB(0x00495c4a);
    /* 00495c4a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00495c4e: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00495c51: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00495c54: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495c57: jl 0x495b61 */ if ((fS!=fO)) goto L_00495b61;
L_00495c5d:; BB(0x00495c5d);
    /* 00495c5d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00495c61: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00495c65: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00495c69: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00495c6e: push dword ptr [edi + 0x48c] */ { u32 v = R32((u32)(r_edi+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00495c74: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x495c79u); f_0048e9d4();
    /* 00495c79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00495c7c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00495c7f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00495c82: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00495c84: fstp dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0)); FPOP();
    /* 00495c8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00495c8d: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00495c92: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 00495c99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495c9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495c9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00495c9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495c9e: push dword ptr [esp + 0xc4] */ { u32 v = R32((u32)(r_esp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00495ca5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495ca7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00495ca8: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x495cabu); call_ind(t); }
    /* 00495cab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495cad: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00495cb1: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00495cb5: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00495cb9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00495cbb: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 00495cc2: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00495cc9: fstp dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0)); FPOP();
    /* 00495cd0: lea ecx, [esp + 0xbc] */ r_ecx = (u32)(r_esp+0xbcu);
    /* 00495cd7: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00495cdb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495ce0u); f_0082f9c4();
    /* 00495ce0: fld dword ptr [0x902ac8] */ FPUSH(R_F32((u32)(0x902ac8u)));
    /* 00495ce6: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00495cea: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00495cee: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00495cf2: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00495cf6: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00495cf9: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00495cfc: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00495cff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495d01: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00495d03: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00495d05: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00495d07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495d09: fstp dword ptr [esp + 0xd4] */ W_F32((u32)(r_esp+0xd4u), ST(0)); FPOP();
    /* 00495d10: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00495d17: mov dword ptr [esp + 0xc0], 0 */ W32((u32)(r_esp+0xc0u), 0x0u);
    /* 00495d22: mov dword ptr [esp + 0xcc], 0 */ W32((u32)(r_esp+0xccu), 0x0u);
    /* 00495d2d: mov dword ptr [esp + 0xc8], eax */ W32((u32)(r_esp+0xc8u), r_eax);
    /* 00495d34: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 00495d3b: mov dword ptr [esp + 0xd8], 0 */ W32((u32)(r_esp+0xd8u), 0x0u);
    /* 00495d46: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x495d4bu); f_0082dcbc();
    /* 00495d4b: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00495d4e: mov dword ptr [esp + 0xe4], 0 */ W32((u32)(r_esp+0xe4u), 0x0u);
    /* 00495d59: fchs  */ ST(0) = -ST(0);
    /* 00495d5b: fstp dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0)); FPOP();
    /* 00495d62: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x495d67u); f_0082ddd8();
    /* 00495d67: lea ecx, [esp + 0xbc] */ r_ecx = (u32)(r_esp+0xbcu);
    /* 00495d6e: fchs  */ ST(0) = -ST(0);
    /* 00495d70: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 00495d77: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x495d7cu); f_0083173c();
    /* 00495d7c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00495d80: lea edx, [esp + 0xc8] */ r_edx = (u32)(r_esp+0xc8u);
    /* 00495d87: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 00495d8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495d91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495d92: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x495d97u); f_0083a0dc();
    /* 00495d97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00495d9a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00495d9e: fmul dword ptr [0x902ac8] */ ST(0) = ST(0) * R_F32((u32)(0x902ac8u));
    /* 00495da4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00495da6: fcom dword ptr [0x902acc] */ fx_compare(ST(0), R_F32((u32)(0x902accu))); 
    /* 00495dac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495dae: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00495db2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495db3: jbe 0x495f9a */ if ((fC||fZ)) goto L_00495f9a;
L_00495db9:; BB(0x00495db9);
    /* 00495db9: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00495dbd: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00495dc1: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00495dc5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00495dc7: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 00495dce: fstp dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0)); FPOP();
    /* 00495dd5: fstp dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0)); FPOP();
    /* 00495ddc: lea ecx, [esp + 0xec] */ r_ecx = (u32)(r_esp+0xecu);
    /* 00495de3: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00495de7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495decu); f_0082f9c4();
    /* 00495dec: mov dword ptr [esp + 0xf0], 0 */ W32((u32)(r_esp+0xf0u), 0x0u);
    /* 00495df7: lea ecx, [esp + 0xec] */ r_ecx = (u32)(r_esp+0xecu);
    /* 00495dfe: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x495e03u); f_0083173c();
    /* 00495e03: fcomp dword ptr [0x902abc] */ fx_compare(ST(0), R_F32((u32)(0x902abcu))); FPOP();
    /* 00495e09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495e0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495e0c: jbe 0x495f9a */ if ((fC||fZ)) goto L_00495f9a;
L_00495e12:; BB(0x00495e12);
    /* 00495e12: lea ecx, [esp + 0xec] */ r_ecx = (u32)(r_esp+0xecu);
    /* 00495e19: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x495e1eu); f_0082df08();
    /* 00495e1e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495e20: fld dword ptr [esp + 0xec] */ FPUSH(R_F32((u32)(r_esp+0xecu)));
    /* 00495e27: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00495e2b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00495e2d: fld dword ptr [esp + 0xf4] */ FPUSH(R_F32((u32)(r_esp+0xf4u)));
    /* 00495e34: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00495e38: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00495e3c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00495e40: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00495e42: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00495e44: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00495e46: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 00495e4d: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 00495e54: fstp dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0)); FPOP();
    /* 00495e5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495e5d: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 00495e64: fstp dword ptr [esp + 0x100] */ W_F32((u32)(r_esp+0x100u), ST(0)); FPOP();
    /* 00495e6b: lea ecx, [esp + 0xf8] */ r_ecx = (u32)(r_esp+0xf8u);
    /* 00495e72: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00495e75: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00495e79: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495e7eu); f_0082f9c4();
    /* 00495e7e: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00495e82: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00495e86: mov dword ptr [esp + 0x104], eax */ W32((u32)(r_esp+0x104u), r_eax);
    /* 00495e8d: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00495e91: mov dword ptr [esp + 0xfc], 0 */ W32((u32)(r_esp+0xfcu), 0x0u);
    /* 00495e9c: mov dword ptr [esp + 0x108], eax */ W32((u32)(r_esp+0x108u), r_eax);
    /* 00495ea3: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00495ea7: mov dword ptr [esp + 0x10c], eax */ W32((u32)(r_esp+0x10cu), r_eax);
    /* 00495eae: lea ecx, [esp + 0x104] */ r_ecx = (u32)(r_esp+0x104u);
    /* 00495eb5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x495ebau); f_0082f9c4();
    /* 00495eba: mov dword ptr [esp + 0x108], 0 */ W32((u32)(r_esp+0x108u), 0x0u);
    /* 00495ec5: lea ecx, [esp + 0xf8] */ r_ecx = (u32)(r_esp+0xf8u);
    /* 00495ecc: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x495ed1u); f_0083173c();
    /* 00495ed1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00495ed5: lea ecx, [esp + 0x104] */ r_ecx = (u32)(r_esp+0x104u);
    /* 00495edc: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x495ee1u); f_0083173c();
    /* 00495ee1: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00495ee5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00495ee7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495ee9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495eea: jbe 0x495f0e */ if ((fC||fZ)) goto L_00495f0e;
L_00495eec:; BB(0x00495eec);
    /* 00495eec: fld dword ptr [esp + 0xec] */ FPUSH(R_F32((u32)(r_esp+0xecu)));
    /* 00495ef3: fld dword ptr [esp + 0xf4] */ FPUSH(R_F32((u32)(r_esp+0xf4u)));
    /* 00495efa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00495efc: fchs  */ ST(0) = -ST(0);
    /* 00495efe: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 00495f05: fchs  */ ST(0) = -ST(0);
    /* 00495f07: fstp dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0)); FPOP();
L_00495f0e:; BB(0x00495f0e);
    /* 00495f0e: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00495f12: lea ecx, [esp + 0xec] */ r_ecx = (u32)(r_esp+0xecu);
    /* 00495f19: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x495f1eu); f_0082ebac();
    /* 00495f1e: lea eax, [esp + 0xec] */ r_eax = (u32)(r_esp+0xecu);
    /* 00495f25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495f27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495f28: mov ecx, edi */ r_ecx = r_edi;
    /* 00495f2a: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x495f2fu); f_007b4c58();
    /* 00495f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495f31: jne 0x495f89 */ if (!fZ) goto L_00495f89;
L_00495f33:; BB(0x00495f33);
    /* 00495f33: mov dword ptr [esp + 0xf0], 0 */ W32((u32)(r_esp+0xf0u), 0x0u);
    /* 00495f3e: lea ecx, [esp + 0xec] */ r_ecx = (u32)(r_esp+0xecu);
    /* 00495f45: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x495f4au); f_0083173c();
    /* 00495f4a: fcomp dword ptr [0x902abc] */ fx_compare(ST(0), R_F32((u32)(0x902abcu))); FPOP();
    /* 00495f50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00495f52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00495f53: jbe 0x495f9a */ if ((fC||fZ)) goto L_00495f9a;
L_00495f55:; BB(0x00495f55);
    /* 00495f55: lea ecx, [esp + 0xec] */ r_ecx = (u32)(r_esp+0xecu);
    /* 00495f5c: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x495f61u); f_0082df08();
    /* 00495f61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495f63: fld dword ptr [0x90266c] */ FPUSH(R_F32((u32)(0x90266cu)));
    /* 00495f69: fld dword ptr [esp + 0xec] */ FPUSH(R_F32((u32)(r_esp+0xecu)));
    /* 00495f70: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00495f72: fld dword ptr [esp + 0xf4] */ FPUSH(R_F32((u32)(r_esp+0xf4u)));
    /* 00495f79: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00495f7b: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 00495f82: fstp dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0)); FPOP();
L_00495f89:; BB(0x00495f89);
    /* 00495f89: lea eax, [esp + 0xec] */ r_eax = (u32)(r_esp+0xecu);
    /* 00495f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495f91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f92: call 0x48dbf4 */ r_esp -= 4; W32(r_esp, 0x495f97u); f_0048dbf4();
    /* 00495f97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00495f9a:; BB(0x00495f9a);
    /* 00495f9a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00495f9d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495f9f: jl 0x495a5c */ if ((fS!=fO)) goto L_00495a5c;
L_00495fa5:; BB(0x00495fa5);
    /* 00495fa5: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00495fa9:; BB(0x00495fa9);
    /* 00495fa9: add esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00495faf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00495fb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00495fb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00495fb2: ret  */ FN_RET(0x0049592c); r_esp += 4; return;
L_00495fb3:; BB(0x00495fb3);
    /* 00495fb3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495fb5: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00495fb9: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00495fbd: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00495fc1: jmp 0x495f9a */ goto L_00495f9a;
L_00495fc3:; BB(0x00495fc3);
    /* 00495fc3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495fc5: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00495fc9: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00495fcd: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00495fd1: jmp 0x495f9a */ goto L_00495f9a;
L_00495fd3:; BB(0x00495fd3);
    /* 00495fd3: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00495fd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495fd7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495fd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00495fdb: jmp 0x495fa9 */ goto L_00495fa9;
}

void f_00495fe0(void) /* sub_495FE0 */
{
    FN_ENTER(0x00495fe0);
    /* 00495fe0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00495fe3: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00495fe9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495feb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00495fed: jle 0x49609e */ if ((fZ||fS!=fO)) goto L_0049609e;
L_00495ff3:; BB(0x00495ff3);
    /* 00495ff3: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00495ff7: mov ebx, eax */ r_ebx = r_eax;
    /* 00495ff9: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00495ffd: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00496001: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00496005: mov ebp, edx */ r_ebp = r_edx;
    /* 00496007: mov esi, ecx */ r_esi = r_ecx;
L_00496009:; BB(0x00496009);
    /* 00496009: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00496010: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00496011: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x496016u); f_0048e100();
    /* 00496016: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00496017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496019: je 0x496083 */ if (fZ) goto L_00496083;
L_0049601b:; BB(0x0049601b);
    /* 0049601b: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0049601e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00496026: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00496029: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049602c: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0049602f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00496033: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x496038u); f_0083173c();
    /* 00496038: fcomp dword ptr [0x902674] */ fx_compare(ST(0), R_F32((u32)(0x902674u))); FPOP();
    /* 0049603e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00496040: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00496041: ja 0x496083 */ if ((!fC&&!fZ)) goto L_00496083;
L_00496043:; BB(0x00496043);
    /* 00496043: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00496048: push dword ptr [esi + 0x490] */ { u32 v = R32((u32)(r_esi+0x490u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049604e: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x496053u); f_0048e9d4();
    /* 00496053: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00496056: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00496058: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049605c: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00496060: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00496064: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0049606c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00496071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496073: mov ecx, edi */ r_ecx = r_edi;
    /* 00496075: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00496077: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049607b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049607d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049607e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x496081u); call_ind(t); }
    /* 00496081: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00496083:; BB(0x00496083);
    /* 00496083: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00496086: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00496088: jl 0x496009 */ if ((fS!=fO)) goto L_00496009;
L_0049608e:; BB(0x0049608e);
    /* 0049608e: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00496092: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00496096: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0049609a: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_0049609e:; BB(0x0049609e);
    /* 0049609e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004960a1: ret  */ FN_RET(0x00495fe0); r_esp += 4; return;
}

